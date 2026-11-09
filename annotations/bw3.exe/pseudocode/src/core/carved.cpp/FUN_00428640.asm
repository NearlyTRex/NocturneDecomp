; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00428640(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00428640
        ;   Label: core_carved.cpp_FUN_00428640
    PUSH EDX                            ; 00428644
    CALL core_charactr.cpp_FUN_0042e220 ; 00428645
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042864a
    RET                                 ; 0042864d

