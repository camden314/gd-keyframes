// Copyright 2021 camden314
#pragma once
#include <Cacao.hpp>
using namespace cocos2d;

class ConnectorNode : public CCDrawNode {
 protected:
    void updateDraw(CCObject* sender);
    int getIndex();
 public:
 	static CCArray* connectorPool;
 	static ConnectorNode* findFromSource(GameObject* src);
    static ConnectorNode* create(GameObject* dest, GameObject* src);
    GameObject* getDestinationObject();
    GameObject* getSourceObject();
    CCLabelBMFont* getIndexLabel();
    bool getDotEnabled();
    void setDotEnabled(bool set);

    void destroy();
};
