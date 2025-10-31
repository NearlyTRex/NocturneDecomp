// Name: core_zombie.cpp_FUN_005fcf80
// Address: 005fcf80
// Address Range: [[005fcf80, 005fcfb5]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005fcf80()
// Globals:
//   int g_RasterizerEdgeCount
//   SEdgeData[16] g_RasterizerEdgeArray
//   undefined4 g_RasterizerEdgeArray[1].y_start

#include "nocturne.h"

SEdgeData * core_zombie_cpp_FUN_005fcf80(void)

{
  SEdgeData *pSVar1;
  int iVar2;
  int in_stack_00000004;
  SEdgeData *in_stack_00000008;
  
  pSVar1 = g_RasterizerEdgeArray;
  iVar2 = 0;
  if (0 < g_RasterizerEdgeCount) {
    do {
      if ((in_stack_00000004 == pSVar1->y_start) && (pSVar1 != in_stack_00000008)) {
        return pSVar1;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < g_RasterizerEdgeCount);
  }
  return (SEdgeData *)0x0;
}


// Assembly code:
// 005fcf80: PUSH EBX
//   Label: core_zombie.cpp_FUN_005fcf80
// 005fcf81: PUSH ESI
// 005fcf82: MOV EBX,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fcf88: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005fcf8c: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005fcf90: MOV EAX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fcf95: XOR EDX,EDX
// 005fcf97: TEST EBX,EBX
// 005fcf99: JLE 0x005fcfab
//   XREF to: 005fcfab (CONDITIONAL_JUMP)
// 005fcf9b: CMP ECX,dword ptr [EAX]
//   Label: LAB_005fcf9b
//   XREF to: 03f9ad60 (READ)
//   XREF to: 03f9ada8 (READ)
// 005fcf9d: JNZ 0x005fcfa3
//   XREF to: 005fcfa3 (CONDITIONAL_JUMP)
// 005fcf9f: CMP EAX,ESI
// 005fcfa1: JNZ 0x005fcfad
//   XREF to: 005fcfad (CONDITIONAL_JUMP)
// 005fcfa3: INC EDX
//   Label: LAB_005fcfa3
// 005fcfa4: ADD EAX,0x48
//   XREF to: 03f9ada8 (DATA)
// 005fcfa7: CMP EDX,EBX
// 005fcfa9: JL 0x005fcf9b
//   XREF to: 005fcf9b (CONDITIONAL_JUMP)
// 005fcfab: XOR EAX,EAX
//   Label: LAB_005fcfab
// 005fcfad: MOV dword ptr [0x03f9ad5c],EBX
//   Label: LAB_005fcfad
//   XREF to: 03f9ad5c (WRITE)
// 005fcfb3: POP ESI
// 005fcfb4: POP EBX
// 005fcfb5: RET
