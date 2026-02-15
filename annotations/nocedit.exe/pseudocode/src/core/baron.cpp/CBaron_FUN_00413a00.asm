; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_FUN_00413a00(CBaron *this_ptr,float param_2)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   param_2
;
; XREF[1]:
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 00412fba
;
; Called Functions:
;   core_baron.cpp_CBaron_FUN_004136b0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413a00
        ;   Label: core_baron.cpp_CBaron_FUN_00413a00
    PUSH ESI                            ; 00413a01
    PUSH EBP                            ; 00413a02
    MOV EBP,ESP                         ; 00413a03
    AND ESP,0xfffffff8                  ; 00413a05
    MOV EBX,dword ptr [EBP + 0x10]      ; 00413a08
    LEA ESI,[EBX + 0x158]               ; 00413a0b
    LEA EAX,[EBP + 0x14]                ; 00413a11
        ;   Label: LAB_00413a11
    PUSH EAX                            ; 00413a14
    PUSH ESI                            ; 00413a15
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00413a16
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 00413a1b
    CMP EAX,0x64                        ; 00413a1e
    JNC 0x00413a60                      ; 00413a21
        ;   XREF to: 00413a60 (CONDITIONAL_JUMP)  ; LAB_00413a60
    FLD float ptr [EBP + 0x14]          ; 00413a23
        ;   Label: LAB_00413a23
    FLDZ                                ; 00413a26
    FCOMPP                              ; 00413a28
    FNSTSW AX                           ; 00413a2a
    SAHF                                ; 00413a2c
    JC 0x00413a11                       ; 00413a2d
        ;   XREF to: 00413a11 (CONDITIONAL_JUMP)  ; LAB_00413a11
    MOV ESP,EBP                         ; 00413a2f
    POP EBP                             ; 00413a31
    POP ESI                             ; 00413a32
    POP EBX                             ; 00413a33
    RET                                 ; 00413a34
    PUSH EBX                            ; 00413a35
        ;   Label: LAB_00413a35
    CALL core_baron.cpp_CBaron_FUN_004136b0 ; 00413a36
        ;   XREF to: 004136b0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_FUN_004136b0(CBaron * this_ptr)
    ADD ESP,0x4                         ; 00413a3b
    JMP 0x00413a23                      ; 00413a3e
        ;   XREF to: 00413a23 (UNCONDITIONAL_JUMP)  ; LAB_00413a23
    MOV dword ptr [EBX + 0x1fccc],0x0   ; 00413a40
        ;   Label: LAB_00413a40
    MOV dword ptr [EBX + 0x1fcd0],0x0   ; 00413a4a
    MOV dword ptr [EBX + 0x1fcac],0x0   ; 00413a54
    JMP 0x00413a23                      ; 00413a5e
        ;   XREF to: 00413a23 (UNCONDITIONAL_JUMP)  ; LAB_00413a23
    JBE 0x00413a35                      ; 00413a60
        ;   XREF to: 00413a35 (CONDITIONAL_JUMP)  ; LAB_00413a35
        ;   Label: LAB_00413a60
    CMP EAX,0x6e                        ; 00413a62
    JZ 0x00413a40                       ; 00413a65
        ;   XREF to: 00413a40 (CONDITIONAL_JUMP)  ; LAB_00413a40
    JMP 0x00413a23                      ; 00413a67
        ;   XREF to: 00413a23 (UNCONDITIONAL_JUMP)  ; LAB_00413a23

