// Name: engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
// Address: 0048bcf0
// Address Range: [[0048bcf0, 0048bdb9]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   core_chain.cpp_FUN_004308f0 (004308f0) at 00430e92 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CCrater_FUN_004c4620 (004c4620) at 004c4865 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGlassParticle_render_FUN_004c1ef0 (004c1ef0) at 004c20cd [UNCONDITIONAL_CALL]
//   core_fire.cpp_CLightningBolt_FUN_004c5720 (004c5720) at 004c5a34 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf7cf [UNCONDITIONAL_CALL]
//   core_fire.cpp_CTrail_FUN_004c5e90 (004c5e90) at 004c6136 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004bfac0 (004bfac0) at 004bfd0e [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ebac0 (004ebac0) at 004ebe49 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ec500 (004ec500) at 004ec7ec [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ecce0 (004ecce0) at 004ecf8f [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed3c0 (004ed3c0) at 004ed5a1 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_renderVolumetricSphere_FUN_00587b50 (00587b50) at 00587d9d [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef5dd [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)

{
  SMRGLHeaderPrimitive *pSVar1;
  uint uVar2;
  int iVar3;
  
  if ((this_ptr->plane_culling_enabled == 0) ||
     (iVar3 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal), iVar3 != 0)) {
    uVar2 = 0xffffffff;
    iVar3 = 0;
    if (0 < (polygon_info->base).count) {
      pSVar1 = polygon_info;
      do {
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 & this_ptr->vertex_buffer_ptr[pSVar1[1].base.type].projected_vertex.screen_x;
        pSVar1 = (SMRGLHeaderPrimitive *)&(pSVar1->base).count;
      } while (iVar3 < (polygon_info->base).count);
    }
    if (((uVar2 & 0x80000000) == 0) || ((uVar2 & 0x1f) == 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        g_RenderStateFlags = RENDER_ENGINE_ULTRA_QUALITY;
      }
      else {
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = PREPROCESS_NONE;
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      }
      engine_drender_cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
                (this_ptr,(polygon_info->base).count,(int *)(polygon_info + 1));
    }
  }
  return;
}


// Assembly code:
// 0048bcf0: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
// 0048bcf1: PUSH ESI
// 0048bcf2: PUSH EDI
// 0048bcf3: PUSH EBP
// 0048bcf4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048bcf8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048bcfc: CMP dword ptr [EBP + 0xc],0x0
// 0048bd00: JNZ 0x0048bd71
//   XREF to: 0048bd71 (CONDITIONAL_JUMP)
// 0048bd06: MOV ECX,0xffffffff
//   Label: LAB_0048bd06
// 0048bd0b: MOV EBX,dword ptr [ESI + 0x4]
// 0048bd0e: XOR EDX,EDX
// 0048bd10: TEST EBX,EBX
// 0048bd12: JLE 0x0048bd30
//   XREF to: 0048bd30 (CONDITIONAL_JUMP)
// 0048bd14: MOV EAX,ESI
// 0048bd16: MOV EDI,dword ptr [EBP]
// 0048bd19: MOV EBX,dword ptr [EAX + 0x18]
//   Label: LAB_0048bd19
// 0048bd1c: IMUL EBX,EBX,0x30
// 0048bd1f: INC EDX
// 0048bd20: AND ECX,dword ptr [EDI + EBX*0x1 + 0x10]
// 0048bd24: MOV EBX,dword ptr [ESI + 0x4]
// 0048bd27: ADD EAX,0x4
// 0048bd2a: CMP EDX,EBX
// 0048bd2c: JL 0x0048bd19
//   XREF to: 0048bd19 (CONDITIONAL_JUMP)
// 0048bd2e: MOV EAX,EAX
// 0048bd30: TEST ECX,0x80000000
//   Label: LAB_0048bd30
// 0048bd36: JZ 0x0048bd3d
//   XREF to: 0048bd3d (CONDITIONAL_JUMP)
// 0048bd38: TEST CL,0x1f
// 0048bd3b: JNZ 0x0048bd6c
//   XREF to: 0048bd6c (CONDITIONAL_JUMP)
// 0048bd3d: CMP dword ptr [EBP + 0x4],0x0
//   Label: LAB_0048bd3d
// 0048bd41: JZ 0x0048bd83
//   XREF to: 0048bd83 (CONDITIONAL_JUMP)
// 0048bd43: XOR EDX,EDX
// 0048bd45: MOV EAX,0x49072f
//   XREF to: 0049072f (DATA)
// 0048bd4a: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048bd50: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0048bd56: MOV [0x02d0257c],EAX
//   XREF to: 02d0257c (WRITE)
// 0048bd5b: LEA EAX,[ESI + 0x18]
//   Label: LAB_0048bd5b
// 0048bd5e: PUSH EAX
// 0048bd5f: MOV EBX,dword ptr [ESI + 0x4]
// 0048bd62: PUSH EBX
// 0048bd63: PUSH EBP
// 0048bd64: CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
//   XREF to: 0048a740 (UNCONDITIONAL_CALL)
// 0048bd69: ADD ESP,0xc
// 0048bd6c: POP EBP
//   Label: LAB_0048bd6c
// 0048bd6d: POP EDI
// 0048bd6e: POP ESI
// 0048bd6f: POP EBX
// 0048bd70: RET
// 0048bd71: LEA EAX,[ESI + 0x8]
//   Label: LAB_0048bd71
// 0048bd74: PUSH EAX
// 0048bd75: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 0048bd7a: ADD ESP,0x4
// 0048bd7d: TEST EAX,EAX
// 0048bd7f: JZ 0x0048bd6c
//   XREF to: 0048bd6c (CONDITIONAL_JUMP)
// 0048bd81: JMP 0x0048bd06
//   XREF to: 0048bd06 (UNCONDITIONAL_JUMP)
// 0048bd83: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048bd83
//   XREF to: 0067939c (READ)
// 0048bd8a: JNZ 0x0048bdae
//   XREF to: 0048bdae (CONDITIONAL_JUMP)
// 0048bd8c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048bd96: MOV EDI,0x6
//   Label: LAB_0048bd96
// 0048bd9b: MOV EBX,0x267
// 0048bda0: MOV dword ptr [0x02d052a4],EDI
//   XREF to: 02d052a4 (WRITE)
// 0048bda6: MOV dword ptr [0x02d052a0],EBX
//   XREF to: 02d052a0 (WRITE)
// 0048bdac: JMP 0x0048bd5b
//   XREF to: 0048bd5b (UNCONDITIONAL_JUMP)
// 0048bdae: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048bdae
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048bdb8: JMP 0x0048bd96
//   XREF to: 0048bd96 (UNCONDITIONAL_JUMP)
