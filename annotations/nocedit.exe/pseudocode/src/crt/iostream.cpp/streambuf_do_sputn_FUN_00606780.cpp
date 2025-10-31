// Name: crt_iostream.cpp_streambuf_do_sputn_FUN_00606780
// Address: 00606780
// Address Range: [[00606780, 00606831]]
// Convention: __watcallStack
// Signature: int crt_iostream.cpp_streambuf_do_sputn_FUN_00606780(streambuf * buffer, void * input_buffer, SIZE_T bytes_to_write)

#include "nocturne.h"

int __watcallStack
crt_iostream_cpp_streambuf_do_sputn_FUN_00606780
          (streambuf *buffer,void *input_buffer,SIZE_T bytes_to_write)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int local_14;
  
  bVar6 = 0;
  local_14 = 0;
  do {
    if ((int)bytes_to_write < 1) {
      return local_14;
    }
    if (buffer->__put_base == (char *)0x0) {
      iVar2 = (**(code **)((int)buffer[1].__b_lock + 0xc))();
      if (iVar2 == -1) {
        return local_14;
      }
      uVar1 = 1;
    }
    else {
      uVar1 = (int)buffer->__put_end - (int)buffer->__put_ptr;
      if ((int)uVar1 < 1) {
        iVar2 = (**(code **)((int)buffer[1].__b_lock + 0xc))();
        if (iVar2 == -1) {
          return local_14;
        }
        uVar1 = (int)buffer->__put_end - (int)buffer->__put_ptr;
      }
      if ((int)bytes_to_write < (int)uVar1) {
        uVar1 = bytes_to_write;
      }
      pcVar4 = (char *)input_buffer;
      pcVar5 = buffer->__put_ptr;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
        pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      }
      buffer->__put_ptr = buffer->__put_ptr + uVar1;
    }
    input_buffer = (void *)((int)input_buffer + uVar1);
    local_14 = local_14 + uVar1;
    bytes_to_write = bytes_to_write - uVar1;
  } while( true );
}


// Assembly code:
// 00606780: PUSH EBX
//   Label: crt_iostream.cpp_streambuf_do_sputn_FUN_00606780
// 00606781: PUSH ESI
// 00606782: PUSH EDI
// 00606783: PUSH EBP
// 00606784: SUB ESP,0x4
// 00606787: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060678b: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0060678f: XOR EDX,EDX
// 00606791: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 00606794: CMP dword ptr [ESP + 0x20],0x0
//   Label: LAB_00606794
//   XREF to: Stack[0xc] (READ)
// 00606799: JLE 0x00606827
//   XREF to: 00606827 (CONDITIONAL_JUMP)
// 0060679f: MOV EAX,dword ptr [EBX + 0x18]
// 006067a2: TEST EAX,EAX
// 006067a4: JZ 0x0060680b
//   XREF to: 0060680b (CONDITIONAL_JUMP)
// 006067a6: MOV EAX,dword ptr [EBX + 0x1c]
// 006067a9: MOV EDX,dword ptr [EBX + 0x20]
// 006067ac: SUB EAX,EDX
// 006067ae: MOV EDX,EAX
// 006067b0: TEST EAX,EAX
// 006067b2: JLE 0x006067ee
//   XREF to: 006067ee (CONDITIONAL_JUMP)
// 006067b4: MOV ESI,dword ptr [ESP + 0x20]
//   Label: LAB_006067b4
//   XREF to: Stack[0xc] (READ)
// 006067b8: CMP EDX,ESI
// 006067ba: JLE 0x006067be
//   XREF to: 006067be (CONDITIONAL_JUMP)
// 006067bc: MOV EDX,ESI
// 006067be: MOV ECX,EDX
//   Label: LAB_006067be
// 006067c0: MOV ESI,EBP
// 006067c2: MOV EDI,dword ptr [EBX + 0x20]
// 006067c5: PUSH EDI
// 006067c6: MOV EAX,ECX
// 006067c8: SHR ECX,0x2
// 006067cb: MOVSD.REP ES:EDI,ESI
// 006067cd: MOV CL,AL
// 006067cf: AND CL,0x3
// 006067d2: MOVSB.REP ES:EDI,ESI
// 006067d4: POP EDI
// 006067d5: ADD dword ptr [EBX + 0x20],EDX
// 006067d8: MOV EAX,dword ptr [ESP]
//   Label: LAB_006067d8
//   XREF to: Stack[-0x14] (DATA)
// 006067db: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 006067df: ADD EBP,EDX
// 006067e1: ADD EAX,EDX
// 006067e3: SUB ECX,EDX
// 006067e5: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 006067e8: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[0xc] (WRITE)
// 006067ec: JMP 0x00606794
//   XREF to: 00606794 (UNCONDITIONAL_JUMP)
// 006067ee: PUSH -0x1
//   Label: LAB_006067ee
// 006067f0: MOV EAX,dword ptr [EBX + 0x28]
// 006067f3: PUSH EBX
// 006067f4: CALL dword ptr [EAX + 0xc]
// 006067f7: ADD ESP,0x8
// 006067fa: CMP EAX,-0x1
// 006067fd: JZ 0x00606827
//   XREF to: 00606827 (CONDITIONAL_JUMP)
// 006067ff: MOV EAX,dword ptr [EBX + 0x1c]
// 00606802: MOV EDX,dword ptr [EBX + 0x20]
// 00606805: SUB EAX,EDX
// 00606807: MOV EDX,EAX
// 00606809: JMP 0x006067b4
//   XREF to: 006067b4 (UNCONDITIONAL_JUMP)
// 0060680b: XOR EDX,EDX
//   Label: LAB_0060680b
// 0060680d: MOV DL,byte ptr [EBP]
// 00606810: PUSH EDX
// 00606811: MOV EAX,dword ptr [EBX + 0x28]
// 00606814: PUSH EBX
// 00606815: CALL dword ptr [EAX + 0xc]
// 00606818: ADD ESP,0x8
// 0060681b: CMP EAX,-0x1
// 0060681e: JZ 0x00606827
//   XREF to: 00606827 (CONDITIONAL_JUMP)
// 00606820: MOV EDX,0x1
// 00606825: JMP 0x006067d8
//   XREF to: 006067d8 (UNCONDITIONAL_JUMP)
// 00606827: MOV EAX,dword ptr [ESP]
//   Label: LAB_00606827
//   XREF to: Stack[-0x14] (DATA)
// 0060682a: ADD ESP,0x4
// 0060682d: POP EBP
// 0060682e: POP EDI
// 0060682f: POP ESI
// 00606830: POP EBX
// 00606831: RET
