// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0
// Address: 0048cba0
// Address Range: [[0048cba0, 0048d4e6]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

{
  uint uVar1;
  int iVar2;
  UIntegerFloat UVar3;
  CDemonRenderer *this_ptr_00;
  CDemonRenderer *this_ptr_01;
  CDemonRenderer *this_ptr_02;
  CDemonRenderer *this_ptr_03;
  CDemonRenderer *this_ptr_04;
  CDemonRenderer *this_ptr_05;
  float10 fVar4;
  SMRGLHeaderPrimitive *pSVar5;
  SMRGLHeaderPrimitive SStack_d4;
  UIntegerFloat local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3i local_a0;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  CVector3f local_4c;
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
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_30 = (float)grid_z;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      _DAT_01bef20c = _DAT_01bef20c + 1;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_64.x = (int)ROUND(local_ac * _DAT_005ff620);
      local_64.y = (int)ROUND(local_a8 * _DAT_005ff620);
      local_64.z = (int)ROUND(local_a4 * _DAT_005ff620);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)*0x01BC120C,&local_64);
      local_14 = grid_x + 1;
      local_2c = (float)local_14;
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_7c.x = (int)ROUND(local_ac * _DAT_005ff620);
      local_7c.y = (int)ROUND(local_a8 * _DAT_005ff620);
      local_7c.z = (int)ROUND(local_a4 * _DAT_005ff620);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)(*0x01BC120C + 0x30),&local_7c);
      local_14 = grid_z + 1;
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_24 = (float)local_14;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_40.x = (int)ROUND(local_ac * _DAT_005ff620);
      local_40.y = (int)ROUND(local_a8 * _DAT_005ff620);
      local_40.z = (int)ROUND(local_a4 * _DAT_005ff620);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)(*0x01BC120C + 0x60),&local_40);
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_58.x = (int)ROUND(local_ac * _DAT_005ff620);
      local_58.y = (int)ROUND(local_a8 * _DAT_005ff620);
      local_58.z = (int)ROUND(local_a4 * _DAT_005ff620);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)(*0x01BC120C + 0x90),&local_58);
      local_14 = grid_y + 1;
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_1c = (float)local_14;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_a0.x = (int)ROUND(local_ac * _DAT_005ff620);
      local_a0.y = (int)ROUND(local_a8 * _DAT_005ff620);
      local_a0.z = (int)ROUND(local_a4 * _DAT_005ff620);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)(*0x01BC120C + 0xc0),&local_a0);
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_94.x = (int)ROUND(local_ac * _DAT_005ff620);
      local_94.y = (int)ROUND(local_a8 * _DAT_005ff620);
      local_94.z = (int)ROUND(local_a4 * _DAT_005ff620);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)(*0x01BC120C + 0xf0),&local_94);
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_70.x = (int)ROUND(local_ac * _DAT_005ff620);
      local_70.y = (int)ROUND(local_a8 * _DAT_005ff620);
      local_70.z = (int)ROUND(local_a4 * _DAT_005ff620);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)(*0x01BC120C + 0x120),&local_70);
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_88.x = (int)ROUND(local_ac * _DAT_005ff620);
      local_88.y = (int)ROUND(local_a8 * _DAT_005ff620);
      local_88.z = (int)ROUND(local_a4 * _DAT_005ff620);
      engine_special_cpp_FUN_00580173((SProjectedVertex *)(*0x01BC120C + 0x150),&local_88);
      uVar1 = DAT_00629024 & DAT_00629054 & DAT_00629084 & DAT_006290b4 & DAT_006290e4 &
              DAT_00629114 & DAT_00629144 & DAT_00629174;
      pSVar5 = &SStack_d4;
      if (((uVar1 & 0x80000000) == 0) || ((char)uVar1 == '\0')) {
        _DAT_01bef210 = _DAT_01bef210 + 1;
        if (1 < render_mode) {
          local_14 = grid_z;
          SStack_d4.base.count = 4;
          SStack_d4.surface_normal.A.i = 0;
          SStack_d4.surface_normal.B.i = 0;
          SStack_d4.surface_normal.C.i = -1;
          fVar4 = ((float10)grid_z * (float10)(this_ptr->cell_size).z +
                  (float10)(this_ptr->bbox_min).z) * (float10)_DAT_005db9ac;
          local_bc.i = 0;
          local_b4 = 5;
          local_b0 = 4;
          round();
          SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
          local_b8 = 1;
          UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                              (this_ptr_00,pSVar5);
          pSVar5 = &SStack_d4;
          if (UVar3.i == 0) {
            local_14 = grid_z + 1;
            SStack_d4.surface_normal.C.i = 1;
            fVar4 = ((float10)local_14 * (float10)(this_ptr->cell_size).z +
                    (float10)(this_ptr->bbox_min).z) * (float10)_DAT_005db9b4;
            local_bc.i = 2;
            local_b8 = 3;
            local_b4 = 7;
            local_b0 = 6;
            SStack_d4.surface_normal.A.i = UVar3.i;
            SStack_d4.surface_normal.B.i = UVar3.i;
            round();
            SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
            UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                (this_ptr_01,pSVar5);
            pSVar5 = &SStack_d4;
            if (UVar3.i == 0) {
              local_14 = grid_x;
              SStack_d4.surface_normal.A.i = -1;
              fVar4 = ((float10)grid_x * (float10)(this_ptr->cell_size).x +
                      (float10)(this_ptr->bbox_min).x) * (float10)_DAT_005db9ac;
              local_b8 = 4;
              local_b4 = 7;
              local_b0 = 3;
              SStack_d4.surface_normal.B.i = UVar3.i;
              SStack_d4.surface_normal.C.i = UVar3.i;
              local_bc.i = UVar3.i;
              round();
              SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
              UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                  (this_ptr_02,pSVar5);
              pSVar5 = &SStack_d4;
              if (UVar3.i == 0) {
                local_14 = grid_x + 1;
                SStack_d4.surface_normal.A.i = 1;
                fVar4 = ((float10)local_14 * (float10)(this_ptr->cell_size).x +
                        (float10)(this_ptr->bbox_min).x) * (float10)_DAT_005db9b4;
                local_bc.i = 1;
                local_b4 = 6;
                local_b0 = 5;
                SStack_d4.surface_normal.B.i = UVar3.i;
                SStack_d4.surface_normal.C.i = UVar3.i;
                round();
                SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
                local_b8 = 2;
                UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                    (this_ptr_03,pSVar5);
                pSVar5 = &SStack_d4;
                if (UVar3.i == 0) {
                  SStack_d4.surface_normal.B.i = 1;
                  local_14 = grid_y + 1;
                  SStack_d4.surface_normal.C.i = 0;
                  fVar4 = ((float10)local_14 * (float10)(this_ptr->cell_size).y +
                          (float10)(this_ptr->bbox_min).y) * (float10)_DAT_005db9b4;
                  local_bc.i = 4;
                  local_b8 = 5;
                  local_b4 = 6;
                  local_b0 = 7;
                  SStack_d4.surface_normal.A.i = UVar3.i;
                  round();
                  SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
                  UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                      (this_ptr_04,pSVar5);
                  pSVar5 = &SStack_d4;
                  if (UVar3.i == 0) {
                    SStack_d4.surface_normal.B.i = -1;
                    local_14 = grid_y;
                    SStack_d4.surface_normal.C.i = 0;
                    fVar4 = ((float10)grid_y * (float10)(this_ptr->cell_size).y +
                            (float10)(this_ptr->bbox_min).y) * (float10)_DAT_005db9ac;
                    local_bc.i = 0;
                    local_b4 = 2;
                    local_b0 = 3;
                    SStack_d4.surface_normal.A.i = UVar3.i;
                    round();
                    SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
                    local_b8 = 1;
                    iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                      (this_ptr_05,pSVar5);
                    if (iVar2 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_4c.x = (float)grid_x * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
        local_14 = grid_z;
        local_4c.y = (float)grid_y * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
        _DAT_01bef214 = _DAT_01bef214 + 1;
        local_4c.z = (float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,&local_4c);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_00457f70(local_34,this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (DAT_00612560,(CVector3f *)&DAT_02c8af28);
        iVar2 = _DAT_01bef218;
        *(CDemonCube **)(_DAT_01bef218 * 4 + 0x1bef220) = local_34;
        iVar2 = iVar2 * 0xc;
        if ((CVector3f *)(&DAT_01c02aa0 + iVar2) != &local_4c) {
          ((CVector3f *)(&DAT_01c02aa0 + iVar2))->x = local_4c.x;
          *(float *)(&DAT_01c02aa4 + iVar2) = local_4c.y;
          *(float *)(&DAT_01c02aa8 + iVar2) = local_4c.z;
        }
        _DAT_01bef218 = _DAT_01bef218 + 1;
        if (19999 < _DAT_01bef218) {
          _DAT_01d1d400 = "..\\core\\dtrace.cpp";
          _DAT_01d1d404 = 0x792;
          core_main_c_FUN_005030e0("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}
