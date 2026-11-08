; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0046e1c0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f5ae0
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

    PUSH EBX                            ; 0046e1c0
        ;   Label: FUN_0046e1c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046e1c1
    TEST byte ptr [ESP + 0xc],0x4       ; 0046e1c5
    JNZ 0x0046e22d                      ; 0046e1ca
        ;   XREF to: 0046e22d (CONDITIONAL_JUMP)  ; LAB_0046e22d
    PUSH 0x0                            ; 0046e1cc
    ADD EBX,0x3a20                      ; 0046e1ce
    PUSH EBX                            ; 0046e1d4
    CALL FUN_0040f2b0                   ; 0046e1d5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0046e1da
    PUSH 0x0                            ; 0046e1dd
    SUB EAX,0x9c8                       ; 0046e1df
    PUSH EAX                            ; 0046e1e4
    CALL FUN_0059df70                   ; 0046e1e5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0046e1ea
    PUSH 0x0                            ; 0046e1ed
    SUB EAX,0x34c                       ; 0046e1ef
    PUSH EAX                            ; 0046e1f4
    CALL FUN_005b1480                   ; 0046e1f5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0046e1fa
    PUSH 0x0                            ; 0046e1fd
    SUB EAX,0x2a58                      ; 0046e1ff
    PUSH EAX                            ; 0046e204
    CALL FUN_00544d50                   ; 0046e205
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0046e20a
    PUSH 0x1                            ; 0046e20d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0046e20f
    PUSH EBX                            ; 0046e215
    CALL FUN_00408930                   ; 0046e216
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0046e21b
    MOV DL,byte ptr [ESP + 0xc]         ; 0046e21e
    MOV EBX,EAX                         ; 0046e222
    TEST DL,0x2                         ; 0046e224
    JNZ 0x0046e248                      ; 0046e227
        ;   XREF to: 0046e248 (CONDITIONAL_JUMP)  ; LAB_0046e248
    MOV EAX,EBX                         ; 0046e229
    POP EBX                             ; 0046e22b
    RET                                 ; 0046e22c
    PUSH 0x5f5ae0                       ; 0046e22d | DAT_005f5ae0
        ;   Label: LAB_0046e22d
    PUSH EBX                            ; 0046e232
    CALL FUN_005b7fa7                   ; 0046e233
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0046e238
    PUSH EAX                            ; 0046e23b
    CALL FUN_005b7fce                   ; 0046e23c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0046e241
    MOV EAX,EBX                         ; 0046e244
    POP EBX                             ; 0046e246
    RET                                 ; 0046e247
    PUSH EAX                            ; 0046e248
        ;   Label: LAB_0046e248
    CALL FUN_005b7fdc                   ; 0046e249
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0046e24e
    MOV EAX,EBX                         ; 0046e251
    POP EBX                             ; 0046e253
    RET                                 ; 0046e254

