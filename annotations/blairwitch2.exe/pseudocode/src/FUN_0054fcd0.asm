; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054fcd0(int param_1)
;
;
; XREF[5]:
;   FUN_00491a90 at 00491b60
;   FUN_004b5190 at 004b5a76
;   FUN_0054d7a0 at 0054d7a5
;   FUN_0055af90 at 0055afa1
;   FUN_00576130 at 00576294
;
; Referenced Globals:
;   undefined4 DAT_005fbc28
;   undefined4 DAT_005fbc2c
;   undefined4 DAT_0061bcb8
;   undefined4 DAT_0263cf10
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054fcd0
        ;   Label: FUN_0054fcd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054fcd1
    PUSH 0x150                          ; 0054fcd5
    PUSH 0x0                            ; 0054fcda
    PUSH EBX                            ; 0054fcdc
    CALL FUN_005b77c0                   ; 0054fcdd
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    FLD float ptr [0x0061bcb8]          ; 0054fce2 | DAT_0061bcb8
    FLD float ptr [0x005fbc28]          ; 0054fce8 | DAT_005fbc28
    FMUL ST1                            ; 0054fcee
    FLD float ptr [0x0263cf10]          ; 0054fcf0 | DAT_0263cf10
    FMUL ST2                            ; 0054fcf6
    FLD float ptr [0x005fbc2c]          ; 0054fcf8 | DAT_005fbc2c
    FMULP ST3                           ; 0054fcfe
    ADD ESP,0xc                         ; 0054fd00
    MOV EAX,EBX                         ; 0054fd03
    FXCH                                ; 0054fd05
    FSTP float ptr [EBX + 0x114]        ; 0054fd07
    FSTP float ptr [EBX + 0x118]        ; 0054fd0d
    FSTP float ptr [EBX + 0x11c]        ; 0054fd13
    POP EBX                             ; 0054fd19
    RET                                 ; 0054fd1a

