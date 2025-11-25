// Name: shape_meshlod.cpp_crc32UpdateDword_FUN_0051c480
// Address: 0051c480
// Address Range: [[0051c480, 0051c535]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_crc32UpdateDword_FUN_0051c480(uint * crc_ptr, uint dword_value)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_crc32UpdateDword_FUN_0051c480(uint *crc_ptr,uint dword_value)

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
// 0051c480: PUSH EBX
//   Label: shape_meshlod.cpp_crc32UpdateDword_FUN_0051c480
// 0051c481: PUSH ESI
// 0051c482: PUSH EDI
// 0051c483: PUSH EBP
// 0051c484: MOV ESI,0x4
// 0051c489: LEA ECX,[ESP + 0x18]
//   XREF to: Stack[0x8] (DATA)
// 0051c48d: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051c491: MOV EDI,0x4c11db7
// 0051c496: MOV EBP,0x80000000
// 0051c49b: MOV EAX,EDX
// 0051c49d: MOV BL,byte ptr [ECX]
//   Label: LAB_0051c49d
//   XREF to: Stack[0x8] (DATA)
// 0051c49f: AND EBX,0xff
// 0051c4a5: SHL EBX,0x18
// 0051c4a8: XOR dword ptr [EDX],EBX
// 0051c4aa: MOV EBX,dword ptr [EDX]
// 0051c4ac: TEST EBP,EBX
// 0051c4ae: JZ 0x0051c507
//   XREF to: 0051c507 (CONDITIONAL_JUMP)
// 0051c4b0: ADD EBX,EBX
// 0051c4b2: XOR EBX,EDI
// 0051c4b4: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c4b4
// 0051c4b6: TEST EBP,EBX
// 0051c4b8: JZ 0x0051c50b
//   XREF to: 0051c50b (CONDITIONAL_JUMP)
// 0051c4ba: ADD EBX,EBX
// 0051c4bc: XOR EBX,EDI
// 0051c4be: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c4be
// 0051c4c0: TEST EBP,EBX
// 0051c4c2: JZ 0x0051c50f
//   XREF to: 0051c50f (CONDITIONAL_JUMP)
// 0051c4c4: ADD EBX,EBX
// 0051c4c6: XOR EBX,EDI
// 0051c4c8: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c4c8
// 0051c4ca: TEST EBP,EBX
// 0051c4cc: JZ 0x0051c513
//   XREF to: 0051c513 (CONDITIONAL_JUMP)
// 0051c4ce: ADD EBX,EBX
// 0051c4d0: XOR EBX,EDI
// 0051c4d2: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c4d2
// 0051c4d4: TEST EBP,EBX
// 0051c4d6: JZ 0x0051c517
//   XREF to: 0051c517 (CONDITIONAL_JUMP)
// 0051c4d8: ADD EBX,EBX
// 0051c4da: XOR EBX,EDI
// 0051c4dc: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c4dc
// 0051c4de: TEST EBP,EBX
// 0051c4e0: JZ 0x0051c51b
//   XREF to: 0051c51b (CONDITIONAL_JUMP)
// 0051c4e2: ADD EBX,EBX
// 0051c4e4: XOR EBX,EDI
// 0051c4e6: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c4e6
// 0051c4e8: TEST EBP,EBX
// 0051c4ea: JZ 0x0051c51f
//   XREF to: 0051c51f (CONDITIONAL_JUMP)
// 0051c4ec: ADD EBX,EBX
// 0051c4ee: XOR EBX,EDI
// 0051c4f0: MOV dword ptr [EAX],EBX
//   Label: LAB_0051c4f0
// 0051c4f2: TEST EBP,EBX
// 0051c4f4: JZ 0x0051c523
//   XREF to: 0051c523 (CONDITIONAL_JUMP)
// 0051c4f6: ADD EBX,EBX
// 0051c4f8: XOR EBX,EDI
// 0051c4fa: INC ECX
// 0051c4fb: DEC ESI
// 0051c4fc: MOV dword ptr [EAX],EBX
// 0051c4fe: TEST ESI,ESI
// 0051c500: JG 0x0051c49d
//   XREF to: 0051c49d (CONDITIONAL_JUMP)
// 0051c502: POP EBP
// 0051c503: POP EDI
// 0051c504: POP ESI
// 0051c505: POP EBX
// 0051c506: RET
// 0051c507: ADD EBX,EBX
//   Label: LAB_0051c507
// 0051c509: JMP 0x0051c4b4
//   XREF to: 0051c4b4 (UNCONDITIONAL_JUMP)
// 0051c50b: ADD EBX,EBX
//   Label: LAB_0051c50b
// 0051c50d: JMP 0x0051c4be
//   XREF to: 0051c4be (UNCONDITIONAL_JUMP)
// 0051c50f: ADD EBX,EBX
//   Label: LAB_0051c50f
// 0051c511: JMP 0x0051c4c8
//   XREF to: 0051c4c8 (UNCONDITIONAL_JUMP)
// 0051c513: ADD EBX,EBX
//   Label: LAB_0051c513
// 0051c515: JMP 0x0051c4d2
//   XREF to: 0051c4d2 (UNCONDITIONAL_JUMP)
// 0051c517: ADD EBX,EBX
//   Label: LAB_0051c517
// 0051c519: JMP 0x0051c4dc
//   XREF to: 0051c4dc (UNCONDITIONAL_JUMP)
// 0051c51b: ADD EBX,EBX
//   Label: LAB_0051c51b
// 0051c51d: JMP 0x0051c4e6
//   XREF to: 0051c4e6 (UNCONDITIONAL_JUMP)
// 0051c51f: ADD EBX,EBX
//   Label: LAB_0051c51f
// 0051c521: JMP 0x0051c4f0
//   XREF to: 0051c4f0 (UNCONDITIONAL_JUMP)
// 0051c523: ADD EBX,EBX
//   Label: LAB_0051c523
// 0051c525: INC ECX
// 0051c526: DEC ESI
// 0051c527: MOV dword ptr [EAX],EBX
// 0051c529: TEST ESI,ESI
// 0051c52b: JG 0x0051c49d
//   XREF to: 0051c49d (CONDITIONAL_JUMP)
// 0051c531: POP EBP
// 0051c532: POP EDI
// 0051c533: POP ESI
// 0051c534: POP EBX
// 0051c535: RET
