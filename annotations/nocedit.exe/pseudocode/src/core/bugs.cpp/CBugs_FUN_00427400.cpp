// Name: core_bugs.cpp_CBugs_FUN_00427400
// Address: 00427400
// Address Range: [[00427400, 004276bc]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_00427400(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_FUN_00427400(CBugs *this_ptr)

{
  int iVar1;
  uint uVar2;
  CDeformableModelInstance *this_ptr_00;
  uint class_name_hash;
  CDemonActor *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CBugs *pCVar9;
  CDemonActor *in_stack_00000008;
  
  class_name_hash = g_CHeroClassInfo.name_hash;
  (this_ptr->model).part_visibility_flags[0] = 0;
  this_ptr->unk3[0x830] = '\0';
  this_ptr->unk3[0x831] = '\0';
  this_ptr->unk3[0x832] = '\0';
  this_ptr->unk3[0x833] = '\0';
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(in_stack_00000008,class_name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
    (this_ptr->model).part_visibility_flags[0] = (int)(pCVar3 + 1);
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  if ((pCVar3 != (CDemonActor *)0x0) && (pCVar3[0x1a].create_event[0x50] != '\0')) {
    (this_ptr->model).part_visibility_flags[0] = (int)(pCVar3 + 1);
  }
  if ((this_ptr->model).part_visibility_flags[0] != 0) {
    this_ptr->unk = 1;
    *(CDemonActor **)(this_ptr->unk3 + 0x830) = in_stack_00000008;
    iVar1 = *(int *)(*(int *)(this_ptr->unk3 + 0x830) + 100);
    (this_ptr->model).part_visibility_flags[0xd] = 0;
    (this_ptr->base).base.base.health = iVar1 + 1;
    do {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         ((CDeformableModelInstance *)(this_ptr->model).part_visibility_flags[0]);
      iVar1 = (this_ptr->model).part_visibility_flags[0xd];
      if (pCVar4->vertex_count[iVar1] < 0x2bd) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s swarming on %s at LOD %d\n",this_ptr);
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                  ((CDeformableModelInstance *)(this_ptr->model).part_visibility_flags[0]);
        core_bugs_cpp_CBugs_FUN_00425660(this_ptr);
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                  ((CDeformableModelInstance *)(this_ptr->model).part_visibility_flags[0],
                   (this_ptr->model).part_visibility_flags[0xd]);
        iVar5 = 0;
        iVar1 = *(int *)((this_ptr->model).part_visibility_flags[0] + 0x2234);
        if (0 < (this_ptr->model).part_visibility_flags[0xe]) {
          iVar7 = 0;
          do {
            *(int *)((int)&DAT_00822f48 + iVar7) = iVar5;
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 4;
          } while (iVar5 < (this_ptr->model).part_visibility_flags[0xe]);
        }
        for (iVar5 = (this_ptr->model).part_visibility_flags[0xe] + -2; -1 < iVar5;
            iVar5 = iVar5 + -1) {
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
        iVar8 = 0;
        iVar7 = 0;
        pCVar9 = this_ptr;
        if (this_ptr->count < 1) {
          return;
        }
        do {
          pCVar9->bugs[0].unk[0x2c] = -1;
          pCVar9->bugs[0].unk[0x2d] = -1;
          pCVar9->bugs[0].unk[0x2e] = -1;
          pCVar9->bugs[0].unk[0x2f] = -1;
          *(int *)(pCVar9->bugs[0].unk + 0x30) = (&DAT_00822f48)[iVar8];
          iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70
                            (0,(int)(CONCAT44((this_ptr->model).part_visibility_flags[0xe] >> 0x1f,
                                              (this_ptr->model).part_visibility_flags[0xe]) / 0xf));
          *(int *)(pCVar9->bugs[0].unk + 0x3c) = iVar6;
          iVar8 = iVar8 + 1;
          if (((this_ptr->model).part_visibility_flags[0xe] <= iVar8) ||
             (iVar5 + 0x2a < *(int *)(iVar1 + 4 + (&DAT_00822f48)[iVar8] * 0xc))) {
            iVar8 = 0;
          }
          iVar7 = iVar7 + 1;
          pCVar9 = (CBugs *)&(pCVar9->base).base.base.orient_matrix.m[0].y;
        } while (iVar7 < this_ptr->count);
        return;
      }
      this_ptr_00 = (CDeformableModelInstance *)(this_ptr->model).part_visibility_flags[0];
      (this_ptr->model).part_visibility_flags[0xd] = iVar1 + 1;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
    } while ((this_ptr->model).part_visibility_flags[0xd] < pCVar4->num_lods);
    (this_ptr->model).part_visibility_flags[0] = 0;
  }
  return;
}
