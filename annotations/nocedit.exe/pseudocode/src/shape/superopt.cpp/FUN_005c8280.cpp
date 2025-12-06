// Name: shape_superopt.cpp_FUN_005c8280
// Address: 005c8280
// Address Range: [[005c8280, 005c84b9]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005c8280()

#include "nocturne.h"

byte * shape_superopt_cpp_FUN_005c8280(void)

{
  bool bVar1;
  int *ptr;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  byte bVar8;
  int *in_stack_0000000c;
  int in_stack_00000010;
  
  bVar8 = 0;
  ptr = (int *)crt_memory_c_malloc_FUN_006021da((int)in_stack_0000000c * 0x60);
  iVar7 = 0;
  if (ptr == (int *)0x0) {
    return (byte *)0x0;
  }
  do {
    iVar5 = 0;
    if (in_stack_00000010 != 0) {
      piVar2 = in_stack_0000000c;
      do {
        if (*piVar2 != -1) break;
        piVar2 = piVar2 + 0x18;
        iVar5 = iVar5 + 1;
      } while (piVar2 < in_stack_0000000c + in_stack_00000010 * 0x18);
    }
    if (iVar5 == in_stack_00000010) {
      piVar2 = ptr;
      for (uVar4 = (uint)(in_stack_00000010 * 0x60) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *in_stack_0000000c = *piVar2;
        piVar2 = piVar2 + (uint)bVar8 * -2 + 1;
        in_stack_0000000c = in_stack_0000000c + (uint)bVar8 * -2 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)in_stack_0000000c = (char)*piVar2;
        piVar2 = (int *)((int)piVar2 + (uint)bVar8 * -2 + 1);
        in_stack_0000000c = (int *)((int)in_stack_0000000c + (uint)bVar8 * -2 + 1);
      }
      crt_memory_c_free_FUN_005fe659(ptr);
      return &DAT_00000001;
    }
    piVar2 = in_stack_0000000c + iVar5 * 0x18;
    piVar3 = ptr + iVar7 * 0x18;
    *piVar3 = *piVar2;
    piVar3[1] = piVar2[1];
    piVar3[2] = piVar2[2];
    piVar3[3] = piVar2[3];
    piVar3[4] = piVar2[4];
    piVar3[5] = piVar2[5];
    piVar3[6] = piVar2[6];
    piVar3[7] = piVar2[7];
    piVar3[8] = piVar2[8];
    piVar3[9] = piVar2[9];
    piVar3[10] = piVar2[10];
    piVar3[0xb] = piVar2[0xb];
    piVar3[0xc] = piVar2[0xc];
    piVar3[0xd] = piVar2[0xd];
    piVar3[0xe] = piVar2[0xe];
    piVar3[0xf] = piVar2[0xf];
    piVar3[0x10] = piVar2[0x10];
    piVar3[0x11] = piVar2[0x11];
    piVar3[0x12] = piVar2[0x12];
    piVar3[0x13] = piVar2[0x13];
    iVar7 = iVar7 + 1;
    piVar3[0x14] = piVar2[0x14];
    piVar3[0x15] = piVar2[0x15];
    piVar3[0x16] = piVar2[0x16];
    piVar3[0x17] = piVar2[0x17];
    *piVar2 = -1;
    do {
      bVar1 = true;
      if (in_stack_00000010 != 0) {
        iVar5 = iVar7 * 0x60;
        pdVar6 = (double *)(ptr + iVar7 * 0x18 + -0xe);
        piVar2 = in_stack_0000000c;
        do {
          if (!bVar1) break;
          if ((((*piVar2 != -1) && (*(double *)(piVar2 + 4) == *pdVar6)) &&
              (*(double *)(piVar2 + 6) == pdVar6[1])) && (*(double *)(piVar2 + 8) == pdVar6[2])) {
            piVar3 = (int *)(iVar5 + (int)ptr);
            *piVar3 = *piVar2;
            piVar3[1] = piVar2[1];
            piVar3[2] = piVar2[2];
            piVar3[3] = piVar2[3];
            *(double *)(piVar3 + 4) = *(double *)(piVar2 + 4);
            *(ulonglong *)(piVar3 + 6) = *(ulonglong *)(piVar2 + 6);
            *(ulonglong *)(piVar3 + 8) = *(ulonglong *)(piVar2 + 8);
            pdVar6 = pdVar6 + 0xc;
            *(ulonglong *)(piVar3 + 10) = *(ulonglong *)(piVar2 + 10);
            *(ulonglong *)(piVar3 + 0xc) = *(ulonglong *)(piVar2 + 0xc);
            *(ulonglong *)(piVar3 + 0xe) = *(ulonglong *)(piVar2 + 0xe);
            *(ulonglong *)(piVar3 + 0x10) = *(ulonglong *)(piVar2 + 0x10);
            *(ulonglong *)(piVar3 + 0x12) = *(ulonglong *)(piVar2 + 0x12);
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 0x60;
            bVar1 = false;
            *(ulonglong *)(piVar3 + 0x14) = *(ulonglong *)(piVar2 + 0x14);
            *(ulonglong *)(piVar3 + 0x16) = *(ulonglong *)(piVar2 + 0x16);
            *piVar2 = -1;
          }
          piVar2 = piVar2 + 0x18;
        } while (piVar2 < in_stack_0000000c + in_stack_00000010 * 0x18);
      }
    } while (!bVar1);
  } while( true );
}
