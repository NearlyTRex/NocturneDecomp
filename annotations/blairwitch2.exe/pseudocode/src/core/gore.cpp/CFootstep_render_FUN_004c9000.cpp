// Name: core_gore.cpp_CFootstep_render_FUN_004c9000
// Address: 004c9000
// Address Range: [[004c9000, 004c93b5]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_render_FUN_004c9000(CFootstep *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CFootstep_render_FUN_004c9000(CFootstep *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  CVector3f *pCVar2;
  SProjectedVertex *output;
  CVector3i local_1c;
  
  _DAT_01cb82cc = 4;
  _DAT_01cb82e0 = 0;
  _DAT_01cb82e4 = 1;
  _DAT_01cb82e8 = 2;
  _DAT_01cb82ec = 3;
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0x80000;
  _DAT_0062205c = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0xf80000;
  _DAT_006220c0 = 0xf80000;
  _DAT_00622060 = 0x80000;
  _DAT_006220bc = 0x80000;
  output = (SProjectedVertex *)&DAT_00622014;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,this_ptr->alpha);
  _DAT_01cb82d0 = 0;
  _DAT_01cb82d4 = 0;
  _DAT_01cb82d8 = 0;
  _DAT_01cb82dc = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00617968);
  pCVar2 = this_ptr->corners;
  do {
    local_1c.x = (int)ROUND(pCVar2->x * _DAT_005f7ba8);
    local_1c.y = (int)ROUND(pCVar2->y * _DAT_005f7ba8);
    local_1c.z = (int)ROUND(pCVar2->z * _DAT_005f7ba8);
    pCVar2 = pCVar2 + 1;
    engine_special_cpp_transformPoint_FUN_0055d9ec(output,&local_1c);
    output = output + 2;
  } while (pCVar2 != (CVector3f *)&this_ptr->alpha);
  if (this_ptr->is_bloody == 0) {
    DAT_00622038 = 0x7ff;
    DAT_0062203c = 0x7ff;
    DAT_00622064 = 0x7ff;
    DAT_00622068 = 0x7ff;
    DAT_0062206c = 0x7ff;
    DAT_00622094 = 0x7ff;
    DAT_00622098 = 0x7ff;
    DAT_0062209c = 0x7ff;
    DAT_006220c4 = 0x7ff;
    DAT_006220c8 = 0x7ff;
    DAT_006220cc = 0x7ff;
    DAT_00622034 = 0x7ff;
    goto LAB_004c915e;
  }
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c91eb:
    DAT_00622034 = 0x2000;
    DAT_00622038 = 0;
    DAT_0062203c = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00622038 = 0x9a80;
    DAT_0062203c = 0xb100;
    DAT_00622034 = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c91eb;
    DAT_00622038 = 0;
    DAT_0062203c = 0;
    DAT_00622034 = 0;
  }
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c922c:
    DAT_00622064 = 0x2000;
    DAT_00622068 = 0;
    DAT_0062206c = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00622068 = 0x9a80;
    DAT_0062206c = 0xb100;
    DAT_00622064 = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c922c;
    DAT_00622068 = 0;
    DAT_0062206c = 0;
    DAT_00622064 = 0;
  }
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004c926d:
    DAT_00622094 = 0x2000;
    DAT_00622098 = 0;
    DAT_0062209c = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00622098 = 0x9a80;
    DAT_0062209c = 0xb100;
    DAT_00622094 = 0x9000;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004c926d;
    DAT_00622098 = 0;
    DAT_0062209c = 0;
    DAT_00622094 = 0;
  }
  EVar1 = this_ptr->blood_type;
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      DAT_006220c8 = 0x9a80;
      DAT_006220cc = 0xb100;
      DAT_006220c4 = 0x9000;
      goto LAB_004c915e;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      DAT_006220c8 = 0;
      DAT_006220cc = 0;
      DAT_006220c4 = 0;
      goto LAB_004c915e;
    }
  }
  DAT_006220c4 = 0x2000;
  DAT_006220c8 = 0;
  DAT_006220cc = 0;
LAB_004c915e:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb82c8);
  if (expire_flag != 0) {
    this_ptr->expired = 1;
    return;
  }
  return;
}
