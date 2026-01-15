// Name: core_wateract.cpp_CWaterActor_process_FUN_005eb100
// Address: 005eb100
// Address Range: [[005eb100, 005eb276]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_process_FUN_005eb100(CWaterActor * this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_process_FUN_005eb100(CWaterActor *this_ptr)

{
  float fVar1;
  CEventList *this_ptr_00;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  double dVar4;
  float in_stack_00000008;
  
  dVar4 = crt_math_c_round_FUN_005fe6b0
                    ((double)(in_stack_00000008 * (float)65536 * (float)8));
  iVar2 = extraout_EDX + (int)ROUND(dVar4);
  *(int *)(this_ptr->field21_0x298 + 0x2af94) = iVar2;
  if (0x10000 < iVar2) {
    iVar3 = *(int *)(this_ptr->field21_0x298 + 0x2af90) + 1;
    *(int *)(this_ptr->field21_0x298 + 0x2af94) = iVar2 + -0x10000;
    *(int *)(this_ptr->field21_0x298 + 0x2af90) = iVar3;
    if (0xf < iVar3) {
      this_ptr->field21_0x298[0x2af90] = '\0';
      this_ptr->field21_0x298[0x2af91] = '\0';
      this_ptr->field21_0x298[0x2af92] = '\0';
      this_ptr->field21_0x298[0x2af93] = '\0';
    }
  }
  this_ptr_00 = g_CEventListPtr;
  *(float *)(this_ptr->field21_0x298 + 0x7d04) = 1.0 / (float)this_ptr;
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (this_ptr_00,(char *)&this_ptr->move_event);
  if (iVar2 != 0) {
    this_ptr->state = 1;
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,(char *)&this_ptr->move_down_event);
  if (iVar2 != 0) {
    this_ptr->state = 3;
  }
  switch(this_ptr->state) {
  case 1:
    fVar1 = (float)this_ptr / this_ptr->time_to_move + this_ptr->param;
    this_ptr->param = fVar1;
    if (fVar1 <= 1.0) break;
    this_ptr->state = 2;
  case 2:
    this_ptr->param = 1.0;
    break;
  case 3:
    fVar1 = this_ptr->param - (float)this_ptr / this_ptr->time_to_move_down;
    this_ptr->param = fVar1;
    if (0.0 <= fVar1) break;
    this_ptr->state = 0;
  case 0:
    this_ptr->param = 0.0;
    break;
  default:
    g_CurrentFilename = "..\\core\\wateract.cpp";
    g_CurrentLineNumber = 0x1a5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CWaterActor::process - Bad state");
  }
  (this_ptr->base_actor).location.position.y =
       this_ptr->height_delta * this_ptr->param + *(float *)(this_ptr->field21_0x298 + 0x2af98);
  return;
}
