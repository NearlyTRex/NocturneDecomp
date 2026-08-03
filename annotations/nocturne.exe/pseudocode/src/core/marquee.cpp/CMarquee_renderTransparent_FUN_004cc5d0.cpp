// Name: core_marquee.cpp_CMarquee_renderTransparent_FUN_004cc5d0
// Address: 004cc5d0
// Address Range: [[004cc5d0, 004cc86d]]
// Convention: unknown
// Signature: undefined4 core_marquee_cpp_CMarquee_renderTransparent_FUN_004cc5d0(CMarquee *param_1)

#include "nocturne.h"

uint core_marquee_cpp_CMarquee_renderTransparent_FUN_004cc5d0(CMarquee *param_1)

{
  CCourse *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  byte local_94 [12];
  float local_88;
  float local_84;
  CVector3f local_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f local_5c;
  byte local_4c [24];
  CVector3f local_34;
  float local_28;
  float local_24;
  int local_20;
  CCourse *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_1->is_visible != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005badbc);
    this_ptr = &param_1->course;
    if (g_CDemonMission_PTR_005baf90->is_in_editor == 0) {
      if (param_1->type == 1) {
        dVar4 = round((double)param_1->param);
        iVar2 = (int)ROUND(dVar4);
        iVar3 = 0;
        local_14 = iVar2;
        if (0 < iVar2) {
          do {
            local_28 = (float)iVar3;
            local_10 = iVar3;
            core_course_cpp_CCourse_evaluate_FUN_0043b800(this_ptr,local_28,&CStack_68,&local_80);
            pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                               (&param_1->base,&CStack_74,&CStack_68);
            if (&CStack_68 != pCVar1) {
              CStack_68.x = pCVar1->x;
              CStack_68.y = pCVar1->y;
              CStack_68.z = pCVar1->z;
            }
            iVar3 = iVar3 + 1;
            core_marquee_cpp_CMarquee_renderLightBulb_FUN_004cc440(param_1,&CStack_68);
          } while (iVar3 < iVar2);
        }
      }
      else if (param_1->type == 0) {
        dVar4 = round((double)param_1->param);
        local_18 = (CCourse *)this_ptr->len;
        iVar3 = 0;
        iVar2 = (int)ROUND(dVar4);
        local_20 = iVar2;
        if (0 < (int)local_18) {
          do {
            if (iVar2 % param_1->phase != 0) {
              local_24 = (float)iVar3;
              local_10 = iVar3;
              core_course_cpp_CCourse_evaluate_FUN_0043b800
                        (this_ptr,local_24,(CVector3f *)(local_94 + 8),&local_5c);
              pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 (&param_1->base,(CVector3f *)(local_4c + 8),
                                  (CVector3f *)(local_94 + 8));
              if ((CVector3f *)(local_94 + 8) != pCVar1) {
                local_94._8_4_ = pCVar1->x;
                local_88 = pCVar1->y;
                local_84 = pCVar1->z;
              }
              core_marquee_cpp_CMarquee_renderLightBulb_FUN_004cc440
                        (param_1,(CVector3f *)(local_94 + 8));
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar3 < (int)local_18);
        }
      }
    }
    else {
      iVar2 = this_ptr->len;
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          local_18 = this_ptr;
          local_28 = (float)iVar3;
          local_c = iVar3;
          core_course_cpp_CCourse_evaluate_FUN_0043b800
                    (local_18,local_28,(CVector3f *)local_4c,(CVector3f *)local_94);
          pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (&param_1->base,&local_34,(CVector3f *)local_4c);
          if ((CVector3f *)local_4c != pCVar1) {
            local_4c._0_4_ = pCVar1->x;
            local_4c._4_4_ = pCVar1->y;
            local_4c._8_4_ = pCVar1->z;
          }
          iVar3 = iVar3 + 1;
          core_marquee_cpp_CMarquee_renderLightBulb_FUN_004cc440(param_1,(CVector3f *)local_4c);
          this_ptr = local_18;
        } while (iVar3 < iVar2);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
    return 1;
  }
  return 0;
}
