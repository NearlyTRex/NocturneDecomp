; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_icepick_cpp_FUN_004bb4d0(undefined4 param_1)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bb4d0
        ;   Label: core_icepick.cpp_FUN_004bb4d0
    PUSH EDX                            ; 004bb4d4
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 004bb4d5
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440()
    ADD ESP,0x4                         ; 004bb4da
    RET                                 ; 004bb4dd

