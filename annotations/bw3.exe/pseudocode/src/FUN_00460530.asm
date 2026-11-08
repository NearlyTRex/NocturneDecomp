; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00460530(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0043c280 at 0043c294
;   FUN_004f9450 at 004f9467
;
; Called Functions:
;   FUN_00460e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460530
        ;   Label: FUN_00460530
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460531
    PUSH EBX                            ; 00460535
    CALL FUN_00460e10                   ; 00460536
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 0046053b
    MOV EAX,EBX                         ; 0046053e
    POP EBX                             ; 00460540
    RET                                 ; 00460541

