; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_constrct_cpp_FUN_00443c90(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443c90
        ;   Label: core_constrct.cpp_FUN_00443c90
    PUSH EDX                            ; 00443c94
    CALL core_charactr.cpp_FUN_0042e220 ; 00443c95
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00443c9a
    RET                                 ; 00443c9d

