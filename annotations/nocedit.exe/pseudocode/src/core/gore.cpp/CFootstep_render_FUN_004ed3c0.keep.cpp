// Name: core_gore.cpp_CFootstep_render_FUN_004ed3c0
// Address: 004ed3c0
// MANUAL RECONSTRUCTION
// Address Range: [[004ed3c0, 004ed725]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_render_FUN_004ed3c0(CFootstep *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CFootstep_render_FUN_004ed3c0(CFootstep *this_ptr,int expire_flag)

{
  uint uVar2;
  CVector3f *pCVar2;
  SRenderVertex *output;
  CVector3i local_1c;
  uint uVar1;
  
  g_FootstepPrimitive.base.base.count = 4;
  g_FootstepPrimitive.vertices[0] = 0;
  g_FootstepPrimitive.vertices[1] = 1;
  g_FootstepPrimitive.vertices[2] = 2;
  g_FootstepPrimitive.vertices[3] = 3;
  g_RenderVertexBuffer[0].u = 0x8 << 16;
  g_RenderVertexBuffer[0].v = 0x8 << 16;
  g_RenderVertexBuffer[1].u = 0xf8 << 16;
  g_RenderVertexBuffer[2].u = 0xf8 << 16;
  g_RenderVertexBuffer[2].v = 0xf8 << 16;
  g_RenderVertexBuffer[3].v = 0xf8 << 16;
  g_RenderVertexBuffer[1].v = 0x8 << 16;
  g_RenderVertexBuffer[3].u = 0x8 << 16;
  output = g_RenderVertexBuffer;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,this_ptr->alpha);
  g_FootstepPrimitive.base.surface_normal.A.i = 0;
  g_FootstepPrimitive.base.surface_normal.B.i = 0;
  g_FootstepPrimitive.base.surface_normal.C.i = 0;
  g_FootstepPrimitive.base.surface_normal.D.i = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&g_FootstepTexture);
  pCVar2 = this_ptr->corners;
  do {
    local_1c.x = (int)ROUND(pCVar2->x * 256.0f);
    local_1c.y = (int)ROUND(pCVar2->y * 256.0f);
    local_1c.z = (int)ROUND(pCVar2->z * 256.0f);
    pCVar2 = pCVar2 + 1;
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&output->projected_vertex,&local_1c);
    output = output + 1;
  } while (pCVar2 != (CVector3f *)&this_ptr->alpha);
  if (this_ptr->is_bloody == 0) {
    g_RenderVertexBuffer[0].g = 0x7ff;
    g_RenderVertexBuffer[0].b = 0x7ff;
    g_RenderVertexBuffer[1].r = 0x7ff;
    g_RenderVertexBuffer[1].g = 0x7ff;
    g_RenderVertexBuffer[1].b = 0x7ff;
    g_RenderVertexBuffer[2].r = 0x7ff;
    g_RenderVertexBuffer[2].g = 0x7ff;
    g_RenderVertexBuffer[2].b = 0x7ff;
    g_RenderVertexBuffer[3].r = 0x7ff;
    g_RenderVertexBuffer[3].g = 0x7ff;
    g_RenderVertexBuffer[3].b = 0x7ff;
    g_RenderVertexBuffer[0].r = 0x7ff;
    goto LAB_004ed595;
  }
  uVar1 = this_ptr->blood_type;
  if (uVar1 == 0) {
LAB_004ed4ec:
    g_RenderVertexBuffer[0].r = 0x2000;
    g_RenderVertexBuffer[0].g = 0;
  }
  else if (uVar1 < 2) {
    g_RenderVertexBuffer[0].g = 0x7f80;
    g_RenderVertexBuffer[0].r = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004ed4ec;
    g_RenderVertexBuffer[0].g = 0;
    g_RenderVertexBuffer[0].r = 0;
  }
  g_RenderVertexBuffer[0].b = 0;
  uVar2 = this_ptr->blood_type;
  if (uVar2 == 0) {
LAB_004ed51e:
    g_RenderVertexBuffer[1].r = 0x2000;
    g_RenderVertexBuffer[1].g = 0;
  }
  else if (uVar2 < 2) {
    g_RenderVertexBuffer[1].g = 0x7f80;
    g_RenderVertexBuffer[1].r = 0;
  }
  else {
    if (uVar2 != 2) goto LAB_004ed51e;
    g_RenderVertexBuffer[1].g = 0;
    g_RenderVertexBuffer[1].r = 0;
  }
  g_RenderVertexBuffer[1].b = 0;
  uVar2 = this_ptr->blood_type;
  if (uVar2 == 0) {
LAB_004ed550:
    g_RenderVertexBuffer[2].r = 0x2000;
    g_RenderVertexBuffer[2].g = 0;
  }
  else if (uVar2 < 2) {
    g_RenderVertexBuffer[2].g = 0x7f80;
    g_RenderVertexBuffer[2].r = 0;
  }
  else {
    if (uVar2 != 2) goto LAB_004ed550;
    g_RenderVertexBuffer[2].g = 0;
    g_RenderVertexBuffer[2].r = 0;
  }
  g_RenderVertexBuffer[2].b = 0;
  uVar2 = this_ptr->blood_type;
  if (uVar2 != 0) {
    if (uVar2 < 2) {
      g_RenderVertexBuffer[3].g = 0x7f80;
      g_RenderVertexBuffer[3].b = 0;
      g_RenderVertexBuffer[3].r = 0;
      goto LAB_004ed595;
    }
    if (uVar2 == 2) {
      g_RenderVertexBuffer[3].g = 0;
      g_RenderVertexBuffer[3].b = 0;
      g_RenderVertexBuffer[3].r = 0;
      goto LAB_004ed595;
    }
  }
  g_RenderVertexBuffer[3].r = 0x2000;
  g_RenderVertexBuffer[3].g = 0;
  g_RenderVertexBuffer[3].b = 0;
LAB_004ed595:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0048bcf0
            (g_CDemonRendererPtr2,&g_FootstepPrimitive.base);
  if (expire_flag != 0) {
    this_ptr->expired = 1;
    return;
  }
  return;
}
