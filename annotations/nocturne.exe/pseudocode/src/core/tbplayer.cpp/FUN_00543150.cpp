// Name: core_tbplayer.cpp_FUN_00543150
// Address: 00543150
// Address Range: [[00543150, 0054317d]]
// Convention: unknown
// Signature: int core_tbplayer_cpp_FUN_00543150(undefined4 param_1)

#include "nocturne.h"

int core_tbplayer_cpp_FUN_00543150(uint param_1)

{
  int iVar1;
  
  iVar1 = core_npc_cpp_FUN_004ee950(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_tbplayer_cpp_CBassPlayer_setup_FUN_00543180_005a2c04;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (iVar1 + 0x150,"bassplayer.dfm");
  return iVar1;
}
