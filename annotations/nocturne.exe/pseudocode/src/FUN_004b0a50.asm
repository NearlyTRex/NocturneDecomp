; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0a50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ef030
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b0a50
        ;   Label: FUN_004b0a50
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b0a52
    PUSH EDX                            ; 004b0a56
    CALL FUN_004ef030                   ; 004b0a57
        ;   XREF to: 004ef030 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef030()
    ADD ESP,0x8                         ; 004b0a5c
    RET                                 ; 004b0a5f

