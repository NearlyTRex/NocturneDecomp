// Name: core_tbplayer.cpp_FUN_005433a0
// Address: 005433a0
// Address Range: [[005433a0, 005433cd]]
// Convention: unknown
// Signature: int core_tbplayer_cpp_FUN_005433a0(undefined4 param_1)

#include "nocturne.h"

int core_tbplayer_cpp_FUN_005433a0(uint param_1)

{
  int iVar1;
  
  iVar1 = core_npc_cpp_FUN_004ee950(param_1);
  *(byte ***)(iVar1 + 0x14c) = &PTR_core_tbplayer_cpp_CDrummer_setup_FUN_005433d0_005a2d44;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar1 + 0x150,"drummer.dfm")
  ;
  return iVar1;
}
