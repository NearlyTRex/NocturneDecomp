// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
// Address: 005e9e70
// Address Range: [[005e9e70, 005e9ecf] [005e9ed1, 005ea31e]]
// Convention: __cdecl
// Signature: int core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a3b6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_water_cpp_006571c7
//   TerminatedCString s_Too_many_visible_water_t_006571d9
//   TerminatedCString s_Vis_water_tiles_d_SqFt_f_006571f7
//   double DOUBLE_00657217 = 0.5
//   double DOUBLE_0065721f = 1.10000000000000
//   float FLOAT_006652cc = 256
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_RenderPixelBudget = 0x1
//   undefined4 g_RenderVertexBuffer[0].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[1].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[2].projected_vertex.screen_x
//   undefined4 g_RenderVertexBuffer[3].projected_vertex.screen_x
//   CConsole g_ConsolePtr
//   CDemonRenderer g_CDemonRendererInstance
//   uchar[32768] g_ColorCubeLookup
//   undefined4 UCHAR_ARRAY_02cf9441
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonRaytrace g_CDemonRaytraceInstance
//   undefined4 DAT_03f875f0
//   undefined4 DAT_03f875f4
//   undefined4 DAT_03f875f8
//   int g_VisibleWaterTileCount
//   int[4096] g_VisibleWaterTilesX
//   int[4096] g_VisibleWaterTilesY
//   undefined1 DAT_03f8f608
//   undefined1 DAT_03f8f609
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
//   core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater *this_ptr)

