; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00509af0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e2f40
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0050ad40
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509af0
        ;   Label: FUN_00509af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00509af1
    TEST byte ptr [ESP + 0xc],0x4       ; 00509af5
    JNZ 0x00509b5d                      ; 00509afa
        ;   XREF to: 00509b5d (CONDITIONAL_JUMP)  ; LAB_00509b5d
    PUSH 0x0                            ; 00509afc
    ADD EBX,0xcdcc                      ; 00509afe
    PUSH EBX                            ; 00509b04
    CALL FUN_0050ad40                   ; 00509b05
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 00509b0a
    PUSH 0x0                            ; 00509b0d
    SUB EAX,0x9570                      ; 00509b0f
    PUSH EAX                            ; 00509b14
    CALL FUN_00410370                   ; 00509b15
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 00509b1a
    PUSH 0x0                            ; 00509b1d
    SUB EAX,0x954                       ; 00509b1f
    PUSH EAX                            ; 00509b24
    CALL FUN_0043f900                   ; 00509b25
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 00509b2a
    PUSH 0x0                            ; 00509b2d
    SUB EAX,0x2db0                      ; 00509b2f
    PUSH EAX                            ; 00509b34
    CALL FUN_0054bf80                   ; 00509b35
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 00509b3a
    PUSH 0x1                            ; 00509b3d
    LEA EBX,[EAX + 0xfffffea8]          ; 00509b3f
    PUSH EBX                            ; 00509b45
    CALL FUN_00408770                   ; 00509b46
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00509b4b
    MOV DL,byte ptr [ESP + 0xc]         ; 00509b4e
    MOV EBX,EAX                         ; 00509b52
    TEST DL,0x2                         ; 00509b54
    JNZ 0x00509b78                      ; 00509b57
        ;   XREF to: 00509b78 (CONDITIONAL_JUMP)  ; LAB_00509b78
    MOV EAX,EBX                         ; 00509b59
    POP EBX                             ; 00509b5b
    RET                                 ; 00509b5c
    PUSH 0x5e2f40                       ; 00509b5d | DAT_005e2f40
        ;   Label: LAB_00509b5d
    PUSH EBX                            ; 00509b62
    CALL FUN_005a308f                   ; 00509b63
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00509b68
    PUSH EAX                            ; 00509b6b
    CALL FUN_005a30b6                   ; 00509b6c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00509b71
    MOV EAX,EBX                         ; 00509b74
    POP EBX                             ; 00509b76
    RET                                 ; 00509b77
    PUSH EAX                            ; 00509b78
        ;   Label: LAB_00509b78
    CALL FUN_005a30c4                   ; 00509b79
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00509b7e
    MOV EAX,EBX                         ; 00509b81
    POP EBX                             ; 00509b83
    RET                                 ; 00509b84

