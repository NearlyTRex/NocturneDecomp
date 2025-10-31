// Name: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
// Address: 00496e70
// Address Range: [[00496e70, 004973a5]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70(CDemonRaytrace * this_ptr, CVector3f * world_pos)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_004973b0 (004973b0) at 004974b1 [UNCONDITIONAL_CALL]
// Globals:
//   float g_RaytraceDebugCubeSizeScaleX = 8
//   float g_RaytraceDebugCubeSizeScaleYZ = 0.125
//   float g_RaytraceWorldToScreenScale = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3f g_DebugCubeBasePoint
// Function calls:
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
//   engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
          (CDemonRaytrace *this_ptr,CVector3f *world_pos)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  CVector3i local_84;
  undefined4 local_78;
  undefined1 local_74 [12];
  float local_68;
  float local_64;
  float local_60;
  CVector3i local_5c;
  float local_50;
  CVector3i local_4c;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  CVector3i local_2c;
  CVector3i local_1c;
  
  local_1c.x = (int)((this_ptr->cell_size).x / g_RaytraceDebugCubeSizeScaleX);
  local_1c.y = (int)((this_ptr->cell_size).y * g_RaytraceDebugCubeSizeScaleYZ);
  local_1c.z = (int)(g_RaytraceDebugCubeSizeScaleYZ * (this_ptr->cell_size).z);
  if (&local_4c != &local_1c) {
    local_4c.x = local_1c.x;
    local_4c.y = local_1c.y;
    local_4c.z = local_1c.z;
  }
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
            (g_CDemonRendererPtr,&g_DebugCubeBasePoint);
  local_84.x = (int)ROUND(world_pos->y * g_RaytraceWorldToScreenScale);
  local_84.y = (int)ROUND(world_pos->z * g_RaytraceWorldToScreenScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_84);
  local_68 = world_pos->x + (float)local_4c.z;
  local_64 = world_pos->y;
  local_60 = world_pos->z;
  local_5c.x = (int)ROUND(local_68 * g_RaytraceWorldToScreenScale);
  local_5c.y = (int)ROUND(local_64 * g_RaytraceWorldToScreenScale);
  local_5c.z = (int)ROUND(local_60 * g_RaytraceWorldToScreenScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_5c);
  local_64 = world_pos->x + local_40;
  local_60 = world_pos->y;
  local_5c.x = (int)(world_pos->z + local_38);
  local_4c.x = (int)ROUND(local_64 * g_RaytraceWorldToScreenScale);
  local_4c.y = (int)ROUND(local_60 * g_RaytraceWorldToScreenScale);
  local_4c.z = (int)ROUND((float)local_5c.x * g_RaytraceWorldToScreenScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_4c);
  local_60 = world_pos->x;
  local_5c.x = (int)world_pos->y;
  local_5c.y = (int)(world_pos->z + local_34);
  local_74._8_4_ = (undefined4)ROUND(local_60 * g_RaytraceWorldToScreenScale);
  local_68 = (float)(int)ROUND((float)local_5c.x * g_RaytraceWorldToScreenScale);
  local_64 = (float)(int)ROUND((float)local_5c.y * g_RaytraceWorldToScreenScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)(local_74 + 8)
            );
  local_5c.x = (int)world_pos->x;
  local_5c.y = (int)(world_pos->y + local_34);
  local_5c.z = (int)world_pos->z;
  local_2c.x = (int)ROUND((float)local_5c.x * g_RaytraceWorldToScreenScale);
  local_2c.y = (int)ROUND((float)local_5c.y * g_RaytraceWorldToScreenScale);
  local_2c.z = (int)ROUND((float)local_5c.z * g_RaytraceWorldToScreenScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,&local_2c);
  local_5c.y = (int)(world_pos->x + local_34);
  local_5c.z = (int)(world_pos->y + local_30);
  local_50 = world_pos->z;
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,
             (CVector3i *)&stack0xfffffff0);
  local_5c.z = (int)(world_pos->x + local_30);
  local_50 = world_pos->y + (float)local_2c.x;
  local_4c.x = (int)(world_pos->z + (float)local_2c.y);
  local_1c.y = (int)ROUND((float)local_5c.z * g_RaytraceWorldToScreenScale);
  local_1c.z = (int)ROUND(local_50 * g_RaytraceWorldToScreenScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,(CVector3i *)&local_1c.y);
  local_50 = world_pos->x;
  local_4c.x = (int)(world_pos->y + (float)local_2c.y);
  local_4c.y = (int)(world_pos->z + (float)local_2c.z);
  local_74._0_4_ = (undefined4)ROUND(local_50 * g_RaytraceWorldToScreenScale);
  local_74._4_4_ = (undefined4)ROUND((float)local_4c.x * g_RaytraceWorldToScreenScale);
  local_74._8_4_ = (undefined4)ROUND((float)local_4c.y * g_RaytraceWorldToScreenScale);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,(CVector3i *)local_74);
  uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
            (g_CDemonRendererPtr,uVar1 & 0xff);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  local_74._4_4_ = 0;
  local_84.z = 1;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff54);
  local_74._8_4_ = 2;
  local_78 = 3;
  local_84.x = 7;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff58);
  local_84.y = 7;
  local_68 = 0.0;
  local_74._0_4_ = 4;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff5c);
  local_64 = 1.4013e-45;
  local_74._4_4_ = 2;
  local_84.z = 6;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff60);
  local_78 = 6;
  local_60 = 5.60519e-45;
  local_74._8_4_ = 5;
  local_84.x = 7;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff64);
  local_68 = 2.8026e-45;
  local_74._0_4_ = 1;
  local_5c.x = 3;
  local_84.y = 0;
  engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff68);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 00496e70: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70
