// Name: core_manpuz.cpp_FUN_005054c0
// Address: 005054c0
// Address Range: [[005054c0, 0050555d]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_005054c0(CMansionPuzzleCircle *this_ptr,int reflector_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_FUN_005054c0(CMansionPuzzleCircle *this_ptr,int reflector_index)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int render_flags;
  
  iVar1 = reflector_index * 0x60;
  if ((*(int *)(0x01D2C900 + 0x1008) == 0) && (*(float *)(&this_ptr->field_0x1358 + iVar1) <= 0.0)
     ) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,(CVector3f *)(&this_ptr->field_0x1368 + iVar1),
             (CVector3f *)(&this_ptr->field_0x135c + iVar1));
  render_flags = -1;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x450);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x450,
             (float)(*(int *)&pCVar2->field_0x100 + -1) *
             *(float *)(&this_ptr->field_0x1358 + iVar1),render_flags);
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
