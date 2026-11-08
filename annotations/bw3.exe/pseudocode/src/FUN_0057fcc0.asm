; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057fcc0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6510
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fcc0
        ;   Label: FUN_0057fcc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057fcc1
    TEST byte ptr [ESP + 0xc],0x4       ; 0057fcc5
    JNZ 0x0057fd1d                      ; 0057fcca
        ;   XREF to: 0057fd1d (CONDITIONAL_JUMP)  ; LAB_0057fd1d
    PUSH 0x0                            ; 0057fccc
    ADD EBX,0x385c                      ; 0057fcce
    PUSH EBX                            ; 0057fcd4
    CALL FUN_00410370                   ; 0057fcd5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0057fcda
    PUSH 0x0                            ; 0057fcdd
    SUB EAX,0x954                       ; 0057fcdf
    PUSH EAX                            ; 0057fce4
    CALL FUN_0043f900                   ; 0057fce5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0057fcea
    PUSH 0x0                            ; 0057fced
    SUB EAX,0x2db0                      ; 0057fcef
    PUSH EAX                            ; 0057fcf4
    CALL FUN_0054bf80                   ; 0057fcf5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0057fcfa
    PUSH 0x1                            ; 0057fcfd
    LEA EBX,[EAX + 0xfffffea8]          ; 0057fcff
    PUSH EBX                            ; 0057fd05
    CALL FUN_00408770                   ; 0057fd06
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0057fd0b
    MOV DL,byte ptr [ESP + 0xc]         ; 0057fd0e
    MOV EBX,EAX                         ; 0057fd12
    TEST DL,0x2                         ; 0057fd14
    JNZ 0x0057fd38                      ; 0057fd17
        ;   XREF to: 0057fd38 (CONDITIONAL_JUMP)  ; LAB_0057fd38
    MOV EAX,EBX                         ; 0057fd19
    POP EBX                             ; 0057fd1b
    RET                                 ; 0057fd1c
    PUSH 0x5e6510                       ; 0057fd1d | DAT_005e6510
        ;   Label: LAB_0057fd1d
    PUSH EBX                            ; 0057fd22
    CALL FUN_005a308f                   ; 0057fd23
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0057fd28
    PUSH EAX                            ; 0057fd2b
    CALL FUN_005a30b6                   ; 0057fd2c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0057fd31
    MOV EAX,EBX                         ; 0057fd34
    POP EBX                             ; 0057fd36
    RET                                 ; 0057fd37
    PUSH EAX                            ; 0057fd38
        ;   Label: LAB_0057fd38
    CALL FUN_005a30c4                   ; 0057fd39
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0057fd3e
    MOV EAX,EBX                         ; 0057fd41
    POP EBX                             ; 0057fd43
    RET                                 ; 0057fd44

