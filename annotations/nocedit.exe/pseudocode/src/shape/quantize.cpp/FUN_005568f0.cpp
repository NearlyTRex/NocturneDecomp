// Name: shape_quantize.cpp_FUN_005568f0
// Address: 005568f0
// Address Range: [[005568f0, 005569fb]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_FUN_005568f0()
// Globals:
//   TerminatedCString s_s_00641092
//   TerminatedCString s_s_006410ae
//   double DOUBLE_006410cb = 20
//   undefined4 DAT_03106158
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

#include "nocturne.h"

undefined4 shape_quantize_cpp_FUN_005568f0(void)

{
  BADSPACEBASE *in_ESP;
  char *pcVar1;
  float10 fVar2;
  char *in_stack_00000004;
  ulong in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  int in_stack_00000020;
  char *pcVar3;
  char acStack_60 [80];
  int local_10;
  ulong local_c;
  
  local_10 = in_stack_0000000c;
  local_c = in_stack_00000008;
  fVar2 = ((float10)in_stack_0000000c / (float10)(int)in_stack_00000008) * (float10)DOUBLE_006410cb;
  pcVar3 = "\r%s [                    ]\r";
  pcVar1 = &stack0xffffff88;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_stack_00000004,&stack0xffffff88));
  local_10 = (int)ROUND(fVar2);
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar3,in_stack_00000004);
  do {
    pcVar3 = pcVar1;
    if (*pcVar1 == '[') goto LAB_0055695d;
    if (*pcVar1 == '\0') break;
    pcVar3 = pcVar1 + 1;
    if (*pcVar3 == '[') goto LAB_0055695d;
    pcVar1 = pcVar1 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_0055695d:
  crt_memory_c_memset_FUN_005fde40(pcVar3 + 1,0x2e,local_c);
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff94,0,(DAT_03106158 + 4) * 0xb);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  if (in_stack_0000001c + -1 != in_stack_00000020) {
    return 0;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff9c,"%s [....................]\n");
  engine_2d_c_drawText_FUN_00401fd0(acStack_60,0,(DAT_03106158 + 4) * 0xb);
  acStack_60[0] = -0xc;
  acStack_60[1] = 'i';
  acStack_60[2] = 'U';
  acStack_60[3] = '\0';
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return 0;
}


// Assembly code:
// 005568f0: PUSH EBX
//   Label: shape_quantize.cpp_FUN_005568f0
// 005568f1: PUSH ESI
// 005568f2: SUB ESP,0x70
// 005568f5: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 005568fc: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00556900: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 00556907: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0055690b: FILD dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x10] (READ)
// 0055690f: FILD dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0xc] (READ)
// 00556913: FDIVP
// 00556915: MOV EDX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 00556919: PUSH EDX
// 0055691a: FMUL double ptr [0x006410cb]
//   XREF to: 006410cb (READ)
// 00556920: PUSH 0x641092
//   XREF to: 00641092 (DATA)
// 00556925: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 00556929: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 0055692d: PUSH EAX
// 0055692e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00556933: FISTP dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x14] (WRITE)
// 00556937: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0055693c: ADD ESP,0xc
// 0055693f: MOV DL,0x5b
// 00556941: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 00556945: MOV AL,byte ptr [ESI]
//   Label: LAB_00556945
//   XREF to: Stack[-0x78] (DATA)
// 00556947: CMP AL,DL
// 00556949: JZ 0x0055695d
//   XREF to: 0055695d (CONDITIONAL_JUMP)
// 0055694b: CMP AL,0x0
// 0055694d: JZ 0x0055695b
//   XREF to: 0055695b (CONDITIONAL_JUMP)
// 0055694f: INC ESI
// 00556950: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x77] (DATA)
// 00556952: CMP AL,DL
// 00556954: JZ 0x0055695d
//   XREF to: 0055695d (CONDITIONAL_JUMP)
// 00556956: INC ESI
// 00556957: CMP AL,0x0
// 00556959: JNZ 0x00556945
//   XREF to: 00556945 (CONDITIONAL_JUMP)
// 0055695b: SUB ESI,ESI
//   Label: LAB_0055695b
// 0055695d: PUSH ECX
//   Label: LAB_0055695d
// 0055695e: PUSH 0x2e
// 00556960: INC ESI
// 00556961: PUSH ESI
// 00556962: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00556967: MOV EDX,dword ptr [0x03106158]
//   XREF to: 03106158 (READ)
// 0055696d: ADD EDX,0x4
// 00556970: LEA EAX,[EDX*0x4 + 0x0]
// 00556977: SUB EAX,EDX
// 00556979: SHL EAX,0x2
// 0055697c: ADD ESP,0xc
// 0055697f: SUB EAX,EDX
// 00556981: PUSH EAX
// 00556982: PUSH 0x0
// 00556984: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 00556988: PUSH EAX
// 00556989: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0055698e: ADD ESP,0xc
// 00556991: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00556996: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 0055699d: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 005569a4: DEC EAX
// 005569a5: CMP EAX,EBX
// 005569a7: JZ 0x005569b1
//   XREF to: 005569b1 (CONDITIONAL_JUMP)
// 005569a9: XOR EAX,EAX
// 005569ab: ADD ESP,0x70
// 005569ae: POP ESI
// 005569af: POP EBX
// 005569b0: RET
// 005569b1: MOV ESI,dword ptr [ESP + 0x7c]
//   Label: LAB_005569b1
//   XREF to: Stack[0x4] (READ)
// 005569b5: PUSH ESI
// 005569b6: PUSH 0x6410ae
//   XREF to: 006410ae (DATA)
// 005569bb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 005569bf: PUSH EAX
// 005569c0: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005569c5: MOV EDX,dword ptr [0x03106158]
//   XREF to: 03106158 (READ)
// 005569cb: ADD EDX,0x4
// 005569ce: LEA EAX,[EDX*0x4 + 0x0]
// 005569d5: SUB EAX,EDX
// 005569d7: SHL EAX,0x2
// 005569da: ADD ESP,0xc
// 005569dd: SUB EAX,EDX
// 005569df: PUSH EAX
// 005569e0: PUSH 0x0
// 005569e2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 005569e6: PUSH EAX
// 005569e7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005569ec: ADD ESP,0xc
// 005569ef: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005569f4: XOR EAX,EAX
// 005569f6: ADD ESP,0x70
// 005569f9: POP ESI
// 005569fa: POP EBX
// 005569fb: RET
