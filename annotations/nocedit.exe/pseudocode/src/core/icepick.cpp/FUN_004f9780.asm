; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_icepick.cpp_FUN_004f9780()
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f9780
        ;   Label: core_icepick.cpp_FUN_004f9780
    PUSH EDX                            ; 004f9784
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f9785
    PUSH ECX                            ; 004f9789
    CALL core_charactr.cpp_CCharacter_FUN_0042f8a0 ; 004f978a | void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004f978f
    RET                                 ; 004f9792

