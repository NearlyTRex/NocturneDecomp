// Name: core_platfrm.cpp_CPlatform_load_FUN_0054dbc0
// Address: 0054dbc0
// Address Range: [[0054dbc0, 0054df75]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_load_FUN_0054dbc0(void)

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_CPlatform_load(CPlatform* pPlatform) */

void __cdecl core_platfrm_cpp_CPlatform_load_FUN_0054dbc0(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  int local_1c;
  int local_18;
  int local_14;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[2].create_event + 0x2c),"toStartEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].scale,"toEndEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].actor_name + 0x14),"stopEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)in_stack_00000004[3].create_event,"startSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].create_event + 0x14),"stopSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[3].create_event + 0x28),"activeSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].orient_matrix.m[0].y,"courseFilename");
  if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)&in_stack_00000004[2].unk1,"startPos");
    core_actor_cpp_serializeQuaternion_FUN_0040b520
              ((CQuaternion4f *)(in_stack_00000004[2].create_event + 0xc),"origOrient");
    core_actor_cpp_serializeVector_FUN_0040b340
              ((CVector3f *)in_stack_00000004[2].create_event,"endPos");
    core_actor_cpp_serializeQuaternion_FUN_0040b520
              ((CQuaternion4f *)(in_stack_00000004[2].create_event + 0x1c),"endOrient");
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.y,"state");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].location.area_id,"param");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)&in_stack_00000004[2].orient_matrix,"travelTimeToStart");
  if (g_CPlatformClassVersion < 7) {
    in_stack_00000004[2].orient.heading = in_stack_00000004[2].orient_matrix.m[0].x;
  }
  else {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.heading,"travelTimeToEnd");
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[2].location.position.z,"groundType");
  if (1 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].create_event + 0x40),"oneShot");
  }
  if (2 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].create_event + 0x44),"blockVirtualDirectorFlag"
              );
  }
  if (3 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000004[3].create_event + 0x48),"renderInBackgroundWhenNotMovingFlag"
              );
  }
  if (4 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[3].create_event + 0x4c),"cameraWhileMoving");
  }
  if (5 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[3].unk7,"plotAsBoxInShadow");
  }
  if (7 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.pitch,"goalParam");
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004[2].orient.bank,"currentMovementRate");
    if (g_ActorReadingMode == 1) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&local_1c,"attachCount");
      if (10 < local_1c) {
        g_CurrentFilename = "..\\core\\platfrm.cpp";
        g_CurrentLineNumber = 0x316;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CPlatform::archive - too many attached actors.");
      }
      iVar2 = 0;
      pCVar1 = in_stack_00000004;
      if (0 < local_1c) {
        do {
          core_actor_cpp_serializeActor_FUN_0040b870
                    ((CDemonActor *)&local_18,"attach actor");
          pCVar1[3].unk8 = local_18;
          iVar2 = iVar2 + 1;
          pCVar1 = (CDemonActor *)&(pCVar1->orient).bank;
        } while (iVar2 < local_1c);
      }
    }
    else {
      local_14 = 0;
      pCVar1 = in_stack_00000004;
      do {
        if (pCVar1[3].unk8 != 0) {
          local_14 = local_14 + 1;
        }
        pCVar1 = (CDemonActor *)&(pCVar1->orient).bank;
      } while (pCVar1 != (CDemonActor *)(in_stack_00000004[1].create_event + 0x38));
      iVar2 = 0;
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&local_14,"attachCount");
      pCVar1 = in_stack_00000004;
      do {
        if (pCVar1[3].unk8 != 0) {
          core_actor_cpp_serializeActor_FUN_0040b870
                    ((CDemonActor *)(&in_stack_00000004[3].unk8 + iVar2 * 0xd),
                     "attach actor");
        }
        iVar2 = iVar2 + 1;
        pCVar1 = (CDemonActor *)&(pCVar1->orient).bank;
      } while (iVar2 < 10);
    }
  }
  if (8 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&in_stack_00000004[3].scale.x,"pushFlag");
  }
  if (9 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[3].scale.y,"recomputeFog");
  }
  if (10 < g_CPlatformClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&in_stack_00000004[3].scale.z,"plotInShadowFlag");
    return;
  }
  return;
}
