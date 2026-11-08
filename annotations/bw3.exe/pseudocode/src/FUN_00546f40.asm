; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00546f40(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e44b0
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

    PUSH EBX                            ; 00546f40
        ;   Label: FUN_00546f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00546f41
    TEST byte ptr [ESP + 0xc],0x4       ; 00546f45
    JNZ 0x00546f9d                      ; 00546f4a
        ;   XREF to: 00546f9d (CONDITIONAL_JUMP)  ; LAB_00546f9d
    PUSH 0x0                            ; 00546f4c
    ADD EBX,0x385c                      ; 00546f4e
    PUSH EBX                            ; 00546f54
    CALL FUN_00410370                   ; 00546f55
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 00546f5a
    PUSH 0x0                            ; 00546f5d
    SUB EAX,0x954                       ; 00546f5f
    PUSH EAX                            ; 00546f64
    CALL FUN_0043f900                   ; 00546f65
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 00546f6a
    PUSH 0x0                            ; 00546f6d
    SUB EAX,0x2db0                      ; 00546f6f
    PUSH EAX                            ; 00546f74
    CALL FUN_0054bf80                   ; 00546f75
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 00546f7a
    PUSH 0x1                            ; 00546f7d
    LEA EBX,[EAX + 0xfffffea8]          ; 00546f7f
    PUSH EBX                            ; 00546f85
    CALL FUN_00408770                   ; 00546f86
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00546f8b
    MOV DL,byte ptr [ESP + 0xc]         ; 00546f8e
    MOV EBX,EAX                         ; 00546f92
    TEST DL,0x2                         ; 00546f94
    JNZ 0x00546fb8                      ; 00546f97
        ;   XREF to: 00546fb8 (CONDITIONAL_JUMP)  ; LAB_00546fb8
    MOV EAX,EBX                         ; 00546f99
    POP EBX                             ; 00546f9b
    RET                                 ; 00546f9c
    PUSH 0x5e44b0                       ; 00546f9d | DAT_005e44b0
        ;   Label: LAB_00546f9d
    PUSH EBX                            ; 00546fa2
    CALL FUN_005a308f                   ; 00546fa3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00546fa8
    PUSH EAX                            ; 00546fab
    CALL FUN_005a30b6                   ; 00546fac
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00546fb1
    MOV EAX,EBX                         ; 00546fb4
    POP EBX                             ; 00546fb6
    RET                                 ; 00546fb7
    PUSH EAX                            ; 00546fb8
        ;   Label: LAB_00546fb8
    CALL FUN_005a30c4                   ; 00546fb9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00546fbe
    MOV EAX,EBX                         ; 00546fc1
    POP EBX                             ; 00546fc3
    RET                                 ; 00546fc4

