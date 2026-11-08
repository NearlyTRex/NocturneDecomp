; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00597d00(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7820
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

    PUSH EBX                            ; 00597d00
        ;   Label: FUN_00597d00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00597d01
    TEST byte ptr [ESP + 0xc],0x4       ; 00597d05
    JNZ 0x00597d5d                      ; 00597d0a
        ;   XREF to: 00597d5d (CONDITIONAL_JUMP)  ; LAB_00597d5d
    PUSH 0x0                            ; 00597d0c
    ADD EBX,0x385c                      ; 00597d0e
    PUSH EBX                            ; 00597d14
    CALL FUN_00410370                   ; 00597d15
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 00597d1a
    PUSH 0x0                            ; 00597d1d
    SUB EAX,0x954                       ; 00597d1f
    PUSH EAX                            ; 00597d24
    CALL FUN_0043f900                   ; 00597d25
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 00597d2a
    PUSH 0x0                            ; 00597d2d
    SUB EAX,0x2db0                      ; 00597d2f
    PUSH EAX                            ; 00597d34
    CALL FUN_0054bf80                   ; 00597d35
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 00597d3a
    PUSH 0x1                            ; 00597d3d
    LEA EBX,[EAX + 0xfffffea8]          ; 00597d3f
    PUSH EBX                            ; 00597d45
    CALL FUN_00408770                   ; 00597d46
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00597d4b
    MOV DL,byte ptr [ESP + 0xc]         ; 00597d4e
    MOV EBX,EAX                         ; 00597d52
    TEST DL,0x2                         ; 00597d54
    JNZ 0x00597d78                      ; 00597d57
        ;   XREF to: 00597d78 (CONDITIONAL_JUMP)  ; LAB_00597d78
    MOV EAX,EBX                         ; 00597d59
    POP EBX                             ; 00597d5b
    RET                                 ; 00597d5c
    PUSH 0x5e7820                       ; 00597d5d | DAT_005e7820
        ;   Label: LAB_00597d5d
    PUSH EBX                            ; 00597d62
    CALL FUN_005a308f                   ; 00597d63
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00597d68
    PUSH EAX                            ; 00597d6b
    CALL FUN_005a30b6                   ; 00597d6c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00597d71
    MOV EAX,EBX                         ; 00597d74
    POP EBX                             ; 00597d76
    RET                                 ; 00597d77
    PUSH EAX                            ; 00597d78
        ;   Label: LAB_00597d78
    CALL FUN_005a30c4                   ; 00597d79
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00597d7e
    MOV EAX,EBX                         ; 00597d81
    POP EBX                             ; 00597d83
    RET                                 ; 00597d84

