; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004eab50(int param_1)
;
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004eab50
        ;   Label: FUN_004eab50
    MOV EAX,dword ptr [ESP + 0xc]       ; 004eab53
    PUSH dword ptr [EAX + 0x6dc]        ; 004eab57
    PUSH dword ptr [EAX + 0x6d8]        ; 004eab5d
    CALL FUN_0040cf60                   ; 004eab63
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 004eab68
    FLD float ptr [ESP + 0xc]           ; 004eab6c
    ADD ESP,0x8                         ; 004eab70
    FSTP float ptr [ESP]                ; 004eab73
    MOV EAX,dword ptr [ESP]             ; 004eab76
    ADD ESP,0x8                         ; 004eab79
    LEA EAX,[EAX]                       ; 004eab7c
    RET                                 ; 004eab80
        ;   Label: LAB_004eab80