{
  int iVar1;
  int iVar2;
  CVector3f *pCVar4;
  float fVar5;
  uint uVar6;
  int extraout_EAX;
  int iVar7;
  undefined4 extraout_EDX;
  int iVar8;
  BADSPACEBASE *in_ESP;
  float10 fVar9;
  CVector3f local_88;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  CVector3i local_6c;
  int local_60;
  int local_5c;
  undefined1 local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  CVector3i local_20;
  int iVar3;
  
  iVar7 = 0;
  iVar8 = 0;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    iVar1 = iVar8 + iVar7;
    iVar7 = iVar7 + 0x20;
    iVar8 = iVar8 + 0x400;
    (&DAT_03f8f608)[iVar3] = *(undefined1 *)(iVar1 + 0x2cf901f + iVar2);
    iVar3 = iVar2;
  } while (iVar2 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) == 0.0) {
    return iVar2;
  }
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
            (&g_CDemonRaytraceInstance,(CVector3f *)(local_4c + 8));
  pCVar4 = core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
                     (&g_CDemonRaytraceInstance,&local_88);
  fVar5 = (float)DOUBLE_00657217;
  _DAT_03f875f0 = (local_3c + local_88.y) * fVar5;
  _DAT_03f875f8 = (local_34 + local_7c) * fVar5;
  local_20.x = (int)((local_88.y - local_3c) * fVar5 * (float)DOUBLE_0065721f);
  _DAT_03f875f4 = 0.0;
  local_20.z = 0;
  fVar5 = (float)((uint)CONCAT21((short)((uint)pCVar4 >> 0x10),0.0 < (float)local_20.x) << 8);
  if (0.0 < (float)local_20.x) {
    fVar5 = (float)local_20.x;
    local_20.z = local_20.x;
  }
  local_20.y = (int)(local_88.z - local_38);
  fVar5 = (float)((uint)fVar5 & 0xffff0000);
  if ((float)local_20.z < (float)local_20.y) {
    fVar5 = (float)local_20.y;
    local_20.z = local_20.y;
  }
  local_24 = (local_7c - local_34) * (float)DOUBLE_00657217 * (float)DOUBLE_0065721f;
  fVar5 = (float)CONCAT22((short)((uint)fVar5 >> 0x10),
                          (ushort)(local_24 < (float)local_20.z) << 8 |
                          (ushort)(NAN(local_24) || NAN((float)local_20.z)) << 10 |
                          (ushort)(local_24 == (float)local_20.z) << 0xe);
  if (local_24 >= (float)local_20.z && (local_24 == (float)local_20.z) == 0) {
    fVar5 = local_24;
    local_20.z = (int)local_24;
  }
  fVar9 = (float10)1 + (float10)(float)local_20.z / (float10)this_ptr->tile_size;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,fVar5));
  iVar3 = (int)ROUND(fVar9);
  g_VisibleWaterTileCount = 0;
  iVar7 = -iVar3;
  if (SBORROW4(iVar7,iVar3) != iVar3 * -2 < 0) {
    do {
      for (iVar8 = -iVar3; iVar8 < iVar3; iVar8 = iVar8 + 1) {
        local_4c._8_4_ = (float)iVar7 * this_ptr->tile_size + _DAT_03f875f0;
        local_40 = this_ptr->water_level_y + _DAT_03f875f4;
        local_3c = (float)iVar8 * this_ptr->tile_size + _DAT_03f875f8;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)(local_4c + 8));
        local_6c.z = (int)ROUND(local_40 * FLOAT_006652cc);
        local_60 = (int)ROUND(local_3c * FLOAT_006652cc);
        local_5c = (int)ROUND(local_38 * FLOAT_006652cc);
        local_40 = 0.0;
        local_3c = 0.0;
        local_38 = 0.0;
        local_4c._0_4_ = (undefined4)ROUND(FLOAT_006652cc * 0.0);
        local_4c._4_4_ = (undefined4)ROUND(FLOAT_006652cc * 0.0);
        local_4c._8_4_ = (undefined4)ROUND(FLOAT_006652cc * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_4c);
        local_3c = this_ptr->tile_size;
        local_6c.x = (int)ROUND(local_3c * FLOAT_006652cc);
        local_6c.y = (int)ROUND(local_38 * FLOAT_006652cc);
        local_6c.z = (int)ROUND(local_34 * FLOAT_006652cc);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_6c);
        local_30 = this_ptr->tile_size;
        local_20.x = (int)ROUND(local_38 * FLOAT_006652cc);
        local_20.y = (int)ROUND(local_34 * FLOAT_006652cc);
        local_20.z = (int)ROUND(local_30 * FLOAT_006652cc);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_20);
        local_34 = 0.0;
        local_4c._0_4_ = (undefined4)ROUND(FLOAT_006652cc * 0.0);
        local_4c._4_4_ = (undefined4)ROUND(local_30 * FLOAT_006652cc);
        local_4c._8_4_ = (undefined4)ROUND(local_2c * FLOAT_006652cc);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_4c
                  );
        iVar1 = g_RenderPixelBudget;
        uVar6 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
                g_RenderVertexBuffer[1].projected_vertex.screen_x &
                g_RenderVertexBuffer[2].projected_vertex.screen_x &
                g_RenderVertexBuffer[3].projected_vertex.screen_x;
        if (((uVar6 & 0x80000000) == 0) || ((char)uVar6 == '\0')) {
          local_88.z = 0.0;
          local_88.y = 0.0;
          local_88.x = 0.0;
          local_7c = 0.0;
          local_70 = 3;
          g_RenderPixelBudget = 0x10;
          local_78 = 1;
          local_74 = 2;
          iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff58);
          if (iVar2 != 0) {
            if (0xfff < g_VisibleWaterTileCount) {
              g_CurrentFilename = "..\\core\\water.cpp";
              g_CurrentLineNumber = 0x136;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Too many visible water tiles!");
            }
            g_VisibleWaterTilesX[g_VisibleWaterTileCount] = iVar7;
            g_VisibleWaterTilesY[g_VisibleWaterTileCount] = iVar8;
            g_VisibleWaterTileCount = g_VisibleWaterTileCount + 1;
          }
        }
        g_RenderPixelBudget = iVar1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  iVar3 = g_VisibleWaterTileCount;
  fVar5 = (float)g_VisibleWaterTileCount * this_ptr->tile_size * this_ptr->tile_size;
  this_ptr->visible_area_sqft = fVar5;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Vis water tiles : %d, SqFt : %f",iVar3,(double)fVar5);
  return extraout_EAX;
}


