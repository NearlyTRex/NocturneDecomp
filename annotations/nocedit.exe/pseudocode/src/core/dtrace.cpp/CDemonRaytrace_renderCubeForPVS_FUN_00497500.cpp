// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
// Address: 00497500
// Address Range: [[00497500, 00497e46]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, int render_mode)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 (00497e50) at 00498504 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622b86
//   TerminatedCString s_Too_many_drawn_cubes_Nee_00622b99
//   double DOUBLE_00622bca = -256
//   double DOUBLE_00622bd2 = 256
//   float g_RaytraceWorldToScreenScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[2].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[3].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[4].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[5].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[6].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[7].projected_vertex.screen_x
//   CDemonRenderer g_CDemonRendererInstance
//   int g_CubesTestedCount
//   int g_CubesWithVoxelsCount
//   int g_CubesVisibleCount
//   int g_CubesRenderedCount
//   int g_PVSDrawnCubeCount
//   CDemonCube*[20000] g_PVSCubePointers
//   CVector3f[20000] g_PVSCubePositions
//   undefined4 DAT_02cb3c30
//   undefined4 DAT_02cb3c34
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CVector3f g_ZeroVector
// Function calls:
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
          (CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  SMRGLHeaderPrimitive *pSVar6;
  int iVar7;
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CDemonRenderer *this_ptr_02;
  CDemonRenderer *this_ptr_03;
  CDemonRenderer *this_ptr_04;
  CDemonRenderer *this_ptr_05;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float10 fVar8;
  float in_stack_00000018;
  float in_stack_0000001c;
  int in_stack_00000020;
  CDemonCube *in_stack_00000024;
  int in_stack_00000028;
  CDemonCube *in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
  int iStack00000040;
  int in_stack_00000050;
  int in_stack_00000058;
  int in_stack_00000060;
  SMRGLHeaderPrimitive *in_stack_ffffff50;
  SMRGLHeaderPrimitive *pSVar9;
  SMRGLHeaderPrimitive *prim;
  CVector3i local_74;
  undefined1 local_68 [12];
  int local_5c;
  int local_58;
  CVector3i local_54;
  CVector3i local_48;
  CVector3i local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = grid_z;
  iVar2 = grid_x;
  g_CubesTestedCount = g_CubesTestedCount + 1;
  if ((((((this_ptr->grid_bounds_min).x <= grid_x) && ((this_ptr->grid_bounds_min).y <= grid_y)) &&
       ((this_ptr->grid_bounds_min).z <= grid_z)) &&
      ((grid_x <= (this_ptr->grid_bounds_max).x && (grid_y <= (this_ptr->grid_bounds_max).y)))) &&
     (grid_z <= (this_ptr->grid_bounds_max).z)) {
    local_34.y = (int)core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                (this_ptr,grid_x,grid_y,grid_z);
    if (((CDemonCube *)local_34.y != (CDemonCube *)0x0) &&
       (((CDemonCube *)local_34.y)->voxel_buffer1 != (SVoxelGrid *)0x0)) {
      local_24 = (float)iVar2;
      local_14 = (float)grid_z;
      local_1c = (float)grid_z;
      local_34.z = (int)(float)iVar3;
      g_CubesWithVoxelsCount = g_CubesWithVoxelsCount + 1;
      local_68._8_4_ =
           (undefined4)
           ROUND((local_24 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                 g_RaytraceWorldToScreenScale);
      local_5c = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                            g_RaytraceWorldToScreenScale);
      local_58 = (int)ROUND(((float)local_34.z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                            g_RaytraceWorldToScreenScale);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                 (CVector3i *)(local_68 + 8));
      local_24 = (float)(iVar2 + 1);
      local_74.x = (int)ROUND((local_24 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              g_RaytraceWorldToScreenScale);
      local_74.y = (int)ROUND((local_18 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              g_RaytraceWorldToScreenScale);
      local_74.z = (int)ROUND((local_28 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              g_RaytraceWorldToScreenScale);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_74);
      local_18 = (float)(iVar3 + 1);
      local_34.x = (int)ROUND((local_20 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              g_RaytraceWorldToScreenScale);
      local_34.y = (int)ROUND((local_14 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              g_RaytraceWorldToScreenScale);
      local_34.z = (int)ROUND((local_18 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              g_RaytraceWorldToScreenScale);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_34);
      local_48.x = (int)ROUND((local_18 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              g_RaytraceWorldToScreenScale);
      local_48.y = (int)ROUND(((float)iVar3 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              g_RaytraceWorldToScreenScale);
      local_48.z = (int)ROUND((local_14 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              g_RaytraceWorldToScreenScale);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_48);
      fVar4 = (float)(in_stack_00000020 + 1);
      fVar1 = (float)(int)fVar4;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,
                 (CVector3i *)&stack0xffffff74);
      local_74.x = (int)ROUND((local_18 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              g_RaytraceWorldToScreenScale);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,
                 (CVector3i *)&stack0xffffff84);
      local_54.x = (int)ROUND(((float)iVar3 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              g_RaytraceWorldToScreenScale);
      local_54.y = (int)ROUND((fVar4 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              g_RaytraceWorldToScreenScale);
      local_54.z = (int)ROUND((fVar1 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              g_RaytraceWorldToScreenScale);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_54);
      local_68._0_4_ =
           (undefined4)
           ROUND((fVar1 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                 g_RaytraceWorldToScreenScale);
      local_68._4_4_ =
           (undefined4)
           ROUND(((float)this_ptr * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                 g_RaytraceWorldToScreenScale);
      local_68._8_4_ =
           (undefined4)
           ROUND((unaff_EBX * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                 g_RaytraceWorldToScreenScale);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,(CVector3i *)local_68);
      uVar5 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
              g_RenderVertexBuffer[1].projected_vertex.screen_x &
              g_RenderVertexBuffer[2].projected_vertex.screen_x &
              g_RenderVertexBuffer[3].projected_vertex.screen_x &
              g_RenderVertexBuffer[4].projected_vertex.screen_x &
              g_RenderVertexBuffer[5].projected_vertex.screen_x &
              g_RenderVertexBuffer[6].projected_vertex.screen_x &
              g_RenderVertexBuffer[7].projected_vertex.screen_x;
      if (((uVar5 & 0x80000000) == 0) || ((char)uVar5 == '\0')) {
        g_CubesVisibleCount = g_CubesVisibleCount + 1;
        if (1 < in_stack_00000038) {
          pSVar9 = (SMRGLHeaderPrimitive *)0x0;
          grid_z = iVar3;
          crt_math_c_round_FUN_005fe6b0((double)CONCAT44(0xffffffff,&stack0xffffff50));
          pSVar6 = (SMRGLHeaderPrimitive *)
                   engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                             (this_ptr_00,in_stack_ffffff50);
          if (pSVar6 == (SMRGLHeaderPrimitive *)0x0) {
            in_stack_00000018 = (float)(iVar3 + 1);
            crt_math_c_round_FUN_005fe6b0((double)CONCAT44(6,&stack0xffffff58));
            iVar7 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                              (this_ptr_01,pSVar9);
            if (iVar7 == 0) {
              in_stack_00000020 = iVar2;
              pSVar9 = (SMRGLHeaderPrimitive *)0xffffffff;
              crt_math_c_round_FUN_005fe6b0((double)CONCAT44(3,&stack0xffffff60));
              iVar7 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                (this_ptr_02,pSVar6);
              if (iVar7 == 0) {
                in_stack_00000028 = iVar2 + 1;
                prim = (SMRGLHeaderPrimitive *)&DAT_00000001;
                local_74.x = 5;
                crt_math_c_round_FUN_005fe6b0((double)CONCAT44(5,&stack0xffffff68));
                pSVar6 = (SMRGLHeaderPrimitive *)
                         engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                   (this_ptr_03,pSVar9);
                if (pSVar6 == (SMRGLHeaderPrimitive *)0x0) {
                  in_stack_00000030 = in_stack_00000050 + 1;
                  local_74.x = 5;
                  local_74.y = 6;
                  local_74.z = 7;
                  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(7,&stack0xffffff70));
                  iVar7 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                    (this_ptr_04,prim);
                  if (iVar7 == 0) {
                    in_stack_00000038 = in_stack_00000058;
                    fVar8 = ((float10)in_stack_00000058 * (float10)(this_ptr->cell_size).y +
                            (float10)(this_ptr->bbox_min).y) * (float10)DOUBLE_00622bca;
                    local_74.y = 0;
                    local_68._0_4_ = 2;
                    local_68._4_4_ = 3;
                    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(3,&stack0xffffff78));
                    local_74.y = (int)ROUND(fVar8);
                    local_68._0_4_ = 1;
                    iVar7 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                      (this_ptr_05,pSVar6);
                    if (iVar7 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        grid_x = (int)((float)iVar2 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x);
        iStack00000040 = iVar3;
        grid_y = (int)((float)in_stack_00000060 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y);
        g_CubesRenderedCount = g_CubesRenderedCount + 1;
        grid_z = (int)((float)iVar3 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)&grid_x);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457650
                  (in_stack_00000024,this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&g_ZeroVector);
        iVar2 = g_PVSDrawnCubeCount;
        g_PVSCubePointers[g_PVSDrawnCubeCount] = in_stack_0000002c;
        if (g_PVSCubePositions + iVar2 != (CVector3f *)&render_mode) {
          g_PVSCubePositions[iVar2].x = (float)render_mode;
          g_PVSCubePositions[iVar2].y = in_stack_00000018;
          g_PVSCubePositions[iVar2].z = in_stack_0000001c;
        }
        g_PVSDrawnCubeCount = g_PVSDrawnCubeCount + 1;
        if (19999 < g_PVSDrawnCubeCount) {
          g_CurrentFilename = "..\\core\\dtrace.cpp";
          g_CurrentLineNumber = 0x792;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00497500: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500
// 00497501: PUSH ESI
// 00497502: PUSH EDI
// 00497503: PUSH EBP
// 00497504: SUB ESP,0xc4
// 0049750a: MOV ESI,dword ptr [ESP + 0xd8]
//   XREF to: Stack[0x4] (READ)
// 00497511: MOV EDI,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x8] (READ)
// 00497518: MOV EBP,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x10] (READ)
// 0049751f: MOV EDX,dword ptr [0x02ca0394]
//   XREF to: 02ca0394 (READ)
// 00497525: INC EDX
// 00497526: MOV ECX,dword ptr [ESI + 0x54]
// 00497529: MOV dword ptr [0x02ca0394],EDX
//   XREF to: 02ca0394 (WRITE)
// 0049752f: CMP EDI,ECX
// 00497531: JL 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 00497533: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0xc] (READ)
// 0049753a: CMP EAX,dword ptr [ESI + 0x58]
// 0049753d: JL 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 0049753f: CMP EBP,dword ptr [ESI + 0x5c]
// 00497542: JL 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 00497544: CMP EDI,dword ptr [ESI + 0x60]
// 00497547: JG 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 00497549: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0xc] (READ)
// 00497550: CMP EAX,dword ptr [ESI + 0x64]
// 00497553: JG 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 00497555: CMP EBP,dword ptr [ESI + 0x68]
// 00497558: JLE 0x00497565
//   XREF to: 00497565 (CONDITIONAL_JUMP)
// 0049755a: ADD ESP,0xc4
//   Label: LAB_0049755a
// 00497560: POP EBP
// 00497561: POP EDI
// 00497562: POP ESI
// 00497563: POP EBX
// 00497564: RET
// 00497565: PUSH EBP
//   Label: LAB_00497565
// 00497566: PUSH EAX
// 00497567: PUSH EDI
// 00497568: PUSH ESI
// 00497569: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 0049756e: ADD ESP,0x10
// 00497571: MOV dword ptr [ESP + 0xa0],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00497578: TEST EAX,EAX
// 0049757a: JZ 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 0049757c: CMP dword ptr [EAX],0x0
// 0049757f: JZ 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 00497581: MOV dword ptr [ESP + 0xbc],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00497588: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0xc] (READ)
// 0049758f: FILD dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x18] (READ)
// 00497596: FST float ptr [ESP + 0xac]
//   XREF to: Stack[-0x28] (WRITE)
// 0049759d: FMUL float ptr [ESI + 0x28]
// 004975a0: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004975a7: MOV dword ptr [ESP + 0xc0],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004975ae: FILD dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x18] (READ)
// 004975b5: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x20] (WRITE)
// 004975bc: FADD float ptr [ESI + 0x10]
// 004975bf: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x20] (READ)
// 004975c6: FXCH
// 004975c8: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xac] (WRITE)
// 004975cc: FMUL float ptr [ESI + 0x2c]
// 004975cf: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 004975d6: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x30] (WRITE)
// 004975dd: FADD float ptr [ESI + 0x14]
// 004975e0: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x30] (READ)
// 004975e7: FXCH
// 004975e9: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa8] (WRITE)
// 004975ed: FMUL float ptr [ESI + 0x30]
// 004975f0: LEA EBX,[ESP + 0x70]
//   XREF to: Stack[-0x64] (DATA)
// 004975f4: MOV ECX,dword ptr [0x02ca0398]
//   XREF to: 02ca0398 (READ)
// 004975fa: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497600: INC ECX
// 00497601: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xac] (DATA)
// 00497605: FADD float ptr [ESI + 0x18]
// 00497608: MOV dword ptr [0x02ca0398],ECX
//   XREF to: 02ca0398 (WRITE)
// 0049760e: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa4] (WRITE)
// 00497612: FLD float ptr [EAX]
//   XREF to: Stack[-0xac] (DATA)
// 00497614: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 0049761a: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x64] (DATA)
// 0049761c: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa8] (READ)
// 0049761f: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497625: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x60] (WRITE)
// 00497628: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xa4] (READ)
// 0049762b: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497631: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x5c] (WRITE)
// 00497634: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x64] (DATA)
// 00497638: PUSH EAX
// 00497639: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049763b: PUSH EAX
// 0049763c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00497641: ADD ESP,0x8
// 00497644: LEA EAX,[EDI + 0x1]
// 00497647: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049764e: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497655: FST float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x2c] (WRITE)
// 0049765c: FMUL float ptr [ESI + 0x28]
// 0049765f: FADD float ptr [ESI + 0x10]
// 00497662: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x20] (READ)
// 00497669: FXCH
// 0049766b: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xac] (WRITE)
// 0049766f: FMUL float ptr [ESI + 0x2c]
// 00497672: FADD float ptr [ESI + 0x14]
// 00497675: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x30] (READ)
// 0049767c: FXCH
// 0049767e: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa8] (WRITE)
// 00497682: FMUL float ptr [ESI + 0x30]
// 00497685: LEA EBX,[ESP + 0x58]
//   XREF to: Stack[-0x7c] (DATA)
// 00497689: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 0049768f: FADD float ptr [ESI + 0x18]
// 00497692: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xac] (DATA)
// 00497696: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa4] (WRITE)
// 0049769a: FLD float ptr [EAX]
//   XREF to: Stack[-0xac] (DATA)
// 0049769c: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004976a2: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x7c] (DATA)
// 004976a4: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa8] (READ)
// 004976a7: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004976ad: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x78] (WRITE)
// 004976b0: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xa4] (READ)
// 004976b3: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004976b9: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x74] (WRITE)
// 004976bc: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x7c] (DATA)
// 004976c0: PUSH EAX
// 004976c1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004976c3: ADD EAX,0x30
// 004976c6: PUSH EAX
// 004976c7: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004976cc: ADD ESP,0x8
// 004976cf: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x2c] (READ)
// 004976d6: FMUL float ptr [ESI + 0x28]
// 004976d9: LEA EAX,[EBP + 0x1]
// 004976dc: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x20] (READ)
// 004976e3: FXCH
// 004976e5: FADD float ptr [ESI + 0x10]
// 004976e8: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004976ef: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xac] (WRITE)
// 004976f3: FMUL float ptr [ESI + 0x2c]
// 004976f6: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 004976fd: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x24] (WRITE)
// 00497704: FADD float ptr [ESI + 0x14]
// 00497707: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x24] (READ)
// 0049770e: FXCH
// 00497710: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa8] (WRITE)
// 00497714: FMUL float ptr [ESI + 0x30]
// 00497717: FADD float ptr [ESI + 0x18]
// 0049771a: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa4] (WRITE)
// 0049771e: LEA EBX,[ESP + 0x94]
//   XREF to: Stack[-0x40] (DATA)
// 00497725: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xac] (DATA)
// 00497729: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 0049772f: FLD float ptr [EAX]
//   XREF to: Stack[-0xac] (DATA)
// 00497731: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497737: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x40] (DATA)
// 00497739: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa8] (READ)
// 0049773c: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497742: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 00497745: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xa4] (READ)
// 00497748: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 0049774e: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 00497751: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x40] (DATA)
// 00497758: PUSH EAX
// 00497759: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049775b: ADD EAX,0x60
// 0049775e: PUSH EAX
// 0049775f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00497764: ADD ESP,0x8
// 00497767: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x28] (READ)
// 0049776e: FMUL float ptr [ESI + 0x28]
// 00497771: FADD float ptr [ESI + 0x10]
// 00497774: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x20] (READ)
// 0049777b: FXCH
// 0049777d: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xac] (WRITE)
// 00497781: FMUL float ptr [ESI + 0x2c]
// 00497784: FADD float ptr [ESI + 0x14]
// 00497787: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x24] (READ)
// 0049778e: FXCH
// 00497790: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa8] (WRITE)
// 00497794: FMUL float ptr [ESI + 0x30]
// 00497797: LEA EBX,[ESP + 0x7c]
//   XREF to: Stack[-0x58] (DATA)
// 0049779b: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xac] (DATA)
// 0049779f: FADD float ptr [ESI + 0x18]
// 004977a2: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 004977a8: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa4] (WRITE)
// 004977ac: FLD float ptr [EAX]
//   XREF to: Stack[-0xac] (DATA)
// 004977ae: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004977b4: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x58] (DATA)
// 004977b6: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa8] (READ)
// 004977b9: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004977bf: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x54] (WRITE)
// 004977c2: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xa4] (READ)
// 004977c5: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004977cb: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 004977ce: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x58] (DATA)
// 004977d2: PUSH EAX
// 004977d3: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004977d5: ADD EAX,0x90
// 004977da: PUSH EAX
// 004977db: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004977e0: ADD ESP,0x8
// 004977e3: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0xc] (READ)
// 004977ea: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x28] (READ)
// 004977f1: INC EAX
// 004977f2: FMUL float ptr [ESI + 0x28]
// 004977f5: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004977fc: FADD float ptr [ESI + 0x10]
// 004977ff: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497806: FXCH
// 00497808: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xac] (WRITE)
// 0049780c: FST float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x1c] (WRITE)
// 00497813: FMUL float ptr [ESI + 0x2c]
// 00497816: FADD float ptr [ESI + 0x14]
// 00497819: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x30] (READ)
// 00497820: FXCH
// 00497822: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa8] (WRITE)
// 00497826: FMUL float ptr [ESI + 0x30]
// 00497829: LEA EBX,[ESP + 0x34]
//   XREF to: Stack[-0xa0] (DATA)
// 0049782d: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497833: FADD float ptr [ESI + 0x18]
// 00497836: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xac] (DATA)
// 0049783a: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa4] (WRITE)
// 0049783e: FLD float ptr [EAX]
//   XREF to: Stack[-0xac] (DATA)
// 00497840: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497846: FISTP dword ptr [EBX]
//   XREF to: Stack[-0xa0] (DATA)
// 00497848: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa8] (READ)
// 0049784b: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497851: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x9c] (WRITE)
// 00497854: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xa4] (READ)
// 00497857: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 0049785d: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x98] (WRITE)
// 00497860: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0xa0] (DATA)
// 00497864: PUSH EAX
// 00497865: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00497867: ADD EAX,0xc0
// 0049786c: PUSH EAX
// 0049786d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00497872: ADD ESP,0x8
// 00497875: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x2c] (READ)
// 0049787c: FMUL float ptr [ESI + 0x28]
// 0049787f: FADD float ptr [ESI + 0x10]
// 00497882: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x1c] (READ)
// 00497889: FXCH
// 0049788b: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xac] (WRITE)
// 0049788f: FMUL float ptr [ESI + 0x2c]
// 00497892: FADD float ptr [ESI + 0x14]
// 00497895: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x30] (READ)
// 0049789c: FXCH
// 0049789e: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa8] (WRITE)
// 004978a2: FMUL float ptr [ESI + 0x30]
// 004978a5: LEA EBX,[ESP + 0x40]
//   XREF to: Stack[-0x94] (DATA)
// 004978a9: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xac] (DATA)
// 004978ad: FADD float ptr [ESI + 0x18]
// 004978b0: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 004978b6: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa4] (WRITE)
// 004978ba: FLD float ptr [EAX]
//   XREF to: Stack[-0xac] (DATA)
// 004978bc: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004978c2: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x94] (DATA)
// 004978c4: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa8] (READ)
// 004978c7: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004978cd: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x90] (WRITE)
// 004978d0: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xa4] (READ)
// 004978d3: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004978d9: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8c] (WRITE)
// 004978dc: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x94] (DATA)
// 004978e0: PUSH EAX
// 004978e1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004978e3: ADD EAX,0xf0
// 004978e8: PUSH EAX
// 004978e9: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004978ee: ADD ESP,0x8
// 004978f1: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x2c] (READ)
// 004978f8: FMUL float ptr [ESI + 0x28]
// 004978fb: FADD float ptr [ESI + 0x10]
// 004978fe: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x1c] (READ)
// 00497905: FXCH
// 00497907: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xac] (WRITE)
// 0049790b: FMUL float ptr [ESI + 0x2c]
// 0049790e: FADD float ptr [ESI + 0x14]
// 00497911: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x24] (READ)
// 00497918: FXCH
// 0049791a: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa8] (WRITE)
// 0049791e: FMUL float ptr [ESI + 0x30]
// 00497921: LEA EBX,[ESP + 0x64]
//   XREF to: Stack[-0x70] (DATA)
// 00497925: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xac] (DATA)
// 00497929: FADD float ptr [ESI + 0x18]
// 0049792c: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497932: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa4] (WRITE)
// 00497936: FLD float ptr [EAX]
//   XREF to: Stack[-0xac] (DATA)
// 00497938: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 0049793e: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x70] (DATA)
// 00497940: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa8] (READ)
// 00497943: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497949: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x6c] (WRITE)
// 0049794c: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xa4] (READ)
// 0049794f: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497955: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x68] (WRITE)
// 00497958: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x70] (DATA)
// 0049795c: PUSH EAX
// 0049795d: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049795f: ADD EAX,0x120
// 00497964: PUSH EAX
// 00497965: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0049796a: ADD ESP,0x8
// 0049796d: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x28] (READ)
// 00497974: FMUL float ptr [ESI + 0x28]
// 00497977: FADD float ptr [ESI + 0x10]
// 0049797a: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x1c] (READ)
// 00497981: FXCH
// 00497983: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xac] (WRITE)
// 00497987: FMUL float ptr [ESI + 0x2c]
// 0049798a: FADD float ptr [ESI + 0x14]
// 0049798d: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x24] (READ)
// 00497994: FXCH
// 00497996: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xa8] (WRITE)
// 0049799a: FMUL float ptr [ESI + 0x30]
// 0049799d: LEA EBX,[ESP + 0x4c]
//   XREF to: Stack[-0x88] (DATA)
// 004979a1: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0xac] (DATA)
// 004979a5: FADD float ptr [ESI + 0x18]
// 004979a8: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 004979ae: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xa4] (WRITE)
// 004979b2: FLD float ptr [EAX]
//   XREF to: Stack[-0xac] (DATA)
// 004979b4: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004979ba: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x88] (DATA)
// 004979bc: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0xa8] (READ)
// 004979bf: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004979c5: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x84] (WRITE)
// 004979c8: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0xa4] (READ)
// 004979cb: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004979d1: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x80] (WRITE)
// 004979d4: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x88] (DATA)
// 004979d8: PUSH EAX
// 004979d9: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004979db: ADD EAX,0x150
// 004979e0: PUSH EAX
// 004979e1: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004979e6: MOV EAX,[0x00688024]
//   XREF to: 00688024 (READ)
// 004979eb: MOV EBX,dword ptr [0x00688054]
//   XREF to: 00688054 (READ)
// 004979f1: MOV EDX,dword ptr [0x00688084]
//   XREF to: 00688084 (READ)
// 004979f7: AND EAX,EBX
// 004979f9: MOV ECX,dword ptr [0x006880b4]
//   XREF to: 006880b4 (READ)
// 004979ff: AND EAX,EDX
// 00497a01: MOV EBX,dword ptr [0x006880e4]
//   XREF to: 006880e4 (READ)
// 00497a07: AND EAX,ECX
// 00497a09: MOV EDX,dword ptr [0x00688114]
//   XREF to: 00688114 (READ)
// 00497a0f: AND EAX,EBX
// 00497a11: MOV ECX,dword ptr [0x00688144]
//   XREF to: 00688144 (READ)
// 00497a17: AND EAX,EDX
// 00497a19: MOV EBX,dword ptr [0x00688174]
//   XREF to: 00688174 (READ)
// 00497a1f: AND EAX,ECX
// 00497a21: AND EAX,EBX
// 00497a23: ADD ESP,0x8
// 00497a26: TEST EAX,0x80000000
// 00497a2b: JZ 0x00497a35
//   XREF to: 00497a35 (CONDITIONAL_JUMP)
// 00497a2d: TEST AL,0xff
// 00497a2f: JNZ 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 00497a35: MOV EAX,[0x02ca039c]
//   Label: LAB_00497a35
//   XREF to: 02ca039c (READ)
// 00497a3a: INC EAX
// 00497a3b: MOV EDX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[0x14] (READ)
// 00497a42: MOV [0x02ca039c],EAX
//   XREF to: 02ca039c (WRITE)
// 00497a47: CMP EDX,0x1
// 00497a4a: JG 0x00497b8a
//   XREF to: 00497b8a (CONDITIONAL_JUMP)
// 00497a50: MOV dword ptr [ESP + 0xc0],EDI
//   Label: LAB_00497a50
//   XREF to: Stack[-0x14] (WRITE)
// 00497a57: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0xc] (READ)
// 00497a5e: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497a65: FMUL float ptr [ESI + 0x28]
// 00497a68: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00497a6f: FADD float ptr [ESI + 0x10]
// 00497a72: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497a79: FXCH
// 00497a7b: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x4c] (WRITE)
// 00497a82: FMUL float ptr [ESI + 0x2c]
// 00497a85: MOV dword ptr [ESP + 0xc0],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00497a8c: FADD float ptr [ESI + 0x14]
// 00497a8f: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497a96: FXCH
// 00497a98: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x48] (WRITE)
// 00497a9f: FMUL float ptr [ESI + 0x30]
// 00497aa2: MOV EBX,dword ptr [0x02ca03a0]
//   XREF to: 02ca03a0 (READ)
// 00497aa8: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497aae: INC EBX
// 00497aaf: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x4c] (DATA)
// 00497ab6: MOV dword ptr [0x02ca03a0],EBX
//   XREF to: 02ca03a0 (WRITE)
// 00497abc: PUSH EAX
// 00497abd: FADD float ptr [ESI + 0x18]
// 00497ac0: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00497ac1: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x44] (WRITE)
// 00497ac8: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00497acd: ADD ESP,0x8
// 00497ad0: MOV EBP,dword ptr [ESI]
// 00497ad2: PUSH EBP
// 00497ad3: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x34] (READ)
// 00497ada: PUSH EAX
// 00497adb: CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
//   XREF to: 00457650 (UNCONDITIONAL_CALL)
// 00497ae0: ADD ESP,0x8
// 00497ae3: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 00497ae8: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00497aee: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00497aef: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00497af4: ADD ESP,0x8
// 00497af7: MOV EAX,[0x02ca03a4]
//   XREF to: 02ca03a4 (READ)
// 00497afc: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x34] (READ)
// 00497b03: MOV EBX,EAX
// 00497b05: MOV dword ptr [EAX*0x4 + 0x2ca03ac],EDX
//   XREF to: 02ca03ac (DATA)
// 00497b0c: SHL EAX,0x2
// 00497b0f: SUB EAX,EBX
// 00497b11: MOV ESI,0x2cb3c2c
//   XREF to: 02cb3c2c (DATA)
// 00497b16: SHL EAX,0x2
// 00497b19: ADD ESI,EAX
// 00497b1b: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x4c] (DATA)
// 00497b22: CMP ESI,EAX
// 00497b24: JZ 0x00497b43
//   XREF to: 00497b43 (CONDITIONAL_JUMP)
// 00497b26: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x4c] (DATA)
// 00497b2d: MOV dword ptr [ESI],EAX
//   XREF to: 02cb3c2c (DATA)
// 00497b2f: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x48] (READ)
// 00497b36: MOV dword ptr [ESI + 0x4],EAX
//   XREF to: 02cb3c30 (DATA)
// 00497b39: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x44] (READ)
// 00497b40: MOV dword ptr [ESI + 0x8],EAX
//   XREF to: 02cb3c34 (DATA)
// 00497b43: MOV ECX,dword ptr [0x02ca03a4]
//   Label: LAB_00497b43
//   XREF to: 02ca03a4 (READ)
// 00497b49: INC ECX
// 00497b4a: MOV dword ptr [0x02ca03a4],ECX
//   XREF to: 02ca03a4 (WRITE)
// 00497b50: CMP ECX,0x4e20
// 00497b56: JL 0x0049755a
//   XREF to: 0049755a (CONDITIONAL_JUMP)
// 00497b5c: MOV ESI,0x622b86
//   XREF to: 00622b86 (DATA)
// 00497b61: MOV EDI,0x792
// 00497b66: PUSH 0x622b99
//   XREF to: 00622b99 (DATA)
// 00497b6b: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00497b71: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00497b77: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00497b7c: ADD ESP,0x4
// 00497b7f: ADD ESP,0xc4
// 00497b85: POP EBP
// 00497b86: POP EDI
// 00497b87: POP ESI
// 00497b88: POP EBX
// 00497b89: RET
// 00497b8a: MOV ECX,0x4
//   Label: LAB_00497b8a
// 00497b8f: MOV EDX,0xffffffff
// 00497b94: MOV dword ptr [ESP + 0xc0],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00497b9b: XOR EBX,EBX
// 00497b9d: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xd0] (WRITE)
// 00497ba1: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0xcc] (WRITE)
// 00497ba5: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0xc8] (WRITE)
// 00497ba9: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 00497bad: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497bb4: FMUL float ptr [ESI + 0x30]
// 00497bb7: FADD float ptr [ESI + 0x18]
// 00497bba: FMUL double ptr [0x00622bca]
//   XREF to: 00622bca (READ)
// 00497bc0: MOV EAX,0x5
// 00497bc5: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0xbc] (WRITE)
// 00497bc9: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00497bcd: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0xb0] (WRITE)
// 00497bd1: MOV EBX,0x1
// 00497bd6: MOV EAX,ESP
// 00497bd8: MOV ECX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497bde: PUSH EAX
// 00497bdf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497be4: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00497be5: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc0] (WRITE)
// 00497be9: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0xb8] (WRITE)
// 00497bed: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 00497bf2: ADD ESP,0x8
// 00497bf5: TEST EAX,EAX
// 00497bf7: JNZ 0x00497a50
//   XREF to: 00497a50 (CONDITIONAL_JUMP)
// 00497bfd: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 00497c01: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 00497c05: LEA EAX,[EBX + EBP*0x1]
// 00497c08: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00497c0f: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0xc4] (WRITE)
// 00497c13: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497c1a: FMUL float ptr [ESI + 0x30]
// 00497c1d: FADD float ptr [ESI + 0x18]
// 00497c20: FMUL double ptr [0x00622bd2]
//   XREF to: 00622bd2 (READ)
// 00497c26: MOV ECX,0x2
// 00497c2b: MOV EDX,0x6
// 00497c30: MOV EBX,0x3
// 00497c35: MOV EAX,0x7
// 00497c3a: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0xbc] (WRITE)
// 00497c3e: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0xb8] (WRITE)
// 00497c42: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00497c46: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0xb0] (WRITE)
// 00497c4a: MOV EAX,ESP
// 00497c4c: MOV ECX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497c52: PUSH EAX
// 00497c53: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497c58: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00497c59: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc0] (WRITE)
// 00497c5d: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 00497c62: ADD ESP,0x8
// 00497c65: TEST EAX,EAX
// 00497c67: JNZ 0x00497a50
//   XREF to: 00497a50 (CONDITIONAL_JUMP)
// 00497c6d: MOV EBX,0xffffffff
// 00497c72: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 00497c76: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 00497c7a: MOV dword ptr [ESP + 0xc0],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00497c81: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0xcc] (WRITE)
// 00497c85: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497c8c: FMUL float ptr [ESI + 0x28]
// 00497c8f: FADD float ptr [ESI + 0x10]
// 00497c92: FMUL double ptr [0x00622bca]
//   XREF to: 00622bca (READ)
// 00497c98: MOV EDX,0x3
// 00497c9d: MOV ECX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497ca3: MOV EBX,0x4
// 00497ca8: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 00497cac: MOV EAX,0x7
// 00497cb1: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0xb8] (WRITE)
// 00497cb5: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00497cb9: MOV EAX,ESP
// 00497cbb: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0xb0] (WRITE)
// 00497cbf: PUSH EAX
// 00497cc0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497cc5: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00497cc6: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc0] (WRITE)
// 00497cca: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 00497ccf: ADD ESP,0x8
// 00497cd2: TEST EAX,EAX
// 00497cd4: JNZ 0x00497a50
//   XREF to: 00497a50 (CONDITIONAL_JUMP)
// 00497cda: MOV EBX,0x1
// 00497cdf: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 00497ce3: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc4] (WRITE)
// 00497ce7: LEA EAX,[EDI + EBX*0x1]
// 00497cea: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00497cf1: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0xcc] (WRITE)
// 00497cf5: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497cfc: FMUL float ptr [ESI + 0x28]
// 00497cff: FADD float ptr [ESI + 0x10]
// 00497d02: FMUL double ptr [0x00622bd2]
//   XREF to: 00622bd2 (READ)
// 00497d08: MOV EDX,0x5
// 00497d0d: MOV ECX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497d13: MOV EAX,0x6
// 00497d18: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0xbc] (WRITE)
// 00497d1c: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00497d20: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0xb0] (WRITE)
// 00497d24: MOV EAX,ESP
// 00497d26: MOV EBX,0x2
// 00497d2b: PUSH EAX
// 00497d2c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497d31: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00497d32: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc0] (WRITE)
// 00497d36: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0xb8] (WRITE)
// 00497d3a: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 00497d3f: ADD ESP,0x8
// 00497d42: TEST EAX,EAX
// 00497d44: JNZ 0x00497a50
//   XREF to: 00497a50 (CONDITIONAL_JUMP)
// 00497d4a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 00497d4e: MOV dword ptr [ESP + 0xc],0x1
//   XREF to: Stack[-0xc8] (WRITE)
// 00497d56: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0xc] (READ)
// 00497d5d: INC EAX
// 00497d5e: XOR EDX,EDX
// 00497d60: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00497d67: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 00497d6b: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497d72: FMUL float ptr [ESI + 0x2c]
// 00497d75: FADD float ptr [ESI + 0x14]
// 00497d78: FMUL double ptr [0x00622bd2]
//   XREF to: 00622bd2 (READ)
// 00497d7e: MOV ECX,0x4
// 00497d83: MOV EBX,0x5
// 00497d88: MOV EDX,0x7
// 00497d8d: MOV EAX,0x6
// 00497d92: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0xbc] (WRITE)
// 00497d96: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0xb8] (WRITE)
// 00497d9a: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00497d9e: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0xb0] (WRITE)
// 00497da2: MOV EAX,ESP
// 00497da4: MOV ECX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497daa: PUSH EAX
// 00497dab: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497db0: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00497db1: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc0] (WRITE)
// 00497db5: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 00497dba: ADD ESP,0x8
// 00497dbd: TEST EAX,EAX
// 00497dbf: JNZ 0x00497a50
//   XREF to: 00497a50 (CONDITIONAL_JUMP)
// 00497dc5: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 00497dc9: MOV dword ptr [ESP + 0xc],0xffffffff
//   XREF to: Stack[-0xc8] (WRITE)
// 00497dd1: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0xc] (READ)
// 00497dd8: XOR EDX,EDX
// 00497dda: MOV dword ptr [ESP + 0xc0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00497de1: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 00497de5: FILD dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x14] (READ)
// 00497dec: FMUL float ptr [ESI + 0x2c]
// 00497def: FADD float ptr [ESI + 0x14]
// 00497df2: FMUL double ptr [0x00622bca]
//   XREF to: 00622bca (READ)
// 00497df8: MOV ECX,dword ptr [0x006703e8]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703e8 (READ)
// 00497dfe: XOR EBX,EBX
// 00497e00: MOV EDX,0x3
// 00497e05: MOV EAX,0x2
// 00497e0a: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0xbc] (WRITE)
// 00497e0e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 00497e12: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0xb0] (WRITE)
// 00497e16: MOV EAX,ESP
// 00497e18: MOV EBX,0x1
// 00497e1d: PUSH EAX
// 00497e1e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00497e23: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00497e24: FISTP dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc0] (WRITE)
// 00497e28: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0xb8] (WRITE)
// 00497e2c: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 00497e31: ADD ESP,0x8
// 00497e34: TEST EAX,EAX
// 00497e36: JNZ 0x00497a50
//   XREF to: 00497a50 (CONDITIONAL_JUMP)
// 00497e3c: ADD ESP,0xc4
// 00497e42: POP EBP
// 00497e43: POP EDI
// 00497e44: POP ESI
// 00497e45: POP EBX
// 00497e46: RET
