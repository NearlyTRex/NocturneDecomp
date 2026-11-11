// Name: core_gore.cpp_FUN_004c7580
// Address: 004c7580
// Address Range: [[004c7580, 004c7d91]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004c7580(CVector3f *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004c7580(CVector3f *param_1)

{
  SRenderVertex *output;
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_10d4 [1000];
  CVector3f *world_position;
  float fStack_118;
  float fStack_114;
  CVector3i CStack_110;
  CVector3i CStack_104;
  CVector3i CStack_f8;
  float fStack_ec;
  float afStack_e8 [5];
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [2];
  CVector3i CStack_bc;
  CVector3i CStack_b0;
  float fStack_a4;
  float afStack_a0 [2];
  CVector3i CStack_98;
  float fStack_8c;
  float afStack_88 [2];
  CVector3i CStack_80;
  float fStack_74;
  float afStack_70 [2];
  CVector3i CStack_68;
  CVector3i CStack_5c;
  CVector3i aCStack_50 [2];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  float fStack_28;
  int *piStack_24;
  float fStack_20;
  CVector3f *pCStack_1c;
  int iStack_18;
  
  bVar7 = 0;
  output = DAT_0060b280->vertex_buffer_ptr;
  CStack_110.x = (int)ROUND(param_1->x * _DAT_005f7ba8);
  CStack_110.y = (int)ROUND(param_1->y * _DAT_005f7ba8);
  CStack_110.z = (int)ROUND(param_1->z * _DAT_005f7ba8);
  engine_special_cpp_FUN_0055d9ec(&output->projected_vertex,&CStack_110);
  if ((int)((output->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(DAT_0060b280,param_1);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)&DAT_01cb82b0,(CVector3i *)0x0);
  afStack_e8[2] = -0.1;
  afStack_e8[4] = 0.0;
  afStack_e8[3] = -0.1;
  CStack_80.x = (int)ROUND(_DAT_005f7ba8 * -0.1);
  CStack_80.y = (int)ROUND(_DAT_005f7ba8 * -0.1);
  CStack_80.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_80);
  afStack_e8[2] = 0.1;
  afStack_e8[3] = -0.1;
  afStack_e8[4] = 0.0;
  CStack_98.x = (int)ROUND(_DAT_005f7ba8 * 0.1);
  CStack_98.y = (int)ROUND(_DAT_005f7ba8 * -0.1);
  CStack_98.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_98);
  afStack_e8[2] = 0.1;
  afStack_e8[4] = 0.0;
  afStack_e8[3] = 0.1;
  CStack_5c.x = (int)ROUND(_DAT_005f7ba8 * 0.1);
  CStack_5c.y = (int)ROUND(_DAT_005f7ba8 * 0.1);
  CStack_5c.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_5c);
  afStack_e8[2] = -0.1;
  afStack_e8[3] = 0.1;
  afStack_e8[4] = 0.0;
  CStack_f8.x = (int)ROUND(_DAT_005f7ba8 * -0.1);
  CStack_f8.y = (int)ROUND(_DAT_005f7ba8 * 0.1);
  CStack_f8.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
  engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_f8);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_006167f0);
  _DAT_0062205c = ((uint)param_1[5].z & 3) * 0x400000;
  iVar4 = ((int)param_1[5].z >> 2 & 3U) * 0x400000;
  DAT_0062202c = _DAT_0062205c + 0x80000;
  _DAT_00622030 = iVar4 + 0x80000;
  _DAT_0062205c = _DAT_0062205c + 0x380000;
  DAT_00622090 = iVar4 + 0x380000;
  CStack_b0.x = (int)ROUND(param_1->x * _DAT_005f7ba8);
  CStack_b0.y = (int)ROUND(param_1->y * _DAT_005f7ba8);
  CStack_b0.z = (int)ROUND(param_1->z * _DAT_005f7ba8);
  _DAT_00622060 = _DAT_00622030;
  _DAT_0062208c = _DAT_0062205c;
  _DAT_006220bc = DAT_0062202c;
  _DAT_006220c0 = DAT_00622090;
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,&CStack_b0,(CVector3i *)&DAT_01cb82bc,0,4);
  piStack_24 = &iStack_30;
  fVar1 = param_1[5].y;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (fVar1 != 0.0) {
    if ((uint)fVar1 < 2) {
      iStack_30 = 0x9a80;
      iStack_34 = 0xb100;
      iStack_2c = 0x9000;
      goto LAB_004c787c;
    }
    if (fVar1 == 2.8026e-45) {
      iStack_30 = 0;
      iStack_34 = 0;
      iStack_2c = 0;
      goto LAB_004c787c;
    }
  }
  iStack_2c = 0x2000;
  *piStack_24 = 0;
  iStack_34 = 0;
