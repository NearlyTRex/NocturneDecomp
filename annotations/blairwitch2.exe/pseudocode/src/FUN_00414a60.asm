; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414a60(int param_1)
;
;
; Called Functions:
;   FUN_00487eb0
;   FUN_00547480
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00414a60
        ;   Label: FUN_00414a60
    ADD EAX,0x2b4                       ; 00414a64
    PUSH EAX                            ; 00414a69
    CALL FUN_00547480                   ; 00414a6a
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 00414a6f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00414a72
    PUSH EDX                            ; 00414a76
    CALL FUN_00487eb0                   ; 00414a77
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487eb0()
    ADD ESP,0x4                         ; 00414a7c
    RET                                 ; 00414a7f

