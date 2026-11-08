; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058d110(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6fd0
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

    PUSH EBX                            ; 0058d110
        ;   Label: FUN_0058d110
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058d111
    TEST byte ptr [ESP + 0xc],0x4       ; 0058d115
    JNZ 0x0058d16d                      ; 0058d11a
        ;   XREF to: 0058d16d (CONDITIONAL_JUMP)  ; LAB_0058d16d
    PUSH 0x0                            ; 0058d11c
    ADD EBX,0x385c                      ; 0058d11e
    PUSH EBX                            ; 0058d124
    CALL FUN_00410370                   ; 0058d125
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0058d12a
    PUSH 0x0                            ; 0058d12d
    SUB EAX,0x954                       ; 0058d12f
    PUSH EAX                            ; 0058d134
    CALL FUN_0043f900                   ; 0058d135
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0058d13a
    PUSH 0x0                            ; 0058d13d
    SUB EAX,0x2db0                      ; 0058d13f
    PUSH EAX                            ; 0058d144
    CALL FUN_0054bf80                   ; 0058d145
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0058d14a
    PUSH 0x1                            ; 0058d14d
    LEA EBX,[EAX + 0xfffffea8]          ; 0058d14f
    PUSH EBX                            ; 0058d155
    CALL FUN_00408770                   ; 0058d156
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0058d15b
    MOV DL,byte ptr [ESP + 0xc]         ; 0058d15e
    MOV EBX,EAX                         ; 0058d162
    TEST DL,0x2                         ; 0058d164
    JNZ 0x0058d188                      ; 0058d167
        ;   XREF to: 0058d188 (CONDITIONAL_JUMP)  ; LAB_0058d188
    MOV EAX,EBX                         ; 0058d169
    POP EBX                             ; 0058d16b
    RET                                 ; 0058d16c
    PUSH 0x5e6fd0                       ; 0058d16d | DAT_005e6fd0
        ;   Label: LAB_0058d16d
    PUSH EBX                            ; 0058d172
    CALL FUN_005a308f                   ; 0058d173
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0058d178
    PUSH EAX                            ; 0058d17b
    CALL FUN_005a30b6                   ; 0058d17c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0058d181
    MOV EAX,EBX                         ; 0058d184
    POP EBX                             ; 0058d186
    RET                                 ; 0058d187
    PUSH EAX                            ; 0058d188
        ;   Label: LAB_0058d188
    CALL FUN_005a30c4                   ; 0058d189
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0058d18e
    MOV EAX,EBX                         ; 0058d191
    POP EBX                             ; 0058d193
    RET                                 ; 0058d194

