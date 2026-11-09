// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
// Address: 00483850
// Address Range: [[00483850, 00483981]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)

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
    fVar1 = (float10)*(float *)&euler_angles->field_0x4 * (float10)_DAT_005db38c *
            (float10)_DAT_005db394;
    fVar5 = (float10)*(float *)euler_angles * (float10)_DAT_005db38c * (float10)_DAT_005db394;
    translate_y = translation;
    translate_z_00 = translation;
    round();
    round();
    iVar7 = (int)ROUND(fVar1);
    round();
    engine_matrix_c_matrixPushAndTransform_FUN_00507c70
              ((int)ROUND(fVar5),rot_y,iVar7,(int)translation,(int)translate_y,(int)translate_z_00);
    return;
  }
  fVar5 = (float10)*(float *)&translation->field_0x4 * (float10)_DAT_005db384;
  fVar6 = (float10)*(float *)translation * (float10)_DAT_005db384;
  fVar1 = (float10)_DAT_005db38c;
  fVar2 = (float10)_DAT_005db394;
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
  engine_matrix_c_matrixPushAndTransform_FUN_00507c70
            ((int)ROUND(fVar2),(int)ROUND(fVar4),rot_z,translate_x,iVar7,translate_z);
  return;
}
