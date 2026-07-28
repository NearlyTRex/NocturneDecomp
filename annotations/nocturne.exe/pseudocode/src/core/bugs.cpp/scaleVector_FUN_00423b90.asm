; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_scaleVector_FUN_00423b90(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423b90
        ;   Label: core_bugs.cpp_scaleVector_FUN_00423b90
    MOV EDX,dword ptr [ESP + 0x8]       ; 00423b94
    FLD float ptr [EDX]                 ; 00423b98
    FMUL float ptr [EAX]                ; 00423b9a
    FSTP float ptr [EAX]                ; 00423b9c
    FLD float ptr [EDX]                 ; 00423b9e
    FMUL float ptr [EAX + 0x4]          ; 00423ba0
    FSTP float ptr [EAX + 0x4]          ; 00423ba3
    FLD float ptr [EDX]                 ; 00423ba6
    FMUL float ptr [EAX + 0x8]          ; 00423ba8
    FSTP float ptr [EAX + 0x8]          ; 00423bab
    RET                                 ; 00423bae

