// Name: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
// Address: 00453fc0
// Address Range: [[00453fc0, 0045405a]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0(CDemonCamera * this_ptr, float peak_intensity, float attack_time, float sustain_duration, float decay_time)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_00570fa0 (00570fa0) at 00570fb5 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0061a4ca = 65536
//   int g_CameraShakePeakValue = 0x10000
//   int g_CameraShakeSustainValue = 0xc80000
//   int g_CameraShakeState = 0x3
//   int g_CameraShakeSustainTimer
//   int g_CameraShakeAttackTime
//   int g_CameraShakeAttackAccum
//   int g_CameraShakeDecayDuration
//   int g_CameraShakeDecayTimer
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0
          (CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration,
          float decay_time)

{
  uint in_EAX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  
  fVar1 = (float10)DOUBLE_0061a4ca;
  fVar2 = (float10)peak_intensity * fVar1;
  fVar3 = (float10)sustain_duration * fVar1;
  fVar4 = (float10)attack_time * fVar1;
  fVar1 = (float10)decay_time * fVar1;
  g_CameraShakeAttackAccum = 0;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)(ulonglong)in_EAX);
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  g_CameraShakeState = (int)((ulonglong)dVar5 >> 0x20);
  g_CameraShakeSustainValue = (int)ROUND(fVar3);
  g_CameraShakeAttackTime = (int)ROUND(fVar4);
  g_CameraShakeDecayDuration = (int)ROUND(fVar1);
  g_CameraShakePeakValue = (int)ROUND(fVar2);
  if (g_CameraShakeAttackTime == 0) {
    g_CameraShakeState = 1;
    g_CameraShakeSustainTimer = g_CameraShakeSustainValue;
    if (g_CameraShakeSustainValue == 0) {
      g_CameraShakeDecayTimer = g_CameraShakeDecayDuration;
      g_CameraShakeState = 2;
      return;
    }
  }
  return;
}


// Assembly code:
// 00453fc0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
// 00453fc1: FLD double ptr [0x0061a4ca]
//   XREF to: 0061a4ca (READ)
// 00453fc7: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00453fcb: FMUL ST1
// 00453fcd: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 00453fd1: FMUL ST2
// 00453fd3: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00453fd7: FMUL ST3
// 00453fd9: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 00453fdd: XOR EDX,EDX
// 00453fdf: FMULP ST4
// 00453fe1: MOV dword ptr [0x013da760],EDX
//   XREF to: 013da760 (WRITE)
// 00453fe7: FXCH ST2
// 00453fe9: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00453fee: FXCH
// 00453ff0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00453ff5: FXCH ST2
// 00453ff7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00453ffc: FXCH ST3
// 00453ffe: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00454003: FXCH ST2
// 00454005: FISTP dword ptr [0x0066ecfc]
//   XREF to: 0066ecfc (WRITE)
// 0045400b: FXCH ST2
// 0045400d: FISTP dword ptr [0x013da75c]
//   XREF to: 013da75c (WRITE)
// 00454013: FISTP dword ptr [0x013da764]
//   XREF to: 013da764 (WRITE)
// 00454019: MOV EBX,dword ptr [0x013da75c]
//   XREF to: 013da75c (READ)
// 0045401f: FISTP dword ptr [0x0066ecf8]
//   XREF to: 0066ecf8 (WRITE)
// 00454025: TEST EBX,EBX
// 00454027: JNZ 0x0045403c
//   XREF to: 0045403c (CONDITIONAL_JUMP)
// 00454029: MOV EAX,[0x0066ecfc]
//   XREF to: 0066ecfc (READ)
// 0045402e: MOV EDX,0x1
// 00454033: MOV [0x013da758],EAX
//   XREF to: 013da758 (WRITE)
// 00454038: TEST EAX,EAX
// 0045403a: JZ 0x00454044
//   XREF to: 00454044 (CONDITIONAL_JUMP)
// 0045403c: MOV dword ptr [0x0066ed00],EDX
//   Label: LAB_0045403c
//   XREF to: 0066ed00 (WRITE)
// 00454042: POP EBX
// 00454043: RET
// 00454044: MOV EAX,[0x013da764]
//   Label: LAB_00454044
//   XREF to: 013da764 (READ)
// 00454049: MOV EDX,0x2
// 0045404e: MOV [0x013da768],EAX
//   XREF to: 013da768 (WRITE)
// 00454053: MOV dword ptr [0x0066ed00],EDX
//   XREF to: 0066ed00 (WRITE)
// 00454059: POP EBX
// 0045405a: RET
