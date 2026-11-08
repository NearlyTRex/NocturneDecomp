; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d9d20(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004d9e40 at 004d9e51
;   FUN_004d9eb0 at 004d9ec1
;   FUN_004dbe70 at 004dbfc8
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_005c5e27
;   TerminatedCString s_CAmmo_005c5e2f
;   TerminatedCString s_CKeyActor_005c5e35
;   TerminatedCString s_CBoxActor_005c5e3f
;   TerminatedCString s_CHealthItem_005c5e49
;   TerminatedCString s_core_inv_cpp_005c5e55
;   TerminatedCString s_getModel_Can_t_classify_005c5e65
;   undefined4 DAT_007dfd24
;   undefined4 DAT_007e17b4
;   undefined4 DAT_01d5b9b4
;   undefined4 DAT_01d70a74
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02d0c150
;
; Called Functions:
;   FUN_0040c790
;   FUN_0040c840
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9d20
        ;   Label: FUN_004d9d20
    PUSH EDI                            ; 004d9d21
    PUSH EBP                            ; 004d9d22
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d9d23
    PUSH 0x5c5e27                       ; 004d9d27 | = "CWeapon"
    PUSH EBX                            ; 004d9d2c
    CALL FUN_0040c790                   ; 004d9d2d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004d9d32
    TEST EAX,EAX                        ; 004d9d35
    JNZ 0x004d9da4                      ; 004d9d37
        ;   XREF to: 004d9da4 (CONDITIONAL_JUMP)  ; LAB_004d9da4
    PUSH 0x5c5e2f                       ; 004d9d39 | = "CAmmo"
    PUSH EBX                            ; 004d9d3e
    CALL FUN_0040c790                   ; 004d9d3f
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004d9d44
    TEST EAX,EAX                        ; 004d9d47
    JNZ 0x004d9dbd                      ; 004d9d49
        ;   XREF to: 004d9dbd (CONDITIONAL_JUMP)  ; LAB_004d9dbd
    PUSH 0x5c5e35                       ; 004d9d4b | = "CKeyActor"
    PUSH EBX                            ; 004d9d50
    CALL FUN_0040c790                   ; 004d9d51
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004d9d56
    TEST EAX,EAX                        ; 004d9d59
    JNZ 0x004d9dd5                      ; 004d9d5b
        ;   XREF to: 004d9dd5 (CONDITIONAL_JUMP)  ; LAB_004d9dd5
    PUSH 0x5c5e3f                       ; 004d9d5d | = "CBoxActor"
    PUSH EBX                            ; 004d9d62
    CALL FUN_0040c790                   ; 004d9d63
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004d9d68
    TEST EAX,EAX                        ; 004d9d6b
    JNZ 0x004d9dee                      ; 004d9d6d
        ;   XREF to: 004d9dee (CONDITIONAL_JUMP)  ; LAB_004d9dee
    PUSH 0x5c5e49                       ; 004d9d73 | = "CHealthItem"
    PUSH EBX                            ; 004d9d78
    CALL FUN_0040c790                   ; 004d9d79
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004d9d7e
    TEST EAX,EAX                        ; 004d9d81
    JZ 0x004d9e07                       ; 004d9d83
        ;   XREF to: 004d9e07 (CONDITIONAL_JUMP)  ; LAB_004d9e07
    PUSH ESI                            ; 004d9d89
    MOV ESI,dword ptr [0x01d5b9b4]      ; 004d9d8a | DAT_01d5b9b4
    PUSH ESI                            ; 004d9d90
    PUSH EBX                            ; 004d9d91
    CALL FUN_0040c840                   ; 004d9d92
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9d97
    ADD EAX,0x158                       ; 004d9d9a
    POP ESI                             ; 004d9d9f
    POP EBP                             ; 004d9da0
    POP EDI                             ; 004d9da1
    POP EBX                             ; 004d9da2
    RET                                 ; 004d9da3
    MOV EDX,dword ptr [0x02d0c150]      ; 004d9da4 | DAT_02d0c150
        ;   Label: LAB_004d9da4
    PUSH EDX                            ; 004d9daa
    PUSH EBX                            ; 004d9dab
    CALL FUN_0040c840                   ; 004d9dac
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9db1
    ADD EAX,0x158                       ; 004d9db4
    POP EBP                             ; 004d9db9
    POP EDI                             ; 004d9dba
    POP EBX                             ; 004d9dbb
    RET                                 ; 004d9dbc
    MOV EAX,[0x007dfd24]                ; 004d9dbd | DAT_007dfd24
        ;   Label: LAB_004d9dbd
    PUSH EAX                            ; 004d9dc2
    PUSH EBX                            ; 004d9dc3
    CALL FUN_0040c840                   ; 004d9dc4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9dc9
    ADD EAX,0x158                       ; 004d9dcc
    POP EBP                             ; 004d9dd1
    POP EDI                             ; 004d9dd2
    POP EBX                             ; 004d9dd3
    RET                                 ; 004d9dd4
    MOV EBP,dword ptr [0x01d70a74]      ; 004d9dd5 | DAT_01d70a74
        ;   Label: LAB_004d9dd5
    PUSH EBP                            ; 004d9ddb
    PUSH EBX                            ; 004d9ddc
    CALL FUN_0040c840                   ; 004d9ddd
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9de2
    ADD EAX,0x158                       ; 004d9de5
    POP EBP                             ; 004d9dea
    POP EDI                             ; 004d9deb
    POP EBX                             ; 004d9dec
    RET                                 ; 004d9ded
    MOV EDI,dword ptr [0x007e17b4]      ; 004d9dee | DAT_007e17b4
        ;   Label: LAB_004d9dee
    PUSH EDI                            ; 004d9df4
    PUSH EBX                            ; 004d9df5
    CALL FUN_0040c840                   ; 004d9df6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9dfb
    ADD EAX,0x158                       ; 004d9dfe
    POP EBP                             ; 004d9e03
    POP EDI                             ; 004d9e04
    POP EBX                             ; 004d9e05
    RET                                 ; 004d9e06
    PUSH EBX                            ; 004d9e07
        ;   Label: LAB_004d9e07
    MOV EDX,0x5c5e55                    ; 004d9e08 | = "..\\core\\inv.cpp"
    MOV ECX,0xaf                        ; 004d9e0d
    PUSH 0x5c5e65                       ; 004d9e12 | = "getModel - Can't classify : %s"
    MOV dword ptr [0x01d71de0],EDX      ; 004d9e17 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004d9e1d | DAT_01d71de4
    CALL FUN_004e4330                   ; 004d9e23
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 004d9e28
    XOR EAX,EAX                         ; 004d9e2b
    POP EBP                             ; 004d9e2d
    POP EDI                             ; 004d9e2e
    POP EBX                             ; 004d9e2f
    RET                                 ; 004d9e30

