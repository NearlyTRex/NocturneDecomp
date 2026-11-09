// Name: core_colonel.cpp_FUN_0043563f
// Address: 0043563f
// Address Range: [[0043563f, 00435673]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_0043563f(void)

#include "nocturne.h"

void core_colonel_cpp_FUN_0043563f(void)

{
  char cVar1;
  char *in_EAX;
  CDeformableModelInstance *unaff_EBX;
  char *unaff_retaddr;
  char *pcVar2;
  
  cVar1 = (char)in_EAX + *in_EAX;
  pcVar2 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(unaff_EBX,unaff_retaddr);
  *(uint *)&unaff_EBX[0x11].field_0x860 = 0x3f800000;
  *(uint *)&unaff_EBX[0x11].field_0x85c = 0;
  *(uint *)&unaff_EBX[0x11].field_0x858 = *(uint *)&unaff_EBX[0x11].field_0x85c;
  *(uint *)&unaff_EBX[0x11].field_0x854 = *(uint *)&unaff_EBX[0x11].field_0x858;
  return;
}
