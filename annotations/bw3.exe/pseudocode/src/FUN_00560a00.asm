; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00560a00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[4]:
;   FUN_00408c80 at 00408c96
;   FUN_004298f0 at 0042a1d4
;   FUN_0050e700 at 0050ec31
;   FUN_0055ff40 at 0056052a
;
; Called Functions:
;   FUN_0055f020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560a00
        ;   Label: FUN_00560a00
    PUSH 0x0                            ; 00560a01
    MOV EDX,dword ptr [ESP + 0x18]      ; 00560a03
    PUSH EDX                            ; 00560a07
    PUSH 0x0                            ; 00560a08
    PUSH 0x0                            ; 00560a0a
    MOV ECX,dword ptr [ESP + 0x20]      ; 00560a0c
    PUSH 0x0                            ; 00560a10
    PUSH ECX                            ; 00560a12
    MOV EBX,dword ptr [ESP + 0x24]      ; 00560a13
    PUSH EBX                            ; 00560a17
    CALL FUN_0055f020                   ; 00560a18
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f020()
    ADD ESP,0x1c                        ; 00560a1d
    POP EBX                             ; 00560a20
    RET                                 ; 00560a21

