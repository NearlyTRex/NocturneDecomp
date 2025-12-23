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
  SIZE_T in_stack_ffffffc8;
  DWORD nNumberOfBytesToWrite;
  DWORD local_20;
  DWORD local_1c;
  HANDLE local_18;
  uint local_14;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    count = 0xffffffff;
  }
  else {
    local_18 = g_IOControlBlock->standard_handles[fd];
    uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(fd);
    local_14 = uVar1;
    if (uVar1 == 0) {
      crt_errno_c_setErrno_FUN_00602790(4);
      return -1;
    }
    if ((uVar1 & 2) == 0) {
      crt_errno_c_setErrno_FUN_00602790(6);
      return -1;
    }
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(fd);
    if ((uVar1 & 0x80) != 0) {
      in_stack_ffffffc8 = 0x608583;
      DVar2 = (*SetFilePointer)(local_18,0,(PLONG)0x0,2);
      if (DVar2 == 0xffffffff) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
        DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar2;
      }
    }
    if (((local_14 & 0x8000) != 0) &&
       (iVar3 = crt_io_c_extend_file_for_append_FUN_00608410(fd), iVar3 != 0)) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
      return -1;
    }
    if ((local_14 & 0x40) == 0) {
      local_20 = crt_stack_c_GetStackUsage_FUN_0060c260();
      if (local_20 < 0xb0) {
                    /* WARNING: Subroutine does not return */
        crt_stack_c_stack_overflow_handler_FUN_005ffa22(in_stack_ffffffc8);
      }
      DVar2 = 0x200;
      if (local_20 < 0x230) {
        DVar2 = 0x80;
      }
      local_20 = 0;
      nNumberOfBytesToWrite = 0;
      local_1c = 0;
      if (count != 0) {
        do {
          if (*(char *)((int)buffer + local_20) == '\n') {
            (&stack0xffffffdc)[nNumberOfBytesToWrite] = 0xd;
            nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
            if (DVar2 == nNumberOfBytesToWrite) {
              if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
                 (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
                BVar4 = (*PTR_WriteFile_00611678)
                                  (local_18,&stack0xffffffdc,DVar2,(LPDWORD)&stack0xffffffdc,
                                   (LPOVERLAPPED)0x0);
                if (BVar4 == 0) {
                  local_14 = 0x608713;
                  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                  DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                  return DVar2;
                }
              }
              else {
                nNumberOfBytesToWrite = (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xffffffdc,DVar2)
                ;
              }
              if (DVar2 != nNumberOfBytesToWrite) {
                local_14 = 0x60872e;
                crt_errno_c_setErrno_FUN_00602790(0xc);
                (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                return local_1c + nNumberOfBytesToWrite;
              }
              local_1c = local_20;
              nNumberOfBytesToWrite = 0;
            }
          }
          (&stack0xffffffdc)[nNumberOfBytesToWrite] = *(byte *)((int)buffer + local_20);
          local_20 = local_20 + 1;
          nNumberOfBytesToWrite = nNumberOfBytesToWrite + 1;
          if (DVar2 == nNumberOfBytesToWrite) {
            if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
               (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
              BVar4 = (*PTR_WriteFile_00611678)
                                (local_18,&stack0xffffffdc,DVar2,(LPDWORD)&stack0xffffffdc,
                                 (LPOVERLAPPED)0x0);
              if (BVar4 == 0) {
                (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
                DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
                return DVar2;
              }
            }
            else {
              nNumberOfBytesToWrite = (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xffffffdc,DVar2);
            }
            if (DVar2 != nNumberOfBytesToWrite) {
              crt_errno_c_setErrno_FUN_00602790(0xc);
              (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
              return local_1c + fd;
            }
            local_1c = local_20;
            nNumberOfBytesToWrite = 0;
          }
        } while (local_20 < count);
      }
      if (nNumberOfBytesToWrite != 0) {
        if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
           (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
          BVar4 = (*PTR_WriteFile_00611678)
                            (local_18,&stack0xffffffdc,nNumberOfBytesToWrite,&local_20,
                             (LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            local_14 = 0x608863;
            (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
            DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
            return DVar2;
          }
        }
        else {
          local_20 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,&stack0xffffffdc,nNumberOfBytesToWrite);
        }
        if (local_20 != nNumberOfBytesToWrite) {
          crt_errno_c_setErrno_FUN_00602790(0xc);
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
          return local_1c + local_20;
        }
      }
    }
    else {
      if ((g_SpecialDeviceWriteFuncPtr == (SPECIAL_DEVICE_WRITE_FUNC *)0x0) ||
         (iVar3 = (*g_IsSpecialDeviceFuncPtr)(fd), iVar3 == 0)) {
        BVar4 = (*PTR_WriteFile_00611678)(local_18,buffer,count,&local_1c,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
          DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
          return DVar2;
        }
      }
      else {
        local_1c = (*g_SpecialDeviceWriteFuncPtr)(iVar3,buffer,count);
      }
      if (local_1c != count) {
        crt_errno_c_setErrno_FUN_00602790(0xc);
        count = local_1c;
      }
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(fd);
  }
  return count;
}
