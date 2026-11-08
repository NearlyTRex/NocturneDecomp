; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058cff0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6f90
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

    PUSH EBX                            ; 0058cff0
        ;   Label: FUN_0058cff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058cff1
    TEST byte ptr [ESP + 0xc],0x4       ; 0058cff5
    JNZ 0x0058d04d                      ; 0058cffa
        ;   XREF to: 0058d04d (CONDITIONAL_JUMP)  ; LAB_0058d04d
    PUSH 0x0                            ; 0058cffc
    ADD EBX,0x385c                      ; 0058cffe
    PUSH EBX                            ; 0058d004
    CALL FUN_00410370                   ; 0058d005
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0058d00a
    PUSH 0x0                            ; 0058d00d
    SUB EAX,0x954                       ; 0058d00f
    PUSH EAX                            ; 0058d014
    CALL FUN_0043f900                   ; 0058d015
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0058d01a
    PUSH 0x0                            ; 0058d01d
    SUB EAX,0x2db0                      ; 0058d01f
    PUSH EAX                            ; 0058d024
    CALL FUN_0054bf80                   ; 0058d025
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0058d02a
    PUSH 0x1                            ; 0058d02d
    LEA EBX,[EAX + 0xfffffea8]          ; 0058d02f
    PUSH EBX                            ; 0058d035
    CALL FUN_00408770                   ; 0058d036
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0058d03b
    MOV DL,byte ptr [ESP + 0xc]         ; 0058d03e
    MOV EBX,EAX                         ; 0058d042
    TEST DL,0x2                         ; 0058d044
    JNZ 0x0058d068                      ; 0058d047
        ;   XREF to: 0058d068 (CONDITIONAL_JUMP)  ; LAB_0058d068
    MOV EAX,EBX                         ; 0058d049
    POP EBX                             ; 0058d04b
    RET                                 ; 0058d04c
    PUSH 0x5e6f90                       ; 0058d04d | DAT_005e6f90
        ;   Label: LAB_0058d04d
    PUSH EBX                            ; 0058d052
    CALL FUN_005a308f                   ; 0058d053
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0058d058
    PUSH EAX                            ; 0058d05b
    CALL FUN_005a30b6                   ; 0058d05c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0058d061
    MOV EAX,EBX                         ; 0058d064
    POP EBX                             ; 0058d066
    RET                                 ; 0058d067
    PUSH EAX                            ; 0058d068
        ;   Label: LAB_0058d068
    CALL FUN_005a30c4                   ; 0058d069
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0058d06e
    MOV EAX,EBX                         ; 0058d071
    POP EBX                             ; 0058d073
    RET                                 ; 0058d074

