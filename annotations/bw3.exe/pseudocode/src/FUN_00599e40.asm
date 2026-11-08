; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00599e40(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7e50
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_004fa8c0
;   FUN_0050ad40
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599e40
        ;   Label: FUN_00599e40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599e41
    TEST byte ptr [ESP + 0xc],0x4       ; 00599e45
    JNZ 0x00599ed1                      ; 00599e4a
        ;   XREF to: 00599ed1 (CONDITIONAL_JUMP)  ; LAB_00599ed1
    PUSH 0x0                            ; 00599e50
    ADD EBX,0x20874                     ; 00599e52
    PUSH EBX                            ; 00599e58
    CALL FUN_004fa8c0                   ; 00599e59
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8c0()
    ADD ESP,0x8                         ; 00599e5e
    PUSH 0x0                            ; 00599e61
    SUB EAX,0x1cc                       ; 00599e63
    PUSH EAX                            ; 00599e68
    CALL FUN_0043f900                   ; 00599e69
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 00599e6e
    PUSH 0x0                            ; 00599e71
    SUB EAX,0x138dc                     ; 00599e73
    PUSH EAX                            ; 00599e78
    CALL FUN_0050ad40                   ; 00599e79
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 00599e7e
    PUSH 0x0                            ; 00599e81
    SUB EAX,0x9570                      ; 00599e83
    PUSH EAX                            ; 00599e88
    CALL FUN_00410370                   ; 00599e89
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 00599e8e
    PUSH 0x0                            ; 00599e91
    SUB EAX,0x954                       ; 00599e93
    PUSH EAX                            ; 00599e98
    CALL FUN_0043f900                   ; 00599e99
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 00599e9e
    PUSH 0x0                            ; 00599ea1
    SUB EAX,0x2db0                      ; 00599ea3
    PUSH EAX                            ; 00599ea8
    CALL FUN_0054bf80                   ; 00599ea9
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 00599eae
    PUSH 0x1                            ; 00599eb1
    LEA EBX,[EAX + 0xfffffea8]          ; 00599eb3
    PUSH EBX                            ; 00599eb9
    CALL FUN_00408770                   ; 00599eba
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00599ebf
    MOV DL,byte ptr [ESP + 0xc]         ; 00599ec2
    MOV EBX,EAX                         ; 00599ec6
    TEST DL,0x2                         ; 00599ec8
    JNZ 0x00599eec                      ; 00599ecb
        ;   XREF to: 00599eec (CONDITIONAL_JUMP)  ; LAB_00599eec
    MOV EAX,EBX                         ; 00599ecd
    POP EBX                             ; 00599ecf
    RET                                 ; 00599ed0
    PUSH 0x5e7e50                       ; 00599ed1 | DAT_005e7e50
        ;   Label: LAB_00599ed1
    PUSH EBX                            ; 00599ed6
    CALL FUN_005a308f                   ; 00599ed7
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00599edc
    PUSH EAX                            ; 00599edf
    CALL FUN_005a30b6                   ; 00599ee0
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00599ee5
    MOV EAX,EBX                         ; 00599ee8
    POP EBX                             ; 00599eea
    RET                                 ; 00599eeb
    PUSH EAX                            ; 00599eec
        ;   Label: LAB_00599eec
    CALL FUN_005a30c4                   ; 00599eed
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00599ef2
    MOV EAX,EBX                         ; 00599ef5
    POP EBX                             ; 00599ef7
    RET                                 ; 00599ef8