LAB_004c787c:
  iVar4 = 0;
  do {
    lVar2 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_00622034 + iVar4);
    *(uint *)((int)&DAT_00622034 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)iStack_30 * (longlong)*(int *)((int)&DAT_00622038 + iVar4);
    *(uint *)((int)&DAT_00622038 + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar3 = iVar4 + 0x30;
    lVar2 = (longlong)iStack_34 * (longlong)*(int *)((int)&DAT_0062203c + iVar4);
    *(uint *)((int)&DAT_0062203c + iVar4) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar4 = iVar3;
  } while (iVar3 != 0xc0);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff - _DAT_01c38aec)
  ;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb8288);
  engine_matrix_c_pop_FUN_0046b4a0();
  fStack_114 = 1.0;
  puVar5 = (uint *)((int)param_1 + (uint)bVar7 * -8 + 4);
  CStack_d4.x = param_1->x;
  *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + 4) = *puVar5;
  *(uint *)((int)&CStack_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
       puVar5[(uint)bVar7 * -2 + 1];
  fStack_118 = 0.025;
  iStack_18 = 0;
  pCStack_1c = param_1 + 2;
  pfVar6 = (float *)((int)param_1 + (uint)bVar7 * -8 + 0x10);
  fStack_ec = param_1[1].x;
  afStack_e8[(uint)bVar7 * -2] = *pfVar6;
  afStack_e8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = pfVar6[(uint)bVar7 * -2 + 1];
  do {
    fStack_118 = fStack_118 * (float)_DAT_005d943a;
    fStack_8c = pCStack_1c->x * fStack_118;
    afStack_88[0] = pCStack_1c->y * fStack_118;
    afStack_88[1] = pCStack_1c->z * fStack_118;
    fStack_a4 = fStack_8c;
    afStack_a0[(uint)bVar7 * -2] = afStack_88[(uint)bVar7 * -2];
    afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    fStack_ec = fStack_ec - fStack_a4;
    fStack_114 = fStack_114 * (float)_DAT_005d943a;
    fStack_c8 = fStack_ec * fStack_118;
    afStack_e8[0] = afStack_e8[0] - afStack_a0[0];
    afStack_e8[1] = afStack_e8[1] - afStack_a0[1];
    world_position = &CStack_d4;
    afStack_c4[0] = afStack_e8[0] * fStack_118;
    afStack_c4[1] = afStack_e8[1] * fStack_118;
    fStack_74 = fStack_c8;
    afStack_70[(uint)bVar7 * -2] = afStack_c4[(uint)bVar7 * -2];
    afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_c4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    CStack_d4.x = CStack_d4.x - fStack_74;
    CStack_d4.y = CStack_d4.y - afStack_70[0];
    CStack_d4.z = CStack_d4.z - afStack_70[1];
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
              (DAT_0060b280,world_position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
              (DAT_0060b280,(CVector3i *)&DAT_01cb82b0,(CVector3i *)0x0);
    afStack_e8[2] = fStack_114 * (float)_DAT_005d9442;
    afStack_e8[4] = 0.0;
    aCStack_50[0].x = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    aCStack_50[0].y = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    aCStack_50[0].z = (int)ROUND(_DAT_005f7ba8 * 0.0);
    afStack_e8[3] = afStack_e8[2];
    fStack_20 = afStack_e8[2];
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr->projected_vertex,aCStack_50);
    afStack_e8[2] = fStack_114 * (float)_DAT_005d944a;
    afStack_e8[4] = 0.0;
    afStack_e8[3] = fStack_20;
    CStack_68.x = (int)ROUND(afStack_e8[2] * _DAT_005f7ba8);
    CStack_68.y = (int)ROUND(fStack_20 * _DAT_005f7ba8);
    CStack_68.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
    fStack_28 = afStack_e8[2];
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_68)
    ;
    afStack_e8[2] = fStack_28;
    afStack_e8[3] = fStack_28;
    afStack_e8[4] = 0.0;
    CStack_104.x = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    CStack_104.y = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    CStack_104.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_104);
    afStack_e8[4] = 0.0;
    afStack_e8[2] = fStack_20;
    afStack_e8[3] = fStack_28;
    CStack_bc.x = (int)ROUND(fStack_20 * _DAT_005f7ba8);
    CStack_bc.y = (int)ROUND(fStack_28 * _DAT_005f7ba8);
    CStack_bc.z = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_FUN_0055d723(&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_bc)
    ;
    CStack_b0.x = (int)ROUND(CStack_d4.x * _DAT_005f7ba8);
    CStack_b0.y = (int)ROUND(CStack_d4.y * _DAT_005f7ba8);
    CStack_b0.z = (int)ROUND(CStack_d4.z * _DAT_005f7ba8);
    core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
              (g_CDemonSetPtr,&CStack_b0,(CVector3i *)&DAT_01cb82bc,0,4);
    iVar4 = 0;
    do {
      lVar2 = (longlong)iStack_2c * (longlong)*(int *)((int)&DAT_00622034 + iVar4);
      *(uint *)((int)&DAT_00622034 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)iStack_30 * (longlong)*(int *)((int)&DAT_00622038 + iVar4);
      *(uint *)((int)&DAT_00622038 + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar3 = iVar4 + 0x30;
      lVar2 = (longlong)iStack_34 * (longlong)*(int *)((int)&DAT_0062203c + iVar4);
      *(uint *)((int)&DAT_0062203c + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar3;
    } while (iVar3 != 0xc0);
    (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (DAT_0060b280,0xffff - _DAT_01c38aec);
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
              (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb8288);
    engine_matrix_c_pop_FUN_0046b4a0();
    iStack_18 = iStack_18 + 1;
  } while (iStack_18 < 3);
  return;
}
