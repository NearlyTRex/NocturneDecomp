// Name: core_setedit.cpp_CDemonSet_FUN_005800d0
// Address: 005800d0
// Address Range: [[005800d0, 005801a2]]
// Convention: __cdecl
// Signature: int core_setedit.cpp_CDemonSet_FUN_005800d0(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ab4c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dff0 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 g_ScreenHeightForFonts
//   undefined4 g_CDemonCameraInstance.framebuffer_height
// Function calls:
//   core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   core_setedit.cpp_FUN_005801b0

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_FUN_005800d0(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar3;
  byte bVar4;
  CVector3i *in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000018;
  int in_stack_0000001c;
  undefined4 auStackY_1020 [1013];
  int in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined4 local_1c;
  
  bVar4 = 0;
  if ((((0 < (int)in_stack_00000008) && (0 < in_stack_0000000c)) &&
      ((int)in_stack_00000008 <= g_CDemonCameraInstance.framebuffer_width + -1)) &&
     (in_stack_0000000c <= g_CDemonCameraInstance.framebuffer_height + -1)) {
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
              (&g_CDemonCameraInstance,in_stack_00000008,in_stack_0000000c,in_stack_ffffffc0);
    local_1c = uStack_24;
    *(undefined4 *)(&stack0xffffffe8 + (uint)bVar4 * -8) =
         *(undefined4 *)(&stack0xffffffe0 + (uint)bVar4 * -8);
    *(undefined4 *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(undefined4 *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (unaff_EBP < 0x40000000) {
      core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
                (&g_CDemonCameraInstance,(CVector3i *)&stack0xffffffe8,in_stack_ffffffc4);
      uStack_30 = uStack_38;
      *(undefined4 *)(&stack0xffffffd4 + (uint)bVar4 * -8) =
           *(undefined4 *)(&stack0xffffffcc + (uint)bVar4 * -8);
      *(undefined4 *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(undefined4 *)((int)&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      iVar2 = 0;
      iVar3 = 0;
      if (0 < this_ptr->camera_count) {
        do {
          while ((iVar2 != in_stack_0000001c &&
                 (iVar1 = core_setedit_cpp_FUN_005801b0(), iVar1 != 0))) {
            iVar3 = iVar3 + 1;
            *in_stack_00000018 = iVar2;
            iVar2 = iVar2 + 1;
            in_stack_00000018 = in_stack_00000018 + 1;
            if (this_ptr->camera_count <= iVar2) {
              return iVar3;
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < this_ptr->camera_count);
      }
      return iVar3;
    }
  }
  return 0;
}


// Assembly code:
// 005800d0: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_FUN_005800d0
// 005800d1: PUSH ESI
// 005800d2: PUSH EDI
// 005800d3: PUSH EBP
// 005800d4: SUB ESP,0x30
// 005800d7: MOV EBP,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 005800db: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 005800df: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0xc] (READ)
// 005800e3: CMP EBX,0x1
// 005800e6: JL 0x00580101
//   XREF to: 00580101 (CONDITIONAL_JUMP)
// 005800e8: CMP ESI,0x1
// 005800eb: JL 0x00580101
//   XREF to: 00580101 (CONDITIONAL_JUMP)
// 005800ed: MOV EAX,[0x03275a28]
//   XREF to: 03275a28 (READ)
// 005800f2: DEC EAX
// 005800f3: CMP EBX,EAX
// 005800f5: JG 0x00580101
//   XREF to: 00580101 (CONDITIONAL_JUMP)
// 005800f7: MOV EAX,[0x03275a2c]
//   XREF to: 03275a2c (READ)
// 005800fc: DEC EAX
// 005800fd: CMP ESI,EAX
// 005800ff: JLE 0x0058010b
//   XREF to: 0058010b (CONDITIONAL_JUMP)
// 00580101: XOR EAX,EAX
//   Label: LAB_00580101
// 00580103: ADD ESP,0x30
// 00580106: POP EBP
// 00580107: POP EDI
// 00580108: POP ESI
// 00580109: POP EBX
// 0058010a: RET
// 0058010b: PUSH ESI
//   Label: LAB_0058010b
// 0058010c: PUSH EBX
// 0058010d: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00580112: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x28] (DATA)
// 00580116: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x1c] (DATA)
// 0058011a: CALL core_dcamera.cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
//   XREF to: 0044d2a0 (UNCONDITIONAL_CALL)
// 0058011f: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x28] (DATA)
// 00580123: ADD ESP,0xc
// 00580126: MOVSD ES:EDI,ESI
// 00580127: MOVSD ES:EDI,ESI
// 00580128: MOVSD ES:EDI,ESI
// 00580129: CMP dword ptr [ESP + 0x2c],0x3fffffff
//   XREF to: Stack[-0x14] (READ)
// 00580131: JG 0x00580101
//   XREF to: 00580101 (CONDITIONAL_JUMP)
// 00580133: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c] (DATA)
// 00580137: PUSH EAX
// 00580138: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0058013d: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 00580141: LEA EDI,[ESP + 0x14]
//   XREF to: Stack[-0x34] (DATA)
// 00580145: CALL core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
//   XREF to: 0044d370 (UNCONDITIONAL_CALL)
// 0058014a: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x40] (DATA)
// 0058014e: ADD ESP,0x8
// 00580151: MOVSD ES:EDI,ESI
// 00580152: MOVSD ES:EDI,ESI
// 00580153: MOVSD ES:EDI,ESI
// 00580154: XOR EBX,EBX
// 00580156: MOV ECX,dword ptr [EBP]
// 00580159: XOR EDI,EDI
// 0058015b: TEST ECX,ECX
// 0058015d: JLE 0x0058016f
//   XREF to: 0058016f (CONDITIONAL_JUMP)
// 0058015f: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x10] (READ)
// 00580163: CMP EBX,dword ptr [ESP + 0x54]
//   Label: LAB_00580163
//   XREF to: Stack[0x14] (READ)
// 00580167: JNZ 0x00580179
//   XREF to: 00580179 (CONDITIONAL_JUMP)
// 00580169: INC EBX
//   Label: LAB_00580169
// 0058016a: CMP EBX,dword ptr [EBP]
// 0058016d: JL 0x00580163
//   XREF to: 00580163 (CONDITIONAL_JUMP)
// 0058016f: MOV EAX,EDI
//   Label: LAB_0058016f
// 00580171: ADD ESP,0x30
// 00580174: POP EBP
// 00580175: POP EDI
// 00580176: POP ESI
// 00580177: POP EBX
// 00580178: RET
// 00580179: PUSH EBX
//   Label: LAB_00580179
// 0058017a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x34] (DATA)
// 0058017e: PUSH EAX
// 0058017f: PUSH EBP
// 00580180: CALL core_setedit.cpp_FUN_005801b0
//   XREF to: 005801b0 (UNCONDITIONAL_CALL)
// 00580185: ADD ESP,0xc
// 00580188: TEST EAX,EAX
// 0058018a: JZ 0x00580169
//   XREF to: 00580169 (CONDITIONAL_JUMP)
// 0058018c: ADD ESI,0x4
// 0058018f: INC EDI
// 00580190: MOV dword ptr [ESI + -0x4],EBX
// 00580193: INC EBX
// 00580194: CMP EBX,dword ptr [EBP]
// 00580197: JL 0x00580163
//   XREF to: 00580163 (CONDITIONAL_JUMP)
// 00580199: MOV EAX,EDI
// 0058019b: ADD ESP,0x30
// 0058019e: POP EBP
// 0058019f: POP EDI
// 005801a0: POP ESI
// 005801a1: POP EBX
// 005801a2: RET
