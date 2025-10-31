// Name: core_tvbat.cpp_CTVBat_FUN_005e5260
// Address: 005e5260
// Address Range: [[005e5260, 005e53f7]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_FUN_005e5260(CTVBat * this_ptr)
// Globals:
//   undefined4 DAT_00656a6a
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e5260(CTVBat *this_ptr)

{
  CLocation *pCVar1;
  CKeys *this_ptr_00;
  int iVar2;
  float fStack00000008;
  undefined4 uStack0000000c;
  float in_stack_0000001c;
  undefined4 uStack00000020;
  float in_stack_00000030;
  undefined4 uStack00000034;
  float in_stack_00000044;
  undefined4 uStack00000048;
  float in_stack_00000058;
  undefined4 uStack0000005c;
  float in_stack_0000006c;
  float in_stack_00000080;
  
  if (this_ptr->follow_orders == 0) {
    pCVar1 = &(this_ptr->base_enemy).base_character.base_actor.location;
    if ((CLocation *)&this_ptr->home_pos != pCVar1) {
      (this_ptr->home_pos).x = (pCVar1->position).x;
      (this_ptr->home_pos).y = (this_ptr->base_enemy).base_character.base_actor.location.position.y;
      (this_ptr->home_pos).z = (this_ptr->base_enemy).base_character.base_actor.location.position.z;
    }
  }
  this_ptr_00 = g_CKeysPtr;
  (this_ptr->base_enemy).base_character.hit_points = 10.0;
  iVar2 = (*this_ptr_00->vtable->isKeyDown)(this_ptr_00,0x1d);
  if (iVar2 == 0) {
    core_charactr_cpp_CCharacter_computePickupInLoop_FUN_0042f800((CCharacter *)this_ptr);
    return;
  }
  fStack00000008 = g_CGamePtr->delta_time_float * (float)_DAT_00656a6a;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance - in_stack_0000001c;
  }
  uStack0000000c = 0x5e52f4;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance + in_stack_00000030;
  }
  uStack00000020 = 0x5e5317;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
  if (iVar2 != 0) {
    this_ptr->max_height = this_ptr->max_height - in_stack_00000044;
  }
  uStack00000034 = 0x5e533a;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
  if (iVar2 != 0) {
    this_ptr->max_height = this_ptr->max_height + in_stack_00000058;
  }
  uStack00000048 = 0x5e535d;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance - in_stack_0000006c;
  }
  uStack0000005c = 0x5e5380;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
  if (iVar2 != 0) {
    this_ptr->max_distance = this_ptr->max_distance + in_stack_00000080;
  }
  if ((int)this_ptr->max_distance < 0x3f000000) {
    this_ptr->max_distance = 0.5;
  }
  if (this_ptr->max_height < 0.5) {
    this_ptr->max_height = 0.5;
  }
  if (0.5 <= this_ptr->max_distance) {
    return;
  }
  this_ptr->max_distance = 0.5;
  return;
}


