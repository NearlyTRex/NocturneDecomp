// Name: core_bodypart.cpp_CBodyPart_serialize_FUN_00419880
// Address: 00419880
// Address Range: [[00419880, 00419bd9]]
// Convention: __cdecl
// Signature: void core_bodypart.cpp_CBodyPart_serialize_FUN_00419880(CBodyPart * this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_serialize_FUN_00419880(CBodyPart *this_ptr)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->field1_0x158 + 0x1c),"vertexCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->field1_0x158 + 0x28),"triCount");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(this_ptr->field1_0x158 + 0x34),"textureCount");
  if (g_ActorReadingMode == 1) {
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
    iVar3 = 0;
    if (0 < *(int *)(this_ptr->field1_0x158 + 0x1c)) {
      iVar6 = 0;
      do {
        iVar7 = *(int *)(this_ptr->field1_0x158 + 0x20) + iVar6;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0xc;
        crt_stdio_c_fscanf_FUN_005fe7c0
                  (g_ActorDataFile,"%d,%d,%d\n","%d,%d,%d\n",iVar7,iVar7 + 4,iVar7 + 8);
      } while (iVar3 < *(int *)(this_ptr->field1_0x158 + 0x1c));
    }
    iVar3 = 0;
    if (0 < *(int *)(this_ptr->field1_0x158 + 0x28)) {
      iVar6 = 0;
      iVar7 = 0;
      do {
        iVar4 = *(int *)(this_ptr->field1_0x158 + 0x2c) + iVar6;
        iVar6 = iVar6 + 0x3c;
        crt_stdio_c_fscanf_FUN_005fe7c0
                  (g_ActorDataFile,"\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n","\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(int *)(this_ptr->field1_0x158 + 0x30) + iVar7,iVar4 + 0x18,iVar4 + 0x1c,
                   iVar4 + 0x20,iVar4 + 0x24,iVar4 + 0x28,iVar4 + 0x2c,iVar4 + 0x30,iVar4 + 0x34,
                   iVar4 + 0x38);
        iVar7 = iVar7 + 4;
        *(uint *)(iVar4 + 4) = 3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(this_ptr->field1_0x158 + 0x28));
    }
    iVar3 = 0;
    if (0 < *(int *)(this_ptr->field1_0x158 + 0x34)) {
      pcVar5 = this_ptr->field1_0x158 + 0x40;
      do {
        iVar3 = iVar3 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile," \"%[^\"]\"\n"," \"%[^\"]\"\n",pcVar5);
        pcVar5 = pcVar5 + 0x18;
      } while (iVar3 < *(int *)(this_ptr->field1_0x158 + 0x34));
    }
    core_bodypart_cpp_FUN_0041a050();
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(this_ptr->field1_0x158 + 0x1c)) {
      iVar6 = 0;
      do {
        iVar2 = *(int *)(this_ptr->field1_0x158 + 0x20);
        iVar7 = iVar6 + 8;
        iVar4 = iVar6 + 4;
        puVar1 = (uint *)(iVar6 + iVar2);
        iVar6 = iVar6 + 0xc;
        iVar3 = iVar3 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (g_ActorDataFile,"\t%d,%d,%d\n",*puVar1,*(uint *)(iVar4 + iVar2),
                   *(uint *)(iVar7 + iVar2));
      } while (iVar3 < *(int *)(this_ptr->field1_0x158 + 0x1c));
    }
    iVar3 = 0;
    if (0 < *(int *)(this_ptr->field1_0x158 + 0x28)) {
      iVar6 = 0;
      iVar7 = 0;
      do {
        iVar4 = *(int *)(this_ptr->field1_0x158 + 0x2c) + iVar6;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (g_ActorDataFile,"\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n",
                   *(uint *)(iVar7 + *(int *)(this_ptr->field1_0x158 + 0x30)),
                   *(uint *)(iVar4 + 0x18),*(uint *)(iVar4 + 0x1c),
                   *(uint *)(iVar4 + 0x20),*(uint *)(iVar4 + 0x24),
                   *(uint *)(iVar4 + 0x28),*(uint *)(iVar4 + 0x2c),
                   *(uint *)(iVar4 + 0x30),*(uint *)(iVar4 + 0x34),
                   *(uint *)(iVar4 + 0x38));
        iVar7 = iVar7 + 4;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + 0x3c;
      } while (iVar3 < *(int *)(this_ptr->field1_0x158 + 0x28));
    }
    iVar3 = 0;
    if (0 < *(int *)(this_ptr->field1_0x158 + 0x34)) {
      pcVar5 = this_ptr->field1_0x158 + 0x40;
      do {
        iVar3 = iVar3 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"\t\"%s\"\n",pcVar5);
        pcVar5 = pcVar5 + 0x18;
      } while (iVar3 < *(int *)(this_ptr->field1_0x158 + 0x34));
    }
  }
  if (1 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeSimBox_FUN_0040bd70
              ((CSimBox *)(this_ptr->field1_0x158 + 0xb74),"simBox");
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)(this_ptr->field1_0x158 + 0xdd0),"carriedByActor");
  }
  if (2 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->field1_0x158 + 0xb60),"bloodType");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->field1_0x158 + 0xb58),"dontUseNormals");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->field1_0x158 + 0xb5c),"transparentGeometryFlag");
  }
  if (3 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)this_ptr->field1_0x158,"renderInBackground");
  }
  if (4 < g_CBodyPartClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(this_ptr->field1_0x158 + 0xb6c),"dontPickMeUp");
    return;
  }
  return;
}
