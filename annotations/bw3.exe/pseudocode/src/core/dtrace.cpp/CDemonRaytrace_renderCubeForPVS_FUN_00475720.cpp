// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720
// Address: 00475720
// Address Range: [[00475720, 00476066]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00475720(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z,int render_mode)

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
  
  _DAT_01c0b7a4 = _DAT_01c0b7a4 + 1;
  if ((((((this_ptr->grid_bounds_min).x <= grid_x) && ((this_ptr->grid_bounds_min).y <= grid_y)) &&
       ((this_ptr->grid_bounds_min).z <= grid_z)) &&
      ((grid_x <= (this_ptr->grid_bounds_max).x && (grid_y <= (this_ptr->grid_bounds_max).y)))) &&
     (grid_z <= (this_ptr->grid_bounds_max).z)) {
    local_34 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(this_ptr,grid_x,grid_y,grid_z);
    if ((local_34 != (CDemonCube *)0x0) && (local_34->voxel_buffer1 != (SVoxelGrid *)0x0)) {
      local_28 = (float)grid_x;
      local_18 = grid_y;
      local_14 = grid_z;
      local_20 = (float)grid_y;
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_30 = (float)grid_z;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      _DAT_01c0b7a8 = _DAT_01c0b7a8 + 1;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_64.x = (int)ROUND(local_ac * _DAT_005dee30);
      local_64.y = (int)ROUND(local_a8 * _DAT_005dee30);
      local_64.z = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)*0x01BDD7E4,&local_64);
      local_14 = grid_x + 1;
      local_2c = (float)local_14;
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_7c.x = (int)ROUND(local_ac * _DAT_005dee30);
      local_7c.y = (int)ROUND(local_a8 * _DAT_005dee30);
      local_7c.z = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*0x01BDD7E4 + 0x30),&local_7c);
      local_14 = grid_z + 1;
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_24 = (float)local_14;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_40.x = (int)ROUND(local_ac * _DAT_005dee30);
      local_40.y = (int)ROUND(local_a8 * _DAT_005dee30);
      local_40.z = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*0x01BDD7E4 + 0x60),&local_40);
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_20 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_58.x = (int)ROUND(local_ac * _DAT_005dee30);
      local_58.y = (int)ROUND(local_a8 * _DAT_005dee30);
      local_58.z = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*0x01BDD7E4 + 0x90),&local_58);
      local_14 = grid_y + 1;
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_1c = (float)local_14;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_a0.x = (int)ROUND(local_ac * _DAT_005dee30);
      local_a0.y = (int)ROUND(local_a8 * _DAT_005dee30);
      local_a0.z = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*0x01BDD7E4 + 0xc0),&local_a0);
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_30 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_94.x = (int)ROUND(local_ac * _DAT_005dee30);
      local_94.y = (int)ROUND(local_a8 * _DAT_005dee30);
      local_94.z = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*0x01BDD7E4 + 0xf0),&local_94);
      local_ac = local_2c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_70.x = (int)ROUND(local_ac * _DAT_005dee30);
      local_70.y = (int)ROUND(local_a8 * _DAT_005dee30);
      local_70.z = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*0x01BDD7E4 + 0x120),&local_70);
      local_ac = local_28 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_a8 = local_1c * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      local_a4 = local_24 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
      local_88.x = (int)ROUND(local_ac * _DAT_005dee30);
      local_88.y = (int)ROUND(local_a8 * _DAT_005dee30);
      local_88.z = (int)ROUND(local_a4 * _DAT_005dee30);
      engine_special_cpp_FUN_005632a3((SProjectedVertex *)(*0x01BDD7E4 + 0x150),&local_88);
      uVar1 = DAT_0060b024 & DAT_0060b054 & DAT_0060b084 & DAT_0060b0b4 & DAT_0060b0e4 &
              DAT_0060b114 & DAT_0060b144 & DAT_0060b174;
      pSVar5 = &SStack_d4;
      if (((uVar1 & 0x80000000) == 0) || ((char)uVar1 == '\0')) {
        _DAT_01c0b7ac = _DAT_01c0b7ac + 1;
        if (1 < render_mode) {
          local_14 = grid_z;
          SStack_d4.base.count = 4;
          SStack_d4.surface_normal.A.i = 0;
          SStack_d4.surface_normal.B.i = 0;
          SStack_d4.surface_normal.C.i = -1;
          fVar4 = ((float10)grid_z * (float10)(this_ptr->cell_size).z +
                  (float10)(this_ptr->bbox_min).z) * (float10)_DAT_005bca69;
          local_bc.i = 0;
          local_b4 = 5;
          local_b0 = 4;
          round();
          SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
          local_b8 = 1;
          UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                              (this_ptr_00,pSVar5);
          pSVar5 = &SStack_d4;
          if (UVar3.i == 0) {
            local_14 = grid_z + 1;
            SStack_d4.surface_normal.C.i = 1;
            fVar4 = ((float10)local_14 * (float10)(this_ptr->cell_size).z +
                    (float10)(this_ptr->bbox_min).z) * (float10)_DAT_005bca71;
            local_bc.i = 2;
            local_b8 = 3;
            local_b4 = 7;
            local_b0 = 6;
            SStack_d4.surface_normal.A.i = UVar3.i;
            SStack_d4.surface_normal.B.i = UVar3.i;
            round();
            SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
            UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                (this_ptr_01,pSVar5);
            pSVar5 = &SStack_d4;
            if (UVar3.i == 0) {
              local_14 = grid_x;
              SStack_d4.surface_normal.A.i = -1;
              fVar4 = ((float10)grid_x * (float10)(this_ptr->cell_size).x +
                      (float10)(this_ptr->bbox_min).x) * (float10)_DAT_005bca69;
              local_b8 = 4;
              local_b4 = 7;
              local_b0 = 3;
              SStack_d4.surface_normal.B.i = UVar3.i;
              SStack_d4.surface_normal.C.i = UVar3.i;
              local_bc.i = UVar3.i;
              round();
              SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
              UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                  (this_ptr_02,pSVar5);
              pSVar5 = &SStack_d4;
              if (UVar3.i == 0) {
                local_14 = grid_x + 1;
                SStack_d4.surface_normal.A.i = 1;
                fVar4 = ((float10)local_14 * (float10)(this_ptr->cell_size).x +
                        (float10)(this_ptr->bbox_min).x) * (float10)_DAT_005bca71;
                local_bc.i = 1;
                local_b4 = 6;
                local_b0 = 5;
                SStack_d4.surface_normal.B.i = UVar3.i;
                SStack_d4.surface_normal.C.i = UVar3.i;
                round();
                SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
                local_b8 = 2;
                UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                    (this_ptr_03,pSVar5);
                pSVar5 = &SStack_d4;
                if (UVar3.i == 0) {
                  SStack_d4.surface_normal.B.i = 1;
                  local_14 = grid_y + 1;
                  SStack_d4.surface_normal.C.i = 0;
                  fVar4 = ((float10)local_14 * (float10)(this_ptr->cell_size).y +
                          (float10)(this_ptr->bbox_min).y) * (float10)_DAT_005bca71;
                  local_bc.i = 4;
                  local_b8 = 5;
                  local_b4 = 6;
                  local_b0 = 7;
                  SStack_d4.surface_normal.A.i = UVar3.i;
                  round();
                  SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
                  UVar3.i = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                      (this_ptr_04,pSVar5);
                  pSVar5 = &SStack_d4;
                  if (UVar3.i == 0) {
                    SStack_d4.surface_normal.B.i = -1;
                    local_14 = grid_y;
                    SStack_d4.surface_normal.C.i = 0;
                    fVar4 = ((float10)grid_y * (float10)(this_ptr->cell_size).y +
                            (float10)(this_ptr->bbox_min).y) * (float10)_DAT_005bca69;
                    local_bc.i = 0;
                    local_b4 = 2;
                    local_b0 = 3;
                    SStack_d4.surface_normal.A.i = UVar3.i;
                    round();
                    SStack_d4.surface_normal.D.i = (int)ROUND(fVar4);
                    local_b8 = 1;
                    iVar2 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
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
        _DAT_01c0b7b0 = _DAT_01c0b7b0 + 1;
        local_4c.z = (float)grid_z * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,&local_4c);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_004540c0(local_34,this_ptr->rendering_mode);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
        iVar2 = _DAT_01c0b7b4;
        *(CDemonCube **)(_DAT_01c0b7b4 * 4 + 0x1c0b7bc) = local_34;
        iVar2 = iVar2 * 0xc;
        if ((CVector3f *)(&DAT_01c1f03c + iVar2) != &local_4c) {
          ((CVector3f *)(&DAT_01c1f03c + iVar2))->x = local_4c.x;
          *(float *)(&DAT_01c1f040 + iVar2) = local_4c.y;
          *(float *)(&DAT_01c1f044 + iVar2) = local_4c.z;
        }
        _DAT_01c0b7b4 = _DAT_01c0b7b4 + 1;
        if (19999 < _DAT_01c0b7b4) {
          _DAT_01d71de0 = "..\\core\\dtrace.cpp";
          _DAT_01d71de4 = 0x792;
          core_main_c_FUN_004e4330("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}
