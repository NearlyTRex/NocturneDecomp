// Name: core_fire.cpp_FUN_004a27e0
// Address: 004a27e0
// Address Range: [[004a27e0, 004a282f]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a27e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_fire_cpp_FUN_004a27e0(void)

{
  int iVar1;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CKeyFramedModel *in_stack_00000010;
  float in_stack_00000014;
  
  iVar1 = _DAT_01cefd10 * 0x24;
  _DAT_01cefd10 = _DAT_01cefd10 + 1;
  if (9 < _DAT_01cefd10) {
    _DAT_01cefd10 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_0049aca0
            ((CBulletTrail *)(iVar1 + 0x1cefd14),in_stack_00000008,in_stack_0000000c,
             in_stack_00000010,in_stack_00000014);
  return;
}
