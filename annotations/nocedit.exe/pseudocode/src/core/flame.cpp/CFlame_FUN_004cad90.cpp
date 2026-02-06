// Name: core_flame.cpp_CFlame_FUN_004cad90
// Address: 004cad90
// Address Range: [[004cad90, 004cadfc]]
// Convention: __cdecl
// Signature: void __cdecl core_flame_cpp_CFlame_FUN_004cad90(CFlame *this_ptr)

#include "nocturne.h"

void __cdecl core_flame_cpp_CFlame_FUN_004cad90(CFlame *this_ptr)

{
  int iVar1;
  int iVar2;
  double dVar3;
  CColor3f local_28;
  int iStack_18;
  float local_14;
  
  local_28.r = (this_ptr->base).location.position.x;
  local_28.b = (this_ptr->base).location.position.z;
  local_28.g = (this_ptr->flame_size).y * (float)0.5 +
               (this_ptr->base).location.position.y;
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310((CDemonGlobe *)(this_ptr->unk1 + 4),&local_28);
  local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-this_ptr->randomness,this_ptr->randomness);
  dVar3 = round
                    ((double)((local_14 + this_ptr->intensity) * (float)65535));
  iStack_18 = (int)ROUND(dVar3);
  *(int *)(this_ptr->unk1 + 0x40) = iStack_18;
  iVar1 = (iStack_18 + (iStack_18 >> 0x1f) * -0x100) - (uint)((iStack_18 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  this_ptr->unk1[0x20] = (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(this_ptr->unk1 + 4),
             (this_ptr->flame_size).y * this_ptr->globe_scalar * (float)2);
  this_ptr->unk1[0x24] = '\x02';
  this_ptr->unk1[0x25] = '\0';
  this_ptr->unk1[0x26] = '\0';
  this_ptr->unk1[0x27] = '\0';
  return;
}