// 00496e71: PUSH ESI
// 00496e72: PUSH EDI
// 00496e73: PUSH EBP
// 00496e74: SUB ESP,0xcc
// 00496e7a: MOV ESI,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x8] (READ)
// 00496e81: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x4] (READ)
// 00496e88: FLD float ptr [EAX + 0x28]
// 00496e8b: FDIV float ptr [0x00622b7a]
//   XREF to: 00622b7a (READ)
// 00496e91: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x1c] (WRITE)
// 00496e98: FLD float ptr [0x00622b7e]
//   XREF to: 00622b7e (READ)
// 00496e9e: FLD float ptr [EAX + 0x2c]
// 00496ea1: FMUL ST1
// 00496ea3: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x18] (WRITE)
// 00496eaa: FMUL float ptr [EAX + 0x30]
// 00496ead: LEA EDX,[ESP + 0x90]
//   XREF to: Stack[-0x4c] (DATA)
// 00496eb4: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x1c] (DATA)
// 00496ebb: FSTP float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (WRITE)
// 00496ec2: CMP EDX,EAX
// 00496ec4: JZ 0x00496ef0
//   XREF to: 00496ef0 (CONDITIONAL_JUMP)
// 00496ec6: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x1c] (DATA)
// 00496ecd: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00496ed4: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x18] (READ)
// 00496edb: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00496ee2: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x14] (READ)
// 00496ee9: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00496ef0: PUSH 0x2cee5b0
//   Label: LAB_00496ef0
//   XREF to: 02cee5b0 (DATA)
// 00496ef5: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 00496efb: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00496efc: LEA EBX,[ESP + 0x5c]
//   XREF to: Stack[-0x88] (DATA)
// 00496f00: CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0048c420
//   XREF to: 0048c420 (UNCONDITIONAL_CALL)
// 00496f05: ADD ESP,0x8
// 00496f08: MOV EAX,ESI
// 00496f0a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00496f10: FLD float ptr [EAX]
// 00496f12: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496f18: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x88] (DATA)
// 00496f1a: FLD float ptr [EAX + 0x4]
// 00496f1d: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496f23: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x84] (WRITE)
// 00496f26: FLD float ptr [EAX + 0x8]
// 00496f29: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496f2f: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x80] (WRITE)
// 00496f32: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x88] (DATA)
// 00496f36: PUSH EAX
// 00496f37: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00496f39: PUSH EAX
// 00496f3a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00496f3f: ADD ESP,0x8
// 00496f42: FLD float ptr [ESI]
// 00496f44: FADD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x4c] (READ)
// 00496f4b: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x70] (WRITE)
// 00496f4f: MOV EAX,dword ptr [ESI + 0x4]
// 00496f52: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00496f56: MOV EAX,dword ptr [ESI + 0x8]
// 00496f59: LEA EBX,[ESP + 0x78]
//   XREF to: Stack[-0x64] (DATA)
// 00496f5d: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00496f61: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 00496f65: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00496f6b: FLD float ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 00496f6d: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496f73: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x64] (DATA)
// 00496f75: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 00496f78: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496f7e: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x60] (WRITE)
// 00496f81: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 00496f84: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496f8a: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x5c] (WRITE)
// 00496f8d: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0x64] (DATA)
// 00496f91: PUSH EAX
// 00496f92: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00496f94: ADD EAX,0x30
// 00496f97: PUSH EAX
// 00496f98: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00496f9d: ADD ESP,0x8
// 00496fa0: FLD float ptr [ESI]
// 00496fa2: FADD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x4c] (READ)
// 00496fa9: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x70] (WRITE)
// 00496fad: MOV EAX,dword ptr [ESI + 0x4]
// 00496fb0: LEA EBX,[ESP + 0x84]
//   XREF to: Stack[-0x58] (DATA)
// 00496fb7: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00496fbb: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00496fc1: FLD float ptr [ESI + 0x8]
// 00496fc4: FADD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x44] (READ)
// 00496fcb: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 00496fcf: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x68] (WRITE)
// 00496fd3: FLD float ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 00496fd5: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496fdb: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x58] (DATA)
// 00496fdd: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 00496fe0: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496fe6: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x54] (WRITE)
// 00496fe9: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 00496fec: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00496ff2: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 00496ff5: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x58] (DATA)
// 00496ffc: PUSH EAX
// 00496ffd: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00496fff: ADD EAX,0x60
// 00497002: PUSH EAX
// 00497003: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00497008: ADD ESP,0x8
// 0049700b: MOV EAX,dword ptr [ESI]
// 0049700d: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00497011: MOV EAX,dword ptr [ESI + 0x4]
// 00497014: LEA EBX,[ESP + 0x60]
//   XREF to: Stack[-0x7c] (DATA)
// 00497018: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0049701c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497022: FLD float ptr [ESI + 0x8]
// 00497025: FADD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x44] (READ)
// 0049702c: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 00497030: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x68] (WRITE)
// 00497034: FLD float ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 00497036: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 0049703c: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x7c] (DATA)
// 0049703e: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 00497041: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497047: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x78] (WRITE)
// 0049704a: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 0049704d: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497053: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x74] (WRITE)
// 00497056: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x7c] (DATA)
// 0049705a: PUSH EAX
// 0049705b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049705d: ADD EAX,0x90
// 00497062: PUSH EAX
// 00497063: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00497068: ADD ESP,0x8
// 0049706b: MOV EAX,dword ptr [ESI]
// 0049706d: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00497071: FLD float ptr [ESI + 0x4]
// 00497074: FADD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x48] (READ)
// 0049707b: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x6c] (WRITE)
// 0049707f: MOV EAX,dword ptr [ESI + 0x8]
// 00497082: LEA EBX,[ESP + 0x9c]
//   XREF to: Stack[-0x40] (DATA)
// 00497089: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0049708d: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 00497091: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497097: FLD float ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 00497099: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 0049709f: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x40] (DATA)
// 004970a1: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 004970a4: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004970aa: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 004970ad: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 004970b0: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004970b6: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 004970b9: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x40] (DATA)
// 004970c0: PUSH EAX
// 004970c1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004970c3: ADD EAX,0xc0
// 004970c8: PUSH EAX
// 004970c9: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004970ce: ADD ESP,0x8
// 004970d1: FLD float ptr [ESI]
// 004970d3: FADD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x4c] (READ)
// 004970da: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x70] (WRITE)
// 004970de: FLD float ptr [ESI + 0x4]
// 004970e1: FADD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x48] (READ)
// 004970e8: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x6c] (WRITE)
// 004970ec: MOV EAX,dword ptr [ESI + 0x8]
// 004970ef: LEA EBX,[ESP + 0xb4]
//   XREF to: Stack[-0x28] (DATA)
// 004970f6: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004970fa: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 004970fe: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497104: FLD float ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 00497106: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 0049710c: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x28] (DATA)
// 0049710e: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 00497111: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497117: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 0049711a: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 0049711d: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497123: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 00497126: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x28] (DATA)
// 0049712d: PUSH EAX
// 0049712e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00497130: ADD EAX,0xf0
// 00497135: PUSH EAX
// 00497136: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0049713b: ADD ESP,0x8
// 0049713e: FLD float ptr [ESI]
// 00497140: FADD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x4c] (READ)
// 00497147: LEA EBX,[ESP + 0xa8]
//   XREF to: Stack[-0x34] (DATA)
// 0049714e: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x70] (WRITE)
// 00497152: FLD float ptr [ESI + 0x4]
// 00497155: FADD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x48] (READ)
// 0049715c: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 00497160: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x6c] (WRITE)
// 00497164: FLD float ptr [ESI + 0x8]
// 00497167: FADD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x44] (READ)
// 0049716e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497174: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x68] (WRITE)
// 00497178: FLD float ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 0049717a: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497180: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x34] (DATA)
// 00497182: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 00497185: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 0049718b: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x30] (WRITE)
// 0049718e: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 00497191: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497197: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x2c] (WRITE)
// 0049719a: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x34] (DATA)
// 004971a1: PUSH EAX
// 004971a2: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004971a4: ADD EAX,0x120
// 004971a9: PUSH EAX
// 004971aa: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004971af: ADD ESP,0x8
// 004971b2: MOV EAX,dword ptr [ESI]
// 004971b4: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004971b8: LEA EBX,[ESP + 0x48]
//   XREF to: Stack[-0x94] (DATA)
// 004971bc: FLD float ptr [ESI + 0x4]
// 004971bf: FADD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x48] (READ)
// 004971c6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004971cc: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x6c] (WRITE)
// 004971d0: FLD float ptr [ESI + 0x8]
// 004971d3: FADD float ptr [ESP + 0x98]
//   XREF to: Stack[-0x44] (READ)
// 004971da: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x70] (DATA)
// 004971de: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x68] (WRITE)
// 004971e2: FLD float ptr [EAX]
//   XREF to: Stack[-0x70] (DATA)
// 004971e4: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004971ea: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x94] (DATA)
// 004971ec: FLD float ptr [EAX + 0x4]
//   XREF to: Stack[-0x6c] (READ)
// 004971ef: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 004971f5: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0x90] (WRITE)
// 004971f8: FLD float ptr [EAX + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 004971fb: FMUL float ptr [0x0065d270]
//   XREF to: 0065d270 (READ)
// 00497201: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8c] (WRITE)
// 00497204: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x94] (DATA)
// 00497208: PUSH EAX
// 00497209: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0049720b: ADD EAX,0x150
// 00497210: PUSH EAX
// 00497211: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00497216: ADD ESP,0x8
// 00497219: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0049721e: AND EAX,0xff
// 00497223: PUSH EAX
// 00497224: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0049722a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0049722b: MOV EBX,0x4
// 00497230: MOV EDI,0x4
// 00497235: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 0049723a: ADD ESP,0x8
// 0049723d: XOR ESI,ESI
// 0049723f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497245: PUSH 0x1
// 00497247: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0xd8] (WRITE)
// 0049724b: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0xd4] (WRITE)
// 0049724f: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0xd0] (WRITE)
// 00497253: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0xcc] (WRITE)
// 00497257: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00497258: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0xc8] (WRITE)
// 0049725c: MOV EBX,0x1
// 00497261: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00497266: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xdc] (DATA)
// 0049726a: ADD ESP,0x8
// 0049726d: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497273: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0xa0] (WRITE)
// 00497277: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0xac] (WRITE)
// 0049727b: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0xc4] (WRITE)
// 0049727f: PUSH EAX
// 00497280: MOV ESI,0x5
// 00497285: MOV EBX,0x6
// 0049728a: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0049728b: XOR EDI,EDI
// 0049728d: MOV EBP,0x4
// 00497292: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0xb8] (WRITE)
// 00497296: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 0049729b: MOV EAX,0x2
// 004972a0: MOV EDX,0x3
// 004972a5: ADD ESP,0x8
// 004972a8: MOV ECX,0x7
// 004972ad: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 004972b1: MOV EAX,ESP
// 004972b3: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004972b9: PUSH EAX
// 004972ba: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0xac] (WRITE)
// 004972be: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0xb8] (WRITE)
// 004972c2: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004972c3: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0xc4] (WRITE)
// 004972c7: MOV EBX,0x1
// 004972cc: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 004972d1: MOV EAX,0x7
// 004972d6: MOV EDX,0x3
// 004972db: MOV ESI,0x2
// 004972e0: ADD ESP,0x8
// 004972e3: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004972e9: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 004972ed: MOV EAX,ESP
// 004972ef: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0xa0] (WRITE)
// 004972f3: PUSH EAX
// 004972f4: MOV dword ptr [ESP + 0x34],EBP
//   XREF to: Stack[-0xac] (WRITE)
// 004972f8: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 004972fc: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004972fd: MOV EDI,0x6
// 00497302: MOV EBP,0x5
// 00497307: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 0049730c: ADD ESP,0x8
// 0049730f: MOV EAX,ESP
// 00497311: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0xa0] (WRITE)
// 00497315: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0xac] (WRITE)
// 00497319: PUSH EAX
// 0049731a: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0049731f: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0xb8] (WRITE)
// 00497323: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00497324: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0xc4] (WRITE)
// 00497328: MOV ESI,0x7
// 0049732d: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 00497332: MOV EDX,0x4
// 00497337: ADD ESP,0x8
// 0049733a: MOV EAX,ESP
// 0049733c: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0xb8] (WRITE)
// 00497340: PUSH EAX
// 00497341: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497347: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0xa0] (WRITE)
// 0049734b: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0049734c: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0xac] (WRITE)
// 00497350: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0xc4] (WRITE)
// 00497354: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 00497359: MOV EAX,0x2
// 0049735e: ADD ESP,0x8
// 00497361: MOV EBP,0x3
// 00497366: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 0049736a: MOV EAX,ESP
// 0049736c: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0xb8] (WRITE)
// 00497370: PUSH EAX
// 00497371: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497377: XOR ECX,ECX
// 00497379: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0049737a: MOV dword ptr [ESP + 0x44],EBP
//   XREF to: Stack[-0xa0] (WRITE)
// 0049737e: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0xc4] (WRITE)
// 00497382: CALL engine_drender.cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
//   XREF to: 0048a8a0 (UNCONDITIONAL_CALL)
// 00497387: ADD ESP,0x8
// 0049738a: PUSH 0x0
// 0049738c: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00497392: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00497393: CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0048ca00
//   XREF to: 0048ca00 (UNCONDITIONAL_CALL)
// 00497398: ADD ESP,0x8
// 0049739b: ADD ESP,0xcc
// 004973a1: POP EBP
// 004973a2: POP EDI
// 004973a3: POP ESI
// 004973a4: POP EBX
// 004973a5: RET
