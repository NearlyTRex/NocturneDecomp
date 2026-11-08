; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf210(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cf210
        ;   Label: FUN_004cf210
    PUSH EDX                            ; 004cf214
    CALL FUN_00509e10                   ; 004cf215
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004cf21a
    MOV dword ptr [EAX + 0x3c],0x5e0e44 ; 004cf21d
    RET                                 ; 004cf224

