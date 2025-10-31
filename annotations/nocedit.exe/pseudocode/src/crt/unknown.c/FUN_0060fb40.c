// Name: crt_unknown.c_FUN_0060fb40
// Address: 0060fb40
// Address Range: [[0060fb40, 0060fcf0]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fb40()
// Globals:
//   int g_EnvironInitialized
// Function calls:
//   crt_env.c_updateEnvironTable_FUN_0060f04c
//   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_string.c_memcpy_FUN_0060cd60
//   crt_string.c_wcslen_FUN_0060cd30
//   crt_string.c_wcstombs_FUN_0060c0c0
//   crt_unknown.c_FUN_0060fcf4
//   crt_unknown.c_FUN_006107c0
//   crt_unknown.c_FUN_006107f0
//   crt_unknown.c_FUN_00610900

#include "nocturne.h"

int crt_unknown_c_FUN_0060fb40(void)

{
  SIZE_T count;
  LPWSTR pWVar1;
  int iVar2;
  void *dest;
  ulong uVar3;
  void *dest_00;
  char *dest_01;
  void *unaff_retaddr;
  LPWSTR in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000014;
  
  pWVar1 = (LPWSTR)crt_unknown_c_FUN_006107c0();
  if (pWVar1 == (LPWSTR)0x0) {
    iVar2 = -1;
  }
  else {
    if (pWVar1 == in_stack_00000004) {
      return -1;
    }
    count = ((int)pWVar1 - (int)in_stack_00000004 >> 1) * 2;
    dest = crt_memory_c_malloc_FUN_00601bb0(count + 2);
    if (dest == (void *)0x0) {
      return -1;
    }
    crt_string_c_memcpy_FUN_0060cd60(dest,in_stack_00000004,count);
    *(undefined2 *)((int)dest + count) = 0;
    uVar3 = crt_string_c_wcslen_FUN_0060cd30(pWVar1 + 1);
    if (uVar3 == 0) {
      dest_00 = (void *)0x0;
    }
    else {
      dest_00 = crt_memory_c_malloc_FUN_00601bb0((int)(uVar3 * 2) + 2);
      if (dest_00 == (void *)0x0) {
        crt_memory_c_free_FUN_00601cd0(dest);
        return -1;
      }
      crt_string_c_memcpy_FUN_0060cd60(dest_00,(void *)(uVar3 * 2),(SIZE_T)unaff_retaddr);
      *(undefined2 *)((int)dest_00 + (int)in_stack_00000004) = 0;
    }
    iVar2 = crt_unknown_c_FUN_006107f0();
    crt_memory_c_free_FUN_00601cd0(unaff_retaddr);
    crt_memory_c_free_FUN_00601cd0(dest_00);
    if (iVar2 == 0) {
      return -1;
    }
    if (g_EnvironInitialized == 0) {
      crt_unknown_c_FUN_00610900();
    }
    iVar2 = crt_unknown_c_FUN_0060fcf4();
    if (iVar2 != 0) {
      return -1;
    }
    uVar3 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000004);
    dest_01 = (char *)crt_memory_c_malloc_FUN_00601bb0(in_stack_0000000c * (uVar3 + 1));
    if (dest_01 == (char *)0x0) {
      crt_errno_c_convertWindowsErrorToErrno_FUN_00608390(5);
      return -1;
    }
    iVar2 = crt_string_c_wcstombs_FUN_0060c0c0
                      (dest_01,in_stack_00000004,(uVar3 + 1) * in_stack_00000014);
    if (iVar2 == -1) {
      crt_memory_c_free_FUN_00601cd0(dest_01);
      return -1;
    }
    iVar2 = crt_env_c_updateEnvironTable_FUN_0060f04c(dest_01);
  }
  return iVar2;
}


