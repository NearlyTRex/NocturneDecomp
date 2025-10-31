// Name: crt_unknown.c_FUN_00609fc8
// Address: 00609fc8
// Address Range: [[00609fc8, 00609ff3]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00609fc8()
// Cross-references:
//   crt_unknown.c_staticFinal_FUN_0060a4cc (0060a4cc) at 0060a54d [UNCONDITIONAL_CALL]
// Globals:
//   DeleteCriticalSection* PTR_DeleteCriticalSection_00611520 = 00211caa
//   CRITICAL_SECTION[64] g_StaticCriticalSectionArray
//   undefined4 g_StaticCriticalSectionArray[1].DebugInfo
//   DWORD g_StaticCriticalSectionCounter

#include "nocturne.h"

void crt_unknown_c_FUN_00609fc8(void)

{
  CRITICAL_SECTION *lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)g_StaticCriticalSectionCounter) {
    lpCriticalSection = g_StaticCriticalSectionArray;
    do {
      iVar1 = iVar1 + 1;
      (*PTR_DeleteCriticalSection_00611520)(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (iVar1 < (int)g_StaticCriticalSectionCounter);
  }
  return;
}


// Assembly code:
// 00609fc8: PUSH EBX
//   Label: crt_unknown.c_FUN_00609fc8
// 00609fc9: PUSH ESI
// 00609fca: MOV EDX,dword ptr [0x03f9c000]
//   XREF to: 03f9c000 (READ)
// 00609fd0: XOR ESI,ESI
// 00609fd2: TEST EDX,EDX
// 00609fd4: JLE 0x00609ff1
//   XREF to: 00609ff1 (CONDITIONAL_JUMP)
// 00609fd6: MOV EBX,0x3f9b9d0
//   XREF to: 03f9b9d0 (DATA)
// 00609fdb: PUSH EBX
//   Label: LAB_00609fdb
//   XREF to: 03f9b9d0 (DATA)
//   XREF to: 03f9b9e8 (DATA)
// 00609fdc: INC ESI
// 00609fdd: CALL dword ptr CS:[0x611520]
//   XREF to: 00611520 (READ)
// 00609fe4: MOV ECX,dword ptr [0x03f9c000]
//   XREF to: 03f9c000 (READ)
// 00609fea: ADD EBX,0x18
// 00609fed: CMP ESI,ECX
// 00609fef: JL 0x00609fdb
//   XREF to: 00609fdb (CONDITIONAL_JUMP)
// 00609ff1: POP ESI
//   Label: LAB_00609ff1
// 00609ff2: POP EBX
// 00609ff3: RET
