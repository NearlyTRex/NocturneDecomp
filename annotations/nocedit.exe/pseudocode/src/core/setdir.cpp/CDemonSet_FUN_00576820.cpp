// Name: core_setdir.cpp_CDemonSet_FUN_00576820
// Address: 00576820
// Address Range: [[00576820, 00576861]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_00576820(CDemonSet * this_ptr)
// Cross-references:
//   core_setdir.cpp_CDemonSet_FUN_00576340 (00576340) at 0057636a [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_FUN_00576710 (00576710) at 005767e0 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_FUN_00576870 (00576870) at 005768aa [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576820(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int in_stack_00000008;
  
  iVar1 = in_stack_00000008;
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(this_ptr->vdir_boxes[iVar2].field3_0x3c + 4);
  } while (-1 < iVar1);
  while (in_stack_00000008 != iVar2) {
    iVar1 = *(int *)(this_ptr->vdir_boxes[in_stack_00000008].field3_0x3c + 4);
    *(int *)(this_ptr->vdir_boxes[in_stack_00000008].field3_0x3c + 4) = iVar2;
    in_stack_00000008 = iVar1;
  }
  return iVar2;
}


// Assembly code:
// 00576820: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_FUN_00576820
// 00576821: PUSH ESI
// 00576822: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00576826: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0057682a: MOV EDX,EBX
// 0057682c: MOV EAX,EDX
//   Label: LAB_0057682c
// 0057682e: SHL EAX,0x4
// 00576831: ADD EAX,EDX
// 00576833: SHL EAX,0x2
// 00576836: ADD EAX,ESI
// 00576838: MOV ECX,dword ptr [EAX + 0x15b454]
// 0057683e: TEST ECX,ECX
// 00576840: JL 0x00576846
//   XREF to: 00576846 (CONDITIONAL_JUMP)
// 00576842: MOV EDX,ECX
// 00576844: JMP 0x0057682c
//   XREF to: 0057682c (UNCONDITIONAL_JUMP)
// 00576846: CMP EBX,EDX
//   Label: LAB_00576846
// 00576848: JZ 0x0057685d
//   XREF to: 0057685d (CONDITIONAL_JUMP)
// 0057684a: IMUL EAX,EBX,0x44
// 0057684d: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x15b454]
// 00576854: MOV dword ptr [ESI + EAX*0x1 + 0x15b454],EDX
// 0057685b: JMP 0x00576846
//   XREF to: 00576846 (UNCONDITIONAL_JUMP)
// 0057685d: MOV EAX,EDX
//   Label: LAB_0057685d
// 0057685f: POP ESI
// 00576860: POP EBX
// 00576861: RET
