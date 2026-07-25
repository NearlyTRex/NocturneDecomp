; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b4d0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b4d0
        ;   Label: FUN_0042b4d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b4d4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042b4d8
    FLD float ptr [EDX]                 ; 0042b4dc
    FDIV float ptr [ECX]                ; 0042b4de
    FSTP float ptr [EAX]                ; 0042b4e0
    FLD float ptr [EDX + 0x4]           ; 0042b4e2
    FDIV float ptr [ECX]                ; 0042b4e5
    FSTP float ptr [EAX + 0x4]          ; 0042b4e7
    FLD float ptr [EDX + 0x8]           ; 0042b4ea
    FDIV float ptr [ECX]                ; 0042b4ed
    FSTP float ptr [EAX + 0x8]          ; 0042b4ef
    RET                                 ; 0042b4f2

