; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005409a0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005409a0
        ;   Label: FUN_005409a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005409a4
    FLD float ptr [EDX]                 ; 005409a8
    FDIVR float ptr [EAX]               ; 005409aa
    FSTP float ptr [EAX]                ; 005409ac
    FLD float ptr [EDX]                 ; 005409ae
    FDIVR float ptr [EAX + 0x4]         ; 005409b0
    FSTP float ptr [EAX + 0x4]          ; 005409b3
    FLD float ptr [EDX]                 ; 005409b6
    FDIVR float ptr [EAX + 0x8]         ; 005409b8
    FSTP float ptr [EAX + 0x8]          ; 005409bb
    RET                                 ; 005409be

