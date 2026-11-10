// Name: core_gore.cpp_CFootstep_render_FUN_004e5860
// Address: 004e5860
// Address Range: [[004e5860, 004e5bc5]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CFootstep_render_FUN_004e5860(CFootstep *this_ptr,int expire_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CFootstep_render_FUN_004e5860(CFootstep *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  CVector3f *pCVar2;
  SProjectedVertex *output;
  CVector3i local_1c;
  
  _DAT_01cd0e84 = 4;
  _DAT_01cd0e98 = 0;
  _DAT_01cd0e9c = 1;
  _DAT_01cd0ea0 = 2;
  _DAT_01cd0ea4 = 3;
  DAT_0062902c = 0x80000;
  _DAT_00629030 = 0x80000;
  _DAT_0062905c = 0xf80000;
  _DAT_0062908c = 0xf80000;
  DAT_00629090 = 0xf80000;
  _DAT_006290c0 = 0xf80000;
  _DAT_00629060 = 0x80000;
  _DAT_006290bc = 0x80000;
  output = (SProjectedVertex *)&DAT_00629014;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,this_ptr->alpha);
  _DAT_01cd0e88 = 0;
  _DAT_01cd0e8c = 0;
  _DAT_01cd0e90 = 0;
  _DAT_01cd0e94 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061ee2c);
  pCVar2 = this_ptr->corners;
  do {
    local_1c.x = (int)ROUND(pCVar2->x * _DAT_006016a8);
    local_1c.y = (int)ROUND(pCVar2->y * _DAT_006016a8);
    local_1c.z = (int)ROUND(pCVar2->z * _DAT_006016a8);
    pCVar2 = pCVar2 + 1;
    engine_special_cpp_FUN_0058043c(output,&local_1c);
    output = output + 0x30;
  } while (pCVar2 != (CVector3f *)&this_ptr->alpha);
  if (this_ptr->is_bloody == 0) {
    DAT_00629038 = 0x7ff;
    DAT_0062903c = 0x7ff;
    DAT_00629064 = 0x7ff;
    DAT_00629068 = 0x7ff;
    DAT_0062906c = 0x7ff;
    DAT_00629094 = 0x7ff;
    DAT_00629098 = 0x7ff;
    DAT_0062909c = 0x7ff;
    DAT_006290c4 = 0x7ff;
    DAT_006290c8 = 0x7ff;
    DAT_006290cc = 0x7ff;
    DAT_00629034 = 0x7ff;
    goto LAB_004e5a35;
  }
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e598c:
    DAT_00629034 = 0x2000;
    DAT_00629038 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629038 = 0x7f80;
    DAT_00629034 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e598c;
    DAT_00629038 = 0;
    DAT_00629034 = 0;
  }
  DAT_0062903c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e59be:
    DAT_00629064 = 0x2000;
    DAT_00629068 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629068 = 0x7f80;
    DAT_00629064 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e59be;
    DAT_00629068 = 0;
    DAT_00629064 = 0;
  }
  DAT_0062906c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004e59f0:
    DAT_00629094 = 0x2000;
    DAT_00629098 = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    DAT_00629098 = 0x7f80;
    DAT_00629094 = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004e59f0;
    DAT_00629098 = 0;
    DAT_00629094 = 0;
  }
  DAT_0062909c = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      DAT_006290c8 = 0x7f80;
      DAT_006290cc = 0;
      DAT_006290c4 = 0;
      goto LAB_004e5a35;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      DAT_006290c8 = 0;
      DAT_006290cc = 0;
      DAT_006290c4 = 0;
      goto LAB_004e5a35;
    }
  }
  DAT_006290c4 = 0x2000;
  DAT_006290c8 = 0;
  DAT_006290cc = 0;
LAB_004e5a35:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
            (DAT_00612560,(SMRGLHeaderPrimitive *)0x1cd0e80);
  if (expire_flag != 0) {
    this_ptr->expired = 1;
    return;
  }
  return;
}
