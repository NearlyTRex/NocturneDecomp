; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041a4f0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0059aa00
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59aa00                       ; 0041a4f0 | DAT_0059aa00
        ;   Label: FUN_0041a4f0
    PUSH 0x14                           ; 0041a4f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041a4f7
    PUSH EDX                            ; 0041a4fb
    CALL FUN_0056494f                   ; 0041a4fc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0041a501
    RET                                 ; 0041a504

