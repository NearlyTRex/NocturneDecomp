; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041cbe0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0041a6c0 at 0041a6cc
;
; Referenced Globals:
;   undefined4 DAT_0059aa60
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59aa60                       ; 0041cbe0 | DAT_0059aa60
        ;   Label: FUN_0041cbe0
    PUSH 0x8                            ; 0041cbe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041cbe7
    PUSH EDX                            ; 0041cbeb
    CALL FUN_0056494f                   ; 0041cbec
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0041cbf1
    RET                                 ; 0041cbf4

