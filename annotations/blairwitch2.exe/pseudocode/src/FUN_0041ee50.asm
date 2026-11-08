; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0041ee50(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f3df0
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

    PUSH EBX                            ; 0041ee50
        ;   Label: FUN_0041ee50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041ee51
    TEST byte ptr [ESP + 0xc],0x4       ; 0041ee55
    JNZ 0x0041eebd                      ; 0041ee5a
        ;   XREF to: 0041eebd (CONDITIONAL_JUMP)  ; LAB_0041eebd
    PUSH 0x0                            ; 0041ee5c
    ADD EBX,0x3a20                      ; 0041ee5e
    PUSH EBX                            ; 0041ee64
    CALL FUN_0040f2b0                   ; 0041ee65
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0041ee6a
    PUSH 0x0                            ; 0041ee6d
    SUB EAX,0x9c8                       ; 0041ee6f
    PUSH EAX                            ; 0041ee74
    CALL FUN_0059df70                   ; 0041ee75
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0041ee7a
    PUSH 0x0                            ; 0041ee7d
    SUB EAX,0x34c                       ; 0041ee7f
    PUSH EAX                            ; 0041ee84
    CALL FUN_005b1480                   ; 0041ee85
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0041ee8a
    PUSH 0x0                            ; 0041ee8d
    SUB EAX,0x2a58                      ; 0041ee8f
    PUSH EAX                            ; 0041ee94
    CALL FUN_00544d50                   ; 0041ee95
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0041ee9a
    PUSH 0x1                            ; 0041ee9d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0041ee9f
    PUSH EBX                            ; 0041eea5
    CALL FUN_00408930                   ; 0041eea6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0041eeab
    MOV DL,byte ptr [ESP + 0xc]         ; 0041eeae
    MOV EBX,EAX                         ; 0041eeb2
    TEST DL,0x2                         ; 0041eeb4
    JNZ 0x0041eed8                      ; 0041eeb7
        ;   XREF to: 0041eed8 (CONDITIONAL_JUMP)  ; LAB_0041eed8
    MOV EAX,EBX                         ; 0041eeb9
    POP EBX                             ; 0041eebb
    RET                                 ; 0041eebc
    PUSH 0x5f3df0                       ; 0041eebd | DAT_005f3df0
        ;   Label: LAB_0041eebd
    PUSH EBX                            ; 0041eec2
    CALL FUN_005b7fa7                   ; 0041eec3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0041eec8
    PUSH EAX                            ; 0041eecb
    CALL FUN_005b7fce                   ; 0041eecc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0041eed1
    MOV EAX,EBX                         ; 0041eed4
    POP EBX                             ; 0041eed6
    RET                                 ; 0041eed7
    PUSH EAX                            ; 0041eed8
        ;   Label: LAB_0041eed8
    CALL FUN_005b7fdc                   ; 0041eed9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0041eede
    MOV EAX,EBX                         ; 0041eee1
    POP EBX                             ; 0041eee3
    RET                                 ; 0041eee4

