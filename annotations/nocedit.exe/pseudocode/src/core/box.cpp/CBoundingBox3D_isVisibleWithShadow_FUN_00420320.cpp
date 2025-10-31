// Name: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
// Address: 00420320
// Address Range: [[00420320, 004204ef]]
// Convention: __cdecl
// Signature: int core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D * this_ptr)
// Cross-references:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 (004204f0) at 00420668 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonLight* g_CurrentShadowLight
//   CDemonRenderer g_CDemonRendererInstance
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
// Function calls:
//   core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000

#include "nocturne.h"

int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320(CBoundingBox3D *this_ptr)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar3;
  CRect local_20;
  SRenderVertex *local_10;
  int local_c;
  int local_8;
  
  if (g_CurrentShadowLight != (CDemonLight *)0x0) {
    pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
    local_c = g_ViewportRightFixed + g_ViewportCenterXFixed;
    local_20.top = g_ViewportRightFixed - g_ViewportCenterXFixed;
    local_20.bottom = g_ViewportBottomFixed + g_ViewportCenterYFixed;
    local_8 = g_ViewportBottomFixed - g_ViewportCenterYFixed;
    local_10 = pSVar3 + 8;
    do {
      if ((int)((pSVar3->projected_vertex).screen_x & -0x80000000) == 0) {
        iVar2 = (pSVar3->projected_vertex).screen_x;
        if (iVar2 < local_c) {
          local_c = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_x;
        if (local_20.top < iVar2) {
          local_20.top = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_y;
        if (iVar2 < local_8) {
          local_8 = iVar2;
        }
        iVar2 = (pSVar3->projected_vertex).screen_y;
        if (local_20.bottom < iVar2) {
          local_20.bottom = iVar2;
        }
      }
      else {
        iVar2 = (pSVar3->projected_vertex).transformed_x;
        if ((-(pSVar3->projected_vertex).transformed_z < iVar2) &&
           (iVar1 = (pSVar3->projected_vertex).transformed_z, iVar2 < iVar1)) {
          iVar2 = (int)(((longlong)(pSVar3->projected_vertex).transformed_x *
                        (longlong)g_ViewportCenterXFixed) / (longlong)iVar1) + g_ViewportRightFixed;
          if (local_20.top < iVar2) {
            local_20.top = iVar2;
          }
          if (iVar2 < local_c) {
            local_c = iVar2;
          }
        }
        iVar2 = (pSVar3->projected_vertex).transformed_y;
        if ((-(pSVar3->projected_vertex).transformed_z < iVar2) &&
           (iVar1 = (pSVar3->projected_vertex).transformed_z, iVar2 < iVar1)) {
          iVar2 = (int)(((longlong)(pSVar3->projected_vertex).transformed_y *
                        (longlong)g_ViewportCenterYFixed) / (longlong)iVar1) + g_ViewportBottomFixed
          ;
          if (local_20.bottom < iVar2) {
            local_20.bottom = iVar2;
          }
          if (iVar2 < local_8) {
            local_8 = iVar2;
          }
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_x) {
          local_20.top = g_ViewportCenterXFixed + g_ViewportRightFixed;
        }
        if ((pSVar3->projected_vertex).transformed_x <= -(pSVar3->projected_vertex).transformed_z) {
          local_c = g_ViewportRightFixed - g_ViewportCenterXFixed;
        }
        if ((pSVar3->projected_vertex).transformed_z <= (pSVar3->projected_vertex).transformed_y) {
          local_8 = g_ViewportCenterYFixed + g_ViewportBottomFixed;
        }
        if ((pSVar3->projected_vertex).transformed_y <= -(pSVar3->projected_vertex).transformed_z) {
          local_20.bottom = g_ViewportBottomFixed - g_ViewportCenterYFixed;
        }
      }
      pSVar3 = pSVar3 + 1;
    } while (pSVar3 != local_10);
    local_20.top = local_20.top >> 0x10;
    local_20.right = local_8 >> 0x10;
    local_20.bottom = local_20.bottom >> 0x10;
    local_20.left = local_c >> 0x10;
    local_c = local_20.left;
    local_8 = local_20.right;
    iVar2 = core_dlight_cpp_CDemonLight_testShadowMapRegion_FUN_00476000
                      (g_CurrentShadowLight,&local_20);
    return iVar2;
  }
  return 1;
}


// Assembly code:
// 00420320: PUSH EBP
//   Label: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_00420320
// 00420321: SUB ESP,0x1c
// 00420324: CMP dword ptr [0x020a5740],0x0
//   XREF to: 020a5740 (READ)
// 0042032b: JZ 0x004204ad
//   XREF to: 004204ad (CONDITIONAL_JUMP)
// 00420331: PUSH EDI
// 00420332: PUSH ESI
// 00420333: PUSH EBX
// 00420334: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0042033a: MOV EAX,[0x02d02550]
//   XREF to: 02d02550 (READ)
// 0042033f: MOV ECX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 00420345: MOV EDI,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 0042034b: MOV ESI,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 00420351: MOV EBP,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 00420357: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00420359: ADD EAX,ECX
// 0042035b: SUB EDI,ECX
// 0042035d: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00420361: MOV EAX,[0x02d02554]
//   XREF to: 02d02554 (READ)
// 00420366: ADD EBP,ESI
// 00420368: SUB EAX,ESI
// 0042036a: MOV ESI,EDX
// 0042036c: ADD EDX,0x180
// 00420372: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00420376: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 0042037a: MOV AH,byte ptr [ESI + 0x13]
//   Label: LAB_0042037a
// 0042037d: MOV ECX,ESI
// 0042037f: TEST AH,0x80
// 00420382: JZ 0x004204b7
//   XREF to: 004204b7 (CONDITIONAL_JUMP)
// 00420388: MOV EAX,dword ptr [ESI + 0x8]
// 0042038b: MOV EDX,dword ptr [ESI]
// 0042038d: NEG EAX
// 0042038f: CMP EAX,EDX
// 00420391: JGE 0x004203bc
//   XREF to: 004203bc (CONDITIONAL_JUMP)
// 00420393: MOV EBX,dword ptr [ESI + 0x8]
// 00420396: CMP EDX,EBX
// 00420398: JGE 0x004203bc
//   XREF to: 004203bc (CONDITIONAL_JUMP)
// 0042039a: MOV EDX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 004203a0: MOV EAX,dword ptr [ESI]
// 004203a2: IMUL EDX
// 004203a4: IDIV EBX
// 004203a6: ADD EAX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 004203ac: CMP EAX,EDI
// 004203ae: JLE 0x004203b2
//   XREF to: 004203b2 (CONDITIONAL_JUMP)
// 004203b0: MOV EDI,EAX
// 004203b2: CMP EAX,dword ptr [ESP + 0x20]
//   Label: LAB_004203b2
//   XREF to: Stack[-0xc] (READ)
// 004203b6: JGE 0x004203bc
//   XREF to: 004203bc (CONDITIONAL_JUMP)
// 004203b8: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004203bc: MOV EAX,dword ptr [ECX + 0x8]
//   Label: LAB_004203bc
// 004203bf: MOV EDX,dword ptr [ECX + 0x4]
// 004203c2: NEG EAX
// 004203c4: CMP EAX,EDX
// 004203c6: JGE 0x004203f2
//   XREF to: 004203f2 (CONDITIONAL_JUMP)
// 004203c8: MOV EBX,dword ptr [ECX + 0x8]
// 004203cb: CMP EDX,EBX
// 004203cd: JGE 0x004203f2
//   XREF to: 004203f2 (CONDITIONAL_JUMP)
// 004203cf: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 004203d5: MOV EAX,dword ptr [ECX + 0x4]
// 004203d8: IMUL EDX
// 004203da: IDIV EBX
// 004203dc: ADD EAX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 004203e2: CMP EAX,EBP
// 004203e4: JLE 0x004203e8
//   XREF to: 004203e8 (CONDITIONAL_JUMP)
// 004203e6: MOV EBP,EAX
// 004203e8: CMP EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004203e8
//   XREF to: Stack[-0x8] (READ)
// 004203ec: JGE 0x004203f2
//   XREF to: 004203f2 (CONDITIONAL_JUMP)
// 004203ee: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004203f2: MOV EDX,dword ptr [ECX + 0x8]
//   Label: LAB_004203f2
// 004203f5: CMP EDX,dword ptr [ECX]
// 004203f7: JG 0x00420407
//   XREF to: 00420407 (CONDITIONAL_JUMP)
// 004203f9: MOV EBX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 004203ff: MOV EDI,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 00420405: ADD EDI,EBX
// 00420407: MOV EAX,dword ptr [ECX + 0x8]
//   Label: LAB_00420407
// 0042040a: MOV EDX,dword ptr [ECX]
// 0042040c: NEG EAX
// 0042040e: CMP EAX,EDX
// 00420410: JL 0x00420423
//   XREF to: 00420423 (CONDITIONAL_JUMP)
// 00420412: MOV EBX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 00420418: MOV EAX,[0x02d02550]
//   XREF to: 02d02550 (READ)
// 0042041d: SUB EAX,EBX
// 0042041f: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00420423: MOV EDX,dword ptr [ECX + 0x8]
//   Label: LAB_00420423
// 00420426: CMP EDX,dword ptr [ECX + 0x4]
// 00420429: JG 0x0042043c
//   XREF to: 0042043c (CONDITIONAL_JUMP)
// 0042042b: MOV EBX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 00420431: MOV EAX,[0x02d0254c]
//   XREF to: 02d0254c (READ)
// 00420436: ADD EAX,EBX
// 00420438: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0042043c: MOV EAX,dword ptr [ECX + 0x8]
//   Label: LAB_0042043c
// 0042043f: MOV EDX,dword ptr [ECX + 0x4]
// 00420442: NEG EAX
// 00420444: CMP EAX,EDX
// 00420446: JL 0x00420456
//   XREF to: 00420456 (CONDITIONAL_JUMP)
// 00420448: MOV ECX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0042044e: MOV EBP,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 00420454: SUB EBP,ECX
// 00420456: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00420456
//   XREF to: Stack[-0x10] (READ)
// 0042045a: ADD ESI,0x30
// 0042045d: CMP ESI,EBX
// 0042045f: JNZ 0x0042037a
//   XREF to: 0042037a (CONDITIONAL_JUMP)
// 00420465: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0xc] (READ)
// 00420469: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x8] (READ)
// 0042046d: MOV EDX,dword ptr [0x020a5740]
//   XREF to: 020a5740 (READ)
// 00420473: SAR EDI,0x10
// 00420476: SAR EAX,0x10
// 00420479: SAR EBP,0x10
// 0042047c: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00420480: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00420484: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x20] (DATA)
// 00420488: SAR ESI,0x10
// 0042048b: PUSH EAX
// 0042048c: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00420490: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00420494: PUSH EDX
// 00420495: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0xc] (WRITE)
// 00420499: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0042049d: CALL core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00476000
//   XREF to: 00476000 (UNCONDITIONAL_CALL)
// 004204a2: ADD ESP,0x8
// 004204a5: POP EBX
// 004204a6: POP ESI
// 004204a7: POP EDI
// 004204a8: ADD ESP,0x1c
// 004204ab: POP EBP
// 004204ac: RET
// 004204ad: MOV EAX,0x1
//   Label: LAB_004204ad
// 004204b2: ADD ESP,0x1c
// 004204b5: POP EBP
// 004204b6: RET
// 004204b7: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_004204b7
//   XREF to: Stack[-0xc] (READ)
// 004204bb: MOV EDX,dword ptr [ESI + 0x10]
// 004204be: CMP EAX,EDX
// 004204c0: JLE 0x004204c6
//   XREF to: 004204c6 (CONDITIONAL_JUMP)
// 004204c2: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 004204c6: MOV EBX,dword ptr [ECX + 0x10]
//   Label: LAB_004204c6
// 004204c9: CMP EDI,EBX
// 004204cb: JGE 0x004204cf
//   XREF to: 004204cf (CONDITIONAL_JUMP)
// 004204cd: MOV EDI,EBX
// 004204cf: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004204cf
//   XREF to: Stack[-0x8] (READ)
// 004204d3: MOV EDX,dword ptr [ECX + 0x14]
// 004204d6: CMP EAX,EDX
// 004204d8: JLE 0x004204de
//   XREF to: 004204de (CONDITIONAL_JUMP)
// 004204da: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 004204de: MOV EBX,dword ptr [ECX + 0x14]
//   Label: LAB_004204de
// 004204e1: CMP EBP,EBX
// 004204e3: JGE 0x00420456
//   XREF to: 00420456 (CONDITIONAL_JUMP)
// 004204e9: MOV EBP,EBX
// 004204eb: JMP 0x00420456
//   XREF to: 00420456 (UNCONDITIONAL_JUMP)
