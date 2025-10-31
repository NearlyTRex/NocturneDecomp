// Name: core_zombie.cpp_FUN_005f8fa0
// Address: 005f8fa0
// Address Range: [[005f8fa0, 005f8fc5]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8fa0()
// Cross-references:
//   core_zombie.cpp_staticInit_FUN_005f8c90 (005f8c90) at 005f8c9c [DATA]
// Globals:
//   undefined4 s_..\core\zombie.cpp_00658475
// Function calls:
//   core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void core_zombie_cpp_FUN_005f8fa0(void)

{
  CZombie *this_ptr;
  
  this_ptr = (CZombie *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0xbfac,"@..\\core\\zombie.cpp" + 1,200);
  if (this_ptr == (CZombie *)0x0) {
    return;
  }
  core_zombie_cpp_CZombie_ctor_FUN_005f8fe0(this_ptr);
  return;
}


// Assembly code:
// 005f8fa0: PUSH 0xc8
//   Label: core_zombie.cpp_FUN_005f8fa0
// 005f8fa5: PUSH 0x658475
//   XREF to: 00658475 (DATA)
// 005f8faa: PUSH 0xbfac
// 005f8faf: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005f8fb4: ADD ESP,0xc
// 005f8fb7: TEST EAX,EAX
// 005f8fb9: JNZ 0x005f8fbc
//   XREF to: 005f8fbc (CONDITIONAL_JUMP)
// 005f8fbb: RET
// 005f8fbc: PUSH EAX
//   Label: LAB_005f8fbc
// 005f8fbd: CALL core_zombie.cpp_CZombie_ctor_FUN_005f8fe0
//   XREF to: 005f8fe0 (UNCONDITIONAL_CALL)
// 005f8fc2: ADD ESP,0x4
// 005f8fc5: RET
