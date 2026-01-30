// Name: shape_superopt.cpp_FUN_005c7fb0
// Address: 005c7fb0
// Address Range: [[005c7fb0, 005c8154]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_FUN_005c7fb0(void)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_FUN_005c7fb0(void)

{
  int iVar1;
  double *pdVar2;
  uint *puVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  CVector3d local_a0;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  uint local_58 [4];
  uint local_48;
  uint uStack_44;
  CVector3d local_40;
  uint local_28 [4];
  uint local_18;
  uint uStack_14;
  
  if ((((*(double *)(in_stack_00000008 + 0x28) != *(double *)(in_stack_0000000c + 0x10)) ||
       (*(double *)(in_stack_00000008 + 0x30) != *(double *)(in_stack_0000000c + 0x18))) ||
      (*(double *)(in_stack_00000008 + 0x38) != *(double *)(in_stack_0000000c + 0x20))) &&
     (((*(double *)(in_stack_00000008 + 0x10) != *(double *)(in_stack_0000000c + 0x28) ||
       (*(double *)(in_stack_00000008 + 0x18) != *(double *)(in_stack_0000000c + 0x30))) ||
      (*(double *)(in_stack_00000008 + 0x20) != *(double *)(in_stack_0000000c + 0x38))))) {
    return 0;
  }
  local_88 = *(double *)(in_stack_00000008 + 0x28) - *(double *)(in_stack_00000008 + 0x10);
  local_80 = *(double *)(in_stack_00000008 + 0x30) - *(double *)(in_stack_00000008 + 0x18);
  local_78 = *(double *)(in_stack_00000008 + 0x38) - *(double *)(in_stack_00000008 + 0x20);
  pdVar2 = &local_88;
  puVar3 = local_58;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar3 = puVar3 + 1;
  }
  local_40.x._0_4_ = local_58[0];
  local_40.x._4_4_ = local_58[1];
  local_40.y._0_4_ = local_58[2];
  local_40.y._4_4_ = local_58[3];
  local_40.z._0_4_ = local_48;
  local_40.z._4_4_ = uStack_44;
  local_70 = *(double *)(in_stack_0000000c + 0x28) - *(double *)(in_stack_0000000c + 0x10);
  local_68 = *(double *)(in_stack_0000000c + 0x30) - *(double *)(in_stack_0000000c + 0x18);
  local_60 = *(double *)(in_stack_0000000c + 0x38) - *(double *)(in_stack_0000000c + 0x20);
  pdVar2 = &local_70;
  puVar3 = local_28;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(uint *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    puVar3 = puVar3 + 1;
  }
  local_a0.x._0_4_ = local_28[0];
  local_a0.x._4_4_ = local_28[1];
  local_a0.y._0_4_ = local_28[2];
  local_a0.y._4_4_ = local_28[3];
  local_a0.z._0_4_ = local_18;
  local_a0.z._4_4_ = uStack_14;
  if (0.0 <= (double)CONCAT44(uStack_44,local_48) * (double)CONCAT44(uStack_14,local_18) +
             (double)CONCAT44(local_58[1],local_58[0]) * (double)CONCAT44(local_28[1],local_28[0]) +
             (double)CONCAT44(local_58[3],local_58[2]) * (double)CONCAT44(local_28[3],local_28[2]))
  {
    iVar1 = shape_superopt_cpp_areVectorsCollinear_FUN_005d66e0(&local_40,&local_a0);
    return iVar1;
  }
  return 0;
}
