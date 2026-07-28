// Name: engine_console.cpp_CConsole_writeChar_FUN_0043ad30
// Address: 0043ad30
// Address Range: [[0043ad30, 0043adf8]]
// Convention: unknown
// Signature: void engine_console_cpp_CConsole_writeChar_FUN_0043ad30(CConsole *param_1,char param_2)

#include "nocturne.h"

void engine_console_cpp_CConsole_writeChar_FUN_0043ad30(CConsole *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == '\n') {
    param_1->current_column = 0;
    iVar2 = param_1->current_row + 1;
    iVar1 = param_1->console_height + -1;
    param_1->current_row = iVar2;
    if (iVar1 < iVar2) {
LAB_0043adc5:
      param_1->current_row = iVar1;
      engine_console_cpp_CConsole_scrollUp_FUN_0043ae40(param_1);
      return;
    }
  }
  else {
    if (param_2 == '\0') {
      param_1->console_buffer[param_1->current_column + param_1->current_row * 0x50] = '\0';
      return;
    }
    param_1->console_buffer[param_1->current_column + param_1->current_row * 0x50] = param_2;
    iVar1 = param_1->current_column + 1;
    param_1->current_column = iVar1;
    if (param_1->console_width + -1 < iVar1) {
      param_1->current_column = 0;
      iVar2 = param_1->current_row + 1;
      iVar1 = param_1->console_height + -1;
      param_1->current_row = iVar2;
      if (iVar1 < iVar2) goto LAB_0043adc5;
    }
  }
  return;
}
