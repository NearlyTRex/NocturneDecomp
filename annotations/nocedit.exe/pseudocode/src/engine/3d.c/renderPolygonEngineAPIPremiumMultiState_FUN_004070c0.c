// Name: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0
// Address: 004070c0
// Address Range: [[004070c0, 00407280]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentAlphaValue = 0xff
//   SRenderVertex[16] g_RenderVertexBuffer
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.transformed_y
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   undefined4 DAT_00688044
//   int[24] g_ProcessedVertexIndices
//   int g_RenderBufferEnabled
//   int g_RenderBufferCount
//   SRenderBufferEntry[256] g_RenderBufferPool
//   undefined4 g_RenderBufferPool[1].vertex_count
//   SRenderBufferEntry*[2500] g_RenderBufferSortArray
//   undefined4 g_RenderBufferSortArray[1]
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_BlendMode
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   crt_stdlib.c_qsort_FUN_005fdf38
//   engine_3d.c_setBlendMode_FUN_00406dd0
//   engine_clipper.c_clipAndRasterize_FUN_004371b0
//   engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0(SMRGLHeaderPrimitive *polygon_info)

{
  int *piVar1;
  SMRGLHeaderExtended *in_EAX;
  int iVar2;
  int iVar3;
  SMRGLHeaderExtended *extraout_EAX;
  SRenderBufferEntry *pSVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  SRenderVertex *pSVar8;
  byte bVar9;
  int local_c;
  int *local_8;
  
  iVar3 = g_RenderBufferCount;
  bVar9 = 0;
  if (g_RenderBufferEnabled != 0) {
    if (0 < g_RenderBufferCount) {
      pSVar4 = g_RenderBufferPool;
      iVar6 = g_RenderBufferCount * 4;
      iVar2 = 0;
      do {
        *(SRenderBufferEntry **)((int)g_RenderBufferSortArray + iVar2) = pSVar4;
        iVar2 = iVar2 + 4;
        pSVar4 = pSVar4 + 1;
      } while (SBORROW4(iVar2,iVar6) != iVar2 + iVar3 * -4 < 0);
    }
    crt_stdlib_c_qsort_FUN_005fdf38
              (g_RenderBufferSortArray,g_RenderBufferCount,4,
               engine_3d_c_qsortByRenderDepth_FUN_00407080);
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    local_8 = (int *)0x0;
    g_RenderStateFlags = RENDER_ENGINE_PREMIUM_QUALITY;
    if (0 < g_RenderBufferCount) {
      local_c = 0;
      do {
        piVar1 = *(int **)((int)g_RenderBufferSortArray + local_c);
        iVar3 = 0;
        if (0 < *piVar1) {
          piVar5 = piVar1;
          iVar6 = 0;
          do {
            piVar7 = piVar5 + 1;
            pSVar8 = g_RenderVertexBuffer + iVar3;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              (pSVar8->projected_vertex).transformed_x = *piVar7;
              piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
            }
            *(ushort *)&g_RenderVertexBuffer[iVar3].w_recip =
                 *(ushort *)&g_RenderVertexBuffer[iVar3].w_recip ^ 0xffff;
            *(int *)((int)g_ProcessedVertexIndices + iVar6) = iVar3;
            iVar3 = iVar3 + 1;
            piVar5 = piVar5 + 0xc;
            iVar6 = iVar6 + 4;
          } while (iVar3 < *piVar1);
        }
        engine_texture_cpp_loadTextureAndGetData_FUN_005dd8c0((SMRGLTextureBasic *)(piVar1 + 0x31));
        g_BlendMode = local_8[0x44];
        g_CurrentAlphaValue = local_8[0x43];
        engine_clipper_c_clipAndRasterize_FUN_004371b0(*local_8,g_ProcessedVertexIndices);
        local_c = local_c + 4;
        local_8 = (int *)((int)local_8 + 1);
      } while ((int)local_8 < g_RenderBufferCount);
    }
    g_RenderBufferCount = 0;
    g_RenderBufferEnabled = 0;
    engine_3d_c_setBlendMode_FUN_00406dd0(0);
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}


