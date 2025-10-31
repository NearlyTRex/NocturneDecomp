// Name: core_door.cpp_CDoor_serialize_FUN_00480aa0
// Address: 00480aa0
// Address Range: [[00480aa0, 00480d8e]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_serialize_FUN_00480aa0(CDoor * this_ptr)
// Globals:
//   TerminatedCString s_modelName_00621159
//   TerminatedCString s_doorType_00621163
//   TerminatedCString s_doorSide_0062116c
//   TerminatedCString s_doorState_00621175
//   TerminatedCString s_doorSwing_0062117f
//   TerminatedCString s_openEvent_00621189
//   TerminatedCString s_closeEvent_00621193
//   TerminatedCString s_openSound_0062119e
//   TerminatedCString s_closeSound_006211a8
//   TerminatedCString s_keyMask_006211b3
//   TerminatedCString s_origPos_006211bb
//   TerminatedCString s_origOrient_006211c3
//   TerminatedCString s_param_006211ce
//   TerminatedCString s_maxParam_006211d4
//   TerminatedCString s_openSpeed_006211dd
//   TerminatedCString s_closeSpeed_006211e7
//   TerminatedCString s_groundType_006211f2
//   TerminatedCString s_eventToTriggerWhenOpen_006211fd
//   TerminatedCString s_eventToTriggerWhenClosed_00621214
//   TerminatedCString s_oneShot_0062122d
//   TerminatedCString s_openRules_00621235
//   TerminatedCString s_scriptOpenEvent_0062123f
//   TerminatedCString s_true_0062124f
//   undefined4 DAT_00621250
//   undefined4 DAT_00621251
//   undefined4 DAT_00621252
//   TerminatedCString s_blockVirtualDirectorFlag_00621254
//   TerminatedCString s_plotAsBoxInShadow_0062126d
//   TerminatedCString s_allowedSides_0062127f
//   TerminatedCString s_allowBulletHoles_0062128c
//   TerminatedCString s_lockedSound_0062129d
//   undefined4 g_CDoorClassVersion
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   core_actor.cpp_serializeRules_FUN_0040c000
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_serialize_FUN_00480aa0(CDoor *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName")
  ;
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->door_type,"doorType");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->door_side,"doorSide");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->door_state,"doorState");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->door_swing,"doorSwing");
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->field7_0x2e8,"openEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field7_0x2e8 + 100),"closeEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field9_0x47c + 1000),"openSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field9_0x47c + 0x44c),"closeSound");
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->key_mask,"keyMask");
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->orig_pos,"origPos");
  core_actor_cpp_serializeVector_FUN_0040b340(&this_ptr->orig_orient,"origOrient");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->param,"param");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->max_param,"maxParam");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->open_speed,"openSpeed");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->close_speed,"closeSpeed");
  if (1 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->ground_type,"groundType");
  }
  if (2 < g_CDoorClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->field7_0x2e8 + 200),"eventToTriggerWhenOpen");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(this_ptr->field7_0x2e8 + 300),"eventToTriggerWhenClosed");
  }
  if (3 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->one_shot,"oneShot");
  }
  if (g_CDoorClassVersion < 7) {
    if (4 < g_CDoorClassVersion) {
      core_actor_cpp_serializeString_FUN_0040b5c0
                ((char **)(this_ptr->field9_0x47c + 500),"scriptOpenEvent");
      if (this_ptr->field9_0x47c[500] == '\0') {
        this_ptr->open_rules = 0;
      }
      else {
        pcVar2 = "true";
        pcVar3 = this_ptr->field9_0x47c;
        do {
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
        this_ptr->open_rules = 1;
      }
    }
  }
  else {
    core_actor_cpp_serializeRules_FUN_0040c000(&this_ptr->open_rules,"openRules");
  }
  if (5 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->block_virtual_director_flag,"blockVirtualDirectorFlag");
  }
  if (7 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->plot_as_box_in_shadow,"plotAsBoxInShadow");
  }
  if (8 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->allowed_sides,"allowedSides");
  }
  if (9 < g_CDoorClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              (&this_ptr->allow_bullet_holes,"allowBulletHoles");
  }
  if (g_CDoorClassVersion < 0xb) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(this_ptr->field9_0x47c + 0x4b0),"lockedSound");
  return;
}


