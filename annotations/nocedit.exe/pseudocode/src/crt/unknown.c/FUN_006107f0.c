// Name: crt_unknown.c_FUN_006107f0
// Address: 006107f0
// Address Range: [[006107f0, 006108f1]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_006107f0()
// Cross-references:
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fc24 [UNCONDITIONAL_CALL]
// Globals:
//   SetEnvironmentVariableA* PTR_SetEnvironmentVariableA_0061161c = 00212160
//   SetEnvironmentVariableW* PTR_SetEnvironmentVariableW_00611620 = 0021217a
//   WORD g_WindowsPlatformVersion = 0x0
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_string.c_wcslen_FUN_0060cd30
//   crt_string.c_wcstombs_FUN_0060c0c0

#include "nocturne.h"

char * crt_unknown_c_FUN_006107f0(void)

{
  char *pcVar1;
  ulong uVar2;
  char *dest;
  int iVar3;
  LPCWSTR in_stack_00000004;
  LPCWSTR in_stack_00000008;
  LPWSTR in_stack_00000010;
  wchar_t *in_stack_00000014;
  wchar_t *in_stack_0000001c;
  
  if (g_WindowsPlatformVersion < 0x8000) {
    pcVar1 = (char *)(*PTR_SetEnvironmentVariableW_00611620)(in_stack_00000004,in_stack_00000008);
    return pcVar1;
  }
  uVar2 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000004);
  uVar2 = uVar2 * 2 + 1;
  dest = (char *)crt_memory_c_malloc_FUN_00601bb0(uVar2);
  pcVar1 = dest;
  if (dest != (char *)0x0) {
    if (in_stack_00000010 != (LPWSTR)0x0) {
      uVar2 = crt_string_c_wcslen_FUN_0060cd30(in_stack_00000010);
      uVar2 = uVar2 * 2 + 1;
      in_stack_00000010 = (LPWSTR)crt_memory_c_malloc_FUN_00601bb0(uVar2);
      if (in_stack_00000010 == (LPWSTR)0x0) {
        crt_memory_c_free_FUN_00601cd0(dest);
        return (char *)0x0;
      }
    }
    iVar3 = crt_string_c_wcstombs_FUN_0060c0c0(dest,in_stack_00000014,uVar2);
    if (iVar3 == -1) {
      crt_memory_c_free_FUN_00601cd0(dest);
      if (in_stack_00000010 != (LPWSTR)0x0) {
        crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
      }
      return (char *)0x0;
    }
    if ((in_stack_00000010 != (LPWSTR)0x0) &&
       (iVar3 = crt_string_c_wcstombs_FUN_0060c0c0
                          ((char *)in_stack_00000010,in_stack_0000001c,uVar2), iVar3 == -1)) {
      crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
      return (char *)0x0;
    }
    pcVar1 = (char *)(*PTR_SetEnvironmentVariableA_0061161c)(dest,(LPCSTR)in_stack_00000010);
    crt_memory_c_free_FUN_00601cd0(dest);
    if (in_stack_00000010 != (LPWSTR)0x0) {
      crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
    }
  }
  return pcVar1;
}


