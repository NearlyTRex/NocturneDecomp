// Name: core_enemy.cpp_FUN_004a9930
// Address: 004a9930
// Address Range: [[004a9930, 004a99c7]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9930()
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c803 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062439a = 1.20000000000000
//   double DOUBLE_006243a2 = 0.25
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_gore.cpp_FUN_004edbb0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

undefined4 core_enemy_cpp_FUN_004a9930(void)

{
  float fVar1;
  undefined4 extraout_EDX;
  double dVar2;
  int in_stack_00000004;
  int in_stack_00000010;
  
  if (*(int *)(in_stack_00000004 + 0xbe3c) != 0) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x154) + 0x118))();
    fVar1 = *(float *)(in_stack_00000010 + 4);
    if (0.0 < fVar1) {
      dVar2 = crt_math_c_round_FUN_005fe6b0
                        ((double)CONCAT44(extraout_EDX,
                                          CONCAT22((short)((uint)in_stack_00000010 >> 0x10),
                                                   (ushort)(0.0 < fVar1) << 8 |
                                                   (ushort)NAN(fVar1) << 10 |
                                                   (ushort)(fVar1 == 0.0) << 0xe)));
      core_gore_cpp_FUN_004edbb0(g_CGorePtr,(int)((ulonglong)dVar2 >> 0x20));
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004a9930: PUSH EBX
//   Label: core_enemy.cpp_FUN_004a9930
// 004a9931: PUSH ESI
// 004a9932: PUSH EDI
// 004a9933: PUSH EBP
// 004a9934: MOV EBP,ESP
// 004a9936: SUB ESP,0x18
// 004a9939: AND ESP,0xfffffff8
// 004a993c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a993f: MOV EDX,dword ptr [EAX + 0xbe3c]
// 004a9945: TEST EDX,EDX
// 004a9947: JNZ 0x004a9952
//   XREF to: 004a9952 (CONDITIONAL_JUMP)
// 004a9949: XOR EAX,EAX
//   Label: LAB_004a9949
// 004a994b: MOV ESP,EBP
// 004a994d: POP EBP
// 004a994e: POP EDI
// 004a994f: POP ESI
// 004a9950: POP EBX
// 004a9951: RET
// 004a9952: LEA ECX,[ESP + 0x8]
//   Label: LAB_004a9952
//   XREF to: Stack[-0x20] (DATA)
// 004a9956: PUSH ECX
// 004a9957: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a995a: PUSH ECX
// 004a995b: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a995e: PUSH EBX
// 004a995f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a9962: PUSH ESI
// 004a9963: MOV EAX,EDX
// 004a9965: MOV EDX,dword ptr [EDX + 0x154]
// 004a996b: PUSH EAX
// 004a996c: CALL dword ptr [EDX + 0x118]
// 004a9972: ADD ESP,0x14
// 004a9975: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a9978: FLDZ
// 004a997a: FLD float ptr [EAX + 0x4]
// 004a997d: FSTP double ptr [ESP]
// 004a9980: FCOMP double ptr [ESP]
// 004a9983: FNSTSW AX
// 004a9985: SAHF
// 004a9986: JNC 0x004a9949
//   XREF to: 004a9949 (CONDITIONAL_JUMP)
// 004a9988: FLD double ptr [ESP]
// 004a998b: FMUL double ptr [0x0062439a]
//   XREF to: 0062439a (READ)
// 004a9991: FMUL double ptr [0x006243a2]
//   XREF to: 006243a2 (READ)
// 004a9997: PUSH 0x0
// 004a9999: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004a999e: FISTP dword ptr [ESP + 0x18]
// 004a99a2: MOV EDI,dword ptr [ESP + 0x18]
// 004a99a6: PUSH EDI
// 004a99a7: PUSH 0x0
// 004a99a9: LEA EAX,[ESP + 0x14]
// 004a99ad: PUSH EAX
// 004a99ae: MOV EAX,[0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 004a99b3: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 004a99b4: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 004a99b9: MOV EAX,0x1
// 004a99be: ADD ESP,0x14
// 004a99c1: MOV ESP,EBP
// 004a99c3: POP EBP
// 004a99c4: POP EDI
// 004a99c5: POP ESI
// 004a99c6: POP EBX
// 004a99c7: RET
