; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_smiley.cpp_FUN_005a37f0()
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005a37f0
        ;   Label: core_smiley.cpp_FUN_005a37f0
    PUSH EDX                            ; 005a37f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a37f5
    PUSH ECX                            ; 005a37f9
    CALL core_charactr.cpp_CCharacter_FUN_0042bc20 ; 005a37fa | int core_charactr.cpp_CCharacter_FUN_0042bc20(CCharacter * this_ptr)
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a37ff
    RET                                 ; 005a3802

