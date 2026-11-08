; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053d550(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e7d5b4
;
; Called Functions:
;   FUN_0053c5c0
;   FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1e7d420                      ; 0053d550
        ;   Label: FUN_0053d550
    CALL FUN_0053c5c0                   ; 0053d555
        ;   XREF to: 0053c5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053c5c0()
    ADD ESP,0x4                         ; 0053d55a
    MOV EDX,0x604aa4                    ; 0053d55d
    PUSH 0x622a5c                       ; 0053d562
    MOV dword ptr [0x01e7d5b4],EDX      ; 0053d567 | DAT_01e7d5b4
    CALL FUN_005c1093                   ; 0053d56d
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1093()
    ADD ESP,0x4                         ; 0053d572
    RET                                 ; 0053d575

