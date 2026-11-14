// Name: crt_stdio.c_fwrite_FUN_005a48e0
// Address: 005a48e0
// Address Range: [[005a48e0, 005a4b18]]
// Convention: __cdecl
// Signature: SIZE_T __cdecl crt_stdio_c_fwrite_FUN_005a48e0(void *ptr,SIZE_T size,SIZE_T count,_FILE *file)

#include "nocturne.h"

SIZE_T __cdecl _fwrite(void *ptr,SIZE_T size,SIZE_T count,_FILE *file)

{
  byte bVar1;
  uint uVar2;
  SIZE_T SVar3;
  uint uVar4;
  int iVar5;
  byte bVar7;
  uint uVar6;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  uint uStack_18;
  uint uStack_14;
  
  bVar7 = 0;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(file->_handle);
  if ((file->_flag & 2) == 0) {
    setErrno(4);
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
    SVar3 = 0;
  }
  else {
    uStack_14 = count * size;
    if (uStack_14 == 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
      return 0;
    }
    if (file->_link->__reserve_end == (char *)0x0) {
      FUN_005a9310(file);
    }
    uVar2 = file->_flag;
    bVar1 = (byte)file->_flag;
    uStack_18 = 0;
    *(byte *)&file->_flag = bVar1 & 0xcf;
    if ((bVar1 & 0x40) == 0) {
      bVar7 = *(byte *)((int)&file->_flag + 1);
      bVar10 = (bVar7 & 4) != 0;
      if (bVar10) {
        bVar7 = bVar7 & 0xfa;
        *(byte *)((int)&file->_flag + 1) = bVar7;
        *(byte *)((int)&file->_flag + 1) = bVar7 | 1;
      }
      pcVar8 = file->_link->__get_base;
      file->_link->__get_base = (char *)0x1;
      do {
        bVar7 = *(byte *)ptr;
        ptr = (void *)((int)ptr + 1);
        _fputc((uint)bVar7,file);
        if ((file->_flag & 0x30) != 0) break;
        uStack_18 = uStack_18 + 1;
      } while (uStack_14 - uStack_18 != 0);
      file->_link->__get_base = pcVar8;
      if (bVar10) {
        bVar7 = *(byte *)((int)&file->_flag + 1) & 0xfa;
        *(byte *)((int)&file->_flag + 1) = bVar7;
        *(byte *)((int)&file->_flag + 1) = bVar7 | 4;
        FUN_005a9bc0(file);
      }
    }
    else {
      do {
        if ((file->_cnt == 0) && (file->_bufsize <= uStack_14)) {
          uVar4 = uStack_14 >> 8 & 0xfffffe;
          uVar6 = uVar4 << 8;
          if (uVar4 == 0) {
            uVar6 = uStack_14;
          }
          uVar4 = FUN_005aac30(file->_handle,ptr,uVar6);
          if (uVar4 != 0xffffffff) {
            if (uVar4 != 0) goto LAB_005a4a30;
            iVar5 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
            *(uint *)(iVar5 + 4) = 0xc;
          }
          *(byte *)&file->_flag = (byte)file->_flag | 0x20;
        }
        else {
          uVar4 = file->_bufsize - file->_cnt;
          if (uStack_14 < uVar4) {
            uVar4 = uStack_14;
          }
          pcVar8 = ptr;
          pcVar9 = file->_ptr;
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(uint *)pcVar9 = *(uint *)pcVar8;
            pcVar8 = pcVar8 + ((uint)bVar7 * -2 + 1) * 4;
            pcVar9 = pcVar9 + ((uint)bVar7 * -2 + 1) * 4;
          }
          for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar9 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
            pcVar9 = pcVar9 + (uint)bVar7 * -2 + 1;
          }
          bVar1 = *(byte *)((int)&file->_flag + 1);
          file->_ptr = file->_ptr + uVar4;
          file->_cnt = file->_cnt + uVar4;
          *(byte *)((int)&file->_flag + 1) = bVar1 | 0x10;
          if ((file->_cnt == file->_bufsize) || ((file->_flag & 0x400) != 0)) {
            FUN_005a9bc0(file);
          }
        }
LAB_005a4a30:
        ptr = (void *)((int)ptr + uVar4);
        uStack_18 = uStack_18 + uVar4;
        uStack_14 = uStack_14 - uVar4;
      } while ((uStack_14 != 0) && ((file->_flag & 0x20) == 0));
    }
    if ((file->_flag & 0x20) != 0) {
      uStack_18 = 0;
    }
    file->_flag = file->_flag | uVar2 & 0x30;
    (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
    SVar3 = uStack_18 / size;
  }
  return SVar3;
}
