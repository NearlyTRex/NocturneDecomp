// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
// Address: 0046b350
// Address Range: [[0046b350, 0046b481]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)

{
  int rot_y;
  int extraout_ECX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int rot_z;
  int translate_x;
  int iVar7;
  int translate_z;
  CVector3f *translate_y;
  CVector3f *translate_z_00;
  
  if (translation == (CVector3f *)0x0) {
    fVar1 = (float10)*(float *)&euler_angles->field_0x4 * (float10)_DAT_005d1593 *
            (float10)_DAT_005d159b;
    fVar5 = (float10)*(float *)euler_angles * (float10)_DAT_005d1593 * (float10)_DAT_005d159b;
    translate_y = translation;
    translate_z_00 = translation;
    round();
    round();
    iVar7 = (int)ROUND(fVar1);
    round();
    engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0
              ((int)ROUND(fVar5),rot_y,iVar7,(int)translation,(int)translate_y,(int)translate_z_00);
    return;
  }
  fVar5 = (float10)*(float *)&translation->field_0x4 * (float10)_DAT_005d158b;
  fVar6 = (float10)*(float *)translation * (float10)_DAT_005d158b;
  fVar1 = (float10)_DAT_005d1593;
  fVar2 = (float10)_DAT_005d159b;
  fVar3 = (float10)*(float *)&euler_angles->field_0x4 * fVar1 * fVar2;
  fVar4 = (float10)*(float *)&euler_angles->field_0x8 * fVar1 * fVar2;
  fVar2 = (float10)*(float *)euler_angles * fVar1 * fVar2;
  round();
  round();
  round();
  iVar7 = (int)ROUND(fVar5);
  translate_x = (int)ROUND(fVar6);
  round();
  round();
  rot_z = (int)ROUND(fVar3);
  translate_z = extraout_ECX;
  round();
  engine_matrix_c_matrixPushAndTransform_FUN_004e8fd0
            ((int)ROUND(fVar2),(int)ROUND(fVar4),rot_z,translate_x,iVar7,translate_z);
  return;
}
