// Name: core_platfrm.cpp_FUN_00518280
// Address: 00518280
// Address Range: [[00518280, 0051830c]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_00518280(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_FUN_00518280(CPlatform *this_ptr)

{
  CDemonActor *actor;
  CPlatform *pCVar1;
  
  core_actor_cpp_FUN_00408a80((CDemonActor *)this_ptr);
  if (this_ptr->field_0x44c != '\0') {
    core_course_cpp_CCourse_load_FUN_00438af0
              ((CCourse *)&this_ptr->field_0x46c,&this_ptr->field_0x44c);
    *(uint *)&this_ptr->field_0x474 = 0;
  }
  core_platfrm_cpp_FUN_00518310(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4);
  pCVar1 = this_ptr;
  do {
    while (actor = *(CDemonActor **)&pCVar1->field_0x678, actor != (CDemonActor *)0x0) {
      *(uint *)&pCVar1->field_0x678 = 0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_00519a60(this_ptr,actor);
      pCVar1 = (CPlatform *)&pCVar1->field_0x34;
      if (pCVar1 == (CPlatform *)&this_ptr->field_0x208) {
        return;
      }
    }
    pCVar1 = (CPlatform *)&pCVar1->field_0x34;
  } while (pCVar1 != (CPlatform *)&this_ptr->field_0x208);
  return;
}
