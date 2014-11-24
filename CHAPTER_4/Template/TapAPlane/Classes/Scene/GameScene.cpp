#include "GameScene.h"

USING_NS_CC;

Scene* GameScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GameScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool GameScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    auto bg = Sprite:create("GsmeBckground.png");
    bg->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    this->addChild(bg,-1);
    
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile
        ("GameSprites.plist","GameSprite.png");
        playerSprite = Sprite::createWithSpriteFrameName("planeBlue1.png");
          playerSprite ->setPosition(Point(visibleSiza.width * 0.2 + origin.x, visibleSize.height/2 + origin.y));
          this->addChild(playerSprite);
          
    return true;
}
