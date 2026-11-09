// Name: core_bugs.cpp_FUN_00427b40
// Address: 00427b40
// Address Range: [[00427b40, 00427dfc]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00427b40(CBugs *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_bugs_cpp_FUN_00427b40(CBugs *this_ptr,CDemonActor *target)

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
  *(uint *)&this_ptr->field_0x12ea8 = 0;
  *(uint *)&this_ptr->field_0x12ea4 = 0;
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c600(target,uVar2);
  if (iVar3 != 0) {
    *(int *)&this_ptr->field_0x12ea8 = iVar3 + 0x158;
  }
  iVar3 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c600(target,g_CEnemyClassInfo.name_hash);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x24a8) != '\0')) {
    *(int *)&this_ptr->field_0x12ea8 = iVar3 + 0x158;
  }
  if (*(int *)&this_ptr->field_0x12ea8 != 0) {
    *(uint *)&this_ptr->field_0xc268 = 1;
    *(CDemonActor **)&this_ptr->field_0x12ea4 = target;
    iVar3 = *(int *)(*(int *)&this_ptr->field_0x12ea4 + 100);
    *(uint *)&this_ptr->field_0x12edc = 0;
    *(int *)&this_ptr->field_0x64 = iVar3 + 1;
    do {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                         (*(CDeformableModelInstance **)&this_ptr->field_0x12ea8);
      iVar3 = *(int *)&this_ptr->field_0x12edc;
      if (*(int *)(&pCVar4->field_0x2c + iVar3 * 4) < 0x2bd) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,">%s swarming on %s at LOD %d\n" + 1,this_ptr,target,iVar3);
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                           (*(CDeformableModelInstance **)&this_ptr->field_0x12ea8);
        core_bugs_cpp_FUN_00425970
                  (this_ptr,*(int *)(&pCVar4->field_0x54 + *(int *)&this_ptr->field_0x12edc * 4),
                   *(SInputFace **)(&pCVar4->field_0x7c + *(int *)&this_ptr->field_0x12edc * 4));
        core_skeleton_cpp_FUN_00569890
                  (*(CDeformableModelInstance **)&this_ptr->field_0x12ea8,
                   *(int *)&this_ptr->field_0x12edc);
        iVar5 = 0;
        iVar3 = *(int *)(*(int *)&this_ptr->field_0x12ea8 + 0x2324);
        if (0 < *(int *)&this_ptr->field_0x12ee0) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_007c55f4 + iVar7) = iVar5;
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar5 < *(int *)&this_ptr->field_0x12ee0);
        }
        for (iVar5 = *(int *)&this_ptr->field_0x12ee0 + -2; -1 < iVar5; iVar5 = iVar5 + -1) {
          if (-1 < iVar5) {
            iVar7 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_007c55f8 + iVar7) * 0xc + 4 + iVar3) <
                  *(int *)(*(int *)((int)&DAT_007c55f4 + iVar7) * 0xc + 4 + iVar3)) {
                uVar1 = *(uint *)((int)&DAT_007c55f4 + iVar7);
                *(uint *)((int)&DAT_007c55f4 + iVar7) =
                     *(uint *)((int)&DAT_007c55f8 + iVar7);
                *(uint *)((int)&DAT_007c55f8 + iVar7) = uVar1;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 <= iVar5 * 4);
          }
        }
        iVar5 = *(int *)(iVar3 + 4 + DAT_007c55f4 * 0xc);
        iVar8 = 0;
        iVar7 = 0;
        pCVar9 = this_ptr;
        if (*(int *)&this_ptr->field_0xc26c < 1) {
          return;
        }
        do {
          *(uint *)&pCVar9->field_0xc29c = 0xffffffff;
          *(int *)&pCVar9->field_0xc2a0 = (&DAT_007c55f4)[iVar8];
          iVar6 = core_actor_cpp_FUN_0040cc60
                            (0,(int)(CONCAT44(*(int *)&this_ptr->field_0x12ee0 >> 0x1f,
                                              *(uint *)&this_ptr->field_0x12ee0) / 0xf));
          *(int *)&pCVar9->field_0xc2ac = iVar6;
          iVar8 = iVar8 + 1;
          if ((*(int *)&this_ptr->field_0x12ee0 <= iVar8) ||
             (iVar5 + 0x2a < *(int *)(iVar3 + 4 + (&DAT_007c55f4)[iVar8] * 0xc))) {
            iVar8 = 0;
          }
          iVar7 = iVar7 + 1;
          pCVar9 = (CBugs *)&pCVar9->field_0x40;
        } while (iVar7 < *(int *)&this_ptr->field_0xc26c);
        return;
      }
      *(int *)&this_ptr->field_0x12edc = iVar3 + 1;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                         (*(CDeformableModelInstance **)&this_ptr->field_0x12ea8);
    } while (*(int *)&this_ptr->field_0x12edc < *(int *)pCVar4);
    *(uint *)&this_ptr->field_0x12ea8 = 0;
  }
  return;
}