// Assembly code:
// 005e9e70: PUSH EBX
//   Label: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
// 005e9e71: PUSH ESI
// 005e9e72: PUSH EDI
// 005e9e73: PUSH EBP
// 005e9e74: SUB ESP,0xa4
// 005e9e7a: MOV EDI,dword ptr [ESP + 0xb8]
//   XREF to: Stack[0x4] (READ)
// 005e9e81: XOR EDX,EDX
// 005e9e83: XOR EBX,EBX
// 005e9e85: XOR EAX,EAX
// 005e9e87: INC EAX
//   Label: LAB_005e9e87
// 005e9e88: LEA ESI,[EBX + EDX*0x1]
// 005e9e8b: ADD EDX,0x20
// 005e9e8e: MOV CL,byte ptr [ESI + EAX*0x1 + 0x2cf901f]
//   XREF to: 02cf9020 (READ)
//   XREF to: 02cf9441 (READ)
// 005e9e95: ADD EBX,0x400
// 005e9e9b: MOV byte ptr [EAX + 0x3f8f607],CL
//   XREF to: 03f8f608 (WRITE)
//   XREF to: 03f8f609 (WRITE)
// 005e9ea1: CMP EAX,0x20
// 005e9ea4: JL 0x005e9e87
//   XREF to: 005e9e87 (CONDITIONAL_JUMP)
// 005e9ea6: MOV EDX,dword ptr [EDI + 0x4]
// 005e9ea9: MOV dword ptr [EDI + 0xc],0x0
// 005e9eb0: TEST EDX,0x7fffffff
// 005e9eb6: JNZ 0x005e9ed1
//   XREF to: 005e9ed1 (CONDITIONAL_JUMP)
// 005e9eb8: ADD ESP,0xa4
// 005e9ebe: POP EBP
// 005e9ebf: POP EDI
// 005e9ec0: POP ESI
// 005e9ec1: POP EBX
// 005e9ed1: LEA EAX,[ESP + 0x70]
//   Label: LAB_005e9ed1
//   XREF to: Stack[-0x44] (DATA)
// 005e9ed5: PUSH EAX
// 005e9ed6: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005e9edb: CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
//   XREF to: 00499b40 (UNCONDITIONAL_CALL)
// 005e9ee0: ADD ESP,0x8
// 005e9ee3: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x8c] (DATA)
// 005e9ee7: PUSH EAX
// 005e9ee8: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005e9eed: CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
//   XREF to: 00499b70 (UNCONDITIONAL_CALL)
// 005e9ef2: ADD ESP,0x8
// 005e9ef5: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x44] (READ)
// 005e9ef9: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x8c] (READ)
// 005e9efd: FLD double ptr [0x00657217]
//   XREF to: 00657217 (READ)
// 005e9f03: FXCH
// 005e9f05: FMUL ST1
// 005e9f07: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0x3c] (READ)
// 005e9f0b: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x8c] (READ)
// 005e9f0f: FSUB float ptr [ESP + 0x70]
//   XREF to: Stack[-0x44] (READ)
// 005e9f13: FXCH
// 005e9f15: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x84] (READ)
// 005e9f19: FXCH
// 005e9f1b: FMUL ST3
// 005e9f1d: FXCH
// 005e9f1f: FMULP ST3
// 005e9f21: FMUL double ptr [0x0065721f]
//   XREF to: 0065721f (READ)
// 005e9f27: XOR ECX,ECX
// 005e9f29: FLDZ
// 005e9f2b: MOV dword ptr [0x03f875f4],ECX
//   XREF to: 03f875f4 (WRITE)
// 005e9f31: MOV dword ptr [ESP + 0x94],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005e9f38: FXCH ST2
// 005e9f3a: FSTP float ptr [0x03f875f0]
//   XREF to: 03f875f0 (WRITE)
// 005e9f40: FXCH ST2
// 005e9f42: FSTP float ptr [0x03f875f8]
//   XREF to: 03f875f8 (WRITE)
// 005e9f48: FXCH
// 005e9f4a: FSTP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x28] (WRITE)
// 005e9f51: FCOMP float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x28] (READ)
// 005e9f58: FNSTSW AX
// 005e9f5a: SAHF
// 005e9f5b: JNC 0x005e9f6b
//   XREF to: 005e9f6b (CONDITIONAL_JUMP)
// 005e9f5d: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x28] (READ)
// 005e9f64: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e9f6b: FLD float ptr [ESP + 0x2c]
//   Label: LAB_005e9f6b
//   XREF to: Stack[-0x88] (READ)
// 005e9f6f: FSUB float ptr [ESP + 0x74]
//   XREF to: Stack[-0x40] (READ)
// 005e9f73: FST float ptr [ESP + 0x90]
//   XREF to: Stack[-0x24] (WRITE)
// 005e9f7a: FCOMP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x20] (READ)
// 005e9f81: FNSTSW AX
// 005e9f83: SAHF
// 005e9f84: JBE 0x005e9f94
//   XREF to: 005e9f94 (CONDITIONAL_JUMP)
// 005e9f86: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x24] (READ)
// 005e9f8d: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e9f94: FLD float ptr [ESP + 0x30]
//   Label: LAB_005e9f94
//   XREF to: Stack[-0x84] (READ)
// 005e9f98: FSUB float ptr [ESP + 0x78]
//   XREF to: Stack[-0x3c] (READ)
// 005e9f9c: FMUL double ptr [0x00657217]
//   XREF to: 00657217 (READ)
// 005e9fa2: FMUL double ptr [0x0065721f]
//   XREF to: 0065721f (READ)
// 005e9fa8: FST float ptr [ESP + 0x88]
//   XREF to: Stack[-0x2c] (WRITE)
// 005e9faf: FCOMP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x20] (READ)
// 005e9fb6: FNSTSW AX
// 005e9fb8: SAHF
// 005e9fb9: JBE 0x005e9fc9
//   XREF to: 005e9fc9 (CONDITIONAL_JUMP)
// 005e9fbb: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x2c] (READ)
// 005e9fc2: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e9fc9: FLD float ptr [ESP + 0x94]
//   Label: LAB_005e9fc9
//   XREF to: Stack[-0x20] (READ)
// 005e9fd0: FDIV float ptr [EDI + 0x8]
// 005e9fd3: FLD1
// 005e9fd5: FADDP
// 005e9fd7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e9fdc: FISTP dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x18] (WRITE)
// 005e9fe3: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x18] (READ)
// 005e9fea: XOR ESI,ESI
// 005e9fec: MOV EBP,EAX
// 005e9fee: MOV dword ptr [0x03f87604],ESI
//   XREF to: 03f87604 (WRITE)
// 005e9ff4: NEG EBP
// 005e9ff6: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005e9ffd: CMP EBP,EAX
// 005e9fff: JGE 0x005ea22f
//   XREF to: 005ea22f (CONDITIONAL_JUMP)
// 005ea005: MOV ESI,dword ptr [ESP + 0x9c]
//   Label: LAB_005ea005
//   XREF to: Stack[-0x18] (READ)
// 005ea00c: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x18] (READ)
// 005ea013: NEG ESI
// 005ea015: CMP ESI,EAX
// 005ea017: JGE 0x005ea21f
//   XREF to: 005ea21f (CONDITIONAL_JUMP)
// 005ea01d: MOV dword ptr [ESP + 0xa0],EBP
//   Label: LAB_005ea01d
//   XREF to: Stack[-0x14] (WRITE)
// 005ea024: FILD dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x14] (READ)
// 005ea02b: FMUL float ptr [EDI + 0x8]
// 005ea02e: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x50] (WRITE)
// 005ea032: MOV EAX,dword ptr [EDI + 0x4]
// 005ea035: MOV dword ptr [ESP + 0xa0],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005ea03c: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005ea040: FILD dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x14] (READ)
// 005ea047: FMUL float ptr [EDI + 0x8]
// 005ea04a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea050: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x50] (READ)
// 005ea054: FADD float ptr [0x03f875f0]
//   XREF to: 03f875f0 (READ)
// 005ea05a: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x4c] (READ)
// 005ea05e: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x50] (DATA)
// 005ea062: FXCH ST2
// 005ea064: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x48] (WRITE)
// 005ea068: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x50] (WRITE)
// 005ea06c: PUSH EAX
// 005ea06d: FADD float ptr [0x03f875f4]
//   XREF to: 03f875f4 (READ)
// 005ea073: FLD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x48] (READ)
// 005ea077: FXCH
// 005ea079: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x4c] (WRITE)
// 005ea07d: FADD float ptr [0x03f875f8]
//   XREF to: 03f875f8 (READ)
// 005ea083: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005ea084: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x48] (WRITE)
// 005ea088: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005ea08d: ADD ESP,0x8
// 005ea090: LEA EBX,[ESP + 0x40]
//   XREF to: Stack[-0x74] (DATA)
// 005ea094: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x50] (DATA)
// 005ea098: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 005ea09a: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea0a0: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x74] (DATA)
// 005ea0a2: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 005ea0a5: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea0ab: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x70] (WRITE)
// 005ea0ae: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 005ea0b1: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea0b7: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x6c] (WRITE)
// 005ea0ba: XOR EBX,EBX
// 005ea0bc: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x50] (DATA)
// 005ea0c0: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 005ea0c4: MOV dword ptr [ESP + 0x68],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 005ea0c8: MOV dword ptr [ESP + 0x6c],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 005ea0cc: LEA EBX,[ESP + 0x58]
//   XREF to: Stack[-0x5c] (DATA)
// 005ea0d0: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea0d6: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 005ea0d8: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea0de: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x5c] (DATA)
// 005ea0e0: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 005ea0e3: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea0e9: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x58] (WRITE)
// 005ea0ec: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 005ea0ef: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea0f5: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x54] (WRITE)
// 005ea0f8: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x5c] (DATA)
// 005ea0fc: PUSH EAX
// 005ea0fd: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ea0ff: PUSH EAX
// 005ea100: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ea105: ADD ESP,0x8
// 005ea108: MOV EAX,dword ptr [EDI + 0x8]
// 005ea10b: LEA EBX,[ESP + 0x34]
//   XREF to: Stack[-0x80] (DATA)
// 005ea10f: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 005ea113: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x50] (DATA)
// 005ea117: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea11d: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 005ea11f: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea125: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x80] (DATA)
// 005ea127: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 005ea12a: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea130: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x7c] (WRITE)
// 005ea133: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 005ea136: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea13c: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x78] (WRITE)
// 005ea13f: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x80] (DATA)
// 005ea143: PUSH EAX
// 005ea144: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ea146: ADD EAX,0x30
// 005ea149: PUSH EAX
// 005ea14a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ea14f: ADD ESP,0x8
// 005ea152: MOV EAX,dword ptr [EDI + 0x8]
// 005ea155: LEA EBX,[ESP + 0x7c]
//   XREF to: Stack[-0x38] (DATA)
// 005ea159: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005ea15d: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x50] (DATA)
// 005ea161: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea167: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 005ea169: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea16f: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x38] (DATA)
// 005ea171: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 005ea174: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea17a: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x34] (WRITE)
// 005ea17d: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 005ea180: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea186: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 005ea189: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x38] (DATA)
// 005ea18d: PUSH EAX
// 005ea18e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ea190: ADD EAX,0x60
// 005ea193: PUSH EAX
// 005ea194: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ea199: LEA EBX,[ESP + 0x54]
//   XREF to: Stack[-0x68] (DATA)
// 005ea19d: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x50] (DATA)
// 005ea1a1: ADD ESP,0x8
// 005ea1a4: XOR ECX,ECX
// 005ea1a6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea1ac: MOV dword ptr [ESP + 0x64],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 005ea1b0: FLD float ptr [EAX]
//   XREF to: Stack[-0x50] (DATA)
// 005ea1b2: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea1b8: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x68] (DATA)
// 005ea1ba: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x4c] (READ)
// 005ea1bd: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea1c3: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x64] (WRITE)
// 005ea1c6: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x48] (READ)
// 005ea1c9: FMUL float ptr [0x006652cc]
//   XREF to: 006652cc (READ)
// 005ea1cf: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x60] (WRITE)
// 005ea1d2: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x68] (DATA)
// 005ea1d6: PUSH EAX
// 005ea1d7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ea1d9: ADD EAX,0x90
// 005ea1de: PUSH EAX
// 005ea1df: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ea1e4: MOV EAX,[0x00688024]
//   XREF to: 00688024 (READ)
// 005ea1e9: MOV EBX,dword ptr [0x00688054]
//   XREF to: 00688054 (READ)
// 005ea1ef: MOV EDX,dword ptr [0x00688084]
//   XREF to: 00688084 (READ)
// 005ea1f5: AND EAX,EBX
// 005ea1f7: MOV ECX,dword ptr [0x006880b4]
//   XREF to: 006880b4 (READ)
// 005ea1fd: AND EAX,EDX
// 005ea1ff: AND EAX,ECX
// 005ea201: ADD ESP,0x8
// 005ea204: TEST EAX,0x80000000
// 005ea209: JZ 0x005ea26a
//   XREF to: 005ea26a (CONDITIONAL_JUMP)
// 005ea20b: TEST AL,0xff
// 005ea20d: JZ 0x005ea26a
//   XREF to: 005ea26a (CONDITIONAL_JUMP)
// 005ea20f: MOV EDX,dword ptr [ESP + 0x9c]
//   Label: LAB_005ea20f
//   XREF to: Stack[-0x18] (READ)
// 005ea216: INC ESI
// 005ea217: CMP ESI,EDX
// 005ea219: JL 0x005ea01d
//   XREF to: 005ea01d (CONDITIONAL_JUMP)
// 005ea21f: MOV EDX,dword ptr [ESP + 0x98]
//   Label: LAB_005ea21f
//   XREF to: Stack[-0x1c] (READ)
// 005ea226: INC EBP
// 005ea227: CMP EBP,EDX
// 005ea229: JL 0x005ea005
//   XREF to: 005ea005 (CONDITIONAL_JUMP)
// 005ea22f: FILD dword ptr [0x03f87604]
//   Label: LAB_005ea22f
//   XREF to: 03f87604 (READ)
// 005ea235: FMUL float ptr [EDI + 0x8]
// 005ea238: FMUL float ptr [EDI + 0x8]
// 005ea23b: SUB ESP,0x8
// 005ea23e: MOV ECX,dword ptr [0x03f87604]
//   XREF to: 03f87604 (READ)
// 005ea244: FST float ptr [EDI + 0xc]
// 005ea247: FSTP double ptr [ESP]
//   XREF to: Stack[-0xbc] (DATA)
// 005ea24a: PUSH ECX
// 005ea24b: PUSH 0x6571f7
//   XREF to: 006571f7 (DATA)
// 005ea250: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005ea256: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005ea257: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005ea25c: ADD ESP,0x14
// 005ea25f: ADD ESP,0xa4
// 005ea265: POP EBP
// 005ea266: POP EDI
// 005ea267: POP ESI
// 005ea268: POP EBX
// 005ea269: RET
// 005ea26a: MOV EBX,0x4
//   Label: LAB_005ea26a
// 005ea26f: MOV EDX,0x1
// 005ea274: XOR EAX,EAX
// 005ea276: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0xb0] (WRITE)
// 005ea27a: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 005ea27e: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005ea282: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005ea286: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005ea28a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005ea28e: MOV EBX,0x3
// 005ea293: MOV EAX,0x10
// 005ea298: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x90] (WRITE)
// 005ea29c: MOV EBX,dword ptr [0x006703f0]
//   XREF to: 006703f0 (READ)
// 005ea2a2: MOV [0x006703f0],EAX
//   XREF to: 006703f0 (WRITE)
// 005ea2a7: MOV EAX,ESP
// 005ea2a9: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x98] (WRITE)
// 005ea2ad: PUSH EAX
// 005ea2ae: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005ea2b4: MOV ECX,0x2
// 005ea2b9: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005ea2ba: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x94] (WRITE)
// 005ea2be: CALL engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
//   XREF to: 0048ab50 (UNCONDITIONAL_CALL)
// 005ea2c3: ADD ESP,0x8
// 005ea2c6: TEST EAX,EAX
// 005ea2c8: JZ 0x005ea314
//   XREF to: 005ea314 (CONDITIONAL_JUMP)
// 005ea2ca: CMP dword ptr [0x03f87604],0x1000
//   XREF to: 03f87604 (READ)
// 005ea2d4: JL 0x005ea2f8
//   XREF to: 005ea2f8 (CONDITIONAL_JUMP)
// 005ea2d6: MOV EAX,0x6571c7
//   XREF to: 006571c7 (PARAM)
// 005ea2db: MOV EDX,0x136
// 005ea2e0: PUSH 0x6571d9
//   XREF to: 006571d9 (DATA)
// 005ea2e5: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005ea2ea: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005ea2f0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ea2f5: ADD ESP,0x4
// 005ea2f8: MOV EAX,[0x03f87604]
//   Label: LAB_005ea2f8
//   XREF to: 03f87604 (READ)
// 005ea2fd: LEA ECX,[EAX + 0x1]
// 005ea300: MOV dword ptr [EAX*0x4 + 0x3f87608],EBP
//   XREF to: 03f87608 (WRITE)
// 005ea307: MOV dword ptr [EAX*0x4 + 0x3f8b608],ESI
//   XREF to: 03f8b608 (WRITE)
// 005ea30e: MOV dword ptr [0x03f87604],ECX
//   XREF to: 03f87604 (WRITE)
// 005ea314: MOV dword ptr [0x006703f0],EBX
//   Label: LAB_005ea314
//   XREF to: 006703f0 (WRITE)
// 005ea31a: JMP 0x005ea20f
//   XREF to: 005ea20f (UNCONDITIONAL_JUMP)
