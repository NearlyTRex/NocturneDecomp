// Name: core_bodypart.cpp_CBodyPart_archive_FUN_00416570
// Address: 00416570
// Address Range: [[00416570, 004168c9]]
// Convention: unknown
// Signature: int core_bodypart_cpp_CBodyPart_archive_FUN_00416570(int param_1)

#include "nocturne.h"

int core_bodypart_cpp_CBodyPart_archive_FUN_00416570(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x16c,"vertexCount");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x178,"triCount");
  iVar4 = core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x184,"textureCount");
  if (DAT_00763e88 == 1) {
    core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0
              (param_1,*(uint *)(param_1 + 0x16c),*(uint *)(param_1 + 0x178));
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x16c)) {
      iVar5 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x170) + iVar5;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0xc;
        _fscanf(DAT_00763e84,"%d,%d,%d\n",iVar6,iVar6 + 4,iVar6 + 8);
      } while (iVar4 < *(int *)(param_1 + 0x16c));
    }
    local_14 = 0;
    if (0 < *(int *)(param_1 + 0x178)) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x17c) + iVar4;
        iVar4 = iVar4 + 0x3c;
        _fscanf(DAT_00763e84,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",*(int *)(param_1 + 0x180) + iVar5,
                   iVar6 + 0x18,iVar6 + 0x1c,iVar6 + 0x20,iVar6 + 0x24,iVar6 + 0x28,iVar6 + 0x2c,
                   iVar6 + 0x30,iVar6 + 0x34,iVar6 + 0x38);
        iVar5 = iVar5 + 4;
        *(uint *)(iVar6 + 4) = 3;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + 0x178));
    }
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x184)) {
      iVar5 = param_1 + 400;
      do {
        iVar4 = iVar4 + 1;
        _fscanf(DAT_00763e84," \"%[^\"]\"\n",iVar5);
        iVar5 = iVar5 + 0x18;
      } while (iVar4 < *(int *)(param_1 + 0x184));
    }
    iVar4 = core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416d40(param_1);
  }
  else {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x16c)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x170);
        iVar4 = iVar6 + 8;
        iVar2 = iVar6 + 4;
        puVar1 = (uint *)(iVar6 + iVar3);
        iVar6 = iVar6 + 0xc;
        iVar5 = iVar5 + 1;
        _fprintf(DAT_00763e84,"\t%d,%d,%d\n",*puVar1,*(uint *)(iVar2 + iVar3),
                   *(uint *)(iVar4 + iVar3));
        iVar4 = *(int *)(param_1 + 0x16c);
      } while (iVar5 < iVar4);
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x178)) {
      local_18 = 0;
      iVar6 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x17c) + local_18;
        iVar4 = _fprintf(DAT_00763e84,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                           *(uint *)(iVar6 + *(int *)(param_1 + 0x180)),
                           *(uint *)(iVar4 + 0x18),*(uint *)(iVar4 + 0x1c),
                           *(uint *)(iVar4 + 0x20),*(uint *)(iVar4 + 0x24),
                           *(uint *)(iVar4 + 0x28),*(uint *)(iVar4 + 0x2c),
                           *(uint *)(iVar4 + 0x30),*(uint *)(iVar4 + 0x34),
                           *(uint *)(iVar4 + 0x38));
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
        local_18 = local_18 + 0x3c;
      } while (iVar5 < *(int *)(param_1 + 0x178));
    }
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x184)) {
      iVar6 = param_1 + 400;
      do {
        iVar5 = iVar5 + 1;
        iVar4 = _fprintf(DAT_00763e84,"\t\"%s\"\n",iVar6);
        iVar6 = iVar6 + 0x18;
      } while (iVar5 < *(int *)(param_1 + 0x184));
    }
  }
  if (1 < 0x00000005) {
    core_actor_cpp_FUN_0040ce80(param_1 + 0xcb4,"simBox");
    iVar4 = core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xf10,"carriedByActor");
  }
  if (2 < 0x00000005) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xca0,"bloodType");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xc98,"dontUseNormals");
    iVar4 = core_actor_cpp_archiveInteger_FUN_0040c900
                      (param_1 + 0xc9c,"transparentGeometryFlag");
  }
  if (3 < 0x00000005) {
    iVar4 = core_actor_cpp_archiveInteger_FUN_0040c900
                      (param_1 + 0x150,"renderInBackground");
  }
  if (4 < 0x00000005) {
    iVar4 = core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xcac,"dontPickMeUp");
    return iVar4;
  }
  return iVar4;
}
