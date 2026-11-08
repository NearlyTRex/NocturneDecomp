; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00538530(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005380c0 at 00538113
;
; Called Functions:
;   FUN_00538480
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00538530
        ;   Label: FUN_00538530
    MOV EDX,dword ptr [ESP + 0x8]       ; 00538534
    PUSH EDX                            ; 00538538
    PUSH EAX                            ; 00538539
    PUSH EAX                            ; 0053853a
    CALL FUN_00538480                   ; 0053853b
        ;   XREF to: 00538480 (UNCONDITIONAL_CALL)  ; undefined FUN_00538480()
    ADD ESP,0xc                         ; 00538540
    RET                                 ; 00538543

