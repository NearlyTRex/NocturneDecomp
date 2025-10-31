// Name: shape_superopt.cpp_ReduceDatabaseVerticesPolygonsJunctions_FUN_005d7290
// Address: 005d7290
// Address Range: [[005d7290, 005d734a]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_ReduceDatabaseVerticesPolygonsJunctions_FUN_005d7290()
// Cross-references:
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7cdb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Unable_to_optimize_verti_006545f4
//   TerminatedCString s_Unable_to_remove_invalid_00654638
//   TerminatedCString s_Unable_to_remove_T_Junti_00654665
//   TerminatedCString s_Unable_to_reduce_databas_0065468c
//   TerminatedCString s_Unable_to_reduce_databas_006546b5
// Function calls:
//   shape_superopt.cpp_DeletingTJunctionsMaybe_FUN_005d47b0
//   shape_superopt.cpp_FUN_005d35e0
//   shape_superopt.cpp_MallocAndDeletingInvalidPolygons_FUN_005d46f0
//   shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   shape_superopt.cpp_WeldingVerticesMaybe_FUN_005d4160

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_ReduceDatabaseVerticesPolygonsJunctions(undefined4
   param_1) */

undefined4 shape_superopt_cpp_ReduceDatabaseVerticesPolygonsJunctions_FUN_005d7290(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = shape_superopt_cpp_WeldingVerticesMaybe_FUN_005d4160();
  if (iVar1 == 0) {
    shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
    return 0;
  }
  iVar1 = shape_superopt_cpp_MallocAndDeletingInvalidPolygons_FUN_005d46f0();
  if (iVar1 == 0) {
    shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
    return 0;
  }
  iVar1 = shape_superopt_cpp_DeletingTJunctionsMaybe_FUN_005d47b0();
  if (iVar1 == 0) {
    shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
    return 0;
  }
  shape_superopt_cpp_FUN_005d35e0();
  iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x40) + 0x2c))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(in_stack_00000004 + 0x40) + 0x34))();
    if (iVar1 != 0) {
      return 1;
    }
    shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
    return 0;
  }
  shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
  return 0;
}


// Assembly code:
// 005d7290: PUSH EBX
//   Label: shape_superopt.cpp_ReduceDatabaseVerticesPolygonsJunctions_FUN_005d7290
// 005d7291: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d7295: PUSH 0x1
// 005d7297: MOV EDX,dword ptr [EBX + 0x20]
// 005d729a: PUSH EDX
// 005d729b: MOV ECX,dword ptr [EBX + 0x1c]
// 005d729e: PUSH ECX
// 005d729f: PUSH EBX
// 005d72a0: CALL shape_superopt.cpp_WeldingVerticesMaybe_FUN_005d4160
//   XREF to: 005d4160 (UNCONDITIONAL_CALL)
// 005d72a5: ADD ESP,0x10
// 005d72a8: TEST EAX,EAX
// 005d72aa: JZ 0x005d72f6
//   XREF to: 005d72f6 (CONDITIONAL_JUMP)
// 005d72ac: PUSH EBX
// 005d72ad: CALL shape_superopt.cpp_MallocAndDeletingInvalidPolygons_FUN_005d46f0
//   XREF to: 005d46f0 (UNCONDITIONAL_CALL)
// 005d72b2: ADD ESP,0x4
// 005d72b5: TEST EAX,EAX
// 005d72b7: JZ 0x005d7307
//   XREF to: 005d7307 (CONDITIONAL_JUMP)
// 005d72b9: PUSH 0x0
// 005d72bb: PUSH EBX
// 005d72bc: CALL shape_superopt.cpp_DeletingTJunctionsMaybe_FUN_005d47b0
//   XREF to: 005d47b0 (UNCONDITIONAL_CALL)
// 005d72c1: ADD ESP,0x8
// 005d72c4: TEST EAX,EAX
// 005d72c6: JZ 0x005d7318
//   XREF to: 005d7318 (CONDITIONAL_JUMP)
// 005d72c8: PUSH -0x1
// 005d72ca: PUSH EBX
// 005d72cb: CALL shape_superopt.cpp_FUN_005d35e0
//   XREF to: 005d35e0 (UNCONDITIONAL_CALL)
// 005d72d0: ADD ESP,0x8
// 005d72d3: MOV EAX,dword ptr [EBX + 0x40]
// 005d72d6: PUSH EBX
// 005d72d7: CALL dword ptr [EAX + 0x2c]
// 005d72da: ADD ESP,0x4
// 005d72dd: TEST EAX,EAX
// 005d72df: JZ 0x005d7329
//   XREF to: 005d7329 (CONDITIONAL_JUMP)
// 005d72e1: PUSH EBX
// 005d72e2: MOV EAX,dword ptr [EBX + 0x40]
// 005d72e5: CALL dword ptr [EAX + 0x34]
// 005d72e8: ADD ESP,0x4
// 005d72eb: TEST EAX,EAX
// 005d72ed: JZ 0x005d733a
//   XREF to: 005d733a (CONDITIONAL_JUMP)
// 005d72ef: MOV EAX,0x1
// 005d72f4: POP EBX
// 005d72f5: RET
// 005d72f6: PUSH 0x6545f4
//   Label: LAB_005d72f6
//   XREF to: 006545f4 (DATA)
// 005d72fb: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7300: ADD ESP,0x4
// 005d7303: XOR EAX,EAX
// 005d7305: POP EBX
// 005d7306: RET
// 005d7307: PUSH 0x654638
//   Label: LAB_005d7307
//   XREF to: 00654638 (DATA)
// 005d730c: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7311: ADD ESP,0x4
// 005d7314: XOR EAX,EAX
// 005d7316: POP EBX
// 005d7317: RET
// 005d7318: PUSH 0x654665
//   Label: LAB_005d7318
//   XREF to: 00654665 (DATA)
// 005d731d: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7322: ADD ESP,0x4
// 005d7325: XOR EAX,EAX
// 005d7327: POP EBX
// 005d7328: RET
// 005d7329: PUSH 0x65468c
//   Label: LAB_005d7329
//   XREF to: 0065468c (DATA)
// 005d732e: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7333: ADD ESP,0x4
// 005d7336: XOR EAX,EAX
// 005d7338: POP EBX
// 005d7339: RET
// 005d733a: PUSH 0x6546b5
//   Label: LAB_005d733a
//   XREF to: 006546b5 (DATA)
// 005d733f: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d7344: ADD ESP,0x4
// 005d7347: XOR EAX,EAX
// 005d7349: POP EBX
// 005d734a: RET
