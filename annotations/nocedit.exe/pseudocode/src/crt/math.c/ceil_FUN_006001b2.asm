; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __softfp_double crt_math_c_ceil_FUN_006001b2(double value)
;
; Parameters:
; double           Stack[0x4]:8   value
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[5]:
;   core_msnedit.cpp_FUN_00536e20 at 00537096
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10 at 005a0d8c
;   core_trigger.cpp_CTrigger_FUN_005e0ba0 at 005e0c0b
;   shape_design.c_sampleAndFilterPixel_FUN_0046ae20 at 0046aee1
;   wincore_winrun.cpp_sleep_FUN_005f40e0 at 005f410b
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 006001b2
        ;   Label: crt_math.c_ceil_FUN_006001b2
    MOV EBP,ESP                         ; 006001b3
    SUB ESP,0x8                         ; 006001b5
    FLD double ptr [EBP + 0x8]          ; 006001b8
    SUB ESP,0x8                         ; 006001bb
    FCHS                                ; 006001be
    FSTP double ptr [ESP]               ; 006001c0
    CALL crt_math.c_floor_FUN_005feb90  ; 006001c3
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x8],EAX      ; 006001c8
    MOV dword ptr [EBP + -0x4],EDX      ; 006001cb
    ADD ESP,0x8                         ; 006001ce
    FLD double ptr [EBP + -0x8]         ; 006001d1
    FCHS                                ; 006001d4
    FSTP double ptr [EBP + -0x8]        ; 006001d6
    MOV EAX,dword ptr [EBP + -0x8]      ; 006001d9
    MOV EDX,dword ptr [EBP + -0x4]      ; 006001dc
    MOV ESP,EBP                         ; 006001df
    POP EBP                             ; 006001e1
    RET                                 ; 006001e2

