// Name: sound_mp3.cpp_FUN_00533c50
// Address: 00533c50
// Address Range: [[00533c50, 00533d2b]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_00533c50()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00535627 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0067e218
//   undefined4 DAT_0067e2d0
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_00533c50(undefined4 param_1, undefined1 param_2,
   undefined1 param_3, undefined1 param_4, undefined4 param_5) */

int sound_mp3_cpp_FUN_00533c50(void)

{
  float10 fVar1;
  double dVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000018;
  int local_c;
  
  fVar1 = (float10)(*(int *)(&DAT_0067e2d0 + in_stack_00000004[3] * 4 + *in_stack_00000004 * 0xb4) *
                   0x90) /
          (float10)*(double *)(&DAT_0067e218 + in_stack_00000004[4] * 8 + *in_stack_00000004 * 0x20)
  ;
  dVar2 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44(*in_stack_00000004 * 0x20,in_stack_00000004));
  local_c = (int)ROUND(fVar1);
  if (*SUB84(dVar2,0) == 0) {
    if (in_stack_00000018 == 1) {
      local_c = local_c / 2 + -9;
    }
    else {
      local_c = local_c / 2 + -0x11;
    }
  }
  else if (in_stack_00000018 == 1) {
    local_c = local_c + -0x11;
  }
  else {
    local_c = local_c + -0x20;
  }
  if (*(int *)(in_stack_00000008 + 0x14) != 0) {
    local_c = local_c + 1;
  }
  if (*(int *)(in_stack_00000008 + 8) == 0) {
    return local_c + -4;
  }
  return local_c + -6;
}


// Assembly code:
// 00533c50: PUSH EBX
//   Label: sound_mp3.cpp_FUN_00533c50
// 00533c51: PUSH ESI
// 00533c52: SUB ESP,0x8
// 00533c55: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533c59: MOV EDX,dword ptr [EDX]
// 00533c5b: LEA EAX,[EDX*0x4 + 0x0]
// 00533c62: SUB EAX,EDX
// 00533c64: SHL EAX,0x2
// 00533c67: MOV EDX,EAX
// 00533c69: SHL EAX,0x4
// 00533c6c: SUB EAX,EDX
// 00533c6e: MOV EDX,EAX
// 00533c70: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533c74: MOV EAX,dword ptr [EAX + 0xc]
// 00533c77: MOV EDX,dword ptr [EDX + EAX*0x4 + 0x67e2d0]
//   XREF to: 0067e2d0 (DATA)
// 00533c7e: LEA EAX,[EDX*0x8 + 0x0]
// 00533c85: ADD EAX,EDX
// 00533c87: SHL EAX,0x4
// 00533c8a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00533c8e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533c92: MOV EDX,dword ptr [EAX]
// 00533c94: SHL EDX,0x5
// 00533c97: MOV EAX,dword ptr [EAX + 0x10]
// 00533c9a: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 00533c9e: FDIV double ptr [EDX + EAX*0x8 + 0x67e218]
//   XREF to: 0067e218 (DATA)
// 00533ca5: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533ca9: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00533cae: MOV EDX,dword ptr [EAX]
// 00533cb0: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00533cb3: TEST EDX,EDX
// 00533cb5: JZ 0x00533cf2
//   XREF to: 00533cf2 (CONDITIONAL_JUMP)
// 00533cb7: CMP dword ptr [ESP + 0x24],0x1
//   XREF to: Stack[0x14] (READ)
// 00533cbc: JNZ 0x00533cec
//   XREF to: 00533cec (CONDITIONAL_JUMP)
// 00533cbe: SUB dword ptr [ESP],0x11
//   XREF to: Stack[-0x10] (DATA)
// 00533cc2: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00533cc2
//   XREF to: Stack[0x4] (READ)
// 00533cc6: CMP dword ptr [EAX + 0x14],0x0
// 00533cca: JZ 0x00533ccf
//   XREF to: 00533ccf (CONDITIONAL_JUMP)
// 00533ccc: INC dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00533ccf: MOV EBX,dword ptr [ESP]
//   Label: LAB_00533ccf
//   XREF to: Stack[-0x10] (DATA)
// 00533cd2: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533cd6: SUB EBX,0x4
// 00533cd9: MOV ESI,dword ptr [EAX + 0x8]
// 00533cdc: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x10] (DATA)
// 00533cdf: TEST ESI,ESI
// 00533ce1: JNZ 0x00533d1a
//   XREF to: 00533d1a (CONDITIONAL_JUMP)
// 00533ce3: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00533ce6: ADD ESP,0x8
// 00533ce9: POP ESI
// 00533cea: POP EBX
// 00533ceb: RET
// 00533cec: SUB dword ptr [ESP],0x20
//   Label: LAB_00533cec
//   XREF to: Stack[-0x10] (DATA)
// 00533cf0: JMP 0x00533cc2
//   XREF to: 00533cc2 (UNCONDITIONAL_JUMP)
// 00533cf2: MOV EAX,dword ptr [ESP]
//   Label: LAB_00533cf2
//   XREF to: Stack[-0x10] (DATA)
// 00533cf5: MOV EDX,EAX
// 00533cf7: SAR EDX,0x1f
// 00533cfa: SUB EAX,EDX
// 00533cfc: SAR EAX,0x1
// 00533cfe: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00533d02: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x10] (DATA)
// 00533d05: CMP ECX,0x1
// 00533d08: JNZ 0x00533d12
//   XREF to: 00533d12 (CONDITIONAL_JUMP)
// 00533d0a: LEA ESI,[EAX + -0x9]
// 00533d0d: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x10] (DATA)
// 00533d10: JMP 0x00533cc2
//   XREF to: 00533cc2 (UNCONDITIONAL_JUMP)
// 00533d12: LEA EBX,[EAX + -0x11]
//   Label: LAB_00533d12
// 00533d15: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x10] (DATA)
// 00533d18: JMP 0x00533cc2
//   XREF to: 00533cc2 (UNCONDITIONAL_JUMP)
// 00533d1a: PUSH EDI
//   Label: LAB_00533d1a
// 00533d1b: LEA EDI,[EBX + -0x2]
// 00533d1e: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 00533d22: POP EDI
// 00533d23: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 00533d26: ADD ESP,0x8
// 00533d29: POP ESI
// 00533d2a: POP EBX
// 00533d2b: RET
