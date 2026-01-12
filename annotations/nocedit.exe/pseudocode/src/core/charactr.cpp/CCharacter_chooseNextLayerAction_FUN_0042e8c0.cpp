// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
// Address: 0042e8c0
// Address Range: [[0042e8c0, 0042ea31]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int in_stack_00000008;
  float local_14;
  
  if ((*(int *)(this_ptr->field13_0x2620 + 0x46c) < 0) ||
     (*(int *)(this_ptr->field13_0x2620 + 8) <= *(int *)(this_ptr->field13_0x2620 + 0x46c))) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 4000;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)1.0000000000000001e-05 <= *(float *)(this_ptr->field13_0x2620 + 0x470)) {
    if (*(float *)(this_ptr->field13_0x2620 + 0x470) <= (float)0.99999000000000005) {
      return;
    }
    iVar2 = *(int *)(this_ptr->field13_0x2620 +
                    *(int *)(this_ptr->field13_0x2620 + 0x46c) * 0x38 + 0x10);
  }
  else {
    iVar2 = *(int *)(this_ptr->field13_0x2620 +
                    *(int *)(this_ptr->field13_0x2620 + 0x46c) * 0x38 + 0xc);
  }
  if (in_stack_00000008 != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < *(int *)(this_ptr->field13_0x2620 + 8)) {
      pcVar4 = this_ptr->field13_0x2620 + 0xc;
      do {
        if ((*(int *)(pcVar4 + 0x28) < 0) || (*(int *)pcVar4 != iVar2)) {
          if ((*(int *)(pcVar4 + 0x28) < 1) &&
             ((*(int *)(pcVar4 + 4) == iVar2 &&
              (fVar1 = *(float *)(pcVar4 + 0x34) +
                       *(float *)(this_ptr->cloth_data +
                                 in_stack_00000008 * 4 + *(int *)pcVar4 * 0x50 + 0x8d4c),
              fVar1 < local_14)))) {
            this_ptr->field13_0x2620[0x470] = '\0';
            this_ptr->field13_0x2620[0x471] = '\0';
            this_ptr->field13_0x2620[0x472] = -0x80;
            this_ptr->field13_0x2620[0x473] = '?';
            *(int *)(this_ptr->field13_0x2620 + 0x46c) = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = *(float *)(pcVar4 + 0x34) +
                  *(float *)(this_ptr->cloth_data +
                            in_stack_00000008 * 4 + *(int *)(pcVar4 + 4) * 0x50 + 0x8d4c);
          if (fVar1 < local_14) {
            this_ptr->field13_0x2620[0x470] = '\0';
            this_ptr->field13_0x2620[0x471] = '\0';
            this_ptr->field13_0x2620[0x472] = '\0';
            this_ptr->field13_0x2620[0x473] = '\0';
            *(int *)(this_ptr->field13_0x2620 + 0x46c) = iVar3;
            local_14 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        pcVar4 = pcVar4 + 0x38;
      } while (iVar3 < *(int *)(this_ptr->field13_0x2620 + 8));
    }
  }
  return;
}
