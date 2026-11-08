; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574e00(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00572510 at 00572515
;
; Called Functions:
;   FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574e00
        ;   Label: FUN_00574e00
    PUSH EDX                            ; 00574e04
    CALL FUN_005744a0                   ; 00574e05
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    ADD ESP,0x4                         ; 00574e0a
    MOV dword ptr [EAX],0x5e5b74        ; 00574e0d
    RET                                 ; 00574e13

