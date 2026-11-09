; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_constrct_cpp_FUN_00446e20(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00446e20
        ;   Label: core_constrct.cpp_FUN_00446e20
    PUSH EDX                            ; 00446e24
    CALL core_charactr.cpp_FUN_0042f240 ; 00446e25
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00446e2a
    RET                                 ; 00446e2d

