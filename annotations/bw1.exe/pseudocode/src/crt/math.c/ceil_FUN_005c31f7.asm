; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __crtmath crt_math_c_ceil_FUN_005c31f7(double value)
;
; Parameters:
; double           Stack[0x4]:8   value
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0056a4b0 at 0056a52f
;   core_trigger.cpp_FUN_0059bee0 at 0059bf80
;   wincore_winrun.cpp_sleep_FUN_005b3860 at 005b388b
;
; Called Functions:
;   crt_math.c_floor_FUN_005c0880
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c31f7
        ;   Label: crt_math.c_ceil_FUN_005c31f7
    MOV EBP,ESP                         ; 005c31f8
    SUB ESP,0x8                         ; 005c31fa
    FLD double ptr [EBP + 0x8]          ; 005c31fd
    SUB ESP,0x8                         ; 005c3200
    FCHS                                ; 005c3203
    FSTP double ptr [ESP]               ; 005c3205
    CALL crt_math.c_floor_FUN_005c0880  ; 005c3208
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [EBP + -0x8],EAX      ; 005c320d
    MOV dword ptr [EBP + -0x4],EDX      ; 005c3210
    ADD ESP,0x8                         ; 005c3213
    FLD double ptr [EBP + -0x8]         ; 005c3216
    FCHS                                ; 005c3219
    FSTP double ptr [EBP + -0x8]        ; 005c321b
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c321e
    MOV EDX,dword ptr [EBP + -0x4]      ; 005c3221
    MOV ESP,EBP                         ; 005c3224
    POP EBP                             ; 005c3226
    RET                                 ; 005c3227

