// Name: engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
// Address: 0048cf00
// Address Range: [[0048cf00, 0048d16d]]
// Convention: __cdecl
// Signature: int engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count, int render_flags, int primitive_stride)
// Cross-references:
//   engine_drender.cpp_CDemonRenderer_renderFaceBatch_FUN_0048ce20 (0048ce20) at 0048ce7b [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90 (0048ce90) at 0048ceeb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_drender_cpp_0062208d
//   TerminatedCString s_CDemonRenderer_demonGZFa_006220a3
//   SInputFace*[2000] g_VisibleFacePointers
//   int g_BitsPerPixel = 0x8
//   int g_CullingMode
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   int g_UseExternalRenderer
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0
//   engine_drender.cpp_renderTriangleTextured_FUN_00483370
//   engine_prim.c_getTriangleWindingFromIndices_FUN_00552210
//   wincore_windll.cpp_drawPolyList_FUN_005b7640

#include "nocturne.h"

int __cdecl
engine_drender_cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
          (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *primitive_array,int primitive_count,
          int render_flags,int primitive_stride)

{
  SMRGLHeaderBasic *pSVar1;
  int in_EAX;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
     (g_CullingMode != 0)) {
    if (this_ptr->face_count == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
      }
      g_RenderStateFlags = primitive_stride;
      in_EAX = 6;
      g_RenderStateFlag2 = 6;
      if (g_UseExternalRenderer == 0) {
        for (; 0 < primitive_count; primitive_count = primitive_count + -1) {
          local_28 = primitive_array[1].base.type;
          local_24 = primitive_array[1].surface_normal.B;
          local_20 = primitive_array[2].base.type;
          if ((primitive_array->base).count == 4) {
            local_1c = primitive_array[2].surface_normal.B;
          }
          if (this_ptr->field8_0x20 == 0) {
            this_ptr->vertex_buffer_ptr[local_28].u = (float)primitive_array[1].base.count;
            this_ptr->vertex_buffer_ptr[local_28].v = (float)primitive_array[1].surface_normal.A;
            this_ptr->vertex_buffer_ptr[local_24].u = (float)primitive_array[1].surface_normal.C;
            this_ptr->vertex_buffer_ptr[local_24].v = (float)primitive_array[1].surface_normal.D;
            this_ptr->vertex_buffer_ptr[local_20].u = (float)primitive_array[2].base.count;
            this_ptr->vertex_buffer_ptr[local_20].v = (float)primitive_array[2].surface_normal.A;
            if ((primitive_array->base).count == 4) {
              this_ptr->vertex_buffer_ptr[local_1c].u = (float)primitive_array[2].surface_normal.C;
              this_ptr->vertex_buffer_ptr[local_1c].v = (float)primitive_array[2].surface_normal.D;
            }
          }
          engine_drender_cpp_renderTriangleTextured_FUN_00483370
                    (&local_28,(primitive_array->base).count);
          primitive_array =
               (SMRGLHeaderPrimitive *)((int)&(primitive_array->base).type + primitive_stride);
          in_EAX = extraout_EAX_01;
        }
      }
      else {
        iVar3 = 0;
        local_14 = 0;
        if (0 < primitive_count) {
          local_18 = 0;
          do {
            iVar2 = engine_prim_c_getTriangleWindingFromIndices_FUN_00552210
                              ((STriangleIndices *)primitive_array);
            if (iVar2 != 0) {
              iVar3 = iVar3 + 1;
              iVar2 = local_1c + 4;
              *(SMRGLHeaderPrimitive **)((int)g_VisibleFacePointers + local_1c) = primitive_array;
              local_1c = iVar2;
              if (1999 < iVar3) {
                g_CurrentFilename = "..\\engine\\drender.cpp";
                g_CurrentLineNumber = 0x9b6;
                core_main_c_displayErrorAndQuit_FUN_00506f10
                          ("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar3);
              }
            }
            local_14 = local_14 + 1;
            primitive_array =
                 (SMRGLHeaderPrimitive *)
                 (((STriangleIndices *)primitive_array)->field0_0x0 + render_flags);
            in_EAX = render_flags;
          } while (local_14 < primitive_count);
        }
        if (0 < iVar3) {
          iVar3 = wincore_windll_cpp_drawPolyList_FUN_005b7640
                            (this_ptr->vertex_buffer_ptr,g_VisibleFacePointers,iVar3,
                             g_RenderStateFlags);
          return iVar3;
        }
      }
    }
    else {
      g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
      g_RenderStateFlags = 0;
      g_RenderStateFlag2 = g_RenderStateFlags;
      if (0 < primitive_count) {
        do {
          local_28 = primitive_array[1].base.type;
          local_24 = primitive_array[1].surface_normal.B;
          local_20 = primitive_array[2].base.type;
          if ((primitive_array->base).count == 4) {
            local_1c = primitive_array[2].surface_normal.B;
          }
          pSVar1 = &primitive_array->base;
          primitive_count = primitive_count + -1;
          primitive_array =
               (SMRGLHeaderPrimitive *)((int)&(primitive_array->base).type + render_flags);
          engine_drender_cpp_renderTriangleSimple_FUN_004839f0(&local_28,pSVar1->count);
          in_EAX = extraout_EAX_00;
        } while (0 < primitive_count);
      }
    }
  }
  else {
    iVar3 = 0;
    if (0 < primitive_count) {
      do {
        engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                  (this_ptr,primitive_array,primitive_stride);
        iVar3 = iVar3 + 1;
        primitive_array =
             (SMRGLHeaderPrimitive *)((int)&(primitive_array->base).type + primitive_stride);
        in_EAX = extraout_EAX;
      } while (iVar3 < primitive_count);
    }
  }
  return in_EAX;
}


