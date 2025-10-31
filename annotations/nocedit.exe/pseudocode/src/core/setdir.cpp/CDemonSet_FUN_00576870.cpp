// Name: core_setdir.cpp_CDemonSet_FUN_00576870
// Address: 00576870
// Address Range: [[00576870, 005768b5]]
// Convention: __cdecl
// Signature: int core_setdir.cpp_CDemonSet_FUN_00576870(CDemonSet * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ac06 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 005754dd [UNCONDITIONAL_CALL]
// Function calls:
//   core_setdir.cpp_CDemonSet_FUN_005762a0
//   core_setdir.cpp_CDemonSet_FUN_00576820

#include "nocturne.h"

int __cdecl core_setdir_cpp_CDemonSet_FUN_00576870(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->vdir_box_count) {
    do {
      iVar1 = core_setdir_cpp_CDemonSet_FUN_005762a0(this_ptr);
      if (iVar1 != 0) {
        iVar2 = core_setdir_cpp_CDemonSet_FUN_00576820(this_ptr);
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->vdir_box_count);
  }
  return -1;
}


// Assembly code:
// 00576870: PUSH EBX
//   Label: core_setdir.cpp_CDemonSet_FUN_00576870
// 00576871: PUSH ESI
// 00576872: PUSH EDI
// 00576873: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00576877: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0057687b: MOV EDX,dword ptr [ESI + 0x15b410]
// 00576881: XOR EBX,EBX
// 00576883: TEST EDX,EDX
// 00576885: JLE 0x0057689f
//   XREF to: 0057689f (CONDITIONAL_JUMP)
// 00576887: PUSH EDI
//   Label: LAB_00576887
// 00576888: PUSH EBX
// 00576889: PUSH ESI
// 0057688a: CALL core_setdir.cpp_CDemonSet_FUN_005762a0
//   XREF to: 005762a0 (UNCONDITIONAL_CALL)
// 0057688f: ADD ESP,0xc
// 00576892: TEST EAX,EAX
// 00576894: JNZ 0x005768a8
//   XREF to: 005768a8 (CONDITIONAL_JUMP)
// 00576896: INC EBX
// 00576897: CMP EBX,dword ptr [ESI + 0x15b410]
// 0057689d: JL 0x00576887
//   XREF to: 00576887 (CONDITIONAL_JUMP)
// 0057689f: MOV EAX,0xffffffff
//   Label: LAB_0057689f
// 005768a4: POP EDI
// 005768a5: POP ESI
// 005768a6: POP EBX
// 005768a7: RET
// 005768a8: PUSH EBX
//   Label: LAB_005768a8
// 005768a9: PUSH ESI
// 005768aa: CALL core_setdir.cpp_CDemonSet_FUN_00576820
//   XREF to: 00576820 (UNCONDITIONAL_CALL)
// 005768af: ADD ESP,0x8
// 005768b2: POP EDI
// 005768b3: POP ESI
// 005768b4: POP EBX
// 005768b5: RET