// Assembly code:
// 0060fb40: PUSH EBX
//   Label: crt_unknown.c_FUN_0060fb40
// 0060fb41: PUSH ESI
// 0060fb42: PUSH EDI
// 0060fb43: PUSH EBP
// 0060fb44: SUB ESP,0x14
// 0060fb47: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0060fb4b: PUSH 0x3d
// 0060fb4d: MOV EDX,0x2
// 0060fb52: PUSH EDI
// 0060fb53: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0060fb57: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0060fb5b: CALL crt_unknown.c_FUN_006107c0
//   XREF to: 006107c0 (UNCONDITIONAL_CALL)
// 0060fb60: MOV ESI,EAX
// 0060fb62: ADD ESP,0x8
// 0060fb65: TEST EAX,EAX
// 0060fb67: JNZ 0x0060fb73
//   XREF to: 0060fb73 (CONDITIONAL_JUMP)
// 0060fb69: MOV EAX,0xffffffff
// 0060fb6e: JMP 0x0060fce9
//   XREF to: 0060fce9 (UNCONDITIONAL_JUMP)
// 0060fb73: CMP EAX,EDI
//   Label: LAB_0060fb73
// 0060fb75: JNZ 0x0060fb84
//   XREF to: 0060fb84 (CONDITIONAL_JUMP)
// 0060fb77: MOV EAX,0xffffffff
// 0060fb7c: ADD ESP,0x14
// 0060fb7f: POP EBP
// 0060fb80: POP EDI
// 0060fb81: POP ESI
// 0060fb82: POP EBX
// 0060fb83: RET
// 0060fb84: MOV EBP,EAX
//   Label: LAB_0060fb84
// 0060fb86: SUB EBP,EDI
// 0060fb88: SAR EBP,0x1
// 0060fb8a: ADD EBP,EBP
// 0060fb8c: LEA EAX,[EBP + 0x2]
// 0060fb8f: PUSH EAX
// 0060fb90: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060fb95: ADD ESP,0x4
// 0060fb98: MOV EBX,EAX
// 0060fb9a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060fb9e: TEST EAX,EAX
// 0060fba0: JNZ 0x0060fbaf
//   XREF to: 0060fbaf (CONDITIONAL_JUMP)
// 0060fba2: MOV EAX,0xffffffff
// 0060fba7: ADD ESP,0x14
// 0060fbaa: POP EBP
// 0060fbab: POP EDI
// 0060fbac: POP ESI
// 0060fbad: POP EBX
// 0060fbae: RET
// 0060fbaf: PUSH EBP
//   Label: LAB_0060fbaf
// 0060fbb0: PUSH EDI
// 0060fbb1: PUSH EAX
// 0060fbb2: CALL crt_string.c_memcpy_FUN_0060cd60
//   XREF to: 0060cd60 (UNCONDITIONAL_CALL)
// 0060fbb7: ADD ESP,0xc
// 0060fbba: ADD ESI,0x2
// 0060fbbd: PUSH ESI
// 0060fbbe: MOV word ptr [EBX + EBP*0x1],0x0
// 0060fbc4: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0060fbc8: CALL crt_string.c_wcslen_FUN_0060cd30
//   XREF to: 0060cd30 (UNCONDITIONAL_CALL)
// 0060fbcd: ADD ESP,0x4
// 0060fbd0: TEST EAX,EAX
// 0060fbd2: JZ 0x0060fc1c
//   XREF to: 0060fc1c (CONDITIONAL_JUMP)
// 0060fbd4: ADD EAX,EAX
// 0060fbd6: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060fbda: ADD EAX,0x2
// 0060fbdd: PUSH EAX
// 0060fbde: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060fbe3: MOV ESI,EAX
// 0060fbe5: ADD ESP,0x4
// 0060fbe8: MOV EBP,EAX
// 0060fbea: TEST EAX,EAX
// 0060fbec: JNZ 0x0060fbfe
//   XREF to: 0060fbfe (CONDITIONAL_JUMP)
// 0060fbee: PUSH EBX
// 0060fbef: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060fbf4: MOV EAX,0xffffffff
// 0060fbf9: JMP 0x0060fce6
//   XREF to: 0060fce6 (UNCONDITIONAL_JUMP)
// 0060fbfe: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0060fbfe
//   XREF to: Stack[-0x14] (READ)
// 0060fc02: PUSH EAX
// 0060fc03: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0060fc07: PUSH EDX
// 0060fc08: PUSH ESI
// 0060fc09: CALL crt_string.c_memcpy_FUN_0060cd60
//   XREF to: 0060cd60 (UNCONDITIONAL_CALL)
// 0060fc0e: ADD ESP,0xc
// 0060fc11: ADD ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0060fc15: MOV word ptr [ESI],0x0
// 0060fc1a: JMP 0x0060fc1e
//   XREF to: 0060fc1e (UNCONDITIONAL_JUMP)
// 0060fc1c: XOR EBP,EBP
//   Label: LAB_0060fc1c
// 0060fc1e: PUSH EBP
//   Label: LAB_0060fc1e
// 0060fc1f: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0060fc23: PUSH ECX
// 0060fc24: CALL crt_unknown.c_FUN_006107f0
//   XREF to: 006107f0 (UNCONDITIONAL_CALL)
// 0060fc29: ADD ESP,0x8
// 0060fc2c: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0060fc30: PUSH ESI
// 0060fc31: MOV EBX,EAX
// 0060fc33: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060fc38: ADD ESP,0x4
// 0060fc3b: PUSH EBP
// 0060fc3c: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060fc41: ADD ESP,0x4
// 0060fc44: TEST EBX,EBX
// 0060fc46: JNZ 0x0060fc55
//   XREF to: 0060fc55 (CONDITIONAL_JUMP)
// 0060fc48: MOV EAX,0xffffffff
// 0060fc4d: ADD ESP,0x14
// 0060fc50: POP EBP
// 0060fc51: POP EDI
// 0060fc52: POP ESI
// 0060fc53: POP EBX
// 0060fc54: RET
// 0060fc55: CMP dword ptr [0x03f9b868],0x0
//   Label: LAB_0060fc55
//   XREF to: 03f9b868 (READ)
// 0060fc5c: JNZ 0x0060fc63
//   XREF to: 0060fc63 (CONDITIONAL_JUMP)
// 0060fc5e: CALL crt_unknown.c_FUN_00610900
//   XREF to: 00610900 (UNCONDITIONAL_CALL)
// 0060fc63: PUSH EDI
//   Label: LAB_0060fc63
// 0060fc64: CALL crt_unknown.c_FUN_0060fcf4
//   XREF to: 0060fcf4 (UNCONDITIONAL_CALL)
// 0060fc69: ADD ESP,0x4
// 0060fc6c: TEST EAX,EAX
// 0060fc6e: JZ 0x0060fc7d
//   XREF to: 0060fc7d (CONDITIONAL_JUMP)
// 0060fc70: MOV EAX,0xffffffff
// 0060fc75: ADD ESP,0x14
// 0060fc78: POP EBP
// 0060fc79: POP EDI
// 0060fc7a: POP ESI
// 0060fc7b: POP EBX
// 0060fc7c: RET
// 0060fc7d: PUSH EDI
//   Label: LAB_0060fc7d
// 0060fc7e: CALL crt_string.c_wcslen_FUN_0060cd30
//   XREF to: 0060cd30 (UNCONDITIONAL_CALL)
// 0060fc83: ADD ESP,0x4
// 0060fc86: LEA ESI,[EAX + 0x1]
// 0060fc89: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0060fc8c: IMUL EAX,ESI
// 0060fc8f: PUSH EAX
// 0060fc90: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060fc95: MOV EBX,EAX
// 0060fc97: ADD ESP,0x4
// 0060fc9a: TEST EAX,EAX
// 0060fc9c: JNZ 0x0060fcb5
//   XREF to: 0060fcb5 (CONDITIONAL_JUMP)
// 0060fc9e: PUSH 0x5
// 0060fca0: CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
//   XREF to: 00608390 (UNCONDITIONAL_CALL)
// 0060fca5: MOV EAX,0xffffffff
// 0060fcaa: ADD ESP,0x4
// 0060fcad: ADD ESP,0x14
// 0060fcb0: POP EBP
// 0060fcb1: POP EDI
// 0060fcb2: POP ESI
// 0060fcb3: POP EBX
// 0060fcb4: RET
// 0060fcb5: IMUL ESI,dword ptr [ESP + 0x4]
//   Label: LAB_0060fcb5
//   XREF to: Stack[-0x20] (READ)
// 0060fcba: PUSH ESI
// 0060fcbb: PUSH EDI
// 0060fcbc: PUSH EBX
// 0060fcbd: CALL crt_string.c_wcstombs_FUN_0060c0c0
//   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)
// 0060fcc2: ADD ESP,0xc
// 0060fcc5: CMP EAX,-0x1
// 0060fcc8: JNZ 0x0060fce0
//   XREF to: 0060fce0 (CONDITIONAL_JUMP)
// 0060fcca: PUSH EBX
// 0060fccb: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060fcd0: MOV EAX,0xffffffff
// 0060fcd5: ADD ESP,0x4
// 0060fcd8: ADD ESP,0x14
// 0060fcdb: POP EBP
// 0060fcdc: POP EDI
// 0060fcdd: POP ESI
// 0060fcde: POP EBX
// 0060fcdf: RET
// 0060fce0: PUSH EBX
//   Label: LAB_0060fce0
// 0060fce1: CALL crt_env.c_updateEnvironTable_FUN_0060f04c
//   XREF to: 0060f04c (UNCONDITIONAL_CALL)
// 0060fce6: ADD ESP,0x4
//   Label: LAB_0060fce6
// 0060fce9: ADD ESP,0x14
//   Label: LAB_0060fce9
// 0060fcec: POP EBP
// 0060fced: POP EDI
// 0060fcee: POP ESI
// 0060fcef: POP EBX
// 0060fcf0: RET
