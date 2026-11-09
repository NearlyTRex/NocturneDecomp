// Name: core_boneguy.cpp_FUN_00419c50
// Address: 00419c50
// Address Range: [[00419c50, 00419e92]]
// Convention: unknown
// Signature: CEnemy * core_boneguy_cpp_FUN_00419c50(CEnemy *param_1)

#include "nocturne.h"

CEnemy * core_boneguy_cpp_FUN_00419c50(CEnemy *param_1)

{
  CEnemy *pCVar1;
  byte *puVar2;
  byte *puVar3;
  int iVar4;
  byte *puVar5;
  byte *puVar6;
  byte *puVar7;
  byte *puVar8;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a60,"@speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&param_1->field_0x2b4,"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1->field_0x10a70,"guardDistance");
  }
  pCVar1 = (CEnemy *)
           core_actor_cpp_archiveMotionState_FUN_0040bb60
                     (&param_1->field_0x2b4,"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x14,"deathEvent");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x78,"recombineTime");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x620,"blownUp");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x624,"param");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x7c,"boxCount");
    core_actor_cpp_archivePartStatus_FUN_0040bc50(&param_1->field_0x2b4,"partStatus");
    iVar4 = 0;
    pCVar1 = param_1;
    if (0 < *(int *)&param_1[1].field_0x7c) {
      puVar8 = &param_1[1].field_0x80;
      puVar3 = &param_1[1].field_0xc4;
      puVar6 = &param_1[1].field_0xb8;
      puVar7 = &param_1[1].field_0x98;
      puVar2 = &param_1[1].field_0xa8;
      puVar5 = &param_1[1].field_0x8c;
      do {
        core_actor_cpp_archiveVector_FUN_0040b4b0
                  (puVar8 + iVar4 * 0x48,"boxListPos",puVar8,puVar2,puVar3);
        core_actor_cpp_archiveVector_FUN_0040b4b0(puVar5,"boxListOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b690(puVar7,"boxListDestOrient");
        core_actor_cpp_archiveQuaternion_FUN_0040b690(puVar2,"boxListStartOrient");
        core_actor_cpp_archiveVector_FUN_0040b4b0(puVar6,"sourcePos");
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 0x48;
        puVar7 = puVar7 + 0x48;
        core_actor_cpp_archiveActor_FUN_0040b9e0(puVar3,"boxListPart");
        puVar6 = puVar6 + 0x48;
        puVar3 = puVar3 + 0x48;
        puVar2 = puVar2 + 0x48;
      } while (iVar4 < *(int *)&param_1[1].field_0x7c);
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    pCVar1 = (CEnemy *)
             core_actor_cpp_archiveFloat_FUN_0040b8e0
                       (&param_1->field_0x10aec,"victimHeight");
    return pCVar1;
  }
  return pCVar1;
}
