// Name: core_simbox.cpp_CSimBox_process_FUN_00588f20
// Address: 00588f20
// Address Range: [[00588f20, 005890e6]]
// Convention: __cdecl
// Signature: void core_simbox.cpp_CSimBox_process_FUN_00588f20(CSimBox * this_ptr)
// Globals:
//   float FLOAT_00649c02 = 0.00003051851
//   double DOUBLE_00649c0a = -0.5
//   double DOUBLE_00649c12 = 3.14159265350000
//   double DOUBLE_00649c1a = 2
//   CEventList* g_CEventListInstance = 02d05310
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 DAT_02d05310
//   void* g_CKeysPtr
// Function calls:
//   core_box.cpp_CBox_process_FUN_0041e2f0
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_process_FUN_00588f20(CSimBox *this_ptr)

{
  COrientation *pCVar1;
  CDemonActor_vtable *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  float in_stack_00000010;
  
  if ((*(int *)(this_ptr->field1_0x158 + 0x17c) == 1) &&
     (*(int *)(this_ptr->field1_0x158 + 0x454) == 0)) {
    iVar3 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListInstance,this_ptr->field1_0x158 + 0x184);
    if (iVar3 != 0) {
      this_ptr->field1_0x158[0x454] = '\x01';
      this_ptr->field1_0x158[0x455] = '\0';
      this_ptr->field1_0x158[0x456] = '\0';
      this_ptr->field1_0x158[0x457] = '\0';
      if (this_ptr->field1_0x158 + 0x24c != this_ptr->field1_0x158 + 0x1e8) {
        *(undefined4 *)(this_ptr->field1_0x158 + 0x24c) =
             *(undefined4 *)(this_ptr->field1_0x158 + 0x1e8);
        *(undefined4 *)(this_ptr->field1_0x158 + 0x250) =
             *(undefined4 *)(this_ptr->field1_0x158 + 0x1ec);
        *(undefined4 *)(this_ptr->field1_0x158 + 0x254) =
             *(undefined4 *)(this_ptr->field1_0x158 + 0x1f0);
      }
      if (this_ptr->field1_0x158 + 0x270 != this_ptr->field1_0x158 + 500) {
        *(undefined4 *)(this_ptr->field1_0x158 + 0x270) =
             *(undefined4 *)(this_ptr->field1_0x158 + 500);
        *(undefined4 *)(this_ptr->field1_0x158 + 0x274) =
             *(undefined4 *)(this_ptr->field1_0x158 + 0x1f8);
        *(undefined4 *)(this_ptr->field1_0x158 + 0x278) =
             *(undefined4 *)(this_ptr->field1_0x158 + 0x1fc);
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)(this_ptr->field1_0x158 + 0x218),
                          (CVector3f *)&stack0xffffffec,
                          (CVector3f *)(this_ptr->field1_0x158 + 0x24c));
      if ((CVector3f *)(this_ptr->field1_0x158 + 0x240) != pCVar4) {
        ((CVector3f *)(this_ptr->field1_0x158 + 0x240))->x = pCVar4->x;
        *(float *)(this_ptr->field1_0x158 + 0x244) = pCVar4->y;
        *(float *)(this_ptr->field1_0x158 + 0x248) = pCVar4->z;
      }
    }
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x17c) == 0) {
    iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x13);
    if (iVar3 != 0) {
      (this_ptr->base_actor).location.position.x = *(float *)(this_ptr->field1_0x158 + 0x45c);
      (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field1_0x158 + 0x460);
      (this_ptr->base_actor).location.position.z = *(float *)(this_ptr->field1_0x158 + 0x464);
      iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
      (this_ptr->base_actor).orient.pitch =
           ((float)iVar3 * FLOAT_00649c02 + (float)DOUBLE_00649c0a) * (float)DOUBLE_00649c12;
      iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
      (this_ptr->base_actor).orient.heading =
           (float)iVar3 * FLOAT_00649c02 * (float)DOUBLE_00649c12 * (float)DOUBLE_00649c1a;
      iVar3 = crt_stdlib_c_rand_FUN_005feb5c();
      pCVar2 = (this_ptr->base_actor).metadata.vtable;
      (this_ptr->base_actor).orient.bank =
           (float)iVar3 * FLOAT_00649c02 * (float)DOUBLE_00649c12 * (float)DOUBLE_00649c1a;
      (*pCVar2->setup)(&this_ptr->base_actor);
    }
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x454) != 0) {
    core_box_cpp_CBox_process_FUN_0041e2f0
              ((CBox *)(this_ptr->field1_0x158 + 0x200),in_stack_00000010);
    (this_ptr->base_actor).location.position.x =
         (((CBox *)(this_ptr->field1_0x158 + 0x200))->position).x;
    (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field1_0x158 + 0x204);
    (this_ptr->base_actor).location.position.z = *(float *)(this_ptr->field1_0x158 + 0x208);
    pCVar1 = &(this_ptr->base_actor).orient;
    if (pCVar1 != (COrientation *)(this_ptr->field1_0x158 + 0x20c)) {
      pCVar1->pitch = *(float *)(this_ptr->field1_0x158 + 0x20c);
      (this_ptr->base_actor).orient.bank = *(float *)(this_ptr->field1_0x158 + 0x210);
      (this_ptr->base_actor).orient.heading = *(float *)(this_ptr->field1_0x158 + 0x214);
      return;
    }
  }
  return;
}


