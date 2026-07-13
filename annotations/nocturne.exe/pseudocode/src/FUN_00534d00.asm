; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534d00(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a25d4 = 0041e430
;
; Called Functions:
;   FUN_0041e300
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00534d00
        ;   Label: FUN_00534d00
    PUSH EDX                            ; 00534d04
    CALL FUN_0041e300                   ; 00534d05
        ;   XREF to: 0041e300 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e300()
    MOV dword ptr [EAX + 0x14c],0x5a25d4 ; 00534d0a | PTR_FUN_005a25d4
    ADD ESP,0x4                         ; 00534d14
    MOV dword ptr [EAX + 0x664],0x0     ; 00534d17
    RET                                 ; 00534d21

