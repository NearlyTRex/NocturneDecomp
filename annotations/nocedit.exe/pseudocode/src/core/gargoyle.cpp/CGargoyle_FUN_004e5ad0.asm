; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gargoyle.cpp_CGargoyle_FUN_004e5ad0()
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004e5ad0
        ;   Label: core_gargoyle.cpp_CGargoyle_FUN_004e5ad0
    PUSH EDX                            ; 004e5ad4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004e5ad5
    PUSH ECX                            ; 004e5ad9
    CALL core_charactr.cpp_CCharacter_FUN_0042bc20 ; 004e5ada | int core_charactr.cpp_CCharacter_FUN_0042bc20(CCharacter * this_ptr)
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e5adf
    RET                                 ; 004e5ae2

