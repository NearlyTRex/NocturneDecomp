// Name: core_wateract.cpp_CWaterActor_FUN_005ebab0
// Address: 005ebab0
// Address Range: [[005ebab0, 005ebc09]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005ebab0(CWaterActor * this_ptr)
// Globals:
//   undefined4 DAT_006574b7
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_wateract_cpp_CWaterActor_FUN_005ebab0(CWaterActor *this_ptr)

{
  int iVar1;
  float fStack0000000c;
  float in_stack_00000020;
  float in_stack_00000034;
  float in_stack_00000048;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  float in_stack_0000005c;
  
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 != 0) {
    fStack0000000c = g_CGamePtr->delta_time_float * (float)_DAT_006574b7;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      (this_ptr->size).x = (this_ptr->size).x - in_stack_00000020;
    }
    fStack0000000c = 8.699646e-39;
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      (this_ptr->size).x = (this_ptr->size).x + in_stack_00000034;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      (this_ptr->size).z = (this_ptr->size).z - in_stack_00000048;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      (this_ptr->size).z = (this_ptr->size).z + in_stack_0000005c;
    }
    uStack00000054 = 0x3f000000;
    if ((int)(this_ptr->size).x < 0x3f000000) {
      (this_ptr->size).x = 0.5;
    }
    if ((this_ptr->size).z < 0.5) {
      (this_ptr->size).z = 0.5;
    }
    uStack00000058 = 0x42c80000;
    if (0x42c80000 < (int)(this_ptr->size).x) {
      (this_ptr->size).x = 100.0;
    }
    if (100.0 < (this_ptr->size).z) {
      (this_ptr->size).z = 100.0;
    }
    (this_ptr->size).y = 0.1;
    (*((this_ptr->base_actor).metadata.vtable)->setup)(&this_ptr->base_actor);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  (*((this_ptr->base_actor).metadata.vtable)->setup)(&this_ptr->base_actor);
  return;
}


