; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005695b0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0056a9c0 at 0056a9c8
;
; Called Functions:
;   FUN_005695c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005695b0
        ;   Label: FUN_005695b0
    PUSH EDX                            ; 005695b4
    CALL FUN_005695c0                   ; 005695b5
        ;   XREF to: 005695c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005695c0()
    ADD ESP,0x4                         ; 005695ba
    RET                                 ; 005695bd

