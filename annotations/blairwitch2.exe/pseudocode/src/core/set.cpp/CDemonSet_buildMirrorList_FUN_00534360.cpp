// Name: core_set.cpp_CDemonSet_buildMirrorList_FUN_00534360
// Address: 00534360
// Address Range: [[00534360, 00534473]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00534360(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_buildMirrorList_FUN_00534360(CDemonSet *this_ptr)

{
  CGlass *this_ptr_00;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_48 [6];
  uint local_30 [6];
  CDemonSet *local_18;
  int local_14;
  
  bVar4 = 0;
  this_ptr->mirror_glass_actor_count = 0;
  local_14 = 0;
  if (0 < this_ptr->actor_count) {
    local_18 = this_ptr;
    do {
      this_ptr_00 = (CGlass *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (local_18->actors[0],g_CGlassClassInfo.name_hash);
      if ((this_ptr_00 != (CGlass *)0x0) && (this_ptr_00->mirror_flag != 0)) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr_00);
        (*((this_ptr_00->base).vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)0x0);
        puVar2 = local_30;
        puVar3 = local_48;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        }
        iVar1 = core_box_cpp_FUN_0041a840(local_48);
        if (iVar1 != 0) {
          this_ptr->mirror_glass_actors[this_ptr->mirror_glass_actor_count] = this_ptr_00;
          iVar1 = this_ptr->mirror_glass_actor_count + 1;
          this_ptr->mirror_glass_actor_count = iVar1;
          if (99 < iVar1) {
            _DAT_01d046a0 = "..\\core\\set.cpp";
            _DAT_01d046a4 = 0x12d6;
            core_main_c_FUN_004e4500("CDemonSet::buildMirrorList - Too many mirrors");
          }
        }
        engine_matrix_c_pop_FUN_0046b4a0();
      }
      local_18 = (CDemonSet *)local_18->cameras;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->actor_count);
  }
  return;
}
