// Name: core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0
// Address: 0050adf0
// Address Range: [[0050adf0, 0050aed2]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_CMansionPuzzleCircle_load(CMansionPuzzleCircle*
   pMansionPuzzleCircle) */

void core_manpuz_cpp_CMansionPuzzleCircle_load_FUN_0050adf0(void)

{
  int iVar1;
  float *int_ptr;
  int *int_ptr_00;
  CVector3f *int_ptr_01;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  if (1 < g_CMansionPuzzleCircleClassVersion) {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)&in_stack_00000004[4].field7_0x6c,"pGemPos");
    core_actor_cpp_serializeOrientation_FUN_0040b3e0
              ((COrientation *)in_stack_00000004[4].create_event,"pGemOrient");
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)(in_stack_00000004[4].create_event + 0xc),"pEmitterPos");
  }
  if (2 < g_CMansionPuzzleCircleClassVersion) {
    int_ptr = &in_stack_00000004[4].field12_0xe0.y;
    iVar1 = 0;
    int_ptr_01 = &in_stack_00000004[4].field12_0xe0;
    int_ptr_00 = &in_stack_00000004[4].field11_0xdc;
    do {
      core_actor_cpp_serializeInteger_FUN_0040b7f0
                ((int *)(in_stack_00000004[4].create_event + iVar1 * 100 + 0x18),"exists");
      core_actor_cpp_serializeInteger_FUN_0040b7f0(int_ptr_00,"r");
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)int_ptr_01,"g");
      iVar1 = iVar1 + 1;
      int_ptr_00 = int_ptr_00 + 0x19;
      int_ptr_01 = (CVector3f *)((int)(int_ptr_01 + 8) + 4);
      core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)int_ptr,"b");
      int_ptr = int_ptr + 0x19;
    } while (iVar1 < 0xc);
  }
  return;
}
