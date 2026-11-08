; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00479320(int param_1)
;
;
; XREF[5]:
;   FUN_00499ed0 at 0049a009
;   FUN_0049a0d0 at 0049a1fc
;   FUN_0049a300 at 0049a358
;   FUN_0049a480 at 0049a53f
;   FUN_0053d580 at 0053d5b0
;
; Called Functions:
;   FUN_004794a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479320
        ;   Label: FUN_00479320
    MOV EBX,dword ptr [ESP + 0x8]       ; 00479321
    PUSH EBX                            ; 00479325
    MOV dword ptr [EBX + 0x10c],0x0     ; 00479326
    CALL FUN_004794a0                   ; 00479330
        ;   XREF to: 004794a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004794a0()
    ADD ESP,0x4                         ; 00479335
    MOV EAX,EBX                         ; 00479338
    POP EBX                             ; 0047933a
    RET                                 ; 0047933b

