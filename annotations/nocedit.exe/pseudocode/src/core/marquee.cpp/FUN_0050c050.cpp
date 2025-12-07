// Name: core_marquee.cpp_FUN_0050c050
// Address: 0050c050
// Address Range: [[0050c050, 0050c2ed]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050c050()

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050c050(uint param_1) */

uint core_marquee_cpp_FUN_0050c050(void)

{
  float fVar1;
  float *this_ptr;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int iVar4;
  double dVar5;
  CDemonActor *in_stack_00000004;
  byte local_7c [8];
  float fStack_74;
  float local_70;
  CVector3f local_64;
  byte local_58 [8];
  float fStack_50;
  float local_4c;
  byte local_40 [8];
  float fStack_38;
  CVector3f local_34;
  CVector3f local_28;
  float local_1c;
  float local_18;
  int local_14;
  CCourse *local_10;
  float *local_c;
  
  if (in_stack_00000004[1].orient_matrix.m[0].z != 0.0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067d150)
    ;
    this_ptr = &in_stack_00000004[1].orient_matrix.m[1].y;
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
      fVar1 = in_stack_00000004[1].orient_matrix.m[1].x;
      if (fVar1 == 1.4013e-45) {
        dVar5 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004[1].location.position.y);
        iVar3 = 0;
        if (0 < (int)ROUND(dVar5)) {
          do {
            local_1c = (float)iVar3;
            core_course_cpp_CCourse_FUN_00442710((CCourse *)this_ptr);
            pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (in_stack_00000004,&local_64,(CVector3f *)local_58);
            if ((CVector3f *)(local_58 + 4) != pCVar2) {
              local_58._4_4_ = pCVar2->x;
              fStack_50 = pCVar2->y;
              local_4c = pCVar2->z;
            }
            iVar3 = iVar3 + 1;
            core_marquee_cpp_FUN_0050bec0();
          } while (iVar3 < (int)ROUND(dVar5));
        }
      }
      else if (fVar1 == 0.0) {
        dVar5 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004[1].location.position.y);
        local_c = (float *)*this_ptr;
        iVar4 = 0;
        iVar3 = (int)ROUND(dVar5);
        local_14 = iVar3;
        if (0 < (int)local_c) {
          do {
            if (iVar3 % (int)in_stack_00000004[1].location.position.z != 0) {
              local_18 = (float)iVar4;
              core_course_cpp_CCourse_FUN_00442710((CCourse *)this_ptr);
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (in_stack_00000004,&local_34,(CVector3f *)local_7c);
              if ((CVector3f *)(local_7c + 4) != pCVar2) {
                local_7c._4_4_ = pCVar2->x;
                fStack_74 = pCVar2->y;
                local_70 = pCVar2->z;
              }
              core_marquee_cpp_FUN_0050bec0();
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar4 < (int)local_c);
        }
      }
    }
    else {
      fVar1 = *this_ptr;
      iVar3 = 0;
      if (0 < (int)fVar1) {
        do {
          local_c = this_ptr;
          local_28.z = (float)iVar3;
          core_course_cpp_CCourse_FUN_00442710(local_10);
          pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (in_stack_00000004,&local_28,(CVector3f *)local_40);
          if ((CVector3f *)(local_40 + 4) != pCVar2) {
            local_40._4_4_ = pCVar2->x;
            fStack_38 = pCVar2->y;
            local_34.x = pCVar2->z;
          }
          iVar3 = iVar3 + 1;
          core_marquee_cpp_FUN_0050bec0();
          this_ptr = local_c;
        } while (iVar3 < (int)fVar1);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    return 1;
  }
  return 0;
}
