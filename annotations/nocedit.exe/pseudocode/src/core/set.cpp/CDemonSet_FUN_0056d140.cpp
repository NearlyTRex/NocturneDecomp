// Name: core_set.cpp_CDemonSet_FUN_0056d140
// Address: 0056d140
// Address Range: [[0056d140, 0056d18b]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056d140(CDemonSet * this_ptr)
// Cross-references:
//   core_flame.cpp_FUN_004ca110 (004ca110) at 004ca1e8 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_0327785c
//   undefined4 DAT_032779f0
// Function calls:
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056d140(CDemonSet *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  undefined4 in_stack_00000008;
  
  this_ptr_00 = g_CDemonRendererPtr;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) && (DAT_0327785c < 100)) {
    (&DAT_03277860)[DAT_0327785c] = in_stack_00000008;
    iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(this_ptr_00);
    (&DAT_032779f0)[DAT_0327785c] = iVar1;
    DAT_0327785c = DAT_0327785c + 1;
    return;
  }
  return;
}


// Assembly code:
// 0056d140: MOV EAX,[0x0067d550]
//   Label: core_set.cpp_CDemonSet_FUN_0056d140
//   XREF to: 02f33740 (DATA)
//   XREF to: 0067d550 (READ)
// 0056d145: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0056d149: JNZ 0x0056d156
//   XREF to: 0056d156 (CONDITIONAL_JUMP)
// 0056d14b: MOV ECX,dword ptr [0x0327785c]
//   XREF to: 0327785c (READ)
// 0056d151: CMP ECX,0x64
// 0056d154: JL 0x0056d157
//   XREF to: 0056d157 (CONDITIONAL_JUMP)
// 0056d156: RET
//   Label: LAB_0056d156
// 0056d157: PUSH ESI
//   Label: LAB_0056d157
// 0056d158: PUSH EBX
// 0056d159: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056d15f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0056d163: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0056d164: MOV dword ptr [ECX*0x4 + 0x3277860],EDX
//   XREF to: 03277860 (DATA)
// 0056d16b: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 0056d170: MOV EDX,dword ptr [0x0327785c]
//   XREF to: 0327785c (READ)
// 0056d176: ADD ESP,0x4
// 0056d179: LEA ESI,[EDX + 0x1]
// 0056d17c: MOV dword ptr [EDX*0x4 + 0x32779f0],EAX
//   XREF to: 032779f0 (DATA)
// 0056d183: MOV dword ptr [0x0327785c],ESI
//   XREF to: 0327785c (WRITE)
// 0056d189: POP EBX
// 0056d18a: POP ESI
// 0056d18b: RET
