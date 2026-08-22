// Name: crt_stdio.c_CreateFileImpl_FUN_0056b960
// Address: 0056b960
// Address Range: [[0056b960, 0056bba0]]
// Convention: __cdecl
// Signature: HANDLE __cdecl crt_stdio_c_CreateFileImpl_FUN_0056b960(char *filename,dword access_mode,dword share_mode,va_list_t *extra_args)

#include "nocturne.h"

HANDLE __cdecl CreateFileImpl(char *filename,dword access_mode,dword share_mode,va_list_t *extra_args)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  HANDLE handle_index;
  DWORD dwCreationDisposition;
  HANDLE pvVar4;
  DWORD unaff_EBX;
  uint uVar5;
  DWORD dwFlagsAndAttributes;
  uint uVar6;
  _SECURITY_ATTRIBUTES local_28;
  DWORD local_1c;
  DWORD local_18;
  uint local_14;
  
  iVar2 = FUN_0056dfc0();
  if (iVar2 != 0) {
    setErrno(0xb);
    return (HANDLE)0xffffffff;
  }
  uVar6 = access_mode & 7;
  FUN_00570510(uVar6,&local_18,&local_14);
  dwFlagsAndAttributes = 0x80;
  FUN_00570554(share_mode | uVar6,&local_1c);
  local_28.nLength = 0xc;
  local_28.lpSecurityDescriptor = (LPVOID)0x0;
  local_28.bInheritHandle = (BOOL)((access_mode & 0x80) == 0);
  if ((DAT_005c1d5c == (code *)0x0) ||
     (iVar2 = _stricmp(filename,"con"), iVar2 != 0)) {
    if ((access_mode & 0x20) == 0) {
      if ((access_mode & 0x40) == 0) {
LAB_0056ba9b:
        dwCreationDisposition = 3;
      }
      else {
        dwCreationDisposition = 5;
      }
    }
    else {
      puVar1 = (uint *)extra_args->value[0];
      extra_args->value[0] = (char *)(puVar1 + 1);
      local_14 = *puVar1;
      extra_args->value[0] = (char *)0x0;
      local_14 = local_14 & ~DAT_005c206c;
      if (((local_14 & 0x100) != 0) && ((local_14 & 0x80) == 0)) {
        dwFlagsAndAttributes = 1;
      }
      if ((access_mode & 0x400) == 0) {
        if ((access_mode & 0x40) == 0) {
          unaff_EBX = 4;
          goto LAB_0056ba9b;
        }
        unaff_EBX = 2;
        dwCreationDisposition = 1;
      }
      else {
        unaff_EBX = 1;
        dwCreationDisposition = 1;
      }
    }
    pvVar4 = CreateFileA(filename,local_18,local_1c,&local_28,dwCreationDisposition,
                         dwFlagsAndAttributes,(HANDLE)0x0);
    if (pvVar4 == (HANDLE)0xffffffff) {
      if ((access_mode & 0x20) != 0) {
        pvVar4 = CreateFileA(filename,local_18,local_1c,(LPSECURITY_ATTRIBUTES)0x0,unaff_EBX,
                             dwFlagsAndAttributes,(HANDLE)0x0);
      }
      if (pvVar4 == (HANDLE)0xffffffff) {
        pvVar4 = (HANDLE)__set_errno();
        return pvVar4;
      }
    }
    handle_index = (HANDLE)(*(code *)PTR_crt_io_c_register_handler_wrapper_FUN_005671e8_005c1ac8)
                                     (pvVar4);
    uVar5 = 0;
    if (0x00000014 <= handle_index) {
      CloseHandle(pvVar4);
      setErrno(5);
      return (HANDLE)0xffffffff;
    }
    iVar2 = IsSpecialDevice((int)handle_index);
    if (iVar2 != 0) {
      uVar5 = 0x2000;
    }
  }
  else {
    uVar3 = FUN_0056e208();
    handle_index = (HANDLE)(*(code *)PTR_crt_io_c_register_handler_wrapper_FUN_005671e8_005c1ac8)
                                     (uVar3);
    uVar5 = 0x2000;
    (*DAT_005c1d5c)(0,handle_index,0xffffffff);
  }
  if (uVar6 == 2) {
    uVar5 = uVar5 | 3;
  }
  else if (uVar6 == 0) {
    uVar5 = uVar5 | 1;
  }
  else if (uVar6 == 1) {
    uVar5 = uVar5 | 2;
  }
  if ((access_mode & 0x10) != 0) {
    uVar5 = uVar5 | 0x80;
  }
  if ((access_mode & 0x300) == 0) {
    if (0x00000100 != 0x200) goto LAB_0056bb8d;
  }
  else if ((access_mode & 0x200) == 0) goto LAB_0056bb8d;
  uVar5 = uVar5 | 0x40;
LAB_0056bb8d:
  FUN_0056f278(handle_index,uVar5);
  return handle_index;
}
