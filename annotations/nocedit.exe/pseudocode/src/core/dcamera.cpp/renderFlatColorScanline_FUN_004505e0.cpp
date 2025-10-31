// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_004505e0
// Address: 004505e0
// Address Range: [[004505e0, 0045079c]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_renderFlatColorScanline_FUN_004505e0(SEdgeData * left_edge, SEdgeData * right_edge, int scanline_y)
// Cross-references:
//   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770 (00570770) at 005707f2 [DATA]
// Globals:
//   int g_CameraDownscaleIterations
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   SFogImagePlane[16] g_CameraImageDecompressBuffer
//   undefined4 DAT_013fff78
//   int g_ImageBytesPerPixel
//   int g_FlatShadingLightLevel
//   uint*[1024] g_ZBufferScanlineArray
//   int g_ClipLeft
//   int g_ClipTop

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_renderFlatColorScanline_FUN_004505e0
          (SEdgeData *left_edge,SEdgeData *right_edge,int scanline_y)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  SEdgeData *pSVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_18;
  uint *local_14;
  
  uVar6 = (int)left_edge - g_ClipTop;
  if (((g_CameraDownscaleIterations != 1) || ((uVar6 & 1) == 0)) &&
     ((g_CameraDownscaleIterations != 2 || ((uVar6 & 3) == 0)))) {
    iVar10 = (right_edge->x_current >> 0x10) - g_ClipLeft;
    local_18 = (*(int *)(scanline_y + 8) >> 0x10) - g_ClipLeft;
    pSVar7 = (SEdgeData *)scanline_y;
    iVar11 = iVar10;
    if (local_18 < iVar10) {
      pSVar7 = right_edge;
      right_edge = (SEdgeData *)scanline_y;
      iVar11 = local_18;
      local_18 = iVar10;
    }
    iVar10 = right_edge->z_current;
    local_14 = g_ZBufferScanlineArray[uVar6] + iVar11;
    local_18 = local_18 >> ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar11 = iVar11 >> ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar9 = (int)uVar6 >> ((byte)g_CameraDownscaleIterations & 0x1f);
    iVar3 = (pSVar7->z_current - iVar10) / ((local_18 - iVar11) + 1);
    cVar2 = (char)((g_FlatShadingLightLevel + (g_FlatShadingLightLevel >> 0x1f) * -0x100) -
                   (uint)((g_FlatShadingLightLevel >> 0x1f) << 7 < 0) >> 8);
    if (g_ImageBytesPerPixel < 2) {
      pcVar5 = g_CameraPlaneWorkBuffer.pixels[iVar9] + iVar11;
      for (; iVar11 < local_18; iVar11 = iVar11 + 1) {
        if (*local_14 < (uint)(iVar10 >> 8)) {
          *pcVar5 = cVar2;
        }
        iVar10 = iVar10 + iVar3;
        pcVar5 = pcVar5 + 1;
        local_14 = local_14 + (1 << ((byte)g_CameraDownscaleIterations & 0x1f));
      }
    }
    else {
      bVar1 = (byte)g_CameraDownscaleIterations & 0x1f;
      for (; iVar11 < local_18; iVar11 = iVar11 + 1) {
        if ((*local_14 < (uint)(iVar10 >> 8)) && (iVar8 = 0, 0 < g_ImageBytesPerPixel)) {
          iVar4 = iVar9 * 0x140 + iVar11;
          do {
            iVar8 = iVar8 + 1;
            g_CameraImageDecompressBuffer[0].pixels[0][iVar4] = cVar2;
            iVar4 = iVar4 + 0x12c00;
          } while (iVar8 < g_ImageBytesPerPixel);
        }
        local_14 = local_14 + (1 << bVar1);
        iVar10 = iVar10 + iVar3;
      }
    }
  }
  return;
}


