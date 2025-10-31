// Name: crt_fstream.cpp_filebuf_sync_FUN_0060dc5e
// Address: 0060dc5e
// Address Range: [[0060dc5e, 0060dcf4]]
// Convention: __watcallStack
// Signature: int crt_fstream.cpp_filebuf_sync_FUN_0060dc5e(filebuf * this_ptr)
// Cross-references:
//   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 (0060bdf9) at 0060be1d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_lseek_FUN_00606690

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_sync_FUN_0060dc5e(filebuf *this_ptr)

{
  char *pcVar1;
  int iVar2;
  
  if ((this_ptr->streambuf).__put_ptr == (this_ptr->streambuf).__put_base) {
    pcVar1 = (this_ptr->streambuf).__get_ptr;
    if ((this_ptr->streambuf).__get_end != pcVar1) {
      if ((this_ptr->__file_mode & 0x80) == 0) {
        iVar2 = (int)pcVar1 - (int)(this_ptr->streambuf).__get_end;
      }
      else {
        pcVar1 = (this_ptr->streambuf).__get_end;
        iVar2 = 0;
        if (pcVar1 != (char *)0x0) {
          while (pcVar1 = pcVar1 + -1, (this_ptr->streambuf).__get_ptr <= pcVar1) {
            iVar2 = iVar2 - ((*pcVar1 == '\n') + 1);
          }
        }
      }
      iVar2 = crt_stdio_c_lseek_FUN_00606690(this_ptr->__file_handle,iVar2,1);
      if (iVar2 < 0) {
        return -1;
      }
      (this_ptr->streambuf).__get_base = (char *)0x0;
      (this_ptr->streambuf).__get_ptr = (char *)0x0;
      (this_ptr->streambuf).__get_end = (char *)0x0;
      return 0;
    }
  }
  else {
    iVar2 = (*this_ptr->__vtable->overflow)(&this_ptr->streambuf,-1);
    if (iVar2 == -1) {
      return -1;
    }
  }
  return 0;
}


// Assembly code:
// 0060dc5e: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_sync_FUN_0060dc5e
// 0060dc5f: PUSH EBP
// 0060dc60: MOV EBP,ESP
// 0060dc62: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060dc65: MOV EAX,dword ptr [EBX + 0x20]
// 0060dc68: SUB EAX,dword ptr [EBX + 0x18]
// 0060dc6b: JNZ 0x0060dca1
//   XREF to: 0060dca1 (CONDITIONAL_JUMP)
// 0060dc6d: MOV EAX,dword ptr [EBX + 0x10]
// 0060dc70: MOV ECX,dword ptr [EBX + 0x14]
// 0060dc73: SUB EAX,ECX
// 0060dc75: JZ 0x0060dcb2
//   XREF to: 0060dcb2 (CONDITIONAL_JUMP)
// 0060dc77: TEST byte ptr [EBX + 0x30],0x80
// 0060dc7b: JZ 0x0060dcb7
//   XREF to: 0060dcb7 (CONDITIONAL_JUMP)
// 0060dc7d: MOV ECX,dword ptr [EBX + 0x10]
// 0060dc80: XOR EDX,EDX
// 0060dc82: MOV EAX,ECX
// 0060dc84: TEST ECX,ECX
// 0060dc86: JZ 0x0060dcc0
//   XREF to: 0060dcc0 (CONDITIONAL_JUMP)
// 0060dc88: DEC EAX
//   Label: LAB_0060dc88
// 0060dc89: MOV ECX,dword ptr [EBX + 0x14]
// 0060dc8c: CMP EAX,ECX
// 0060dc8e: JC 0x0060dcc0
//   XREF to: 0060dcc0 (CONDITIONAL_JUMP)
// 0060dc90: CMP byte ptr [EAX],0xa
// 0060dc93: SETZ CL
// 0060dc96: AND ECX,0xff
// 0060dc9c: INC ECX
// 0060dc9d: SUB EDX,ECX
// 0060dc9f: JMP 0x0060dc88
//   XREF to: 0060dc88 (UNCONDITIONAL_JUMP)
// 0060dca1: PUSH -0x1
//   Label: LAB_0060dca1
// 0060dca3: MOV EAX,dword ptr [EBX + 0x28]
// 0060dca6: PUSH EBX
// 0060dca7: CALL dword ptr [EAX + 0xc]
// 0060dcaa: ADD ESP,0x8
// 0060dcad: CMP EAX,-0x1
// 0060dcb0: JZ 0x0060dcb4
//   XREF to: 0060dcb4 (CONDITIONAL_JUMP)
// 0060dcb2: XOR EAX,EAX
//   Label: LAB_0060dcb2
// 0060dcb4: POP EBP
//   Label: LAB_0060dcb4
// 0060dcb5: POP EBX
// 0060dcb6: RET
// 0060dcb7: MOV EAX,ECX
//   Label: LAB_0060dcb7
// 0060dcb9: MOV EDX,dword ptr [EBX + 0x10]
// 0060dcbc: SUB EAX,EDX
// 0060dcbe: MOV EDX,EAX
// 0060dcc0: PUSH 0x1
//   Label: LAB_0060dcc0
// 0060dcc2: PUSH EDX
// 0060dcc3: MOV EAX,dword ptr [EBX + 0x2c]
// 0060dcc6: PUSH EAX
// 0060dcc7: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 0060dccc: ADD ESP,0xc
// 0060dccf: TEST EAX,EAX
// 0060dcd1: JL 0x0060dced
//   XREF to: 0060dced (CONDITIONAL_JUMP)
// 0060dcd3: MOV dword ptr [EBX + 0xc],0x0
// 0060dcda: MOV dword ptr [EBX + 0x14],0x0
// 0060dce1: MOV dword ptr [EBX + 0x10],0x0
// 0060dce8: XOR EAX,EAX
// 0060dcea: POP EBP
// 0060dceb: POP EBX
// 0060dcec: RET
// 0060dced: MOV EAX,0xffffffff
//   Label: LAB_0060dced
// 0060dcf2: POP EBP
// 0060dcf3: POP EBX
// 0060dcf4: RET
