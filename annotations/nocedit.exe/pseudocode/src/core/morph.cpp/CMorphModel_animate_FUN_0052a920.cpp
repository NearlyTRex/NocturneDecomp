// Name: core_morph.cpp_CMorphModel_animate_FUN_0052a920
// Address: 0052a920
// Address Range: [[0052a920, 0052a9f4]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_animate_FUN_0052a920(CMorphModel * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_animate_FUN_0052a920(CMorphModel *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  int *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
  if ((in_stack_00000008 < 0) || (*(int *)this_ptr->field0_0x0 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x112;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::animate - invalid part index");
  }
  iVar3 = in_stack_00000010 + *(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 0xc);
  if (*(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 0xc) +
      *(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 4) < iVar3 + in_stack_00000014) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x119;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::animate - invalid vertex range");
  }
  iVar1 = 0;
  if (0 < in_stack_00000014) {
    iVar3 = iVar3 * 0x10;
    do {
      iVar2 = *(int *)this_ptr->field2_0x58 + iVar3;
      iVar1 = iVar1 + 1;
      *(float *)(iVar2 + 4) = (float)*in_stack_0000000c * 0.00390625f;
      *(float *)(iVar2 + 8) = (float)in_stack_0000000c[1] * 0.00390625f;
      *(float *)(iVar2 + 0xc) = (float)in_stack_0000000c[2] * 0.00390625f;
      iVar3 = iVar3 + 0x10;
      in_stack_0000000c = in_stack_0000000c + 3;
    } while (iVar1 < in_stack_00000014);
  }
  return;
}
