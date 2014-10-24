//
//  NavBarView.h
//  GoldsprintsFX
//
//  Created by Grampa Charlie on 10/24/14.
//
//

#pragma once

#include "cinder/app/AppNative.h"
#include "cinder/gl/Texture.h"

#include "GFXGlobal.h"
#include "StateManager.h"

namespace gfx {

    struct NavIcon {
        NavIcon( ci::gl::TextureRef tex_, ci::Rectf rect_, bool bActive_, gfx::GFX_STATE state_ ){
            rect = rect_;
            tex = tex_;
            bActive = bActive_;
            state = state_;
        }
        
        ci::Rectf rect;
        ci::gl::TextureRef tex;
        bool bActive;
        gfx::GFX_STATE state;
    };
    
    class NavBarView {
      public:
        NavBarView();
        void setup();
        void draw();
        
        void mouseUp( cinder::app::MouseEvent event );
        
      private:
        ci::gl::TextureRef mFlagTex, mRosterTex, mSettingsTex;
        ci::Rectf   mFlagRect, mRosterRect, mSettingsRect;
        
        std::vector<NavIcon>    mIconList;
        
        int activeIcon;
    };

}