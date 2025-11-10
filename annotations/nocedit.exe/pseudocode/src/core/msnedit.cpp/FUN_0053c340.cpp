// Name: core_msnedit.cpp_FUN_0053c340
// Address: 0053c340
// Address Range: [[0053c340, 0053c4e7]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c340()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a3e1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CBarrier_0063c862
//   double DOUBLE_0063c86c = 1000
//   int g_DisableMouseHitOnBarrier
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
// Function calls:
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053c340(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

CDemonActor * core_msnedit_cpp_FUN_0053c340(void)

{
  CDemonActor *actor_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *pCVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_00000010;
  undefined8 local_4c;
  undefined1 local_44 [28];
  undefined1 local_28 [20];
  float local_14;
  
  if ((((in_stack_00000004[5] < in_stack_00000008) && (in_stack_00000004[6] < in_stack_0000000c)) &&
      (in_stack_00000008 < in_stack_00000004[7] + -1)) &&
     (in_stack_0000000c < in_stack_00000004[8] + -1)) {
    local_28._0_4_ = g_CDemonCameraInstance.base.position.x;
    local_28._4_4_ = g_CDemonCameraInstance.base.position.y;
    local_28._8_4_ = g_CDemonCameraInstance.base.position.z;
    core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
              (&g_CDemonCameraInstance,(CVector3f *)&local_4c,in_stack_00000008,in_stack_0000000c);
    local_14 = (float)DOUBLE_0063c86c /
               SQRT((float)local_44._4_4_ * (float)local_44._4_4_ +
                    local_4c._4_4_ * local_4c._4_4_ + (float)local_44._0_4_ * (float)local_44._0_4_)
    ;
    local_44._0_4_ = (float)local_44._0_4_ * local_14;
    local_44._4_4_ = (float)local_44._4_4_ * local_14;
    pCVar2 = (CDemonActor *)0x0;
    local_4c = (double)CONCAT44(local_4c._4_4_ * local_14,(float)local_4c);
    for (actor_ptr = (CDemonActor *)in_stack_00000004[0x152]; actor_ptr != (CDemonActor *)0x0;
        actor_ptr = actor_ptr->next_actor) {
      if (((*in_stack_00000004 == (actor_ptr->location).area_id) && (actor_ptr->field26_0x148 == 0))
         && ((g_DisableMouseHitOnBarrier == 0 ||
             (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,"CBarrier"),
             iVar1 == 0)))) {
        (*actor_ptr->vtable->getBoundingBox)(actor_ptr,(CBoundingBox3D *)&stack0xffffffa0);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (actor_ptr,(CVector3f *)local_28,(CVector3f *)&stack0xfffffff0);
        core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                  (actor_ptr,(CVector3f *)(local_28 + 0x10),(CVector3f *)(local_44 + 0x14));
        local_44._0_4_ =
             core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                       ((CBoundingBox3D *)local_44,(CVector3f *)(local_28 + 8),
                        (CVector3f *)&local_14,(CVector3f *)0x0);
        local_4c = (double)(float)local_44._0_4_;
        if (((0.0 < local_4c) && ((float)local_44._0_4_ <= in_stack_00000010)) && (local_4c <= 1.0))
        {
          pCVar2 = actor_ptr;
          in_stack_00000010 = (float)local_44._0_4_;
        }
      }
    }
    return pCVar2;
  }
  return (CDemonActor *)0x0;
}


