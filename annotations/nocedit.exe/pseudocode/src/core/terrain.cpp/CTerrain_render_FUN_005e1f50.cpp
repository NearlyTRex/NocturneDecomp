// Name: core_terrain.cpp_CTerrain_render_FUN_005e1f50
// Address: 005e1f50
// Address Range: [[005e1f50, 005e2047]]
// Convention: __cdecl
// Signature: void core_terrain.cpp_CTerrain_render_FUN_005e1f50(CTerrain * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c500 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a2d3 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_006565a0 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGround* g_CGroundPtr = 02db8668
//   CDemonRenderer g_CDemonRendererInstance
//   CGround g_CGroundInstance
//   undefined4 g_CTerrainInstance.initialized
// Function calls:
//   core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
//   core_ground.cpp_CGround_render_FUN_004efc90
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150

#include "nocturne.h"

void __cdecl core_terrain_cpp_CTerrain_render_FUN_005e1f50(CTerrain *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  double dVar3;
  float in_stack_ffffffdc;
  
  if (g_CTerrainInstance.initialized == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
            (g_CDemonRendererPtr,(float *)&stack0xffffffd0);
  iVar1 = core_ground_cpp_CGround_getHeightAtPosition_FUN_004efd30(g_CGroundPtr,0,0x40800);
  fVar2 = (float10)in_stack_ffffffdc * (float10)DOUBLE_006565a0;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar1,iVar1));
  dVar3 = crt_math_c_round_FUN_005fe6b0(dVar3);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),(int)ROUND(fVar2)))
  ;
  engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
            (g_CDemonRendererPtr,(CVector3i *)&stack0xfffffff0);
  core_ground_cpp_CGround_render_FUN_004efc90(g_CGroundPtr);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffec);
  return;
}


// Assembly code:
// 005e1f50: PUSH EBX
//   Label: core_terrain.cpp_CTerrain_render_FUN_005e1f50
// 005e1f51: PUSH ESI
// 005e1f52: PUSH EDI
// 005e1f53: PUSH EBP
// 005e1f54: MOV EBP,ESP
// 005e1f56: SUB ESP,0x1c
// 005e1f59: AND ESP,0xfffffff8
// 005e1f5c: CMP dword ptr [0x03f874a0],0x0
//   XREF to: 03f874a0 (READ)
// 005e1f63: JNZ 0x005e1f6c
//   XREF to: 005e1f6c (CONDITIONAL_JUMP)
// 005e1f65: MOV ESP,EBP
// 005e1f67: POP EBP
// 005e1f68: POP EDI
// 005e1f69: POP ESI
// 005e1f6a: POP EBX
// 005e1f6b: RET
// 005e1f6c: MOV EAX,ESP
//   Label: LAB_005e1f6c
// 005e1f6e: PUSH EAX
// 005e1f6f: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e1f75: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005e1f76: CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
//   XREF to: 0048c780 (UNCONDITIONAL_CALL)
// 005e1f7b: ADD ESP,0x8
// 005e1f7e: MOV EBX,0x40800
// 005e1f83: PUSH EBX
// 005e1f84: XOR ESI,ESI
// 005e1f86: PUSH ESI
// 005e1f87: MOV EDI,dword ptr [0x0067cbc8]
//   XREF to: 0067cbc8 (READ)
// 005e1f8d: PUSH EDI
//   XREF to: 02db8668 (DATA)
// 005e1f8e: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 005e1f92: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005e1f96: CALL core_ground.cpp_CGround_getHeightAtPosition_FUN_004efd30
//   XREF to: 004efd30 (UNCONDITIONAL_CALL)
// 005e1f9b: ADD ESP,0xc
// 005e1f9e: FLD double ptr [0x006565a0]
//   XREF to: 006565a0 (READ)
// 005e1fa4: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005e1fa7: FMUL ST1
// 005e1fa9: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 005e1fad: FMUL ST2
// 005e1faf: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005e1fb3: FMULP ST3
// 005e1fb5: MOV EDX,EAX
// 005e1fb7: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005e1fbb: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005e1fbf: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e1fc3: FXCH
// 005e1fc5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e1fca: FXCH
// 005e1fcc: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e1fd1: FXCH
// 005e1fd3: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 005e1fd7: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005e1fdb: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 005e1fdf: ADD ECX,EAX
// 005e1fe1: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005e1fe5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e1fea: ADD EAX,EDX
// 005e1fec: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 005e1ff0: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e1ff4: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005e1ff8: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005e1ffc: ADD EBX,EAX
// 005e1ffe: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e2001: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005e2005: MOV ESI,EBX
// 005e2007: SUB ESI,dword ptr [EAX]
// 005e2009: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 005e200d: PUSH EAX
// 005e200e: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e2014: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005e2015: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 005e2019: CALL engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0048c130
//   XREF to: 0048c130 (UNCONDITIONAL_CALL)
// 005e201e: ADD ESP,0x8
// 005e2021: MOV EAX,[0x0067cbc8]
//   XREF to: 02db8668 (PARAM)
//   XREF to: 0067cbc8 (READ)
// 005e2026: PUSH EAX
//   XREF to: 02db8668 (DATA)
// 005e2027: CALL core_ground.cpp_CGround_render_FUN_004efc90
//   XREF to: 004efc90 (UNCONDITIONAL_CALL)
// 005e202c: ADD ESP,0x4
// 005e202f: MOV EAX,ESP
// 005e2031: PUSH EAX
// 005e2032: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005e2038: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e2039: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 005e203e: ADD ESP,0x8
// 005e2041: MOV ESP,EBP
// 005e2043: POP EBP
// 005e2044: POP EDI
// 005e2045: POP ESI
// 005e2046: POP EBX
// 005e2047: RET
