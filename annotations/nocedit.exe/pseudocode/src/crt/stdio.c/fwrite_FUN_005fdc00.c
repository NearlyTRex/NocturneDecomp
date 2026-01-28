// Name: crt_stdio.c_fwrite_FUN_005fdc00
// Address: 005fdc00
// Address Range: [[005fdc00, 005fde38]]
// Convention: __cdecl
// Signature: SIZE_T __cdecl crt_stdio_c_fwrite_FUN_005fdc00(void *ptr,SIZE_T size,SIZE_T count,FILE *file)

#include "nocturne.h"

SIZE_T __cdecl crt_stdio_c_fwrite_FUN_005fdc00(void *ptr,SIZE_T size,SIZE_T count,FILE *file)

{
  byte bVar1;
  uint uVar2;
  SIZE_T SVar3;
  uint uVar4;
  ThreadData *pTVar5;
  byte bVar7;
  uint uVar6;
  uint unaff_EBP;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  int iStack_14;
  
  bVar7 = 0;
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  if ((file->_flag & 2) == 0) {
    crt_errno_c_setErrno_FUN_00602790(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    SVar3 = 0;
  }
  else {
    uVar9 = count * count;
    if (uVar9 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    if (file->_link->__reserve_end == (char *)0x0) {
      crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
    }
    uVar2 = file->_flag;
    bVar1 = (byte)file->_flag;
    iStack_14 = 0;
    *(byte *)&file->_flag = bVar1 & 0xcf;
    if ((bVar1 & 0x40) == 0) {
      bVar7 = *(byte *)((int)&file->_flag + 1);
      bVar11 = (bVar7 & 4) != 0;
      if (bVar11) {
        bVar7 = bVar7 & 0xfa;
        *(byte *)((int)&file->_flag + 1) = bVar7;
        *(byte *)((int)&file->_flag + 1) = bVar7 | 1;
      }
      pcVar8 = file->_link->__get_base;
      file->_link->__get_base = (char *)0x1;
      do {
        bVar7 = *(byte *)size;
        size = size + 1;
        crt_stdio_c_fputc_FUN_006007a0((uint)bVar7,file);
        if ((file->_flag & 0x30) != 0) break;
        iStack_14 = iStack_14 + 1;
      } while (uVar9 - iStack_14 != 0);
      file->_link->__get_base = pcVar8;
      if (bVar11) {
        bVar7 = *(byte *)((int)&file->_flag + 1) & 0xfa;
        *(byte *)((int)&file->_flag + 1) = bVar7;
        *(byte *)((int)&file->_flag + 1) = bVar7 | 4;
        crt_stdio_c_fflushInternal_FUN_006039d0(file);
      }
    }
    else {
      do {
        if ((file->_cnt == 0) && (file->_bufsize <= uVar9)) {
          uVar4 = uVar9 >> 8 & 0xfffffe;
          uVar6 = uVar4 << 8;
          if (uVar4 == 0) {
            uVar6 = uVar9;
          }
          uVar4 = crt_stdio_c_write_FUN_006038c0(file->_handle,(void *)size,uVar6);
          if (uVar4 != 0xffffffff) {
            if (uVar4 != 0) goto LAB_005fdd50;
            pTVar5 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
            pTVar5->errno_value = 0xc;
          }
          *(byte *)&file->_flag = (byte)file->_flag | 0x20;
        }
        else {
          uVar4 = file->_bufsize - file->_cnt;
          if (uVar9 < uVar4) {
            uVar4 = uVar9;
          }
          pcVar8 = (char *)size;
          pcVar10 = file->_ptr;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(uint *)pcVar10 = *(uint *)pcVar8;
            pcVar8 = pcVar8 + ((uint)bVar7 * -2 + 1) * 4;
            pcVar10 = pcVar10 + ((uint)bVar7 * -2 + 1) * 4;
          }
          for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar10 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
            pcVar10 = pcVar10 + (uint)bVar7 * -2 + 1;
          }
          bVar1 = *(byte *)((int)&file->_flag + 1);
          file->_ptr = file->_ptr + uVar4;
          file->_cnt = file->_cnt + uVar4;
          *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
          if ((file->_cnt == file->_bufsize) || ((file->_flag & 0x400) != 0)) {
            crt_stdio_c_fflushInternal_FUN_006039d0(file);
          }
        }
LAB_005fdd50:
        size = size + uVar4;
        unaff_EBP = uVar9 - uVar4;
      } while ((unaff_EBP != 0) && (uVar9 = unaff_EBP, (file->_flag & 0x20) == 0));
    }
    file->_flag = file->_flag | uVar2 & 0x30;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
    SVar3 = unaff_EBP / (uint)file;
  }
  return SVar3;
}
