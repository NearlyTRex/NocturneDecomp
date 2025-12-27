// Name: crt_io.c_write_FUN_006084ec
// Address: 006084ec
// Address Range: [[006084ec, 006088a0]]
// Convention: __cdecl
// Signature: int crt_io.c_write_FUN_006084ec(int fd, void * buffer, SIZE_T count)

#include "nocturne.h"

int __cdecl crt_io_c_write_FUN_006084ec(int fd,void *buffer,SIZE_T count)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  SIZE_T SVar4;
  BOOL BVar5;
  void **ppvVar6;
  byte *puVar7;
  BADSPACEBASE *in_ESP;
  SIZE_T unaff_EDI;
  uint uStack00000010;
  uint uStack00000018;
  uint uStack00000028;
  byte *puVar8;
  void **ppvVar9;
  byte *puVar10;
  void **hFile;
  uint uVar11;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    return -1;
  }
  hFile = g_IOControlBlock->standard_handles[fd];
  uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(fd);
  if (uVar1 == 0) {
    crt_errno_c_setErrno_FUN_00602790(4);
    return -1;
  }
  if ((uVar1 & 2) == 0) {
    crt_errno_c_setErrno_FUN_00602790(6);
    return -1;
  }
  uVar11 = uVar1;
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(fd);
  if (((uVar1 & 0x80) != 0) &&
     (DVar2 = (*SetFilePointer)(hFile,0,(PLONG)0x0,2), DVar2 == 0xffffffff)) {
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
    DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    return DVar2;
  }
  if ((uVar11 & 0x8000) != 0) {
    hFile = (void **)0x6085a8;
    uVar11 = fd;
    iVar3 = crt_io_c_extend_file_for_append_FUN_00608410(fd);
    if (iVar3 != 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
      return -1;
    }
  }
  if ((uVar11 & 0x40) != 0) {
    if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
       (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
      SVar4 = count;
      BVar5 = (*PTR_WriteFile_00611678)
                        (&stack0xffffffe4,buffer,count,(LPDWORD)&stack0xffffffe4,(LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
        uStack00000010 = 0x608629;
        DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar2;
      }
    }
    else {
      SVar4 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,buffer,count);
    }
    if (SVar4 != count) {
      crt_errno_c_setErrno_FUN_00602790(0xc);
      count = SVar4;
    }
    goto LAB_0060864c;
  }
  uVar1 = crt_stack_c_GetStackUsage_FUN_0060c260();
  if (uVar1 < 0xb0) {
                    /* WARNING: Subroutine does not return */
    crt_stack_c_stack_overflow_handler_FUN_005ffa22(unaff_EDI);
  }
  puVar7 = (byte *)0x200;
  if (uVar1 < 0x230) {
    puVar7 = (byte *)0x80;
  }
  ppvVar6 = &buffer;
  ppvVar9 = (void **)0x0;
  puVar8 = (byte *)0x0;
  puVar10 = (byte *)0x0;
  if (count != 0) {
    do {
      if (*(char *)((int)buffer + (int)ppvVar9) == '\n') {
        *(byte *)((int)&buffer + (int)puVar8) = 0xd;
        puVar8 = puVar8 + 1;
        if (puVar7 == puVar8) {
          if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
             (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
            BVar5 = (*PTR_WriteFile_00611678)
                              (hFile,&buffer,(DWORD)puVar7,(LPDWORD)&stack0xffffffdc,
                               (LPOVERLAPPED)0x0);
            if (BVar5 == 0) {
              uStack00000018 = 0x608713;
              (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
              uStack00000028 = 0x60871b;
              DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
              return DVar2;
            }
          }
          else {
            puVar8 = (byte *)(*g_SpecialDeviceWriteFuncPtr)(iVar3,&buffer,(int)puVar7);
          }
          if (puVar7 != puVar8) {
            uStack00000018 = 0x60872e;
            crt_errno_c_setErrno_FUN_00602790(0xc);
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            return (int)(puVar10 + (int)puVar8);
          }
          puVar8 = (byte *)0x0;
          puVar10 = (byte *)ppvVar9;
        }
      }
      puVar8[(int)&buffer] = *(byte *)((int)buffer + (int)ppvVar9);
      ppvVar9 = (void **)((int)ppvVar9 + 1);
      puVar8 = puVar8 + 1;
      if (puVar7 == puVar8) {
        if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
           (puVar8 = (byte *)(*g_IsSpecialDeviceFuncPtr)(fd), puVar8 == (byte *)0x0)) {
          puVar10 = &stack0xffffffdc;
          ppvVar9 = &buffer;
          puVar8 = puVar7;
          hFile = (void **)puVar10;
          BVar5 = (*PTR_WriteFile_00611678)
                            (puVar10,&buffer,(DWORD)puVar7,(LPDWORD)puVar10,(LPOVERLAPPED)0x0);
          if (BVar5 == 0) {
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            uStack00000010 = 0x6087c7;
            DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
            return DVar2;
          }
        }
        else {
          ppvVar9 = (void **)0x608799;
          hFile = &buffer;
          puVar10 = (byte *)(*g_SpecialDeviceWriteFuncPtr)((int)puVar8,&buffer,(int)puVar7);
        }
        if (puVar7 != puVar10) {
          crt_errno_c_setErrno_FUN_00602790(0xc);
          buffer = (void *)fd;
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
          return (int)(puVar8 + (int)puVar10);
        }
        puVar8 = (byte *)0x0;
        puVar10 = (byte *)ppvVar9;
      }
    } while (ppvVar9 < count);
  }
  if (puVar8 == (byte *)0x0) goto LAB_0060864c;
  if (g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) {
LAB_00608842:
    puVar7 = &stack0xffffffe0;
    BVar5 = (*PTR_WriteFile_00611678)
                      (puVar7,&buffer,(DWORD)puVar8,(LPDWORD)puVar7,(LPOVERLAPPED)0x0);
    if (BVar5 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
      uStack00000010 = 0x60886b;
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
  }
  else {
    puVar7 = (byte *)0x608827;
    puVar10 = (byte *)(*g_IsSpecialDeviceFuncPtr)(fd);
    puVar8 = puVar7;
    if (puVar10 == (byte *)0x0) goto LAB_00608842;
    ppvVar6 = (void **)(*g_SpecialDeviceWriteFuncPtr)((int)puVar10,&buffer,(int)puVar7);
    puVar8 = puVar10;
  }
  if (ppvVar6 != (void **)puVar7) {
    crt_errno_c_setErrno_FUN_00602790(0xc);
    buffer = (void *)fd;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
    return (int)(puVar8 + (int)ppvVar6);
  }
LAB_0060864c:
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
  return count;
}
