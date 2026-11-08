; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00576100(void)
;
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00576100
        ;   Label: FUN_00576100
    PUSH 0x41700000                     ; 00576103
    PUSH 0x41200000                     ; 00576108
    CALL FUN_0040cf60                   ; 0057610d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 00576112
    FLD float ptr [ESP + 0xc]           ; 00576116
    ADD ESP,0x8                         ; 0057611a
    FSTP float ptr [ESP]                ; 0057611d
    MOV EAX,dword ptr [ESP]             ; 00576120
    ADD ESP,0x8                         ; 00576123
    RET                                 ; 00576126

