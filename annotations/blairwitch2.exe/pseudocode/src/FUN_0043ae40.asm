; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043ae40(void)
;
;
; Called Functions:
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0043ae40
        ;   Label: FUN_0043ae40
    PUSH 0x41700000                     ; 0043ae43
    PUSH 0x41200000                     ; 0043ae48
    CALL FUN_0040cf60                   ; 0043ae4d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xc],EAX       ; 0043ae52
    FLD float ptr [ESP + 0xc]           ; 0043ae56
    ADD ESP,0x8                         ; 0043ae5a
    FSTP float ptr [ESP]                ; 0043ae5d
    MOV EAX,dword ptr [ESP]             ; 0043ae60
    ADD ESP,0x8                         ; 0043ae63
    RET                                 ; 0043ae66

