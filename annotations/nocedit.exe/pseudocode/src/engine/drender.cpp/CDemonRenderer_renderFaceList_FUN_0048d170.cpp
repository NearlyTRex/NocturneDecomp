// Name: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170
// Address: 0048d170
// Address Range: [[0048d170, 0048d404]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170(CDemonRenderer * this_ptr, SInputFace * face_array, int face_count, int render_flags)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_00570870 (00570870) at 005708b2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_drender_cpp_006220ea
//   TerminatedCString s_CDemonRenderer_demonGZFa_00622100
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
//   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
//   engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
//   engine_drender.cpp_renderTriangleSimple_FUN_004839f0
//   engine_drender.cpp_renderTriangleTextured_FUN_00483370
//   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
//   wincore_windll.cpp_drawPolyList2_FUN_005b7780

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_renderFaceList_FUN_0048d170
          (CDemonRenderer *this_ptr,SInputFace *face_array,int face_count,int render_flags)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  
  if (render_flags == -1) {
    render_flags = RENDER_ENGINE_CORE_PREMIUM;
  }
  if (this_ptr->texture_capture_enabled == 0) {
    if (((this_ptr->face_capture_enabled == 0) && (this_ptr->plane_culling_enabled == 0)) &&
       (g_CullingMode != 0)) {
      if (this_ptr->face_count == 0) {
        if (g_BitsPerPixel == 0x20) {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
        }
        else {
          g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
        }
        g_RenderStateFlags = render_flags;
        g_RenderStateFlag2 = PREPROCESS_W_DEPTH_REPLACEMENT;
        if (g_UseExternalRenderer == 0) {
          for (; 0 < face_count; face_count = face_count + -1) {
            local_24 = (uint)(face_array->vertex_indices).vertex_index_0;
            local_20 = (uint)(face_array->vertex_indices).vertex_index_1;
            local_1c = (uint)(face_array->vertex_indices).vertex_index_2;
            if (this_ptr->field8_0x20 == 0) {
              this_ptr->vertex_buffer_ptr[local_24].u = (float)((uint)face_array->u_coord_0 << 8);
              this_ptr->vertex_buffer_ptr[local_24].v = (float)((uint)face_array->v_coord_0 << 8);
              this_ptr->vertex_buffer_ptr[local_20].u = (float)((uint)face_array->u_coord_1 << 8);
              this_ptr->vertex_buffer_ptr[local_20].v = (float)((uint)face_array->v_coord_1 << 8);
              this_ptr->vertex_buffer_ptr[local_1c].u = (float)((uint)face_array->u_coord_2 << 8);
              this_ptr->vertex_buffer_ptr[local_1c].v = (float)((uint)face_array->v_coord_2 << 8);
            }
            face_array = face_array + 1;
            engine_drender_cpp_renderTriangleTextured_FUN_00483370((int *)&local_24,3);
          }
        }
        else {
          iVar2 = 0;
          local_14 = 0;
          if (0 < face_count) {
            local_18 = 0;
            do {
              iVar1 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_005523f0
                                (&face_array->vertex_indices);
              if (iVar1 != 0) {
                iVar2 = iVar2 + 1;
                iVar1 = local_1c + 4;
                *(SInputFace **)((int)g_VisibleFacePointers + local_1c) = face_array;
                local_1c = iVar1;
                if (1999 < iVar2) {
                  g_CurrentFilename = "..\\engine\\drender.cpp";
                  g_CurrentLineNumber = 0xa30;
                  core_main_c_displayErrorAndQuit_FUN_00506f10
                            ("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar2);
                }
              }
              local_14 = local_14 + 1;
              face_array = face_array + 1;
            } while (local_14 < face_count);
          }
          if (0 < iVar2) {
            wincore_windll_cpp_drawPolyList2_FUN_005b7780
                      (this_ptr->vertex_buffer_ptr,g_VisibleFacePointers,iVar2,g_RenderStateFlags);
            return;
          }
        }
      }
      else {
        g_ScanlineRenderFunc = core_dstrender_cpp_renderDepthOnlyStandard_FUN_0049072f;
        g_RenderStateFlags = 0;
        g_RenderStateFlag2 = 0;
        iVar2 = 0;
        iVar1 = 0;
        if (0 < face_count) {
          do {
            g_RenderStateFlag2 = iVar1;
            g_RenderStateFlags = iVar2;
            local_24 = (uint)(face_array->vertex_indices).vertex_index_0;
            local_20 = (uint)(face_array->vertex_indices).vertex_index_1;
            local_1c = (uint)(face_array->vertex_indices).vertex_index_2;
            face_count = face_count + -1;
            face_array = face_array + 1;
            engine_drender_cpp_renderTriangleSimple_FUN_004839f0((int *)&local_24,3);
            iVar2 = g_RenderStateFlags;
            iVar1 = g_RenderStateFlag2;
          } while (0 < face_count);
          return;
        }
      }
    }
    else {
      iVar2 = 0;
      if (0 < face_count) {
        do {
          iVar2 = iVar2 + 1;
          engine_drender_cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
                    (this_ptr,(SMRGLHeaderPrimitive *)face_array,render_flags);
          face_array = (SInputFace *)
                       ((int)&(((SMRGLHeaderPrimitive *)face_array)->surface_normal).C + 2);
        } while (iVar2 < face_count);
        return;
      }
    }
  }
  else {
    iVar2 = 0;
    if (0 < face_count) {
      do {
        iVar2 = iVar2 + 1;
        engine_drender_cpp_CDemonRenderer_captureFace_FUN_0048d8a0
                  (this_ptr,&face_array->vertex_indices,render_flags);
        face_array = face_array + 1;
      } while (iVar2 < face_count);
    }
  }
  return;
}


