// Name: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
// Address: 0044c860
// Address Range: [[0044c860, 0044cb7b]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539541 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c1f5 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_ScanlineSpanCount
//   int[256] g_ScanlineSpanLeft
//   undefined4 DAT_0151a3b4
//   int[256] g_ScanlineSpanRight
//   undefined4 DAT_0151a7b4
//   uint*[1024] g_ZBufferScanlineArray
//   undefined4 g_ZBufferScanlineArray[1]
//   int g_UseExternalRenderer
// Function calls:
//   core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
//   core_dstrender.cpp_memcpyMMX_FUN_00492001
//   wincore_windll.cpp_restoreZBuffer_FUN_005b7d20

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860(CDemonCamera *this_ptr)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  CRect *pCVar7;
  int iVar8;
  int iVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  int iVar11;
  CRect local_34;
  CRect *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_UseExternalRenderer != 0) {
    wincore_windll_cpp_restoreZBuffer_FUN_005b7d20(0,0,0,g_WindowWidth + -1,g_WindowHeight + -1);
    return;
  }
  if (0x100 < this_ptr->rect_array_count) {
    local_34.left = g_UseExternalRenderer;
    local_34.right = g_UseExternalRenderer;
    local_34.top = this_ptr->framebuffer_width + -1;
    local_34.bottom = this_ptr->framebuffer_height + -1;
    core_dcamera_cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780(this_ptr,&local_34);
    return;
  }
  iVar9 = 0;
  if (0 < this_ptr->rect_array_count) {
    pCVar7 = this_ptr->rect_array;
    do {
      if (pCVar7->left < 0) {
        pCVar7->left = 0;
      }
      if (this_ptr->framebuffer_width <= pCVar7->top) {
        pCVar7->top = this_ptr->framebuffer_width + -1;
      }
      if (pCVar7->right < 0) {
        pCVar7->right = 0;
      }
      if (this_ptr->framebuffer_height <= pCVar7->bottom) {
        pCVar7->bottom = this_ptr->framebuffer_height + -1;
      }
      iVar9 = iVar9 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar9 < this_ptr->rect_array_count);
  }
  iVar9 = 0;
  local_1c = 0;
  local_14 = this_ptr->framebuffer_height;
  if (0 < this_ptr->rect_array_count) {
    pCVar7 = this_ptr->rect_array;
    do {
      if (pCVar7->right < local_14) {
        local_14 = pCVar7->right;
      }
      if (local_1c < pCVar7->bottom) {
        local_1c = pCVar7->bottom;
      }
      iVar9 = iVar9 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar9 < this_ptr->rect_array_count);
  }
  if (local_14 <= local_1c) {
    local_20 = local_14 << 2;
    local_24 = this_ptr->rect_array;
    do {
      iVar9 = local_20;
      local_18 = 0;
      g_ScanlineSpanCount = 0;
      if (0 < this_ptr->rect_array_count) {
        iVar10 = 0;
        pCVar7 = local_24;
        do {
          iVar11 = g_ScanlineSpanCount;
          if ((pCVar7->right <= local_14) && (local_14 <= pCVar7->bottom)) {
            bVar6 = false;
            if (0 < g_ScanlineSpanCount) {
              iVar5 = g_ScanlineSpanCount * 4;
              iVar8 = 0;
              do {
                if ((*(int *)((int)g_ScanlineSpanLeft + iVar8) <= pCVar7->top) &&
                   (pCVar7->left <= *(int *)((int)g_ScanlineSpanRight + iVar8))) {
                  if ((*(int *)((int)g_ScanlineSpanLeft + iVar8) <= pCVar7->left) &&
                     (pCVar7->top <= *(int *)((int)g_ScanlineSpanRight + iVar8))) goto LAB_0044c9e6;
                  if (pCVar7->left < *(int *)((int)g_ScanlineSpanLeft + iVar8)) {
                    bVar6 = true;
                    *(int *)((int)g_ScanlineSpanLeft + iVar8) = pCVar7->left;
                  }
                  if (*(int *)((int)g_ScanlineSpanRight + iVar8) < pCVar7->top) {
                    *(int *)((int)g_ScanlineSpanRight + iVar8) = pCVar7->top;
                    goto LAB_0044c9e6;
                  }
                  if (bVar6) break;
                }
                iVar8 = iVar8 + 4;
              } while (SBORROW4(iVar8,iVar5) != iVar8 + iVar11 * -4 < 0);
            }
            if (!bVar6) {
              *(int *)((int)g_ScanlineSpanLeft + iVar10) = pCVar7->left;
              g_ScanlineSpanCount = g_ScanlineSpanCount + 1;
              *(int *)((int)g_ScanlineSpanRight + iVar10) = pCVar7->top;
              iVar10 = iVar10 + 4;
            }
          }
LAB_0044c9e6:
          pCVar7 = pCVar7 + 1;
          local_18 = local_18 + 1;
        } while (local_18 < this_ptr->rect_array_count);
      }
      iVar10 = 0;
      if (0 < g_ScanlineSpanCount) {
        iVar11 = 0;
        do {
          piVar1 = (int *)((int)g_ScanlineSpanLeft + iVar11);
          piVar2 = (int *)((int)g_ScanlineSpanLeft + iVar11);
          piVar3 = (int *)((int)g_ScanlineSpanLeft + iVar11);
          piVar4 = (int *)((int)g_ScanlineSpanRight + iVar11);
          iVar11 = iVar11 + 4;
          iVar10 = iVar10 + 1;
          core_dstrender_cpp_memcpyMMX_FUN_00492001
                    ((void *)(*(int *)((int)g_ZBufferScanlineArray + iVar9) + *piVar1 * 4),
                     (void *)((local_14 * this_ptr->framebuffer_width + *piVar2) * 4 +
                             (int)this_ptr->zbuffer_aligned),(*piVar4 - *piVar3) * 4 + 4);
        } while (iVar10 < g_ScanlineSpanCount);
      }
      local_20 = local_20 + 4;
      local_14 = local_14 + 1;
    } while (local_14 <= local_1c);
  }
  return;
}


