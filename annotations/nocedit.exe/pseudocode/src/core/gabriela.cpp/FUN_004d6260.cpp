// Name: core_gabriela.cpp_FUN_004d6260
// Address: 004d6260
// Address Range: [[004d6260, 004d6530]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6260()
// Cross-references:
//   core_gabriela.cpp_FUN_004d6540 (004d6540) at 004d676d [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062b07d = 30
//   double DOUBLE_0062b085 = -0.781490709825871
//   double DOUBLE_0062b08d = 1.56298141965174
//   double DOUBLE_0062b095 = 35
//   double DOUBLE_0062b09d = -0.785398163375000
//   double DOUBLE_0062b0a5 = 1.57079632675000
//   float FLOAT_0062b0ad = 0.5
//   WatcomTypeInfo g_CVectorTypeInfo
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CEnemyClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032613bc
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d6260(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

float core_gabriela_cpp_FUN_004d6260(void)

{
  float fVar1;
  CDemonActor *this_ptr;
  int iVar2;
  CVector3f *pCVar3;
  CBoundingBox3D *pCVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_00000040;
  float in_stack_00000044;
  float in_stack_00000048;
  SCollisionInfo *in_stack_ffffff0c;
  float fStack_f0;
  float in_stack_ffffff3c;
  undefined1 auStack_48 [44];
  CVector3f CStack_1c;
  
  this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                       (in_stack_00000008,g_CEnemyClassInfo.name_hash);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xffffff0c,10,&g_CVectorTypeInfo)
  ;
  iVar2 = (*((in_stack_00000008->metadata).vtable)->getTargetPoints)
                    (in_stack_00000008,(CVector3f *)&fStack_f0);
  if ((iVar2 != 0) &&
     ((this_ptr == (CDemonActor *)0x0 ||
      (iVar2 = (*(this_ptr->metadata).vtable[1].hasCollision)(this_ptr,in_stack_ffffff0c), iVar2 < 1
      )))) {
    fStack_f0 = 7.106831e-39;
    core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004);
    if (0.0 < CStack_1c.z) {
      in_stack_00000014 =
           SQRT(CStack_1c.z * CStack_1c.z + CStack_1c.x * CStack_1c.x + CStack_1c.y * CStack_1c.y);
      pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)(auStack_48 + 0x14),&CStack_1c);
      fVar1 = pCVar3->y;
      if (in_stack_0000000c == 0) {
        if ((float)DOUBLE_0062b07d < in_stack_ffffff3c) {
          return -1.0;
        }
        if (fVar1 < (float)DOUBLE_0062b085) {
          return -1.0;
        }
        if (DOUBLE_0062b08d < (double)fVar1) {
          return -1.0;
        }
      }
      else {
        if ((float)DOUBLE_0062b095 < in_stack_ffffff3c) {
          return -1.0;
        }
        if (fVar1 < (float)DOUBLE_0062b09d) {
          return -1.0;
        }
        if (DOUBLE_0062b0a5 < (double)fVar1) {
          return -1.0;
        }
      }
      pCVar4 = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                         (in_stack_00000004,(CBoundingBox3D *)auStack_48);
      in_stack_00000014 = (pCVar4->min).x + (pCVar4->max).x;
      in_stack_00000018 = (pCVar4->min).y + (pCVar4->max).y;
      in_stack_00000020 = in_stack_00000014 * FLOAT_0062b0ad;
      in_stack_0000001c = (pCVar4->min).z + (pCVar4->max).z;
      in_stack_00000024 = in_stack_00000018 * FLOAT_0062b0ad;
      in_stack_00000028 = in_stack_0000001c * FLOAT_0062b0ad;
      core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000008);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,1);
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
      in_stack_00000040 =
           core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                     (g_CDemonSetPtr,(CVector3f *)&stack0xfffffffc,(CVector3f *)&stack0x00000014);
      in_stack_00000048 = in_stack_00000040;
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      if ((in_stack_00000044 <= 1.0) && (in_stack_00000008 == g_CDemonSetPtr->collision_actor)) {
        return in_stack_00000040;
      }
    }
  }
  return -1.0;
}


