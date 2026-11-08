; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056bd10(void)
;
;
; Called Functions:
;   FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0056bd10
        ;   Label: FUN_0056bd10
    PUSH 0x41700000                     ; 0056bd13
    PUSH 0x41200000                     ; 0056bd18
    CALL FUN_0040ce40                   ; 0056bd1d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0056bd22
    FLD float ptr [ESP + 0xc]           ; 0056bd26
    ADD ESP,0x8                         ; 0056bd2a
    FSTP float ptr [ESP]                ; 0056bd2d
    MOV EAX,dword ptr [ESP]             ; 0056bd30
    ADD ESP,0x8                         ; 0056bd33
    RET                                 ; 0056bd36

