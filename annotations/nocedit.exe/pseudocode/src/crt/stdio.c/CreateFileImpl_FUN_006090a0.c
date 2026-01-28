// Name: crt_stdio.c_CreateFileImpl_FUN_006090a0
// Address: 006090a0
// Address Range: [[006090a0, 006092e0]]
// Convention: __cdecl
// Signature: HANDLE __cdecl crt_stdio_c_CreateFileImpl_FUN_006090a0 (char *filename,dword access_mode,dword share_mode,va_list_t *extra_args)

#include "nocturne.h"

HANDLE __cdecl
crt_stdio_c_CreateFileImpl_FUN_006090a0
          (char *filename,dword access_mode,dword share_mode,va_list_t *extra_args)

{
  uint *puVar1;
  int iVar2;
  HANDLE pvVar3;
  HANDLE handle_index;
  DWORD dwCreationDisposition;
  DWORD unaff_EBX;
  uint uVar4;
  DWORD dwFlagsAndAttributes;
  uint access_mode_00;
  DWORD creation_disposition;
  DWORD flags_and_attributes;
  DWORD share_mode_windows;
  DWORD desired_access;
  DWORD extra_parameter;
  
  iVar2 = crt_io_c_CheckFileHandleAvailability_FUN_00608940();
  if (iVar2 != 0) {
    crt_errno_c_setErrno_FUN_00602790(0xb);
    return (HANDLE)0xffffffff;
  }
  access_mode_00 = access_mode & 7;
  crt_io_c_ConvertAccessMode_FUN_0060c850(access_mode_00,&desired_access,&extra_parameter);
  dwFlagsAndAttributes = 0x80;
  crt_io_c_ConvertCreationDisposition_FUN_0060c894(share_mode | access_mode_00,&share_mode_windows);
  if ((DAT_0068528c == (code *)0x0) ||
     (iVar2 = crt_string_c_stricmp_FUN_005fe7f0(filename,"con"), iVar2 != 0)) {
    if ((access_mode & 0x20) == 0) {
      if ((access_mode & 0x40) == 0) {
LAB_006091db:
        dwCreationDisposition = 3;
      }
      else {
        dwCreationDisposition = 5;
      }
    }
    else {
      puVar1 = (uint *)*extra_args;
      *extra_args = (va_list_t)(puVar1 + 1);
      uVar4 = *puVar1;
      *extra_args = (va_list_t)0x0;
      extra_parameter = uVar4 & ~DAT_006854ec;
      if (((extra_parameter & 0x100) != 0) && ((extra_parameter & 0x80) == 0)) {
        dwFlagsAndAttributes = 1;
      }
      if ((access_mode & 0x400) == 0) {
        if ((access_mode & 0x40) == 0) {
          unaff_EBX = 4;
          goto LAB_006091db;
        }
        unaff_EBX = 2;
        dwCreationDisposition = 1;
      }
      else {
        unaff_EBX = 1;
        dwCreationDisposition = 1;
      }
    }
    pvVar3 = (*g_CreateFileAFunc)
                       (filename,desired_access,share_mode_windows,
                        (LPSECURITY_ATTRIBUTES)&stack0xffffffd8,dwCreationDisposition,
                        dwFlagsAndAttributes,(HANDLE)0x0);
    if (pvVar3 == (HANDLE)0xffffffff) {
      if ((access_mode & 0x20) != 0) {
        pvVar3 = (*g_CreateFileAFunc)
                           (filename,desired_access,share_mode_windows,(LPSECURITY_ATTRIBUTES)0x0,
                            unaff_EBX,dwFlagsAndAttributes,(HANDLE)0x0);
      }
      if (pvVar3 == (HANDLE)0xffffffff) {
        pvVar3 = (HANDLE)crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return pvVar3;
      }
    }
    handle_index = (HANDLE)(*PTR_crt_sync_c_RegisterHandle_FUN_00602438_00684ef0)(pvVar3);
    uVar4 = 0;
    if (g_MaxHandleCount <= handle_index) {
      (*g_CloseHandleFunc)(pvVar3);
      crt_errno_c_setErrno_FUN_00602790(5);
      return (HANDLE)0xffffffff;
    }
    iVar2 = crt_io_c_IsSpecialDevice_FUN_0060c270((int)handle_index);
    if (iVar2 != 0) {
      uVar4 = 0x2000;
    }
  }
  else {
    pvVar3 = crt_io_c_CreateFallbackHandle_FUN_00608b88();
    handle_index = (HANDLE)(*PTR_crt_sync_c_RegisterHandle_FUN_00602438_00684ef0)(pvVar3);
    uVar4 = 0x2000;
    (*DAT_0068528c)();
  }
  if (access_mode_00 == 2) {
    uVar4 = uVar4 | 3;
  }
  else if (access_mode_00 == 0) {
    uVar4 = uVar4 | 1;
  }
  else if (access_mode_00 == 1) {
    uVar4 = uVar4 | 2;
  }
  if ((share_mode & 0x10) != 0) {
    uVar4 = uVar4 | 0x80;
  }
  if ((share_mode & 0x300) == 0) {
    if (0x00000100 != 0x200) goto LAB_006092cd;
  }
  else if ((share_mode & 0x200) == 0) goto LAB_006092cd;
  uVar4 = uVar4 | 0x40;
LAB_006092cd:
  crt_io_c_setFileDescriptorFlags_FUN_00608908((int)handle_index,uVar4);
  return handle_index;
}
