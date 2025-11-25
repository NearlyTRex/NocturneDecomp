// Name: shape_superopt.cpp_COptimize_FUN_005d7690
// Address: 005d7690
// Address Range: [[005d7690, 005d76de]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_COptimize_FUN_005d7690(COptimize * this_ptr)
// Globals:
//   TerminatedCString s_Unable_to_split_polygon__00654789
// Function calls:
//   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
//   shape_superopt.cpp_logToFile_FUN_005c7910

#include "nocturne.h"

int __cdecl shape_superopt_cpp_COptimize_FUN_005d7690(COptimize *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (this_ptr->field2_0x38 != 0) {
    do {
      iVar1 = shape_superopt_cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0();
      if (iVar1 == 0) {
        shape_superopt_cpp_logToFile_FUN_005c7910("Unable to split polygon to convex... continuing anyway");
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)this_ptr->field2_0x38);
  }
  return 1;
}


// Assembly code:
// 005d7690: PUSH EBX
//   Label: shape_superopt.cpp_COptimize_FUN_005d7690
// 005d7691: PUSH ESI
// 005d7692: PUSH EDI
// 005d7693: PUSH EBP
// 005d7694: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d7698: MOV EDX,dword ptr [EDI + 0x38]
// 005d769b: XOR EBX,EBX
// 005d769d: TEST EDX,EDX
// 005d769f: JBE 0x005d76c1
//   XREF to: 005d76c1 (CONDITIONAL_JUMP)
// 005d76a1: XOR ESI,ESI
// 005d76a3: MOV EAX,dword ptr [EDI + 0x3c]
//   Label: LAB_005d76a3
// 005d76a6: MOV EBP,dword ptr [ESI + EAX*0x1]
// 005d76a9: PUSH EBP
// 005d76aa: CALL shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
//   XREF to: 005c84c0 (UNCONDITIONAL_CALL)
// 005d76af: ADD ESP,0x4
// 005d76b2: TEST EAX,EAX
// 005d76b4: JZ 0x005d76cb
//   XREF to: 005d76cb (CONDITIONAL_JUMP)
// 005d76b6: INC EBX
// 005d76b7: MOV ECX,dword ptr [EDI + 0x38]
// 005d76ba: ADD ESI,0x4
// 005d76bd: CMP EBX,ECX
// 005d76bf: JC 0x005d76a3
//   XREF to: 005d76a3 (CONDITIONAL_JUMP)
// 005d76c1: MOV EAX,0x1
//   Label: LAB_005d76c1
// 005d76c6: POP EBP
// 005d76c7: POP EDI
// 005d76c8: POP ESI
// 005d76c9: POP EBX
// 005d76ca: RET
// 005d76cb: PUSH 0x654789
//   Label: LAB_005d76cb
//   XREF to: 00654789 (DATA)
// 005d76d0: CALL shape_superopt.cpp_logToFile_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d76d5: ADD ESP,0x4
// 005d76d8: XOR EAX,EAX
// 005d76da: POP EBP
// 005d76db: POP EDI
// 005d76dc: POP ESI
// 005d76dd: POP EBX
// 005d76de: RET
