// Name: core_marquee.cpp_CMarquee_renderTransparent_FUN_004cc5d0
// Address: 004cc5d0
// Address Range: [[004cc5d0, 004cc86d]]
// Convention: unknown
// Signature: undefined4 core_marquee_cpp_CMarquee_renderTransparent_FUN_004cc5d0(int param_1)

#include "nocturne.h"

uint core_marquee_cpp_CMarquee_renderTransparent_FUN_004cc5d0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  uint uVar6;
  byte local_94 [8];
  uint uStack_8c;
  uint local_88;
  uint local_84;
  byte local_80 [12];
  byte auStack_74 [12];
  uint uStack_68;
  uint local_64;
  uint local_60;
  byte local_5c [16];
  uint local_4c;
  uint local_48;
  uint local_44 [4];
  byte local_34 [12];
  float local_28;
  float local_24;
  int local_20;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x194) != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005badbc);
    piVar1 = (int *)(param_1 + 0x19c);
    if (*(int *)(0x01CC9450 + 4) == 0) {
      if (*(int *)(param_1 + 0x198) == 1) {
        uVar6 = 0x4cc709;
        fVar5 = (float10)round((float10)*(float *)(param_1 + 0x174));
        iVar3 = (int)ROUND(fVar5);
        iVar4 = 0;
        local_14 = iVar3;
        if (0 < iVar3) {
          do {
            local_28 = (float)iVar4;
            local_10 = iVar4;
            core_course_cpp_CCourse_evaluate_FUN_0043b800(piVar1,local_28,&uStack_68,local_80,uVar6)
            ;
            puVar2 = (uint *)
                     core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                               (param_1,auStack_74,&uStack_68);
            if (&uStack_68 != puVar2) {
              uStack_68 = *puVar2;
              local_64 = puVar2[1];
              local_60 = puVar2[2];
            }
            iVar4 = iVar4 + 1;
            FUN_004cc440(param_1,&uStack_68);
          } while (iVar4 < iVar3);
        }
      }
      else if (*(int *)(param_1 + 0x198) == 0) {
        uVar6 = 0x4cc7b2;
        fVar5 = (float10)round((float10)*(float *)(param_1 + 0x174));
        local_18 = (int *)*piVar1;
        iVar4 = 0;
        iVar3 = (int)ROUND(fVar5);
        local_20 = iVar3;
        if (0 < (int)local_18) {
          do {
            if (iVar3 % *(int *)(param_1 + 0x178) != 0) {
              local_24 = (float)iVar4;
              local_10 = iVar4;
              core_course_cpp_CCourse_evaluate_FUN_0043b800
                        (piVar1,local_24,&uStack_8c,local_5c,uVar6);
              puVar2 = (uint *)
                       core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 (param_1,local_44,&uStack_8c);
              if (&uStack_8c != puVar2) {
                uStack_8c = *puVar2;
                local_88 = puVar2[1];
                local_84 = puVar2[2];
              }
              FUN_004cc440(param_1,&uStack_8c);
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar4 < (int)local_18);
        }
      }
    }
    else {
      iVar3 = *piVar1;
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          local_18 = piVar1;
          local_28 = (float)iVar4;
          local_c = iVar4;
          core_course_cpp_CCourse_evaluate_FUN_0043b800(local_18,local_28,&local_4c,local_94);
          puVar2 = (uint *)
                   core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (param_1,local_34,&local_4c);
          if (&local_4c != puVar2) {
            local_4c = *puVar2;
            local_48 = puVar2[1];
            local_44[0] = puVar2[2];
          }
          iVar4 = iVar4 + 1;
          FUN_004cc440(param_1,&local_4c);
          piVar1 = local_18;
        } while (iVar4 < iVar3);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
    return 1;
  }
  return 0;
}
