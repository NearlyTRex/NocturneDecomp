// Name: core_boneguy.cpp_CBoneGuy_load_FUN_0041d270
// Address: 0041d270
// Address Range: [[0041d270, 0041d4b2]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_CBoneGuy_load_FUN_0041d270()

#include "nocturne.h"

/* Signature: CBoneGuy* actors_enemy_boneguy.cpp_CBoneGuy_load(CBoneGuy* param_1, char* param_2) */

void core_boneguy_cpp_CBoneGuy_load_FUN_0041d270(void)

{
  CQuaternion4f *quat_ptr;
  int iVar1;
  CVector3f *vector_ptr;
  CVector3f *vector_ptr_00;
  CQuaternion4f *quat_ptr_00;
  CEnemy *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CDemonActor *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000030;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(in_stack_00000008 + 0xbe24),"speed")
  ;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            ((CDeformableModelInstance *)(in_stack_0000000c + 0x158),"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000010 + 0xbe34),"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            ((CMotionController *)((int)in_stack_00000014 + 0x158),"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000018 + 0xbed0),"deathEvent");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_0000001c + 0xbf34),"recombineTime");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000020 + 0xc4dc),"blownUp");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000024 + 0xc4e0),"param");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000028 + 0xbf38),"boxCount");
    core_actor_cpp_serializePartStatus_FUN_0040bae0
              ((CMotionController *)((int)in_stack_00000014 + 0x158),"partStatus");
    iVar1 = 0;
    if (0 < *(int *)(in_stack_00000030 + 0xbf38)) {
      vector_ptr_00 = (CVector3f *)(in_stack_00000030 + 0xbf74);
      quat_ptr_00 = (CQuaternion4f *)(in_stack_00000030 + 0xbf54);
      in_stack_00000014 = (CDemonActor *)(in_stack_00000030 + 0xbf64);
      vector_ptr = (CVector3f *)(in_stack_00000030 + 0xbf48);
      do {
        quat_ptr = (CQuaternion4f *)(iVar1 * 0x48 + in_stack_00000030 + 0xbf3c);
        core_actor_cpp_serializeVector_FUN_0040b340((CVector3f *)quat_ptr,"boxListPos");
        core_actor_cpp_serializeVector_FUN_0040b340(vector_ptr,"boxListOrient");
        core_actor_cpp_serializeQuaternion_FUN_0040b520(quat_ptr_00,"boxListDestOrient");
        core_actor_cpp_serializeQuaternion_FUN_0040b520(quat_ptr,"boxListStartOrient");
        core_actor_cpp_serializeVector_FUN_0040b340(vector_ptr_00,"sourcePos");
        iVar1 = iVar1 + 1;
        vector_ptr = vector_ptr + 6;
        quat_ptr_00 = (CQuaternion4f *)&quat_ptr_00[4].y;
        core_actor_cpp_serializeActor_FUN_0040b870(in_stack_00000014,"boxListPart");
        vector_ptr_00 = vector_ptr_00 + 6;
        in_stack_00000014 = (CDemonActor *)((in_stack_00000014->orient_matrix).m + 1);
      } while (iVar1 < *(int *)(in_stack_00000030 + 0xbf38));
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000030 + 0xbeb0),"victimHeight");
    return;
  }
  return;
}
