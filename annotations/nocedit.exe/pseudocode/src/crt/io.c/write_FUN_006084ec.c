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
  LPDWORD lpNumberOfBytesWritten;
  BOOL BVar4;
  byte *puVar5;
  SIZE_T in_stack_ffffffdc;
  byte *puVar6;
  byte *puVar7;
  byte *puVar8;
  HANDLE hFile;
  uint uVar9;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    count = 0xffffffff;
  }
  else {
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
    uVar9 = uVar1;
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(fd);
    if (((uVar1 & 0x80) == 0) ||
       (DVar2 = (*SetFilePointer)(hFile,0,(PLONG)0x0,2), DVar2 != 0xffffffff)) {
      if (((uVar9 & 0x8000) != 0) &&
         (iVar3 = crt_io_c_extend_file_for_append_FUN_00608410(fd), iVar3 != 0)) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
        return -1;
      }
      if ((uVar9 & 0x40) == 0) {
        uVar1 = crt_stack_c_GetStackUsage_FUN_0060c260();
        if (uVar1 < 0xb0) {
                    /* WARNING: Subroutine does not return */
          crt_stack_c_stack_overflow_handler_FUN_005ffa22(in_stack_ffffffdc);
        }
        puVar5 = (byte *)0x200;
        if (uVar1 < 0x230) {
          puVar5 = (byte *)0x80;
        }
        puVar7 = &stack0xffffffec;
        puVar8 = (byte *)0x0;
        puVar6 = (byte *)0x0;
        if (count != 0) {
          do {
            if (*(char *)((int)buffer + (int)puVar8) == '\n') {
              (&stack0xffffffec)[(int)puVar6] = 0xd;
              puVar6 = puVar6 + 1;
              if (puVar5 == puVar6) {
                if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
                   (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
                  puVar6 = &stack0xffffffec;
                  puVar8 = puVar5;
                  BVar4 = (*PTR_WriteFile_00611678)
                                    ((HANDLE)0x0,&stack0xffffffec,(DWORD)puVar5,
                                     (LPDWORD)&stack0xffffffdc,(LPOVERLAPPED)0x0);
                  if (BVar4 == 0) {
                    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                    DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                    return DVar2;
                  }
                }
                else {
                  puVar8 = (byte *)0x6086ed;
                  puVar6 = (byte *)
                           (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xffffffec,(int)puVar5);
                }
                if (puVar5 != puVar6) {
                  crt_errno_c_setErrno_FUN_00602790(0xc);
                  DVar2 = 0x608738;
                  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                  return (int)(puVar6 + DVar2);
                }
                puVar6 = (byte *)0x0;
              }
            }
            puVar6[(int)&stack0xffffffec] = *(byte *)((int)buffer + (int)puVar8);
            puVar8 = puVar8 + 1;
            puVar6 = puVar6 + 1;
            if (puVar5 == puVar6) {
              if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
                 (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
                puVar6 = &stack0xffffffec;
                puVar8 = puVar5;
                BVar4 = (*PTR_WriteFile_00611678)
                                  ((HANDLE)0x0,&stack0xffffffec,(DWORD)puVar5,
                                   (LPDWORD)&stack0xffffffdc,(LPOVERLAPPED)0x0);
                if (BVar4 == 0) {
                  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                  DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                  return DVar2;
                }
              }
              else {
                puVar8 = (byte *)0x608799;
                puVar6 = (byte *)
                         (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xffffffec,(int)puVar5);
              }
              if (puVar5 != puVar6) {
                crt_errno_c_setErrno_FUN_00602790(0xc);
                DVar2 = 0x6087e4;
                (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                return (int)(puVar6 + DVar2);
              }
              puVar6 = (byte *)0x0;
            }
          } while (puVar8 < count);
        }
        if (puVar6 != (byte *)0x0) {
          if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
             (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
            BVar4 = (*PTR_WriteFile_00611678)
                              ((HANDLE)0x0,&stack0xffffffec,(DWORD)puVar6,(LPDWORD)&stack0xffffffe0,
                               (LPOVERLAPPED)0x0);
            if (BVar4 == 0) {
              (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
              DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
              return DVar2;
            }
          }
          else {
            puVar5 = (byte *)
                     (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xffffffec,(int)puVar6);
            puVar7 = puVar6;
            puVar6 = puVar5;
          }
          if (puVar6 != puVar7) {
            crt_errno_c_setErrno_FUN_00602790(0xc);
            DVar2 = 0x60888f;
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            return (int)(puVar6 + DVar2);
          }
        }
      }
      else {
        if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
           (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
          lpNumberOfBytesWritten = (LPDWORD)&stack0xffffffe4;
          BVar4 = (*PTR_WriteFile_00611678)
                            ((HANDLE)0x0,buffer,count,lpNumberOfBytesWritten,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
            return DVar2;
          }
        }
        else {
          lpNumberOfBytesWritten = (LPDWORD)(*g_SpecialDeviceWriteFuncPtr)(iVar3,buffer,count);
        }
        if (lpNumberOfBytesWritten != (LPDWORD)count) {
          count = 0x608643;
          crt_errno_c_setErrno_FUN_00602790(0xc);
        }
      }
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
    }
    else {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
      count = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    }
  }
  return count;
}
