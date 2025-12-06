// Name: core_msnedit.cpp_FUN_0053ec80
// Address: 0053ec80
// Address Range: [[0053ec80, 0053edfe]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053ec80()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053ec80(uint param_1) */

void core_msnedit_cpp_FUN_0053ec80(void)

{
  CDemonActor *this_ptr;
  int *piVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CDemonMission *in_stack_00000004;
  int in_stack_ffffd564;
  uint in_stack_ffffd570;
  uint in_stack_ffffd574;
  uint in_stack_ffffd578;
  uint in_stack_ffffd57c;
  uint in_stack_ffffd580;
  byte local_5ac [28];
  byte auStack_590 [916];
  char acStack_1fc [4];
  char acStack_1f8 [296];
  char cStack_d0;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_5ac);
  if (*(int *)(in_stack_00000004->field6_0x54c + 0x338) == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Setting up actors...");
    core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in mission...");
  for (this_ptr = in_stack_00000004->first_actor; this_ptr != (CDemonActor *)0x0;
      this_ptr = this_ptr->next_actor) {
    core_actor_cpp_FUN_0040e130();
    (*this_ptr->vtable->getPropertyList)(this_ptr,(CActorPropertyList *)&stack0xffffd54c);
    iVar2 = 0;
    if (0 < in_stack_ffffd564) {
      piVar1 = (int *)&stack0xffffd568;
      do {
        if ((*piVar1 == 8) && (core_actor_cpp_CActorProperty_FUN_0040ea50(), cStack_d0 != '\0')) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1fc,"%s\t%s %s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_5ac + 0xc),acStack_1f8);
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 0x3b;
      } while (iVar2 < in_stack_ffffd564);
    }
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Finding sound files in script...");
  core_script_cpp_FUN_00567bc0();
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)(local_5ac + 0x18));
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)auStack_590,"Sound files used",-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(auStack_590 + 4),0,in_stack_ffffd570,in_stack_ffffd574,in_stack_ffffd578,
             in_stack_ffffd57c,in_stack_ffffd580);
  return;
}
