// Name: crt_io.c_extend_file_for_append_FUN_00608410
// Address: 00608410
// Address Range: [[00608410, 006084e8]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_extend_file_for_append_FUN_00608410(int fd)

#include "nocturne.h"

int __cdecl extend_file_for_append(int fd)

{
  int distance_to_move;
  int iVar1;
  uint uVar2;
  int iVar2;
  uint uVar3;
  SIZE_T SVar3;
  SIZE_T count;
  byte local_20c [512];
  
  distance_to_move = lseek(fd,0,1);
  iVar1 = distance_to_move;
  if ((distance_to_move != -1) && (iVar1 = lseek(fd,0,2), iVar1 != -1)) {
    if (iVar1 < distance_to_move) {
      SVar3 = distance_to_move - iVar1;
      uVar2 = func_0x006088b0(fd);
      func_0x00608908(fd,uVar2 & 0xffff7fff);
      if (0 < (int)SVar3) {
        memset(local_20c,0,0x200);
        do {
          count = SVar3;
          if (0x200 < (int)SVar3) {
            count = 0x200;
          }
          iVar2 = write(fd,local_20c,count);
          if (iVar2 < 0) {
            return iVar2;
          }
          SVar3 = SVar3 - count;
        } while (SVar3 != 0);
      }
    }
    else {
      iVar2 = lseek(fd,distance_to_move,0);
      uVar3 = func_0x006088b0(fd);
      func_0x00608908(fd,uVar3 & 0xffff7fff);
      if (iVar2 == -1) {
        return -1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}
