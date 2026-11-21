// Name: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0055bbf0
// Address: 0055bbf0
// Address Range: [[0055bbf0, 0055bd41]]
// Convention: __cdecl
// Signature: void * __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0055bbf0(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

#include "nocturne.h"

void * __cdecl sound_snddx_cpp_CDirectSoundDevice_lockSample_FUN_0055bbf0(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

{
  uint error_code;
  int iVar1;
  uint dwOffset;
  uint dwBytes;
  char acStack_1a8 [400];
  LPVOID pvStack_18;
  DWORD DStack_14;
  
  if ((((buffer_id < 1) || (0x40 < buffer_id)) ||
      (g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6] == (IDirectSoundBuffer *)0x0)) ||
     ((int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 2] < 1)) {
    return (void *)0x0;
  }
  if (g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 4] != (IDirectSoundBuffer *)0x0) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 1079;
    core_main_c_displayErrorAndQuit_FUN_004e4330("DirectSoundDevice::lockSample - already locked!");
  }
  iVar1 = offset * (int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 2] >> 0x1f;
  iVar1 = (offset * (int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 2] + iVar1 * -0x100
          ) - (uint)(iVar1 << 7 < 0);
  dwOffset = CONCAT22((short)(char)((uint)iVar1 >> 0x18),(short)((uint)iVar1 >> 8)) & 0xffffffe0;
  dwBytes = size + 0x1fU & 0xffffffe0;
  if ((int)((int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 3] - dwOffset) <
      (int)dwBytes) {
    dwBytes = (int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 3] - dwOffset;
  }
  error_code = (*g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6]->vtable->Lock)
                         (g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6],dwOffset,dwBytes,
                          g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4 + buffer_id * 6 + 4,
                          (LPDWORD)(g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4 + buffer_id * 6 + 5),
                          &pvStack_18,&DStack_14,0);
  if (error_code == 0) {
    if ((int)(g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 3] + -8) <=
        (int)(dwBytes + dwOffset)) {
      memset
                ((void *)((int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 3] +
                         (int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 4] +
                         (-0x20 - dwOffset)),0,0x20);
    }
    return (void *)((int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 4] +
                   ((iVar1 >> 8) - dwOffset));
  }
  sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(error_code);
  _sprintf(acStack_1a8,"DirectSux: Unable to %s.  (%s)");
  sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_1a8);
  return (void *)0x0;
}
