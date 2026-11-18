// Name: core_gore.cpp_CFootstep_render_FUN_004c9000
// Address: 004c9000
// Address Range: [[004c9000, 004c93b5]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_render_FUN_004c9000(CFootstep *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CFootstep_render_FUN_004c9000(CFootstep *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  CVector3f *pCVar2;
  SRenderVertex *output;
  CVector3i local_1c;
  
  g_FootstepPrimitive.base.base.count = 4;
  g_FootstepPrimitive.vertices[0] = 0;
  g_FootstepPrimitive.vertices[1] = 1;
  g_FootstepPrimitive.vertices[2] = 2;
  g_FootstepPrimitive.vertices[3] = 3;
  g_SRenderVertex_ARRAY_00622014[0].u = 0x80000;
  g_SRenderVertex_ARRAY_00622014[0].v = 0x80000;
  g_SRenderVertex_ARRAY_00622014[1].u = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[2].u = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[2].v = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[3].v = 0xf80000;
  g_SRenderVertex_ARRAY_00622014[1].v = 0x80000;
  g_SRenderVertex_ARRAY_00622014[3].u = 0x80000;
  output = g_SRenderVertex_ARRAY_00622014;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
            (g_CDemonRenderer_PTR_0060b280,this_ptr->alpha);
  g_FootstepPrimitive.base.surface_normal.A.i = 0;
  g_FootstepPrimitive.base.surface_normal.B.i = 0;
  g_FootstepPrimitive.base.surface_normal.C.i = 0;
  g_FootstepPrimitive.base.surface_normal.D.i = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (g_CDemonRenderer_PTR_0060b280,&g_FootstepTexture);
  pCVar2 = this_ptr->corners;
  do {
    local_1c.x = (int)ROUND(pCVar2->x * 256.0f);
    local_1c.y = (int)ROUND(pCVar2->y * 256.0f);
    local_1c.z = (int)ROUND(pCVar2->z * 256.0f);
    pCVar2 = pCVar2 + 1;
    engine_special_cpp_transformPoint_FUN_0055d9ec(&output->projected_vertex,&local_1c);
    output = output + 1;
  } while (pCVar2 != (CVector3f *)&this_ptr->alpha);
  if (this_ptr->is_bloody == 0) {
    g_SRenderVertex_ARRAY_00622014[0].g = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[0].b = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[1].r = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[1].g = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[1].b = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[2].r = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[2].g = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[2].b = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[3].r = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[3].g = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[3].b = 0x7ff;
    g_SRenderVertex_ARRAY_00622014[0].r = 0x7ff;
    goto LAB_004c915e;
  }
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c91eb:
    g_SRenderVertex_ARRAY_00622014[0].r = 0x2000;
    g_SRenderVertex_ARRAY_00622014[0].g = 0;
    g_SRenderVertex_ARRAY_00622014[0].b = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00622014[0].g = 0x9a80;
    g_SRenderVertex_ARRAY_00622014[0].b = 0xb100;
    g_SRenderVertex_ARRAY_00622014[0].r = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c91eb;
    g_SRenderVertex_ARRAY_00622014[0].g = 0;
    g_SRenderVertex_ARRAY_00622014[0].b = 0;
    g_SRenderVertex_ARRAY_00622014[0].r = 0;
  }
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c922c:
    g_SRenderVertex_ARRAY_00622014[1].r = 0x2000;
    g_SRenderVertex_ARRAY_00622014[1].g = 0;
    g_SRenderVertex_ARRAY_00622014[1].b = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00622014[1].g = 0x9a80;
    g_SRenderVertex_ARRAY_00622014[1].b = 0xb100;
    g_SRenderVertex_ARRAY_00622014[1].r = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c922c;
    g_SRenderVertex_ARRAY_00622014[1].g = 0;
    g_SRenderVertex_ARRAY_00622014[1].b = 0;
    g_SRenderVertex_ARRAY_00622014[1].r = 0;
  }
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c926d:
    g_SRenderVertex_ARRAY_00622014[2].r = 0x2000;
    g_SRenderVertex_ARRAY_00622014[2].g = 0;
    g_SRenderVertex_ARRAY_00622014[2].b = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_00622014[2].g = 0x9a80;
    g_SRenderVertex_ARRAY_00622014[2].b = 0xb100;
    g_SRenderVertex_ARRAY_00622014[2].r = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c926d;
    g_SRenderVertex_ARRAY_00622014[2].g = 0;
    g_SRenderVertex_ARRAY_00622014[2].b = 0;
    g_SRenderVertex_ARRAY_00622014[2].r = 0;
  }
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_00622014[3].g = 0x9a80;
      g_SRenderVertex_ARRAY_00622014[3].b = 0xb100;
      g_SRenderVertex_ARRAY_00622014[3].r = 0x9000;
      goto LAB_004c915e;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_00622014[3].g = 0;
      g_SRenderVertex_ARRAY_00622014[3].b = 0;
      g_SRenderVertex_ARRAY_00622014[3].r = 0;
      goto LAB_004c915e;
    }
  }
  g_SRenderVertex_ARRAY_00622014[3].r = 0x2000;
  g_SRenderVertex_ARRAY_00622014[3].g = 0;
  g_SRenderVertex_ARRAY_00622014[3].b = 0;
LAB_004c915e:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (g_CDemonRenderer_PTR_0060b280,&g_FootstepPrimitive.base);
  if (expire_flag != 0) {
    this_ptr->expired = 1;
    return;
  }
  return;
}
