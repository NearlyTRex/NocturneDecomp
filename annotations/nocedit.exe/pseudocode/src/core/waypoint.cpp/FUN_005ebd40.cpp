// Name: core_waypoint.cpp_FUN_005ebd40
// Address: 005ebd40
// Address Range: [[005ebd40, 005ebe2c]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ebd40()
// Cross-references:
//   core_waypoint.cpp_FUN_005ec320 (005ec320) at 005ec340 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_FUN_005ec4f0 (005ec4f0) at 005ec5a4 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00657507 = 10
//   double DOUBLE_0065750f = 30
//   double DOUBLE_00657517 = 8
//   double DOUBLE_0065751f = 25
// Function calls:
//   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   core_path.cpp_FUN_00548500

#include "nocturne.h"

/* Signature: undefined1 actors_other_waypoint.cpp_FUN_005ebd40(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

bool core_waypoint_cpp_FUN_005ebd40(void)

{
  CPathMap *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000004;
  float *in_stack_00000008;
  int in_stack_0000000c;
  CVector3f CStack_2c;
  float local_20;
  float local_1c;
  float local_18;
  CVector3f local_14;
  
  CStack_2c.z = *in_stack_00000004 - *in_stack_00000008;
  local_20 = in_stack_00000004[1] - in_stack_00000008[1];
  local_1c = in_stack_00000004[2] - in_stack_00000008[2];
  if (in_stack_0000000c == 0) {
    if ((ABS(local_20) <= (float)DOUBLE_00657507) && (ABS(CStack_2c.z) <= (float)DOUBLE_0065750f)) {
      if ((float)DOUBLE_0065750f < ABS(local_1c)) {
        return false;
      }
      goto LAB_005ebde7;
    }
  }
  else if (((ABS(local_20) <= (float)DOUBLE_00657517) &&
           (ABS(CStack_2c.z) <= (float)DOUBLE_0065751f)) &&
          (ABS(local_1c) <= (float)DOUBLE_0065751f)) {
LAB_005ebde7:
    local_18 = *in_stack_00000004;
    local_14.x = in_stack_00000004[1];
    local_14.y = in_stack_00000004[2];
    this_ptr = (CPathMap *)core_path_cpp_FUN_00548500();
    iVar1 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00(this_ptr,&local_14,&CStack_2c,0);
    return iVar1 == 1;
  }
  return false;
}


// Assembly code:
// 005ebd40: PUSH EBX
//   Label: core_waypoint.cpp_FUN_005ebd40
// 005ebd41: PUSH EBP
// 005ebd42: MOV EBP,ESP
// 005ebd44: SUB ESP,0x24
// 005ebd47: AND ESP,0xfffffff8
// 005ebd4a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ebd4d: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005ebd50: FLD float ptr [EDX]
// 005ebd52: FSUB float ptr [ECX]
// 005ebd54: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 005ebd58: FLD float ptr [EDX + 0x4]
// 005ebd5b: FSUB float ptr [ECX + 0x4]
// 005ebd5e: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 005ebd62: FLD float ptr [EDX + 0x8]
// 005ebd65: FSUB float ptr [ECX + 0x8]
// 005ebd68: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005ebd6b: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 005ebd6f: TEST EBX,EBX
// 005ebd71: JZ 0x005ebdad
//   XREF to: 005ebdad (CONDITIONAL_JUMP)
// 005ebd73: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005ebd77: FABS
// 005ebd79: FCOMP double ptr [0x00657517]
//   XREF to: 00657517 (READ)
// 005ebd7f: FNSTSW AX
// 005ebd81: SAHF
// 005ebd82: JA 0x005ebda6
//   XREF to: 005ebda6 (CONDITIONAL_JUMP)
// 005ebd84: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005ebd88: FABS
// 005ebd8a: FCOMP double ptr [0x0065751f]
//   XREF to: 0065751f (READ)
// 005ebd90: FNSTSW AX
// 005ebd92: SAHF
// 005ebd93: JA 0x005ebda6
//   XREF to: 005ebda6 (CONDITIONAL_JUMP)
// 005ebd95: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005ebd99: FABS
// 005ebd9b: FCOMP double ptr [0x0065751f]
//   XREF to: 0065751f (READ)
// 005ebda1: FNSTSW AX
// 005ebda3: SAHF
// 005ebda4: JBE 0x005ebde7
//   XREF to: 005ebde7 (CONDITIONAL_JUMP)
// 005ebda6: XOR EAX,EAX
//   Label: LAB_005ebda6
// 005ebda8: MOV ESP,EBP
// 005ebdaa: POP EBP
// 005ebdab: POP EBX
// 005ebdac: RET
// 005ebdad: FLD float ptr [ESP + 0x10]
//   Label: LAB_005ebdad
//   XREF to: Stack[-0x20] (READ)
// 005ebdb1: FABS
// 005ebdb3: FCOMP double ptr [0x00657507]
//   XREF to: 00657507 (READ)
// 005ebdb9: FNSTSW AX
// 005ebdbb: SAHF
// 005ebdbc: JA 0x005ebda6
//   XREF to: 005ebda6 (CONDITIONAL_JUMP)
// 005ebdbe: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005ebdc2: FABS
// 005ebdc4: FCOMP double ptr [0x0065750f]
//   XREF to: 0065750f (READ)
// 005ebdca: FNSTSW AX
// 005ebdcc: SAHF
// 005ebdcd: JA 0x005ebda6
//   XREF to: 005ebda6 (CONDITIONAL_JUMP)
// 005ebdcf: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005ebdd3: FABS
// 005ebdd5: FCOMP double ptr [0x0065750f]
//   XREF to: 0065750f (READ)
// 005ebddb: FNSTSW AX
// 005ebddd: SAHF
// 005ebdde: JBE 0x005ebde7
//   XREF to: 005ebde7 (CONDITIONAL_JUMP)
// 005ebde0: XOR EAX,EAX
// 005ebde2: MOV ESP,EBP
// 005ebde4: POP EBP
// 005ebde5: POP EBX
// 005ebde6: RET
// 005ebde7: MOV EAX,dword ptr [EDX]
//   Label: LAB_005ebde7
// 005ebde9: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ebded: LEA EAX,[EDX + 0x4]
// 005ebdf0: MOV EAX,dword ptr [EAX]
// 005ebdf2: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ebdf6: LEA EAX,[EDX + 0x8]
// 005ebdf9: MOV EAX,dword ptr [EAX]
// 005ebdfb: PUSH ECX
// 005ebdfc: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005ebe00: CALL core_path.cpp_FUN_00548500
//   XREF to: 00548500 (UNCONDITIONAL_CALL)
// 005ebe05: ADD ESP,0x4
// 005ebe08: PUSH 0x0
// 005ebe0a: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 005ebe0e: PUSH EDX
// 005ebe0f: LEA EDX,[ESP + 0x20]
//   XREF to: Stack[-0x18] (DATA)
// 005ebe13: PUSH EDX
// 005ebe14: PUSH EAX
// 005ebe15: CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
//   XREF to: 00547d00 (UNCONDITIONAL_CALL)
// 005ebe1a: ADD ESP,0x10
// 005ebe1d: CMP EAX,0x1
// 005ebe20: SETZ AL
// 005ebe23: AND EAX,0xff
// 005ebe28: MOV ESP,EBP
// 005ebe2a: POP EBP
// 005ebe2b: POP EBX
// 005ebe2c: RET
