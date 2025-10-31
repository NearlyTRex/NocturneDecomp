// Name: core_set.cpp_CDemonSet_FUN_0056e5d0
// Address: 0056e5d0
// Address Range: [[0056e5d0, 0056e7b2]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056e5d0(CDemonSet * this_ptr)
// Cross-references:
//   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 (0052af70) at 0052b109 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 (0056e7c0) at 0056e83a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonCamera* g_SkipClearBuffersSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
// Function calls:
//   core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056e5d0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SRenderVertex *pSVar4;
  int iVar5;
  int in_stack_00000008;
  int local_10;
  int local_c;
  int local_8;
  
  if (g_SkipClearBuffersSceneCamera != (CDemonCamera *)0x0) {
    pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
    local_c = g_ViewportRightFixed - g_ViewportCenterXFixed;
    iVar5 = g_ViewportRightFixed + g_ViewportCenterXFixed;
    iVar3 = g_ViewportBottomFixed - g_ViewportCenterYFixed;
    local_8 = g_ViewportBottomFixed + g_ViewportCenterYFixed;
    local_10 = 0;
    if (0 < in_stack_00000008) {
      do {
        if ((int)((pSVar4->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar2 = (pSVar4->projected_vertex).screen_x;
          if (iVar2 < iVar5) {
            iVar5 = iVar2;
          }
          iVar2 = (pSVar4->projected_vertex).screen_x;
          if (local_c < iVar2) {
            local_c = iVar2;
          }
          iVar2 = (pSVar4->projected_vertex).screen_y;
          if (iVar2 < iVar3) {
            iVar3 = iVar2;
          }
          iVar2 = (pSVar4->projected_vertex).screen_y;
          if (local_8 < iVar2) {
            local_8 = iVar2;
          }
        }
        else {
          iVar2 = (pSVar4->projected_vertex).transformed_x;
          if ((-(pSVar4->projected_vertex).transformed_z < iVar2) &&
             (iVar1 = (pSVar4->projected_vertex).transformed_z, iVar2 < iVar1)) {
            iVar2 = (int)(((longlong)(pSVar4->projected_vertex).transformed_x *
                          (longlong)g_ViewportCenterXFixed) / (longlong)iVar1) +
                    g_ViewportRightFixed;
            if (local_c < iVar2) {
              local_c = iVar2;
            }
            if (iVar2 < iVar5) {
              iVar5 = iVar2;
            }
          }
          iVar2 = (pSVar4->projected_vertex).transformed_y;
          if ((-(pSVar4->projected_vertex).transformed_z < iVar2) &&
             (iVar1 = (pSVar4->projected_vertex).transformed_z, iVar2 < iVar1)) {
            iVar2 = (int)(((longlong)(pSVar4->projected_vertex).transformed_y *
                          (longlong)g_ViewportCenterYFixed) / (longlong)iVar1) +
                    g_ViewportBottomFixed;
            if (local_8 < iVar2) {
              local_8 = iVar2;
            }
            if (iVar2 < iVar3) {
              iVar3 = iVar2;
            }
          }
          if ((pSVar4->projected_vertex).transformed_z <= (pSVar4->projected_vertex).transformed_x)
          {
            local_c = g_ViewportCenterXFixed + g_ViewportRightFixed;
          }
          if ((pSVar4->projected_vertex).transformed_x <= -(pSVar4->projected_vertex).transformed_z)
          {
            iVar5 = g_ViewportRightFixed - g_ViewportCenterXFixed;
          }
          if ((pSVar4->projected_vertex).transformed_z <= (pSVar4->projected_vertex).transformed_y)
          {
            iVar3 = g_ViewportCenterYFixed + g_ViewportBottomFixed;
          }
          if ((pSVar4->projected_vertex).transformed_y <= -(pSVar4->projected_vertex).transformed_z)
          {
            local_8 = g_ViewportBottomFixed - g_ViewportCenterYFixed;
          }
        }
        local_10 = local_10 + 1;
        pSVar4 = pSVar4 + 1;
      } while (local_10 < in_stack_00000008);
    }
    core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740
              (g_SkipClearBuffersSceneCamera,iVar5 >> 0x10,local_c >> 0x10,iVar3 >> 0x10,
               local_8 >> 0x10);
  }
  return;
}


// Assembly code:
// 0056e5d0: PUSH EBP
//   Label: core_set.cpp_CDemonSet_FUN_0056e5d0
// 0056e5d1: SUB ESP,0x1c
// 0056e5d4: CMP dword ptr [0x00902f70],0x0
//   XREF to: 00902f70 (READ)
// 0056e5db: JZ 0x0056e775
//   XREF to: 0056e775 (CONDITIONAL_JUMP)
// 0056e5e1: PUSH EDI
// 0056e5e2: PUSH ESI
// 0056e5e3: PUSH EBX
// 0056e5e4: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0056e5e8: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0056e5ed: MOV EDI,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0056e5f3: MOV ECX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 0056e5f9: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0056e5fb: MOV EAX,[0x02d02550]
//   XREF to: 02d02550 (READ)
// 0056e600: MOV EBP,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0056e606: SUB EAX,ECX
// 0056e608: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0056e60e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0056e612: MOV EAX,[0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0056e617: ADD EDI,ECX
// 0056e619: SUB EBP,EAX
// 0056e61b: MOV EAX,[0x02d02554]
//   XREF to: 02d02554 (READ)
// 0056e620: XOR ECX,ECX
// 0056e622: ADD EAX,EDX
// 0056e624: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0056e628: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0056e62c: TEST EBX,EBX
// 0056e62e: JLE 0x0056e733
//   XREF to: 0056e733 (CONDITIONAL_JUMP)
// 0056e634: MOV AH,byte ptr [ESI + 0x13]
//   Label: LAB_0056e634
// 0056e637: MOV ECX,ESI
// 0056e639: TEST AH,0x80
// 0056e63c: JZ 0x0056e77a
//   XREF to: 0056e77a (CONDITIONAL_JUMP)
// 0056e642: MOV EAX,dword ptr [ESI + 0x8]
// 0056e645: MOV EBX,dword ptr [ESI]
// 0056e647: NEG EAX
// 0056e649: CMP EAX,EBX
// 0056e64b: JGE 0x0056e67c
//   XREF to: 0056e67c (CONDITIONAL_JUMP)
// 0056e64d: MOV EDX,dword ptr [ESI + 0x8]
// 0056e650: CMP EBX,EDX
// 0056e652: JGE 0x0056e67c
//   XREF to: 0056e67c (CONDITIONAL_JUMP)
// 0056e654: MOV EBX,EDX
// 0056e656: MOV EAX,dword ptr [ESI]
// 0056e658: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 0056e65e: IMUL EDX
// 0056e660: IDIV EBX
// 0056e662: MOV EBX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0056e668: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0xc] (READ)
// 0056e66c: ADD EAX,EBX
// 0056e66e: CMP EAX,EDX
// 0056e670: JLE 0x0056e676
//   XREF to: 0056e676 (CONDITIONAL_JUMP)
// 0056e672: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0056e676: CMP EAX,EDI
//   Label: LAB_0056e676
// 0056e678: JGE 0x0056e67c
//   XREF to: 0056e67c (CONDITIONAL_JUMP)
// 0056e67a: MOV EDI,EAX
// 0056e67c: MOV EAX,dword ptr [ECX + 0x8]
//   Label: LAB_0056e67c
// 0056e67f: MOV EBX,dword ptr [ECX + 0x4]
// 0056e682: NEG EAX
// 0056e684: CMP EAX,EBX
// 0056e686: JGE 0x0056e6b8
//   XREF to: 0056e6b8 (CONDITIONAL_JUMP)
// 0056e688: MOV EDX,dword ptr [ECX + 0x8]
// 0056e68b: CMP EBX,EDX
// 0056e68d: JGE 0x0056e6b8
//   XREF to: 0056e6b8 (CONDITIONAL_JUMP)
// 0056e68f: MOV EBX,EDX
// 0056e691: MOV EAX,dword ptr [ECX + 0x4]
// 0056e694: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0056e69a: IMUL EDX
// 0056e69c: IDIV EBX
// 0056e69e: MOV EBX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0056e6a4: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x8] (READ)
// 0056e6a8: ADD EAX,EBX
// 0056e6aa: CMP EAX,EDX
// 0056e6ac: JLE 0x0056e6b2
//   XREF to: 0056e6b2 (CONDITIONAL_JUMP)
// 0056e6ae: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0056e6b2: CMP EAX,EBP
//   Label: LAB_0056e6b2
// 0056e6b4: JGE 0x0056e6b8
//   XREF to: 0056e6b8 (CONDITIONAL_JUMP)
// 0056e6b6: MOV EBP,EAX
// 0056e6b8: MOV EBX,dword ptr [ECX + 0x8]
//   Label: LAB_0056e6b8
// 0056e6bb: CMP EBX,dword ptr [ECX]
// 0056e6bd: JG 0x0056e6d0
//   XREF to: 0056e6d0 (CONDITIONAL_JUMP)
// 0056e6bf: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0056e6c5: MOV EAX,[0x02d02548]
//   XREF to: 02d02548 (READ)
// 0056e6ca: ADD EAX,EDX
// 0056e6cc: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0056e6d0: MOV EAX,dword ptr [ECX + 0x8]
//   Label: LAB_0056e6d0
// 0056e6d3: MOV EBX,dword ptr [ECX]
// 0056e6d5: NEG EAX
// 0056e6d7: CMP EAX,EBX
// 0056e6d9: JL 0x0056e6e8
//   XREF to: 0056e6e8 (CONDITIONAL_JUMP)
// 0056e6db: MOV EAX,[0x02d02548]
//   XREF to: 02d02548 (READ)
// 0056e6e0: MOV EDI,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0056e6e6: SUB EDI,EAX
// 0056e6e8: MOV EDX,dword ptr [ECX + 0x8]
//   Label: LAB_0056e6e8
// 0056e6eb: CMP EDX,dword ptr [ECX + 0x4]
// 0056e6ee: JG 0x0056e6fe
//   XREF to: 0056e6fe (CONDITIONAL_JUMP)
// 0056e6f0: MOV EBX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 0056e6f6: MOV EBP,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0056e6fc: ADD EBP,EBX
// 0056e6fe: MOV EAX,dword ptr [ECX + 0x8]
//   Label: LAB_0056e6fe
// 0056e701: MOV EDX,dword ptr [ECX + 0x4]
// 0056e704: NEG EAX
// 0056e706: CMP EAX,EDX
// 0056e708: JL 0x0056e71b
//   XREF to: 0056e71b (CONDITIONAL_JUMP)
// 0056e70a: MOV ECX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0056e710: MOV EAX,[0x02d02554]
//   XREF to: 02d02554 (READ)
// 0056e715: SUB EAX,ECX
// 0056e717: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0056e71b: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0056e71b
//   XREF to: Stack[-0x10] (READ)
// 0056e71f: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0056e723: INC EAX
// 0056e724: ADD ESI,0x30
// 0056e727: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0056e72b: CMP EAX,EDX
// 0056e72d: JL 0x0056e634
//   XREF to: 0056e634 (CONDITIONAL_JUMP)
// 0056e733: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_0056e733
//   XREF to: Stack[-0xc] (READ)
// 0056e737: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x8] (READ)
// 0056e73b: MOV EDX,dword ptr [0x00902f70]
//   XREF to: 00902f70 (READ)
// 0056e741: SAR EBX,0x10
// 0056e744: SAR EBP,0x10
// 0056e747: PUSH EBX
// 0056e748: SAR ECX,0x10
// 0056e74b: PUSH EBP
// 0056e74c: SAR EDI,0x10
// 0056e74f: PUSH ECX
// 0056e750: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0056e754: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0056e758: PUSH EDI
// 0056e759: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0xc] (WRITE)
// 0056e75d: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x8] (WRITE)
// 0056e761: PUSH EDX
// 0056e762: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0056e766: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0056e76a: CALL core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
//   XREF to: 0044c740 (UNCONDITIONAL_CALL)
// 0056e76f: ADD ESP,0x14
// 0056e772: POP EBX
// 0056e773: POP ESI
// 0056e774: POP EDI
// 0056e775: ADD ESP,0x1c
//   Label: LAB_0056e775
// 0056e778: POP EBP
// 0056e779: RET
// 0056e77a: MOV EBX,dword ptr [ESI + 0x10]
//   Label: LAB_0056e77a
// 0056e77d: CMP EDI,EBX
// 0056e77f: JLE 0x0056e783
//   XREF to: 0056e783 (CONDITIONAL_JUMP)
// 0056e781: MOV EDI,EBX
// 0056e783: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0056e783
//   XREF to: Stack[-0xc] (READ)
// 0056e787: MOV EDX,dword ptr [ECX + 0x10]
// 0056e78a: CMP EAX,EDX
// 0056e78c: JGE 0x0056e792
//   XREF to: 0056e792 (CONDITIONAL_JUMP)
// 0056e78e: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 0056e792: MOV EBX,dword ptr [ECX + 0x14]
//   Label: LAB_0056e792
// 0056e795: CMP EBP,EBX
// 0056e797: JLE 0x0056e79b
//   XREF to: 0056e79b (CONDITIONAL_JUMP)
// 0056e799: MOV EBP,EBX
// 0056e79b: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_0056e79b
//   XREF to: Stack[-0x8] (READ)
// 0056e79f: MOV EDX,dword ptr [ECX + 0x14]
// 0056e7a2: CMP EAX,EDX
// 0056e7a4: JGE 0x0056e71b
//   XREF to: 0056e71b (CONDITIONAL_JUMP)
// 0056e7aa: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 0056e7ae: JMP 0x0056e71b
//   XREF to: 0056e71b (UNCONDITIONAL_JUMP)
