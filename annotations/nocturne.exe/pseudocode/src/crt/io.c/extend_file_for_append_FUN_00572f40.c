// Name: crt_io.c_extend_file_for_append_FUN_00572f40
// Address: 00572f40
// Address Range: [[00572f40, 00573018]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_extend_file_for_append_FUN_00572f40(int fd)

#include "nocturne.h"

int __cdecl extend_file_for_append(int fd)

{
  int distance_to_move;
  int iVar1;
  uint uVar2;
  SIZE_T SVar3;
  SIZE_T count;
  byte local_20c [512];
  
  distance_to_move = lseek(fd,0,1);
  iVar1 = distance_to_move;
  if ((distance_to_move != -1) && (iVar1 = lseek(fd,0,2), iVar1 != -1)) {
    if (iVar1 < distance_to_move) {
      SVar3 = distance_to_move - iVar1;
      uVar2 = FUN_0056f220(fd);
      FUN_0056f278(fd,uVar2 & 0xffff7fff);
      if (0 < (int)SVar3) {
        memset(local_20c,0,0x200);
        do {
          count = SVar3;
          if (0x200 < (int)SVar3) {
            count = 0x200;
          }
          iVar1 = write(fd,local_20c,count);
          if (iVar1 < 0) {
            return iVar1;
          }
          SVar3 = SVar3 - count;
        } while (SVar3 != 0);
      }
    }
    else {
      iVar1 = lseek(fd,distance_to_move,0);
      uVar2 = FUN_0056f220(fd);
      FUN_0056f278(fd,uVar2 & 0xffff7fff);
      if (iVar1 == -1) {
        return -1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}
