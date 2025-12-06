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
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  CCourse *unaff_EBP;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  CDemonActor *in_stack_00000004;
  byte auStack_74 [8];
  float fStack_6c;
  float fStack_68;
  CVector3f local_5c;
  byte auStack_50 [8];
  float local_48;
  float local_44;
  byte auStack_38 [8];
  float fStack_30;
  CVector3f CStack_2c;
  CVector3f local_20;
  float local_14;
  float local_10;
  float *local_c;
  
  if (in_stack_00000004[1].orient_matrix.m[0].z != 0.0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067d150)
    ;
    pfVar3 = &in_stack_00000004[1].orient_matrix.m[1].y;
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
      fVar1 = in_stack_00000004[1].orient_matrix.m[1].x;
      if (fVar1 == 1.4013e-45) {
        fVar6 = (float10)in_stack_00000004[1].location.position.y;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(1,pfVar3));
        iVar4 = 0;
        if (0 < (int)ROUND(fVar6)) {
          do {
            local_14 = (float)iVar4;
            core_course_cpp_CCourse_FUN_00442710(SUB84 /* extract 2-byte value */(dVar7,0));
            pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (in_stack_00000004,&local_5c,(CVector3f *)auStack_50);
            if ((CVector3f *)(auStack_50 + 4) != pCVar2) {
              auStack_50._4_4_ = pCVar2->x;
              local_48 = pCVar2->y;
              local_44 = pCVar2->z;
            }
            iVar4 = iVar4 + 1;
            core_marquee_cpp_FUN_0050bec0();
          } while (iVar4 < (int)ROUND(fVar6));
        }
      }
      else if (fVar1 == 0.0) {
        fVar6 = (float10)in_stack_00000004[1].location.position.y;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)ZEXT48(pfVar3));
        iVar4 = SUB84 /* extract 2-byte value */(dVar7,0)->len;
        iVar5 = 0;
        pfVar3 = (float *)(int)ROUND(fVar6);
        local_c = pfVar3;
        if (0 < iVar4) {
          do {
            if ((int)pfVar3 % (int)in_stack_00000004[1].location.position.z != 0) {
              local_10 = (float)iVar5;
              core_course_cpp_CCourse_FUN_00442710(SUB84 /* extract 2-byte value */(dVar7,0));
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (in_stack_00000004,&CStack_2c,(CVector3f *)auStack_74);
              if ((CVector3f *)(auStack_74 + 4) != pCVar2) {
                auStack_74._4_4_ = pCVar2->x;
                fStack_6c = pCVar2->y;
                fStack_68 = pCVar2->z;
              }
              core_marquee_cpp_FUN_0050bec0();
            }
            iVar5 = iVar5 + 1;
            pfVar3 = (float *)((int)pfVar3 + 1);
          } while (iVar5 < iVar4);
        }
      }
    }
    else {
      fVar1 = *pfVar3;
      iVar4 = 0;
      if (0 < (int)fVar1) {
        do {
          local_c = pfVar3;
          local_20.z = (float)iVar4;
          core_course_cpp_CCourse_FUN_00442710(unaff_EBP);
          pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (in_stack_00000004,&local_20,(CVector3f *)auStack_38);
          if ((CVector3f *)(auStack_38 + 4) != pCVar2) {
            auStack_38._4_4_ = pCVar2->x;
            fStack_30 = pCVar2->y;
            CStack_2c.x = pCVar2->z;
          }
          iVar4 = iVar4 + 1;
          core_marquee_cpp_FUN_0050bec0();
          pfVar3 = local_c;
        } while (iVar4 < (int)fVar1);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    return 1;
  }
  return 0;
}
