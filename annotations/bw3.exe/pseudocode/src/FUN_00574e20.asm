; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00574e20(undefined4 *param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e5b74 = 00574e20
;   undefined4 DAT_005e5b90
;
; Called Functions:
;   FUN_005744a0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574e20
        ;   Label: FUN_00574e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00574e21
    TEST byte ptr [ESP + 0xc],0x4       ; 00574e25
    JNZ 0x00574e4c                      ; 00574e2a
        ;   XREF to: 00574e4c (CONDITIONAL_JUMP)  ; LAB_00574e4c
    PUSH 0x1                            ; 00574e2c
    PUSH EBX                            ; 00574e2e
    MOV dword ptr [EBX],0x5e5b74        ; 00574e2f | PTR_FUN_005e5b74
    CALL FUN_005744a0                   ; 00574e35
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    ADD ESP,0x8                         ; 00574e3a
    MOV DL,byte ptr [ESP + 0xc]         ; 00574e3d
    MOV EBX,EAX                         ; 00574e41
    TEST DL,0x2                         ; 00574e43
    JNZ 0x00574e67                      ; 00574e46
        ;   XREF to: 00574e67 (CONDITIONAL_JUMP)  ; LAB_00574e67
    MOV EAX,EBX                         ; 00574e48
    POP EBX                             ; 00574e4a
    RET                                 ; 00574e4b
    PUSH 0x5e5b90                       ; 00574e4c | DAT_005e5b90
        ;   Label: LAB_00574e4c
    PUSH EBX                            ; 00574e51
    CALL FUN_005a308f                   ; 00574e52
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00574e57
    PUSH EAX                            ; 00574e5a
    CALL FUN_005a30b6                   ; 00574e5b
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00574e60
    MOV EAX,EBX                         ; 00574e63
    POP EBX                             ; 00574e65
    RET                                 ; 00574e66
    PUSH EAX                            ; 00574e67
        ;   Label: LAB_00574e67
    CALL FUN_005a30c4                   ; 00574e68
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00574e6d
    MOV EAX,EBX                         ; 00574e70
    POP EBX                             ; 00574e72
    RET                                 ; 00574e73