// Assembly code:
// 004070c0: PUSH EBP
//   Label: engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0
// 004070c1: SUB ESP,0xc
// 004070c4: CMP dword ptr [0x00772af8],0x0
//   XREF to: 00772af8 (READ)
// 004070cb: JZ 0x00407246
//   XREF to: 00407246 (CONDITIONAL_JUMP)
// 004070d1: PUSH EDI
// 004070d2: PUSH ESI
// 004070d3: PUSH EBX
// 004070d4: MOV ECX,dword ptr [0x00772afc]
//   XREF to: 00772afc (READ)
// 004070da: TEST ECX,ECX
// 004070dc: JLE 0x00407100
//   XREF to: 00407100 (CONDITIONAL_JUMP)
// 004070de: MOV EDX,0x772b00
//   XREF to: 00772b00 (DATA)
// 004070e3: LEA EBX,[ECX*0x4 + 0x0]
// 004070ea: XOR EAX,EAX
// 004070ec: MOV dword ptr [EAX + 0x81d960],EDX
//   Label: LAB_004070ec
//   XREF to: 0081d960 (WRITE)
//   XREF to: 00772b00 (DATA)
//   XREF to: 0081d964 (WRITE)
//   XREF to: 00772c18 (DATA)
// 004070f2: ADD EAX,0x4
// 004070f5: ADD EDX,0x118
//   XREF to: 00772c18 (PARAM)
// 004070fb: CMP EAX,EBX
// 004070fd: JL 0x004070ec
//   XREF to: 004070ec (CONDITIONAL_JUMP)
// 004070ff: NOP
// 00407100: PUSH 0x407080
//   Label: LAB_00407100
//   XREF to: 00407080 (DATA)
// 00407105: PUSH 0x4
// 00407107: MOV EBX,dword ptr [0x00772afc]
//   XREF to: 00772afc (READ)
// 0040710d: PUSH EBX
// 0040710e: PUSH 0x81d960
//   XREF to: 0081d960 (DATA)
// 00407113: CALL crt_stdlib.c_qsort_FUN_005fdf38
//   XREF to: 005fdf38 (UNCONDITIONAL_CALL)
// 00407118: MOV ESI,dword ptr [0x02d05248]
//   XREF to: 02d05248 (READ)
// 0040711e: ADD ESP,0x10
// 00407121: TEST ESI,ESI
// 00407123: JNZ 0x0040725a
//   XREF to: 0040725a (CONDITIONAL_JUMP)
// 00407129: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00407130: JNZ 0x0040724b
//   XREF to: 0040724b (CONDITIONAL_JUMP)
// 00407136: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00407140: MOV EDI,0x1
//   Label: LAB_00407140
// 00407145: MOV ESI,0x1e7
// 0040714a: MOV EAX,[0x00772afc]
//   XREF to: 00772afc (READ)
// 0040714f: XOR EBP,EBP
// 00407151: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 00407157: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0xc] (WRITE)
// 0040715b: MOV dword ptr [0x02d052a0],ESI
//   XREF to: 02d052a0 (WRITE)
// 00407161: TEST EAX,EAX
// 00407163: JLE 0x0040722c
//   XREF to: 0040722c (CONDITIONAL_JUMP)
// 00407169: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 0040716d: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0040716d
//   XREF to: Stack[-0x10] (READ)
// 00407171: MOV EAX,dword ptr [EAX + 0x81d960]
//   XREF to: 0081d960 (DATA)
//   XREF to: 0081d964 (DATA)
// 00407177: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0040717b: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 0040717f: MOV ECX,dword ptr [EDX]
// 00407181: XOR EAX,EAX
// 00407183: TEST ECX,ECX
// 00407185: JLE 0x004071c6
//   XREF to: 004071c6 (CONDITIONAL_JUMP)
// 00407187: MOV EBX,EDX
// 00407189: XOR EBP,EBP
// 0040718b: IMUL EDX,EAX,0x30
//   Label: LAB_0040718b
// 0040718e: MOV ECX,0xc
// 00407193: LEA ESI,[EBX + 0x4]
// 00407196: LEA EDI,[EDX + 0x688014]
//   XREF to: 00688014 (DATA)
// 0040719c: MOVSD.REP ES:EDI,ESI
//   XREF to: 00688014 (WRITE)
//   XREF to: 00688018 (WRITE)
//   XREF to: 00688044 (WRITE)
// 0040719e: MOV CX,word ptr [EDX + 0x688040]
//   XREF to: 00688040 (READ)
// 004071a5: XOR ECX,0xffffffff
// 004071a8: ADD EBP,0x4
// 004071ab: MOV word ptr [EDX + 0x688040],CX
//   XREF to: 00688040 (WRITE)
// 004071b2: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 004071b6: MOV dword ptr [EBP + 0x772a94],EAX
//   XREF to: 00772a98 (WRITE)
// 004071bc: INC EAX
// 004071bd: MOV ESI,dword ptr [EDX]
// 004071bf: ADD EBX,0x30
// 004071c2: CMP EAX,ESI
// 004071c4: JL 0x0040718b
//   XREF to: 0040718b (CONDITIONAL_JUMP)
// 004071c6: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004071c6
//   XREF to: Stack[-0x8] (READ)
// 004071ca: ADD EAX,0xc4
// 004071cf: PUSH EAX
// 004071d0: CALL engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0
//   XREF to: 005dd8c0 (UNCONDITIONAL_CALL)
// 004071d5: ADD ESP,0x4
// 004071d8: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 004071dc: MOV EAX,dword ptr [EAX + 0x110]
// 004071e2: MOV [0x02d05298],EAX
//   XREF to: 02d05298 (WRITE)
// 004071e7: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 004071eb: MOV EAX,dword ptr [EAX + 0x10c]
// 004071f1: MOV [0x006793b4],EAX
//   XREF to: 006793b4 (WRITE)
// 004071f6: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 004071fa: PUSH 0x772a98
//   XREF to: 00772a98 (DATA)
// 004071ff: MOV EDX,dword ptr [EAX]
// 00407201: PUSH EDX
// 00407202: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00407207: ADD ESP,0x8
// 0040720a: MOV ESI,dword ptr [0x00772afc]
//   XREF to: 00772afc (READ)
// 00407210: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 00407214: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 00407218: ADD ECX,0x4
// 0040721b: INC EBX
// 0040721c: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 00407220: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 00407224: CMP EBX,ESI
// 00407226: JL 0x0040716d
//   XREF to: 0040716d (CONDITIONAL_JUMP)
// 0040722c: XOR EDI,EDI
//   Label: LAB_0040722c
// 0040722e: PUSH EDI
// 0040722f: MOV dword ptr [0x00772afc],EDI
//   XREF to: 00772afc (WRITE)
// 00407235: MOV dword ptr [0x00772af8],EDI
//   XREF to: 00772af8 (WRITE)
// 0040723b: CALL engine_3d.c_setBlendMode_FUN_00406dd0
//   XREF to: 00406dd0 (UNCONDITIONAL_CALL)
// 00407240: ADD ESP,0x4
// 00407243: POP EBX
// 00407244: POP ESI
// 00407245: POP EDI
// 00407246: ADD ESP,0xc
//   Label: LAB_00407246
// 00407249: POP EBP
// 0040724a: RET
// 0040724b: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040724b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00407255: JMP 0x00407140
//   XREF to: 00407140 (UNCONDITIONAL_JUMP)
// 0040725a: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040725a
//   XREF to: 0067939c (READ)
// 00407261: JNZ 0x00407272
//   XREF to: 00407272 (CONDITIONAL_JUMP)
// 00407263: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0040726d: JMP 0x00407140
//   XREF to: 00407140 (UNCONDITIONAL_JUMP)
// 00407272: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00407272
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040727c: JMP 0x00407140
//   XREF to: 00407140 (UNCONDITIONAL_JUMP)
