; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_0042b3b0(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b3b0
        ;   Label: core_carved.cpp_FUN_0042b3b0
    PUSH EDX                            ; 0042b3b4
    CALL core_charactr.cpp_FUN_0042f240 ; 0042b3b5
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042b3ba
    RET                                 ; 0042b3bd

