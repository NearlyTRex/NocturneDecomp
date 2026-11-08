; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ea360(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0046af90 at 0046afa0
;   FUN_0046afb0 at 0046affa
;
; Referenced Globals:
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b7c
;   undefined4 DAT_01c38b80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ea360
        ;   Label: FUN_004ea360
    MOV [0x01c38b78],EAX                ; 004ea364 | DAT_01c38b78
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ea369
    MOV [0x01c38b7c],EAX                ; 004ea36d | DAT_01c38b7c
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ea372
    MOV [0x01c38b80],EAX                ; 004ea376 | DAT_01c38b80
    RET                                 ; 004ea37b

