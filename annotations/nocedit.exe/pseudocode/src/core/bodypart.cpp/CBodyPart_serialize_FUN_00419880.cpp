// Name: core_bodypart.cpp_CBodyPart_serialize_FUN_00419880
// Address: 00419880
// Address Range: [[00419880, 00419bd9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_serialize_FUN_00419880(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_serialize_FUN_00419880(CBodyPart *this_ptr)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(this_ptr->unk + 0x1c),"vertexCount")
  ;
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(this_ptr->unk + 0x28),"triCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->unk + 0x34),"textureCount");
  if (g_ActorReadingMode == 1) {
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
    iVar4 = 0;
    if (0 < *(int *)(this_ptr->unk + 0x1c)) {
      iVar7 = 0;
      do {
        iVar5 = *(int *)(this_ptr->unk + 0x20) + iVar7;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0xc;
        _fscanf(g_ActorDataFile,"%d,%d,%d\n",iVar5,iVar5 + 4,iVar5 + 8);
      } while (iVar4 < *(int *)(this_ptr->unk + 0x1c));
    }
    local_14 = 0;
    if (0 < *(int *)(this_ptr->unk + 0x28)) {
      iVar4 = 0;
      iVar7 = 0;
      do {
        iVar5 = *(int *)(this_ptr->unk + 0x2c) + iVar4;
        iVar4 = iVar4 + 0x3c;
        _fscanf(g_ActorDataFile,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(int *)(this_ptr->unk + 0x30) + iVar7,iVar5 + 0x18,iVar5 + 0x1c,iVar5 + 0x20,
                   iVar5 + 0x24,iVar5 + 0x28,iVar5 + 0x2c,iVar5 + 0x30,iVar5 + 0x34,iVar5 + 0x38);
        iVar7 = iVar7 + 4;
        *(uint *)(iVar5 + 4) = 3;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this_ptr->unk + 0x28));
    }
    iVar4 = 0;
    if (0 < *(int *)(this_ptr->unk + 0x34)) {
      pcVar6 = this_ptr->unk + 0x40;
      do {
        iVar4 = iVar4 + 1;
        _fscanf(g_ActorDataFile," \"%[^\"]\"\n",pcVar6);
        pcVar6 = pcVar6 + 0x18;
      } while (iVar4 < *(int *)(this_ptr->unk + 0x34));
    }
    core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr);
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(this_ptr->unk + 0x1c)) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)(this_ptr->unk + 0x20);
        iVar5 = iVar7 + 8;
        iVar2 = iVar7 + 4;
        puVar1 = (uint *)(iVar7 + iVar3);
        iVar7 = iVar7 + 0xc;
        iVar4 = iVar4 + 1;
        _fprintf(g_ActorDataFile,"\t%d,%d,%d\n",*puVar1,*(uint *)(iVar2 + iVar3),
                   *(uint *)(iVar5 + iVar3));
      } while (iVar4 < *(int *)(this_ptr->unk + 0x1c));
    }
    iVar4 = 0;
    if (0 < *(int *)(this_ptr->unk + 0x28)) {
      local_18 = 0;
      iVar7 = 0;
      do {
        iVar5 = *(int *)(this_ptr->unk + 0x2c) + local_18;
        _fprintf(g_ActorDataFile,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar7 + *(int *)(this_ptr->unk + 0x30)),
                   *(uint *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x1c),
                   *(uint *)(iVar5 + 0x20),*(uint *)(iVar5 + 0x24),
                   *(uint *)(iVar5 + 0x28),*(uint *)(iVar5 + 0x2c),
                   *(uint *)(iVar5 + 0x30),*(uint *)(iVar5 + 0x34),
                   *(uint *)(iVar5 + 0x38));
        iVar7 = iVar7 + 4;
        iVar4 = iVar4 + 1;
        local_18 = local_18 + 0x3c;
      } while (iVar4 < *(int *)(this_ptr->unk + 0x28));
    }
    iVar4 = 0;
    if (0 < *(int *)(this_ptr->unk + 0x34)) {
      pcVar6 = this_ptr->unk + 0x40;
      do {
        iVar4 = iVar4 + 1;
        _fprintf(g_ActorDataFile,"\t\"%s\"\n",pcVar6);
        pcVar6 = pcVar6 + 0x18;
      } while (iVar4 < *(int *)(this_ptr->unk + 0x34));
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeSimBox_FUN_0040bd70
              ((CSimBox *)(this_ptr->unk + 0xb74),"simBox");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->unk + 0xdd0),"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->unk + 0xb60),"bloodType");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->unk + 0xb58),"dontUseNormals");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->unk + 0xb5c),"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)this_ptr->unk,"renderInBackground")
    ;
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->unk + 0xb6c),"dontPickMeUp");
    return;
  }
  return;
}
