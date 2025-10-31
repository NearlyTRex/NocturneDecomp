// Name: crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4
// Address: 00609ff4
// Address Range: [[00609ff4, 0060a04b]]
// Convention: unknown
// Signature: undefined crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4()
// Cross-references:
//   crt_unknown.c_staticFinal_FUN_0060a4cc (0060a4cc) at 0060a506 [UNCONDITIONAL_CALL]
// Globals:
//   DeleteCriticalSection* PTR_DeleteCriticalSection_00611520 = 00211caa
//   DWORD g_DynamicCriticalSectionCounter
//   LPCRITICAL_SECTION* g_DynamicCriticalSectionArray
// Function calls:
//   crt_memory.c_free_FUN_00601cd0

#include "nocturne.h"

/* Signature: undefined1 unk_DeleteCritcalSectionsMaybe() */

void crt_unknown_c_DeleteCritcalSectionsMaybe_FUN_00609ff4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_DynamicCriticalSectionCounter) {
    iVar2 = 0;
    do {
      (*PTR_DeleteCriticalSection_00611520)
                (*(LPCRITICAL_SECTION *)(iVar2 + (int)g_DynamicCriticalSectionArray));
      puVar1 = (undefined4 *)(iVar2 + (int)g_DynamicCriticalSectionArray);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      crt_memory_c_free_FUN_00601cd0((void *)*puVar1);
    } while (iVar3 < (int)g_DynamicCriticalSectionCounter);
  }
  if (g_DynamicCriticalSectionArray != (LPCRITICAL_SECTION *)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_DynamicCriticalSectionArray);
  }
  return;
}


// Assembly code:
// 00609ff4: PUSH EBX
//   Label: crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4
// 00609ff5: PUSH ESI
// 00609ff6: PUSH EDI
// 00609ff7: PUSH EBP
// 00609ff8: MOV EDX,dword ptr [0x03f9c004]
//   XREF to: 03f9c004 (READ)
// 00609ffe: XOR ESI,ESI
// 0060a000: TEST EDX,EDX
// 0060a002: JLE 0x0060a035
//   XREF to: 0060a035 (CONDITIONAL_JUMP)
// 0060a004: XOR EBX,EBX
// 0060a006: MOV EAX,[0x03f9c008]
//   Label: LAB_0060a006
//   XREF to: 03f9c008 (READ)
// 0060a00b: MOV ECX,dword ptr [EBX + EAX*0x1]
// 0060a00e: PUSH ECX
// 0060a00f: CALL dword ptr CS:[0x611520]
//   XREF to: 00611520 (READ)
// 0060a016: MOV EAX,[0x03f9c008]
//   XREF to: 03f9c008 (READ)
// 0060a01b: MOV EDI,dword ptr [EBX + EAX*0x1]
// 0060a01e: PUSH EDI
// 0060a01f: ADD EBX,0x4
// 0060a022: INC ESI
// 0060a023: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060a028: MOV EBP,dword ptr [0x03f9c004]
//   XREF to: 03f9c004 (READ)
// 0060a02e: ADD ESP,0x4
// 0060a031: CMP ESI,EBP
// 0060a033: JL 0x0060a006
//   XREF to: 0060a006 (CONDITIONAL_JUMP)
// 0060a035: MOV EAX,[0x03f9c008]
//   Label: LAB_0060a035
//   XREF to: 03f9c008 (READ)
// 0060a03a: TEST EAX,EAX
// 0060a03c: JZ 0x0060a047
//   XREF to: 0060a047 (CONDITIONAL_JUMP)
// 0060a03e: PUSH EAX
// 0060a03f: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060a044: ADD ESP,0x4
// 0060a047: POP EBP
//   Label: LAB_0060a047
// 0060a048: POP EDI
// 0060a049: POP ESI
// 0060a04a: POP EBX
// 0060a04b: RET
