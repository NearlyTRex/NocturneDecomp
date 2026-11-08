; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a8e80(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006004a0
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

    PUSH EBX                            ; 005a8e80
        ;   Label: FUN_005a8e80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a8e81
    TEST byte ptr [ESP + 0xc],0x4       ; 005a8e85
    JNZ 0x005a8eed                      ; 005a8e8a
        ;   XREF to: 005a8eed (CONDITIONAL_JUMP)  ; LAB_005a8eed
    PUSH 0x0                            ; 005a8e8c
    ADD EBX,0x3a20                      ; 005a8e8e
    PUSH EBX                            ; 005a8e94
    CALL FUN_0040f2b0                   ; 005a8e95
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 005a8e9a
    PUSH 0x0                            ; 005a8e9d
    SUB EAX,0x9c8                       ; 005a8e9f
    PUSH EAX                            ; 005a8ea4
    CALL FUN_0059df70                   ; 005a8ea5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 005a8eaa
    PUSH 0x0                            ; 005a8ead
    SUB EAX,0x34c                       ; 005a8eaf
    PUSH EAX                            ; 005a8eb4
    CALL FUN_005b1480                   ; 005a8eb5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 005a8eba
    PUSH 0x0                            ; 005a8ebd
    SUB EAX,0x2a58                      ; 005a8ebf
    PUSH EAX                            ; 005a8ec4
    CALL FUN_00544d50                   ; 005a8ec5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 005a8eca
    PUSH 0x1                            ; 005a8ecd
    LEA EBX,[EAX + 0xfffffd4c]          ; 005a8ecf
    PUSH EBX                            ; 005a8ed5
    CALL FUN_00408930                   ; 005a8ed6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 005a8edb
    MOV DL,byte ptr [ESP + 0xc]         ; 005a8ede
    MOV EBX,EAX                         ; 005a8ee2
    TEST DL,0x2                         ; 005a8ee4
    JNZ 0x005a8f08                      ; 005a8ee7
        ;   XREF to: 005a8f08 (CONDITIONAL_JUMP)  ; LAB_005a8f08
    MOV EAX,EBX                         ; 005a8ee9
    POP EBX                             ; 005a8eeb
    RET                                 ; 005a8eec
    PUSH 0x6004a0                       ; 005a8eed | DAT_006004a0
        ;   Label: LAB_005a8eed
    PUSH EBX                            ; 005a8ef2
    CALL FUN_005b7fa7                   ; 005a8ef3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 005a8ef8
    PUSH EAX                            ; 005a8efb
    CALL FUN_005b7fce                   ; 005a8efc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 005a8f01
    MOV EAX,EBX                         ; 005a8f04
    POP EBX                             ; 005a8f06
    RET                                 ; 005a8f07
    PUSH EAX                            ; 005a8f08
        ;   Label: LAB_005a8f08
    CALL FUN_005b7fdc                   ; 005a8f09
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 005a8f0e
    MOV EAX,EBX                         ; 005a8f11
    POP EBX                             ; 005a8f13
    RET                                 ; 005a8f14

