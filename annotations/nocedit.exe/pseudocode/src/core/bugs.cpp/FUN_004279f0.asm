; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_004279f0()
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004279f0
        ;   Label: core_bugs.cpp_FUN_004279f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004279f4
    FLD float ptr [EDX]                 ; 004279f8
    FSUBR float ptr [EAX]               ; 004279fa
    FSTP float ptr [EAX]                ; 004279fc
    FLD float ptr [EDX + 0x4]           ; 004279fe
    FSUBR float ptr [EAX + 0x4]         ; 00427a01
    FSTP float ptr [EAX + 0x4]          ; 00427a04
    FLD float ptr [EDX + 0x8]           ; 00427a07
    FSUBR float ptr [EAX + 0x8]         ; 00427a0a
    FSTP float ptr [EAX + 0x8]          ; 00427a0d
    RET                                 ; 00427a10

