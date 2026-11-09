// Name: core_platfrm.cpp_CPlatform_setup_FUN_005395d0
// Address: 005395d0
// Address Range: [[005395d0, 0053965c]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_005395d0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_setup_FUN_005395d0(CPlatform *this_ptr)

{
  CDemonActor *actor;
  CPlatform *pCVar1;
  
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  if (this_ptr->field_0x2f0 != '\0') {
    core_course_cpp_CCourse_load_FUN_00447db0
              ((CCourse *)&this_ptr->field_0x310,&this_ptr->field_0x2f0);
    *(uint *)&this_ptr->field_0x318 = 0;
  }
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00539660(this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  pCVar1 = this_ptr;
  do {
    while (actor = *(CDemonActor **)&pCVar1->field_0x51c, actor != (CDemonActor *)0x0) {
      *(uint *)&pCVar1->field_0x51c = 0;
      core_platfrm_cpp_CPlatform_attachActor_FUN_0053adb0(this_ptr,actor);
      pCVar1 = (CPlatform *)&pCVar1->field_0x34;
      if (pCVar1 == (CPlatform *)&this_ptr->field_0x208) {
        return;
      }
    }
    pCVar1 = (CPlatform *)&pCVar1->field_0x34;
  } while (pCVar1 != (CPlatform *)&this_ptr->field_0x208);
  return;
}
