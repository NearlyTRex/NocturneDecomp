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
  BOOL BVar4;
  BADSPACEBASE *in_ESP;
  uint uStack00000020;
  uint uStack00000028;
  uint uStack00000038;
  DWORD nNumberOfBytesToWrite;
  DWORD DVar5;
  SIZE_T in_stack_ffffffe4;
  DWORD DVar6;
  byte *hFile;
  byte *hFile_00;
  uint uVar7;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    count = 0xffffffff;
  }
  else {
    hFile = (byte *)g_IOControlBlock->standard_handles[fd];
    uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(fd);
    if (uVar1 == 0) {
      crt_errno_c_setErrno_FUN_00602790(4);
      return -1;
    }
    if ((uVar1 & 2) == 0) {
      crt_errno_c_setErrno_FUN_00602790(6);
      return -1;
    }
    uVar7 = uVar1;
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(fd);
    if ((uVar1 & 0x80) != 0) {
      hFile = &DAT_00000002;
      in_stack_ffffffe4 = 0;
      DVar2 = (*SetFilePointer)(&DAT_00000002,0,(PLONG)0x0,2);
      if (DVar2 == 0xffffffff) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
        DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar2;
      }
    }
    if (((uVar7 & 0x8000) != 0) &&
       (iVar3 = crt_io_c_extend_file_for_append_FUN_00608410(fd), iVar3 != 0)) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
      return -1;
    }
    if ((uVar7 & 0x40) == 0) {
      uVar1 = crt_stack_c_GetStackUsage_FUN_0060c260();
      if (uVar1 < 0xb0) {
                    /* WARNING: Subroutine does not return */
        crt_stack_c_stack_overflow_handler_FUN_005ffa22(fd);
      }
      DVar2 = 0x200;
      if (uVar1 < 0x230) {
        DVar2 = 0x80;
      }
      DVar5 = 0;
      nNumberOfBytesToWrite = 0;
      DVar6 = 0;
      if (count != 0) {
        do {
          if (*(char *)((int)buffer + DVar5) == '\n') {
            (&stack0x00000018)[nNumberOfBytesToWrite] = 0xd;
            nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
            if (DVar2 == nNumberOfBytesToWrite) {
              if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
                 (buffer = (void *)(*g_IsSpecialDeviceFuncPtr)(fd), buffer == (void *)0x0)) {
                BVar4 = (*PTR_WriteFile_00611678)
                                  (hFile,&stack0x00000018,DVar2,(LPDWORD)&stack0xffffffdc,
                                   (LPOVERLAPPED)0x0);
                buffer = &stack0x00000018;
                count = DVar2;
                if (BVar4 == 0) {
                  uStack00000028 = 0x608713;
                  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                  uStack00000038 = 0x60871b;
                  DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                  return DVar2;
                }
              }
              else {
                nNumberOfBytesToWrite =
                     (*g_SpecialDeviceWriteFuncPtr)((int)buffer,&stack0x00000018,DVar2);
                count = (SIZE_T)&stack0x00000018;
              }
              if (DVar2 != nNumberOfBytesToWrite) {
                uStack00000028 = 0x60872e;
                crt_errno_c_setErrno_FUN_00602790(0xc);
                (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                return DVar6 + nNumberOfBytesToWrite;
              }
              nNumberOfBytesToWrite = 0;
              DVar6 = DVar5;
            }
          }
          (&stack0x00000018)[nNumberOfBytesToWrite] = *(byte *)((int)buffer + DVar5);
          DVar5 = DVar5 + 1;
          nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
          if (DVar2 == nNumberOfBytesToWrite) {
            hFile_00 = hFile;
            if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
               (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), hFile_00 = hFile, iVar3 == 0)) {
              hFile = (byte *)0x6087b4;
              BVar4 = (*PTR_WriteFile_00611678)
                                (hFile_00,&stack0x00000018,DVar2,(LPDWORD)&stack0xffffffdc,
                                 (LPOVERLAPPED)0x0);
              if (BVar4 == 0) {
                (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                uStack00000020 = 0x6087c7;
                DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                return DVar2;
              }
            }
            else {
              nNumberOfBytesToWrite = (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0x00000018,DVar2);
            }
            if (DVar2 != nNumberOfBytesToWrite) {
              crt_errno_c_setErrno_FUN_00602790(0xc);
              (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
              return DVar6 + nNumberOfBytesToWrite;
            }
            nNumberOfBytesToWrite = 0;
            DVar6 = DVar5;
          }
        } while (DVar5 < count);
      }
      if (nNumberOfBytesToWrite != 0) {
        if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
           (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
          BVar4 = (*PTR_WriteFile_00611678)
                            (hFile,&stack0x00000018,nNumberOfBytesToWrite,(LPDWORD)&stack0xffffffe0,
                             (LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            uStack00000020 = 0x60886b;
            DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
            return DVar2;
          }
        }
        else {
          DVar5 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0x00000018,nNumberOfBytesToWrite);
        }
        if (DVar5 != nNumberOfBytesToWrite) {
          crt_errno_c_setErrno_FUN_00602790(0xc);
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
          return DVar6 + DVar5;
        }
      }
    }
    else {
      if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
         (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
        BVar4 = (*PTR_WriteFile_00611678)
                          (hFile,buffer,count,(LPDWORD)&stack0xffffffe4,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
          uStack00000020 = 0x608629;
          DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
          return DVar2;
        }
      }
      else {
        in_stack_ffffffe4 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,buffer,count);
      }
      if (in_stack_ffffffe4 != count) {
        count = in_stack_ffffffe4;
        crt_errno_c_setErrno_FUN_00602790(0xc);
      }
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
  }
  return count;
}
