// Name: core_gore.cpp_CFootstep_render_FUN_004ce310
// Address: 004ce310
// Address Range: [[004ce310, 004ce521]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_render_FUN_004ce310(CFootstep *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CFootstep_render_FUN_004ce310(CFootstep *this_ptr,int expire_flag)

{
  uint uVar1;
  CVector3f *pCVar2;
  SRenderVertex *output;
  CVector3i local_1c;
  
  uVar1 = (g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).base.location.area_id;
  if (this_ptr->area_id == uVar1) {
    _DAT_01d22ea0 = this_ptr->area_id ^ uVar1;
    g_SMRGLHeaderPrimitive_01d22e88.base.count = 4;
    _DAT_01d22ea4 = 1;
    _DAT_01d22ea8 = 2;
    _DAT_01d22eac = 3;
    g_SRenderVertex_ARRAY_0060b014[0].u = 0x80000;
    g_SRenderVertex_ARRAY_0060b014[1].u = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[2].u = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[2].v = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[3].v = 0xf80000;
    g_SRenderVertex_ARRAY_0060b014[0].v = 0x80000;
    g_SRenderVertex_ARRAY_0060b014[1].v = 0x80000;
    g_SRenderVertex_ARRAY_0060b014[3].u = 0x80000;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
              (g_CDemonRenderer_PTR_005f2afc,this_ptr->alpha);
    g_SMRGLHeaderPrimitive_01d22e88.surface_normal.A.i = 0;
    g_SMRGLHeaderPrimitive_01d22e88.surface_normal.B.i = 0;
    g_SMRGLHeaderPrimitive_01d22e88.surface_normal.C.i = 0;
    g_SMRGLHeaderPrimitive_01d22e88.surface_normal.D.i = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (g_CDemonRenderer_PTR_005f2afc,&g_FootstepTexture);
    pCVar2 = this_ptr->corners;
    output = g_SRenderVertex_ARRAY_0060b014;
    do {
      local_1c.x = (int)ROUND(pCVar2->x * 256.0f);
      local_1c.y = (int)ROUND(pCVar2->y * 256.0f);
      local_1c.z = (int)ROUND(pCVar2->z * 256.0f);
      pCVar2 = pCVar2 + 1;
      engine_special_cpp_transformPoint_FUN_0056356c(&output->projected_vertex,&local_1c);
      output = output + 1;
    } while (pCVar2 != (CVector3f *)&this_ptr->alpha);
    if (this_ptr->is_bloody == 0) {
      g_SRenderVertex_ARRAY_0060b014[0].g = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[0].b = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[1].r = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[1].g = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[1].b = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[2].r = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[2].g = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[2].b = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[3].r = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[3].g = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[3].b = 0x7ff;
      g_SRenderVertex_ARRAY_0060b014[0].r = 0x7ff;
    }
    else {
      core_gore_cpp_getBloodColorParams_FUN_004cc970
                (this_ptr->blood_type,&g_SRenderVertex_ARRAY_0060b014[0].r,
                 &g_SRenderVertex_ARRAY_0060b014[0].g,&g_SRenderVertex_ARRAY_0060b014[0].b);
      core_gore_cpp_getBloodColorParams_FUN_004cc970
                (this_ptr->blood_type,&g_SRenderVertex_ARRAY_0060b014[1].r,
                 &g_SRenderVertex_ARRAY_0060b014[1].g,&g_SRenderVertex_ARRAY_0060b014[1].b);
      core_gore_cpp_getBloodColorParams_FUN_004cc970
                (this_ptr->blood_type,&g_SRenderVertex_ARRAY_0060b014[2].r,
                 &g_SRenderVertex_ARRAY_0060b014[2].g,&g_SRenderVertex_ARRAY_0060b014[2].b);
      core_gore_cpp_getBloodColorParams_FUN_004cc970
                (this_ptr->blood_type,&g_SRenderVertex_ARRAY_0060b014[3].r,
                 &g_SRenderVertex_ARRAY_0060b014[3].g,&g_SRenderVertex_ARRAY_0060b014[3].b);
    }
    engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730
              (g_CDemonRenderer_PTR_005f2afc,&g_SMRGLHeaderPrimitive_01d22e88);
    if (expire_flag != 0) {
      this_ptr->expired = 1;
      return;
    }
  }
  return;
}
