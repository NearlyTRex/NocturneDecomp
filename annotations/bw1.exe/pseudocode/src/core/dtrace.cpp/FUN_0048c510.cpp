// Name: core_dtrace.cpp_FUN_0048c510
// Address: 0048c510
// Address Range: [[0048c510, 0048ca33]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_FUN_0048c510(CDemonRaytrace *this_ptr,CVector3f *world_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_FUN_0048c510(CDemonRaytrace *this_ptr,CVector3f *world_pos)

{
  uint uVar1;
  SMRGLPrimitivePoly aSStack_e8 [4];
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_c4;
  uint uStack_b8;
  uint uStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3i CStack_94;
  CVector3i CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3i CStack_70;
  CVector3i CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  CVector3i CStack_1c;
  
  fStack_58 = (this_ptr->cell_size).x * _DAT_005db964;
  fStack_54 = (this_ptr->cell_size).y * _DAT_005db964;
  fStack_50 = (this_ptr->cell_size).z * _DAT_005db964;
  if (&fStack_a0 != &fStack_4c) {
    fStack_a0 = fStack_58;
    fStack_9c = fStack_54;
    fStack_98 = fStack_50;
  }
  fStack_4c = fStack_58;
  fStack_48 = fStack_54;
  fStack_44 = fStack_50;
  engine_drender_cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
            (0x01BC120C,(CVector3i *)0x1c3d424);
  CStack_94.x = (int)ROUND(world_pos->x * _DAT_005ff620);
  CStack_94.y = (int)ROUND(world_pos->y * _DAT_005ff620);
  CStack_94.z = (int)ROUND(world_pos->z * _DAT_005ff620);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)DAT_00612560->vertex_buffer_ptr,&CStack_94);
  fStack_7c = world_pos->x + fStack_a0;
  fStack_78 = world_pos->y;
  fStack_74 = world_pos->z;
  CStack_70.x = (int)ROUND(fStack_7c * _DAT_005ff620);
  CStack_70.y = (int)ROUND(fStack_78 * _DAT_005ff620);
  CStack_70.z = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x30),&CStack_70);
  fStack_7c = world_pos->x + fStack_a0;
  fStack_78 = world_pos->y;
  fStack_74 = world_pos->z + fStack_98;
  CStack_40.x = (int)ROUND(fStack_7c * _DAT_005ff620);
  CStack_40.y = (int)ROUND(fStack_78 * _DAT_005ff620);
  CStack_40.z = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x60),&CStack_40);
  fStack_7c = world_pos->x;
  fStack_78 = world_pos->y;
  fStack_74 = world_pos->z + fStack_98;
  CStack_64.x = (int)ROUND(fStack_7c * _DAT_005ff620);
  CStack_64.y = (int)ROUND(fStack_78 * _DAT_005ff620);
  CStack_64.z = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x90),&CStack_64);
  fStack_7c = world_pos->x;
  fStack_78 = world_pos->y + fStack_9c;
  fStack_74 = world_pos->z;
  CStack_34.x = (int)ROUND(fStack_7c * _DAT_005ff620);
  CStack_34.y = (int)ROUND(fStack_78 * _DAT_005ff620);
  CStack_34.z = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0xc0),&CStack_34);
  fStack_7c = world_pos->x + fStack_a0;
  fStack_78 = world_pos->y + fStack_9c;
  fStack_74 = world_pos->z;
  CStack_88.x = (int)ROUND(fStack_7c * _DAT_005ff620);
  CStack_88.y = (int)ROUND(fStack_78 * _DAT_005ff620);
  CStack_88.z = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0xf0),&CStack_88);
  fStack_7c = world_pos->x + fStack_a0;
  fStack_78 = world_pos->y + fStack_9c;
  fStack_74 = world_pos->z + fStack_98;
  CStack_1c.x = (int)ROUND(fStack_7c * _DAT_005ff620);
  CStack_1c.y = (int)ROUND(fStack_78 * _DAT_005ff620);
  CStack_1c.z = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x120),&CStack_1c);
  fStack_7c = world_pos->x;
  fStack_78 = world_pos->y + fStack_9c;
  fStack_74 = world_pos->z + fStack_98;
  CStack_28.x = (int)ROUND(fStack_7c * _DAT_005ff620);
  CStack_28.y = (int)ROUND(fStack_78 * _DAT_005ff620);
  CStack_28.z = (int)ROUND(fStack_74 * _DAT_005ff620);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x150),&CStack_28);
  uVar1 = rand();
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(DAT_00612560,uVar1 & 0xff);
  uStack_e4 = 4;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,1);
  uStack_ac = 0;
  uStack_b8 = 1;
  uStack_d0 = 4;
  uStack_c4 = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_ac = 2;
  uStack_b8 = 3;
  uStack_c4 = 7;
  uStack_d0 = 6;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_c4 = 7;
  uStack_ac = 0;
  uStack_b8 = 4;
  uStack_d0 = 3;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_ac = 1;
  uStack_b8 = 2;
  uStack_c4 = 6;
  uStack_d0 = 5;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_c4 = 6;
  uStack_ac = 4;
  uStack_b8 = 5;
  uStack_d0 = 7;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  uStack_b8 = 2;
  uStack_c4 = 1;
  uStack_ac = 3;
  uStack_d0 = 0;
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(DAT_00612560,aSStack_e8);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  return;
}
