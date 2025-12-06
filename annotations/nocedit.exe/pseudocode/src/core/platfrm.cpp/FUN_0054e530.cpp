// Name: core_platfrm.cpp_FUN_0054e530
// Address: 0054e530
// Address Range: [[0054e530, 0054e6f2]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e530()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e530(uint param_1) */

int core_platfrm_cpp_FUN_0054e530(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  bool auto_select_flag;
  CStrList_vtable *in_stack_fffffad8;
  char **in_stack_fffffadc;
  CStrList_vtable *in_stack_fffffae0;
  CStrList_vtable *in_stack_fffffae4;
  CStrList_vtable *in_stack_fffffae8;
  char **in_stack_fffffaec;
  CStrList_vtable *in_stack_fffffaf0;
  uint in_stack_fffffaf4;
  char acStack_188 [4];
  char acStack_184 [4];
  char acStack_180 [176];
  char acStack_d0 [4];
  char acStack_cc [192];
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  auto_select_flag = (bool)((char)pCVar1 + -0x10);
  if (*(char *)&pCVar1[2].orient_matrix.m[0].y == '\0') {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_d0,"Select a course for platform %s",in_stack_00000004);
    iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,acStack_cc,"data","*.pth",auto_select_flag)
    ;
    return iVar2;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffac0);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffac4,"Choose a different course file");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffac8,"Don't use a course file");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffacc,"Oops.  Forget I ever clicked there...");
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_188,"Change course setting for platform %s");
  iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffad4,acStack_184,-1,0);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      core_course_cpp_CCourse_FUN_004427a0();
      core_course_cpp_CCourse_FUN_004427a0();
      core_course_cpp_CCourse_free_FUN_004426c0((CCourse *)&pCVar1[2].runtime_state);
      *(byte *)&pCVar1[2].orient_matrix.m[0].y = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffae4,0,(uint)in_stack_fffffae4,(uint)in_stack_fffffae8,
                 (uint)in_stack_fffffaec,(uint)in_stack_fffffaf0,in_stack_fffffaf4);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffad8,0,(uint)in_stack_fffffad8,(uint)in_stack_fffffadc,
               (uint)in_stack_fffffae0,(uint)in_stack_fffffae4,(uint)in_stack_fffffae8);
    return 0;
  }
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,acStack_180,"data","*.pth",auto_select_flag);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffadc,0,(uint)in_stack_fffffadc,(uint)in_stack_fffffae0,
             (uint)in_stack_fffffae4,(uint)in_stack_fffffae8,(uint)in_stack_fffffaec);
  return iVar2;
}
