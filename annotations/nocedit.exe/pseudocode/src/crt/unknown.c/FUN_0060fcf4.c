// Name: crt_unknown.c_FUN_0060fcf4
// Address: 0060fcf4
// Address Range: [[0060fcf4, 0060fe91]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fcf4()
// Cross-references:
//   crt_env.c_putenv_internal_FUN_0060ee80 (0060ee80) at 0060f03c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fc64 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00610900 (00610900) at 0061094a [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironStringArea
//   int g_EnvironInitialized
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_memory.c_memset_FUN_005fde40
//   crt_memory.c_realloc_FUN_00601df0
//   crt_string.c_memcpy_FUN_0060cd60
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_unknown.c_FUN_0060fe94

#include "nocturne.h"

undefined4 crt_unknown_c_FUN_0060fcf4(short *param_1)

{
  short sVar1;
  uint *ptr;
  int iVar2;
  uint n;
  SIZE_T count;
  ulong new_size;
  ulong unaff_EDI;
  bool bVar3;
  short *in_stack_00000004;
  uint in_stack_00000010;
  
  ptr = (uint *)g_EnvironInitialized;
  if (in_stack_00000004 == (short *)0x0) {
    return 0xffffffff;
  }
  if (*in_stack_00000004 != 0) {
    sVar1 = in_stack_00000004[1];
    for (param_1 = in_stack_00000004 + 1; (sVar1 != 0 && (*param_1 != 0x3d)); param_1 = param_1 + 1)
    {
      sVar1 = param_1[1];
    }
  }
  if (*param_1 == 0) {
    return 0xffffffff;
  }
  bVar3 = param_1[1] == 0;
  n = (uint)bVar3;
  if (g_EnvironInitialized == 0) {
    if (bVar3) {
      return 0;
    }
    ptr = (uint *)crt_memory_c_malloc_FUN_00601bb0(9);
    if (ptr == (uint *)0x0) {
      return 0xffffffff;
    }
    g_EnvironStringArea = (char **)(ptr + 2);
    g_EnvironInitialized = (int)ptr;
    *ptr = n;
    ptr[1] = n;
  }
  else {
    iVar2 = crt_unknown_c_FUN_0060fe94();
    if (bVar3) {
      return 0;
    }
    if (iVar2 < 1) {
      n = -iVar2;
      count = iVar2 * -4;
      new_size = iVar2 * -5 + 9;
      if (g_EnvironStringArea == (char **)0x0) {
        ptr = (uint *)crt_memory_c_malloc_FUN_00601bb0(new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        crt_string_c_memcpy_FUN_0060cd60(ptr,(void *)g_EnvironInitialized,count);
        g_EnvironStringArea = (char **)(ptr + (2 - iVar2));
        crt_memory_c_memset_FUN_005fde40(g_EnvironStringArea,0,unaff_EDI);
      }
      else {
        ptr = (uint *)crt_memory_c_realloc_FUN_00601df0(ptr,new_size);
        if (ptr == (uint *)0x0) {
          return 0xffffffff;
        }
        crt_string_c_memmove_FUN_005fe5e0(ptr + (2 - iVar2),g_EnvironStringArea,n);
        g_EnvironStringArea = (char **)(ptr + (2 - iVar2));
      }
      ptr[1 - iVar2] = 0;
      g_EnvironInitialized = (int)ptr;
    }
    else {
      n = iVar2 - 1;
    }
  }
  ptr[n] = in_stack_00000010;
  *(undefined1 *)(n + (int)g_EnvironStringArea) = 0;
  return 0;
}


// Assembly code:
// 0060fcf4: PUSH EBX
//   Label: crt_unknown.c_FUN_0060fcf4
// 0060fcf5: PUSH ESI
// 0060fcf6: PUSH EDI
// 0060fcf7: PUSH EBP
// 0060fcf8: SUB ESP,0x8
// 0060fcfb: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0060fcff: TEST EDX,EDX
// 0060fd01: JNZ 0x0060fd0d
//   XREF to: 0060fd0d (CONDITIONAL_JUMP)
// 0060fd03: MOV EAX,0xffffffff
// 0060fd08: JMP 0x0060fe8a
//   XREF to: 0060fe8a (UNCONDITIONAL_JUMP)
// 0060fd0d: CMP word ptr [EDX],0x0
//   Label: LAB_0060fd0d
// 0060fd11: JZ 0x0060fd35
//   XREF to: 0060fd35 (CONDITIONAL_JUMP)
// 0060fd13: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0060fd17: MOV BX,word ptr [EAX + 0x2]
// 0060fd1b: ADD EAX,0x2
// 0060fd1e: TEST BX,BX
// 0060fd21: JZ 0x0060fd35
//   XREF to: 0060fd35 (CONDITIONAL_JUMP)
// 0060fd23: CMP word ptr [EAX],0x3d
//   Label: LAB_0060fd23
// 0060fd27: JZ 0x0060fd35
//   XREF to: 0060fd35 (CONDITIONAL_JUMP)
// 0060fd29: MOV CX,word ptr [EAX + 0x2]
// 0060fd2d: ADD EAX,0x2
// 0060fd30: TEST CX,CX
// 0060fd33: JNZ 0x0060fd23
//   XREF to: 0060fd23 (CONDITIONAL_JUMP)
// 0060fd35: CMP word ptr [EAX],0x0
//   Label: LAB_0060fd35
// 0060fd39: JNZ 0x0060fd48
//   XREF to: 0060fd48 (CONDITIONAL_JUMP)
// 0060fd3b: MOV EAX,0xffffffff
// 0060fd40: ADD ESP,0x8
// 0060fd43: POP EBP
// 0060fd44: POP EDI
// 0060fd45: POP ESI
// 0060fd46: POP EBX
// 0060fd47: RET
// 0060fd48: CMP word ptr [EAX + 0x2],0x0
//   Label: LAB_0060fd48
// 0060fd4d: SETZ AL
// 0060fd50: MOV EBX,dword ptr [0x03f9b868]
//   XREF to: 03f9b868 (READ)
// 0060fd56: MOVZX ESI,AL
// 0060fd59: TEST EBX,EBX
// 0060fd5b: JNZ 0x0060fd9a
//   XREF to: 0060fd9a (CONDITIONAL_JUMP)
// 0060fd5d: TEST ESI,ESI
// 0060fd5f: JNZ 0x0060fe88
//   XREF to: 0060fe88 (CONDITIONAL_JUMP)
// 0060fd65: PUSH 0x9
// 0060fd67: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060fd6c: ADD ESP,0x4
// 0060fd6f: MOV EBX,EAX
// 0060fd71: TEST EAX,EAX
// 0060fd73: JNZ 0x0060fd82
//   XREF to: 0060fd82 (CONDITIONAL_JUMP)
// 0060fd75: MOV EAX,0xffffffff
// 0060fd7a: ADD ESP,0x8
// 0060fd7d: POP EBP
// 0060fd7e: POP EDI
// 0060fd7f: POP ESI
// 0060fd80: POP EBX
// 0060fd81: RET
// 0060fd82: MOV [0x03f9b868],EAX
//   Label: LAB_0060fd82
//   XREF to: 03f9b868 (WRITE)
// 0060fd87: ADD EAX,0x8
// 0060fd8a: MOV dword ptr [EAX + -0x8],ESI
// 0060fd8d: MOV dword ptr [EAX + -0x4],ESI
// 0060fd90: MOV [0x03f9b860],EAX
//   XREF to: 03f9b860 (WRITE)
// 0060fd95: JMP 0x0060fe70
//   XREF to: 0060fe70 (UNCONDITIONAL_JUMP)
// 0060fd9a: PUSH ESI
//   Label: LAB_0060fd9a
// 0060fd9b: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0060fd9f: PUSH ECX
// 0060fda0: CALL crt_unknown.c_FUN_0060fe94
//   XREF to: 0060fe94 (UNCONDITIONAL_CALL)
// 0060fda5: ADD ESP,0x8
// 0060fda8: TEST ESI,ESI
// 0060fdaa: JNZ 0x0060fe88
//   XREF to: 0060fe88 (CONDITIONAL_JUMP)
// 0060fdb0: TEST EAX,EAX
// 0060fdb2: JG 0x0060fe6d
//   XREF to: 0060fe6d (CONDITIONAL_JUMP)
// 0060fdb8: NEG EAX
// 0060fdba: MOV ESI,EAX
// 0060fdbc: INC EAX
// 0060fdbd: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060fdc1: MOV EAX,ESI
// 0060fdc3: SHL EAX,0x2
// 0060fdc6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0060fdc9: LEA EBP,[EAX + 0x8]
// 0060fdcc: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0060fdd0: MOV EDI,dword ptr [0x03f9b860]
//   XREF to: 03f9b860 (READ)
// 0060fdd6: ADD EAX,EBP
// 0060fdd8: TEST EDI,EDI
// 0060fdda: JNZ 0x0060fe27
//   XREF to: 0060fe27 (CONDITIONAL_JUMP)
// 0060fddc: PUSH EAX
// 0060fddd: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060fde2: MOV EDI,EAX
// 0060fde4: ADD ESP,0x4
// 0060fde7: MOV EBX,EAX
// 0060fde9: TEST EAX,EAX
// 0060fdeb: JNZ 0x0060fdfa
//   XREF to: 0060fdfa (CONDITIONAL_JUMP)
// 0060fded: MOV EAX,0xffffffff
// 0060fdf2: ADD ESP,0x8
// 0060fdf5: POP EBP
// 0060fdf6: POP EDI
// 0060fdf7: POP ESI
// 0060fdf8: POP EBX
// 0060fdf9: RET
// 0060fdfa: MOV ECX,dword ptr [ESP]
//   Label: LAB_0060fdfa
//   XREF to: Stack[-0x18] (DATA)
// 0060fdfd: PUSH ECX
// 0060fdfe: MOV EAX,[0x03f9b868]
//   XREF to: 03f9b868 (READ)
// 0060fe03: PUSH EAX
// 0060fe04: PUSH EDI
// 0060fe05: CALL crt_string.c_memcpy_FUN_0060cd60
//   XREF to: 0060cd60 (UNCONDITIONAL_CALL)
// 0060fe0a: ADD ESP,0xc
// 0060fe0d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0060fe11: PUSH EDX
// 0060fe12: PUSH 0x0
// 0060fe14: ADD EDI,EBP
// 0060fe16: PUSH EDI
// 0060fe17: MOV dword ptr [0x03f9b860],EDI
//   XREF to: 03f9b860 (WRITE)
// 0060fe1d: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060fe22: ADD ESP,0xc
// 0060fe25: JMP 0x0060fe5d
//   XREF to: 0060fe5d (UNCONDITIONAL_JUMP)
// 0060fe27: PUSH EAX
//   Label: LAB_0060fe27
// 0060fe28: PUSH EBX
// 0060fe29: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 0060fe2e: ADD ESP,0x8
// 0060fe31: MOV EBX,EAX
// 0060fe33: TEST EAX,EAX
// 0060fe35: JNZ 0x0060fe44
//   XREF to: 0060fe44 (CONDITIONAL_JUMP)
// 0060fe37: MOV EAX,0xffffffff
// 0060fe3c: ADD ESP,0x8
// 0060fe3f: POP EBP
// 0060fe40: POP EDI
// 0060fe41: POP ESI
// 0060fe42: POP EBX
// 0060fe43: RET
// 0060fe44: PUSH ESI
//   Label: LAB_0060fe44
// 0060fe45: MOV EDX,dword ptr [0x03f9b860]
//   XREF to: 03f9b860 (READ)
// 0060fe4b: PUSH EDX
// 0060fe4c: ADD EBP,EAX
// 0060fe4e: PUSH EBP
// 0060fe4f: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0060fe54: ADD ESP,0xc
// 0060fe57: MOV dword ptr [0x03f9b860],EBP
//   XREF to: 03f9b860 (WRITE)
// 0060fe5d: MOV dword ptr [EBX + ESI*0x4 + 0x4],0x0
//   Label: LAB_0060fe5d
// 0060fe65: MOV dword ptr [0x03f9b868],EBX
//   XREF to: 03f9b868 (WRITE)
// 0060fe6b: JMP 0x0060fe70
//   XREF to: 0060fe70 (UNCONDITIONAL_JUMP)
// 0060fe6d: LEA ESI,[EAX + -0x1]
//   Label: LAB_0060fe6d
// 0060fe70: LEA EAX,[ESI*0x4 + 0x0]
//   Label: LAB_0060fe70
// 0060fe77: ADD EBX,EAX
// 0060fe79: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0060fe7d: MOV dword ptr [EBX],EAX
// 0060fe7f: MOV EAX,[0x03f9b860]
//   XREF to: 03f9b860 (READ)
// 0060fe84: MOV byte ptr [ESI + EAX*0x1],0x0
// 0060fe88: XOR EAX,EAX
//   Label: LAB_0060fe88
// 0060fe8a: ADD ESP,0x8
//   Label: LAB_0060fe8a
// 0060fe8d: POP EBP
// 0060fe8e: POP EDI
// 0060fe8f: POP ESI
// 0060fe90: POP EBX
// 0060fe91: RET
