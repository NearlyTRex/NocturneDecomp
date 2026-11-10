// Name: core_trigger.cpp_CTrigger_getBoundingBox_FUN_00578060
// Address: 00578060
// Address Range: [[00578060, 005780d1]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_trigger_cpp_CTrigger_getBoundingBox_FUN_00578060(CTrigger *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBoundingBox3D * __cdecl core_trigger_cpp_CTrigger_getBoundingBox_FUN_00578060(CTrigger *this_ptr,CBoundingBox3D *out_box)

{
  float fVar1;
  int iVar2;
  CBoundingBox3D *unaff_ESI;
  float *pfVar3;
  CBoundingBox3D *pCVar4;
  float afStack_1c [4];
  float fStack_c;
  float fStack_8;
  
  fVar1 = (float)_DAT_005ecd92;
  afStack_1c[1] = -0.1;
  afStack_1c[3] = *(float *)&this_ptr->field_0x2bc * fVar1;
  fStack_c = *(float *)&this_ptr->field_0x2c0 + (float)_DAT_005ecd9a;
  fStack_8 = *(float *)&this_ptr->field_0x2c4 * fVar1;
  afStack_1c[2] = -*(float *)&this_ptr->field_0x2c4 * fVar1;
  afStack_1c[0] = -*(float *)&this_ptr->field_0x2bc * fVar1;
  pfVar3 = afStack_1c;
  pCVar4 = unaff_ESI;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar4->min).x = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pCVar4 = (CBoundingBox3D *)&(pCVar4->min).y;
  }
  return unaff_ESI;
}
