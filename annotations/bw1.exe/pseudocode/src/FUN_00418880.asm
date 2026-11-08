; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00418880(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040d0c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00418880
        ;   Label: FUN_00418880
    MOV EDX,dword ptr [ESP + 0x8]       ; 00418882
    PUSH EDX                            ; 00418886
    CALL FUN_0040d0c0                   ; 00418887
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    ADD ESP,0x8                         ; 0041888c
    RET                                 ; 0041888f

