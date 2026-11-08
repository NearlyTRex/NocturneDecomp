; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004767b0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fee8c
;   undefined4 DAT_005fee90
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004767b0
        ;   Label: FUN_004767b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004767b1
    PUSH EDX                            ; 004767b5
    CALL FUN_004a0410                   ; 004767b6
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 004767bb
    PUSH 0x5da683                       ; 004767be
    MOV EBX,EAX                         ; 004767c3
    ADD EAX,0x158                       ; 004767c5
    PUSH EAX                            ; 004767ca
    MOV dword ptr [EAX + -0x4],0x5feea4 ; 004767cb
    CALL FUN_00569f50                   ; 004767d2
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    FLD float ptr [0x005fee8c]          ; 004767d7 | DAT_005fee8c
    MOV dword ptr [EBX + 0x2fec],0x3f400000 ; 004767dd
    FLD float ptr [0x005fee90]          ; 004767e7 | DAT_005fee90
    MOV dword ptr [EBX + 0x2ff0],0x3fc00000 ; 004767ed
    ADD ESP,0x8                         ; 004767f7
    MOV dword ptr [EBX + 0xc270],0x0    ; 004767fa
    MOV EAX,EBX                         ; 00476804
    FXCH                                ; 00476806
    FSTP float ptr [EBX + 0x2ff4]       ; 00476808
    FSTP float ptr [EBX + 0x2ff8]       ; 0047680e
    POP EBX                             ; 00476814
    RET                                 ; 00476815

