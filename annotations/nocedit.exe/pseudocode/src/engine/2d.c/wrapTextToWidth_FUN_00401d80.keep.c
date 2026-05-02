// Name: engine_2d.c_wrapTextToWidth_FUN_00401d80
// Address: 00401d80
// MANUAL RECONSTRUCTION
// Address Range: [[00401d80, 00401ea0]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_wrapTextToWidth_FUN_00401d80(char *input_text,int max_width,char *output_buffer)

#include "nocturne.h"

void __cdecl engine_2d_c_wrapTextToWidth_FUN_00401d80(char *input_text,int max_width,char *output_buffer)

{
  char cVar2;
  bool bVar3;
  int iVar2;
  int iVar4;
  uint uVar4;
  char *pcVar5;
  char *pcVar8;
  char acStack_114 [256];

  bVar3 = true;
  if (*input_text == '\0') {
    *output_buffer = '\0';
  }
  else {
    strcpy(output_buffer,input_text);
    iVar2 = engine_2d_c_getStringWidth_FUN_004018a0(output_buffer);
    pcVar5 = output_buffer;
    if (max_width < iVar2) {
      do {
        cVar2 = *output_buffer;
        if (((cVar2 == '\0') || ((g_CharacterClassificationTable[(byte)(cVar2 + 1)] & 2) != 0)) ||
           (cVar2 == '\n')) {
          uVar4 = (int)output_buffer - (int)pcVar5;
          memcpy(acStack_114,pcVar5,uVar4);
          acStack_114[uVar4] = '\0';
          iVar4 = engine_2d_c_getStringWidth_FUN_004018a0(acStack_114);
          if (max_width < iVar4) {
            cVar2 = output_buffer[-1];
            pcVar8 = output_buffer;
            while ((output_buffer = pcVar8 + -1, cVar2 != '\n' && (*output_buffer != ' '))) {
              cVar2 = pcVar8[-2];
              pcVar8 = output_buffer;
            }
            *output_buffer = '\n';
          }
          if (*output_buffer == '\n') {
            pcVar5 = output_buffer + 1;
          }
          if (*output_buffer == '\0') {
            bVar3 = false;
          }
        }
        output_buffer = output_buffer + 1;
      } while (bVar3);
      return;
    }
  }
  return;
}
