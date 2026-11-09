// Name: sound_sndmain.cpp_trimLineAndRemoveComments_FUN_00551590
// Address: 00551590
// Address Range: [[00551590, 0055161d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_trimLineAndRemoveComments_FUN_00551590(char *line)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_trimLineAndRemoveComments_FUN_00551590(char *line)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  pcVar2 = strstr(line,&DAT_005d253c);
  pcVar4 = line;
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  do {
    pcVar2 = pcVar4;
    if (*pcVar4 == '\0') goto joined_r0x005515cc;
    if (*pcVar4 == '\0') break;
    pcVar2 = pcVar4 + 1;
    if (*pcVar2 == '\0') goto joined_r0x005515cc;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
joined_r0x005515cc:
  while ((line < pcVar2 && (((&DAT_006074b8)[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
    pcVar2 = pcVar2 + -1;
  }
  *pcVar2 = '\0';
  do {
    if (((&DAT_006074b8)[(byte)(*line + 1)] & 2) == 0) {
      return;
    }
    uVar3 = 0xffffffff;
    pcVar4 = line;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(line,line + 1,~uVar3 - 1);
  } while( true );
}
