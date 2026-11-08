; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058d080(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6fb0
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

    PUSH EBX                            ; 0058d080
        ;   Label: FUN_0058d080
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058d081
    TEST byte ptr [ESP + 0xc],0x4       ; 0058d085
    JNZ 0x0058d0dd                      ; 0058d08a
        ;   XREF to: 0058d0dd (CONDITIONAL_JUMP)  ; LAB_0058d0dd
    PUSH 0x0                            ; 0058d08c
    ADD EBX,0x385c                      ; 0058d08e
    PUSH EBX                            ; 0058d094
    CALL FUN_00410370                   ; 0058d095
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0058d09a
    PUSH 0x0                            ; 0058d09d
    SUB EAX,0x954                       ; 0058d09f
    PUSH EAX                            ; 0058d0a4
    CALL FUN_0043f900                   ; 0058d0a5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0058d0aa
    PUSH 0x0                            ; 0058d0ad
    SUB EAX,0x2db0                      ; 0058d0af
    PUSH EAX                            ; 0058d0b4
    CALL FUN_0054bf80                   ; 0058d0b5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0058d0ba
    PUSH 0x1                            ; 0058d0bd
    LEA EBX,[EAX + 0xfffffea8]          ; 0058d0bf
    PUSH EBX                            ; 0058d0c5
    CALL FUN_00408770                   ; 0058d0c6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0058d0cb
    MOV DL,byte ptr [ESP + 0xc]         ; 0058d0ce
    MOV EBX,EAX                         ; 0058d0d2
    TEST DL,0x2                         ; 0058d0d4
    JNZ 0x0058d0f8                      ; 0058d0d7
        ;   XREF to: 0058d0f8 (CONDITIONAL_JUMP)  ; LAB_0058d0f8
    MOV EAX,EBX                         ; 0058d0d9
    POP EBX                             ; 0058d0db
    RET                                 ; 0058d0dc
    PUSH 0x5e6fb0                       ; 0058d0dd | DAT_005e6fb0
        ;   Label: LAB_0058d0dd
    PUSH EBX                            ; 0058d0e2
    CALL FUN_005a308f                   ; 0058d0e3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0058d0e8
    PUSH EAX                            ; 0058d0eb
    CALL FUN_005a30b6                   ; 0058d0ec
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0058d0f1
    MOV EAX,EBX                         ; 0058d0f4
    POP EBX                             ; 0058d0f6
    RET                                 ; 0058d0f7
    PUSH EAX                            ; 0058d0f8
        ;   Label: LAB_0058d0f8
    CALL FUN_005a30c4                   ; 0058d0f9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0058d0fe
    MOV EAX,EBX                         ; 0058d101
    POP EBX                             ; 0058d103
    RET                                 ; 0058d104

