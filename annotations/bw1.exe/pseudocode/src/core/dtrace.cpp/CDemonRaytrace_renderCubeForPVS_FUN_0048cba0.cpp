// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0
// Address: 0048cba0
// Address Range: [[0048cba0, 0048d4e6]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

{
  CDemonRenderer *pCVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  float unaff_ESI;
  int unaff_EDI;
  SMRGLHeaderPrimitive *pSVar4;
  CVector3i local_a0;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3f local_64;
  CVector3i local_58;
  CDemonCube *local_4c;
  CVector3i local_40;
  CDemonCube *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  _DAT_01bef208 = _DAT_01bef208 + 1;
  if ((((((this_ptr->grid_bounds_min).x <= grid_x) && ((this_ptr->grid_bounds_min).y <= grid_y)) &&
       ((this_ptr->grid_bounds_min).z <= grid_z)) &&
      ((grid_x <= (this_ptr->grid_bounds_max).x && (grid_y <= (this_ptr->grid_bounds_max).y)))) &&
     (grid_z <= (this_ptr->grid_bounds_max).z)) {
    local_34 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(this_ptr,grid_x,grid_y,grid_z);
    if ((local_34 != (CDemonCube *)0x0) && (local_34->voxel_buffer1 != (SVoxelGrid *)0x0)) {
      local_28 = (float)grid_x;
      local_18 = grid_y;
      local_14 = grid_z;
      local_20 = (float)grid_y;
      local_30 = (float)grid_z;
      _DAT_01bef20c = _DAT_01bef20c + 1;
      local_64.x = (float)(int)ROUND((local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                                     _DAT_005ff620);
      local_64.y = (float)(int)ROUND((local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                                     _DAT_005ff620);
      local_64.z = (float)(int)ROUND((local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                                     _DAT_005ff620);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&DAT_0061255c->vertex_buffer_ptr->projected_vertex,(CVector3i *)&local_64);
      local_14 = grid_x + 1;
      local_2c = (float)local_14;
      local_7c.x = (int)ROUND((local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              _DAT_005ff620);
      local_7c.y = (int)ROUND((local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              _DAT_005ff620);
      local_7c.z = (int)ROUND((local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              _DAT_005ff620);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&DAT_0061255c->vertex_buffer_ptr[1].projected_vertex,&local_7c);
      local_14 = grid_z + 1;
      local_24 = (float)local_14;
      local_40.x = (int)ROUND((local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              _DAT_005ff620);
      local_40.y = (int)ROUND((local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              _DAT_005ff620);
      local_40.z = (int)ROUND((local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              _DAT_005ff620);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&DAT_0061255c->vertex_buffer_ptr[2].projected_vertex,&local_40);
      local_58.x = (int)ROUND((local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              _DAT_005ff620);
      local_58.y = (int)ROUND((local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              _DAT_005ff620);
      local_58.z = (int)ROUND((local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              _DAT_005ff620);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&DAT_0061255c->vertex_buffer_ptr[3].projected_vertex,&local_58);
      local_14 = grid_y + 1;
      local_1c = (float)local_14;
      local_a0.x = (int)ROUND((local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              _DAT_005ff620);
      local_a0.y = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              _DAT_005ff620);
      local_a0.z = (int)ROUND((local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              _DAT_005ff620);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&DAT_0061255c->vertex_buffer_ptr[4].projected_vertex,&local_a0);
      local_94.x = (int)ROUND((local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              _DAT_005ff620);
      local_94.y = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              _DAT_005ff620);
      local_94.z = (int)ROUND((local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              _DAT_005ff620);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&DAT_0061255c->vertex_buffer_ptr[5].projected_vertex,&local_94);
      local_70.x = (int)ROUND((local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              _DAT_005ff620);
      local_70.y = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              _DAT_005ff620);
      local_70.z = (int)ROUND((local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              _DAT_005ff620);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&DAT_0061255c->vertex_buffer_ptr[6].projected_vertex,&local_70);
      local_88.x = (int)ROUND((local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x) *
                              _DAT_005ff620);
      local_88.y = (int)ROUND((local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y) *
                              _DAT_005ff620);
      local_88.z = (int)ROUND((local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                              _DAT_005ff620);
      engine_special_cpp_transformAndProjectPoint_FUN_00580173
                (&DAT_0061255c->vertex_buffer_ptr[7].projected_vertex,&local_88);
      pCVar1 = 0x01BC120C;
      uVar2 = DAT_00629024 & DAT_00629054 & DAT_00629084 & DAT_006290b4 & DAT_006290e4 &
              DAT_00629114 & DAT_00629144 & DAT_00629174;
      if (((uVar2 & 0x80000000) == 0) || ((char)uVar2 == '\0')) {
        _DAT_01bef210 = _DAT_01bef210 + 1;
        if (1 < render_mode) {
          local_14 = grid_z;
          pSVar4 = (SMRGLHeaderPrimitive *)0x48d284;
          round
                    ((double)(((float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z) *
                             (float)_DAT_005db9ac));
          iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                            (pCVar1,pSVar4);
          pCVar1 = 0x01BC120C;
          if (iVar3 == 0) {
            local_18 = grid_z + 1;
            pSVar4 = (SMRGLHeaderPrimitive *)0x48d2f8;
            round
                      ((double)(((float)local_18 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z)
                               * (float)_DAT_005db9b4));
            iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                              (pCVar1,pSVar4);
            pCVar1 = 0x01BC120C;
            if (iVar3 == 0) {
              local_1c = (float)grid_x;
              pSVar4 = (SMRGLHeaderPrimitive *)0x48d365;
              round
                        ((double)(((float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x)
                                 * (float)_DAT_005db9ac));
              iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                (pCVar1,pSVar4);
              pCVar1 = 0x01BC120C;
              if (iVar3 == 0) {
                local_20 = (float)(grid_x + 1);
                pSVar4 = (SMRGLHeaderPrimitive *)0x48d3d1;
                round
                          ((double)(((float)(int)local_20 * (this_ptr->cell_size).x +
                                    (this_ptr->bbox_min).x) * (float)_DAT_005db9b4));
                iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                  (pCVar1,pSVar4);
                pCVar1 = 0x01BC120C;
                if (iVar3 == 0) {
                  local_24 = (float)(unaff_EBX + 1);
                  pSVar4 = (SMRGLHeaderPrimitive *)0x48d450;
                  round
                            ((double)(((float)(int)local_24 * (this_ptr->cell_size).y +
                                      (this_ptr->bbox_min).y) * (float)_DAT_005db9b4));
                  iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                    (pCVar1,pSVar4);
                  pCVar1 = 0x01BC120C;
                  if (iVar3 == 0) {
                    pSVar4 = (SMRGLHeaderPrimitive *)0x48d4c3;
                    local_28 = unaff_ESI;
                    round
                              ((double)(((float)(int)unaff_ESI * (this_ptr->cell_size).y +
                                        (this_ptr->bbox_min).y) * (float)_DAT_005db9ac));
                    iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                      (pCVar1,pSVar4);
                    if (iVar3 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_64.x = (float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
        local_2c = (float)grid_z;
        local_64.y = (float)unaff_EDI * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
        _DAT_01bef214 = _DAT_01bef214 + 1;
        local_64.z = (float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,&local_64);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457f70(local_4c,this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,(CVector3f *)&DAT_02c8af28);
        iVar3 = _DAT_01bef218;
        *(CDemonCube **)(_DAT_01bef218 * 4 + 0x1bef220) = local_4c;
        iVar3 = iVar3 * 0xc;
        if ((CVector3f *)(&DAT_01c02aa0 + iVar3) != &local_64) {
          ((CVector3f *)(&DAT_01c02aa0 + iVar3))->x = local_64.x;
          *(float *)(&DAT_01c02aa4 + iVar3) = local_64.y;
          *(float *)(&DAT_01c02aa8 + iVar3) = local_64.z;
        }
        _DAT_01bef218 = _DAT_01bef218 + 1;
        if (19999 < _DAT_01bef218) {
          _DAT_01d1d400 = "..\\core\\dtrace.cpp";
          _DAT_01d1d404 = 0x792;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}
