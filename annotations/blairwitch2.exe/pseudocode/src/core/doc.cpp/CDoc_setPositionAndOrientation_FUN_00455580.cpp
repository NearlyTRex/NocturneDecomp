// Name: core_doc.cpp_CDoc_setPositionAndOrientation_FUN_00455580
// Address: 00455580
// Address Range: [[00455580, 004555b4]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_setPositionAndOrientation_FUN_00455580(CDoc *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

#include "nocturne.h"

void __cdecl core_doc_cpp_CDoc_setPositionAndOrientation_FUN_00455580(CDoc *this_ptr,CVector3f *new_position,CVector3f *new_orientation)

{
  CVector3f CStack_18;
  
  CStack_18.y = new_orientation->y;
  CStack_18.x = 0.0;
  CStack_18.z = 0.0;
  core_charactr_cpp_CCharacter_setPositionAndOrientation_FUN_00422ec0
            ((CCharacter *)this_ptr,new_position,&CStack_18);
  return;
}