// Assembly code:
// 006107f0: PUSH EBX
//   Label: crt_unknown.c_FUN_006107f0
// 006107f1: PUSH ESI
// 006107f2: PUSH EDI
// 006107f3: PUSH EBP
// 006107f4: CMP word ptr [0x00685019],0x8000
//   XREF to: 00685019 (READ)
// 006107fd: JNC 0x00610815
//   XREF to: 00610815 (CONDITIONAL_JUMP)
// 006107ff: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00610803: PUSH EDX
// 00610804: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00610808: PUSH EBX
// 00610809: CALL dword ptr CS:[0x611620]
//   XREF to: 00611620 (READ)
// 00610810: POP EBP
// 00610811: POP EDI
// 00610812: POP ESI
// 00610813: POP EBX
// 00610814: RET
// 00610815: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00610815
//   XREF to: Stack[0x4] (READ)
// 00610819: PUSH EDX
// 0061081a: CALL crt_string.c_wcslen_FUN_0060cd30
//   XREF to: 0060cd30 (UNCONDITIONAL_CALL)
// 0061081f: ADD EAX,EAX
// 00610821: ADD ESP,0x4
// 00610824: LEA ESI,[EAX + 0x1]
// 00610827: PUSH ESI
// 00610828: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0061082d: MOV EDI,EAX
// 0061082f: ADD ESP,0x4
// 00610832: MOV EBP,EAX
// 00610834: TEST EAX,EAX
// 00610836: JZ 0x006108ed
//   XREF to: 006108ed (CONDITIONAL_JUMP)
// 0061083c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00610840: TEST EBX,EBX
// 00610842: JZ 0x00610871
//   XREF to: 00610871 (CONDITIONAL_JUMP)
// 00610844: PUSH EBX
// 00610845: CALL crt_string.c_wcslen_FUN_0060cd30
//   XREF to: 0060cd30 (UNCONDITIONAL_CALL)
// 0061084a: ADD EAX,EAX
// 0061084c: ADD ESP,0x4
// 0061084f: LEA ESI,[EAX + 0x1]
// 00610852: PUSH ESI
// 00610853: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 00610858: ADD ESP,0x4
// 0061085b: MOV EBX,EAX
// 0061085d: TEST EAX,EAX
// 0061085f: JNZ 0x00610871
//   XREF to: 00610871 (CONDITIONAL_JUMP)
// 00610861: PUSH EDI
// 00610862: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 00610867: ADD ESP,0x4
// 0061086a: XOR EAX,EAX
// 0061086c: POP EBP
// 0061086d: POP EDI
// 0061086e: POP ESI
// 0061086f: POP EBX
// 00610870: RET
// 00610871: PUSH ESI
//   Label: LAB_00610871
// 00610872: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00610876: PUSH EDI
// 00610877: PUSH EBP
// 00610878: CALL crt_string.c_wcstombs_FUN_0060c0c0
//   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)
// 0061087d: ADD ESP,0xc
// 00610880: CMP EAX,-0x1
// 00610883: JNZ 0x006108a2
//   XREF to: 006108a2 (CONDITIONAL_JUMP)
// 00610885: PUSH EBP
// 00610886: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0061088b: ADD ESP,0x4
// 0061088e: TEST EBX,EBX
// 00610890: JZ 0x0061089b
//   XREF to: 0061089b (CONDITIONAL_JUMP)
// 00610892: PUSH EBX
// 00610893: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 00610898: ADD ESP,0x4
// 0061089b: XOR EAX,EAX
//   Label: LAB_0061089b
// 0061089d: POP EBP
// 0061089e: POP EDI
// 0061089f: POP ESI
// 006108a0: POP EBX
// 006108a1: RET
// 006108a2: TEST EBX,EBX
//   Label: LAB_006108a2
// 006108a4: JZ 0x006108ca
//   XREF to: 006108ca (CONDITIONAL_JUMP)
// 006108a6: PUSH ESI
// 006108a7: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 006108ab: PUSH EAX
// 006108ac: PUSH EBX
// 006108ad: CALL crt_string.c_wcstombs_FUN_0060c0c0
//   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)
// 006108b2: ADD ESP,0xc
// 006108b5: CMP EAX,-0x1
// 006108b8: JNZ 0x006108ca
//   XREF to: 006108ca (CONDITIONAL_JUMP)
// 006108ba: PUSH EBX
// 006108bb: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 006108c0: ADD ESP,0x4
// 006108c3: XOR EAX,EAX
// 006108c5: POP EBP
// 006108c6: POP EDI
// 006108c7: POP ESI
// 006108c8: POP EBX
// 006108c9: RET
// 006108ca: PUSH EBX
//   Label: LAB_006108ca
// 006108cb: PUSH EBP
// 006108cc: CALL dword ptr CS:[0x61161c]
//   XREF to: 0061161c (READ)
// 006108d3: PUSH EBP
// 006108d4: MOV ESI,EAX
// 006108d6: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 006108db: ADD ESP,0x4
// 006108de: TEST EBX,EBX
// 006108e0: JZ 0x006108eb
//   XREF to: 006108eb (CONDITIONAL_JUMP)
// 006108e2: PUSH EBX
// 006108e3: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 006108e8: ADD ESP,0x4
// 006108eb: MOV EAX,ESI
//   Label: LAB_006108eb
// 006108ed: POP EBP
//   Label: LAB_006108ed
// 006108ee: POP EDI
// 006108ef: POP ESI
// 006108f0: POP EBX
// 006108f1: RET
