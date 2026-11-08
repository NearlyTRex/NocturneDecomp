; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0048b5a0(void)
;
;
; Called Functions:
;   FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0048b5a0
        ;   Label: FUN_0048b5a0
    PUSH 0x41c80000                     ; 0048b5a3
    PUSH 0x41200000                     ; 0048b5a8
    CALL FUN_0040ce40                   ; 0048b5ad
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0048b5b2
    FLD float ptr [ESP + 0xc]           ; 0048b5b6
    ADD ESP,0x8                         ; 0048b5ba
    FSTP float ptr [ESP]                ; 0048b5bd
    MOV EAX,dword ptr [ESP]             ; 0048b5c0
    ADD ESP,0x8                         ; 0048b5c3
    RET                                 ; 0048b5c6

