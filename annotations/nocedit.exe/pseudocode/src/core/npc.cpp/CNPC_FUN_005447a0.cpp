// Name: core_npc.cpp_CNPC_FUN_005447a0
// Address: 005447a0
// Address Range: [[005447a0, 005447c2]]
// Convention: __cdecl
// Signature: void core_npc.cpp_CNPC_FUN_005447a0(CNPC * this_ptr)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_FUN_005447a0(CNPC *this_ptr)

{
  CNPC *this_ptr_00;
  
  this_ptr_00 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1f708,"..\\core\\npc.cpp",0x2d);
  if (this_ptr_00 == (CNPC *)0x0) {
    return;
  }
  core_npc_cpp_CNPC_ctor_FUN_005447e0(this_ptr_00);
  return;
}
