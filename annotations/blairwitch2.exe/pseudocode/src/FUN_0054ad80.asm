; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054ad80(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fbbd0
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054ad80
        ;   Label: FUN_0054ad80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054ad81
    TEST byte ptr [ESP + 0xc],0x4       ; 0054ad85
    JNZ 0x0054aded                      ; 0054ad8a
        ;   XREF to: 0054aded (CONDITIONAL_JUMP)  ; LAB_0054aded
    PUSH 0x0                            ; 0054ad8c
    ADD EBX,0x3a20                      ; 0054ad8e
    PUSH EBX                            ; 0054ad94
    CALL FUN_0040f2b0                   ; 0054ad95
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0054ad9a
    PUSH 0x0                            ; 0054ad9d
    SUB EAX,0x9c8                       ; 0054ad9f
    PUSH EAX                            ; 0054ada4
    CALL FUN_0059df70                   ; 0054ada5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0054adaa
    PUSH 0x0                            ; 0054adad
    SUB EAX,0x34c                       ; 0054adaf
    PUSH EAX                            ; 0054adb4
    CALL FUN_005b1480                   ; 0054adb5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0054adba
    PUSH 0x0                            ; 0054adbd
    SUB EAX,0x2a58                      ; 0054adbf
    PUSH EAX                            ; 0054adc4
    CALL FUN_00544d50                   ; 0054adc5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0054adca
    PUSH 0x1                            ; 0054adcd
    LEA EBX,[EAX + 0xfffffd4c]          ; 0054adcf
    PUSH EBX                            ; 0054add5
    CALL FUN_00408930                   ; 0054add6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0054addb
    MOV DL,byte ptr [ESP + 0xc]         ; 0054adde
    MOV EBX,EAX                         ; 0054ade2
    TEST DL,0x2                         ; 0054ade4
    JNZ 0x0054ae08                      ; 0054ade7
        ;   XREF to: 0054ae08 (CONDITIONAL_JUMP)  ; LAB_0054ae08
    MOV EAX,EBX                         ; 0054ade9
    POP EBX                             ; 0054adeb
    RET                                 ; 0054adec
    PUSH 0x5fbbd0                       ; 0054aded | DAT_005fbbd0
        ;   Label: LAB_0054aded
    PUSH EBX                            ; 0054adf2
    CALL FUN_005b7fa7                   ; 0054adf3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0054adf8
    PUSH EAX                            ; 0054adfb
    CALL FUN_005b7fce                   ; 0054adfc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0054ae01
    MOV EAX,EBX                         ; 0054ae04
    POP EBX                             ; 0054ae06
    RET                                 ; 0054ae07
    PUSH EAX                            ; 0054ae08
        ;   Label: LAB_0054ae08
    CALL FUN_005b7fdc                   ; 0054ae09
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0054ae0e
    MOV EAX,EBX                         ; 0054ae11
    POP EBX                             ; 0054ae13
    RET                                 ; 0054ae14

