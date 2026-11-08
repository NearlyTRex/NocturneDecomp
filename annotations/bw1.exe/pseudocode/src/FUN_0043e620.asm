; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043e620(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_00441cc0 at 00441d50
;   FUN_00441d70 at 00441d8e
;   FUN_004cb760 at 004cb775
;   FUN_0050f1b0 at 0050f209
;   FUN_00594680 at 00594695
;   FUN_005a7420 at 005a7449
;
; Called Functions:
;   FUN_0043e6a0
;   FUN_00466880
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043e620
        ;   Label: FUN_0043e620
    PUSH EDX                            ; 0043e624
    CALL FUN_0043e6a0                   ; 0043e625
        ;   XREF to: 0043e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e6a0()
    ADD ESP,0x4                         ; 0043e62a
    PUSH 0x1                            ; 0043e62d
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043e62f
    PUSH ECX                            ; 0043e633
    CALL FUN_00466880                   ; 0043e634
        ;   XREF to: 00466880 (UNCONDITIONAL_CALL)  ; undefined FUN_00466880()
    ADD ESP,0x8                         ; 0043e639
    RET                                 ; 0043e63c

