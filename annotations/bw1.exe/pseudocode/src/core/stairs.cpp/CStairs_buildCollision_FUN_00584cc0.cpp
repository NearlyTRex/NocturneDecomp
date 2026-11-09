// Name: core_stairs.cpp_CStairs_buildCollision_FUN_00584cc0
// Address: 00584cc0
// Address Range: [[00584cc0, 00584df1]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00584cc0(CStairs *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00584cc0(CStairs *this_ptr)

{
  CDemonTriangle *this_ptr_00;
  int iVar1;
  CDemonTriangle *this_ptr_01;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  fStack_18 = *(float *)&this_ptr->field_0x160 * (float)_DAT_005f6374;
  fStack_14 = -*(float *)&this_ptr->field_0x160 * (float)_DAT_005f6374;
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x16c) {
    this_ptr_01 = (CDemonTriangle *)&this_ptr->field_0x170;
    this_ptr_00 = (CDemonTriangle *)&this_ptr->field_0x1a8;
    do {
      iVar1 = iVar1 + 1;
      fStack_54 = *(float *)&this_ptr->field_0x158 * (float)iVar1;
      fStack_50 = *(float *)&this_ptr->field_0x15c * (float)iVar1;
      fStack_38 = fStack_50 - *(float *)&this_ptr->field_0x168;
      fStack_3c = fStack_54 - *(float *)&this_ptr->field_0x164;
      fStack_58 = fStack_14;
      fStack_4c = fStack_18;
      fStack_34 = fStack_18;
      fStack_40 = fStack_14;
      fStack_48 = fStack_54;
      fStack_44 = fStack_50;
      fStack_30 = fStack_3c;
      fStack_2c = fStack_38;
      fStack_28 = fStack_38;
      fStack_24 = fStack_54;
      fStack_20 = fStack_3c;
      fStack_1c = fStack_50;
      iStack_10 = iVar1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                (this_ptr_01,(CVector3f *)&fStack_58,(CVector3f *)&fStack_4c,(CVector3f *)&fStack_34
                );
      this_ptr_01 = this_ptr_01 + 2;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                (this_ptr_00,(CVector3f *)&fStack_58,(CVector3f *)&fStack_34,(CVector3f *)&fStack_40
                );
      this_ptr_00 = this_ptr_00 + 2;
    } while (iVar1 < *(int *)&this_ptr->field_0x16c);
  }
  return;
}
