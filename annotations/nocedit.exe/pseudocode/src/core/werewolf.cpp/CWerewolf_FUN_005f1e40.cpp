// Name: core_werewolf.cpp_CWerewolf_FUN_005f1e40
// Address: 005f1e40
// Address Range: [[005f1e40, 005f2003]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f1e40(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f1e40(CWerewolf *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  float local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  double local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(int *)(this_ptr->unk4 + 0xc) != 0) && (*(int *)((this_ptr->base).unk2 + 4) != 0)) {
    local_50.x = 0.0;
    local_50.y = -0.3;
    local_50.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (&local_5c,&local_50,
               (this_ptr->base).base.model.bone_transform.bone_world_matrices +
               *(int *)(this_ptr->unk3 + 0xc));
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
              ((CDemonActor *)this_ptr,&local_68,
               (CVector3f *)(*(int *)(this_ptr->unk4 + 0xc) + 0x20));
    if (local_68.y < (float)2) {
      local_44 = local_68.x;
      local_3c = local_68.z;
      local_40 = 0;
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
      return;
    }
    fVar3 = local_68.y - local_5c.y;
    fVar1 = local_68.x - local_5c.x;
    fVar2 = local_68.z - local_5c.z;
    local_1c = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"Chain stretched to %f\n",(double)local_1c);
    if ((this_ptr->chain_length < local_1c) &&
       (local_20 = this_ptr->chain_length * this_ptr->chain_length - fVar3 * fVar3,
       local_2c = (double)local_20, 0.0 <= local_2c)) {
      local_20 = SQRT(local_20);
      local_14 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      if ((0.0 < local_14) && (local_18 = local_14 - local_20, 0.0 < local_18)) {
        local_24 = local_18 / local_14;
        local_38 = fVar1 * local_24;
        local_34 = local_24 * 0.0;
        local_30 = fVar2 * local_24;
        core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
        return;
      }
    }
  }
  return;
}
