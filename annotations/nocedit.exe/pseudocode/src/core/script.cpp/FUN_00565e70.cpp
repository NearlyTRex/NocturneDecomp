// Name: core_script.cpp_FUN_00565e70
// Address: 00565e70
// Address Range: [[00565e70, 00565f60]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00565e70()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00565e70(uint pScript, uint param_2,
   uint param_3) */

void core_script_cpp_FUN_00565e70(void)

{
  CBitFont *font_ptr;
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (-1 < in_stack_0000000c) {
    font_ptr = (CBitFont *)(in_stack_00000004 + 0x38);
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
    if (in_stack_0000000c < iVar2) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)font_ptr,in_stack_0000000c);
      iVar2 = core_script_cpp_FUN_00561c70();
      if (iVar2 < 1) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)font_ptr,in_stack_0000000c)
        ;
        iVar2 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
        if (iVar2 < 1) {
          pcVar3 = "Not enough context to show usage.  (Try putting the cursor over the first parm...)";
          pcVar4 = &DAT_0310fdc0;
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') {
              return;
            }
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          return;
        }
      }
      core_script_cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0();
      return;
    }
  }
  return;
}
