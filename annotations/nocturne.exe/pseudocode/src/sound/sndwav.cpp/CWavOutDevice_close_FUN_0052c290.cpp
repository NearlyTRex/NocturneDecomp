// Name: sound_sndwav.cpp_CWavOutDevice_close_FUN_0052c290
// Address: 0052c290
// Address Range: [[0052c290, 0052c330]]
// Convention: __cdecl
// Signature: bool __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0052c290(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl sound_sndwav_cpp_CWavOutDevice_close_FUN_0052c290(int *param_1)

{
  int iVar1;
  MMRESULT MVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  iVar3 = 0;
  do {
    if (*(HGLOBAL *)(iVar3 + 0x2dc93e8) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x2dc93e8));
      *(uint *)(iVar3 + 0x2dc93e8) = 0;
    }
    *(uint *)(iVar3 + 0x2dc93c8) = 0;
    if (*(HGLOBAL *)(iVar3 + 0x2dc9408) != (HGLOBAL)0x0) {
      GlobalFree(*(HGLOBAL *)(iVar3 + 0x2dc9408));
      *(uint *)(iVar3 + 0x2dc9408) = 0;
    }
    iVar4 = iVar3 + 4;
    *(uint *)(iVar3 + 0x2dc93a8) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0x20);
  if (_DAT_02dc93a4 == (HWAVEOUT)0x0) {
    return iVar1 != 0;
  }
  MVar2 = waveOutClose(_DAT_02dc93a4);
  if (MVar2 != 0) {
    FUN_00529980("waveOutClose failed.");
  }
  _DAT_02dc93a4 = (HWAVEOUT)0x0;
  return MVar2 == 0 && iVar1 != 0;
}
