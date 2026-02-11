// Name: core_platfrm.cpp_CPlatform_propertyActionTypeCallback_FUN_0054e530
// Address: 0054e530
// Address Range: [[0054e530, 0054e6f2]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_propertyActionTypeCallback_FUN_0054e530 (CPlatform *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl
core_platfrm_cpp_CPlatform_propertyActionTypeCallback_FUN_0054e530
          (CPlatform *this_ptr,CActorProperty *property)

{
  CCourse *this_ptr_00;
  CPlatform *pCVar1;
  int iVar1;
  CPickList local_544;
  char local_19c [200];
  char local_d4 [200];
  
  pCVar1 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CPlatformClassInfo.name_hash);
  if (pCVar1->course_filename[0] == '\0') {
    _sprintf(local_d4,"Select a course for platform %s",this_ptr);
    iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,local_d4,"data","*.pth",
                       (int)pCVar1->course_filename,0);
    return iVar1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_544);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_544.base,"Choose a different course file");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_544.base,"Don't use a course file");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_544.base,"Oops.  Forget I ever clicked there...");
  _sprintf(local_19c,"Change course setting for platform %s",this_ptr);
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_544,local_19c,-1,0);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      this_ptr_00 = &pCVar1->course;
      core_course_cpp_CCourse_FUN_004427a0(this_ptr_00);
      core_course_cpp_CCourse_FUN_004427a0(this_ptr_00);
      core_course_cpp_CCourse_free_FUN_004426c0(this_ptr_00);
      pCVar1->course_filename[0] = '\0';
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_544,0);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_544,0);
    return 0;
  }
  iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,local_19c,"data","*.pth",
                     (int)pCVar1->course_filename,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_544,0);
  return iVar1;
}
