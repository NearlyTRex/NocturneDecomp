; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4430(int param_1)
;
;
; XREF[9]:
;   FUN_004b7f90 at 004b8333
;   FUN_004bec20 at 004bf1ef
;   FUN_004bf4b0 at 004bf9bb
;   FUN_004c02a0 at 004c0393
;   FUN_004e85a0 at 004e85ba
;   FUN_004e8f80 at 004e8f9f
;   FUN_004e94f0 at 004e950f
;   FUN_004ea280 at 004ea2a4
;   FUN_004ea4d0 at 004ea598
;
; Called Functions:
;   FUN_005806a0
;
; *****************************************************************************

section .text

    CALL FUN_005806a0                   ; 004b4430
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
        ;   Label: FUN_004b4430
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b4435
    MOV dword ptr [EDX + 0x30c],EAX     ; 004b4439
    RET                                 ; 004b443f

