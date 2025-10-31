// Name: crt_unknown.c_FUN_00600c80
// Address: 00600c80
// Address Range: [[00600c80, 00600ced]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600c80()
// Cross-references:
//   crt_io.c_ftruncate_FUN_00600cf0 (00600cf0) at 00600dca [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_write_FUN_006084ec
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_lseek_FUN_00606690

#include "nocturne.h"

void crt_unknown_c_FUN_00600c80(void)

{
  int iVar1;
  SIZE_T SVar2;
  SIZE_T count;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  int in_stack_00000008;
  SIZE_T in_stack_0000000c;
  undefined1 auStack_204 [504];
  
  iVar1 = crt_stdio_c_lseek_FUN_00606690(in_stack_00000004,in_stack_00000008,0);
  if (iVar1 == in_stack_00000008) {
    crt_memory_c_memset_FUN_005fde40(&stack0xfffffdf8,0,0x200);
    do {
      count = 0x200;
      if ((int)in_stack_0000000c < 0x200) {
        count = in_stack_0000000c;
      }
      SVar2 = crt_io_c_write_FUN_006084ec(in_stack_00000004,auStack_204,count);
    } while ((SVar2 == count) &&
            (in_stack_0000000c = in_stack_0000000c - count, in_stack_0000000c != 0));
  }
  return;
}


// Assembly code:
// 00600c80: PUSH EBX
//   Label: crt_unknown.c_FUN_00600c80
// 00600c81: PUSH ESI
// 00600c82: PUSH EDI
// 00600c83: SUB ESP,0x200
// 00600c89: MOV EDI,dword ptr [ESP + 0x210]
//   XREF to: Stack[0x4] (READ)
// 00600c90: MOV EBX,dword ptr [ESP + 0x214]
//   XREF to: Stack[0x8] (READ)
// 00600c97: MOV ESI,dword ptr [ESP + 0x218]
//   XREF to: Stack[0xc] (READ)
// 00600c9e: PUSH 0x0
// 00600ca0: PUSH EBX
// 00600ca1: PUSH EDI
// 00600ca2: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 00600ca7: ADD ESP,0xc
// 00600caa: CMP EAX,EBX
// 00600cac: JNZ 0x00600ce4
//   XREF to: 00600ce4 (CONDITIONAL_JUMP)
// 00600cae: PUSH 0x200
// 00600cb3: PUSH 0x0
// 00600cb5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x20c] (DATA)
// 00600cb9: PUSH EAX
// 00600cba: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00600cbf: ADD ESP,0xc
// 00600cc2: MOV EBX,0x200
//   Label: LAB_00600cc2
// 00600cc7: CMP ESI,EBX
// 00600cc9: JGE 0x00600ccd
//   XREF to: 00600ccd (CONDITIONAL_JUMP)
// 00600ccb: MOV EBX,ESI
// 00600ccd: PUSH EBX
//   Label: LAB_00600ccd
// 00600cce: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20c] (DATA)
// 00600cd2: PUSH EAX
// 00600cd3: PUSH EDI
// 00600cd4: CALL crt_io.c_write_FUN_006084ec
//   XREF to: 006084ec (UNCONDITIONAL_CALL)
// 00600cd9: ADD ESP,0xc
// 00600cdc: CMP EAX,EBX
// 00600cde: JNZ 0x00600ce4
//   XREF to: 00600ce4 (CONDITIONAL_JUMP)
// 00600ce0: SUB ESI,EBX
// 00600ce2: JNZ 0x00600cc2
//   XREF to: 00600cc2 (CONDITIONAL_JUMP)
// 00600ce4: ADD ESP,0x200
//   Label: LAB_00600ce4
// 00600cea: POP EDI
// 00600ceb: POP ESI
// 00600cec: POP EBX
// 00600ced: RET
