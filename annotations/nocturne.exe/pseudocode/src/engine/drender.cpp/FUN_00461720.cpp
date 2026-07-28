// Name: engine_drender.cpp_FUN_00461720
// Address: 00461720
// Address Range: [[00461720, 004619ec]]
// Convention: unknown
// Signature: void engine_drender_cpp_FUN_00461720(CDemonRenderer *param_1,STrianglePackedIndices *param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_drender_cpp_FUN_00461720(CDemonRenderer *param_1,STrianglePackedIndices *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3i local_24;
  int local_18;
  int local_14;
  
  if (param_4 == -1) {
    param_4 = 0x2cd;
  }
  if (param_1->texture_capture_enabled == 0) {
    if (((param_1->face_capture_enabled == 0) && (param_1->plane_culling_enabled == 0)) &&
       (DAT_006b0280 != 0)) {
      if (param_1->face_count == 0) {
        if (DAT_005b7624 == 0x20) {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f031;
        }
        else {
          _DAT_01c00c7c = engine_special_cpp_FUN_0052f823;
        }
        _DAT_01c039a0 = param_4;
        _DAT_01c039a4 = 6;
        if (_DAT_01c02594 == 0) {
          for (; 0 < param_3; param_3 = param_3 + -1) {
            local_24.x = (int)param_2->vertex_index_0;
            local_24.y = (int)param_2->vertex_index_1;
            local_24.z = (int)param_2->vertex_index_2;
            if (param_1->skip_uv_extraction == 0) {
              param_1->vertex_buffer_ptr[local_24.x].u = (uint)param_2[1].vertex_index_0 << 8;
              param_1->vertex_buffer_ptr[local_24.x].v = (uint)param_2[2].vertex_index_0 << 8;
              param_1->vertex_buffer_ptr[local_24.y].u = (uint)param_2[1].vertex_index_1 << 8;
              param_1->vertex_buffer_ptr[local_24.y].v = (uint)param_2[2].vertex_index_1 << 8;
              param_1->vertex_buffer_ptr[local_24.z].u = (uint)param_2[1].vertex_index_2 << 8;
              param_1->vertex_buffer_ptr[local_24.z].v = (uint)param_2[2].vertex_index_2 << 8;
            }
            param_2 = param_2 + 3;
            engine_drender_cpp_renderTriangleTextured_FUN_00457a00(&local_24.x,3);
          }
        }
        else {
          iVar4 = 0;
          local_18 = 0;
          if (0 < param_3) {
            local_14 = 0;
            do {
              iVar3 = engine_prim_c_getTriangleWindingFromPackedIndices_FUN_004f9cb0(param_2);
              if (iVar3 != 0) {
                iVar4 = iVar4 + 1;
                iVar3 = local_14 + 4;
                *(STrianglePackedIndices **)(&DAT_005ae70c + local_14) = param_2;
                local_14 = iVar3;
                if (1999 < iVar4) {
                  PTR_01cc4800 = "..\\engine\\drender.cpp";
                  INT_01cc4804 = 0x9e1;
                  core_main_c_FUN_004c8440("CDemonRenderer::demonGZFacetList - Too many visible faces at once : %d",iVar4);
                }
              }
              local_18 = local_18 + 1;
              param_2 = param_2 + 3;
            } while (local_18 < param_3);
          }
          if (0 < iVar4) {
            engine_special_cpp_drawPolyList2_FUN_005327c0
                      (param_1->vertex_buffer_ptr,(ushort **)&DAT_005ae70c,iVar4,_DAT_01c039a0);
            return;
          }
        }
      }
      else {
        _DAT_01c00c7c = core_dstrender_cpp_renderDepthOnlyStandard_FUN_00463a79;
        _DAT_01c039a0 = 0;
        _DAT_01c039a4 = 0;
        uVar1 = 0;
        uVar2 = 0;
        if (0 < param_3) {
          do {
            _DAT_01c039a4 = uVar2;
            _DAT_01c039a0 = uVar1;
            local_24.x = (int)param_2->vertex_index_0;
            local_24.y = (int)param_2->vertex_index_1;
            local_24.z = (int)param_2->vertex_index_2;
            param_3 = param_3 + -1;
            param_2 = param_2 + 3;
            engine_drender_cpp_renderTriangleSimple_FUN_00458080(&local_24,3);
            uVar1 = _DAT_01c039a0;
            uVar2 = _DAT_01c039a4;
          } while (0 < param_3);
          return;
        }
      }
    }
    else {
      iVar4 = 0;
      if (0 < param_3) {
        do {
          iVar4 = iVar4 + 1;
          engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_0045f5e0(param_1,param_2,param_4)
          ;
          param_2 = param_2 + 3;
        } while (iVar4 < param_3);
        return;
      }
    }
  }
  else {
    iVar4 = 0;
    if (0 < param_3) {
      do {
        iVar4 = iVar4 + 1;
        engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(param_1,param_2,param_4);
        param_2 = param_2 + 3;
      } while (iVar4 < param_3);
    }
  }
  return;
}
