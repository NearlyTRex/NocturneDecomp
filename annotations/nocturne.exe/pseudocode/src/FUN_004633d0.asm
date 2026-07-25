; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004633d0(void)
;
;
; Referenced Globals:
;   undefined4 SUB_00463400
;   undefined4 DAT_01b7b728
;   undefined4 DAT_01b7b72c
;   undefined4 DAT_01b7b730
;
; *****************************************************************************

section .text

    PUSH 0x1b7b4e8                      ; 004633d0
        ;   Label: FUN_004633d0
    CALL 0x00463400                     ; 004633d5
        ;   XREF to: 00463400 (UNCONDITIONAL_CALL)  ; SUB_00463400
    XOR EDX,EDX                         ; 004633da
    ADD ESP,0x4                         ; 004633dc
    MOV dword ptr [0x01b7b728],EDX      ; 004633df | DAT_01b7b728
    MOV dword ptr [0x01b7b72c],EDX      ; 004633e5 | DAT_01b7b72c
    MOV dword ptr [0x01b7b730],EDX      ; 004633eb | DAT_01b7b730
    RET                                 ; 004633f1

