// Name: core_stairs.cpp_FUN_005ba900
// Address: 005ba900
// Address Range: [[005ba900, 005bab8a]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba900()
// Globals:
//   double DOUBLE_006530ca = 0.5
//   double DOUBLE_006530d2 = 0.100000000000000
//   double DOUBLE_006530da = 0.200000000000000
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_stairs.cpp_FUN_005ba700

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005ba900(undefined4 param_1) */

void core_stairs_cpp_FUN_005ba900(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  float in_stack_00000024;
  float in_stack_00000038;
  float in_stack_0000004c;
  float in_stack_00000060;
  float in_stack_00000074;
  float in_stack_00000088;
  float in_stack_0000008c;
  float in_stack_00000090;
  
  iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  else {
    (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar3 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) - in_stack_00000024;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar3 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 8) =
           *(float *)(in_stack_00000004[1].actor_name + 8) + in_stack_00000038;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
    if (iVar3 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name - in_stack_0000004c;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
    if (iVar3 != 0) {
      *(float *)in_stack_00000004[1].actor_name =
           *(float *)in_stack_00000004[1].actor_name + in_stack_00000060;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar3 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000074;
    }
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar3 != 0) {
      *(float *)(in_stack_00000004[1].actor_name + 4) =
           *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_00000088;
    }
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 8) < (float)DOUBLE_006530da) {
    in_stack_00000004[1].actor_name[8] = -0x33;
    in_stack_00000004[1].actor_name[9] = -0x34;
    in_stack_00000004[1].actor_name[10] = 'L';
    in_stack_00000004[1].actor_name[0xb] = '>';
  }
  if (*(float *)in_stack_00000004[1].actor_name < (float)DOUBLE_006530da) {
    in_stack_00000004[1].actor_name[0] = -0x33;
    in_stack_00000004[1].actor_name[1] = -0x34;
    in_stack_00000004[1].actor_name[2] = 'L';
    in_stack_00000004[1].actor_name[3] = '>';
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 4) < (float)DOUBLE_006530da) {
    in_stack_00000004[1].actor_name[4] = -0x33;
    in_stack_00000004[1].actor_name[5] = -0x34;
    in_stack_00000004[1].actor_name[6] = 'L';
    in_stack_00000004[1].actor_name[7] = '>';
  }
  if (*(int *)(in_stack_00000004[1].actor_name + 0x14) < 1) {
    in_stack_00000004[1].actor_name[0x14] = '\x01';
    in_stack_00000004[1].actor_name[0x15] = '\0';
    in_stack_00000004[1].actor_name[0x16] = '\0';
    in_stack_00000004[1].actor_name[0x17] = '\0';
  }
  else if (0x14 < *(int *)(in_stack_00000004[1].actor_name + 0x14)) {
    in_stack_00000004[1].actor_name[0x14] = '\x14';
    in_stack_00000004[1].actor_name[0x15] = '\0';
    in_stack_00000004[1].actor_name[0x16] = '\0';
    in_stack_00000004[1].actor_name[0x17] = '\0';
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 0xc) < (float)DOUBLE_006530d2) {
    in_stack_00000004[1].actor_name[0xc] = -0x33;
    in_stack_00000004[1].actor_name[0xd] = -0x34;
    in_stack_00000004[1].actor_name[0xe] = -0x34;
    in_stack_00000004[1].actor_name[0xf] = '=';
  }
  if (*(float *)in_stack_00000004[1].actor_name < *(float *)(in_stack_00000004[1].actor_name + 0xc))
  {
    *(undefined4 *)(in_stack_00000004[1].actor_name + 0xc) =
         *(undefined4 *)in_stack_00000004[1].actor_name;
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 0x10) < (float)DOUBLE_006530d2) {
    in_stack_00000004[1].actor_name[0x10] = -0x33;
    in_stack_00000004[1].actor_name[0x11] = -0x34;
    in_stack_00000004[1].actor_name[0x12] = -0x34;
    in_stack_00000004[1].actor_name[0x13] = '=';
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 4) <
      *(float *)(in_stack_00000004[1].actor_name + 0x10)) {
    *(undefined4 *)(in_stack_00000004[1].actor_name + 0x10) =
         *(undefined4 *)(in_stack_00000004[1].actor_name + 4);
  }
  (in_stack_00000004->orient).pitch = 0.0;
  (in_stack_00000004->orient).heading = 0.0;
  fVar1 = *(float *)in_stack_00000004[1].actor_name;
  fVar2 = (in_stack_00000004->location).position.y;
  (in_stack_00000004->location).position.z =
       (in_stack_0000008c - *(float *)(in_stack_00000004[1].actor_name + 4)) +
       (in_stack_00000004->location).position.z;
  (in_stack_00000004->location).position.y = (in_stack_00000090 - fVar1) + fVar2;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  core_stairs_cpp_FUN_005ba700();
  return;
}


