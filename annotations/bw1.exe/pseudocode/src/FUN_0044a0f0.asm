; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044a0f0(void)
;
;
; Called Functions:
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0044a0f0
        ;   Label: FUN_0044a0f0
    PUSH 0x41700000                     ; 0044a0f3
    PUSH 0x41200000                     ; 0044a0f8
    CALL FUN_0040cc00                   ; 0044a0fd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0xc],EAX       ; 0044a102
    FLD float ptr [ESP + 0xc]           ; 0044a106
    ADD ESP,0x8                         ; 0044a10a
    FSTP float ptr [ESP]                ; 0044a10d
    MOV EAX,dword ptr [ESP]             ; 0044a110
    ADD ESP,0x8                         ; 0044a113
    RET                                 ; 0044a116

