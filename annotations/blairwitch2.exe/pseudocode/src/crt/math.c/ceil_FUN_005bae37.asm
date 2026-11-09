; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __crtmath crt_math_c_ceil_FUN_005bae37(double value)
;
; Parameters:
; double           Stack[0x4]:8   value
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   core_skeleton.cpp_FUN_00547e10 at 00547e8f
;   core_trigger.cpp_FUN_00578650 at 005786f0
;   wincore_winrun.cpp_sleep_FUN_0058fd90 at 0058fdbb
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bae37
        ;   Label: crt_math.c_ceil_FUN_005bae37
    MOV EBP,ESP                         ; 005bae38
    SUB ESP,0x8                         ; 005bae3a
    FLD double ptr [EBP + 0x8]          ; 005bae3d
    SUB ESP,0x8                         ; 005bae40
    FCHS                                ; 005bae43
    FSTP double ptr [ESP]               ; 005bae45
    CALL crt_math.c_floor_FUN_005b84d0  ; 005bae48
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [EBP + -0x8],EAX      ; 005bae4d
    MOV dword ptr [EBP + -0x4],EDX      ; 005bae50
    ADD ESP,0x8                         ; 005bae53
    FLD double ptr [EBP + -0x8]         ; 005bae56
    FCHS                                ; 005bae59
    FSTP double ptr [EBP + -0x8]        ; 005bae5b
    MOV EAX,dword ptr [EBP + -0x8]      ; 005bae5e
    MOV EDX,dword ptr [EBP + -0x4]      ; 005bae61
    MOV ESP,EBP                         ; 005bae64
    POP EBP                             ; 005bae66
    RET                                 ; 005bae67

