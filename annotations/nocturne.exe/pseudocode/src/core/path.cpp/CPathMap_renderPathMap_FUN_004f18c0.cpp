// Name: core_path.cpp_CPathMap_renderPathMap_FUN_004f18c0
// Address: 004f18c0
// Address Range: [[004f18c0, 004f1c8a]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_004f18c0(CPathMap *this_ptr,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_004f18c0(CPathMap *this_ptr,int depth,int red,int green,int fog)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CDemonRenderer *pCVar7;
  int iVar8;
  byte bVar9;
  double dVar10;
  int aiStackY_1040 [1004];
  byte *puVar11;
  CVector3i *pCVar12;
  int local_7c;
  CVector3f local_64;
  float local_58;
  float local_54;
  int local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  iVar8 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar8 != 0) {
    return;
  }
  local_64.x = (float)(this_ptr->grid_origin).x * _DAT_01fba96c + _DAT_01fba948;
  local_64.y = 0.0;
  local_64.z = (float)(this_ptr->grid_origin).z * _DAT_01fba974 + _DAT_01fba950;
  local_7c = 0x4f1926;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,&local_64)
  ;
  local_7c = 0x4f193f;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)&DAT_005be090);
  _DAT_01e42814 = 4;
  _DAT_01e42818 = 0;
  _DAT_01e4281c = 0;
  _DAT_01e42820 = 0;
  _DAT_01e42824 = 0;
  _DAT_01e42828 = 0;
  _DAT_01e42834 = 1;
  _DAT_01e42840 = 2;
  _DAT_01e4282c = 0x800000;
  _DAT_01e42830 = 0x800000;
  _DAT_01e42838 = 0x800000;
  _DAT_01e4283c = 0x800000;
  _DAT_01e42844 = 0x800000;
  _DAT_01e42848 = 0x800000;
  _DAT_01e42850 = 0x800000;
  _DAT_01e42854 = 0x800000;
  _DAT_01e4284c = 3;
  local_7c = 0x4f19c6;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,0);
  local_20 = depth << 8;
  local_28 = (byte *)(red << 8);
  local_24 = green << 8;
  local_58 = 0.0;
  local_2c = 0;
  local_1c = fog << 8;
  do {
    local_50 = 0;
    local_18 = (int)(this_ptr->height_cache + -1) + 0x160 + local_2c;
    do {
      pCVar7 = DAT_005ae704;
      if ((-1000 < *(int *)(local_18 + 0x9c70)) && (*(int *)(local_18 + 0x9c70) < 1000)) {
        fVar2 = _DAT_01fba970 * _DAT_0058ce2f;
        fVar3 = _DAT_01fba974 * _DAT_0058ce2f;
        local_54 = *(float *)(local_18 + 0x30);
        fVar6 = (float)_DAT_0058ce37;
        fVar4 = _DAT_01fba94c * fVar6;
        local_4c = local_58;
        (&local_48)[(uint)bVar9 * -2] = (&local_54)[(uint)bVar9 * -2];
        (&local_44)[(uint)bVar9 * -2 + (uint)bVar9 * -2] =
             (&local_50)[(uint)bVar9 * -2 + (uint)bVar9 * -2];
        fVar5 = (float)(int)local_48;
        local_14 = local_44;
        fVar1 = (float)local_44;
        local_40 = _DAT_01fba96c * _DAT_0058ce2f;
        local_3c = fVar2;
        local_38 = fVar3;
        round
                  ((double)((float)(int)local_4c * _DAT_01fba96c * _DAT_0058ce2f));
        local_7c = 0x4f1b13;
        round((double)(fVar1 * fVar3));
        pCVar12 = (CVector3i *)0x4f1b22;
        dVar10 = round((double)(fVar4 + fVar5 * fVar2 + fVar6));
        iVar8 = (int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&pCVar7->vertex_buffer_ptr->projected_vertex,pCVar12);
        pCVar7 = DAT_005ae704;
        local_20 = local_7c;
        pCVar12 = (CVector3i *)0x4f1b52;
        round((double)((float)local_7c + local_4c));
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&pCVar7->vertex_buffer_ptr[1].projected_vertex,pCVar12);
        pCVar7 = DAT_005ae704;
        puVar11 = &stack0xffffff80;
        pCVar12 = (CVector3i *)0x4f1b86;
        local_24 = iVar8;
        dVar10 = round((double)((float)iVar8 + local_48));
        local_7c = (int)ROUND(dVar10);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&pCVar7->vertex_buffer_ptr[2].projected_vertex,pCVar12);
        pCVar7 = DAT_005ae704;
        local_28 = puVar11;
        round((double)((float)(int)puVar11 - local_54));
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&pCVar7->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)&stack0xffffff7c);
        pCVar7 = DAT_005ae704;
        DAT_005ae704->vertex_buffer_ptr->r = (int)local_38;
        pCVar7->vertex_buffer_ptr->g = (int)local_40;
        pCVar7->vertex_buffer_ptr->b = (int)local_3c;
        pCVar7->vertex_buffer_ptr->a = local_34;
        pCVar7->vertex_buffer_ptr[1].r = (int)local_38;
        pCVar7->vertex_buffer_ptr[1].g = (int)local_40;
        pCVar7->vertex_buffer_ptr[1].b = (int)local_3c;
        pCVar7->vertex_buffer_ptr[1].a = local_34;
        pCVar7->vertex_buffer_ptr[2].r = (int)local_38;
        pCVar7->vertex_buffer_ptr[2].g = (int)local_40;
        pCVar7->vertex_buffer_ptr[2].b = (int)local_3c;
        pCVar7->vertex_buffer_ptr[2].a = local_34;
        pCVar7->vertex_buffer_ptr[3].r = (int)local_38;
        pCVar7->vertex_buffer_ptr[3].g = (int)local_40;
        pCVar7->vertex_buffer_ptr[3].b = (int)local_3c;
        pCVar7->vertex_buffer_ptr[3].a = local_34;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
                  (pCVar7,(SMRGLPrimitivePoly *)0x1e42810);
      }
      local_50 = local_50 + 1;
      local_18 = local_18 + 400;
    } while (local_50 < 100);
    local_58 = (float)((int)local_58 + 1);
    local_2c = local_2c + 4;
  } while ((int)local_58 < 100);
  local_7c = 0x4f1a63;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(DAT_005ae704,1);
  return;
}
