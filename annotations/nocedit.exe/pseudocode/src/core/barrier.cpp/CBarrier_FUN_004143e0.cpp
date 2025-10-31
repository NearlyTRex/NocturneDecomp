// Name: core_barrier.cpp_CBarrier_FUN_004143e0
// Address: 004143e0
// Address Range: [[004143e0, 004143fe]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_004143e0(CBarrier * this_ptr)
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_setcolid.cpp_CDemonSet_FUN_00574440

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_004143e0(CBarrier *this_ptr)

{
  if (*(int *)(this_ptr->field1_0x158 + 0xc) == 0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_FUN_00574440(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 004143e0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_barrier.cpp_CBarrier_FUN_004143e0
//   XREF to: Stack[0x4] (READ)
// 004143e4: CMP dword ptr [EAX + 0x164],0x0
// 004143eb: JNZ 0x004143ee
//   XREF to: 004143ee (CONDITIONAL_JUMP)
// 004143ed: RET
// 004143ee: PUSH EAX
//   Label: LAB_004143ee
// 004143ef: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004143f5: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004143f6: CALL core_setcolid.cpp_CDemonSet_FUN_00574440
//   XREF to: 00574440 (UNCONDITIONAL_CALL)
// 004143fb: ADD ESP,0x8
// 004143fe: RET