// Assembly code:
// 005e5260: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_FUN_005e5260
// 005e5261: PUSH ESI
// 005e5262: SUB ESP,0x8
// 005e5265: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e5269: CMP dword ptr [EBX + 0xc064],0x0
// 005e5270: JNZ 0x005e528f
//   XREF to: 005e528f (CONDITIONAL_JUMP)
// 005e5272: LEA EAX,[EBX + 0xc044]
// 005e5278: LEA EDX,[EBX + 0x20]
// 005e527b: CMP EAX,EDX
// 005e527d: JZ 0x005e528f
//   XREF to: 005e528f (CONDITIONAL_JUMP)
// 005e527f: MOV ECX,dword ptr [EDX]
// 005e5281: MOV dword ptr [EAX],ECX
// 005e5283: MOV ECX,dword ptr [EDX + 0x4]
// 005e5286: MOV dword ptr [EAX + 0x4],ECX
// 005e5289: MOV ECX,dword ptr [EDX + 0x8]
// 005e528c: MOV dword ptr [EAX + 0x8],ECX
// 005e528f: PUSH 0x1d
//   Label: LAB_005e528f
// 005e5291: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e5296: MOV dword ptr [EBX + 0x243c],0x41200000
// 005e52a0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e52a1: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e52a3: CALL dword ptr [EDX]
// 005e52a5: ADD ESP,0x8
// 005e52a8: TEST EAX,EAX
// 005e52aa: JZ 0x005e53e9
//   XREF to: 005e53e9 (CONDITIONAL_JUMP)
// 005e52b0: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005e52b5: PUSH 0x4b
// 005e52b7: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005e52bd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e52c2: FMUL double ptr [0x00656a6a]
//   XREF to: 00656a6a (READ)
// 005e52c8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e52c9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e52cb: FSTP float ptr [ESP + 0xc]
// 005e52cf: CALL dword ptr [EDX]
// 005e52d1: ADD ESP,0x8
// 005e52d4: TEST EAX,EAX
// 005e52d6: JZ 0x005e52e8
//   XREF to: 005e52e8 (CONDITIONAL_JUMP)
// 005e52d8: FLD float ptr [EBX + 0xc050]
// 005e52de: FSUB float ptr [ESP + 0x4]
// 005e52e2: FSTP float ptr [EBX + 0xc050]
// 005e52e8: PUSH 0x4d
//   Label: LAB_005e52e8
// 005e52ea: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e52ef: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e52f0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e52f2: CALL dword ptr [EDX]
// 005e52f4: ADD ESP,0x8
// 005e52f7: TEST EAX,EAX
// 005e52f9: JZ 0x005e530b
//   XREF to: 005e530b (CONDITIONAL_JUMP)
// 005e52fb: FLD float ptr [EBX + 0xc050]
// 005e5301: FADD float ptr [ESP + 0x4]
// 005e5305: FSTP float ptr [EBX + 0xc050]
// 005e530b: PUSH 0x1e
//   Label: LAB_005e530b
// 005e530d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e5312: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e5313: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e5315: CALL dword ptr [EDX]
// 005e5317: ADD ESP,0x8
// 005e531a: TEST EAX,EAX
// 005e531c: JZ 0x005e532e
//   XREF to: 005e532e (CONDITIONAL_JUMP)
// 005e531e: FLD float ptr [EBX + 0xc054]
// 005e5324: FSUB float ptr [ESP + 0x4]
// 005e5328: FSTP float ptr [EBX + 0xc054]
// 005e532e: PUSH 0x10
//   Label: LAB_005e532e
// 005e5330: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e5335: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e5336: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e5338: CALL dword ptr [EDX]
// 005e533a: ADD ESP,0x8
// 005e533d: TEST EAX,EAX
// 005e533f: JZ 0x005e5351
//   XREF to: 005e5351 (CONDITIONAL_JUMP)
// 005e5341: FLD float ptr [EBX + 0xc054]
// 005e5347: FADD float ptr [ESP + 0x4]
// 005e534b: FSTP float ptr [EBX + 0xc054]
// 005e5351: PUSH 0x50
//   Label: LAB_005e5351
// 005e5353: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e5358: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e5359: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e535b: CALL dword ptr [EDX]
// 005e535d: ADD ESP,0x8
// 005e5360: TEST EAX,EAX
// 005e5362: JZ 0x005e5374
//   XREF to: 005e5374 (CONDITIONAL_JUMP)
// 005e5364: FLD float ptr [EBX + 0xc050]
// 005e536a: FSUB float ptr [ESP + 0x4]
// 005e536e: FSTP float ptr [EBX + 0xc050]
// 005e5374: PUSH 0x48
//   Label: LAB_005e5374
// 005e5376: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e537b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e537c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e537e: CALL dword ptr [EDX]
// 005e5380: ADD ESP,0x8
// 005e5383: TEST EAX,EAX
// 005e5385: JZ 0x005e5397
//   XREF to: 005e5397 (CONDITIONAL_JUMP)
// 005e5387: FLD float ptr [EBX + 0xc050]
// 005e538d: FADD float ptr [ESP + 0x4]
// 005e5391: FSTP float ptr [EBX + 0xc050]
// 005e5397: MOV ECX,0x3f000000
//   Label: LAB_005e5397
// 005e539c: MOV ESI,dword ptr [EBX + 0xc050]
// 005e53a2: MOV dword ptr [ESP],ECX
// 005e53a5: CMP ESI,ECX
// 005e53a7: JGE 0x005e53af
//   XREF to: 005e53af (CONDITIONAL_JUMP)
// 005e53a9: MOV dword ptr [EBX + 0xc050],ECX
// 005e53af: FLD float ptr [EBX + 0xc054]
//   Label: LAB_005e53af
// 005e53b5: FCOMP float ptr [ESP]
// 005e53b8: FNSTSW AX
// 005e53ba: SAHF
// 005e53bb: JNC 0x005e53c6
//   XREF to: 005e53c6 (CONDITIONAL_JUMP)
// 005e53bd: MOV EAX,dword ptr [ESP]
// 005e53c0: MOV dword ptr [EBX + 0xc054],EAX
// 005e53c6: FLD float ptr [EBX + 0xc050]
//   Label: LAB_005e53c6
// 005e53cc: FCOMP float ptr [ESP]
// 005e53cf: FNSTSW AX
// 005e53d1: SAHF
// 005e53d2: JC 0x005e53da
//   XREF to: 005e53da (CONDITIONAL_JUMP)
// 005e53d4: ADD ESP,0x8
// 005e53d7: POP ESI
// 005e53d8: POP EBX
// 005e53d9: RET
// 005e53da: MOV EAX,dword ptr [ESP]
//   Label: LAB_005e53da
// 005e53dd: MOV dword ptr [EBX + 0xc050],EAX
// 005e53e3: ADD ESP,0x8
// 005e53e6: POP ESI
// 005e53e7: POP EBX
// 005e53e8: RET
// 005e53e9: PUSH EBX
//   Label: LAB_005e53e9
// 005e53ea: CALL core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800
//   XREF to: 0042f800 (UNCONDITIONAL_CALL)
// 005e53ef: ADD ESP,0x4
// 005e53f2: ADD ESP,0x8
// 005e53f5: POP ESI
// 005e53f6: POP EBX
// 005e53f7: RET
