// Name: core_gore.cpp_CFootstep_render_FUN_004afa20
// Address: 004afa20
// Address Range: [[004afa20, 004afd74]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_render_FUN_004afa20(CFootstep *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CFootstep_render_FUN_004afa20(CFootstep *this_ptr,int expire_flag)

{
  uint uVar1;
  CVector3f *pCVar2;
  SProjectedVertex *output;
  CVector3i local_1c;
  
  _DAT_01c78cc4 = 4;
  _DAT_01c78cd8 = 0;
  _DAT_01c78cdc = 1;
  _DAT_01c78ce0 = 2;
  _DAT_01c78ce4 = 3;
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0x80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0xf80000;
  _DAT_005c50c0 = 0xf80000;
  _DAT_005c5060 = 0x80000;
  _DAT_005c50bc = 0x80000;
  output = (SProjectedVertex *)&DAT_005c5014;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,this_ptr->alpha);
  _DAT_01c78cc8 = 0;
  _DAT_01c78ccc = 0;
  _DAT_01c78cd0 = 0;
  _DAT_01c78cd4 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005ba84c);
  pCVar2 = this_ptr->corners;
  do {
    local_1c.x = (int)ROUND(pCVar2->x * 256.0f);
    local_1c.y = (int)ROUND(pCVar2->y * 256.0f);
    local_1c.z = (int)ROUND(pCVar2->z * 256.0f);
    pCVar2 = pCVar2 + 1;
    engine_special_cpp_transformPoint_FUN_00530a25(output,&local_1c);
    output = output + 2;
  } while (pCVar2 != (CVector3f *)&this_ptr->alpha);
  if (this_ptr->is_bloody == 0) {
    DAT_005c5038 = 0x7ff;
    DAT_005c503c = 0x7ff;
    DAT_005c5064 = 0x7ff;
    DAT_005c5068 = 0x7ff;
    DAT_005c506c = 0x7ff;
    DAT_005c5094 = 0x7ff;
    DAT_005c5098 = 0x7ff;
    DAT_005c509c = 0x7ff;
    DAT_005c50c4 = 0x7ff;
    DAT_005c50c8 = 0x7ff;
    DAT_005c50cc = 0x7ff;
    DAT_005c5034 = 0x7ff;
    goto LAB_004afc11;
  }
  uVar1 = this_ptr->blood_type;
  if (uVar1 == 0) {
LAB_004afca4:
    DAT_005c5034 = 0x2000;
    DAT_005c5038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5038 = 0x7f80;
    DAT_005c5034 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004afca4;
    DAT_005c5038 = 0;
    DAT_005c5034 = 0;
  }
  DAT_005c503c = 0;
  uVar1 = this_ptr->blood_type;
  if (uVar1 == 0) {
LAB_004afb8a:
    DAT_005c5064 = 0x2000;
    DAT_005c5068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5068 = 0x7f80;
    DAT_005c5064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004afb8a;
    DAT_005c5068 = 0;
    DAT_005c5064 = 0;
  }
  DAT_005c506c = 0;
  uVar1 = this_ptr->blood_type;
  if (uVar1 == 0) {
LAB_004afbbc:
    DAT_005c5094 = 0x2000;
    DAT_005c5098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5098 = 0x7f80;
    DAT_005c5094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004afbbc;
    DAT_005c5098 = 0;
    DAT_005c5094 = 0;
  }
  DAT_005c509c = 0;
  uVar1 = this_ptr->blood_type;
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_005c50c8 = 0x7f80;
      DAT_005c50cc = 0;
      DAT_005c50c4 = 0;
      goto LAB_004afc11;
    }
    if (uVar1 == 2) {
      DAT_005c50c8 = 0;
      DAT_005c50cc = 0;
      DAT_005c50c4 = 0;
      goto LAB_004afc11;
    }
  }
  DAT_005c50c4 = 0x2000;
  DAT_005c50c8 = 0;
  DAT_005c50cc = 0;
LAB_004afc11:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLHeaderPrimitive *)0x1c78cc0);
  this_ptr->expired = 1;
  return;
}
