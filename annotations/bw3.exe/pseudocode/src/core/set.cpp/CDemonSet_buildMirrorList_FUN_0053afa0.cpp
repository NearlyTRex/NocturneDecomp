// Name: core_set.cpp_CDemonSet_buildMirrorList_FUN_0053afa0
// Address: 0053afa0
// Address Range: [[0053afa0, 0053b0b3]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0053afa0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_0053afa0(CDemonSet *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_48 [6];
  uint local_30 [6];
  CDemonSet *local_18;
  int local_14;
  
  bVar4 = 0;
  *(uint *)&this_ptr->field_0x15acc8 = 0;
  local_14 = 0;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    local_18 = this_ptr;
    do {
      this_ptr_00 = (CDemonActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)&local_18->field_0x14d168,g_CGlassClassInfo.name_hash)
      ;
      if ((this_ptr_00 != (CDemonActor *)0x0) && (*(int *)&this_ptr_00[1].field_0xc0 != 0)) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(this_ptr_00);
        (**(code **)(*(int *)&this_ptr_00->field_0x154 + 0x1c))(this_ptr_00,0);
        puVar2 = local_30;
        puVar3 = local_48;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        }
        iVar1 = core_box_cpp_FUN_0041daf0(local_48);
        if (iVar1 != 0) {
          *(CDemonActor **)(&this_ptr->field_0x15accc + *(int *)&this_ptr->field_0x15acc8 * 4) =
               this_ptr_00;
          iVar1 = *(int *)&this_ptr->field_0x15acc8 + 1;
          *(int *)&this_ptr->field_0x15acc8 = iVar1;
          if (99 < iVar1) {
            _DAT_01d71de0 = "..\\core\\set.cpp";
            _DAT_01d71de4 = 0x12ea;
            core_main_c_FUN_004e4330("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        engine_matrix_c_pop_FUN_0046d080();
      }
      local_18 = (CDemonSet *)&local_18->field_0x4;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)&this_ptr->field_0x14d164);
  }
  return;
}
