// Name: core_werewolf.cpp_CWerewolf_processChainConstraint_FUN_00557cc0
// Address: 00557cc0
// Address Range: [[00557cc0, 00557e83]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_00557cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_processChainConstraint_FUN_00557cc0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  float local_44 [3];
  float local_38;
  float local_34;
  float local_30;
  double local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(int *)(param_1 + 0xbd50) != 0) && (*(int *)(param_1 + 0xbca4) != 0)) {
    local_50 = 0;
    local_4c = 0xbe99999a;
    local_48 = 0;
    core_xform_cpp_transformVector3x4_FUN_0055a8b0
              (&local_5c,&local_50,*(int *)(param_1 + 0xbd38) * 0x30 + param_1 + 0xfd0);
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
              (param_1,&local_68,*(int *)(param_1 + 0xbd50) + 0x20);
    if (local_64 < (float)_DAT_00597f09) {
      local_44[0] = local_68;
      local_44[2] = local_60;
      local_44[1] = 0.0;
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,local_44);
      return;
    }
    fVar3 = local_64 - local_58;
    fVar1 = local_68 - local_5c;
    fVar2 = local_60 - local_54;
    local_1c = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"Chain stretched to %f\n",(double)local_1c);
    if ((*(float *)(param_1 + 0xbd54) < local_1c) &&
       (local_20 = *(float *)(param_1 + 0xbd54) * *(float *)(param_1 + 0xbd54) - fVar3 * fVar3,
       local_2c = (double)local_20, 0.0 <= local_2c)) {
      local_20 = SQRT(local_20);
      local_14 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      if ((0.0 < local_14) && (local_18 = local_14 - local_20, 0.0 < local_18)) {
        local_24 = local_18 / local_14;
        local_38 = fVar1 * local_24;
        local_34 = local_24 * 0.0;
        local_30 = fVar2 * local_24;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_38);
        return;
      }
    }
  }
  return;
}
