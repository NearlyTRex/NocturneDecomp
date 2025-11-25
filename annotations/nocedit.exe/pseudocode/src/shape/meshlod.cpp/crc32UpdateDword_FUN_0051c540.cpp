// Name: shape_meshlod.cpp_crc32UpdateDword_FUN_0051c540
// Address: 0051c540
// Address Range: [[0051c540, 0051c5f5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_crc32UpdateDword_FUN_0051c540(uint * crc_ptr, uint dword_value)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_crc32UpdateDword_FUN_0051c540(uint *crc_ptr,uint dword_value)

{
  uint *puVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  
  iVar3 = 4;
  puVar1 = &dword_value;
  do {
    while( true ) {
      *crc_ptr = *crc_ptr ^ (uint)(byte)*puVar1 << 0x18;
      uVar2 = *crc_ptr;
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
      puVar1 = (uint *)((int)puVar1 + 1);
      iVar3 = iVar3 + -1;
      *crc_ptr = uVar2 * 2;
      if (iVar3 < 1) {
        return;
      }
    }
    puVar1 = (uint *)((int)puVar1 + 1);
    iVar3 = iVar3 + -1;
    *crc_ptr = uVar2 * 2 ^ 0x4c11db7;
  } while (0 < iVar3);
  return;
}


// Assembly code:
// 0051c540: PUSH EBX
//   Label: shape_meshlod.cpp_crc32UpdateDword_FUN_0051c540
// 0051c541: PUSH ESI
// 0051c542: PUSH EDI
// 0051c543: PUSH EBP
// 0051c544: MOV ESI,0x4
// 0051c549: LEA ECX,[ESP + 0x18]
//   XREF to: Stack[0x8] (DATA)
// 0051c54d: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051c551: MOV EDI,0x4c11db7
// 0051c556: MOV EBP,0x80000000
// 0051c55b: MOV EAX,EDX
// 0051c55d: MOV BL,byte ptr [ECX]
//   Label: LAB_0051c55d
//   XREF to: Stack[0x8] (DATA)
// 0051c55f: AND EBX,0xff
// 0051c565: SHL EBX,0x18
// 0051c568: XOR dword ptr [EDX],EBX
// 0051c56a: MOV EBX,dword ptr [EDX]
// 0051c56c: TEST EBP,EBX
// 0051c56e: JZ 0x0051c5c7
//   XREF to: 0051c5c7 (CONDITIONAL_JUMP)
// 0051c570: ADD EBX,EBX
// 0051c572: XOR EBX,EDI
// 0051c574: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c574
// 0051c576: TEST EBP,EBX
// 0051c578: JZ 0x0051c5cb
//   XREF to: 0051c5cb (CONDITIONAL_JUMP)
// 0051c57a: ADD EBX,EBX
// 0051c57c: XOR EBX,EDI
// 0051c57e: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c57e
// 0051c580: TEST EBP,EBX
// 0051c582: JZ 0x0051c5cf
//   XREF to: 0051c5cf (CONDITIONAL_JUMP)
// 0051c584: ADD EBX,EBX
// 0051c586: XOR EBX,EDI
// 0051c588: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c588
// 0051c58a: TEST EBP,EBX
// 0051c58c: JZ 0x0051c5d3
//   XREF to: 0051c5d3 (CONDITIONAL_JUMP)
// 0051c58e: ADD EBX,EBX
// 0051c590: XOR EBX,EDI
// 0051c592: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c592
// 0051c594: TEST EBP,EBX
// 0051c596: JZ 0x0051c5d7
//   XREF to: 0051c5d7 (CONDITIONAL_JUMP)
// 0051c598: ADD EBX,EBX
// 0051c59a: XOR EBX,EDI
// 0051c59c: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c59c
// 0051c59e: TEST EBP,EBX
// 0051c5a0: JZ 0x0051c5db
//   XREF to: 0051c5db (CONDITIONAL_JUMP)
// 0051c5a2: ADD EBX,EBX
// 0051c5a4: XOR EBX,EDI
// 0051c5a6: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c5a6
// 0051c5a8: TEST EBP,EBX
// 0051c5aa: JZ 0x0051c5df
//   XREF to: 0051c5df (CONDITIONAL_JUMP)
// 0051c5ac: ADD EBX,EBX
// 0051c5ae: XOR EBX,EDI
// 0051c5b0: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c5b0
// 0051c5b2: TEST EBP,EBX
// 0051c5b4: JZ 0x0051c5e3
//   XREF to: 0051c5e3 (CONDITIONAL_JUMP)
// 0051c5b6: ADD EBX,EBX
// 0051c5b8: XOR EBX,EDI
// 0051c5ba: INC ECX
// 0051c5bb: DEC ESI
// 0051c5bc: MOV dword ptr [EAX],EBX
// 0051c5be: TEST ESI,ESI
// 0051c5c0: JG 0x0051c55d
//   XREF to: 0051c55d (CONDITIONAL_JUMP)
// 0051c5c2: POP EBP
// 0051c5c3: POP EDI
// 0051c5c4: POP ESI
// 0051c5c5: POP EBX
// 0051c5c6: RET
// 0051c5c7: ADD EBX,EBX
//   Label: LAB_0051c5c7
// 0051c5c9: JMP 0x0051c574
//   XREF to: 0051c574 (UNCONDITIONAL_JUMP)
// 0051c5cb: ADD EBX,EBX
//   Label: LAB_0051c5cb
// 0051c5cd: JMP 0x0051c57e
//   XREF to: 0051c57e (UNCONDITIONAL_JUMP)
// 0051c5cf: ADD EBX,EBX
//   Label: LAB_0051c5cf
// 0051c5d1: JMP 0x0051c588
//   XREF to: 0051c588 (UNCONDITIONAL_JUMP)
// 0051c5d3: ADD EBX,EBX
//   Label: LAB_0051c5d3
// 0051c5d5: JMP 0x0051c592
//   XREF to: 0051c592 (UNCONDITIONAL_JUMP)
// 0051c5d7: ADD EBX,EBX
//   Label: LAB_0051c5d7
// 0051c5d9: JMP 0x0051c59c
//   XREF to: 0051c59c (UNCONDITIONAL_JUMP)
// 0051c5db: ADD EBX,EBX
//   Label: LAB_0051c5db
// 0051c5dd: JMP 0x0051c5a6
//   XREF to: 0051c5a6 (UNCONDITIONAL_JUMP)
// 0051c5df: ADD EBX,EBX
//   Label: LAB_0051c5df
// 0051c5e1: JMP 0x0051c5b0
//   XREF to: 0051c5b0 (UNCONDITIONAL_JUMP)
// 0051c5e3: ADD EBX,EBX
//   Label: LAB_0051c5e3
// 0051c5e5: INC ECX
// 0051c5e6: DEC ESI
// 0051c5e7: MOV dword ptr [EAX],EBX
// 0051c5e9: TEST ESI,ESI
// 0051c5eb: JG 0x0051c55d
//   XREF to: 0051c55d (CONDITIONAL_JUMP)
// 0051c5f1: POP EBP
// 0051c5f2: POP EDI
// 0051c5f3: POP ESI
// 0051c5f4: POP EBX
// 0051c5f5: RET
