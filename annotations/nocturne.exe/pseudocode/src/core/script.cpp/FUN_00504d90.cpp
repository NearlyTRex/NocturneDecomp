// Name: core_script.cpp_FUN_00504d90
// Address: 00504d90
// Address Range: [[00504d90, 00504e63]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_00504d90(CScript *param_1)

#include "nocturne.h"

uint core_script_cpp_FUN_00504d90(CScript *param_1)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  float local_c;
  
  if (*(int *)(param_1->current_message + 0x3fc) < 0) {
    return 0;
  }
  core_script_cpp_FUN_00504d60(param_1);
  iVar3 = 0;
  (param_1->script_text).data_array = *(char ***)(param_1->current_message + 0x3fc);
  while ((*(int *)(0x01C775EC + 0x228) != 0 && (param_1->script_pause_flag == 0))) {
    local_c = 0.25;
    ppcVar1 = (param_1->script_text).data_array;
    iVar2 = core_script_cpp_CScript_step_FUN_004ff2c0(param_1,&local_c);
    if (iVar2 < 0) {
      shape_edittool_cpp_FUN_0046fcd0
                (0x01BCD074,"Error processing script to skip cinematic.\nLine: %d\nText: %s\nWhat's wrong: %s\n",
                 *(uint *)(param_1->xref_entries->name + (int)ppcVar1 * 8),
                 *(uint *)(param_1->xref_entries->name + (int)ppcVar1 * 8 + 4),&DAT_01e56420);
    }
    iVar3 = iVar3 + 1;
    if (300 < iVar3) {
      INT_01cc4804 = 0xea5;
      PTR_01cc4800 = "..\\core\\script.cpp";
      core_main_c_FUN_004c8440
                ("Infinite loop detected trying to skip cinematic, at script line %d",
                 *(uint *)
                  (param_1->xref_entries->name + (int)(param_1->script_text).data_array * 8));
    }
  }
  return 1;
}
