// Name: shape_quantize.cpp_AllocateMemForSomething_FUN_00556a00
// Address: 00556a00
// Address Range: [[00556a00, 00556c1d]]
// Convention: unknown
// Signature: undefined shape_quantize.cpp_AllocateMemForSomething_FUN_00556a00()
// Cross-references:
//   shape_quantize.cpp_ColorQuantizationMaybe_FUN_00556490 (00556490) at 005567d9 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00556180 (00556180) at 005561e5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_quantize_cpp_00640a89
//   TerminatedCString s_Invalid_bit_depth_d_for__006410d3
//   TerminatedCString s_shape_quantize_cpp_006410f5
//   TerminatedCString s_Could_not_allocate_data__0064110b
//   TerminatedCString s_shape_quantize_cpp_0064112b
//   TerminatedCString s_shape_quantize_cpp_00641141
//   TerminatedCString s_Could_not_allocate_row_t_00641157
//   TerminatedCString s_shape_quantize_cpp_00641175
//   TerminatedCString s_Unable_to_allocate_memor_0064118b
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

/* Signature: undefined1 shape_quantize.cpp_AllocateMemForSomething(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined1 param_4) */

void * shape_quantize_cpp_AllocateMemForSomething_FUN_00556a00(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  ushort uVar4;
  void *in_stack_00000004;
  short in_stack_00000008;
  byte in_stack_00000014;
  undefined2 in_stack_00000018;
  undefined1 in_stack_0000001c;
  
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004,0,0x28);
  if (in_stack_00000014 < 0x10) {
    if (7 < in_stack_00000014) {
      if (in_stack_00000014 < 9) {
        *(undefined1 *)((int)in_stack_00000004 + 0x1b) = 1;
        goto LAB_00556a6b;
      }
      if (in_stack_00000014 == 0xf) goto LAB_00556b15;
    }
  }
  else {
    if (in_stack_00000014 < 0x11) {
LAB_00556b15:
      *(undefined1 *)((int)in_stack_00000004 + 0x1b) = 2;
      goto LAB_00556a6b;
    }
    if (0x17 < in_stack_00000014) {
      if (in_stack_00000014 < 0x19) {
        *(undefined1 *)((int)in_stack_00000004 + 0x1b) = 3;
        goto LAB_00556a6b;
      }
      if (in_stack_00000014 == 0x20) {
        *(undefined1 *)((int)in_stack_00000004 + 0x1b) = 4;
        goto LAB_00556a6b;
      }
    }
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xffffff9c,"Invalid bit depth [%d] for bitmap",(uint)in_stack_00000014);
  g_CurrentFilename = "..\\shape\\quantize.cpp";
  g_CurrentLineNumber = 0x67;
  core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa0);
LAB_00556a6b:
  *(undefined2 *)((int)in_stack_00000004 + 0x16) = in_stack_00000018;
  *(undefined1 *)((int)in_stack_00000004 + 0x1a) = in_stack_0000001c;
  *(short *)((int)in_stack_00000004 + 0x14) = in_stack_00000008;
  uVar4 = in_stack_00000008 * (ushort)*(byte *)((int)in_stack_00000004 + 0x1b);
  *(ushort *)((int)in_stack_00000004 + 0x18) = uVar4;
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((uint)*(ushort *)((int)in_stack_00000004 + 0x16) * (uint)uVar4,
                      "..\\shape\\quantize.cpp",0x498);
  *(void **)((int)in_stack_00000004 + 0x1c) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Could not allocate data buffer.");
  }
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((uint)*(ushort *)((int)in_stack_00000004 + 0x16) << 2,
                      "..\\shape\\quantize.cpp",0x49d);
  *(void **)((int)in_stack_00000004 + 0x20) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentDebugFilename = "..\\shape\\quantize.cpp";
    g_CurrentDebugLine = 0x4a1;
    crt_memory_c_free_FUN_005fe659(*(void **)((int)in_stack_00000004 + 0x1c));
    g_CurrentFilename = "..\\shape\\quantize.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Could not allocate row table.");
  }
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < (int)(uint)*(ushort *)((int)in_stack_00000004 + 0x16); iVar2 = iVar2 + 1)
  {
    iVar3 = iVar3 + 4;
    *(uint *)(*(int *)((int)in_stack_00000004 + 0x20) + -4 + iVar3) =
         *(int *)((int)in_stack_00000004 + 0x1c) +
         (uint)*(ushort *)((int)in_stack_00000004 + 0x18) * iVar2;
  }
  if (*(char *)((int)in_stack_00000004 + 0x1a) == '\b') {
    pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x300,"..\\shape\\quantize.cpp",0x4ac);
    *(void **)((int)in_stack_00000004 + 0x24) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      g_CurrentFilename = "..\\shape\\quantize.cpp";
      g_CurrentLineNumber = 0x67;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to allocate memory for palette.");
      return in_stack_00000004;
    }
  }
  return in_stack_00000004;
}


