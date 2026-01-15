// Name: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
// Address: 0042e370
// Address Range: [[0042e370, 0042e56f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  float *in_stack_00000008;
  int in_stack_0000000c;
  float local_18;
  
  if ((*(int *)(this_ptr->field13_0x2620 + 0x46c) < 0) ||
     (*(int *)(this_ptr->field13_0x2620 + 8) <= *(int *)(this_ptr->field13_0x2620 + 0x46c))) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xeec;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  pcVar4 = this_ptr->field13_0x2620 + *(int *)(this_ptr->field13_0x2620 + 0x46c) * 0x38 + 0xc;
  if (*(float *)(this_ptr->field13_0x2620 + 0x470) < 0.0) {
    this_ptr->field13_0x2620[0x470] = '\0';
    this_ptr->field13_0x2620[0x471] = '\0';
    this_ptr->field13_0x2620[0x472] = '\0';
    this_ptr->field13_0x2620[0x473] = '\0';
  }
  if (1.0 < *(float *)(this_ptr->field13_0x2620 + 0x470)) {
    this_ptr->field13_0x2620[0x470] = '\0';
    this_ptr->field13_0x2620[0x471] = '\0';
    this_ptr->field13_0x2620[0x472] = -0x80;
    this_ptr->field13_0x2620[0x473] = '?';
  }
  fVar1 = *(float *)(this_ptr->field13_0x2620 + 0x470) * *(float *)(pcVar4 + 0x34);
  local_18 = *(float *)(pcVar4 + 0x34) * (1.0 - *(float *)(this_ptr->field13_0x2620 + 0x470));
  iVar5 = *(int *)(pcVar4 + 0x28);
  if (iVar5 != 0) goto LAB_0042e486;
  fVar2 = *(float *)(this_ptr->cloth_data +
                    in_stack_0000000c * 4 + *(int *)(pcVar4 + 4) * 0x50 + 0x8d4c) + local_18;
  fVar3 = *(float *)(this_ptr->cloth_data + in_stack_0000000c * 4 + *(int *)pcVar4 * 0x50 + 0x8d4c)
          + fVar1;
  if (fVar2 <= fVar3) {
    if (fVar2 < fVar3) {
      iVar5 = 1;
      goto LAB_0042e486;
    }
    if (*(float *)(this_ptr->cloth_data +
                  in_stack_0000000c * 4 + *(int *)(pcVar4 + 4) * 0x50 + 0x8d4c) <=
        *(float *)(this_ptr->cloth_data + in_stack_0000000c * 4 + *(int *)pcVar4 * 0x50 + 0x8d4c)) {
      iVar5 = 1;
      goto LAB_0042e486;
    }
  }
  iVar5 = -1;
LAB_0042e486:
  if (iVar5 < 0) {
    local_18 = fVar1;
  }
  if (*in_stack_00000008 < local_18) {
    fVar1 = ((float)iVar5 * *in_stack_00000008) / *(float *)(pcVar4 + 0x34) +
            *(float *)(this_ptr->field13_0x2620 + 0x470);
    *(float *)(this_ptr->field13_0x2620 + 0x470) = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->field13_0x2620[0x470] = '\0';
      this_ptr->field13_0x2620[0x471] = '\0';
      this_ptr->field13_0x2620[0x472] = '\0';
      this_ptr->field13_0x2620[0x473] = '\0';
    }
    if (1.0 < *(float *)(this_ptr->field13_0x2620 + 0x470)) {
      this_ptr->field13_0x2620[0x470] = '\0';
      this_ptr->field13_0x2620[0x471] = '\0';
      this_ptr->field13_0x2620[0x472] = -0x80;
      this_ptr->field13_0x2620[0x473] = '?';
    }
    *in_stack_00000008 = 0.0;
    return -1;
  }
  *in_stack_00000008 = *in_stack_00000008 - local_18;
  if (-1 < iVar5) {
    iVar5 = *(int *)(pcVar4 + 4);
    this_ptr->field13_0x2620[0x470] = '\0';
    this_ptr->field13_0x2620[0x471] = '\0';
    this_ptr->field13_0x2620[0x472] = -0x80;
    this_ptr->field13_0x2620[0x473] = '?';
    return iVar5;
  }
  iVar5 = *(int *)pcVar4;
  this_ptr->field13_0x2620[0x470] = '\0';
  this_ptr->field13_0x2620[0x471] = '\0';
  this_ptr->field13_0x2620[0x472] = '\0';
  this_ptr->field13_0x2620[0x473] = '\0';
  return iVar5;
}
