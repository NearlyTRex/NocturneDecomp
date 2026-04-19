// Name: sound_sndmain.cpp_trimLineAndRemoveComments_FUN_005a4530
// Address: 005a4530
// MANUAL RECONSTRUCTION
// Address Range: [[005a4530, 005a45bd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_trimLineAndRemoveComments_FUN_005a4530(char *line)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_trimLineAndRemoveComments_FUN_005a4530(char *line)

{
  char *pcVar2;

  pcVar2 = strstr(line,"//");
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  pcVar2 = line + strlen(line);
  while ((line < pcVar2 && ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
    pcVar2 = pcVar2 + -1;
  }
  *pcVar2 = '\0';
  do {
    if ((g_CharacterClassificationTable[(byte)(*line + 1)] & 2) == 0) {
      return;
    }
    memmove(line,line + 1,strlen(line));
  } while( true );
}
