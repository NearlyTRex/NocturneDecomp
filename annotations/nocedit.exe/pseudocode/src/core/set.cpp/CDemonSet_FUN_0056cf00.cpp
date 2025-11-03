// Name: core_set.cpp_CDemonSet_FUN_0056cf00
// Address: 0056cf00
// Address Range: [[0056cf00, 0056d08b]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056cf00(CDemonSet * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a366 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c4e6 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056d380
//   core_set.cpp_CDemonSet_FUN_00570ca0
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   core_set.cpp_FUN_00570af0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056cf00(CDemonSet *this_ptr)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  char *local_14;
  
  iVar5 = *(int *)this_ptr->field73_0x15f6e4 + -1;
  if (-1 < iVar5) {
    local_14 = this_ptr->cameras[0].name + *(int *)this_ptr->field73_0x15f6e4 * 4 + -8;
    do {
      iVar1 = *(int *)(local_14 + 0x15f6e8);
      if (*(int *)(iVar1 + 0xfc) == 0) {
        *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xf7;
      }
      else {
        puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 0x154) + 0x14))();
        if (&uStack_2c != puVar2) {
          uStack_2c = *puVar2;
          uStack_28 = puVar2[1];
          uStack_24 = puVar2[2];
        }
        if (&uStack_20 != puVar2 + 3) {
          uStack_20 = puVar2[3];
          uStack_1c = puVar2[4];
          uStack_18 = puVar2[5];
        }
        core_set_cpp_CDemonSet_FUN_0056d380(this_ptr);
        core_set_cpp_CDemonSet_FUN_00570ca0(this_ptr);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xc))();
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xf7;
        }
        else {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 8;
        }
        iVar3 = 0;
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
        if (0 < this_ptr->mirror_glass_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
            iVar4 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xc))();
            if (iVar4 != 0) {
              *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 8;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
            iVar3 = iVar3 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar3 < this_ptr->mirror_glass_count);
        }
        core_set_cpp_CDemonSet_FUN_00570ca0(this_ptr);
      }
      local_14 = local_14 + -4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}


