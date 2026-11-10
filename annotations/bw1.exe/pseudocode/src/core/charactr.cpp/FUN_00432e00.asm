; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00432e00(int param_1,float param_2)
;
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 at 0042e1e0
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432e00
        ;   Label: core_charactr.cpp_FUN_00432e00
    PUSH ESI                            ; 00432e01
    MOV EBX,dword ptr [ESP + 0xc]       ; 00432e02
    MOV EDX,dword ptr [EBX + 0x2754]    ; 00432e06
    TEST EDX,EDX                        ; 00432e0c
    JGE 0x00432e13                      ; 00432e0e
        ;   XREF to: 00432e13 (CONDITIONAL_JUMP)  ; LAB_00432e13
    POP ESI                             ; 00432e10
        ;   Label: LAB_00432e10
    POP EBX                             ; 00432e11
    RET                                 ; 00432e12
    LEA EAX,[EBX + 0x158]               ; 00432e13
        ;   Label: LAB_00432e13
    LEA ESI,[EDX*0x8 + 0x0]             ; 00432e19
    PUSH EAX                            ; 00432e20
    ADD ESI,EDX                         ; 00432e21
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 00432e23
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00432e28
    SHL ESI,0x5                         ; 00432e2b
    FLD float ptr [ESP + 0x10]          ; 00432e2e
    FMUL float ptr [ESI + EAX*0x1 + 0x1c48] ; 00432e32
    FADD float ptr [EBX + 0x2758]       ; 00432e39
    FSTP float ptr [EBX + 0x2758]       ; 00432e3f
    FILD dword ptr [ESI + EAX*0x1 + 0x1c8c] ; 00432e45
    FCOMP float ptr [EBX + 0x2758]      ; 00432e4c
    FNSTSW AX                           ; 00432e52
    SAHF                                ; 00432e54
    JA 0x00432e10                       ; 00432e55
        ;   XREF to: 00432e10 (CONDITIONAL_JUMP)  ; LAB_00432e10
    CMP dword ptr [EBX + 0x275c],0x1    ; 00432e57
    JZ 0x00432e6d                       ; 00432e5e
        ;   XREF to: 00432e6d (CONDITIONAL_JUMP)  ; LAB_00432e6d
    MOV dword ptr [EBX + 0x2754],0xffffffff ; 00432e60
    POP ESI                             ; 00432e6a
    POP EBX                             ; 00432e6b
    RET                                 ; 00432e6c
    MOV dword ptr [EBX + 0x2758],0x0    ; 00432e6d
        ;   Label: LAB_00432e6d
    POP ESI                             ; 00432e77
    POP EBX                             ; 00432e78
    RET                                 ; 00432e79

