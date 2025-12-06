; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_conveyor.cpp_FUN_004422f0()
;
;
; Called Functions:
;   core_platfrm.cpp_FUN_0054f2a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004422f0
        ;   Label: core_conveyor.cpp_FUN_004422f0
    PUSH EDX                            ; 004422f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004422f5
    PUSH ECX                            ; 004422f9
    CALL core_platfrm.cpp_FUN_0054f2a0  ; 004422fa | undefined core_platfrm.cpp_FUN_0054f2a0()
        ;   XREF to: 0054f2a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004422ff
    RET                                 ; 00442302