// Assembly code:
// 0056cf00: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056cf00
// 0056cf01: PUSH ESI
// 0056cf02: PUSH EDI
// 0056cf03: PUSH EBP
// 0056cf04: SUB ESP,0x34
// 0056cf07: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0056cf0b: MOV EBP,dword ptr [EDI + 0x15f6e4]
// 0056cf11: DEC EBP
// 0056cf12: TEST EBP,EBP
// 0056cf14: JL 0x0056cf4d
//   XREF to: 0056cf4d (CONDITIONAL_JUMP)
// 0056cf16: LEA EAX,[EBP*0x4 + 0x0]
// 0056cf1d: ADD EAX,EDI
// 0056cf1f: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056cf23: MOV EBX,dword ptr [ESP + 0x30]
//   Label: LAB_0056cf23
//   XREF to: Stack[-0x14] (READ)
// 0056cf27: MOV EBX,dword ptr [EBX + 0x15f6e8]
// 0056cf2d: CMP dword ptr [EBX + 0xfc],0x0
// 0056cf34: JNZ 0x0056cf55
//   XREF to: 0056cf55 (CONDITIONAL_JUMP)
// 0056cf36: AND byte ptr [EBX + 0x140],0xf7
// 0056cf3d: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0056cf3d
//   XREF to: Stack[-0x14] (READ)
// 0056cf41: SUB EDX,0x4
// 0056cf44: DEC EBP
// 0056cf45: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0056cf49: TEST EBP,EBP
// 0056cf4b: JGE 0x0056cf23
//   XREF to: 0056cf23 (CONDITIONAL_JUMP)
// 0056cf4d: ADD ESP,0x34
//   Label: LAB_0056cf4d
// 0056cf50: POP EBP
// 0056cf51: POP EDI
// 0056cf52: POP ESI
// 0056cf53: POP EBX
// 0056cf54: RET
// 0056cf55: MOV ESI,ESP
//   Label: LAB_0056cf55
// 0056cf57: PUSH ESI
// 0056cf58: MOV EAX,dword ptr [EBX + 0x154]
// 0056cf5e: PUSH EBX
// 0056cf5f: CALL dword ptr [EAX + 0x14]
// 0056cf62: MOV ESI,EAX
// 0056cf64: MOV EDX,EAX
// 0056cf66: LEA EAX,[ESP + 0x20]
// 0056cf6a: ADD ESP,0x8
// 0056cf6d: CMP EAX,ESI
// 0056cf6f: JZ 0x0056cf85
//   XREF to: 0056cf85 (CONDITIONAL_JUMP)
// 0056cf71: MOV EAX,dword ptr [ESI]
// 0056cf73: MOV dword ptr [ESP + 0x18],EAX
// 0056cf77: MOV EAX,dword ptr [ESI + 0x4]
// 0056cf7a: MOV dword ptr [ESP + 0x1c],EAX
// 0056cf7e: MOV EAX,dword ptr [ESI + 0x8]
// 0056cf81: MOV dword ptr [ESP + 0x20],EAX
// 0056cf85: LEA EAX,[ESP + 0x24]
//   Label: LAB_0056cf85
// 0056cf89: LEA ESI,[EDX + 0xc]
// 0056cf8c: CMP EAX,ESI
// 0056cf8e: JZ 0x0056cfa4
//   XREF to: 0056cfa4 (CONDITIONAL_JUMP)
// 0056cf90: MOV EAX,dword ptr [ESI]
// 0056cf92: MOV dword ptr [ESP + 0x24],EAX
// 0056cf96: MOV EAX,dword ptr [ESI + 0x4]
// 0056cf99: MOV dword ptr [ESP + 0x28],EAX
// 0056cf9d: MOV EAX,dword ptr [ESI + 0x8]
// 0056cfa0: MOV dword ptr [ESP + 0x2c],EAX
// 0056cfa4: LEA EAX,[EBX + 0x3c]
//   Label: LAB_0056cfa4
// 0056cfa7: PUSH EAX
// 0056cfa8: LEA EAX,[ESP + 0x28]
// 0056cfac: PUSH EAX
// 0056cfad: LEA EAX,[ESP + 0x20]
// 0056cfb1: PUSH EAX
// 0056cfb2: LEA EAX,[EBX + 0x30]
// 0056cfb5: PUSH EAX
// 0056cfb6: LEA EAX,[EBX + 0x20]
// 0056cfb9: PUSH EAX
// 0056cfba: PUSH EDI
// 0056cfbb: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 0056cfc0: ADD ESP,0x18
// 0056cfc3: MOV ESI,dword ptr [EBX + 0x110]
// 0056cfc9: PUSH ESI
// 0056cfca: MOV EAX,dword ptr [EBX + 0x10c]
// 0056cfd0: PUSH EAX
// 0056cfd1: MOV EDX,dword ptr [EBX + 0x108]
// 0056cfd7: PUSH EDX
// 0056cfd8: PUSH EDI
// 0056cfd9: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 0056cfde: ADD ESP,0x10
// 0056cfe1: MOV EAX,dword ptr [EBX + 0x154]
// 0056cfe7: PUSH EBX
// 0056cfe8: CALL dword ptr [EAX + 0xc]
// 0056cfeb: ADD ESP,0x4
// 0056cfee: TEST EAX,EAX
// 0056cff0: JZ 0x0056d080
//   XREF to: 0056d080 (CONDITIONAL_JUMP)
// 0056cff6: OR byte ptr [EBX + 0x140],0x8
// 0056cffd: PUSH 0x1
//   Label: LAB_0056cffd
// 0056cfff: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056d005: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0056d006: XOR ESI,ESI
// 0056d008: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056d00d: MOV EAX,dword ptr [EDI + 0x15acb4]
// 0056d013: ADD ESP,0x8
// 0056d016: TEST EAX,EAX
// 0056d018: JLE 0x0056d063
//   XREF to: 0056d063 (CONDITIONAL_JUMP)
// 0056d01a: PUSH 0x0
//   Label: LAB_0056d01a
// 0056d01c: PUSH ESI
// 0056d01d: PUSH EDI
// 0056d01e: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056d023: ADD ESP,0xc
// 0056d026: MOV EAX,dword ptr [EBX + 0x154]
// 0056d02c: PUSH EBX
// 0056d02d: CALL dword ptr [EAX + 0xc]
// 0056d030: ADD ESP,0x4
// 0056d033: TEST EAX,EAX
// 0056d035: JZ 0x0056d03e
//   XREF to: 0056d03e (CONDITIONAL_JUMP)
// 0056d037: OR byte ptr [EBX + 0x140],0x8
// 0056d03e: PUSH 0x1
//   Label: LAB_0056d03e
// 0056d040: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056d046: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0056d047: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056d04c: ADD ESP,0x8
// 0056d04f: PUSH EDI
// 0056d050: INC ESI
// 0056d051: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056d056: MOV ECX,dword ptr [EDI + 0x15acb4]
// 0056d05c: ADD ESP,0x4
// 0056d05f: CMP ESI,ECX
// 0056d061: JL 0x0056d01a
//   XREF to: 0056d01a (CONDITIONAL_JUMP)
// 0056d063: PUSH 0x10000
//   Label: LAB_0056d063
// 0056d068: PUSH 0x10000
// 0056d06d: PUSH 0x10000
// 0056d072: PUSH EDI
// 0056d073: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 0056d078: ADD ESP,0x10
// 0056d07b: JMP 0x0056cf3d
//   XREF to: 0056cf3d (UNCONDITIONAL_JUMP)
// 0056d080: AND byte ptr [EBX + 0x140],0xf7
//   Label: LAB_0056d080
// 0056d087: JMP 0x0056cffd
//   XREF to: 0056cffd (UNCONDITIONAL_JUMP)
