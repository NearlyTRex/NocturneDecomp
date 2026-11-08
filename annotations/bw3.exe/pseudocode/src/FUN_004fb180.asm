; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fb180(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004fa8c0 at 004fa8d4
;
; Referenced Globals:
;   undefined4 DAT_005e2c20
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e2c20                       ; 004fb180 | DAT_005e2c20
        ;   Label: FUN_004fb180
    PUSH 0x2                            ; 004fb185
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fb187
    PUSH EDX                            ; 004fb18b
    CALL FUN_005a3de6                   ; 004fb18c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004fb191
    RET                                 ; 004fb194

