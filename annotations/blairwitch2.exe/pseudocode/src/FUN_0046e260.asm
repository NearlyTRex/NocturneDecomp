; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046e260(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bd3c40
;   undefined4 DAT_01bd3c44
;   undefined4 DAT_01bd3c48
;
; Called Functions:
;   FUN_0046e290
;
; *****************************************************************************

section .text

    PUSH 0x1bd3a00                      ; 0046e260
        ;   Label: FUN_0046e260
    CALL FUN_0046e290                   ; 0046e265
        ;   XREF to: 0046e290 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e290()
    XOR EDX,EDX                         ; 0046e26a
    ADD ESP,0x4                         ; 0046e26c
    MOV dword ptr [0x01bd3c40],EDX      ; 0046e26f | DAT_01bd3c40
    MOV dword ptr [0x01bd3c44],EDX      ; 0046e275 | DAT_01bd3c44
    MOV dword ptr [0x01bd3c48],EDX      ; 0046e27b | DAT_01bd3c48
    RET                                 ; 0046e281

