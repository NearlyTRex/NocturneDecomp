// Name: core_stairs.cpp_FUN_005b9670
// Address: 005b9670
// Address Range: [[005b9670, 005b994c]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9670()
// Cross-references:
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d6e7 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c400 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052cb59 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597aa3 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d7cc [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051e3cc [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00652fe2
//   undefined4 DAT_00652fea
//   undefined4 DAT_00652ff2
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_stairs.cpp_FUN_005b9620
//   core_stairs.cpp_FUN_005b9950

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_stairs.cpp_FUN_005b9670(undefined4 param_1, undefined4
   param_2) */

void core_stairs_cpp_FUN_005b9670(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_EBP;
  CKeys *pCVar5;
  int in_stack_00000004;
  float in_stack_00000008;
  float fStack0000000c;
  float fStack0000001c;
  float fVar6;
  float in_stack_fffffff0;
  float fStack_c;
  
  fVar6 = 7.84727e-44;
  iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
  if (iVar4 == 0) {
    in_stack_fffffff0 = 5.88545e-44;
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (iVar4 != 0) {
      in_stack_00000008 = 4.0;
    }
  }
  else {
    fStack_c = 0.05;
  }
  fVar3 = (float)_DAT_00652fea;
  fVar1 = g_CGamePtr->delta_time_float * in_stack_00000008;
  fStack0000000c = *(float *)(in_stack_00000004 + 0x2c) * (float)_DAT_00652ff2;
  fVar2 = (float)_DAT_00652fe2;
  if (fStack0000000c < 1.0) {
    fStack0000000c = 1.0;
  }
  fStack0000001c = *(float *)(in_stack_00000004 + 0x2c);
  if (*(float *)(in_stack_00000004 + 0x2c) < 1.0) {
    fStack0000001c = 1.0;
  }
  if (((uint)in_stack_00000008 & 2) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x52);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) + fVar6;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x53);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x28) =
           *(float *)(in_stack_00000004 + 0x28) - in_stack_fffffff0;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x35);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) + 1.14906e-43;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x37);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) - fVar1 * fVar2;
    }
  }
  if (((uint)in_stack_00000008 & 1) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4a);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x24) = *(float *)(in_stack_00000004 + 0x24) + 1.03696e-43;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4e);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x24) = *(float *)(in_stack_00000004 + 0x24) - fVar1 * fVar2;
    }
  }
  if (((uint)in_stack_00000008 & 8) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x30) = *(float *)(in_stack_00000004 + 0x30) - 1.0;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x30) = *(float *)(in_stack_00000004 + 0x30) + fStack_c;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x34) =
           *(float *)(in_stack_00000004 + 0x34) + in_stack_00000008;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x34) =
           *(float *)(in_stack_00000004 + 0x34) - fStack0000001c * fVar1;
    }
  }
  if (((uint)in_stack_00000008 & 4) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x2c) = *(float *)(in_stack_00000004 + 0x2c) - unaff_EBP;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x2c) =
           *(float *)(in_stack_00000004 + 0x2c) + fStack0000000c * fVar1;
    }
  }
  if (((uint)in_stack_00000008 & 0x10) != 0) {
    pCVar5 = g_CKeysPtr;
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xd);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x38) = *(float *)(in_stack_00000004 + 0x38) / (float)pCVar5;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xc);
    if (iVar4 != 0) {
      *(float *)(in_stack_00000004 + 0x38) =
           *(float *)(in_stack_00000004 + 0x38) * in_stack_00000008 * fVar3;
    }
  }
  iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4c);
  if (iVar4 == 0) {
    core_stairs_cpp_FUN_005b9950();
    return;
  }
  core_stairs_cpp_FUN_005b9620();
  core_stairs_cpp_FUN_005b9950();
  return;
}


