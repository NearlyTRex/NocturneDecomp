// Name: core_charactr.cpp_CCharacter_FUN_0042b670
// Address: 0042b670
// Address Range: [[0042b670, 0042b755]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b670(CCharacter * this_ptr)
// Cross-references:
//   core_bride.cpp_FUN_00423a30 (00423a30) at 0042454a [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e8145 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa02b [UNCONDITIONAL_CALL]
// Globals:
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_gore.cpp_FUN_004edaa0
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b670(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *input_vector;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  int iVar3;
  CMatrix3x4f *in_stack_ffffffa8;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  char *local_14;
  
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x35c)) {
    local_14 = (this_ptr->model).field3_0x508 + 0x978;
    pcVar2 = this_ptr->cloth_data + 0x360;
    do {
      if ((this_ptr->model).part_visibility_flags[*(int *)pcVar2] != 0) {
        iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.1);
        if (iVar1 != 0) {
          local_2c.x = 0.0;
          local_2c.y = 0.0;
          local_2c.z = -0.2;
          input_vector = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   ((CVector3f *)&stack0xffffffb0,&local_2c,
                                    (CMatrix3x4f *)(pcVar2 + 8));
          core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_20,input_vector,in_stack_ffffffa8);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (&this_ptr->base_actor,&local_44,&local_20);
          local_38.y = 0.0;
          local_38.z = 0.0;
          local_38.x = 3.0;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                    (&this_ptr->base_actor,(CVector3f *)&stack0xffffffa4,&local_38);
          in_stack_ffffffa8 = (CMatrix3x4f *)g_CGorePtr;
          core_gore_cpp_FUN_004edaa0();
        }
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x38;
    } while (iVar3 < *(int *)(this_ptr->cloth_data + 0x35c));
  }
  return;
}


// Assembly code:
// 0042b670: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b670
// 0042b671: PUSH ESI
// 0042b672: PUSH EDI
// 0042b673: PUSH EBP
// 0042b674: MOV EBP,ESP
// 0042b676: SUB ESP,0x4c
// 0042b679: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042b67c: MOV EDX,dword ptr [EBX + 0x2df4]
// 0042b682: XOR EDI,EDI
// 0042b684: TEST EDX,EDX
// 0042b686: JLE 0x0042b6b1
//   XREF to: 0042b6b1 (CONDITIONAL_JUMP)
// 0042b688: LEA EAX,[EBX + 0xfd8]
// 0042b68e: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042b691: LEA ESI,[EBX + 0x2df8]
// 0042b697: MOV EAX,dword ptr [ESI]
//   Label: LAB_0042b697
// 0042b699: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 0042b6a1: JNZ 0x0042b6b8
//   XREF to: 0042b6b8 (CONDITIONAL_JUMP)
// 0042b6a3: INC EDI
//   Label: LAB_0042b6a3
// 0042b6a4: MOV ECX,dword ptr [EBX + 0x2df4]
// 0042b6aa: ADD ESI,0x38
// 0042b6ad: CMP EDI,ECX
// 0042b6af: JL 0x0042b697
//   XREF to: 0042b697 (CONDITIONAL_JUMP)
// 0042b6b1: MOV ESP,EBP
//   Label: LAB_0042b6b1
// 0042b6b3: POP EBP
// 0042b6b4: POP EDI
// 0042b6b5: POP ESI
// 0042b6b6: POP EBX
// 0042b6b7: RET
// 0042b6b8: PUSH 0x3dcccccd
//   Label: LAB_0042b6b8
// 0042b6bd: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0042b6c2: ADD ESP,0x4
// 0042b6c5: TEST EAX,EAX
// 0042b6c7: JZ 0x0042b6a3
//   XREF to: 0042b6a3 (CONDITIONAL_JUMP)
// 0042b6c9: IMUL EAX,dword ptr [ESI + 0x4],0x30
// 0042b6cd: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0042b6d0: PUSH EAX
// 0042b6d1: LEA EAX,[ESI + 0x8]
// 0042b6d4: XOR ECX,ECX
// 0042b6d6: PUSH EAX
// 0042b6d7: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 0042b6da: MOV EDX,0xbe4ccccd
// 0042b6df: PUSH EAX
// 0042b6e0: LEA EAX,[EBP + -0x40]
//   XREF to: Stack[-0x50] (DATA)
// 0042b6e3: MOV dword ptr [EBP + -0x1c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0042b6e6: PUSH EAX
// 0042b6e7: MOV dword ptr [EBP + -0x18],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0042b6ea: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0042b6ed: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0042b6f2: ADD ESP,0xc
// 0042b6f5: PUSH EAX
// 0042b6f6: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0042b6f9: PUSH EAX
// 0042b6fa: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0042b6ff: ADD ESP,0xc
// 0042b702: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0042b705: PUSH EAX
// 0042b706: LEA EAX,[EBP + -0x34]
//   XREF to: Stack[-0x44] (DATA)
// 0042b709: PUSH EAX
// 0042b70a: PUSH EBX
// 0042b70b: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042b710: XOR EAX,EAX
// 0042b712: ADD ESP,0xc
// 0042b715: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0042b718: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0042b71b: LEA EAX,[EBP + -0x28]
//   XREF to: Stack[-0x38] (DATA)
// 0042b71e: PUSH EAX
// 0042b71f: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 0042b722: PUSH EAX
// 0042b723: MOV ECX,0x40400000
// 0042b728: PUSH EBX
// 0042b729: MOV dword ptr [EBP + -0x28],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0042b72c: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0042b731: ADD ESP,0xc
// 0042b734: MOV ECX,dword ptr [EBX + 0x2610]
// 0042b73a: PUSH ECX
// 0042b73b: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x5c] (DATA)
// 0042b73e: PUSH EAX
// 0042b73f: LEA EAX,[EBP + -0x34]
//   XREF to: Stack[-0x44] (DATA)
// 0042b742: PUSH EAX
// 0042b743: MOV EAX,[0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0042b748: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 0042b749: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 0042b74e: ADD ESP,0x10
// 0042b751: JMP 0x0042b6a3
//   XREF to: 0042b6a3 (UNCONDITIONAL_JUMP)