// Assembly code:
// 0048cf00: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00
// 0048cf01: PUSH ESI
// 0048cf02: PUSH EDI
// 0048cf03: PUSH EBP
// 0048cf04: SUB ESP,0x18
// 0048cf07: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0048cf0b: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0048cf0f: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 0048cf13: MOV EDX,dword ptr [ESI + 0x10]
// 0048cf16: TEST EDX,EDX
// 0048cf18: JZ 0x0048cf48
//   XREF to: 0048cf48 (CONDITIONAL_JUMP)
// 0048cf1a: XOR EBP,EBP
//   Label: LAB_0048cf1a
// 0048cf1c: TEST EDI,EDI
// 0048cf1e: JLE 0x0048cf40
//   XREF to: 0048cf40 (CONDITIONAL_JUMP)
// 0048cf20: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_0048cf20
//   XREF to: Stack[0x14] (READ)
// 0048cf24: PUSH EAX
// 0048cf25: PUSH EBX
// 0048cf26: PUSH ESI
// 0048cf27: CALL engine_drender.cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
//   XREF to: 0048aeb0 (UNCONDITIONAL_CALL)
// 0048cf2c: ADD ESP,0xc
// 0048cf2f: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 0048cf33: INC EBP
// 0048cf34: ADD EBX,EDX
// 0048cf36: CMP EBP,EDI
// 0048cf38: JL 0x0048cf20
//   XREF to: 0048cf20 (CONDITIONAL_JUMP)
// 0048cf3a: LEA EAX,[EAX]
// 0048cf40: ADD ESP,0x18
//   Label: LAB_0048cf40
// 0048cf43: POP EBP
// 0048cf44: POP EDI
// 0048cf45: POP ESI
// 0048cf46: POP EBX
// 0048cf47: RET
// 0048cf48: CMP dword ptr [ESI + 0xc],0x0
//   Label: LAB_0048cf48
// 0048cf4c: JNZ 0x0048cf1a
//   XREF to: 0048cf1a (CONDITIONAL_JUMP)
// 0048cf4e: CMP dword ptr [0x00772a7c],0x0
//   XREF to: 00772a7c (READ)
// 0048cf55: JZ 0x0048cf1a
//   XREF to: 0048cf1a (CONDITIONAL_JUMP)
// 0048cf57: CMP dword ptr [ESI + 0x4],0x0
// 0048cf5b: JZ 0x0048cfbb
//   XREF to: 0048cfbb (CONDITIONAL_JUMP)
// 0048cf5d: MOV ESI,0x49072f
//   XREF to: 0049072f (DATA)
// 0048cf62: MOV dword ptr [0x02d052a0],EDX
//   XREF to: 02d052a0 (WRITE)
// 0048cf68: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0048cf6e: MOV dword ptr [0x02d0257c],ESI
//   XREF to: 02d0257c (WRITE)
// 0048cf74: TEST EDI,EDI
// 0048cf76: JLE 0x0048cf40
//   XREF to: 0048cf40 (CONDITIONAL_JUMP)
// 0048cf78: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 0048cf7c: MOV EAX,dword ptr [EBX + 0x18]
//   Label: LAB_0048cf7c
// 0048cf7f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0048cf82: MOV EAX,dword ptr [EBX + 0x24]
// 0048cf85: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0048cf89: MOV EAX,dword ptr [EBX + 0x30]
// 0048cf8c: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0048cf90: MOV EBP,dword ptr [EBX + 0x4]
// 0048cf93: MOV EDX,EBX
// 0048cf95: CMP EBP,0x4
// 0048cf98: JNZ 0x0048cfa1
//   XREF to: 0048cfa1 (CONDITIONAL_JUMP)
// 0048cf9a: MOV EAX,dword ptr [EBX + 0x3c]
// 0048cf9d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048cfa1: MOV ECX,dword ptr [EDX + 0x4]
//   Label: LAB_0048cfa1
// 0048cfa4: PUSH ECX
// 0048cfa5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 0048cfa9: PUSH EAX
// 0048cfaa: DEC EDI
// 0048cfab: ADD EBX,ESI
// 0048cfad: CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0
//   XREF to: 004839f0 (UNCONDITIONAL_CALL)
// 0048cfb2: ADD ESP,0x8
// 0048cfb5: TEST EDI,EDI
// 0048cfb7: JLE 0x0048cf40
//   XREF to: 0048cf40 (CONDITIONAL_JUMP)
// 0048cfb9: JMP 0x0048cf7c
//   XREF to: 0048cf7c (UNCONDITIONAL_JUMP)
// 0048cfbb: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0048cfbb
//   XREF to: 0067939c (READ)
// 0048cfc2: JNZ 0x0048d0c0
//   XREF to: 0048d0c0 (CONDITIONAL_JUMP)
// 0048cfc8: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048cfd2: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_0048cfd2
//   XREF to: Stack[0x14] (READ)
// 0048cfd6: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 0048cfdb: MOV EAX,0x6
// 0048cfe0: MOV EDX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 0048cfe6: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 0048cfeb: TEST EDX,EDX
// 0048cfed: JNZ 0x0048d0cf
//   XREF to: 0048d0cf (CONDITIONAL_JUMP)
// 0048cff3: TEST EDI,EDI
//   Label: LAB_0048cff3
// 0048cff5: JLE 0x0048cf40
//   XREF to: 0048cf40 (CONDITIONAL_JUMP)
// 0048cffb: MOV EAX,dword ptr [EBX + 0x18]
// 0048cffe: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0048d001: MOV EAX,dword ptr [EBX + 0x24]
// 0048d004: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0048d008: MOV EAX,dword ptr [EBX + 0x30]
// 0048d00b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0048d00f: MOV ECX,dword ptr [EBX + 0x4]
// 0048d012: MOV EDX,EBX
// 0048d014: CMP ECX,0x4
// 0048d017: JZ 0x0048d162
//   XREF to: 0048d162 (CONDITIONAL_JUMP)
// 0048d01d: CMP dword ptr [ESI + 0x20],0x0
//   Label: LAB_0048d01d
// 0048d021: JNZ 0x0048d0a3
//   XREF to: 0048d0a3 (CONDITIONAL_JUMP)
// 0048d027: IMUL EAX,dword ptr [ESP],0x30
//   XREF to: Stack[-0x28] (DATA)
// 0048d02b: MOV EBP,dword ptr [ESI]
// 0048d02d: ADD EAX,EBP
// 0048d02f: MOV EBP,dword ptr [EDX + 0x1c]
// 0048d032: MOV dword ptr [EAX + 0x18],EBP
// 0048d035: IMUL EAX,dword ptr [ESP],0x30
//   XREF to: Stack[-0x28] (DATA)
// 0048d039: MOV EBP,dword ptr [ESI]
// 0048d03b: ADD EBP,EAX
// 0048d03d: MOV EAX,dword ptr [EDX + 0x20]
// 0048d040: MOV dword ptr [EBP + 0x1c],EAX
// 0048d043: IMUL EAX,dword ptr [ESP + 0x4],0x30
//   XREF to: Stack[-0x24] (READ)
// 0048d048: MOV EBP,dword ptr [ESI]
// 0048d04a: ADD EBP,EAX
// 0048d04c: MOV EAX,dword ptr [EDX + 0x28]
// 0048d04f: MOV dword ptr [EBP + 0x18],EAX
// 0048d052: IMUL EBP,dword ptr [ESP + 0x4],0x30
//   XREF to: Stack[-0x24] (READ)
// 0048d057: MOV EAX,dword ptr [ESI]
// 0048d059: ADD EBP,EAX
// 0048d05b: MOV EAX,dword ptr [EDX + 0x2c]
// 0048d05e: MOV dword ptr [EBP + 0x1c],EAX
// 0048d061: IMUL EAX,dword ptr [ESP + 0x8],0x30
//   XREF to: Stack[-0x20] (READ)
// 0048d066: MOV EBP,dword ptr [ESI]
// 0048d068: ADD EBP,EAX
// 0048d06a: MOV EAX,dword ptr [EDX + 0x34]
// 0048d06d: MOV dword ptr [EBP + 0x18],EAX
// 0048d070: IMUL EBP,dword ptr [ESP + 0x8],0x30
//   XREF to: Stack[-0x20] (READ)
// 0048d075: MOV EAX,dword ptr [ESI]
// 0048d077: ADD EBP,EAX
// 0048d079: MOV EAX,dword ptr [EDX + 0x38]
// 0048d07c: MOV dword ptr [EBP + 0x1c],EAX
// 0048d07f: CMP dword ptr [EDX + 0x4],0x4
// 0048d083: JNZ 0x0048d0a3
//   XREF to: 0048d0a3 (CONDITIONAL_JUMP)
// 0048d085: IMUL EAX,dword ptr [ESP + 0xc],0x30
//   XREF to: Stack[-0x1c] (READ)
// 0048d08a: MOV EBP,dword ptr [ESI]
// 0048d08c: ADD EBP,EAX
// 0048d08e: MOV EAX,dword ptr [EDX + 0x40]
// 0048d091: MOV dword ptr [EBP + 0x18],EAX
// 0048d094: IMUL EBP,dword ptr [ESP + 0xc],0x30
//   XREF to: Stack[-0x1c] (READ)
// 0048d099: MOV EAX,dword ptr [ESI]
// 0048d09b: ADD EBP,EAX
// 0048d09d: MOV EAX,dword ptr [EDX + 0x44]
// 0048d0a0: MOV dword ptr [EBP + 0x1c],EAX
// 0048d0a3: MOV ECX,dword ptr [EDX + 0x4]
//   Label: LAB_0048d0a3
// 0048d0a6: PUSH ECX
// 0048d0a7: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 0048d0ab: PUSH EAX
// 0048d0ac: CALL engine_drender.cpp_renderTriangleTextured_FUN_00483370
//   XREF to: 00483370 (UNCONDITIONAL_CALL)
// 0048d0b1: ADD ESP,0x8
// 0048d0b4: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 0048d0b8: DEC EDI
// 0048d0b9: ADD EBX,EBP
// 0048d0bb: JMP 0x0048cff3
//   XREF to: 0048cff3 (UNCONDITIONAL_JUMP)
// 0048d0c0: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048d0c0
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048d0ca: JMP 0x0048cfd2
//   XREF to: 0048cfd2 (UNCONDITIONAL_JUMP)
// 0048d0cf: XOR EBP,EBP
//   Label: LAB_0048d0cf
// 0048d0d1: MOV dword ptr [ESP + 0x14],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0048d0d5: TEST EDI,EDI
// 0048d0d7: JLE 0x0048d13a
//   XREF to: 0048d13a (CONDITIONAL_JUMP)
// 0048d0d9: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0048d0dd: PUSH EBX
//   Label: LAB_0048d0dd
// 0048d0de: CALL engine_prim.c_getTriangleWindingFromIndices_FUN_00552210
//   XREF to: 00552210 (UNCONDITIONAL_CALL)
// 0048d0e3: ADD ESP,0x4
// 0048d0e6: TEST EAX,EAX
// 0048d0e8: JZ 0x0048d127
//   XREF to: 0048d127 (CONDITIONAL_JUMP)
// 0048d0ea: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0048d0ee: INC EBP
// 0048d0ef: LEA EDX,[EAX + 0x4]
// 0048d0f2: MOV dword ptr [EAX + 0x6703f4],EBX
//   XREF to: 006703f4 (DATA)
// 0048d0f8: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0048d0fc: CMP EBP,0x7d0
// 0048d102: JL 0x0048d127
//   XREF to: 0048d127 (CONDITIONAL_JUMP)
// 0048d104: PUSH EBP
// 0048d105: MOV ECX,0x62208d
//   XREF to: 0062208d (PARAM)
// 0048d10a: MOV EAX,0x9b6
// 0048d10f: PUSH 0x6220a3
//   XREF to: 006220a3 (DATA)
// 0048d114: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0048d11a: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0048d11f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048d124: ADD ESP,0x8
// 0048d127: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0048d127
//   XREF to: Stack[-0x14] (READ)
// 0048d12b: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 0048d12f: INC EDX
// 0048d130: ADD EBX,EAX
// 0048d132: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0048d136: CMP EDI,EDX
// 0048d138: JG 0x0048d0dd
//   XREF to: 0048d0dd (CONDITIONAL_JUMP)
// 0048d13a: TEST EBP,EBP
//   Label: LAB_0048d13a
// 0048d13c: JLE 0x0048cf40
//   XREF to: 0048cf40 (CONDITIONAL_JUMP)
// 0048d142: MOV EBX,dword ptr [0x02d052a0]
//   XREF to: 02d052a0 (READ)
// 0048d148: PUSH EBX
// 0048d149: PUSH EBP
// 0048d14a: PUSH 0x6703f4
//   XREF to: 006703f4 (DATA)
// 0048d14f: MOV EDI,dword ptr [ESI]
// 0048d151: PUSH EDI
// 0048d152: CALL wincore_windll.cpp_drawPolyList_FUN_005b7640
//   XREF to: 005b7640 (UNCONDITIONAL_CALL)
// 0048d157: ADD ESP,0x10
// 0048d15a: ADD ESP,0x18
// 0048d15d: POP EBP
// 0048d15e: POP EDI
// 0048d15f: POP ESI
// 0048d160: POP EBX
// 0048d161: RET
// 0048d162: MOV EAX,dword ptr [EBX + 0x3c]
//   Label: LAB_0048d162
// 0048d165: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048d169: JMP 0x0048d01d
//   XREF to: 0048d01d (UNCONDITIONAL_JUMP)
