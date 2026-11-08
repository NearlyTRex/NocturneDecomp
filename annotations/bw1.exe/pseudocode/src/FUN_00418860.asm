; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418860(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d0c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00418860
        ;   Label: FUN_00418860
    MOV EDX,dword ptr [ESP + 0x8]       ; 00418862
    PUSH EDX                            ; 00418866
    CALL FUN_0040d0c0                   ; 00418867
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    ADD ESP,0x8                         ; 0041886c
    RET                                 ; 0041886f

