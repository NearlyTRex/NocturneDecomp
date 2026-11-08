; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504e10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00504f10 at 00504fd6
;
; Called Functions:
;   FUN_00504d30
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00504e10
        ;   Label: FUN_00504e10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00504e12
    PUSH EDX                            ; 00504e16
    CALL FUN_00504d30                   ; 00504e17
        ;   XREF to: 00504d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00504d30()
    ADD ESP,0x8                         ; 00504e1c
    RET                                 ; 00504e1f

