// Name: core_icepick.cpp_FUN_004d49bf
// Address: 004d49bf
// Address Range: [[004d49bf, 004d4a11]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004d49bf(void)

#include "nocturne.h"

void core_icepick_cpp_FUN_004d49bf(void)

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
  *(uint *)&unaff_EBX[0x11].field_0x868 = 0x3f800000;
  *(uint *)&unaff_EBX[0x11].field_0x864 = 0;
  *(uint *)&unaff_EBX[0x11].field_0x860 = *(uint *)&unaff_EBX[0x11].field_0x864;
  *(uint *)&unaff_EBX[0x11].field_0x85c = *(uint *)&unaff_EBX[0x11].field_0x860;
  *(uint *)&unaff_EBX[0x11].field_0x86c = 0;
  *(uint *)&unaff_EBX[0x11].field_0x870 = 0;
  *(uint *)&unaff_EBX[1].field_0x2f4 = 0x43960000;
  return;
}
