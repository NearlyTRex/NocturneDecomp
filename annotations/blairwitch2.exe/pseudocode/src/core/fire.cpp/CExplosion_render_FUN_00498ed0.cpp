// Name: core_fire.cpp_CExplosion_render_FUN_00498ed0
// Address: 00498ed0
// Address Range: [[00498ed0, 00499268]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_00498ed0(CExplosion *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CExplosion_render_FUN_00498ed0(CExplosion *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  int aiStackY_1048 [999];
  CVector3f *translation;
  SMRGLHeaderPrimitive local_94;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  CVector3i local_6c;
  CVector3f local_60;
  CVector3i local_54;
  float local_48;
  float local_44;
  float local_40;
  CVector3i local_3c;
  float local_30;
  int aiStack_2c [2];
  CVector3i local_24;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  bVar2 = 0;
  if (ABS(this_ptr->lifetime) == 0.0) {
    return;
  }
  fVar3 = ((float10)1 - (float10)this_ptr->lifetime) * (float10)_DAT_005d551a;
  round();
  local_18 = (int)ROUND(fVar3);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_00615244 + local_18 * 0x30));
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,&this_ptr->position);
  engine_matrix_c_FUN_0046b670(DAT_0060b280);
  translation = (CVector3f *)0x0;
  local_60.x = local_30;
  *(int *)((int)&local_60 + (uint)bVar2 * -8 + 4) = aiStack_2c[(uint)bVar2 * -2];
  *(int *)((int)&local_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       aiStack_2c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_60,translation);
  fVar3 = (float10)this_ptr->scale * (float10)_DAT_005d5532 * (float10)_DAT_005d552a;
  fVar4 = -(float10)this_ptr->scale * (float10)_DAT_005d5522 * (float10)_DAT_005d552a;
  round();
  iVar1 = round();
  local_c = (int)ROUND(fVar3);
  local_10 = (int)ROUND(fVar4);
  if (iVar1 != 0) {
    local_c = -local_c;
    local_10 = -local_10;
  }
  local_8 = local_10;
  local_48 = (float)local_10;
  local_44 = this_ptr->scale * _DAT_005d553a * (float)_DAT_005d552a;
  local_40 = 0.0;
  local_24.x = (int)ROUND(local_48 * _DAT_005f64e4);
  local_24.y = (int)ROUND(local_44 * _DAT_005f64e4);
  local_24.z = (int)ROUND(_DAT_005f64e4 * 0.0);
  local_14 = local_48;
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&local_24);
  local_8 = local_c;
  local_48 = (float)local_c;
  local_54.x = (int)ROUND(local_48 * _DAT_005f64e4);
  local_54.y = (int)ROUND(local_44 * _DAT_005f64e4);
  local_54.z = (int)ROUND(local_40 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&local_54);
  local_44 = -this_ptr->scale * (float)_DAT_005d5542 * (float)_DAT_005d552a;
  local_3c.x = (int)ROUND(local_48 * _DAT_005f64e4);
  local_3c.y = (int)ROUND(local_44 * _DAT_005f64e4);
  local_3c.z = (int)ROUND(local_40 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&local_3c);
  local_48 = local_14;
  local_6c.x = (int)ROUND(local_14 * _DAT_005f64e4);
  local_6c.y = (int)ROUND(local_44 * _DAT_005f64e4);
  local_6c.z = (int)ROUND(local_40 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&local_6c);
  this_ptr_00 = DAT_0060b280;
  *(uint *)(DAT_0060b280->vertex_buffer_ptr + 0x18) = 0x20000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x1c) = 0x20000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x48) = 0xfe0000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x4c) = 0x20000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x78) = 0xfe0000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x7c) = 0xfe0000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xa8) = 0x20000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xac) = 0xfe0000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x2c) = 0x8000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x5c) = 0x8000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x8c) = 0x8000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xbc) = 0x8000;
  local_94.base.count = 4;
  local_94.surface_normal.D.i = 0;
  local_94.surface_normal.C.i = 0;
  local_94.surface_normal.B.i = 0;
  local_94.surface_normal.A.i = 0;
  local_7c = 0;
  local_70 = 3;
  local_78 = 1;
  local_74 = 2;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr_00,1);
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(DAT_0060b280,&local_94,0x123);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
