// Name: core_werewolf.cpp_CWerewolf_processChainConstraint_FUN_0057fad0
// Address: 0057fad0
// Address Range: [[0057fad0, 0057fcb3]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_0057fad0(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_0057fad0(CWerewolf *this_ptr)

{
  float fVar1;
  byte bVar2;
  float afStackY_1084 [1014];
  float local_9c;
  float local_98;
  float local_94;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  float local_6c;
  float local_68 [4];
  float local_58;
  CVector3f local_54;
  float local_48;
  float local_44 [2];
  CVector3f local_3c;
  double local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  if ((this_ptr->chain_anchor != (CDemonActor *)0x0) &&
     ((this_ptr->base).victim != (CCharacter *)0x0)) {
    local_78.x = 0.0;
    local_78.y = -0.3;
    local_78.z = 0.0;
    core_xform_cpp_transformVector3x4_FUN_00583260
              (&local_78,
               (this_ptr->base).base.model.bone_transform.bone_model_matrices +
               this_ptr->bone_indices[4],&local_84);
    local_68[2] = local_84.x;
    local_68[(uint)bVar2 * -2 + 3] = *(float *)((int)&local_84 + (uint)bVar2 * -8 + 4);
    local_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         *(float *)((int)&local_84 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
              ((CDemonActor *)this_ptr,&(this_ptr->chain_anchor->location).position,&local_90);
    local_9c = local_90.x;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8) =
         *(uint *)((int)&local_90 + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&local_90 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    if (local_98 < (float)_DAT_005d7c23) {
      local_3c.x = local_90.x;
      *(uint *)((int)&local_3c + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_90 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_90 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      local_3c.y = 0.0;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&local_3c);
      return;
    }
    local_6c = local_9c - local_68[2];
    local_68[0] = local_98 - local_68[3];
    local_68[1] = local_94 - local_58;
    local_48 = local_9c - local_68[2];
    local_44[(uint)bVar2 * -2] = local_68[(uint)bVar2 * -2];
    local_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         local_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    local_20 = local_44[0] * local_44[0];
    local_28 = SQRT(local_44[1] * local_44[1] + local_48 * local_48 + local_20);
    engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"Chain stretched to %f\n");
    if ((this_ptr->chain_length < local_28) &&
       (fVar1 = this_ptr->chain_length * this_ptr->chain_length - local_20, local_30 = (double)fVar1
       , 0.0 <= local_30)) {
      fVar1 = SQRT(fVar1);
      local_54.x = local_6c;
      *(float *)((int)&local_54 + (uint)bVar2 * -8 + 4) = local_68[(uint)bVar2 * -2];
      *(float *)((int)&local_54 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           local_68[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      local_1c = SQRT(local_54.z * local_54.z + local_54.x * local_54.x);
      if ((0.0 < local_1c) && (local_24 = local_1c - fVar1, 0.0 < local_24)) {
        local_18 = local_24 / local_1c;
        local_54.x = local_54.x * local_18;
        local_54.y = local_18 * 0.0;
        local_54.z = local_54.z * local_18;
        local_14 = fVar1;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_0042c230((CCharacter *)this_ptr,&local_54);
        return;
      }
    }
  }
  return;
}