// Assembly code:
// 0048d170: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170
// 0048d171: PUSH ESI
// 0048d172: PUSH EDI
// 0048d173: PUSH EBP
// 0048d174: SUB ESP,0x14
// 0048d177: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0048d17b: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0048d17f: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0048d183: CMP dword ptr [ESP + 0x34],-0x1
//   XREF to: Stack[0x10] (READ)
// 0048d188: JZ 0x0048d1b8
//   XREF to: 0048d1b8 (CONDITIONAL_JUMP)
// 0048d18a: CMP dword ptr [ESI + 0x1c],0x0
//   Label: LAB_0048d18a
// 0048d18e: JZ 0x0048d1c2
//   XREF to: 0048d1c2 (CONDITIONAL_JUMP)
// 0048d190: XOR EBP,EBP
// 0048d192: TEST EDI,EDI
// 0048d194: JLE 0x0048d1b0
//   XREF to: 0048d1b0 (CONDITIONAL_JUMP)
// 0048d196: MOV ECX,dword ptr [ESP + 0x34]
//   Label: LAB_0048d196
//   XREF to: Stack[0x10] (READ)
// 0048d19a: PUSH ECX
// 0048d19b: PUSH EBX
// 0048d19c: PUSH ESI
// 0048d19d: INC EBP
// 0048d19e: CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0
//   XREF to: 0048d8a0 (UNCONDITIONAL_CALL)
// 0048d1a3: ADD EBX,0x12
// 0048d1a6: ADD ESP,0xc
// 0048d1a9: CMP EBP,EDI
// 0048d1ab: JL 0x0048d196
//   XREF to: 0048d196 (CONDITIONAL_JUMP)
// 0048d1ad: LEA EAX,[EAX]
// 0048d1b0: ADD ESP,0x14
//   Label: LAB_0048d1b0
// 0048d1b3: POP EBP
// 0048d1b4: POP EDI
// 0048d1b5: POP ESI
// 0048d1b6: POP EBX
// 0048d1b7: RET
// 0048d1b8: MOV dword ptr [ESP + 0x34],0x2cd
//   Label: LAB_0048d1b8
//   XREF to: Stack[0x10] (WRITE)
// 0048d1c0: JMP 0x0048d18a
//   XREF to: 0048d18a (UNCONDITIONAL_JUMP)
// 0048d1c2: MOV EAX,dword ptr [ESI + 0x10]
//   Label: LAB_0048d1c2
// 0048d1c5: TEST EAX,EAX
// 0048d1c7: JZ 0x0048d1ee
//   XREF to: 0048d1ee (CONDITIONAL_JUMP)
// 0048d1c9: XOR EBP,EBP
//   Label: LAB_0048d1c9
// 0048d1cb: TEST EDI,EDI
// 0048d1cd: JLE 0x0048d1b0
//   XREF to: 0048d1b0 (CONDITIONAL_JUMP)
// 0048d1cf: MOV EDX,dword ptr [ESP + 0x34]
//   Label: LAB_0048d1cf
//   XREF to: Stack[0x10] (READ)
// 0048d1d3: PUSH EDX
// 0048d1d4: PUSH EBX
// 0048d1d5: PUSH ESI
// 0048d1d6: INC EBP
// 0048d1d7: CALL engine_drender.cpp_CDemonRenderer_renderWireframeAdvanced_FUN_0048b030
//   XREF to: 0048b030 (UNCONDITIONAL_CALL)
// 0048d1dc: ADD EBX,0x12
// 0048d1df: ADD ESP,0xc
// 0048d1e2: CMP EBP,EDI
// 0048d1e4: JL 0x0048d1cf
//   XREF to: 0048d1cf (CONDITIONAL_JUMP)
// 0048d1e6: ADD ESP,0x14
// 0048d1e9: POP EBP
// 0048d1ea: POP EDI
// 0048d1eb: POP ESI
// 0048d1ec: POP EBX
// 0048d1ed: RET
// 0048d1ee: CMP dword ptr [ESI + 0xc],0x0
//   Label: LAB_0048d1ee
// 0048d1f2: JNZ 0x0048d1c9
//   XREF to: 0048d1c9 (CONDITIONAL_JUMP)
// 0048d1f4: CMP dword ptr [0x00772a7c],0x0
//   XREF to: 00772a7c (READ)
// 0048d1fb: JZ 0x0048d1c9
//   XREF to: 0048d1c9 (CONDITIONAL_JUMP)
// 0048d1fd: CMP dword ptr [ESI + 0x4],0x0
// 0048d201: JNZ 0x0048d30e
//   XREF to: 0048d30e (CONDITIONAL_JUMP)
// 0048d207: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0048d20e: JNZ 0x0048d366
//   XREF to: 0048d366 (CONDITIONAL_JUMP)
// 0048d214: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0048d21e: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0048d21e
//   XREF to: Stack[0x10] (READ)
// 0048d222: MOV EBP,0x6
// 0048d227: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 0048d22c: MOV EAX,[0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 0048d231: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0048d237: TEST EAX,EAX
// 0048d239: JNZ 0x0048d375
//   XREF to: 0048d375 (CONDITIONAL_JUMP)
// 0048d23f: TEST EDI,EDI
//   Label: LAB_0048d23f
// 0048d241: JLE 0x0048d1b0
//   XREF to: 0048d1b0 (CONDITIONAL_JUMP)
// 0048d247: XOR EAX,EAX
// 0048d249: MOV AX,word ptr [EBX]
// 0048d24c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0048d24f: XOR EAX,EAX
// 0048d251: MOV AX,word ptr [EBX + 0x2]
// 0048d255: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0048d259: XOR EAX,EAX
// 0048d25b: MOV AX,word ptr [EBX + 0x4]
// 0048d25f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048d263: MOV EAX,dword ptr [ESI + 0x20]
// 0048d266: TEST EAX,EAX
// 0048d268: JNZ 0x0048d2f6
//   XREF to: 0048d2f6 (CONDITIONAL_JUMP)
// 0048d26e: MOV AX,word ptr [EBX + 0x6]
// 0048d272: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0048d275: MOV EDX,EAX
// 0048d277: IMUL EAX,ECX,0x30
// 0048d27a: MOV EBP,dword ptr [ESI]
// 0048d27c: SHL EDX,0x8
// 0048d27f: MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX
// 0048d283: XOR EAX,EAX
// 0048d285: MOV AX,word ptr [EBX + 0xc]
// 0048d289: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 0048d28c: MOV EBP,EAX
// 0048d28e: IMUL EAX,EDX,0x30
// 0048d291: MOV EDX,dword ptr [ESI]
// 0048d293: SHL EBP,0x8
// 0048d296: MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP
// 0048d29a: IMUL EDX,dword ptr [ESP + 0x4],0x30
//   XREF to: Stack[-0x20] (READ)
// 0048d29f: XOR EAX,EAX
// 0048d2a1: MOV AX,word ptr [EBX + 0x8]
// 0048d2a5: MOV EBP,dword ptr [ESI]
// 0048d2a7: SHL EAX,0x8
// 0048d2aa: MOV dword ptr [EDX + EBP*0x1 + 0x18],EAX
// 0048d2ae: XOR EAX,EAX
// 0048d2b0: MOV AX,word ptr [EBX + 0xe]
// 0048d2b4: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 0048d2b8: MOV EBP,EAX
// 0048d2ba: IMUL EAX,EDX,0x30
// 0048d2bd: MOV EDX,dword ptr [ESI]
// 0048d2bf: SHL EBP,0x8
// 0048d2c2: MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP
// 0048d2c6: XOR EAX,EAX
// 0048d2c8: MOV AX,word ptr [EBX + 0xa]
// 0048d2cc: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0048d2d0: MOV EDX,EAX
// 0048d2d2: IMUL EAX,ECX,0x30
// 0048d2d5: MOV EBP,dword ptr [ESI]
// 0048d2d7: SHL EDX,0x8
// 0048d2da: MOV dword ptr [EAX + EBP*0x1 + 0x18],EDX
// 0048d2de: XOR EAX,EAX
// 0048d2e0: MOV AX,word ptr [EBX + 0x10]
// 0048d2e4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0048d2e8: MOV EBP,EAX
// 0048d2ea: IMUL EAX,EDX,0x30
// 0048d2ed: MOV EDX,dword ptr [ESI]
// 0048d2ef: SHL EBP,0x8
// 0048d2f2: MOV dword ptr [EDX + EAX*0x1 + 0x1c],EBP
// 0048d2f6: PUSH 0x3
//   Label: LAB_0048d2f6
// 0048d2f8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0048d2fc: PUSH EAX
// 0048d2fd: DEC EDI
// 0048d2fe: ADD EBX,0x12
// 0048d301: CALL engine_drender.cpp_renderTriangleTextured_FUN_00483370
//   XREF to: 00483370 (UNCONDITIONAL_CALL)
// 0048d306: ADD ESP,0x8
// 0048d309: JMP 0x0048d23f
//   XREF to: 0048d23f (UNCONDITIONAL_JUMP)
// 0048d30e: MOV ECX,0x49072f
//   Label: LAB_0048d30e
//   XREF to: 0049072f (PARAM)
// 0048d313: MOV [0x02d052a0],EAX
//   XREF to: 02d052a0 (WRITE)
// 0048d318: MOV [0x02d052a4],EAX
//   XREF to: 02d052a4 (WRITE)
// 0048d31d: MOV dword ptr [0x02d0257c],ECX
//   XREF to: 02d0257c (WRITE)
// 0048d323: TEST EDI,EDI
// 0048d325: JLE 0x0048d1b0
//   XREF to: 0048d1b0 (CONDITIONAL_JUMP)
// 0048d32b: XOR EAX,EAX
//   Label: LAB_0048d32b
// 0048d32d: MOV AX,word ptr [EBX]
// 0048d330: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x24] (DATA)
// 0048d333: XOR EAX,EAX
// 0048d335: MOV AX,word ptr [EBX + 0x2]
// 0048d339: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0048d33d: XOR EAX,EAX
// 0048d33f: MOV AX,word ptr [EBX + 0x4]
// 0048d343: PUSH 0x3
// 0048d345: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048d349: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0048d34d: PUSH EAX
// 0048d34e: DEC EDI
// 0048d34f: ADD EBX,0x12
// 0048d352: CALL engine_drender.cpp_renderTriangleSimple_FUN_004839f0
//   XREF to: 004839f0 (UNCONDITIONAL_CALL)
// 0048d357: ADD ESP,0x8
// 0048d35a: TEST EDI,EDI
// 0048d35c: JG 0x0048d32b
//   XREF to: 0048d32b (CONDITIONAL_JUMP)
// 0048d35e: ADD ESP,0x14
// 0048d361: POP EBP
// 0048d362: POP EDI
// 0048d363: POP ESI
// 0048d364: POP EBX
// 0048d365: RET
// 0048d366: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0048d366
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0048d370: JMP 0x0048d21e
//   XREF to: 0048d21e (UNCONDITIONAL_JUMP)
// 0048d375: XOR EBP,EBP
//   Label: LAB_0048d375
// 0048d377: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0048d37b: TEST EDI,EDI
// 0048d37d: JLE 0x0048d3dd
//   XREF to: 0048d3dd (CONDITIONAL_JUMP)
// 0048d37f: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 0048d383: PUSH EBX
//   Label: LAB_0048d383
// 0048d384: CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_005523f0
//   XREF to: 005523f0 (UNCONDITIONAL_CALL)
// 0048d389: ADD ESP,0x4
// 0048d38c: TEST EAX,EAX
// 0048d38e: JZ 0x0048d3cd
//   XREF to: 0048d3cd (CONDITIONAL_JUMP)
// 0048d390: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 0048d394: INC EBP
// 0048d395: LEA EDX,[EAX + 0x4]
// 0048d398: MOV dword ptr [EAX + 0x6703f4],EBX
//   XREF to: 006703f4 (DATA)
// 0048d39e: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0048d3a2: CMP EBP,0x7d0
// 0048d3a8: JL 0x0048d3cd
//   XREF to: 0048d3cd (CONDITIONAL_JUMP)
// 0048d3aa: PUSH EBP
// 0048d3ab: MOV ECX,0x6220ea
//   XREF to: 006220ea (PARAM)
// 0048d3b0: MOV EAX,0xa30
// 0048d3b5: PUSH 0x622100
//   XREF to: 00622100 (DATA)
// 0048d3ba: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0048d3c0: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0048d3c5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0048d3ca: ADD ESP,0x8
// 0048d3cd: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_0048d3cd
//   XREF to: Stack[-0x14] (READ)
// 0048d3d1: INC ECX
// 0048d3d2: ADD EBX,0x12
// 0048d3d5: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0048d3d9: CMP EDI,ECX
// 0048d3db: JG 0x0048d383
//   XREF to: 0048d383 (CONDITIONAL_JUMP)
// 0048d3dd: TEST EBP,EBP
//   Label: LAB_0048d3dd
// 0048d3df: JLE 0x0048d1b0
//   XREF to: 0048d1b0 (CONDITIONAL_JUMP)
// 0048d3e5: MOV EDX,dword ptr [0x02d052a0]
//   XREF to: 02d052a0 (READ)
// 0048d3eb: PUSH EDX
// 0048d3ec: PUSH EBP
// 0048d3ed: PUSH 0x6703f4
//   XREF to: 006703f4 (DATA)
// 0048d3f2: MOV ECX,dword ptr [ESI]
// 0048d3f4: PUSH ECX
// 0048d3f5: CALL wincore_windll.cpp_drawPolyList2_FUN_005b7780
//   XREF to: 005b7780 (UNCONDITIONAL_CALL)
// 0048d3fa: ADD ESP,0x10
// 0048d3fd: ADD ESP,0x14
// 0048d400: POP EBP
// 0048d401: POP EDI
// 0048d402: POP ESI
// 0048d403: POP EBX
// 0048d404: RET
