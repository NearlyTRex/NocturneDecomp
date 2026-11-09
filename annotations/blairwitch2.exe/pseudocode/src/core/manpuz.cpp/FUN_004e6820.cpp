// Name: core_manpuz.cpp_FUN_004e6820
// Address: 004e6820
// Address Range: [[004e6820, 004e68bd]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e6820(CMansionPuzzleCircle *this_ptr,int reflector_index)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_FUN_004e6820(CMansionPuzzleCircle *this_ptr,int reflector_index)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int render_flags;
  
  iVar1 = reflector_index * 0x60;
  if ((*(int *)(0x01D182F0 + 0x1008) == 0) && (*(float *)(&this_ptr->field_0x14b4 + iVar1) <= 0.0)
     ) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)(&this_ptr->field_0x14c4 + iVar1),
             (CVector3f *)(&this_ptr->field_0x14b8 + iVar1));
  render_flags = -1;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x5ac);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x5ac,
             (float)(*(int *)&pCVar2->field_0x100 + -1) *
             *(float *)(&this_ptr->field_0x14b4 + iVar1),render_flags);
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
