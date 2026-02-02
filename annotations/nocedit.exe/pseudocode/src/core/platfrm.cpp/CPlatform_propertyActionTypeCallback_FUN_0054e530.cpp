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
  CPlatform *pCVar1;
  int iVar1;
  uint in_stack_fffffabc;
  uint in_stack_fffffac0;
  char **in_stack_fffffac4;
  CStrList_vtable *in_stack_fffffac8;
  uint in_stack_fffffacc;
  char local_19c [200];
  char local_d4 [200];
  
  pCVar1 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CPlatformClassInfo.name_hash);
  if (pCVar1->course_filename[0] == '\0') {
    sprintf(local_d4,"Select a course for platform %s",this_ptr);
    iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,local_d4,"data","*.pth",
                       (int)pCVar1->course_filename);
    return iVar1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffabc);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffabc,"Choose a different course file");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffabc,"Don't use a course file");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffabc,"Oops.  Forget I ever clicked there...");
  sprintf(local_19c,"Change course setting for platform %s",this_ptr);
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffabc,local_19c,-1,0);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      core_course_cpp_CCourse_FUN_004427a0();
      core_course_cpp_CCourse_FUN_004427a0();
      core_course_cpp_CCourse_free_FUN_004426c0(&pCVar1->course);
      pCVar1->course_filename[0] = '\0';
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffabc,0,in_stack_fffffabc,in_stack_fffffac0,
                 (uint)in_stack_fffffac4,(uint)in_stack_fffffac8,in_stack_fffffacc);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffabc,0,in_stack_fffffabc,in_stack_fffffac0,
               (uint)in_stack_fffffac4,(uint)in_stack_fffffac8,in_stack_fffffacc);
    return 0;
  }
  iVar1 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,local_19c,"data","*.pth",
                     (int)pCVar1->course_filename);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffabc,0,in_stack_fffffabc,in_stack_fffffac0,
             (uint)in_stack_fffffac4,(uint)in_stack_fffffac8,in_stack_fffffacc);
  return iVar1;
}
