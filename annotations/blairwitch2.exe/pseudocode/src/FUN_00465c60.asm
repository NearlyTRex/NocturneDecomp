; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00465c60(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f57f0
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

    PUSH EBX                            ; 00465c60
        ;   Label: FUN_00465c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465c61
    TEST byte ptr [ESP + 0xc],0x4       ; 00465c65
    JNZ 0x00465ccd                      ; 00465c6a
        ;   XREF to: 00465ccd (CONDITIONAL_JUMP)  ; LAB_00465ccd
    PUSH 0x0                            ; 00465c6c
    ADD EBX,0x3a20                      ; 00465c6e
    PUSH EBX                            ; 00465c74
    CALL FUN_0040f2b0                   ; 00465c75
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 00465c7a
    PUSH 0x0                            ; 00465c7d
    SUB EAX,0x9c8                       ; 00465c7f
    PUSH EAX                            ; 00465c84
    CALL FUN_0059df70                   ; 00465c85
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 00465c8a
    PUSH 0x0                            ; 00465c8d
    SUB EAX,0x34c                       ; 00465c8f
    PUSH EAX                            ; 00465c94
    CALL FUN_005b1480                   ; 00465c95
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 00465c9a
    PUSH 0x0                            ; 00465c9d
    SUB EAX,0x2a58                      ; 00465c9f
    PUSH EAX                            ; 00465ca4
    CALL FUN_00544d50                   ; 00465ca5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 00465caa
    PUSH 0x1                            ; 00465cad
    LEA EBX,[EAX + 0xfffffd4c]          ; 00465caf
    PUSH EBX                            ; 00465cb5
    CALL FUN_00408930                   ; 00465cb6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00465cbb
    MOV DL,byte ptr [ESP + 0xc]         ; 00465cbe
    MOV EBX,EAX                         ; 00465cc2
    TEST DL,0x2                         ; 00465cc4
    JNZ 0x00465ce8                      ; 00465cc7
        ;   XREF to: 00465ce8 (CONDITIONAL_JUMP)  ; LAB_00465ce8
    MOV EAX,EBX                         ; 00465cc9
    POP EBX                             ; 00465ccb
    RET                                 ; 00465ccc
    PUSH 0x5f57f0                       ; 00465ccd | DAT_005f57f0
        ;   Label: LAB_00465ccd
    PUSH EBX                            ; 00465cd2
    CALL FUN_005b7fa7                   ; 00465cd3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00465cd8
    PUSH EAX                            ; 00465cdb
    CALL FUN_005b7fce                   ; 00465cdc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00465ce1
    MOV EAX,EBX                         ; 00465ce4
    POP EBX                             ; 00465ce6
    RET                                 ; 00465ce7
    PUSH EAX                            ; 00465ce8
        ;   Label: LAB_00465ce8
    CALL FUN_005b7fdc                   ; 00465ce9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00465cee
    MOV EAX,EBX                         ; 00465cf1
    POP EBX                             ; 00465cf3
    RET                                 ; 00465cf4

