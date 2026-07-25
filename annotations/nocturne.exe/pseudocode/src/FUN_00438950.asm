; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438950(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00438950
        ;   Label: FUN_00438950
    MOV EDX,dword ptr [ESP + 0x8]       ; 00438954
    MOV ECX,dword ptr [ESP + 0xc]       ; 00438958
    FLD float ptr [ECX]                 ; 0043895c
    FMUL float ptr [EDX]                ; 0043895e
    FSTP float ptr [EAX]                ; 00438960
    FLD float ptr [ECX + 0x4]           ; 00438962
    FMUL float ptr [EDX]                ; 00438965
    FSTP float ptr [EAX + 0x4]          ; 00438967
    FLD float ptr [ECX + 0x8]           ; 0043896a
    FMUL float ptr [EDX]                ; 0043896d
    FSTP float ptr [EAX + 0x8]          ; 0043896f
    RET                                 ; 00438972