// Assembly code:
// 00588f20: PUSH EBX
//   Label: core_simbox.cpp_CSimBox_process_FUN_00588f20
// 00588f21: PUSH ESI
// 00588f22: SUB ESP,0x10
// 00588f25: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00588f29: CMP dword ptr [EBX + 0x2d4],0x1
// 00588f30: JNZ 0x00588fe0
//   XREF to: 00588fe0 (CONDITIONAL_JUMP)
// 00588f36: CMP dword ptr [EBX + 0x5ac],0x0
// 00588f3d: JNZ 0x00588fe0
//   XREF to: 00588fe0 (CONDITIONAL_JUMP)
// 00588f43: LEA EAX,[EBX + 0x2dc]
// 00588f49: PUSH EAX
// 00588f4a: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00588f50: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 00588f51: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00588f56: ADD ESP,0x8
// 00588f59: TEST EAX,EAX
// 00588f5b: JZ 0x00588fe0
//   XREF to: 00588fe0 (CONDITIONAL_JUMP)
// 00588f61: LEA EAX,[EBX + 0x3a4]
// 00588f67: LEA ESI,[EBX + 0x340]
// 00588f6d: MOV dword ptr [EBX + 0x5ac],0x1
// 00588f77: CMP EAX,ESI
// 00588f79: JZ 0x00588f8b
//   XREF to: 00588f8b (CONDITIONAL_JUMP)
// 00588f7b: MOV EDX,dword ptr [ESI]
// 00588f7d: MOV dword ptr [EAX],EDX
// 00588f7f: MOV EDX,dword ptr [ESI + 0x4]
// 00588f82: MOV dword ptr [EAX + 0x4],EDX
// 00588f85: MOV EDX,dword ptr [ESI + 0x8]
// 00588f88: MOV dword ptr [EAX + 0x8],EDX
// 00588f8b: LEA EAX,[EBX + 0x3c8]
//   Label: LAB_00588f8b
// 00588f91: LEA ESI,[EBX + 0x34c]
// 00588f97: CMP EAX,ESI
// 00588f99: JZ 0x00588fab
//   XREF to: 00588fab (CONDITIONAL_JUMP)
// 00588f9b: MOV EDX,dword ptr [ESI]
// 00588f9d: MOV dword ptr [EAX],EDX
// 00588f9f: MOV EDX,dword ptr [ESI + 0x4]
// 00588fa2: MOV dword ptr [EAX + 0x4],EDX
// 00588fa5: MOV EDX,dword ptr [ESI + 0x8]
// 00588fa8: MOV dword ptr [EAX + 0x8],EDX
// 00588fab: LEA EAX,[EBX + 0x3a4]
//   Label: LAB_00588fab
// 00588fb1: PUSH EAX
// 00588fb2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 00588fb6: PUSH EAX
// 00588fb7: LEA EAX,[EBX + 0x370]
// 00588fbd: PUSH EAX
// 00588fbe: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00588fc3: LEA ESI,[EBX + 0x398]
// 00588fc9: ADD ESP,0xc
// 00588fcc: CMP ESI,EAX
// 00588fce: JZ 0x00588fe0
//   XREF to: 00588fe0 (CONDITIONAL_JUMP)
// 00588fd0: MOV EDX,dword ptr [EAX]
// 00588fd2: MOV dword ptr [ESI],EDX
// 00588fd4: MOV EDX,dword ptr [EAX + 0x4]
// 00588fd7: MOV dword ptr [ESI + 0x4],EDX
// 00588fda: MOV EDX,dword ptr [EAX + 0x8]
// 00588fdd: MOV dword ptr [ESI + 0x8],EDX
// 00588fe0: CMP dword ptr [EBX + 0x2d4],0x0
//   Label: LAB_00588fe0
// 00588fe7: JNZ 0x0058908f
//   XREF to: 0058908f (CONDITIONAL_JUMP)
// 00588fed: PUSH 0x13
// 00588fef: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00588ff4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00588ff5: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00588ff7: CALL dword ptr [ESI]
// 00588ff9: ADD ESP,0x8
// 00588ffc: TEST EAX,EAX
// 00588ffe: JZ 0x0058908f
//   XREF to: 0058908f (CONDITIONAL_JUMP)
// 00589004: LEA ESI,[EBX + 0x20]
// 00589007: LEA EAX,[EBX + 0x5b4]
// 0058900d: MOV EDX,dword ptr [EAX]
// 0058900f: MOV dword ptr [ESI],EDX
// 00589011: MOV EDX,dword ptr [EAX + 0x4]
// 00589014: MOV dword ptr [ESI + 0x4],EDX
// 00589017: MOV EDX,dword ptr [EAX + 0x8]
// 0058901a: MOV dword ptr [ESI + 0x8],EDX
// 0058901d: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00589022: MOV dword ptr [ESP + 0xc],EAX
// 00589026: FILD dword ptr [ESP + 0xc]
// 0058902a: FMUL float ptr [0x00649c02]
//   XREF to: 00649c02 (READ)
// 00589030: FADD double ptr [0x00649c0a]
//   XREF to: 00649c0a (READ)
// 00589036: FMUL double ptr [0x00649c12]
//   XREF to: 00649c12 (READ)
// 0058903c: FSTP float ptr [EBX + 0x30]
// 0058903f: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00589044: MOV dword ptr [ESP + 0xc],EAX
// 00589048: FILD dword ptr [ESP + 0xc]
// 0058904c: FMUL float ptr [0x00649c02]
//   XREF to: 00649c02 (READ)
// 00589052: FMUL double ptr [0x00649c12]
//   XREF to: 00649c12 (READ)
// 00589058: FMUL double ptr [0x00649c1a]
//   XREF to: 00649c1a (READ)
// 0058905e: FSTP float ptr [EBX + 0x38]
// 00589061: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00589066: MOV dword ptr [ESP + 0xc],EAX
// 0058906a: FILD dword ptr [ESP + 0xc]
// 0058906e: FMUL float ptr [0x00649c02]
//   XREF to: 00649c02 (READ)
// 00589074: FMUL double ptr [0x00649c12]
//   XREF to: 00649c12 (READ)
// 0058907a: FMUL double ptr [0x00649c1a]
//   XREF to: 00649c1a (READ)
// 00589080: PUSH EBX
// 00589081: MOV EAX,dword ptr [EBX + 0x154]
// 00589087: FSTP float ptr [EBX + 0x34]
// 0058908a: CALL dword ptr [EAX]
// 0058908c: ADD ESP,0x4
// 0058908f: CMP dword ptr [EBX + 0x5ac],0x0
//   Label: LAB_0058908f
// 00589096: JNZ 0x0058909e
//   XREF to: 0058909e (CONDITIONAL_JUMP)
// 00589098: ADD ESP,0x10
//   Label: LAB_00589098
// 0058909b: POP ESI
// 0058909c: POP EBX
// 0058909d: RET
// 0058909e: LEA ESI,[EBX + 0x358]
//   Label: LAB_0058909e
// 005890a4: PUSH dword ptr [ESP + 0x20]
// 005890a8: PUSH ESI
// 005890a9: CALL core_box.cpp_CBox_process_FUN_0041e2f0
//   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)
// 005890ae: LEA EAX,[EBX + 0x20]
// 005890b1: MOV EDX,dword ptr [ESI]
// 005890b3: MOV dword ptr [EAX],EDX
// 005890b5: MOV EDX,dword ptr [ESI + 0x4]
// 005890b8: MOV dword ptr [EAX + 0x4],EDX
// 005890bb: MOV EDX,dword ptr [ESI + 0x8]
// 005890be: MOV dword ptr [EAX + 0x8],EDX
// 005890c1: LEA EAX,[EBX + 0x30]
// 005890c4: ADD EBX,0x364
// 005890ca: ADD ESP,0x8
// 005890cd: CMP EAX,EBX
// 005890cf: JZ 0x00589098
//   XREF to: 00589098 (CONDITIONAL_JUMP)
// 005890d1: MOV EDX,dword ptr [EBX]
// 005890d3: MOV dword ptr [EAX],EDX
// 005890d5: MOV EDX,dword ptr [EBX + 0x4]
// 005890d8: MOV dword ptr [EAX + 0x4],EDX
// 005890db: MOV EDX,dword ptr [EBX + 0x8]
// 005890de: MOV dword ptr [EAX + 0x8],EDX
// 005890e1: ADD ESP,0x10
// 005890e4: POP ESI
// 005890e5: POP EBX
// 005890e6: RET
