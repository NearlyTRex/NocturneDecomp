// Name: core_bugs.cpp_FUN_00427400
// Address: 00427400
// Address Range: [[00427400, 004276bc]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_FUN_00427400(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_00427400(uint param_1, uint param_2)
    */

void __cdecl core_bugs_cpp_FUN_00427400(void)

{
  int iVar1;
  uint uVar2;
  uint class_name_hash;
  CDemonActor *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  
  class_name_hash = g_CHeroClassInfo.name_hash;
  *(uint *)(in_stack_00000004 + 0x12afc) = 0;
  *(uint *)(in_stack_00000004 + 0x12af8) = 0;
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000008,class_name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
    *(CDemonActor **)(in_stack_00000004 + 0x12afc) = pCVar3 + 1;
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  if ((pCVar3 != (CDemonActor *)0x0) && (pCVar3[0x1a].create_event[0x50] != '\0')) {
    *(CDemonActor **)(in_stack_00000004 + 0x12afc) = pCVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x12afc) != 0) {
    *(uint *)(in_stack_00000004 + 0xbebc) = 1;
    *(CDemonActor **)(in_stack_00000004 + 0x12af8) = in_stack_00000008;
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x12af8) + 100);
    *(uint *)(in_stack_00000004 + 0x12b30) = 0;
    *(int *)(in_stack_00000004 + 100) = iVar1 + 1;
    do {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         (*(CDeformableModelInstance **)(in_stack_00000004 + 0x12afc));
      if (pCVar4->vertex_count[*(int *)(in_stack_00000004 + 0x12b30)] < 0x2bd) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s swarming on %s at LOD %d\n",in_stack_00000004);
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                  (*(CDeformableModelInstance **)(in_stack_00000004 + 0x12afc));
        core_bugs_cpp_FUN_00425660();
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                  (*(CDeformableModelInstance **)(in_stack_00000004 + 0x12afc),
                   *(int *)(in_stack_00000004 + 0x12b30));
        iVar5 = 0;
        iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x12afc) + 0x2234);
        if (0 < *(int *)(in_stack_00000004 + 0x12b34)) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_00822f48 + iVar7) = iVar5;
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar5 < *(int *)(in_stack_00000004 + 0x12b34));
        }
        for (iVar5 = *(int *)(in_stack_00000004 + 0x12b34) + -2; -1 < iVar5; iVar5 = iVar5 + -1) {
          if (-1 < iVar5) {
            iVar7 = 0;
            do {
              if (*(int *)(*(int *)((int)&DAT_00822f4c + iVar7) * 0xc + 4 + iVar1) <
                  *(int *)(*(int *)((int)&DAT_00822f48 + iVar7) * 0xc + 4 + iVar1)) {
                uVar2 = *(uint *)((int)&DAT_00822f48 + iVar7);
                *(uint *)((int)&DAT_00822f48 + iVar7) =
                     *(uint *)((int)&DAT_00822f4c + iVar7);
                *(uint *)((int)&DAT_00822f4c + iVar7) = uVar2;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 <= iVar5 * 4);
          }
        }
        iVar5 = *(int *)(iVar1 + 4 + DAT_00822f48 * 0xc);
        iVar9 = 0;
        iVar8 = 0;
        iVar7 = in_stack_00000004;
        if (*(int *)(in_stack_00000004 + 0xbec0) < 1) {
          return;
        }
        do {
          *(uint *)(iVar7 + 0xbef0) = 0xffffffff;
          *(int *)(iVar7 + 0xbef4) = (&DAT_00822f48)[iVar9];
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70
                            (0,(int)(CONCAT44(*(int *)(in_stack_00000004 + 0x12b34) >> 0x1f,
                                              *(uint *)(in_stack_00000004 + 0x12b34)) / 0xf));
          *(int *)(iVar7 + 0xbf00) = iVar6;
          iVar9 = iVar9 + 1;
          if ((*(int *)(in_stack_00000004 + 0x12b34) <= iVar9) ||
             (iVar5 + 0x2a < *(int *)(iVar1 + 4 + (&DAT_00822f48)[iVar9] * 0xc))) {
            iVar9 = 0;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x40;
        } while (iVar8 < *(int *)(in_stack_00000004 + 0xbec0));
        return;
      }
      *(int *)(in_stack_00000004 + 0x12b30) = *(int *)(in_stack_00000004 + 0x12b30) + 1;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         (*(CDeformableModelInstance **)(in_stack_00000004 + 0x12afc));
    } while (*(int *)(in_stack_00000004 + 0x12b30) < pCVar4->num_lods);
    *(uint *)(in_stack_00000004 + 0x12afc) = 0;
  }
  return;
}