// Assembly code:
// 0044c860: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_restoreZBufferRectArray_FUN_0044c860
// 0044c861: PUSH ESI
// 0044c862: PUSH EDI
// 0044c863: PUSH EBP
// 0044c864: SUB ESP,0x24
// 0044c867: MOV EDX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 0044c86d: TEST EDX,EDX
// 0044c86f: JNZ 0x0044caa0
//   XREF to: 0044caa0 (CONDITIONAL_JUMP)
// 0044c875: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0044c879: MOV ECX,dword ptr [EAX + 0x1d0]
// 0044c87f: CMP ECX,0x100
// 0044c885: JG 0x0044cac4
//   XREF to: 0044cac4 (CONDITIONAL_JUMP)
// 0044c88b: XOR EBX,EBX
// 0044c88d: TEST ECX,ECX
// 0044c88f: JLE 0x0044c8eb
//   XREF to: 0044c8eb (CONDITIONAL_JUMP)
// 0044c891: LEA EDX,[EAX + 0x1d4]
// 0044c897: MOV EBP,dword ptr [EDX]
//   Label: LAB_0044c897
// 0044c899: MOV EAX,EDX
// 0044c89b: TEST EBP,EBP
// 0044c89d: JL 0x0044cafd
//   XREF to: 0044cafd (CONDITIONAL_JUMP)
// 0044c8a3: MOV ESI,dword ptr [ESP + 0x38]
//   Label: LAB_0044c8a3
//   XREF to: Stack[0x4] (READ)
// 0044c8a7: MOV ECX,dword ptr [EAX + 0x4]
// 0044c8aa: MOV EDI,dword ptr [ESI + 0x144]
// 0044c8b0: CMP ECX,EDI
// 0044c8b2: JGE 0x0044cb08
//   XREF to: 0044cb08 (CONDITIONAL_JUMP)
// 0044c8b8: CMP dword ptr [EAX + 0x8],0x0
//   Label: LAB_0044c8b8
// 0044c8bc: JL 0x0044cb13
//   XREF to: 0044cb13 (CONDITIONAL_JUMP)
// 0044c8c2: MOV ESI,dword ptr [ESP + 0x38]
//   Label: LAB_0044c8c2
//   XREF to: Stack[0x4] (READ)
// 0044c8c6: MOV ECX,dword ptr [EAX + 0xc]
// 0044c8c9: MOV EDI,dword ptr [ESI + 0x148]
// 0044c8cf: CMP ECX,EDI
// 0044c8d1: JL 0x0044c8d9
//   XREF to: 0044c8d9 (CONDITIONAL_JUMP)
// 0044c8d3: LEA ECX,[EDI + -0x1]
// 0044c8d6: MOV dword ptr [EAX + 0xc],ECX
// 0044c8d9: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_0044c8d9
//   XREF to: Stack[0x4] (READ)
// 0044c8dd: INC EBX
// 0044c8de: MOV ECX,dword ptr [EAX + 0x1d0]
// 0044c8e4: ADD EDX,0x10
// 0044c8e7: CMP EBX,ECX
// 0044c8e9: JL 0x0044c897
//   XREF to: 0044c897 (CONDITIONAL_JUMP)
// 0044c8eb: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_0044c8eb
//   XREF to: Stack[0x4] (READ)
// 0044c8ef: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0044c8f3: XOR ESI,ESI
// 0044c8f5: XOR ECX,ECX
// 0044c8f7: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0044c8fb: MOV EDI,dword ptr [EAX + 0x1d0]
// 0044c901: MOV EBX,dword ptr [EBX + 0x148]
// 0044c907: TEST EDI,EDI
// 0044c909: JLE 0x0044c93c
//   XREF to: 0044c93c (CONDITIONAL_JUMP)
// 0044c90b: ADD EAX,0x1d4
// 0044c910: MOV ESI,dword ptr [EAX + 0x8]
//   Label: LAB_0044c910
// 0044c913: MOV EDX,EAX
// 0044c915: CMP EBX,ESI
// 0044c917: JLE 0x0044c91b
//   XREF to: 0044c91b (CONDITIONAL_JUMP)
// 0044c919: MOV EBX,ESI
// 0044c91b: MOV EDI,dword ptr [ESP + 0x18]
//   Label: LAB_0044c91b
//   XREF to: Stack[-0x1c] (READ)
// 0044c91f: MOV ESI,dword ptr [EDX + 0xc]
// 0044c922: CMP ESI,EDI
// 0044c924: JLE 0x0044c92a
//   XREF to: 0044c92a (CONDITIONAL_JUMP)
// 0044c926: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0044c92a: MOV EDX,dword ptr [ESP + 0x38]
//   Label: LAB_0044c92a
//   XREF to: Stack[0x4] (READ)
// 0044c92e: INC ECX
// 0044c92f: MOV EBP,dword ptr [EDX + 0x1d0]
// 0044c935: ADD EAX,0x10
// 0044c938: CMP ECX,EBP
// 0044c93a: JL 0x0044c910
//   XREF to: 0044c910 (CONDITIONAL_JUMP)
// 0044c93c: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0044c93c
//   XREF to: Stack[-0x1c] (READ)
// 0044c940: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0044c944: CMP EBX,EAX
// 0044c946: JG 0x0044ca98
//   XREF to: 0044ca98 (CONDITIONAL_JUMP)
// 0044c94c: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0044c950: SHL EBX,0x2
// 0044c953: ADD EAX,0x1d4
// 0044c958: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 0044c95c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044c960: XOR ECX,ECX
//   Label: LAB_0044c960
// 0044c962: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0044c966: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0044c96a: MOV ESI,dword ptr [EAX + 0x1d0]
// 0044c970: MOV dword ptr [0x0151a3ac],ECX
//   XREF to: 0151a3ac (WRITE)
// 0044c976: TEST ESI,ESI
// 0044c978: JLE 0x0044ca00
//   XREF to: 0044ca00 (CONDITIONAL_JUMP)
// 0044c97e: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0044c982: XOR EBP,EBP
// 0044c984: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0044c984
//   XREF to: Stack[-0x14] (READ)
// 0044c988: MOV ESI,dword ptr [EDI + 0x8]
// 0044c98b: MOV EDX,EDI
// 0044c98d: CMP EAX,ESI
// 0044c98f: JL 0x0044c9e6
//   XREF to: 0044c9e6 (CONDITIONAL_JUMP)
// 0044c991: CMP EAX,dword ptr [EDI + 0xc]
// 0044c994: JG 0x0044c9e6
//   XREF to: 0044c9e6 (CONDITIONAL_JUMP)
// 0044c996: MOV EBX,dword ptr [0x0151a3ac]
//   XREF to: 0151a3ac (READ)
// 0044c99c: XOR ECX,ECX
// 0044c99e: TEST EBX,EBX
// 0044c9a0: JLE 0x0044c9c1
//   XREF to: 0044c9c1 (CONDITIONAL_JUMP)
// 0044c9a2: LEA ESI,[EBX*0x4 + 0x0]
// 0044c9a9: XOR EAX,EAX
// 0044c9ab: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_0044c9ab
// 0044c9ae: CMP EBX,dword ptr [EAX + 0x151a3b0]
//   XREF to: 0151a3b0 (READ)
//   XREF to: 0151a3b4 (READ)
// 0044c9b4: JGE 0x0044cb1f
//   XREF to: 0044cb1f (CONDITIONAL_JUMP)
// 0044c9ba: ADD EAX,0x4
//   Label: LAB_0044c9ba
// 0044c9bd: CMP EAX,ESI
// 0044c9bf: JL 0x0044c9ab
//   XREF to: 0044c9ab (CONDITIONAL_JUMP)
// 0044c9c1: TEST ECX,ECX
//   Label: LAB_0044c9c1
// 0044c9c3: JNZ 0x0044c9e6
//   XREF to: 0044c9e6 (CONDITIONAL_JUMP)
// 0044c9c5: MOV EAX,dword ptr [EDX]
// 0044c9c7: MOV dword ptr [EBP + 0x151a3b0],EAX
//   XREF to: 0151a3b0 (WRITE)
//   XREF to: 0151a3b4 (WRITE)
// 0044c9cd: MOV EAX,dword ptr [EDX + 0x4]
// 0044c9d0: MOV EDX,dword ptr [0x0151a3ac]
//   XREF to: 0151a3ac (READ)
// 0044c9d6: ADD EBP,0x4
// 0044c9d9: INC EDX
// 0044c9da: MOV dword ptr [EBP + 0x151a7ac],EAX
//   XREF to: 0151a7b0 (WRITE)
//   XREF to: 0151a7b4 (WRITE)
// 0044c9e0: MOV dword ptr [0x0151a3ac],EDX
//   XREF to: 0151a3ac (WRITE)
// 0044c9e6: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0044c9e6
//   XREF to: Stack[-0x18] (READ)
// 0044c9ea: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0044c9ee: ADD EDI,0x10
// 0044c9f1: INC EAX
// 0044c9f2: MOV ECX,dword ptr [EDX + 0x1d0]
// 0044c9f8: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044c9fc: CMP EAX,ECX
// 0044c9fe: JL 0x0044c984
//   XREF to: 0044c984 (CONDITIONAL_JUMP)
// 0044ca00: MOV EBX,dword ptr [0x0151a3ac]
//   Label: LAB_0044ca00
//   XREF to: 0151a3ac (READ)
// 0044ca06: XOR EDI,EDI
// 0044ca08: TEST EBX,EBX
// 0044ca0a: JLE 0x0044ca78
//   XREF to: 0044ca78 (CONDITIONAL_JUMP)
// 0044ca0c: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 0044ca10: XOR ESI,ESI
// 0044ca12: MOV EAX,dword ptr [ESI + 0x151a3b0]
//   Label: LAB_0044ca12
//   XREF to: 0151a3b0 (READ)
//   XREF to: 0151a3b4 (READ)
// 0044ca18: MOV EDX,dword ptr [EBP + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
//   XREF to: 02cf7d60 (DATA)
// 0044ca1e: SHL EAX,0x2
// 0044ca21: LEA ECX,[EDX + EAX*0x1]
// 0044ca24: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0044ca28: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0044ca2c: IMUL EAX,dword ptr [EDX + 0x144]
// 0044ca33: ADD EAX,dword ptr [ESI + 0x151a3b0]
//   XREF to: 0151a3b0 (READ)
//   XREF to: 0151a3b4 (READ)
// 0044ca39: LEA EDX,[EAX*0x4 + 0x0]
// 0044ca40: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0044ca44: MOV EAX,dword ptr [EAX + 0x15c]
// 0044ca4a: MOV EBX,dword ptr [ESI + 0x151a3b0]
//   XREF to: 0151a3b0 (READ)
//   XREF to: 0151a3b4 (READ)
// 0044ca50: ADD EDX,EAX
// 0044ca52: MOV EAX,dword ptr [ESI + 0x151a7b0]
//   XREF to: 0151a7b0 (READ)
//   XREF to: 0151a7b4 (READ)
// 0044ca58: SUB EAX,EBX
// 0044ca5a: SHL EAX,0x2
// 0044ca5d: ADD EAX,0x4
// 0044ca60: PUSH EAX
// 0044ca61: PUSH EDX
// 0044ca62: PUSH ECX
// 0044ca63: ADD ESI,0x4
// 0044ca66: INC EDI
// 0044ca67: CALL core_dstrender.cpp_memcpyMMX_FUN_00492001
//   XREF to: 00492001 (UNCONDITIONAL_CALL)
// 0044ca6c: MOV EAX,[0x0151a3ac]
//   XREF to: 0151a3ac (READ)
// 0044ca71: ADD ESP,0xc
// 0044ca74: CMP EDI,EAX
// 0044ca76: JL 0x0044ca12
//   XREF to: 0044ca12 (CONDITIONAL_JUMP)
// 0044ca78: MOV EBP,dword ptr [ESP + 0x14]
//   Label: LAB_0044ca78
//   XREF to: Stack[-0x20] (READ)
// 0044ca7c: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0044ca80: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 0044ca84: ADD EBP,0x4
// 0044ca87: INC EAX
// 0044ca88: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 0044ca8c: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044ca90: CMP EAX,EDX
// 0044ca92: JLE 0x0044c960
//   XREF to: 0044c960 (CONDITIONAL_JUMP)
// 0044ca98: ADD ESP,0x24
//   Label: LAB_0044ca98
// 0044ca9b: POP EBP
// 0044ca9c: POP EDI
// 0044ca9d: POP ESI
// 0044ca9e: POP EBX
// 0044ca9f: RET
// 0044caa0: MOV EAX,[0x00679398]
//   Label: LAB_0044caa0
//   XREF to: 00679398 (READ)
// 0044caa5: DEC EAX
// 0044caa6: PUSH EAX
// 0044caa7: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0044caac: DEC EAX
// 0044caad: PUSH EAX
// 0044caae: PUSH 0x0
// 0044cab0: PUSH 0x0
// 0044cab2: PUSH 0x0
// 0044cab4: CALL wincore_windll.cpp_restoreZBuffer_FUN_005b7d20
//   XREF to: 005b7d20 (UNCONDITIONAL_CALL)
// 0044cab9: ADD ESP,0x14
// 0044cabc: ADD ESP,0x24
// 0044cabf: POP EBP
// 0044cac0: POP EDI
// 0044cac1: POP ESI
// 0044cac2: POP EBX
// 0044cac3: RET
// 0044cac4: MOV dword ptr [ESP],EDX
//   Label: LAB_0044cac4
//   XREF to: Stack[-0x34] (DATA)
// 0044cac7: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0044cacb: MOV EAX,dword ptr [EAX + 0x144]
// 0044cad1: DEC EAX
// 0044cad2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0044cad6: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0044cada: MOV EAX,dword ptr [EAX + 0x148]
// 0044cae0: DEC EAX
// 0044cae1: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0044cae5: MOV EAX,ESP
// 0044cae7: PUSH EAX
// 0044cae8: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0044caec: PUSH EAX
// 0044caed: CALL core_dcamera.cpp_CDemonCamera_restoreZBufferRect_FUN_0044c780
//   XREF to: 0044c780 (UNCONDITIONAL_CALL)
// 0044caf2: ADD ESP,0x8
// 0044caf5: ADD ESP,0x24
// 0044caf8: POP EBP
// 0044caf9: POP EDI
// 0044cafa: POP ESI
// 0044cafb: POP EBX
// 0044cafc: RET
// 0044cafd: MOV dword ptr [EDX],0x0
//   Label: LAB_0044cafd
// 0044cb03: JMP 0x0044c8a3
//   XREF to: 0044c8a3 (UNCONDITIONAL_JUMP)
// 0044cb08: LEA ECX,[EDI + -0x1]
//   Label: LAB_0044cb08
// 0044cb0b: MOV dword ptr [EAX + 0x4],ECX
// 0044cb0e: JMP 0x0044c8b8
//   XREF to: 0044c8b8 (UNCONDITIONAL_JUMP)
// 0044cb13: MOV dword ptr [EAX + 0x8],0x0
//   Label: LAB_0044cb13
// 0044cb1a: JMP 0x0044c8c2
//   XREF to: 0044c8c2 (UNCONDITIONAL_JUMP)
// 0044cb1f: MOV EBX,dword ptr [EDX]
//   Label: LAB_0044cb1f
// 0044cb21: CMP EBX,dword ptr [EAX + 0x151a7b0]
//   XREF to: 0151a7b4 (READ)
// 0044cb27: JG 0x0044c9ba
//   XREF to: 0044c9ba (CONDITIONAL_JUMP)
// 0044cb2d: CMP EBX,dword ptr [EAX + 0x151a3b0]
//   XREF to: 0151a3b4 (READ)
// 0044cb33: JL 0x0044cb44
//   XREF to: 0044cb44 (CONDITIONAL_JUMP)
// 0044cb35: MOV EBX,dword ptr [EDX + 0x4]
// 0044cb38: CMP EBX,dword ptr [EAX + 0x151a7b0]
//   XREF to: 0151a7b4 (READ)
// 0044cb3e: JLE 0x0044c9e6
//   XREF to: 0044c9e6 (CONDITIONAL_JUMP)
// 0044cb44: MOV EBX,dword ptr [EDX]
//   Label: LAB_0044cb44
// 0044cb46: CMP EBX,dword ptr [EAX + 0x151a3b0]
//   XREF to: 0151a3b4 (READ)
// 0044cb4c: JGE 0x0044cb59
//   XREF to: 0044cb59 (CONDITIONAL_JUMP)
// 0044cb4e: MOV ECX,0x1
// 0044cb53: MOV dword ptr [EAX + 0x151a3b0],EBX
//   XREF to: 0151a3b4 (WRITE)
// 0044cb59: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_0044cb59
// 0044cb5c: CMP EBX,dword ptr [EAX + 0x151a7b0]
//   XREF to: 0151a7b4 (READ)
// 0044cb62: JLE 0x0044cb6f
//   XREF to: 0044cb6f (CONDITIONAL_JUMP)
// 0044cb64: MOV dword ptr [EAX + 0x151a7b0],EBX
//   XREF to: 0151a7b4 (WRITE)
// 0044cb6a: JMP 0x0044c9e6
//   XREF to: 0044c9e6 (UNCONDITIONAL_JUMP)
// 0044cb6f: TEST ECX,ECX
//   Label: LAB_0044cb6f
// 0044cb71: JNZ 0x0044c9c1
//   XREF to: 0044c9c1 (CONDITIONAL_JUMP)
// 0044cb77: JMP 0x0044c9ba
//   XREF to: 0044c9ba (UNCONDITIONAL_JUMP)
