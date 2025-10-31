// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
// Address: 0044c780
// Address Range: [[0044c780, 0044c855]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(CDemonCamera * this_ptr, CRect * rect_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860 (0044c860) at 0044caed [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   int g_UseExternalRenderer
// Function calls:
//   core_dstrender.cpp_memcpyMMX_FUN_00492001
//   wincore_windll.cpp_restoreZBuffer_FUN_005b7d20

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
          (CDemonCamera *this_ptr,CRect *rect_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((((this_ptr->viewport_rect).left < rect_ptr->top) &&
       ((this_ptr->viewport_rect).top < rect_ptr->bottom)) &&
      (rect_ptr->left < (this_ptr->viewport_rect).right)) &&
     (rect_ptr->right < (this_ptr->viewport_rect).bottom)) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
      return;
    }
    iVar4 = rect_ptr->right;
    if (iVar4 <= rect_ptr->bottom) {
      iVar3 = iVar4 * 4;
      do {
        piVar1 = (int *)((int)g_ZBufferScanlineArray + iVar3);
        iVar2 = this_ptr->framebuffer_width * iVar4;
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        core_dstrender_cpp_memcpyMMX_FUN_00492001
                  ((void *)(rect_ptr->left * 4 + *piVar1),
                   (void *)((int)this_ptr->zbuffer_aligned + (iVar2 + rect_ptr->left) * 4),
                   (rect_ptr->top - rect_ptr->left) * 4 + 4);
      } while (iVar4 <= rect_ptr->bottom);
    }
  }
  return;
}


// Assembly code:
// 0044c780: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
// 0044c781: PUSH ESI
// 0044c782: PUSH EDI
// 0044c783: PUSH EBP
// 0044c784: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044c788: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044c78c: MOV EAX,dword ptr [ESI + 0x4]
// 0044c78f: CMP EAX,dword ptr [EDX + 0x11d4]
// 0044c795: JLE 0x0044c830
//   XREF to: 0044c830 (CONDITIONAL_JUMP)
// 0044c79b: MOV EBX,dword ptr [EDX + 0x11d8]
// 0044c7a1: CMP EBX,dword ptr [ESI + 0xc]
// 0044c7a4: JGE 0x0044c830
//   XREF to: 0044c830 (CONDITIONAL_JUMP)
// 0044c7aa: MOV EDI,dword ptr [EDX + 0x11dc]
// 0044c7b0: CMP EDI,dword ptr [ESI]
// 0044c7b2: JLE 0x0044c830
//   XREF to: 0044c830 (CONDITIONAL_JUMP)
// 0044c7b8: MOV EBP,dword ptr [EDX + 0x11e0]
// 0044c7be: CMP EBP,dword ptr [ESI + 0x8]
// 0044c7c1: JLE 0x0044c830
//   XREF to: 0044c830 (CONDITIONAL_JUMP)
// 0044c7c7: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 0044c7ce: JNZ 0x0044c835
//   XREF to: 0044c835 (CONDITIONAL_JUMP)
// 0044c7d0: MOV EDX,dword ptr [ESI + 0xc]
// 0044c7d3: MOV EDI,dword ptr [ESI + 0x8]
// 0044c7d6: CMP EDI,EDX
// 0044c7d8: JG 0x0044c830
//   XREF to: 0044c830 (CONDITIONAL_JUMP)
// 0044c7da: LEA EBP,[EDI*0x4 + 0x0]
// 0044c7e1: MOV ECX,dword ptr [ESI]
//   Label: LAB_0044c7e1
// 0044c7e3: MOV EAX,dword ptr [EBP + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
//   XREF to: 02cf7d60 (DATA)
// 0044c7e9: SHL ECX,0x2
// 0044c7ec: ADD ECX,EAX
// 0044c7ee: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044c7f2: MOV EAX,dword ptr [EAX + 0x144]
// 0044c7f8: IMUL EAX,EDI
// 0044c7fb: MOV EBX,dword ptr [ESI]
// 0044c7fd: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044c801: ADD EAX,EBX
// 0044c803: MOV EDX,dword ptr [EDX + 0x15c]
// 0044c809: SHL EAX,0x2
// 0044c80c: ADD EDX,EAX
// 0044c80e: MOV EAX,dword ptr [ESI + 0x4]
// 0044c811: SUB EAX,EBX
// 0044c813: SHL EAX,0x2
// 0044c816: ADD EAX,0x4
// 0044c819: PUSH EAX
// 0044c81a: PUSH EDX
// 0044c81b: PUSH ECX
// 0044c81c: ADD EBP,0x4
// 0044c81f: INC EDI
// 0044c820: CALL core_dstrender.cpp_memcpyMMX_FUN_00492001
//   XREF to: 00492001 (UNCONDITIONAL_CALL)
// 0044c825: MOV EAX,dword ptr [ESI + 0xc]
// 0044c828: ADD ESP,0xc
// 0044c82b: CMP EDI,EAX
// 0044c82d: JLE 0x0044c7e1
//   XREF to: 0044c7e1 (CONDITIONAL_JUMP)
// 0044c82f: NOP
// 0044c830: POP EBP
//   Label: LAB_0044c830
// 0044c831: POP EDI
// 0044c832: POP ESI
// 0044c833: POP EBX
// 0044c834: RET
// 0044c835: MOV EAX,[0x00679398]
//   Label: LAB_0044c835
//   XREF to: 00679398 (READ)
// 0044c83a: DEC EAX
// 0044c83b: PUSH EAX
// 0044c83c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0044c841: DEC EAX
// 0044c842: PUSH EAX
// 0044c843: PUSH 0x0
// 0044c845: PUSH 0x0
// 0044c847: PUSH 0x0
// 0044c849: CALL wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
//   XREF to: 005b7d20 (UNCONDITIONAL_CALL)
// 0044c84e: ADD ESP,0x14
// 0044c851: POP EBP
// 0044c852: POP EDI
// 0044c853: POP ESI
// 0044c854: POP EBX
// 0044c855: RET
