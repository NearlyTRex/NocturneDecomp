; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00591ab0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7350
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

    PUSH EBX                            ; 00591ab0
        ;   Label: FUN_00591ab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00591ab1
    TEST byte ptr [ESP + 0xc],0x4       ; 00591ab5
    JNZ 0x00591b0d                      ; 00591aba
        ;   XREF to: 00591b0d (CONDITIONAL_JUMP)  ; LAB_00591b0d
    PUSH 0x0                            ; 00591abc
    ADD EBX,0x385c                      ; 00591abe
    PUSH EBX                            ; 00591ac4
    CALL FUN_00410370                   ; 00591ac5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 00591aca
    PUSH 0x0                            ; 00591acd
    SUB EAX,0x954                       ; 00591acf
    PUSH EAX                            ; 00591ad4
    CALL FUN_0043f900                   ; 00591ad5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 00591ada
    PUSH 0x0                            ; 00591add
    SUB EAX,0x2db0                      ; 00591adf
    PUSH EAX                            ; 00591ae4
    CALL FUN_0054bf80                   ; 00591ae5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 00591aea
    PUSH 0x1                            ; 00591aed
    LEA EBX,[EAX + 0xfffffea8]          ; 00591aef
    PUSH EBX                            ; 00591af5
    CALL FUN_00408770                   ; 00591af6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00591afb
    MOV DL,byte ptr [ESP + 0xc]         ; 00591afe
    MOV EBX,EAX                         ; 00591b02
    TEST DL,0x2                         ; 00591b04
    JNZ 0x00591b28                      ; 00591b07
        ;   XREF to: 00591b28 (CONDITIONAL_JUMP)  ; LAB_00591b28
    MOV EAX,EBX                         ; 00591b09
    POP EBX                             ; 00591b0b
    RET                                 ; 00591b0c
    PUSH 0x5e7350                       ; 00591b0d | DAT_005e7350
        ;   Label: LAB_00591b0d
    PUSH EBX                            ; 00591b12
    CALL FUN_005a308f                   ; 00591b13
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00591b18
    PUSH EAX                            ; 00591b1b
    CALL FUN_005a30b6                   ; 00591b1c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00591b21
    MOV EAX,EBX                         ; 00591b24
    POP EBX                             ; 00591b26
    RET                                 ; 00591b27
    PUSH EAX                            ; 00591b28
        ;   Label: LAB_00591b28
    CALL FUN_005a30c4                   ; 00591b29
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00591b2e
    MOV EAX,EBX                         ; 00591b31
    POP EBX                             ; 00591b33
    RET                                 ; 00591b34