// Assembly code:
// 005ba900: PUSH EBX
//   Label: core_stairs.cpp_FUN_005ba900
// 005ba901: PUSH EBP
// 005ba902: MOV EBP,ESP
// 005ba904: SUB ESP,0xc
// 005ba907: AND ESP,0xfffffff8
// 005ba90a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ba90d: MOV EAX,dword ptr [EBX + 0x15c]
// 005ba913: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ba917: MOV EAX,dword ptr [EBX + 0x158]
// 005ba91d: PUSH 0x1d
// 005ba91f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005ba923: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ba928: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ba929: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ba92b: CALL dword ptr [EDX]
// 005ba92d: ADD ESP,0x8
// 005ba930: TEST EAX,EAX
// 005ba932: JNZ 0x005baa6a
//   XREF to: 005baa6a (CONDITIONAL_JUMP)
// 005ba938: PUSH EBX
// 005ba939: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005ba93e: ADD ESP,0x4
// 005ba941: FLD float ptr [EBX + 0x160]
//   Label: LAB_005ba941
// 005ba947: FCOMP double ptr [0x006530da]
//   XREF to: 006530da (READ)
// 005ba94d: FNSTSW AX
// 005ba94f: SAHF
// 005ba950: JNC 0x005ba95c
//   XREF to: 005ba95c (CONDITIONAL_JUMP)
// 005ba952: MOV dword ptr [EBX + 0x160],0x3e4ccccd
// 005ba95c: FLD float ptr [EBX + 0x158]
//   Label: LAB_005ba95c
// 005ba962: FCOMP double ptr [0x006530da]
//   XREF to: 006530da (READ)
// 005ba968: FNSTSW AX
// 005ba96a: SAHF
// 005ba96b: JNC 0x005ba977
//   XREF to: 005ba977 (CONDITIONAL_JUMP)
// 005ba96d: MOV dword ptr [EBX + 0x158],0x3e4ccccd
// 005ba977: FLD float ptr [EBX + 0x15c]
//   Label: LAB_005ba977
// 005ba97d: FCOMP double ptr [0x006530da]
//   XREF to: 006530da (READ)
// 005ba983: FNSTSW AX
// 005ba985: SAHF
// 005ba986: JNC 0x005ba992
//   XREF to: 005ba992 (CONDITIONAL_JUMP)
// 005ba988: MOV dword ptr [EBX + 0x15c],0x3e4ccccd
// 005ba992: MOV EDX,dword ptr [EBX + 0x16c]
//   Label: LAB_005ba992
// 005ba998: CMP EDX,0x1
// 005ba99b: JGE 0x005bab73
//   XREF to: 005bab73 (CONDITIONAL_JUMP)
// 005ba9a1: MOV dword ptr [EBX + 0x16c],0x1
// 005ba9ab: FLD float ptr [EBX + 0x164]
//   Label: LAB_005ba9ab
// 005ba9b1: FCOMP double ptr [0x006530d2]
//   XREF to: 006530d2 (READ)
// 005ba9b7: FNSTSW AX
// 005ba9b9: SAHF
// 005ba9ba: JNC 0x005ba9c6
//   XREF to: 005ba9c6 (CONDITIONAL_JUMP)
// 005ba9bc: MOV dword ptr [EBX + 0x164],0x3dcccccd
// 005ba9c6: FLD float ptr [EBX + 0x164]
//   Label: LAB_005ba9c6
// 005ba9cc: FCOMP float ptr [EBX + 0x158]
// 005ba9d2: FNSTSW AX
// 005ba9d4: SAHF
// 005ba9d5: JBE 0x005ba9e3
//   XREF to: 005ba9e3 (CONDITIONAL_JUMP)
// 005ba9d7: MOV EAX,dword ptr [EBX + 0x158]
// 005ba9dd: MOV dword ptr [EBX + 0x164],EAX
// 005ba9e3: FLD float ptr [EBX + 0x168]
//   Label: LAB_005ba9e3
// 005ba9e9: FCOMP double ptr [0x006530d2]
//   XREF to: 006530d2 (READ)
// 005ba9ef: FNSTSW AX
// 005ba9f1: SAHF
// 005ba9f2: JNC 0x005ba9fe
//   XREF to: 005ba9fe (CONDITIONAL_JUMP)
// 005ba9f4: MOV dword ptr [EBX + 0x168],0x3dcccccd
// 005ba9fe: FLD float ptr [EBX + 0x168]
//   Label: LAB_005ba9fe
// 005baa04: FCOMP float ptr [EBX + 0x15c]
// 005baa0a: FNSTSW AX
// 005baa0c: SAHF
// 005baa0d: JBE 0x005baa1b
//   XREF to: 005baa1b (CONDITIONAL_JUMP)
// 005baa0f: MOV EAX,dword ptr [EBX + 0x15c]
// 005baa15: MOV dword ptr [EBX + 0x168],EAX
// 005baa1b: FLD float ptr [ESP + 0x4]
//   Label: LAB_005baa1b
// 005baa1f: MOV dword ptr [EBX + 0x30],0x0
// 005baa26: FLD float ptr [ESP + 0x8]
// 005baa2a: MOV dword ptr [EBX + 0x38],0x0
// 005baa31: PUSH EBX
// 005baa32: FXCH
// 005baa34: FSUB float ptr [EBX + 0x15c]
// 005baa3a: FXCH
// 005baa3c: FSUB float ptr [EBX + 0x158]
// 005baa42: FXCH
// 005baa44: FADD float ptr [EBX + 0x28]
// 005baa47: FXCH
// 005baa49: FADD float ptr [EBX + 0x24]
// 005baa4c: FXCH
// 005baa4e: FSTP float ptr [EBX + 0x28]
// 005baa51: FSTP float ptr [EBX + 0x24]
// 005baa54: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 005baa59: ADD ESP,0x4
// 005baa5c: PUSH EBX
// 005baa5d: CALL core_stairs.cpp_FUN_005ba700
//   XREF to: 005ba700 (UNCONDITIONAL_CALL)
// 005baa62: ADD ESP,0x4
// 005baa65: MOV ESP,EBP
// 005baa67: POP EBP
// 005baa68: POP EBX
// 005baa69: RET
// 005baa6a: MOV EAX,[0x0067b654]
//   Label: LAB_005baa6a
//   XREF to: 0067b654 (READ)
// 005baa6f: PUSH 0x38
// 005baa71: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005baa77: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005baa7c: FMUL double ptr [0x006530ca]
//   XREF to: 006530ca (READ)
// 005baa82: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005baa83: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005baa85: FSTP float ptr [ESP + 0x8]
// 005baa89: CALL dword ptr [EDX]
// 005baa8b: ADD ESP,0x8
// 005baa8e: TEST EAX,EAX
// 005baa90: JZ 0x005baa9e
//   XREF to: 005baa9e (CONDITIONAL_JUMP)
// 005baa92: FLD float ptr [ESP]
// 005baa95: FMUL double ptr [0x006530d2]
//   XREF to: 006530d2 (READ)
// 005baa9b: FSTP float ptr [ESP]
// 005baa9e: PUSH 0x4b
//   Label: LAB_005baa9e
// 005baaa0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005baaa5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005baaa6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005baaa8: CALL dword ptr [EDX]
// 005baaaa: ADD ESP,0x8
// 005baaad: TEST EAX,EAX
// 005baaaf: JZ 0x005baac0
//   XREF to: 005baac0 (CONDITIONAL_JUMP)
// 005baab1: FLD float ptr [EBX + 0x160]
// 005baab7: FSUB float ptr [ESP]
// 005baaba: FSTP float ptr [EBX + 0x160]
// 005baac0: PUSH 0x4d
//   Label: LAB_005baac0
// 005baac2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005baac7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005baac8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005baaca: CALL dword ptr [EDX]
// 005baacc: ADD ESP,0x8
// 005baacf: TEST EAX,EAX
// 005baad1: JZ 0x005baae2
//   XREF to: 005baae2 (CONDITIONAL_JUMP)
// 005baad3: FLD float ptr [EBX + 0x160]
// 005baad9: FADD float ptr [ESP]
// 005baadc: FSTP float ptr [EBX + 0x160]
// 005baae2: PUSH 0x1e
//   Label: LAB_005baae2
// 005baae4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005baae9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005baaea: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005baaec: CALL dword ptr [EDX]
// 005baaee: ADD ESP,0x8
// 005baaf1: TEST EAX,EAX
// 005baaf3: JZ 0x005bab04
//   XREF to: 005bab04 (CONDITIONAL_JUMP)
// 005baaf5: FLD float ptr [EBX + 0x158]
// 005baafb: FSUB float ptr [ESP]
// 005baafe: FSTP float ptr [EBX + 0x158]
// 005bab04: PUSH 0x10
//   Label: LAB_005bab04
// 005bab06: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005bab0b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005bab0c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005bab0e: CALL dword ptr [EDX]
// 005bab10: ADD ESP,0x8
// 005bab13: TEST EAX,EAX
// 005bab15: JZ 0x005bab26
//   XREF to: 005bab26 (CONDITIONAL_JUMP)
// 005bab17: FLD float ptr [EBX + 0x158]
// 005bab1d: FADD float ptr [ESP]
// 005bab20: FSTP float ptr [EBX + 0x158]
// 005bab26: PUSH 0x50
//   Label: LAB_005bab26
// 005bab28: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005bab2d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005bab2e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005bab30: CALL dword ptr [EDX]
// 005bab32: ADD ESP,0x8
// 005bab35: TEST EAX,EAX
// 005bab37: JZ 0x005bab48
//   XREF to: 005bab48 (CONDITIONAL_JUMP)
// 005bab39: FLD float ptr [EBX + 0x15c]
// 005bab3f: FSUB float ptr [ESP]
// 005bab42: FSTP float ptr [EBX + 0x15c]
// 005bab48: PUSH 0x48
//   Label: LAB_005bab48
// 005bab4a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005bab4f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005bab50: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005bab52: CALL dword ptr [EDX]
// 005bab54: ADD ESP,0x8
// 005bab57: TEST EAX,EAX
// 005bab59: JZ 0x005ba941
//   XREF to: 005ba941 (CONDITIONAL_JUMP)
// 005bab5f: FLD float ptr [EBX + 0x15c]
// 005bab65: FADD float ptr [ESP]
// 005bab68: FSTP float ptr [EBX + 0x15c]
// 005bab6e: JMP 0x005ba941
//   XREF to: 005ba941 (UNCONDITIONAL_JUMP)
// 005bab73: CMP EDX,0x14
//   Label: LAB_005bab73
// 005bab76: JLE 0x005ba9ab
//   XREF to: 005ba9ab (CONDITIONAL_JUMP)
// 005bab7c: MOV dword ptr [EBX + 0x16c],0x14
// 005bab86: JMP 0x005ba9ab
//   XREF to: 005ba9ab (UNCONDITIONAL_JUMP)
