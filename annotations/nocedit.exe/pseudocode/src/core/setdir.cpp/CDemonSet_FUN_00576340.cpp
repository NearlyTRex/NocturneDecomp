// Name: core_setdir.cpp_CDemonSet_FUN_00576340
// Address: 00576340
// Address Range: [[00576340, 0057639e]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_00576340(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005836c6 [UNCONDITIONAL_CALL]
// Function calls:
//   core_setdir.cpp_CDemonSet_FUN_005762a0
//   core_setdir.cpp_CDemonSet_FUN_00576820

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576340(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
  if (0 < this_ptr->vdir_box_count) {
    do {
      iVar2 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
      if (iVar2 == iVar1) {
        iVar2 = core_setdir_cpp_CDemonSet_FUN_005762a0(this_ptr);
        if (iVar2 != 0) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->vdir_box_count);
  }
  return 0;
}


// Assembly code:
// 00576340: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_FUN_00576340
// 00576341: PUSH ESI
// 00576342: PUSH EDI
// 00576343: PUSH EBP
// 00576344: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00576348: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0057634c: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00576350: PUSH EDX
// 00576351: PUSH ESI
// 00576352: XOR EBX,EBX
// 00576354: CALL core_setdir.cpp_CDemonSet_FUN_00576820
//   XREF to: 00576820 (UNCONDITIONAL_CALL)
// 00576359: ADD ESP,0x8
// 0057635c: MOV ECX,dword ptr [ESI + 0x15b410]
// 00576362: MOV EDI,EAX
// 00576364: TEST ECX,ECX
// 00576366: JLE 0x0057637f
//   XREF to: 0057637f (CONDITIONAL_JUMP)
// 00576368: PUSH EBX
//   Label: LAB_00576368
// 00576369: PUSH ESI
// 0057636a: CALL core_setdir.cpp_CDemonSet_FUN_00576820
//   XREF to: 00576820 (UNCONDITIONAL_CALL)
// 0057636f: ADD ESP,0x8
// 00576372: CMP EAX,EDI
// 00576374: JZ 0x00576386
//   XREF to: 00576386 (CONDITIONAL_JUMP)
// 00576376: INC EBX
//   Label: LAB_00576376
// 00576377: CMP EBX,dword ptr [ESI + 0x15b410]
// 0057637d: JL 0x00576368
//   XREF to: 00576368 (CONDITIONAL_JUMP)
// 0057637f: XOR EAX,EAX
//   Label: LAB_0057637f
// 00576381: POP EBP
// 00576382: POP EDI
// 00576383: POP ESI
// 00576384: POP EBX
// 00576385: RET
// 00576386: PUSH EBP
//   Label: LAB_00576386
// 00576387: PUSH EBX
// 00576388: PUSH ESI
// 00576389: CALL core_setdir.cpp_CDemonSet_FUN_005762a0
//   XREF to: 005762a0 (UNCONDITIONAL_CALL)
// 0057638e: ADD ESP,0xc
// 00576391: TEST EAX,EAX
// 00576393: JZ 0x00576376
//   XREF to: 00576376 (CONDITIONAL_JUMP)
// 00576395: MOV EAX,0x1
// 0057639a: POP EBP
// 0057639b: POP EDI
// 0057639c: POP ESI
// 0057639d: POP EBX
// 0057639e: RET
