#ifndef __ARMATURE_BTN__
#define __ARMATURE_BTN__

#include "Widget.h"
#include "cocostudio/CCArmature.h"

using namespace cocostudio;

NS_CC_WIDGET_BEGIN

class ArmatureBtn : public Armature, public CWidget, public CClickableProtocol
{
public:

	ArmatureBtn();
	static ArmatureBtn *create(const char *name);

public:
	
	virtual CWidgetTouchModel onTouchBegan(Touch *pTouch);
	virtual void onTouchEnded(Touch *pTouch, float fDuration);
	
protected:
private:
};

NS_CC_WIDGET_END

#endif