// Assembly code:
// 00480aa0: PUSH EBX
//   Label: core_door.cpp_CDoor_serialize_FUN_00480aa0
// 00480aa1: PUSH EDI
// 00480aa2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00480aa6: PUSH EBX
// 00480aa7: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 00480aac: ADD ESP,0x4
// 00480aaf: PUSH 0x621159
//   XREF to: 00621159 (DATA)
// 00480ab4: LEA EDI,[EBX + 0x158]
// 00480aba: PUSH EDI
// 00480abb: CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
//   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
// 00480ac0: ADD ESP,0x8
// 00480ac3: PUSH 0x621163
//   XREF to: 00621163 (DATA)
// 00480ac8: LEA EDI,[EBX + 0x2d8]
// 00480ace: PUSH EDI
// 00480acf: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480ad4: ADD ESP,0x8
// 00480ad7: PUSH 0x62116c
//   XREF to: 0062116c (DATA)
// 00480adc: LEA EDI,[EBX + 0x2dc]
// 00480ae2: PUSH EDI
// 00480ae3: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480ae8: ADD ESP,0x8
// 00480aeb: PUSH 0x621175
//   XREF to: 00621175 (DATA)
// 00480af0: LEA EDI,[EBX + 0x2e0]
// 00480af6: PUSH EDI
// 00480af7: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480afc: ADD ESP,0x8
// 00480aff: PUSH 0x62117f
//   XREF to: 0062117f (DATA)
// 00480b04: LEA EDI,[EBX + 0x2e4]
// 00480b0a: PUSH EDI
// 00480b0b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480b10: ADD ESP,0x8
// 00480b13: PUSH 0x621189
//   XREF to: 00621189 (DATA)
// 00480b18: LEA EDI,[EBX + 0x2e8]
// 00480b1e: PUSH EDI
// 00480b1f: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00480b24: ADD ESP,0x8
// 00480b27: PUSH 0x621193
//   XREF to: 00621193 (DATA)
// 00480b2c: LEA EDI,[EBX + 0x34c]
// 00480b32: PUSH EDI
// 00480b33: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00480b38: ADD ESP,0x8
// 00480b3b: PUSH 0x62119e
//   XREF to: 0062119e (DATA)
// 00480b40: LEA EDI,[EBX + 0x864]
// 00480b46: PUSH EDI
// 00480b47: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00480b4c: ADD ESP,0x8
// 00480b4f: PUSH 0x6211a8
//   XREF to: 006211a8 (DATA)
// 00480b54: LEA EDI,[EBX + 0x8c8]
// 00480b5a: PUSH EDI
// 00480b5b: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00480b60: ADD ESP,0x8
// 00480b63: PUSH 0x6211b3
//   XREF to: 006211b3 (DATA)
// 00480b68: LEA EDI,[EBX + 0x990]
// 00480b6e: PUSH EDI
// 00480b6f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480b74: ADD ESP,0x8
// 00480b77: PUSH 0x6211bb
//   XREF to: 006211bb (DATA)
// 00480b7c: LEA EDI,[EBX + 0x994]
// 00480b82: PUSH EDI
// 00480b83: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 00480b88: ADD ESP,0x8
// 00480b8b: PUSH 0x6211c3
//   XREF to: 006211c3 (DATA)
// 00480b90: LEA EDI,[EBX + 0x9a0]
// 00480b96: PUSH EDI
// 00480b97: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 00480b9c: ADD ESP,0x8
// 00480b9f: PUSH 0x6211ce
//   XREF to: 006211ce (DATA)
// 00480ba4: LEA EDI,[EBX + 0x9ac]
// 00480baa: PUSH EDI
// 00480bab: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00480bb0: ADD ESP,0x8
// 00480bb3: PUSH 0x6211d4
//   XREF to: 006211d4 (DATA)
// 00480bb8: LEA EDI,[EBX + 0x9b0]
// 00480bbe: PUSH EDI
// 00480bbf: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00480bc4: ADD ESP,0x8
// 00480bc7: PUSH 0x6211dd
//   XREF to: 006211dd (DATA)
// 00480bcc: LEA EDI,[EBX + 0x9b4]
// 00480bd2: PUSH EDI
// 00480bd3: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00480bd8: ADD ESP,0x8
// 00480bdb: PUSH 0x6211e7
//   XREF to: 006211e7 (DATA)
// 00480be0: LEA EDI,[EBX + 0x9b8]
// 00480be6: PUSH EDI
// 00480be7: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00480bec: MOV EDX,dword ptr [0x00670378]
//   XREF to: 00670378 (READ)
// 00480bf2: ADD ESP,0x8
// 00480bf5: CMP EDX,0x2
// 00480bf8: JGE 0x00480cf3
//   XREF to: 00480cf3 (CONDITIONAL_JUMP)
// 00480bfe: CMP dword ptr [0x00670378],0x3
//   Label: LAB_00480bfe
//   XREF to: 00670378 (READ)
// 00480c05: JL 0x00480c2f
//   XREF to: 00480c2f (CONDITIONAL_JUMP)
// 00480c07: PUSH 0x6211fd
//   XREF to: 006211fd (DATA)
// 00480c0c: LEA EDI,[EBX + 0x3b0]
// 00480c12: PUSH EDI
// 00480c13: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00480c18: ADD ESP,0x8
// 00480c1b: PUSH 0x621214
//   XREF to: 00621214 (DATA)
// 00480c20: LEA EDI,[EBX + 0x414]
// 00480c26: PUSH EDI
// 00480c27: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00480c2c: ADD ESP,0x8
// 00480c2f: CMP dword ptr [0x00670378],0x4
//   Label: LAB_00480c2f
//   XREF to: 00670378 (READ)
// 00480c36: JL 0x00480c4c
//   XREF to: 00480c4c (CONDITIONAL_JUMP)
// 00480c38: PUSH 0x62122d
//   XREF to: 0062122d (DATA)
// 00480c3d: LEA EDI,[EBX + 0x9c8]
// 00480c43: PUSH EDI
// 00480c44: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480c49: ADD ESP,0x8
// 00480c4c: MOV EDI,dword ptr [0x00670378]
//   Label: LAB_00480c4c
//   XREF to: 00670378 (READ)
// 00480c52: CMP EDI,0x7
// 00480c55: JL 0x00480d0c
//   XREF to: 00480d0c (CONDITIONAL_JUMP)
// 00480c5b: PUSH 0x621235
//   XREF to: 00621235 (DATA)
// 00480c60: LEA EDI,[EBX + 0x478]
// 00480c66: PUSH EDI
// 00480c67: CALL core_actor.cpp_serializeRules_FUN_0040c000
//   XREF to: 0040c000 (UNCONDITIONAL_CALL)
// 00480c6c: ADD ESP,0x8
// 00480c6f: CMP dword ptr [0x00670378],0x6
//   Label: LAB_00480c6f
//   XREF to: 00670378 (READ)
// 00480c76: JL 0x00480c8c
//   XREF to: 00480c8c (CONDITIONAL_JUMP)
// 00480c78: PUSH 0x621254
//   XREF to: 00621254 (DATA)
// 00480c7d: LEA EDI,[EBX + 0x9d0]
// 00480c83: PUSH EDI
// 00480c84: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480c89: ADD ESP,0x8
// 00480c8c: CMP dword ptr [0x00670378],0x8
//   Label: LAB_00480c8c
//   XREF to: 00670378 (READ)
// 00480c93: JL 0x00480ca9
//   XREF to: 00480ca9 (CONDITIONAL_JUMP)
// 00480c95: PUSH 0x62126d
//   XREF to: 0062126d (DATA)
// 00480c9a: LEA EDI,[EBX + 0x9d4]
// 00480ca0: PUSH EDI
// 00480ca1: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480ca6: ADD ESP,0x8
// 00480ca9: CMP dword ptr [0x00670378],0x9
//   Label: LAB_00480ca9
//   XREF to: 00670378 (READ)
// 00480cb0: JL 0x00480cc6
//   XREF to: 00480cc6 (CONDITIONAL_JUMP)
// 00480cb2: PUSH 0x62127f
//   XREF to: 0062127f (DATA)
// 00480cb7: LEA EDI,[EBX + 0x9d8]
// 00480cbd: PUSH EDI
// 00480cbe: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480cc3: ADD ESP,0x8
// 00480cc6: CMP dword ptr [0x00670378],0xa
//   Label: LAB_00480cc6
//   XREF to: 00670378 (READ)
// 00480ccd: JL 0x00480ce3
//   XREF to: 00480ce3 (CONDITIONAL_JUMP)
// 00480ccf: PUSH 0x62128c
//   XREF to: 0062128c (DATA)
// 00480cd4: LEA EDI,[EBX + 0x9dc]
// 00480cda: PUSH EDI
// 00480cdb: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480ce0: ADD ESP,0x8
// 00480ce3: CMP dword ptr [0x00670378],0xb
//   Label: LAB_00480ce3
//   XREF to: 00670378 (READ)
// 00480cea: JGE 0x00480d78
//   XREF to: 00480d78 (CONDITIONAL_JUMP)
// 00480cf0: POP EDI
// 00480cf1: POP EBX
// 00480cf2: RET
// 00480cf3: PUSH 0x6211f2
//   Label: LAB_00480cf3
//   XREF to: 006211f2 (DATA)
// 00480cf8: LEA EDI,[EBX + 0x2d4]
// 00480cfe: PUSH EDI
// 00480cff: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 00480d04: ADD ESP,0x8
// 00480d07: JMP 0x00480bfe
//   XREF to: 00480bfe (UNCONDITIONAL_JUMP)
// 00480d0c: CMP EDI,0x5
//   Label: LAB_00480d0c
// 00480d0f: JL 0x00480c6f
//   XREF to: 00480c6f (CONDITIONAL_JUMP)
// 00480d15: PUSH 0x62123f
//   XREF to: 0062123f (DATA)
// 00480d1a: LEA EDI,[EBX + 0x670]
// 00480d20: PUSH EDI
// 00480d21: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00480d26: MOV AH,byte ptr [EBX + 0x670]
// 00480d2c: ADD ESP,0x8
// 00480d2f: TEST AH,AH
// 00480d31: JNZ 0x00480d42
//   XREF to: 00480d42 (CONDITIONAL_JUMP)
// 00480d33: MOV dword ptr [EBX + 0x478],0x0
// 00480d3d: JMP 0x00480c6f
//   XREF to: 00480c6f (UNCONDITIONAL_JUMP)
// 00480d42: PUSH ESI
//   Label: LAB_00480d42
// 00480d43: MOV ESI,0x62124f
//   XREF to: 0062124f (DATA)
// 00480d48: LEA EDI,[EBX + 0x47c]
// 00480d4e: PUSH EDI
// 00480d4f: MOV AL,byte ptr [ESI]
//   Label: LAB_00480d4f
//   XREF to: 0062124f (READ)
//   XREF to: 00621251 (READ)
// 00480d51: MOV byte ptr [EDI],AL
// 00480d53: CMP AL,0x0
// 00480d55: JZ 0x00480d67
//   XREF to: 00480d67 (CONDITIONAL_JUMP)
// 00480d57: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00621250 (READ)
//   XREF to: 00621252 (READ)
// 00480d5a: ADD ESI,0x2
// 00480d5d: MOV byte ptr [EDI + 0x1],AL
// 00480d60: ADD EDI,0x2
// 00480d63: CMP AL,0x0
// 00480d65: JNZ 0x00480d4f
//   XREF to: 00480d4f (CONDITIONAL_JUMP)
// 00480d67: POP EDI
//   Label: LAB_00480d67
// 00480d68: MOV dword ptr [EBX + 0x478],0x1
// 00480d72: POP ESI
// 00480d73: JMP 0x00480c6f
//   XREF to: 00480c6f (UNCONDITIONAL_JUMP)
// 00480d78: PUSH 0x62129d
//   Label: LAB_00480d78
//   XREF to: 0062129d (DATA)
// 00480d7d: ADD EBX,0x92c
// 00480d83: PUSH EBX
// 00480d84: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 00480d89: ADD ESP,0x8
// 00480d8c: POP EDI
// 00480d8d: POP EBX
// 00480d8e: RET