// Assembly code:
// 005b9670: PUSH EBX
//   Label: core_stairs.cpp_FUN_005b9670
// 005b9671: PUSH EBP
// 005b9672: MOV EBP,ESP
// 005b9674: SUB ESP,0x18
// 005b9677: AND ESP,0xfffffff8
// 005b967a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005b967d: PUSH 0x38
// 005b967f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b9684: MOV EDX,0x3f800000
// 005b9689: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b968a: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005b968e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b9690: CALL dword ptr [EDX]
// 005b9692: ADD ESP,0x8
// 005b9695: TEST EAX,EAX
// 005b9697: JZ 0x005b990f
//   XREF to: 005b990f (CONDITIONAL_JUMP)
// 005b969d: MOV dword ptr [ESP],0x3d4ccccd
// 005b96a4: MOV EAX,[0x0067b654]
//   Label: LAB_005b96a4
//   XREF to: 0067b654 (READ)
// 005b96a9: FLD float ptr [ESP]
// 005b96ac: FLD ST0
// 005b96ae: FMUL double ptr [0x00652fea]
//   XREF to: 00652fea (READ)
// 005b96b4: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005b96ba: FMULP ST2
// 005b96bc: FLD float ptr [EBX + 0x2c]
// 005b96bf: FMUL double ptr [0x00652ff2]
//   XREF to: 00652ff2 (READ)
// 005b96c5: FXCH ST2
// 005b96c7: FST float ptr [ESP + 0x8]
// 005b96cb: FMUL double ptr [0x00652fe2]
//   XREF to: 00652fe2 (READ)
// 005b96d1: FXCH
// 005b96d3: FSTP float ptr [ESP + 0xc]
// 005b96d7: FXCH
// 005b96d9: FST float ptr [ESP + 0x4]
// 005b96dd: FLD1
// 005b96df: FXCH ST2
// 005b96e1: FSTP float ptr [ESP + 0x10]
// 005b96e5: FXCH
// 005b96e7: FCOMPP
// 005b96e9: FNSTSW AX
// 005b96eb: SAHF
// 005b96ec: JBE 0x005b96f6
//   XREF to: 005b96f6 (CONDITIONAL_JUMP)
// 005b96ee: MOV dword ptr [ESP + 0x4],0x3f800000
// 005b96f6: FLD float ptr [ESP + 0x4]
//   Label: LAB_005b96f6
// 005b96fa: FMUL float ptr [ESP + 0x8]
// 005b96fe: FLD float ptr [EBX + 0x2c]
// 005b9701: MOV EAX,dword ptr [EBX + 0x2c]
// 005b9704: FLD1
// 005b9706: MOV dword ptr [ESP + 0x14],EAX
// 005b970a: FXCH ST2
// 005b970c: FSTP float ptr [ESP + 0x4]
// 005b9710: FXCH
// 005b9712: FCOMPP
// 005b9714: FNSTSW AX
// 005b9716: SAHF
// 005b9717: JBE 0x005b9721
//   XREF to: 005b9721 (CONDITIONAL_JUMP)
// 005b9719: MOV dword ptr [ESP + 0x14],0x3f800000
// 005b9721: FLD float ptr [ESP + 0x14]
//   Label: LAB_005b9721
// 005b9725: FMUL float ptr [ESP + 0x8]
// 005b9729: MOV AH,byte ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005b972c: FSTP float ptr [ESP + 0x14]
// 005b9730: TEST AH,0x2
// 005b9733: JZ 0x005b97ad
//   XREF to: 005b97ad (CONDITIONAL_JUMP)
// 005b9739: PUSH 0x52
// 005b973b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b9740: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b9741: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b9743: CALL dword ptr [EDX]
// 005b9745: ADD ESP,0x8
// 005b9748: TEST EAX,EAX
// 005b974a: JZ 0x005b9756
//   XREF to: 005b9756 (CONDITIONAL_JUMP)
// 005b974c: FLD float ptr [EBX + 0x28]
// 005b974f: FADD float ptr [ESP + 0x10]
// 005b9753: FSTP float ptr [EBX + 0x28]
// 005b9756: PUSH 0x53
//   Label: LAB_005b9756
// 005b9758: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b975d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b975e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b9760: CALL dword ptr [EDX]
// 005b9762: ADD ESP,0x8
// 005b9765: TEST EAX,EAX
// 005b9767: JZ 0x005b9773
//   XREF to: 005b9773 (CONDITIONAL_JUMP)
// 005b9769: FLD float ptr [EBX + 0x28]
// 005b976c: FSUB float ptr [ESP + 0x10]
// 005b9770: FSTP float ptr [EBX + 0x28]
// 005b9773: PUSH 0x35
//   Label: LAB_005b9773
// 005b9775: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b977a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b977b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b977d: CALL dword ptr [EDX]
// 005b977f: ADD ESP,0x8
// 005b9782: TEST EAX,EAX
// 005b9784: JZ 0x005b9790
//   XREF to: 005b9790 (CONDITIONAL_JUMP)
// 005b9786: FLD float ptr [EBX + 0x28]
// 005b9789: FADD float ptr [ESP + 0x10]
// 005b978d: FSTP float ptr [EBX + 0x28]
// 005b9790: PUSH 0x37
//   Label: LAB_005b9790
// 005b9792: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b9797: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b9798: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b979a: CALL dword ptr [EDX]
// 005b979c: ADD ESP,0x8
// 005b979f: TEST EAX,EAX
// 005b97a1: JZ 0x005b97ad
//   XREF to: 005b97ad (CONDITIONAL_JUMP)
// 005b97a3: FLD float ptr [EBX + 0x28]
// 005b97a6: FSUB float ptr [ESP + 0x10]
// 005b97aa: FSTP float ptr [EBX + 0x28]
// 005b97ad: TEST byte ptr [EBP + 0x10],0x1
//   Label: LAB_005b97ad
//   XREF to: Stack[0x8] (READ)
// 005b97b1: JZ 0x005b97ed
//   XREF to: 005b97ed (CONDITIONAL_JUMP)
// 005b97b3: PUSH 0x4a
// 005b97b5: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b97ba: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b97bb: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b97bd: CALL dword ptr [EDX]
// 005b97bf: ADD ESP,0x8
// 005b97c2: TEST EAX,EAX
// 005b97c4: JZ 0x005b97d0
//   XREF to: 005b97d0 (CONDITIONAL_JUMP)
// 005b97c6: FLD float ptr [EBX + 0x24]
// 005b97c9: FADD float ptr [ESP + 0x10]
// 005b97cd: FSTP float ptr [EBX + 0x24]
// 005b97d0: PUSH 0x4e
//   Label: LAB_005b97d0
// 005b97d2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b97d7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b97d8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b97da: CALL dword ptr [EDX]
// 005b97dc: ADD ESP,0x8
// 005b97df: TEST EAX,EAX
// 005b97e1: JZ 0x005b97ed
//   XREF to: 005b97ed (CONDITIONAL_JUMP)
// 005b97e3: FLD float ptr [EBX + 0x24]
// 005b97e6: FSUB float ptr [ESP + 0x10]
// 005b97ea: FSTP float ptr [EBX + 0x24]
// 005b97ed: TEST byte ptr [EBP + 0x10],0x8
//   Label: LAB_005b97ed
//   XREF to: Stack[0x8] (READ)
// 005b97f1: JZ 0x005b986b
//   XREF to: 005b986b (CONDITIONAL_JUMP)
// 005b97f7: PUSH 0x4b
// 005b97f9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b97fe: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b97ff: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b9801: CALL dword ptr [EDX]
// 005b9803: ADD ESP,0x8
// 005b9806: TEST EAX,EAX
// 005b9808: JZ 0x005b9814
//   XREF to: 005b9814 (CONDITIONAL_JUMP)
// 005b980a: FLD float ptr [EBX + 0x30]
// 005b980d: FSUB float ptr [ESP + 0x14]
// 005b9811: FSTP float ptr [EBX + 0x30]
// 005b9814: PUSH 0x4d
//   Label: LAB_005b9814
// 005b9816: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b981b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b981c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b981e: CALL dword ptr [EDX]
// 005b9820: ADD ESP,0x8
// 005b9823: TEST EAX,EAX
// 005b9825: JZ 0x005b9831
//   XREF to: 005b9831 (CONDITIONAL_JUMP)
// 005b9827: FLD float ptr [EBX + 0x30]
// 005b982a: FADD float ptr [ESP + 0x14]
// 005b982e: FSTP float ptr [EBX + 0x30]
// 005b9831: PUSH 0x10
//   Label: LAB_005b9831
// 005b9833: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b9838: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b9839: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b983b: CALL dword ptr [EDX]
// 005b983d: ADD ESP,0x8
// 005b9840: TEST EAX,EAX
// 005b9842: JZ 0x005b984e
//   XREF to: 005b984e (CONDITIONAL_JUMP)
// 005b9844: FLD float ptr [EBX + 0x34]
// 005b9847: FADD float ptr [ESP + 0x14]
// 005b984b: FSTP float ptr [EBX + 0x34]
// 005b984e: PUSH 0x1e
//   Label: LAB_005b984e
// 005b9850: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b9855: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b9856: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b9858: CALL dword ptr [EDX]
// 005b985a: ADD ESP,0x8
// 005b985d: TEST EAX,EAX
// 005b985f: JZ 0x005b986b
//   XREF to: 005b986b (CONDITIONAL_JUMP)
// 005b9861: FLD float ptr [EBX + 0x34]
// 005b9864: FSUB float ptr [ESP + 0x14]
// 005b9868: FSTP float ptr [EBX + 0x34]
// 005b986b: TEST byte ptr [EBP + 0x10],0x4
//   Label: LAB_005b986b
//   XREF to: Stack[0x8] (READ)
// 005b986f: JZ 0x005b98ab
//   XREF to: 005b98ab (CONDITIONAL_JUMP)
// 005b9871: PUSH 0x48
// 005b9873: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b9878: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b9879: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b987b: CALL dword ptr [EDX]
// 005b987d: ADD ESP,0x8
// 005b9880: TEST EAX,EAX
// 005b9882: JZ 0x005b988e
//   XREF to: 005b988e (CONDITIONAL_JUMP)
// 005b9884: FLD float ptr [EBX + 0x2c]
// 005b9887: FSUB float ptr [ESP + 0x4]
// 005b988b: FSTP float ptr [EBX + 0x2c]
// 005b988e: PUSH 0x50
//   Label: LAB_005b988e
// 005b9890: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b9895: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b9896: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b9898: CALL dword ptr [EDX]
// 005b989a: ADD ESP,0x8
// 005b989d: TEST EAX,EAX
// 005b989f: JZ 0x005b98ab
//   XREF to: 005b98ab (CONDITIONAL_JUMP)
// 005b98a1: FLD float ptr [EBX + 0x2c]
// 005b98a4: FADD float ptr [ESP + 0x4]
// 005b98a8: FSTP float ptr [EBX + 0x2c]
// 005b98ab: TEST byte ptr [EBP + 0x10],0x10
//   Label: LAB_005b98ab
//   XREF to: Stack[0x8] (READ)
// 005b98af: JZ 0x005b98ed
//   XREF to: 005b98ed (CONDITIONAL_JUMP)
// 005b98b1: PUSH 0xd
// 005b98b3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b98b8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b98b9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b98bb: CALL dword ptr [EDX + 0x4]
// 005b98be: ADD ESP,0x8
// 005b98c1: TEST EAX,EAX
// 005b98c3: JZ 0x005b98cf
//   XREF to: 005b98cf (CONDITIONAL_JUMP)
// 005b98c5: FLD float ptr [EBX + 0x38]
// 005b98c8: FDIV float ptr [ESP + 0xc]
// 005b98cc: FSTP float ptr [EBX + 0x38]
// 005b98cf: PUSH 0xc
//   Label: LAB_005b98cf
// 005b98d1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b98d6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b98d7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b98d9: CALL dword ptr [EDX + 0x4]
// 005b98dc: ADD ESP,0x8
// 005b98df: TEST EAX,EAX
// 005b98e1: JZ 0x005b98ed
//   XREF to: 005b98ed (CONDITIONAL_JUMP)
// 005b98e3: FLD float ptr [EBX + 0x38]
// 005b98e6: FMUL float ptr [ESP + 0xc]
// 005b98ea: FSTP float ptr [EBX + 0x38]
// 005b98ed: PUSH 0x4c
//   Label: LAB_005b98ed
// 005b98ef: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b98f4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b98f5: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b98f7: CALL dword ptr [EDX + 0x4]
// 005b98fa: ADD ESP,0x8
// 005b98fd: TEST EAX,EAX
// 005b98ff: JNZ 0x005b9932
//   XREF to: 005b9932 (CONDITIONAL_JUMP)
// 005b9901: PUSH EBX
// 005b9902: CALL core_stairs.cpp_FUN_005b9950
//   XREF to: 005b9950 (UNCONDITIONAL_CALL)
// 005b9907: ADD ESP,0x4
// 005b990a: MOV ESP,EBP
// 005b990c: POP EBP
// 005b990d: POP EBX
// 005b990e: RET
// 005b990f: PUSH 0x2a
//   Label: LAB_005b990f
// 005b9911: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005b9916: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005b9917: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005b9919: CALL dword ptr [EDX]
// 005b991b: ADD ESP,0x8
// 005b991e: TEST EAX,EAX
// 005b9920: JZ 0x005b96a4
//   XREF to: 005b96a4 (CONDITIONAL_JUMP)
// 005b9926: MOV dword ptr [ESP],0x40800000
// 005b992d: JMP 0x005b96a4
//   XREF to: 005b96a4 (UNCONDITIONAL_JUMP)
// 005b9932: MOV EDX,dword ptr [EBP + 0x10]
//   Label: LAB_005b9932
//   XREF to: Stack[0x8] (READ)
// 005b9935: PUSH EDX
// 005b9936: PUSH EBX
// 005b9937: CALL core_stairs.cpp_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 005b993c: ADD ESP,0x8
// 005b993f: PUSH EBX
// 005b9940: CALL core_stairs.cpp_FUN_005b9950
//   XREF to: 005b9950 (UNCONDITIONAL_CALL)
// 005b9945: ADD ESP,0x4
// 005b9948: MOV ESP,EBP
// 005b994a: POP EBP
// 005b994b: POP EBX
// 005b994c: RET