// Assembly code:
// 0053c340: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053c340
// 0053c341: PUSH ESI
// 0053c342: PUSH EDI
// 0053c343: PUSH EBP
// 0053c344: MOV EBP,ESP
// 0053c346: SUB ESP,0x60
// 0053c349: AND ESP,0xfffffff8
// 0053c34c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0053c34f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0053c352: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0053c355: CMP EBX,dword ptr [ESI + 0x14]
// 0053c358: JLE 0x0053c36f
//   XREF to: 0053c36f (CONDITIONAL_JUMP)
// 0053c35a: CMP EDX,dword ptr [ESI + 0x18]
// 0053c35d: JLE 0x0053c36f
//   XREF to: 0053c36f (CONDITIONAL_JUMP)
// 0053c35f: MOV EAX,dword ptr [ESI + 0x1c]
// 0053c362: DEC EAX
// 0053c363: CMP EBX,EAX
// 0053c365: JGE 0x0053c36f
//   XREF to: 0053c36f (CONDITIONAL_JUMP)
// 0053c367: MOV EAX,dword ptr [ESI + 0x20]
// 0053c36a: DEC EAX
// 0053c36b: CMP EDX,EAX
// 0053c36d: JL 0x0053c378
//   XREF to: 0053c378 (CONDITIONAL_JUMP)
// 0053c36f: XOR EAX,EAX
//   Label: LAB_0053c36f
// 0053c371: MOV ESP,EBP
// 0053c373: POP EBP
// 0053c374: POP EDI
// 0053c375: POP ESI
// 0053c376: POP EBX
// 0053c377: RET
// 0053c378: MOV EAX,[0x032758e8]
//   Label: LAB_0053c378
//   XREF to: 032758e8 (READ)
// 0053c37d: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0053c381: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0053c386: MOV EAX,dword ptr [EAX + 0x4]
//   XREF to: 032758ec (READ)
// 0053c389: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0053c38d: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0053c392: PUSH EDX
// 0053c393: MOV EAX,dword ptr [EAX + 0x8]
//   XREF to: 032758f0 (READ)
// 0053c396: PUSH EBX
// 0053c397: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0053c39b: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x4c] (DATA)
// 0053c39f: PUSH EAX
// 0053c3a0: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0053c3a5: CALL core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
//   XREF to: 0044d480 (UNCONDITIONAL_CALL)
// 0053c3aa: ADD ESP,0x10
// 0053c3ad: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (READ)
// 0053c3b1: FMUL ST0
// 0053c3b3: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4c] (READ)
// 0053c3b7: FMUL ST0
// 0053c3b9: FADDP
// 0053c3bb: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x44] (READ)
// 0053c3bf: FMUL ST0
// 0053c3c1: FADDP
// 0053c3c3: FSQRT
// 0053c3c5: FDIVR double ptr [0x0063c86c]
//   XREF to: 0063c86c (READ)
// 0053c3cb: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4c] (READ)
// 0053c3cf: FXCH
// 0053c3d1: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (WRITE)
// 0053c3d5: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0053c3d9: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (READ)
// 0053c3dd: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0053c3e1: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x44] (READ)
// 0053c3e5: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18] (READ)
// 0053c3e9: XOR EDI,EDI
// 0053c3eb: MOV EAX,0x3f8147ae
// 0053c3f0: FXCH ST2
// 0053c3f2: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4c] (WRITE)
// 0053c3f6: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (WRITE)
// 0053c3fa: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x44] (WRITE)
// 0053c3fe: MOV EBX,dword ptr [ESI + 0x548]
// 0053c404: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053c408: TEST EBX,EBX
// 0053c40a: JZ 0x0053c41d
//   XREF to: 0053c41d (CONDITIONAL_JUMP)
// 0053c40c: MOV EDX,dword ptr [ESI]
//   Label: LAB_0053c40c
// 0053c40e: CMP EDX,dword ptr [EBX + 0x2c]
// 0053c411: JZ 0x0053c426
//   XREF to: 0053c426 (CONDITIONAL_JUMP)
// 0053c413: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_0053c413
// 0053c419: TEST EBX,EBX
// 0053c41b: JNZ 0x0053c40c
//   XREF to: 0053c40c (CONDITIONAL_JUMP)
// 0053c41d: MOV EAX,EDI
//   Label: LAB_0053c41d
// 0053c41f: MOV ESP,EBP
// 0053c421: POP EBP
// 0053c422: POP EDI
// 0053c423: POP ESI
// 0053c424: POP EBX
// 0053c425: RET
// 0053c426: CMP dword ptr [EBX + 0x148],0x0
//   Label: LAB_0053c426
// 0053c42d: JNZ 0x0053c413
//   XREF to: 0053c413 (CONDITIONAL_JUMP)
// 0053c42f: CMP dword ptr [0x02f7a020],0x0
//   XREF to: 02f7a020 (READ)
// 0053c436: JZ 0x0053c44a
//   XREF to: 0053c44a (CONDITIONAL_JUMP)
// 0053c438: PUSH 0x63c862
//   XREF to: 0063c862 (DATA)
// 0053c43d: PUSH EBX
// 0053c43e: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0053c443: ADD ESP,0x8
// 0053c446: TEST EAX,EAX
// 0053c448: JNZ 0x0053c413
//   XREF to: 0053c413 (CONDITIONAL_JUMP)
// 0053c44a: LEA EAX,[ESP + 0xc]
//   Label: LAB_0053c44a
//   XREF to: Stack[-0x64] (DATA)
// 0053c44e: PUSH EAX
// 0053c44f: MOV EDX,dword ptr [EBX + 0x154]
// 0053c455: PUSH EBX
// 0053c456: CALL dword ptr [EDX + 0x14]
// 0053c459: ADD ESP,0x8
// 0053c45c: LEA EAX,[ESP + 0x48]
// 0053c460: PUSH EAX
// 0053c461: LEA EAX,[ESP + 0x34]
// 0053c465: PUSH EAX
// 0053c466: PUSH EBX
// 0053c467: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0053c46c: ADD ESP,0xc
// 0053c46f: LEA EAX,[ESP + 0x24]
// 0053c473: PUSH EAX
// 0053c474: LEA EAX,[ESP + 0x40]
// 0053c478: PUSH EAX
// 0053c479: PUSH EBX
// 0053c47a: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 0053c47f: ADD ESP,0xc
// 0053c482: PUSH 0x0
// 0053c484: LEA EAX,[ESP + 0x40]
// 0053c488: PUSH EAX
// 0053c489: LEA EAX,[ESP + 0x38]
// 0053c48d: PUSH EAX
// 0053c48e: LEA EAX,[ESP + 0x18]
// 0053c492: PUSH EAX
// 0053c493: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 0053c498: MOV dword ptr [ESP + 0x64],EAX
// 0053c49c: FLD float ptr [ESP + 0x64]
// 0053c4a0: ADD ESP,0x10
// 0053c4a3: FLDZ
// 0053c4a5: FXCH
// 0053c4a7: FST float ptr [ESP + 0x8]
// 0053c4ab: FSTP double ptr [ESP]
// 0053c4ae: FCOMP double ptr [ESP]
// 0053c4b1: FNSTSW AX
// 0053c4b3: SAHF
// 0053c4b4: JNC 0x0053c413
//   XREF to: 0053c413 (CONDITIONAL_JUMP)
// 0053c4ba: FLD float ptr [ESP + 0x8]
// 0053c4be: FCOMP float ptr [ESP + 0x5c]
// 0053c4c2: FNSTSW AX
// 0053c4c4: SAHF
// 0053c4c5: JA 0x0053c413
//   XREF to: 0053c413 (CONDITIONAL_JUMP)
// 0053c4cb: FLD1
// 0053c4cd: FCOMP double ptr [ESP]
// 0053c4d0: FNSTSW AX
// 0053c4d2: SAHF
// 0053c4d3: JC 0x0053c413
//   XREF to: 0053c413 (CONDITIONAL_JUMP)
// 0053c4d9: MOV EAX,dword ptr [ESP + 0x8]
// 0053c4dd: MOV EDI,EBX
// 0053c4df: MOV dword ptr [ESP + 0x5c],EAX
// 0053c4e3: JMP 0x0053c413
//   XREF to: 0053c413 (UNCONDITIONAL_JUMP)
