// Name: FUN_00419ce0
// Address: 00419ce0
// Address Range: [[00419ce0, 00419f22]]
// Convention: unknown
// Signature: int FUN_00419ce0(int param_1)

#include "nocturne.h"

int FUN_00419ce0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if (0x00000005 < 4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  iVar1 = FUN_0040cb00(param_1 + 0x150,"motion state");
  if (1 < 0x00000005) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbd38,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbd9c,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xc344,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xc348,"param");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbda0,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040cbf0(param_1 + 0x150,"partStatus");
    iVar5 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0xbda0)) {
      iVar2 = param_1 + 0xbda4;
      iVar3 = param_1 + 0xbde8;
      iVar7 = param_1 + 0xbddc;
      iVar8 = param_1 + 0xbdbc;
      iVar4 = param_1 + 0xbdcc;
      iVar6 = param_1 + 0xbdb0;
      do {
        core_actor_cpp_archiveVector_FUN_0040c450
                  (iVar5 * 0x48 + iVar2,"boxListPos",iVar2,iVar4,iVar3);
        core_actor_cpp_archiveVector_FUN_0040c450(iVar6,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040c630(iVar8,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040c630(iVar4,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040c450(iVar7,"sourcePos");
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x48;
        iVar8 = iVar8 + 0x48;
        core_actor_cpp_archiveActor_FUN_0040c980(iVar3,"boxListPart");
        iVar7 = iVar7 + 0x48;
        iVar3 = iVar3 + 0x48;
        iVar4 = iVar4 + 0x48;
      } while (iVar5 < *(int *)(param_1 + 0xbda0));
    }
  }
  if ((2 < 0x00000005) && (0x00000005 < 5)) {
    iVar1 = core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbd18,"victimHeight");
    return iVar1;
  }
  return iVar1;
}
