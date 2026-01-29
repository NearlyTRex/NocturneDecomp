// Name: crt_thread.c_create_thread_with_sync_FUN_0060f960
// Address: 0060f960
// Address Range: [[0060f960, 0060fa54]]
// Convention: __cdecl
// Signature: HANDLE __cdecl crt_thread_c_create_thread_with_sync_FUN_0060f960 (LPVOID thread_param,SIZE_T stack_size_hint,LPVOID sync_param,HANDLE *out_thread_handle)

#include "nocturne.h"

HANDLE __cdecl
create_thread_with_sync
          (LPVOID thread_param,SIZE_T stack_size_hint,LPVOID sync_param,HANDLE *out_thread_handle)

{
  BOOL BVar1;
  DWORD value;
  HANDLE hObject;
  byte bVar2;
  char acStackY_1034 [4048];
  char *buffer;
  int base;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  uint uStack_48;
  char acStack_44 [24];
  LPVOID local_2c;
  LPVOID local_28;
  HANDLE pvStack_24;
  HANDLE pvStack_20;
  uint *puStack_1c;
  DWORD DStack_18;
  
  bVar2 = 0;
  if (g_TLSIndex == 0xffffffff) {
    BVar1 = allocate_tls_index();
    if (BVar1 == 0) {
      return (HANDLE)0x0;
    }
    initialize_tls_infrastructure();
  }
  local_2c = thread_param;
  local_28 = sync_param;
  pvStack_24 = (*g_GetCurrentThreadFunc)();
  base = 0x10;
  buffer = acStack_44;
  puStack_1c = (uint *)0x0;
  cStack_4c = "__bgnthd"[0];
  cStack_4b = "__bgnthd"[1];
  cStack_4a = "__bgnthd"[2];
  cStack_49 = "__bgnthd"[3];
  (&uStack_48)[(uint)bVar2 * -2] = *(uint *)("__bgnthd" + (uint)bVar2 * -8 + 4);
  acStack_44[(uint)bVar2 * -8 + (uint)bVar2 * -8] =
       "__bgnthd"[(uint)bVar2 * -8 + (uint)bVar2 * -8 + 8];
  value = (*g_GetCurrentThreadIdFunc)();
  IntegerToString(value,buffer,base);
  pvStack_20 = (*g_CreateEventAFunc)((LPSECURITY_ATTRIBUTES)0x0,0,0,&stack0xffffffb4);
  hObject = (*g_CreateThreadFunc)
                      ((LPSECURITY_ATTRIBUTES)0x0,(stack_size_hint + 0xfff >> 8 & 0xfffff0) << 8,
                       threadStartupWrapper,&local_2c,0,&DStack_18);
  if (hObject == (HANDLE)0x0) {
    DStack_18 = 0xffffffff;
  }
  else {
    (*g_WaitForSingleObjectFunc)(pvStack_20,0xffffffff);
    if (puStack_1c == (uint *)0x0) {
      (*g_CloseHandleFunc)(hObject);
    }
    else {
      *puStack_1c = hObject;
    }
  }
  (*g_CloseHandleFunc)(pvStack_20);
  return hObject;
}