// Assembly code:
// 005ebab0: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_FUN_005ebab0
// 005ebab1: SUB ESP,0xc
// 005ebab4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ebab8: PUSH 0x1d
// 005ebaba: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ebabf: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ebac0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ebac2: CALL dword ptr [EDX]
// 005ebac4: ADD ESP,0x8
// 005ebac7: TEST EAX,EAX
// 005ebac9: JZ 0x005ebbf0
//   XREF to: 005ebbf0 (CONDITIONAL_JUMP)
// 005ebacf: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005ebad4: PUSH 0x4b
// 005ebad6: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005ebadc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ebae1: FMUL double ptr [0x006574b7]
//   XREF to: 006574b7 (READ)
// 005ebae7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ebae8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ebaea: FSTP float ptr [ESP + 0x10]
// 005ebaee: CALL dword ptr [EDX]
// 005ebaf0: ADD ESP,0x8
// 005ebaf3: TEST EAX,EAX
// 005ebaf5: JZ 0x005ebb07
//   XREF to: 005ebb07 (CONDITIONAL_JUMP)
// 005ebaf7: FLD float ptr [EBX + 0x158]
// 005ebafd: FSUB float ptr [ESP + 0x8]
// 005ebb01: FSTP float ptr [EBX + 0x158]
// 005ebb07: PUSH 0x4d
//   Label: LAB_005ebb07
// 005ebb09: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ebb0e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ebb0f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ebb11: CALL dword ptr [EDX]
// 005ebb13: ADD ESP,0x8
// 005ebb16: TEST EAX,EAX
// 005ebb18: JZ 0x005ebb2a
//   XREF to: 005ebb2a (CONDITIONAL_JUMP)
// 005ebb1a: FLD float ptr [EBX + 0x158]
// 005ebb20: FADD float ptr [ESP + 0x8]
// 005ebb24: FSTP float ptr [EBX + 0x158]
// 005ebb2a: PUSH 0x50
//   Label: LAB_005ebb2a
// 005ebb2c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ebb31: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ebb32: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ebb34: CALL dword ptr [EDX]
// 005ebb36: ADD ESP,0x8
// 005ebb39: TEST EAX,EAX
// 005ebb3b: JZ 0x005ebb4d
//   XREF to: 005ebb4d (CONDITIONAL_JUMP)
// 005ebb3d: FLD float ptr [EBX + 0x160]
// 005ebb43: FSUB float ptr [ESP + 0x8]
// 005ebb47: FSTP float ptr [EBX + 0x160]
// 005ebb4d: PUSH 0x48
//   Label: LAB_005ebb4d
// 005ebb4f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ebb54: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ebb55: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ebb57: CALL dword ptr [EDX]
// 005ebb59: ADD ESP,0x8
// 005ebb5c: TEST EAX,EAX
// 005ebb5e: JZ 0x005ebb70
//   XREF to: 005ebb70 (CONDITIONAL_JUMP)
// 005ebb60: FLD float ptr [EBX + 0x160]
// 005ebb66: FADD float ptr [ESP + 0x8]
// 005ebb6a: FSTP float ptr [EBX + 0x160]
// 005ebb70: MOV EDX,0x3f000000
//   Label: LAB_005ebb70
// 005ebb75: MOV ECX,dword ptr [EBX + 0x158]
// 005ebb7b: MOV dword ptr [ESP],EDX
// 005ebb7e: CMP ECX,EDX
// 005ebb80: JGE 0x005ebb88
//   XREF to: 005ebb88 (CONDITIONAL_JUMP)
// 005ebb82: MOV dword ptr [EBX + 0x158],EDX
// 005ebb88: FLD float ptr [EBX + 0x160]
//   Label: LAB_005ebb88
// 005ebb8e: FCOMP float ptr [ESP]
// 005ebb91: FNSTSW AX
// 005ebb93: SAHF
// 005ebb94: JNC 0x005ebb9f
//   XREF to: 005ebb9f (CONDITIONAL_JUMP)
// 005ebb96: MOV EAX,dword ptr [ESP]
// 005ebb99: MOV dword ptr [EBX + 0x160],EAX
// 005ebb9f: PUSH EDI
//   Label: LAB_005ebb9f
// 005ebba0: PUSH ESI
// 005ebba1: MOV ESI,0x42c80000
// 005ebba6: MOV EDI,dword ptr [EBX + 0x158]
// 005ebbac: MOV dword ptr [ESP + 0xc],ESI
// 005ebbb0: CMP EDI,ESI
// 005ebbb2: JLE 0x005ebbba
//   XREF to: 005ebbba (CONDITIONAL_JUMP)
// 005ebbb4: MOV dword ptr [EBX + 0x158],ESI
// 005ebbba: FLD float ptr [EBX + 0x160]
//   Label: LAB_005ebbba
// 005ebbc0: FCOMP float ptr [ESP + 0xc]
// 005ebbc4: FNSTSW AX
// 005ebbc6: SAHF
// 005ebbc7: JBE 0x005ebbd3
//   XREF to: 005ebbd3 (CONDITIONAL_JUMP)
// 005ebbc9: MOV EAX,dword ptr [ESP + 0xc]
// 005ebbcd: MOV dword ptr [EBX + 0x160],EAX
// 005ebbd3: MOV dword ptr [EBX + 0x15c],0x3dcccccd
//   Label: LAB_005ebbd3
// 005ebbdd: POP ESI
// 005ebbde: POP EDI
// 005ebbdf: PUSH EBX
// 005ebbe0: MOV EAX,dword ptr [EBX + 0x154]
// 005ebbe6: CALL dword ptr [EAX]
// 005ebbe8: ADD ESP,0x4
// 005ebbeb: ADD ESP,0xc
// 005ebbee: POP EBX
// 005ebbef: RET
// 005ebbf0: PUSH EBX
//   Label: LAB_005ebbf0
// 005ebbf1: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005ebbf6: ADD ESP,0x4
// 005ebbf9: PUSH EBX
// 005ebbfa: MOV EAX,dword ptr [EBX + 0x154]
// 005ebc00: CALL dword ptr [EAX]
// 005ebc02: ADD ESP,0x4
// 005ebc05: ADD ESP,0xc
// 005ebc08: POP EBX
// 005ebc09: RET
