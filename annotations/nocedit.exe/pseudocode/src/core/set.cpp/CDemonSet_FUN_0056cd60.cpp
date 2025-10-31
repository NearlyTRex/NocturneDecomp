// Name: core_set.cpp_CDemonSet_FUN_0056cd60
// Address: 0056cd60
// Address Range: [[0056cd60, 0056ceff]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056cd60(CDemonSet * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a357 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c462 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056d380
//   core_set.cpp_CDemonSet_FUN_00570ca0
//   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   core_set.cpp_FUN_00570af0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056cd60(CDemonSet *this_ptr)

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
  
  iVar5 = *(int *)(this_ptr->field64_0x15f6e0 + 4) + -1;
  if (-1 < iVar5) {
    local_14 = this_ptr->cameras[0].name + *(int *)(this_ptr->field64_0x15f6e0 + 4) * 4 + -8;
    do {
      iVar1 = *(int *)(local_14 + 0x15f6e8);
      if (*(int *)(iVar1 + 0xf8) == 0) {
        *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xfb;
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
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
        iVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 8))();
        if (iVar3 == 0) {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) & 0xfb;
        }
        else {
          *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 4;
        }
        engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
        iVar3 = 0;
        if (0 < this_ptr->actor_list_count) {
          do {
            core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005709e0(this_ptr,iVar3,0);
            iVar4 = (**(code **)(*(int *)(iVar1 + 0x154) + 8))();
            if (iVar4 != 0) {
              *(byte *)(iVar1 + 0x140) = *(byte *)(iVar1 + 0x140) | 4;
            }
            engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
            iVar3 = iVar3 + 1;
            core_set_cpp_FUN_00570af0();
          } while (iVar3 < this_ptr->actor_list_count);
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
// 0056cd60: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056cd60
// 0056cd61: PUSH ESI
// 0056cd62: PUSH EDI
// 0056cd63: PUSH EBP
// 0056cd64: SUB ESP,0x34
// 0056cd67: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0056cd6b: MOV EBP,dword ptr [EDI + 0x15f6e4]
// 0056cd71: DEC EBP
// 0056cd72: TEST EBP,EBP
// 0056cd74: JL 0x0056cdad
//   XREF to: 0056cdad (CONDITIONAL_JUMP)
// 0056cd76: LEA EAX,[EBP*0x4 + 0x0]
// 0056cd7d: ADD EAX,EDI
// 0056cd7f: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056cd83: MOV EBX,dword ptr [ESP + 0x30]
//   Label: LAB_0056cd83
//   XREF to: Stack[-0x14] (READ)
// 0056cd87: MOV EBX,dword ptr [EBX + 0x15f6e8]
// 0056cd8d: CMP dword ptr [EBX + 0xf8],0x0
// 0056cd94: JNZ 0x0056cdb5
//   XREF to: 0056cdb5 (CONDITIONAL_JUMP)
// 0056cd96: AND byte ptr [EBX + 0x140],0xfb
// 0056cd9d: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_0056cd9d
//   XREF to: Stack[-0x14] (READ)
// 0056cda1: SUB EDX,0x4
// 0056cda4: DEC EBP
// 0056cda5: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0056cda9: TEST EBP,EBP
// 0056cdab: JGE 0x0056cd83
//   XREF to: 0056cd83 (CONDITIONAL_JUMP)
// 0056cdad: ADD ESP,0x34
//   Label: LAB_0056cdad
// 0056cdb0: POP EBP
// 0056cdb1: POP EDI
// 0056cdb2: POP ESI
// 0056cdb3: POP EBX
// 0056cdb4: RET
// 0056cdb5: MOV ESI,ESP
//   Label: LAB_0056cdb5
// 0056cdb7: PUSH ESI
// 0056cdb8: MOV EAX,dword ptr [EBX + 0x154]
// 0056cdbe: PUSH EBX
// 0056cdbf: CALL dword ptr [EAX + 0x14]
// 0056cdc2: MOV ESI,EAX
// 0056cdc4: MOV EDX,EAX
// 0056cdc6: LEA EAX,[ESP + 0x20]
// 0056cdca: ADD ESP,0x8
// 0056cdcd: CMP EAX,ESI
// 0056cdcf: JZ 0x0056cde5
//   XREF to: 0056cde5 (CONDITIONAL_JUMP)
// 0056cdd1: MOV EAX,dword ptr [ESI]
// 0056cdd3: MOV dword ptr [ESP + 0x18],EAX
// 0056cdd7: MOV EAX,dword ptr [ESI + 0x4]
// 0056cdda: MOV dword ptr [ESP + 0x1c],EAX
// 0056cdde: MOV EAX,dword ptr [ESI + 0x8]
// 0056cde1: MOV dword ptr [ESP + 0x20],EAX
// 0056cde5: LEA EAX,[ESP + 0x24]
//   Label: LAB_0056cde5
// 0056cde9: LEA ESI,[EDX + 0xc]
// 0056cdec: CMP EAX,ESI
// 0056cdee: JZ 0x0056ce04
//   XREF to: 0056ce04 (CONDITIONAL_JUMP)
// 0056cdf0: MOV EAX,dword ptr [ESI]
// 0056cdf2: MOV dword ptr [ESP + 0x24],EAX
// 0056cdf6: MOV EAX,dword ptr [ESI + 0x4]
// 0056cdf9: MOV dword ptr [ESP + 0x28],EAX
// 0056cdfd: MOV EAX,dword ptr [ESI + 0x8]
// 0056ce00: MOV dword ptr [ESP + 0x2c],EAX
// 0056ce04: LEA EAX,[EBX + 0x3c]
//   Label: LAB_0056ce04
// 0056ce07: PUSH EAX
// 0056ce08: LEA EAX,[ESP + 0x28]
// 0056ce0c: PUSH EAX
// 0056ce0d: LEA EAX,[ESP + 0x20]
// 0056ce11: PUSH EAX
// 0056ce12: LEA EAX,[EBX + 0x30]
// 0056ce15: PUSH EAX
// 0056ce16: LEA EAX,[EBX + 0x20]
// 0056ce19: PUSH EAX
// 0056ce1a: PUSH EDI
// 0056ce1b: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 0056ce20: ADD ESP,0x18
// 0056ce23: MOV ESI,dword ptr [EBX + 0x110]
// 0056ce29: PUSH ESI
// 0056ce2a: MOV EAX,dword ptr [EBX + 0x10c]
// 0056ce30: PUSH EAX
// 0056ce31: MOV EDX,dword ptr [EBX + 0x108]
// 0056ce37: PUSH EDX
// 0056ce38: PUSH EDI
// 0056ce39: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 0056ce3e: ADD ESP,0x10
// 0056ce41: PUSH 0xffff
// 0056ce46: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056ce4c: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0056ce4d: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0056ce52: ADD ESP,0x8
// 0056ce55: MOV EAX,dword ptr [EBX + 0x154]
// 0056ce5b: PUSH EBX
// 0056ce5c: CALL dword ptr [EAX + 0x8]
// 0056ce5f: ADD ESP,0x4
// 0056ce62: TEST EAX,EAX
// 0056ce64: JZ 0x0056cef4
//   XREF to: 0056cef4 (CONDITIONAL_JUMP)
// 0056ce6a: OR byte ptr [EBX + 0x140],0x4
// 0056ce71: PUSH 0x1
//   Label: LAB_0056ce71
// 0056ce73: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0056ce79: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0056ce7a: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056ce7f: ADD ESP,0x8
// 0056ce82: MOV EAX,dword ptr [EDI + 0x15acb4]
// 0056ce88: XOR ESI,ESI
// 0056ce8a: TEST EAX,EAX
// 0056ce8c: JLE 0x0056ced7
//   XREF to: 0056ced7 (CONDITIONAL_JUMP)
// 0056ce8e: PUSH 0x0
//   Label: LAB_0056ce8e
// 0056ce90: PUSH ESI
// 0056ce91: PUSH EDI
// 0056ce92: CALL core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0
//   XREF to: 005709e0 (UNCONDITIONAL_CALL)
// 0056ce97: ADD ESP,0xc
// 0056ce9a: MOV EAX,dword ptr [EBX + 0x154]
// 0056cea0: PUSH EBX
// 0056cea1: CALL dword ptr [EAX + 0x8]
// 0056cea4: ADD ESP,0x4
// 0056cea7: TEST EAX,EAX
// 0056cea9: JZ 0x0056ceb2
//   XREF to: 0056ceb2 (CONDITIONAL_JUMP)
// 0056ceab: OR byte ptr [EBX + 0x140],0x4
// 0056ceb2: PUSH 0x1
//   Label: LAB_0056ceb2
// 0056ceb4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0056ceba: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0056cebb: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 0056cec0: ADD ESP,0x8
// 0056cec3: PUSH EDI
// 0056cec4: INC ESI
// 0056cec5: CALL core_set.cpp_FUN_00570af0
//   XREF to: 00570af0 (UNCONDITIONAL_CALL)
// 0056ceca: MOV ECX,dword ptr [EDI + 0x15acb4]
// 0056ced0: ADD ESP,0x4
// 0056ced3: CMP ESI,ECX
// 0056ced5: JL 0x0056ce8e
//   XREF to: 0056ce8e (CONDITIONAL_JUMP)
// 0056ced7: PUSH 0x10000
//   Label: LAB_0056ced7
// 0056cedc: PUSH 0x10000
// 0056cee1: PUSH 0x10000
// 0056cee6: PUSH EDI
// 0056cee7: CALL core_set.cpp_CDemonSet_FUN_00570ca0
//   XREF to: 00570ca0 (UNCONDITIONAL_CALL)
// 0056ceec: ADD ESP,0x10
// 0056ceef: JMP 0x0056cd9d
//   XREF to: 0056cd9d (UNCONDITIONAL_JUMP)
// 0056cef4: AND byte ptr [EBX + 0x140],0xfb
//   Label: LAB_0056cef4
// 0056cefb: JMP 0x0056ce71
//   XREF to: 0056ce71 (UNCONDITIONAL_JUMP)