// Assembly code:
// 004505e0: PUSH EBX
//   Label: core_dcamera.cpp_renderFlatColorScanline_FUN_004505e0
// 004505e1: PUSH ESI
// 004505e2: PUSH EDI
// 004505e3: PUSH EBP
// 004505e4: SUB ESP,0x18
// 004505e7: MOV ESI,dword ptr [0x01519380]
//   XREF to: 01519380 (READ)
// 004505ed: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 004505f1: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 004505f5: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004505f9: SUB ECX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004505ff: MOV EBX,dword ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00450605: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[0x4] (WRITE)
// 00450609: CMP EBX,0x1
// 0045060c: JNZ 0x00450619
//   XREF to: 00450619 (CONDITIONAL_JUMP)
// 0045060e: TEST byte ptr [ESP + 0x2c],0x1
//   XREF to: Stack[0x4] (READ)
// 00450613: JNZ 0x0045078b
//   XREF to: 0045078b (CONDITIONAL_JUMP)
// 00450619: CMP dword ptr [0x013bc260],0x2
//   Label: LAB_00450619
//   XREF to: 013bc260 (READ)
// 00450620: JNZ 0x0045062d
//   XREF to: 0045062d (CONDITIONAL_JUMP)
// 00450622: TEST byte ptr [ESP + 0x2c],0x3
//   XREF to: Stack[0x4] (READ)
// 00450627: JNZ 0x0045078b
//   XREF to: 0045078b (CONDITIONAL_JUMP)
// 0045062d: MOV EDI,dword ptr [EBP + 0x8]
//   Label: LAB_0045062d
// 00450630: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 00450635: SAR EDI,0x10
// 00450638: SUB EDI,EAX
// 0045063a: MOV EAX,dword ptr [EDX + 0x8]
// 0045063d: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00450643: SAR EAX,0x10
// 00450646: SUB EAX,ECX
// 00450648: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045064c: CMP EDI,EAX
// 0045064e: JLE 0x00450660
//   XREF to: 00450660 (CONDITIONAL_JUMP)
// 00450650: MOV EAX,EDI
// 00450652: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00450656: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0045065a: MOV EAX,EBP
// 0045065c: MOV EBP,EDX
// 0045065e: MOV EDX,EAX
// 00450660: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00450660
//   XREF to: Stack[0x4] (READ)
// 00450664: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00450668: LEA ECX,[EDI*0x4 + 0x0]
// 0045066f: MOV EBP,dword ptr [EBP + 0x28]
// 00450672: MOV EAX,dword ptr [EAX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 00450679: MOV EDX,dword ptr [EDX + 0x28]
// 0045067c: ADD EAX,ECX
// 0045067e: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00450684: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00450688: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0045068c: SUB EDX,EBP
// 0045068e: SAR EAX,CL
// 00450690: SAR EDI,CL
// 00450692: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00450696: SUB EAX,EDI
// 00450698: SAR EBX,CL
// 0045069a: LEA ECX,[EAX + 0x1]
// 0045069d: MOV EAX,EDX
// 0045069f: SAR EDX,0x1f
// 004506a2: IDIV ECX
// 004506a4: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004506a8: MOV EAX,[0x015c2ea8]
//   XREF to: 015c2ea8 (READ)
// 004506ad: MOV EDX,EAX
// 004506af: SAR EDX,0x1f
// 004506b2: SHL EDX,0x8
// 004506b5: SBB EAX,EDX
// 004506b7: SAR EAX,0x8
// 004506ba: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[0x4] (WRITE)
// 004506be: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004506c2: MOV BL,AL
// 004506c4: LEA EAX,[EDX*0x4 + 0x0]
// 004506cb: ADD EAX,EDX
// 004506cd: SHL EAX,0x6
// 004506d0: CMP ESI,0x1
// 004506d3: JLE 0x0045073f
//   XREF to: 0045073f (CONDITIONAL_JUMP)
// 004506d5: MOV EDX,0x1
// 004506da: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 004506e0: SHL EDX,CL
// 004506e2: LEA ECX,[EDX*0x4 + 0x0]
// 004506e9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004506ed: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004506f1: XOR ECX,ECX
// 004506f3: CMP EDI,dword ptr [ESP + 0x10]
//   Label: LAB_004506f3
//   XREF to: Stack[-0x18] (READ)
// 004506f7: JGE 0x0045078b
//   XREF to: 0045078b (CONDITIONAL_JUMP)
// 004506fd: MOV EAX,EBP
// 004506ff: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00450703: SAR EAX,0x8
// 00450706: CMP EAX,dword ptr [EDX]
// 00450708: JA 0x00450721
//   XREF to: 00450721 (CONDITIONAL_JUMP)
// 0045070a: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0045070a
//   XREF to: Stack[-0x20] (READ)
// 0045070e: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00450712: INC EDI
// 00450713: ADD EDX,EAX
// 00450715: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00450719: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0045071d: ADD EBP,EAX
// 0045071f: JMP 0x004506f3
//   XREF to: 004506f3 (UNCONDITIONAL_JUMP)
// 00450721: MOV EDX,ECX
//   Label: LAB_00450721
// 00450723: TEST ESI,ESI
// 00450725: JLE 0x0045070a
//   XREF to: 0045070a (CONDITIONAL_JUMP)
// 00450727: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0045072b: ADD EAX,EDI
// 0045072d: ADD EAX,0x12c00
//   Label: LAB_0045072d
// 00450732: INC EDX
// 00450733: MOV byte ptr [EAX + 0x13da778],BL
//   XREF to: 013da778 (DATA)
//   XREF to: 013ed378 (DATA)
//   XREF to: 013fff78 (DATA)
// 00450739: CMP EDX,ESI
// 0045073b: JL 0x0045072d
//   XREF to: 0045072d (CONDITIONAL_JUMP)
// 0045073d: JMP 0x0045070a
//   XREF to: 0045070a (UNCONDITIONAL_JUMP)
// 0045073f: ADD EAX,0x13da778
//   Label: LAB_0045073f
//   XREF to: 013da778 (DATA)
// 00450744: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00450748: ADD EAX,EDI
// 0045074a: CMP EDI,EDX
// 0045074c: JGE 0x0045078b
//   XREF to: 0045078b (CONDITIONAL_JUMP)
// 0045074e: MOV EDX,EBP
//   Label: LAB_0045074e
// 00450750: SAR EDX,0x8
// 00450753: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x28] (DATA)
// 00450756: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0045075a: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0045075d: CMP ECX,dword ptr [EDX]
// 0045075f: JA 0x00450799
//   XREF to: 00450799 (CONDITIONAL_JUMP)
// 00450761: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_00450761
//   XREF to: Stack[-0x1c] (READ)
// 00450765: MOV EDX,0x1
// 0045076a: ADD EBP,ECX
// 0045076c: MOV CL,byte ptr [0x013bc260]
//   XREF to: 013bc260 (READ)
// 00450772: INC EDI
// 00450773: SHL EDX,CL
// 00450775: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00450779: SHL EDX,0x2
// 0045077c: INC EAX
// 0045077d: ADD ECX,EDX
// 0045077f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00450783: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00450787: CMP EDI,EDX
// 00450789: JL 0x0045074e
//   XREF to: 0045074e (CONDITIONAL_JUMP)
// 0045078b: MOV dword ptr [0x01519380],ESI
//   Label: LAB_0045078b
//   XREF to: 01519380 (WRITE)
// 00450791: ADD ESP,0x18
//   Label: LAB_00450791
// 00450794: POP EBP
// 00450795: POP EDI
// 00450796: POP ESI
// 00450797: POP EBX
// 00450798: RET
// 00450799: MOV byte ptr [EAX],BL
//   Label: LAB_00450799
// 0045079b: JMP 0x00450761
//   XREF to: 00450761 (UNCONDITIONAL_JUMP)