// Assembly code:
// 004d6260: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d6260
// 004d6261: PUSH ESI
// 004d6262: PUSH EDI
// 004d6263: PUSH EBP
// 004d6264: MOV EBP,ESP
// 004d6266: SUB ESP,0x100
// 004d626c: AND ESP,0xfffffff8
// 004d626f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d6272: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004d6275: MOV EDX,dword ptr [0x02cf2bf0]
//   XREF to: 02cf2bf0 (READ)
// 004d627b: PUSH EDX
// 004d627c: PUSH ESI
// 004d627d: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d6282: ADD ESP,0x8
// 004d6285: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004d628a: PUSH 0xa
// 004d628c: MOV EBX,EAX
// 004d628e: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0xf8] (DATA)
// 004d6292: PUSH EAX
// 004d6293: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004d6298: ADD ESP,0xc
// 004d629b: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0xf8] (DATA)
// 004d629f: PUSH EAX
// 004d62a0: MOV EDX,dword ptr [ESI + 0x154]
// 004d62a6: PUSH ESI
// 004d62a7: CALL dword ptr [EDX + 0x4c]
// 004d62aa: ADD ESP,0x8
// 004d62ad: TEST EAX,EAX
// 004d62af: JZ 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d62b1: TEST EBX,EBX
// 004d62b3: JZ 0x004d62e2
//   XREF to: 004d62e2 (CONDITIONAL_JUMP)
// 004d62b5: PUSH EBX
// 004d62b6: MOV EAX,dword ptr [EBX + 0x154]
// 004d62bc: CALL dword ptr [EAX + 0x120]
// 004d62c2: ADD ESP,0x4
// 004d62c5: TEST EAX,EAX
// 004d62c7: JLE 0x004d62e2
//   XREF to: 004d62e2 (CONDITIONAL_JUMP)
// 004d62c9: MOV dword ptr [ESP + 0xf8],0xbf800000
//   Label: LAB_004d62c9
// 004d62d4: MOV EAX,dword ptr [ESP + 0xf8]
// 004d62db: MOV ESP,EBP
// 004d62dd: POP EBP
// 004d62de: POP EDI
// 004d62df: POP ESI
// 004d62e0: POP EBX
// 004d62e1: RET
// 004d62e2: LEA EAX,[ESI + 0x20]
//   Label: LAB_004d62e2
// 004d62e5: PUSH EAX
// 004d62e6: LEA EAX,[ESP + 0xc4]
// 004d62ed: PUSH EAX
// 004d62ee: PUSH EDI
// 004d62ef: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004d62f4: ADD ESP,0xc
// 004d62f7: FLD float ptr [ESP + 0xc8]
// 004d62fe: FLDZ
// 004d6300: FCOMPP
// 004d6302: FNSTSW AX
// 004d6304: SAHF
// 004d6305: JNC 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d6307: FLD float ptr [ESP + 0xc4]
// 004d630e: FMUL ST0
// 004d6310: FLD float ptr [ESP + 0xc0]
// 004d6317: FMUL ST0
// 004d6319: FADDP
// 004d631b: FLD float ptr [ESP + 0xc8]
// 004d6322: FMUL ST0
// 004d6324: FADDP
// 004d6326: FSQRT
// 004d6328: FSTP float ptr [ESP + 0x14]
// 004d632c: MOV EAX,dword ptr [ESP + 0x14]
// 004d6330: MOV dword ptr [ESP + 0xf0],EAX
// 004d6337: LEA EAX,[ESP + 0xc0]
// 004d633e: PUSH EAX
// 004d633f: LEA EAX,[ESP + 0xac]
// 004d6346: PUSH EAX
// 004d6347: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004d634c: ADD ESP,0x8
// 004d634f: MOV EAX,dword ptr [EAX + 0x4]
// 004d6352: MOV ECX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d6355: MOV dword ptr [ESP + 0x10],EAX
// 004d6359: TEST ECX,ECX
// 004d635b: JZ 0x004d639b
//   XREF to: 004d639b (CONDITIONAL_JUMP)
// 004d635d: FLD float ptr [ESP + 0x14]
// 004d6361: FCOMP double ptr [0x0062b095]
//   XREF to: 0062b095 (READ)
// 004d6367: FNSTSW AX
// 004d6369: SAHF
// 004d636a: JA 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d6370: FLD float ptr [ESP + 0x10]
// 004d6374: FST double ptr [ESP + 0x8]
// 004d6378: FCOMP double ptr [0x0062b09d]
//   XREF to: 0062b09d (READ)
// 004d637e: FNSTSW AX
// 004d6380: SAHF
// 004d6381: JC 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d6387: FLD double ptr [ESP + 0x8]
// 004d638b: FCOMP double ptr [0x0062b0a5]
//   XREF to: 0062b0a5 (READ)
// 004d6391: FNSTSW AX
// 004d6393: SAHF
// 004d6394: JBE 0x004d63d6
//   XREF to: 004d63d6 (CONDITIONAL_JUMP)
// 004d6396: JMP 0x004d62c9
//   XREF to: 004d62c9 (UNCONDITIONAL_JUMP)
// 004d639b: FLD float ptr [ESP + 0x14]
//   Label: LAB_004d639b
// 004d639f: FCOMP double ptr [0x0062b07d]
//   XREF to: 0062b07d (READ)
// 004d63a5: FNSTSW AX
// 004d63a7: SAHF
// 004d63a8: JA 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d63ae: FLD float ptr [ESP + 0x10]
// 004d63b2: FST double ptr [ESP]
// 004d63b5: FCOMP double ptr [0x0062b085]
//   XREF to: 0062b085 (READ)
// 004d63bb: FNSTSW AX
// 004d63bd: SAHF
// 004d63be: JC 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d63c4: FLD double ptr [ESP]
// 004d63c7: FCOMP double ptr [0x0062b08d]
//   XREF to: 0062b08d (READ)
// 004d63cd: FNSTSW AX
// 004d63cf: SAHF
// 004d63d0: JA 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d63d6: LEA EBX,[ESP + 0x90]
//   Label: LAB_004d63d6
// 004d63dd: PUSH EBX
// 004d63de: MOV EAX,dword ptr [EDI + 0x154]
// 004d63e4: PUSH EDI
// 004d63e5: CALL dword ptr [EAX + 0x14]
// 004d63e8: LEA EBX,[EAX + 0xc]
// 004d63eb: FLD float ptr [EAX]
// 004d63ed: FADD float ptr [EBX]
// 004d63ef: ADD ESP,0x8
// 004d63f2: FST float ptr [ESP + 0xd8]
// 004d63f9: FLD float ptr [EAX + 0x4]
// 004d63fc: FADD float ptr [EBX + 0x4]
// 004d63ff: FXCH
// 004d6401: FLD float ptr [0x0062b0ad]
//   XREF to: 0062b0ad (READ)
// 004d6407: FXCH
// 004d6409: FMUL ST1
// 004d640b: FXCH ST2
// 004d640d: FST float ptr [ESP + 0xdc]
// 004d6414: FLD float ptr [EAX + 0x8]
// 004d6417: FADD float ptr [EBX + 0x8]
// 004d641a: FXCH
// 004d641c: FMUL ST2
// 004d641e: FXCH
// 004d6420: FST float ptr [ESP + 0xe0]
// 004d6427: FMULP ST2
// 004d6429: LEA EAX,[EDI + 0x20]
// 004d642c: FXCH ST2
// 004d642e: FSTP float ptr [ESP + 0xe4]
// 004d6435: FXCH
// 004d6437: FSTP float ptr [ESP + 0xe8]
// 004d643e: FSTP float ptr [ESP + 0xec]
// 004d6445: FLD float ptr [EAX]
// 004d6447: FADD float ptr [ESP + 0xe4]
// 004d644e: FSTP float ptr [ESP + 0xb4]
// 004d6455: FLD float ptr [EAX + 0x4]
// 004d6458: FADD float ptr [ESP + 0xe8]
// 004d645f: FSTP float ptr [ESP + 0xb8]
// 004d6466: FLD float ptr [EAX + 0x8]
// 004d6469: LEA EAX,[ESP + 0x18]
// 004d646d: PUSH EAX
// 004d646e: LEA EAX,[ESP + 0xd0]
// 004d6475: PUSH EAX
// 004d6476: FADD float ptr [ESP + 0xf4]
// 004d647d: PUSH ESI
// 004d647e: FSTP float ptr [ESP + 0xc8]
// 004d6485: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004d648a: ADD ESP,0xc
// 004d648d: PUSH 0x1
// 004d648f: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d6494: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004d6495: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 004d649a: ADD ESP,0x8
// 004d649d: PUSH EDI
// 004d649e: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d64a4: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004d64a5: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004d64aa: ADD ESP,0x8
// 004d64ad: LEA EAX,[ESP + 0xcc]
// 004d64b4: PUSH EAX
// 004d64b5: LEA EAX,[ESP + 0xb8]
// 004d64bc: PUSH EAX
// 004d64bd: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d64c3: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004d64c4: CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
//   XREF to: 00572530 (UNCONDITIONAL_CALL)
// 004d64c9: MOV dword ptr [ESP + 0x108],EAX
// 004d64d0: FLD float ptr [ESP + 0x108]
// 004d64d7: ADD ESP,0xc
// 004d64da: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d64e0: PUSH EBX
//   XREF to: 03114278 (DATA)
// 004d64e1: FSTP float ptr [ESP + 0xf8]
// 004d64e8: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004d64ed: ADD ESP,0x4
// 004d64f0: FLD float ptr [ESP + 0xf4]
// 004d64f7: FLD1
// 004d64f9: FCOMPP
// 004d64fb: FNSTSW AX
// 004d64fd: SAHF
// 004d64fe: JC 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d6504: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004d6509: CMP ESI,dword ptr [EAX + 0x14d144]
//   XREF to: 032613bc (READ)
// 004d650f: JNZ 0x004d62c9
//   XREF to: 004d62c9 (CONDITIONAL_JUMP)
// 004d6515: MOV EAX,dword ptr [ESP + 0xf0]
// 004d651c: MOV dword ptr [ESP + 0xf8],EAX
// 004d6523: MOV EAX,dword ptr [ESP + 0xf8]
// 004d652a: MOV ESP,EBP
// 004d652c: POP EBP
// 004d652d: POP EDI
// 004d652e: POP ESI
// 004d652f: POP EBX
// 004d6530: RET
