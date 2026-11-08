; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050fd90(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_0050f910 at 0050f974
;   FUN_0050f990 at 0050f9d1
;   FUN_00510160 at 005101f4
;
; Called Functions:
;   FUN_0050fce0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050fd90
        ;   Label: FUN_0050fd90
    PUSH EAX                            ; 0050fd94
    PUSH EAX                            ; 0050fd95
    CALL FUN_0050fce0                   ; 0050fd96
        ;   XREF to: 0050fce0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fce0()
    ADD ESP,0x8                         ; 0050fd9b
    RET                                 ; 0050fd9e

