; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hotdemon.cpp_FUN_004f79b0()
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042bc20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f79b0
        ;   Label: core_hotdemon.cpp_FUN_004f79b0
    PUSH EDX                            ; 004f79b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f79b5
    PUSH ECX                            ; 004f79b9
    CALL core_charactr.cpp_CCharacter_FUN_0042bc20 ; 004f79ba
        ;   XREF to: 0042bc20 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042bc20(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f79bf
    RET                                 ; 004f79c2

