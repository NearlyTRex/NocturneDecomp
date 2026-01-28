; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00453fc0 (CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration, float decay_time)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   peak_intensity
; float            Stack[0xc]:4   attack_time
; float            Stack[0x10]:4   sustain_duration
; float            Stack[0x14]:4   decay_time
;
; XREF[1]:
;   core_set.cpp_CDemonSet_FUN_00570fa0 at 00570fb5
;
; Referenced Globals:
;   double DOUBLE_0061a4ca = 65536
;   int g_CameraShakePeakValue = 0x10000
;   int g_CameraShakeSustainValue = 0xc80000
;   int g_CameraShakeState = 0x3
;   int g_CameraShakeSustainTimer
;   int g_CameraShakeAttackTime
;   int g_CameraShakeAttackAccum
;   int g_CameraShakeDecayDuration
;   int g_CameraShakeDecayTimer
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453fc0
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00453fc0
    FLD double ptr [0x0061a4ca]         ; 00453fc1 | DOUBLE_0061a4ca
    FLD float ptr [ESP + 0xc]           ; 00453fc7
    FMUL ST1                            ; 00453fcb
    FLD float ptr [ESP + 0x14]          ; 00453fcd
    FMUL ST2                            ; 00453fd1
    FLD float ptr [ESP + 0x10]          ; 00453fd3
    FMUL ST3                            ; 00453fd7
    FLD float ptr [ESP + 0x18]          ; 00453fd9
    XOR EDX,EDX                         ; 00453fdd
    FMULP ST4                           ; 00453fdf
    MOV dword ptr [0x013da760],EDX      ; 00453fe1 | g_CameraShakeAttackAccum
    FXCH ST2                            ; 00453fe7
    CALL crt_math.c_round_FUN_005fe6b0  ; 00453fe9
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00453fee
    CALL crt_math.c_round_FUN_005fe6b0  ; 00453ff0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00453ff5
    CALL crt_math.c_round_FUN_005fe6b0  ; 00453ff7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 00453ffc
    CALL crt_math.c_round_FUN_005fe6b0  ; 00453ffe
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00454003
    FISTP dword ptr [0x0066ecfc]        ; 00454005 | g_CameraShakeSustainValue
    FXCH ST2                            ; 0045400b
    FISTP dword ptr [0x013da75c]        ; 0045400d | g_CameraShakeAttackTime
    FISTP dword ptr [0x013da764]        ; 00454013 | g_CameraShakeDecayDuration
    MOV EBX,dword ptr [0x013da75c]      ; 00454019 | g_CameraShakeAttackTime
    FISTP dword ptr [0x0066ecf8]        ; 0045401f | g_CameraShakePeakValue
    TEST EBX,EBX                        ; 00454025
    JNZ 0x0045403c                      ; 00454027
        ;   XREF to: 0045403c (CONDITIONAL_JUMP)  ; LAB_0045403c
    MOV EAX,[0x0066ecfc]                ; 00454029 | g_CameraShakeSustainValue
    MOV EDX,0x1                         ; 0045402e
    MOV [0x013da758],EAX                ; 00454033 | g_CameraShakeSustainTimer
    TEST EAX,EAX                        ; 00454038
    JZ 0x00454044                       ; 0045403a
        ;   XREF to: 00454044 (CONDITIONAL_JUMP)  ; LAB_00454044
    MOV dword ptr [0x0066ed00],EDX      ; 0045403c | g_CameraShakeState
        ;   Label: LAB_0045403c
    POP EBX                             ; 00454042
    RET                                 ; 00454043
    MOV EAX,[0x013da764]                ; 00454044 | g_CameraShakeDecayDuration
        ;   Label: LAB_00454044
    MOV EDX,0x2                         ; 00454049
    MOV [0x013da768],EAX                ; 0045404e | g_CameraShakeDecayTimer
    MOV dword ptr [0x0066ed00],EDX      ; 00454053 | g_CameraShakeState
    POP EBX                             ; 00454059
    RET                                 ; 0045405a

