// Name: shape_meshlod.cpp_crc32UpdateVector3f_FUN_0051c600
// Address: 0051c600
// Address Range: [[0051c600, 0051c6e9]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_crc32UpdateVector3f_FUN_0051c600(uint * crc_ptr, CVector3f * vector_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_crc32UpdateVector3f_FUN_0051c600(uint *crc_ptr,CVector3f *vector_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0xc;
  do {
    while( true ) {
      uVar2 = *crc_ptr ^ (uint)*(byte *)&vector_ptr->x << 0x18;
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = uVar2 * 2;
      }
      else {
        uVar2 = uVar2 * 2 ^ 0x4c11db7;
      }
      *crc_ptr = uVar2;
      if ((uVar2 & 0x80000000) != 0) break;
      vector_ptr = (CVector3f *)((int)&vector_ptr->x + 1);
      iVar1 = iVar1 + -1;
      *crc_ptr = uVar2 * 2;
      if (iVar1 < 1) {
        return;
      }
    }
    vector_ptr = (CVector3f *)((int)&vector_ptr->x + 1);
    iVar1 = iVar1 + -1;
    *crc_ptr = uVar2 * 2 ^ 0x4c11db7;
  } while (0 < iVar1);
  return;
}


// Assembly code:
// 0051c600: PUSH EBX
//   Label: shape_meshlod.cpp_crc32UpdateVector3f_FUN_0051c600
// 0051c601: PUSH ESI
// 0051c602: PUSH EDI
// 0051c603: PUSH EBP
// 0051c604: MOV ECX,0xc
// 0051c609: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051c60d: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051c611: MOV EDI,0x80000000
// 0051c616: MOV EAX,EDX
// 0051c618: MOV BL,byte ptr [ESI]
//   Label: LAB_0051c618
// 0051c61a: AND EBX,0xff
// 0051c620: MOV EBP,dword ptr [EDX]
// 0051c622: SHL EBX,0x18
// 0051c625: XOR EBP,EBX
// 0051c627: MOV dword ptr [EDX],EBP
// 0051c629: TEST EDI,EBP
// 0051c62b: JZ 0x0051c6b6
//   XREF to: 0051c6b6 (CONDITIONAL_JUMP)
// 0051c631: LEA EBX,[EBP + EBP*0x1]
// 0051c635: XOR EBX,0x4c11db7
// 0051c63b: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c63b
// 0051c63d: TEST EDI,EBX
// 0051c63f: JZ 0x0051c6bf
//   XREF to: 0051c6bf (CONDITIONAL_JUMP)
// 0051c645: ADD EBX,EBX
// 0051c647: XOR EBX,0x4c11db7
// 0051c64d: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c64d
// 0051c64f: TEST EDI,EBX
// 0051c651: JZ 0x0051c6c3
//   XREF to: 0051c6c3 (CONDITIONAL_JUMP)
// 0051c657: ADD EBX,EBX
// 0051c659: XOR EBX,0x4c11db7
// 0051c65f: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c65f
// 0051c661: TEST EDI,EBX
// 0051c663: JZ 0x0051c6c7
//   XREF to: 0051c6c7 (CONDITIONAL_JUMP)
// 0051c665: ADD EBX,EBX
// 0051c667: XOR EBX,0x4c11db7
// 0051c66d: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c66d
// 0051c66f: TEST EDI,EBX
// 0051c671: JZ 0x0051c6cb
//   XREF to: 0051c6cb (CONDITIONAL_JUMP)
// 0051c673: ADD EBX,EBX
// 0051c675: XOR EBX,0x4c11db7
// 0051c67b: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c67b
// 0051c67d: TEST EDI,EBX
// 0051c67f: JZ 0x0051c6cf
//   XREF to: 0051c6cf (CONDITIONAL_JUMP)
// 0051c681: ADD EBX,EBX
// 0051c683: XOR EBX,0x4c11db7
// 0051c689: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c689
// 0051c68b: TEST EDI,EBX
// 0051c68d: JZ 0x0051c6d3
//   XREF to: 0051c6d3 (CONDITIONAL_JUMP)
// 0051c68f: ADD EBX,EBX
// 0051c691: XOR EBX,0x4c11db7
// 0051c697: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c697
// 0051c699: TEST EDI,EBX
// 0051c69b: JZ 0x0051c6d7
//   XREF to: 0051c6d7 (CONDITIONAL_JUMP)
// 0051c69d: ADD EBX,EBX
// 0051c69f: XOR EBX,0x4c11db7
// 0051c6a5: INC ESI
// 0051c6a6: DEC ECX
// 0051c6a7: MOV dword ptr [EAX],EBX
// 0051c6a9: TEST ECX,ECX
// 0051c6ab: JG 0x0051c618
//   XREF to: 0051c618 (CONDITIONAL_JUMP)
// 0051c6b1: POP EBP
// 0051c6b2: POP EDI
// 0051c6b3: POP ESI
// 0051c6b4: POP EBX
// 0051c6b5: RET
// 0051c6b6: LEA EBX,[EBP + EBP*0x1]
//   Label: LAB_0051c6b6
// 0051c6ba: JMP 0x0051c63b
//   XREF to: 0051c63b (UNCONDITIONAL_JUMP)
// 0051c6bf: ADD EBX,EBX
//   Label: LAB_0051c6bf
// 0051c6c1: JMP 0x0051c64d
//   XREF to: 0051c64d (UNCONDITIONAL_JUMP)
// 0051c6c3: ADD EBX,EBX
//   Label: LAB_0051c6c3
// 0051c6c5: JMP 0x0051c65f
//   XREF to: 0051c65f (UNCONDITIONAL_JUMP)
// 0051c6c7: ADD EBX,EBX
//   Label: LAB_0051c6c7
// 0051c6c9: JMP 0x0051c66d
//   XREF to: 0051c66d (UNCONDITIONAL_JUMP)
// 0051c6cb: ADD EBX,EBX
//   Label: LAB_0051c6cb
// 0051c6cd: JMP 0x0051c67b
//   XREF to: 0051c67b (UNCONDITIONAL_JUMP)
// 0051c6cf: ADD EBX,EBX
//   Label: LAB_0051c6cf
// 0051c6d1: JMP 0x0051c689
//   XREF to: 0051c689 (UNCONDITIONAL_JUMP)
// 0051c6d3: ADD EBX,EBX
//   Label: LAB_0051c6d3
// 0051c6d5: JMP 0x0051c697
//   XREF to: 0051c697 (UNCONDITIONAL_JUMP)
// 0051c6d7: ADD EBX,EBX
//   Label: LAB_0051c6d7
// 0051c6d9: INC ESI
// 0051c6da: DEC ECX
// 0051c6db: MOV dword ptr [EAX],EBX
// 0051c6dd: TEST ECX,ECX
// 0051c6df: JG 0x0051c618
//   XREF to: 0051c618 (CONDITIONAL_JUMP)
// 0051c6e5: POP EBP
// 0051c6e6: POP EDI
// 0051c6e7: POP ESI
// 0051c6e8: POP EBX
// 0051c6e9: RET
