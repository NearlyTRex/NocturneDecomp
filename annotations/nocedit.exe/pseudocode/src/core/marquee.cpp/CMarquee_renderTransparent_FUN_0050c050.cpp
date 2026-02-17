// Name: core_marquee.cpp_CMarquee_renderTransparent_FUN_0050c050
// Address: 0050c050
// Address Range: [[0050c050, 0050c2ed]]
// Convention: __cdecl
// Signature: int __cdecl core_marquee_cpp_CMarquee_renderTransparent_FUN_0050c050(CMarquee *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_marquee_cpp_CMarquee_renderTransparent_FUN_0050c050(CMarquee *this_ptr)

{
  CCourse *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  CVector3f local_88 [2];
  CVector3f local_70;
  CVector3f local_64 [2];
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  CCourse *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(this_ptr->unk2 + 0x18) != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&SMRGLTextureBasic_0067d150);
    this_ptr_00 = (CCourse *)this_ptr->unk3;
    if (g_CDemonMissionPtr->is_in_editor == 0) {
      if (this_ptr->type == 1) {
        iVar2 = (int)ROUND(ROUND(this_ptr->param));
        iVar3 = 0;
        local_10 = iVar2;
        if (0 < iVar2) {
          do {
            local_24 = (float)iVar3;
            local_c = iVar3;
            core_course_cpp_CCourse_FUN_00442710(this_ptr_00);
            pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (&this_ptr->base,&local_70,local_64);
            if (local_64 != pCVar1) {
              local_64[0].x = pCVar1->x;
              local_64[0].y = pCVar1->y;
              local_64[0].z = pCVar1->z;
            }
            iVar3 = iVar3 + 1;
            core_marquee_cpp_CMarquee_FUN_0050bec0(this_ptr);
          } while (iVar3 < iVar2);
        }
      }
      else if (this_ptr->type == 0) {
        local_14 = *(int *)this_ptr_00;
        iVar3 = 0;
        iVar2 = (int)ROUND(ROUND(this_ptr->param));
        local_1c = iVar2;
        if (0 < local_14) {
          do {
            if (iVar2 % this_ptr->phase != 0) {
              local_20 = (float)iVar3;
              local_c = iVar3;
              core_course_cpp_CCourse_FUN_00442710(this_ptr_00);
              pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (&this_ptr->base,&local_40,local_88);
              if (local_88 != pCVar1) {
                local_88[0].x = pCVar1->x;
                local_88[0].y = pCVar1->y;
                local_88[0].z = pCVar1->z;
              }
              core_marquee_cpp_CMarquee_FUN_0050bec0(this_ptr);
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar3 < local_14);
        }
      }
    }
    else {
      iVar2 = *(int *)this_ptr_00;
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          local_18 = this_ptr_00;
          local_28 = (float)iVar3;
          local_c = iVar3;
          core_course_cpp_CCourse_FUN_00442710(local_18);
          pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (&this_ptr->base,&local_34,&local_4c);
          if (&local_4c != pCVar1) {
            local_4c.x = pCVar1->x;
            local_4c.y = pCVar1->y;
            local_4c.z = pCVar1->z;
          }
          iVar3 = iVar3 + 1;
          core_marquee_cpp_CMarquee_FUN_0050bec0(this_ptr);
          this_ptr_00 = local_18;
        } while (iVar3 < iVar2);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    return 1;
  }
  return 0;
}