// Assembly code:
// 00556a00: PUSH EBX
//   Label: shape_quantize.cpp_AllocateMemForSomething_FUN_00556a00
// 00556a01: PUSH ESI
// 00556a02: PUSH EBP
// 00556a03: SUB ESP,0x5c
// 00556a06: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00556a0a: MOV ESI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00556a0e: PUSH 0x28
// 00556a10: PUSH 0x0
// 00556a12: PUSH EBX
// 00556a13: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00556a18: ADD ESP,0xc
// 00556a1b: MOV AH,byte ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 00556a1f: CMP AH,0x10
// 00556a22: JNC 0x00556b30
//   XREF to: 00556b30 (CONDITIONAL_JUMP)
// 00556a28: CMP AH,0x8
// 00556a2b: JNC 0x00556b47
//   XREF to: 00556b47 (CONDITIONAL_JUMP)
// 00556a31: XOR EAX,EAX
//   Label: LAB_00556a31
// 00556a33: MOV AL,byte ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 00556a37: PUSH EAX
// 00556a38: PUSH 0x6410d3
//   XREF to: 006410d3 (DATA)
// 00556a3d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x68] (DATA)
// 00556a41: PUSH EAX
// 00556a42: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00556a47: MOV EDX,0x640a89
//   XREF to: 00640a89 (PARAM)
// 00556a4c: ADD ESP,0xc
// 00556a4f: MOV EAX,ESP
// 00556a51: MOV ECX,0x67
// 00556a56: PUSH EAX
// 00556a57: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00556a5d: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00556a63: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00556a68: ADD ESP,0x4
// 00556a6b: PUSH EDI
//   Label: LAB_00556a6b
// 00556a6c: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0xc] (READ)
// 00556a70: MOV word ptr [EBX + 0x16],AX
// 00556a74: MOV AL,byte ptr [ESP + 0x7c]
//   XREF to: Stack[0x10] (READ)
// 00556a78: MOV byte ptr [EBX + 0x1a],AL
// 00556a7b: XOR AH,AH
// 00556a7d: MOV AL,byte ptr [EBX + 0x1b]
// 00556a80: MOV word ptr [EBX + 0x14],SI
// 00556a84: IMUL ESI,EAX
// 00556a87: XOR EDX,EDX
// 00556a89: XOR EAX,EAX
// 00556a8b: MOV DX,SI
// 00556a8e: MOV AX,word ptr [EBX + 0x16]
// 00556a92: IMUL EAX,EDX
// 00556a95: PUSH 0x498
// 00556a9a: PUSH 0x6410f5
//   XREF to: 006410f5 (DATA)
// 00556a9f: PUSH EAX
// 00556aa0: MOV word ptr [EBX + 0x18],SI
// 00556aa4: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00556aa9: ADD ESP,0xc
// 00556aac: MOV dword ptr [EBX + 0x1c],EAX
// 00556aaf: TEST EAX,EAX
// 00556ab1: JZ 0x00556b53
//   XREF to: 00556b53 (CONDITIONAL_JUMP)
// 00556ab7: XOR EAX,EAX
//   Label: LAB_00556ab7
// 00556ab9: PUSH 0x49d
// 00556abe: MOV AX,word ptr [EBX + 0x16]
// 00556ac2: PUSH 0x64112b
//   XREF to: 0064112b (DATA)
// 00556ac7: SHL EAX,0x2
// 00556aca: PUSH EAX
// 00556acb: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00556ad0: ADD ESP,0xc
// 00556ad3: MOV dword ptr [EBX + 0x20],EAX
// 00556ad6: TEST EAX,EAX
// 00556ad8: JZ 0x00556b7b
//   XREF to: 00556b7b (CONDITIONAL_JUMP)
// 00556ade: XOR EDX,EDX
//   Label: LAB_00556ade
// 00556ae0: XOR EAX,EAX
// 00556ae2: POP EDI
// 00556ae3: XOR ECX,ECX
//   Label: LAB_00556ae3
// 00556ae5: MOV CX,word ptr [EBX + 0x16]
// 00556ae9: CMP EAX,ECX
// 00556aeb: JGE 0x00556bc5
//   XREF to: 00556bc5 (CONDITIONAL_JUMP)
// 00556af1: XOR ECX,ECX
// 00556af3: MOV CX,word ptr [EBX + 0x18]
// 00556af7: IMUL ECX,EAX
// 00556afa: MOV ESI,dword ptr [EBX + 0x1c]
// 00556afd: ADD EDX,0x4
// 00556b00: ADD ESI,ECX
// 00556b02: MOV ECX,dword ptr [EBX + 0x20]
// 00556b05: INC EAX
// 00556b06: MOV dword ptr [ECX + EDX*0x1 + -0x4],ESI
// 00556b0a: JMP 0x00556ae3
//   XREF to: 00556ae3 (UNCONDITIONAL_JUMP)
// 00556b0c: MOV byte ptr [EBX + 0x1b],0x1
//   Label: LAB_00556b0c
// 00556b10: JMP 0x00556a6b
//   XREF to: 00556a6b (UNCONDITIONAL_JUMP)
// 00556b15: MOV byte ptr [EBX + 0x1b],0x2
//   Label: LAB_00556b15
// 00556b19: JMP 0x00556a6b
//   XREF to: 00556a6b (UNCONDITIONAL_JUMP)
// 00556b1e: MOV byte ptr [EBX + 0x1b],0x3
//   Label: LAB_00556b1e
// 00556b22: JMP 0x00556a6b
//   XREF to: 00556a6b (UNCONDITIONAL_JUMP)
// 00556b27: MOV byte ptr [EBX + 0x1b],0x4
//   Label: LAB_00556b27
// 00556b2b: JMP 0x00556a6b
//   XREF to: 00556a6b (UNCONDITIONAL_JUMP)
// 00556b30: JBE 0x00556b15
//   Label: LAB_00556b30
//   XREF to: 00556b15 (CONDITIONAL_JUMP)
// 00556b32: CMP AH,0x18
// 00556b35: JC 0x00556a31
//   XREF to: 00556a31 (CONDITIONAL_JUMP)
// 00556b3b: JBE 0x00556b1e
//   XREF to: 00556b1e (CONDITIONAL_JUMP)
// 00556b3d: CMP AH,0x20
// 00556b40: JZ 0x00556b27
//   XREF to: 00556b27 (CONDITIONAL_JUMP)
// 00556b42: JMP 0x00556a31
//   XREF to: 00556a31 (UNCONDITIONAL_JUMP)
// 00556b47: JBE 0x00556b0c
//   Label: LAB_00556b47
//   XREF to: 00556b0c (CONDITIONAL_JUMP)
// 00556b49: CMP AH,0xf
// 00556b4c: JZ 0x00556b15
//   XREF to: 00556b15 (CONDITIONAL_JUMP)
// 00556b4e: JMP 0x00556a31
//   XREF to: 00556a31 (UNCONDITIONAL_JUMP)
// 00556b53: MOV EDI,0x640a89
//   Label: LAB_00556b53
//   XREF to: 00640a89 (DATA)
// 00556b58: MOV EBP,0x67
// 00556b5d: PUSH 0x64110b
//   XREF to: 0064110b (DATA)
// 00556b62: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00556b68: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00556b6e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00556b73: ADD ESP,0x4
// 00556b76: JMP 0x00556ab7
//   XREF to: 00556ab7 (UNCONDITIONAL_JUMP)
// 00556b7b: MOV EDX,0x641141
//   Label: LAB_00556b7b
//   XREF to: 00641141 (PARAM)
// 00556b80: MOV ESI,dword ptr [EBX + 0x1c]
// 00556b83: MOV ECX,0x4a1
// 00556b88: PUSH ESI
// 00556b89: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 00556b8f: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00556b95: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00556b9a: ADD ESP,0x4
// 00556b9d: MOV EDI,0x640a89
//   XREF to: 00640a89 (DATA)
// 00556ba2: MOV EBP,0x67
// 00556ba7: PUSH 0x641157
//   XREF to: 00641157 (DATA)
// 00556bac: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00556bb2: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00556bb8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00556bbd: ADD ESP,0x4
// 00556bc0: JMP 0x00556ade
//   XREF to: 00556ade (UNCONDITIONAL_JUMP)
// 00556bc5: CMP byte ptr [EBX + 0x1a],0x8
//   Label: LAB_00556bc5
// 00556bc9: JZ 0x00556bd4
//   XREF to: 00556bd4 (CONDITIONAL_JUMP)
// 00556bcb: MOV EAX,EBX
//   Label: LAB_00556bcb
// 00556bcd: ADD ESP,0x5c
// 00556bd0: POP EBP
// 00556bd1: POP ESI
// 00556bd2: POP EBX
// 00556bd3: RET
// 00556bd4: PUSH 0x4ac
//   Label: LAB_00556bd4
// 00556bd9: PUSH 0x641175
//   XREF to: 00641175 (DATA)
// 00556bde: PUSH 0x300
// 00556be3: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00556be8: ADD ESP,0xc
// 00556beb: MOV dword ptr [EBX + 0x24],EAX
// 00556bee: TEST EAX,EAX
// 00556bf0: JNZ 0x00556bcb
//   XREF to: 00556bcb (CONDITIONAL_JUMP)
// 00556bf2: MOV EDX,0x640a89
//   XREF to: 00640a89 (PARAM)
// 00556bf7: MOV ECX,0x67
// 00556bfc: PUSH 0x64118b
//   XREF to: 0064118b (DATA)
// 00556c01: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00556c07: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00556c0d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00556c12: ADD ESP,0x4
// 00556c15: MOV EAX,EBX
// 00556c17: ADD ESP,0x5c
// 00556c1a: POP EBP
// 00556c1b: POP ESI
// 00556c1c: POP EBX
// 00556c1d: RET
