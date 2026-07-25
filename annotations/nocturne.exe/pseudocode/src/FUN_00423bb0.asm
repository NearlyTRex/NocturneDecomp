; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00423bb0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423bb0
        ;   Label: FUN_00423bb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00423bb4
    FLD float ptr [EDX]                 ; 00423bb8
    FSUBR float ptr [EAX]               ; 00423bba
    FSTP float ptr [EAX]                ; 00423bbc
    FLD float ptr [EDX + 0x4]           ; 00423bbe
    FSUBR float ptr [EAX + 0x4]         ; 00423bc1
    FSTP float ptr [EAX + 0x4]          ; 00423bc4
    FLD float ptr [EDX + 0x8]           ; 00423bc7
    FSUBR float ptr [EAX + 0x8]         ; 00423bca
    FSTP float ptr [EAX + 0x8]          ; 00423bcd
    RET                                 ; 00423bd0

