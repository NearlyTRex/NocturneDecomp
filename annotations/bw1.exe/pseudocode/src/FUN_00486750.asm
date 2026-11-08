; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00486750(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bef1fc
;   undefined4 DAT_01bef200
;   undefined4 DAT_01bef204
;
; Called Functions:
;   FUN_00486780
;
; *****************************************************************************

section .text

    PUSH 0x1beefbc                      ; 00486750
        ;   Label: FUN_00486750
    CALL FUN_00486780                   ; 00486755
        ;   XREF to: 00486780 (UNCONDITIONAL_CALL)  ; undefined FUN_00486780()
    XOR EDX,EDX                         ; 0048675a
    ADD ESP,0x4                         ; 0048675c
    MOV dword ptr [0x01bef1fc],EDX      ; 0048675f | DAT_01bef1fc
    MOV dword ptr [0x01bef200],EDX      ; 00486765 | DAT_01bef200
    MOV dword ptr [0x01bef204],EDX      ; 0048676b | DAT_01bef204
    RET                                 ; 00486771

