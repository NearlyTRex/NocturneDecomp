// Name: core_bugs.cpp_FUN_00423790
// Address: 00423790
// Address Range: [[00423790, 00423a4c]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_00423790(int param_1,undefined4 param_2)

#include "nocturne.h"

void core_bugs_cpp_FUN_00423790(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = g_CHeroActorType_01cae0ec.name_hash;
  *(uint *)(param_1 + 0x12964) = 0;
  *(uint *)(param_1 + 0x12960) = 0;
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(param_2,uVar1);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x12964) = iVar2 + 0x150;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(param_2,g_CEnemyActorType_01bcdebc.name_hash);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x23b0) != '\0')) {
    *(int *)(param_1 + 0x12964) = iVar2 + 0x150;
  }
  if (*(int *)(param_1 + 0x12964) != 0) {
    *(uint *)(param_1 + 0xbd24) = 1;
    *(uint *)(param_1 + 0x12960) = param_2;
    iVar2 = *(int *)(*(int *)(param_1 + 0x12960) + 100);
    *(uint *)(param_1 + 0x12998) = 0;
    *(int *)(param_1 + 100) = iVar2 + 1;
    do {
      iVar3 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                        (*(uint *)(param_1 + 0x12964));
      iVar2 = *(int *)(param_1 + 0x12998);
      if (*(int *)(iVar3 + 0x2c + iVar2 * 4) < 0x2bd) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s swarming on %s at LOD %d\n",param_1,param_2,iVar2);
        iVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                          (*(uint *)(param_1 + 0x12964));
        core_bugs_cpp_FUN_004219f0
                  (param_1,*(uint *)(iVar2 + 0x54 + *(int *)(param_1 + 0x12998) * 4),
                   *(uint *)(iVar2 + 0x7c + *(int *)(param_1 + 0x12998) * 4));
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
                  (*(uint *)(param_1 + 0x12964),*(uint *)(param_1 + 0x12998));
        iVar3 = 0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x12964) + 0x2234);
        if (0 < *(int *)(param_1 + 0x1299c)) {
          iVar6 = 0;
          do {
            *(int *)((int)&DAT_00764d98 + iVar6) = iVar3;
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar3 < *(int *)(param_1 + 0x1299c));
        }
        for (iVar3 = *(int *)(param_1 + 0x1299c) + -2; -1 < iVar3; iVar3 = iVar3 + -1) {
          if (-1 < iVar3) {
            iVar6 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_00764d9c + iVar6) * 0xc + 4 + iVar2) <
                  *(int *)(*(int *)((int)&DAT_00764d98 + iVar6) * 0xc + 4 + iVar2)) {
                uVar4 = *(uint *)((int)&DAT_00764d98 + iVar6);
                *(uint *)((int)&DAT_00764d98 + iVar6) =
                     *(uint *)((int)&DAT_00764d9c + iVar6);
                *(uint *)((int)&DAT_00764d9c + iVar6) = uVar4;
              }
              iVar6 = iVar6 + 4;
            } while (iVar6 <= iVar3 * 4);
          }
        }
        iVar3 = *(int *)(iVar2 + 4 + DAT_00764d98 * 0xc);
        iVar8 = 0;
        iVar7 = 0;
        iVar6 = param_1;
        if (*(int *)(param_1 + 0xbd28) < 1) {
          return;
        }
        do {
          *(uint *)(iVar6 + 0xbd58) = 0xffffffff;
          *(int *)(iVar6 + 0xbd5c) = (&DAT_00764d98)[iVar8];
          uVar4 = core_actor_cpp_getRandomInt_FUN_0040de00
                            (0,(int)(CONCAT44(*(int *)(param_1 + 0x1299c) >> 0x1f,
                                              *(uint *)(param_1 + 0x1299c)) / 0xf));
          *(uint *)(iVar6 + 0xbd68) = uVar4;
          iVar8 = iVar8 + 1;
          if ((*(int *)(param_1 + 0x1299c) <= iVar8) ||
             (iVar3 + 0x2a < *(int *)(iVar2 + 4 + (&DAT_00764d98)[iVar8] * 0xc))) {
            iVar8 = 0;
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x40;
        } while (iVar7 < *(int *)(param_1 + 0xbd28));
        return;
      }
      *(int *)(param_1 + 0x12998) = iVar2 + 1;
      piVar5 = (int *)core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                                (*(uint *)(param_1 + 0x12964));
    } while (*(int *)(param_1 + 0x12998) < *piVar5);
    *(uint *)(param_1 + 0x12964) = 0;
  }
  return;
}
