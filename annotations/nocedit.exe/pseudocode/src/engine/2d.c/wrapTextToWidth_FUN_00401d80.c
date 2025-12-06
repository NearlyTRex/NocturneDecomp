// Name: engine_2d.c_wrapTextToWidth_FUN_00401d80
// Address: 00401d80
// Address Range: [[00401d80, 00401ea0]]
// Convention: __cdecl
// Signature: void engine_2d.c_wrapTextToWidth_FUN_00401d80(char * input_text, int max_width, char * output_buffer)

#include "nocturne.h"

void __cdecl
engine_2d_c_wrapTextToWidth_FUN_00401d80(char *input_text,int max_width,char *output_buffer)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int in_stack_00000010;
  char acStack_110 [252];
  uint local_14;
  
  bVar8 = 0;
  local_14 = 1;
  pcVar5 = output_buffer;
  if (*input_text == '\0') {
    *output_buffer = '\0';
  }
  else {
    do {
      cVar1 = *input_text;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = input_text[1];
      input_text = input_text + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    iVar2 = engine_2d_c_getStringWidth_FUN_004018a0(output_buffer);
    pcVar5 = output_buffer;
    if ((int)output_buffer < iVar2) {
      do {
        cVar1 = *output_buffer;
        if (((cVar1 == '\0') || ((g_CharacterClassificationTable[(byte)(cVar1 + 1)] & 2U) != 0)) ||
           (cVar1 == '\n')) {
          uVar4 = (int)output_buffer - (int)pcVar5;
          pcVar6 = pcVar5;
          pcVar7 = acStack_110;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(uint *)pcVar7 = *(uint *)pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
            pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
          }
          for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar7 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
            pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
          }
          acStack_110[uVar4] = '\0';
          iVar2 = engine_2d_c_getStringWidth_FUN_004018a0(acStack_110);
          if (in_stack_00000010 < iVar2) {
            cVar1 = output_buffer[-1];
            pcVar6 = output_buffer;
            while ((output_buffer = pcVar6 + -1, cVar1 != '\n' && (*output_buffer != ' '))) {
              cVar1 = pcVar6[-2];
              pcVar6 = output_buffer;
            }
            *output_buffer = '\n';
          }
          if (*output_buffer == '\n') {
            pcVar5 = output_buffer + 1;
          }
        }
        output_buffer = output_buffer + 1;
      } while (unaff_EBP != 0);
      return;
    }
  }
  return;
}
