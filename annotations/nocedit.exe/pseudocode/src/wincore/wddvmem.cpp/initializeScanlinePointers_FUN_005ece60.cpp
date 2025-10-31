// Name: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_005ece60
// Address: 005ece60
// Address Range: [[005ece60, 005ecee1]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_initializeScanlinePointers_FUN_005ece60(void)
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void* g_BackBuffer
//   void* g_SoftwareZBuffer
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_initializeScanlinePointers_FUN_005ece60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (0 < g_WindowHeight) {
    iVar5 = g_BitsPerPixel >> 0x1f;
    iVar1 = g_BitsPerPixel + iVar5 * -8;
    iVar2 = g_WindowWidth * 4;
    iVar6 = 0;
    iVar3 = 0;
    do {
      *(void **)((int)g_ScreenBufferArray + iVar3) =
           (void *)(g_WindowWidth * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3) +
                   (int)g_BackBuffer);
      iVar4 = iVar4 + 1;
      *(int *)((int)g_ZBufferScanlineArray + iVar3) = (int)g_SoftwareZBuffer + iVar6;
      iVar6 = iVar6 + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < g_WindowHeight);
  }
  return;
}


// Assembly code:
// 005ece60: PUSH EBP
//   Label: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_005ece60
// 005ece61: SUB ESP,0x4
// 005ece64: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005ece6a: XOR ECX,ECX
// 005ece6c: TEST EDX,EDX
// 005ece6e: JLE 0x005ecedd
//   XREF to: 005ecedd (CONDITIONAL_JUMP)
// 005ece70: PUSH EDI
// 005ece71: PUSH ESI
// 005ece72: PUSH EBX
// 005ece73: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005ece78: MOV EDX,EAX
// 005ece7a: SAR EDX,0x1f
// 005ece7d: SHL EDX,0x3
// 005ece80: SBB EAX,EDX
// 005ece82: SAR EAX,0x3
// 005ece85: MOV EDI,EAX
// 005ece87: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005ece8c: SHL EAX,0x2
// 005ece8f: MOV EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005ece95: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005ece99: XOR EAX,EAX
// 005ece9b: IMUL EDX,EBP,0x0
// 005ece9e: MOV EBX,dword ptr [0x00679394]
//   Label: LAB_005ece9e
//   XREF to: 00679394 (READ)
// 005ecea4: IMUL EBX,ECX
// 005ecea7: IMUL EBX,EDI
// 005eceaa: MOV ESI,dword ptr [0x00688010]
//   XREF to: 00688010 (READ)
// 005eceb0: ADD EBX,ESI
// 005eceb2: MOV dword ptr [EAX + 0x2cf6a9c],EBX
//   XREF to: 02cf6a9c (WRITE)
//   XREF to: 02cf6aa0 (WRITE)
// 005eceb8: MOV EBX,dword ptr [0x0077262c]
//   XREF to: 0077262c (READ)
// 005ecebe: ADD EAX,0x4
// 005ecec1: ADD EBX,EDX
// 005ecec3: INC ECX
// 005ecec4: MOV dword ptr [EAX + 0x2cf7d58],EBX
//   XREF to: 02cf7d5c (WRITE)
//   XREF to: 02cf7d60 (WRITE)
// 005ececa: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 005ecece: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005eced4: ADD EDX,EBX
// 005eced6: CMP ECX,ESI
// 005eced8: JL 0x005ece9e
//   XREF to: 005ece9e (CONDITIONAL_JUMP)
// 005eceda: POP EBX
// 005ecedb: POP ESI
// 005ecedc: POP EDI
// 005ecedd: ADD ESP,0x4
//   Label: LAB_005ecedd
// 005ecee0: POP EBP
// 005ecee1: RET
