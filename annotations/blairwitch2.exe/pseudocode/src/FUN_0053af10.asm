; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053af10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0053bcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053af10
        ;   Label: FUN_0053af10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053af11
    PUSH EBX                            ; 0053af15
    CALL FUN_0053bcb0                   ; 0053af16
        ;   XREF to: 0053bcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053bcb0()
    ADD ESP,0x4                         ; 0053af1b
    MOV EAX,EBX                         ; 0053af1e
    POP EBX                             ; 0053af20
    RET                                 ; 0053af21

