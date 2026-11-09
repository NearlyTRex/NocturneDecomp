// Name: core_bugs.cpp_FUN_00421b10
// Address: 00421b10
// Address Range: [[00421b10, 00421dcc]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00421b10(CBugs *this_ptr,CDemonActor *target)

#include "nocturne.h"

void __cdecl core_bugs_cpp_FUN_00421b10(CBugs *this_ptr,CDemonActor *target)

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
  *(uint *)&this_ptr->field_0x17738 = 0;
  *(uint *)&this_ptr->field_0x17734 = 0;
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(target,uVar2);
  if (iVar3 != 0) {
    *(int *)&this_ptr->field_0x17738 = iVar3 + 0x2b4;
  }
  iVar3 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(target,g_CEnemyClassInfo.name_hash);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x2514) != '\0')) {
    *(int *)&this_ptr->field_0x17738 = iVar3 + 0x2b4;
  }
  if (*(int *)&this_ptr->field_0x17738 != 0) {
    *(uint *)&this_ptr->field_0x10af8 = 1;
    *(CDemonActor **)&this_ptr->field_0x17734 = target;
    iVar3 = *(int *)(*(int *)&this_ptr->field_0x17734 + 100);
    *(uint *)&this_ptr->field_0x1776c = 0;
    *(int *)&this_ptr->field_0x64 = iVar3 + 1;
    do {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                         (*(CDeformableModelInstance **)&this_ptr->field_0x17738);
      iVar3 = *(int *)&this_ptr->field_0x1776c;
      if (*(int *)(&pCVar4->field_0x2c + iVar3 * 4) < 0x2bd) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,">%s swarming on %s at LOD %d\n" + 1,this_ptr,target,iVar3);
        pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                           (*(CDeformableModelInstance **)&this_ptr->field_0x17738);
        core_bugs_cpp_FUN_0041f940
                  (this_ptr,*(int *)(&pCVar4->field_0x54 + *(int *)&this_ptr->field_0x1776c * 4),
                   *(SInputFace **)(&pCVar4->field_0x7c + *(int *)&this_ptr->field_0x1776c * 4));
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
                  (*(CDeformableModelInstance **)&this_ptr->field_0x17738,
                   *(int *)&this_ptr->field_0x1776c);
        iVar5 = 0;
        iVar3 = *(int *)(*(int *)&this_ptr->field_0x17738 + 0x2234);
        if (0 < *(int *)&this_ptr->field_0x17770) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_007bcf48 + iVar7) = iVar5;
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar5 < *(int *)&this_ptr->field_0x17770);
        }
        for (iVar5 = *(int *)&this_ptr->field_0x17770 + -2; -1 < iVar5; iVar5 = iVar5 + -1) {
          if (-1 < iVar5) {
            iVar7 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_007bcf4c + iVar7) * 0xc + 4 + iVar3) <
                  *(int *)(*(int *)((int)&DAT_007bcf48 + iVar7) * 0xc + 4 + iVar3)) {
                uVar1 = *(uint *)((int)&DAT_007bcf48 + iVar7);
                *(uint *)((int)&DAT_007bcf48 + iVar7) =
                     *(uint *)((int)&DAT_007bcf4c + iVar7);
                *(uint *)((int)&DAT_007bcf4c + iVar7) = uVar1;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 <= iVar5 * 4);
          }
        }
        iVar5 = *(int *)(iVar3 + 4 + DAT_007bcf48 * 0xc);
        iVar8 = 0;
        iVar7 = 0;
        pCVar9 = this_ptr;
        if (*(int *)&this_ptr->field_0x10afc < 1) {
          return;
        }
        do {
          *(uint *)&pCVar9->field_0x10b2c = 0xffffffff;
          *(int *)&pCVar9->field_0x10b30 = (&DAT_007bcf48)[iVar8];
          iVar6 = core_actor_cpp_FUN_0040cfc0
                            (0,(int)(CONCAT44(*(int *)&this_ptr->field_0x17770 >> 0x1f,
                                              *(uint *)&this_ptr->field_0x17770) / 0xf));
          *(int *)&pCVar9->field_0x10b3c = iVar6;
          iVar8 = iVar8 + 1;
          if ((*(int *)&this_ptr->field_0x17770 <= iVar8) ||
             (iVar5 + 0x2a < *(int *)(iVar3 + 4 + (&DAT_007bcf48)[iVar8] * 0xc))) {
            iVar8 = 0;
          }
          iVar7 = iVar7 + 1;
          pCVar9 = (CBugs *)&pCVar9->field_0x40;
        } while (iVar7 < *(int *)&this_ptr->field_0x10afc);
        return;
      }
      *(int *)&this_ptr->field_0x1776c = iVar3 + 1;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                         (*(CDeformableModelInstance **)&this_ptr->field_0x17738);
    } while (*(int *)&this_ptr->field_0x1776c < *(int *)pCVar4);
    *(uint *)&this_ptr->field_0x17738 = 0;
  }
  return;
}
