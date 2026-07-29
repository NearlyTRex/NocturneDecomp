; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __crtmath crt_math_c_ceil_FUN_00567121(double value)
;
; Parameters:
; double           Stack[0x4]:8   value
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590 at 0051e60c
;   core_trigger.cpp_CTrigger_calculateTestRadius_FUN_00548680 at 005486eb
;   wincore_winrun.cpp_sleep_FUN_00559cc0 at 00559ceb
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00567121
        ;   Label: crt_math.c_ceil_FUN_00567121
    MOV EBP,ESP                         ; 00567122
    SUB ESP,0x8                         ; 00567124
    FLD double ptr [EBP + 0x8]          ; 00567127
    SUB ESP,0x8                         ; 0056712a
    FCHS                                ; 0056712d
    FSTP double ptr [ESP]               ; 0056712f
    CALL crt_math.c_floor_FUN_005648c0  ; 00567132
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [EBP + -0x8],EAX      ; 00567137
    MOV dword ptr [EBP + -0x4],EDX      ; 0056713a
    ADD ESP,0x8                         ; 0056713d
    FLD double ptr [EBP + -0x8]         ; 00567140
    FCHS                                ; 00567143
    FSTP double ptr [EBP + -0x8]        ; 00567145
    MOV EAX,dword ptr [EBP + -0x8]      ; 00567148
    MOV EDX,dword ptr [EBP + -0x4]      ; 0056714b
    MOV ESP,EBP                         ; 0056714e
    POP EBP                             ; 00567150
    RET                                 ; 00567151

