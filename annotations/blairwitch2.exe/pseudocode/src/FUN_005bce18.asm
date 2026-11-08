; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bce18(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005b8af0 at 005b8bcc
;
; Called Functions:
;   FUN_005c0a64
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005bce18
        ;   Label: FUN_005bce18
    PUSH EDX                            ; 005bce1c
    CALL FUN_005c0a64                   ; 005bce1d
        ;   XREF to: 005c0a64 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0a64()
    ADD ESP,0x4                         ; 005bce22
    LEA EAX,[EAX]                       ; 005bce25

