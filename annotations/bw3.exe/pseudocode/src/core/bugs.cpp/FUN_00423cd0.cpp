// Name: core_bugs.cpp_FUN_00423cd0
// Address: 00423cd0
// Address Range: [[00423cd0, 00423fac]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00423cd0(CBugs *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_bugs_cpp_FUN_00423cd0(CBugs *this_ptr,CDemonActor *target)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CBugs *pCVar9;
  
  uVar2 = g_CHeroClassInfo.name_hash;
  *(uint *)&this_ptr->field_0x13820 = 0;
  *(uint *)&this_ptr->field_0x1381c = 0;
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840(target,uVar2);
  if (iVar3 != 0) {
    *(int *)&this_ptr->field_0x13820 = iVar3 + 0x158;
  }
  iVar3 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c840(target,g_CEnemyClassInfo.name_hash);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x24a8) != '\0')) {
    *(int *)&this_ptr->field_0x13820 = iVar3 + 0x158;
  }
  if (*(int *)&this_ptr->field_0x13820 != 0) {
    *(uint *)&this_ptr->field_0xd054 = 1;
    *(CDemonActor **)&this_ptr->field_0x1381c = target;
    iVar3 = *(int *)(*(int *)&this_ptr->field_0x1381c + 100);
    *(uint *)&this_ptr->field_0x13854 = 0;
    *(int *)&this_ptr->field_0x64 = iVar3 + 1;
    core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
              (*(CDeformableModelInstance **)&this_ptr->field_0x13820);
    do {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                         (*(CDeformableModelInstance **)&this_ptr->field_0x13820);
      iVar3 = *(int *)&this_ptr->field_0x13854;
      if (*(int *)(&pCVar4->field_0x2c + iVar3 * 4) < 0x353) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,">%s swarming on %s at LOD %d\n" + 1,this_ptr,target,iVar3);
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                           (*(CDeformableModelInstance **)&this_ptr->field_0x13820);
        core_bugs_cpp_FUN_00421b00
                  (this_ptr,*(int *)(&pCVar4->field_0x54 + *(int *)&this_ptr->field_0x13854 * 4),
                   *(SInputFace **)(&pCVar4->field_0x7c + *(int *)&this_ptr->field_0x13854 * 4));
        core_skeleton_cpp_FUN_0054e420
                  (*(CDeformableModelInstance **)&this_ptr->field_0x13820,
                   *(int *)&this_ptr->field_0x13854);
        iVar5 = 0;
        iVar3 = *(int *)(*(int *)&this_ptr->field_0x13820 + 0x2324);
        if (0 < *(int *)&this_ptr->field_0x13858) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_007e1c94 + iVar7) = iVar5;
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar5 < *(int *)&this_ptr->field_0x13858);
        }
        for (iVar5 = *(int *)&this_ptr->field_0x13858 + -2; -1 < iVar5; iVar5 = iVar5 + -1) {
          if (-1 < iVar5) {
            iVar7 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_007e1c98 + iVar7) * 0xc + 4 + iVar3) <
                  *(int *)(*(int *)((int)&DAT_007e1c94 + iVar7) * 0xc + 4 + iVar3)) {
                uVar1 = *(uint *)((int)&DAT_007e1c94 + iVar7);
                *(uint *)((int)&DAT_007e1c94 + iVar7) =
                     *(uint *)((int)&DAT_007e1c98 + iVar7);
                *(uint *)((int)&DAT_007e1c98 + iVar7) = uVar1;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 <= iVar5 * 4);
          }
        }
        iVar5 = *(int *)(iVar3 + 4 + DAT_007e1c94 * 0xc);
        iVar8 = 0;
        iVar7 = 0;
        pCVar9 = this_ptr;
        if (*(int *)&this_ptr->field_0xd058 < 1) {
          return;
        }
        do {
          *(uint *)&pCVar9->field_0xd088 = 0xffffffff;
          *(int *)&pCVar9->field_0xd08c = (&DAT_007e1c94)[iVar8];
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0
                            (0,(int)(CONCAT44(*(int *)&this_ptr->field_0x13858 >> 0x1f,
                                              *(uint *)&this_ptr->field_0x13858) / 0xf));
          *(int *)&pCVar9->field_0xd098 = iVar6;
          iVar8 = iVar8 + 1;
          if ((*(int *)&this_ptr->field_0x13858 <= iVar8) ||
             (iVar5 + 0x2a < *(int *)(iVar3 + 4 + (&DAT_007e1c94)[iVar8] * 0xc))) {
            iVar8 = 0;
          }
          iVar7 = iVar7 + 1;
          pCVar9 = (CBugs *)&pCVar9->field_0x40;
        } while (iVar7 < *(int *)&this_ptr->field_0xd058);
        return;
      }
      *(int *)&this_ptr->field_0x13854 = iVar3 + 1;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                         (*(CDeformableModelInstance **)&this_ptr->field_0x13820);
    } while (*(int *)&this_ptr->field_0x13854 < *(int *)pCVar4);
    *(uint *)&this_ptr->field_0x13820 = 0;
  }
  return;
}
