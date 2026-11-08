; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574b20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005744a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00574b20
        ;   Label: FUN_00574b20
    PUSH EDX                            ; 00574b24
    CALL FUN_005744a0                   ; 00574b25
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    ADD ESP,0x4                         ; 00574b2a
    MOV dword ptr [EAX],0x5e5b54        ; 00574b2d
    RET                                 ; 00574b33

