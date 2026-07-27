; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_gabriela_cpp_CGabriella_tryThrowObject_FUN_00498bd0(int param_1)
;
;
; XREF[1]:
;   core_gabriela.cpp_FUN_00495a20 at 00496732
;
; Called Functions:
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00498bd0
        ;   Label: core_gabriela.cpp_CGabriella_tryThrowObject_FUN_00498bd0
    MOV EDX,dword ptr [EAX + 0x24ac]    ; 00498bd4
    MOV dword ptr [EAX + 0x1fa08],0x0   ; 00498bda
    TEST EDX,EDX                        ; 00498be4
    JNZ 0x00498beb                      ; 00498be6
        ;   XREF to: 00498beb (CONDITIONAL_JUMP)  ; LAB_00498beb
    XOR EAX,EAX                         ; 00498be8
    RET                                 ; 00498bea
    PUSH 0x1                            ; 00498beb
        ;   Label: LAB_00498beb
    PUSH 0x5                            ; 00498bed
    ADD EAX,0x150                       ; 00498bef
    PUSH EAX                            ; 00498bf4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00498bf5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    MOV EAX,0x1                         ; 00498bfa
    ADD ESP,0xc                         ; 00498bff
    RET                                 ; 00498c02

