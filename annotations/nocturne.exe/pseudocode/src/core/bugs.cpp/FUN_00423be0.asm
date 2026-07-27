; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_bugs_cpp_FUN_00423be0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423be0
        ;   Label: core_bugs.cpp_FUN_00423be0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00423be4
    MOV EDX,dword ptr [ESP + 0xc]       ; 00423be8
    FLD float ptr [EAX + 0x4]           ; 00423bec
    FMUL float ptr [EDX + 0x8]          ; 00423bef
    FLD float ptr [EAX + 0x8]           ; 00423bf2
    FMUL float ptr [EDX + 0x4]          ; 00423bf5
    FSUBP                               ; 00423bf8
    FSTP float ptr [ECX]                ; 00423bfa
    FLD float ptr [EAX + 0x8]           ; 00423bfc
    FMUL float ptr [EDX]                ; 00423bff
    FLD float ptr [EAX]                 ; 00423c01
    FMUL float ptr [EDX + 0x8]          ; 00423c03
    FSUBP                               ; 00423c06
    FSTP float ptr [ECX + 0x4]          ; 00423c08
    FLD float ptr [EAX]                 ; 00423c0b
    FMUL float ptr [EDX + 0x4]          ; 00423c0d
    FLD float ptr [EAX + 0x4]           ; 00423c10
    FMUL float ptr [EDX]                ; 00423c13
    FSUBP                               ; 00423c15
    MOV EAX,ECX                         ; 00423c17
    FSTP float ptr [ECX + 0x8]          ; 00423c19
    RET                                 ; 00423c1c

