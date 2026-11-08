; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050aed0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d62e48
;   undefined4 DAT_01d62e4c
;
; Called Functions:
;   FUN_0050b290
;   FUN_005b7f5f
;   FUN_005b8d8c
;
; *****************************************************************************

section .text

    PUSH 0x1d34cb0                      ; 0050aed0
        ;   Label: FUN_0050aed0
    CALL FUN_0050b290                   ; 0050aed5
        ;   XREF to: 0050b290 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b290()
    ADD ESP,0x4                         ; 0050aeda
    PUSH 0x61b110                       ; 0050aedd
    CALL FUN_005b8d8c                   ; 0050aee2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 0050aee7
    PUSH 0x5fa680                       ; 0050aeea
    PUSH 0x190                          ; 0050aeef
    PUSH 0x1d34e50                      ; 0050aef4
    CALL FUN_005b7f5f                   ; 0050aef9
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    MOV EDX,0x405                       ; 0050aefe
    ADD ESP,0xc                         ; 0050af03
    XOR AH,AH                           ; 0050af06
    MOV dword ptr [0x01d62e48],EDX      ; 0050af08 | DAT_01d62e48
    MOV byte ptr [0x01d62e4c],AH        ; 0050af0e | DAT_01d62e4c
    RET                                 ; 0050af14

