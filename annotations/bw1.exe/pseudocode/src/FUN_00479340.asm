; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00479340(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_00499ed0 at 0049a08a
;   FUN_0049a0d0 at 0049a289
;   FUN_0049a300 at 0049a3b4
;   FUN_0049a480 at 0049a58f
;   FUN_0053d580 at 0053d611
;
; Called Functions:
;   FUN_00479460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479340
        ;   Label: FUN_00479340
    MOV EBX,dword ptr [ESP + 0x8]       ; 00479341
    PUSH EBX                            ; 00479345
    CALL FUN_00479460                   ; 00479346
        ;   XREF to: 00479460 (UNCONDITIONAL_CALL)  ; undefined FUN_00479460()
    ADD ESP,0x4                         ; 0047934b
    MOV EAX,EBX                         ; 0047934e
    POP EBX                             ; 00479350
    RET                                 ; 00479351

