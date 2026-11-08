; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d9db0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004d9f10 at 004d9f21
;   FUN_004d9f80 at 004d9f91
;   FUN_004dbd80 at 004dbecd
;
; Referenced Globals:
;   TerminatedCString s_CWeapon_005db34a
;   TerminatedCString s_CAmmo_005db352
;   TerminatedCString s_CKeyActor_005db358
;   TerminatedCString s_CBoxActor_005db362
;   TerminatedCString s_CHealthItem_005db36c
;   TerminatedCString s_CGasMask_005db378
;   TerminatedCString s_CFilmReel_005db381
;   TerminatedCString s_CTrap_005db38b
;   TerminatedCString s_CBattery_005db391
;   TerminatedCString s_core_inv_cpp_005db39a
;   TerminatedCString s_getModel_Can_t_classify_005db3aa
;   undefined4 DAT_007bc3a4
;   undefined4 DAT_007bc85c
;   undefined4 DAT_007bc9e8
;   undefined4 DAT_01c3de74
;   ... and 7 more
;
; Called Functions:
;   FUN_0040c840
;   FUN_0040c8f0
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d9db0
        ;   Label: FUN_004d9db0
    PUSH ESI                            ; 004d9db1
    PUSH EDI                            ; 004d9db2
    PUSH EBP                            ; 004d9db3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004d9db4
    PUSH 0x5db34a                       ; 004d9db8 | = "CWeapon"
    PUSH EBX                            ; 004d9dbd
    CALL FUN_0040c840                   ; 004d9dbe
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9dc3
    TEST EAX,EAX                        ; 004d9dc6
    JNZ 0x004d9e94                      ; 004d9dc8
        ;   XREF to: 004d9e94 (CONDITIONAL_JUMP)  ; LAB_004d9e94
    PUSH 0x5db352                       ; 004d9dce | = "CAmmo"
    PUSH EBX                            ; 004d9dd3
    CALL FUN_0040c840                   ; 004d9dd4
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9dd9
    TEST EAX,EAX                        ; 004d9ddc
    JNZ 0x004d9e9d                      ; 004d9dde
        ;   XREF to: 004d9e9d (CONDITIONAL_JUMP)  ; LAB_004d9e9d
    PUSH 0x5db358                       ; 004d9de4 | = "CKeyActor"
    PUSH EBX                            ; 004d9de9
    CALL FUN_0040c840                   ; 004d9dea
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9def
    TEST EAX,EAX                        ; 004d9df2
    JNZ 0x004d9ea6                      ; 004d9df4
        ;   XREF to: 004d9ea6 (CONDITIONAL_JUMP)  ; LAB_004d9ea6
    PUSH 0x5db362                       ; 004d9dfa | = "CBoxActor"
    PUSH EBX                            ; 004d9dff
    CALL FUN_0040c840                   ; 004d9e00
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9e05
    TEST EAX,EAX                        ; 004d9e08
    JNZ 0x004d9eae                      ; 004d9e0a
        ;   XREF to: 004d9eae (CONDITIONAL_JUMP)  ; LAB_004d9eae
    PUSH 0x5db36c                       ; 004d9e10 | = "CHealthItem"
    PUSH EBX                            ; 004d9e15
    CALL FUN_0040c840                   ; 004d9e16
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9e1b
    TEST EAX,EAX                        ; 004d9e1e
    JNZ 0x004d9eb7                      ; 004d9e20
        ;   XREF to: 004d9eb7 (CONDITIONAL_JUMP)  ; LAB_004d9eb7
    PUSH 0x5db378                       ; 004d9e26 | = "CGasMask"
    PUSH EBX                            ; 004d9e2b
    CALL FUN_0040c840                   ; 004d9e2c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9e31
    TEST EAX,EAX                        ; 004d9e34
    JNZ 0x004d9ec0                      ; 004d9e36
        ;   XREF to: 004d9ec0 (CONDITIONAL_JUMP)  ; LAB_004d9ec0
    PUSH 0x5db381                       ; 004d9e3c | = "CFilmReel"
    PUSH EBX                            ; 004d9e41
    CALL FUN_0040c840                   ; 004d9e42
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9e47
    TEST EAX,EAX                        ; 004d9e4a
    JNZ 0x004d9ec8                      ; 004d9e4c
        ;   XREF to: 004d9ec8 (CONDITIONAL_JUMP)  ; LAB_004d9ec8
    PUSH 0x5db38b                       ; 004d9e52 | = "CTrap"
    PUSH EBX                            ; 004d9e57
    CALL FUN_0040c840                   ; 004d9e58
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9e5d
    TEST EAX,EAX                        ; 004d9e60
    JNZ 0x004d9ed1                      ; 004d9e62
        ;   XREF to: 004d9ed1 (CONDITIONAL_JUMP)  ; LAB_004d9ed1
    PUSH 0x5db391                       ; 004d9e68 | = "CBattery"
    PUSH EBX                            ; 004d9e6d
    CALL FUN_0040c840                   ; 004d9e6e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d9e73
    TEST EAX,EAX                        ; 004d9e76
    JZ 0x004d9eda                       ; 004d9e78
        ;   XREF to: 004d9eda (CONDITIONAL_JUMP)  ; LAB_004d9eda
    MOV ESI,dword ptr [0x007bc85c]      ; 004d9e7a | DAT_007bc85c
    PUSH ESI                            ; 004d9e80
        ;   Label: LAB_004d9e80
    PUSH EBX                            ; 004d9e81
        ;   Label: LAB_004d9e81
    CALL FUN_0040c8f0                   ; 004d9e82
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004d9e87
    ADD EAX,0x2b4                       ; 004d9e8a
    POP EBP                             ; 004d9e8f
    POP EDI                             ; 004d9e90
    POP ESI                             ; 004d9e91
    POP EBX                             ; 004d9e92
    RET                                 ; 004d9e93
    MOV EBP,dword ptr [0x02661f38]      ; 004d9e94 | DAT_02661f38
        ;   Label: LAB_004d9e94
    PUSH EBP                            ; 004d9e9a
    JMP 0x004d9e81                      ; 004d9e9b
        ;   XREF to: 004d9e81 (UNCONDITIONAL_JUMP)  ; LAB_004d9e81
    MOV EDI,dword ptr [0x007bc3a4]      ; 004d9e9d | DAT_007bc3a4
        ;   Label: LAB_004d9e9d
    PUSH EDI                            ; 004d9ea3
    JMP 0x004d9e81                      ; 004d9ea4
        ;   XREF to: 004d9e81 (UNCONDITIONAL_JUMP)  ; LAB_004d9e81
    MOV ESI,dword ptr [0x01d02f80]      ; 004d9ea6 | DAT_01d02f80
        ;   Label: LAB_004d9ea6
    JMP 0x004d9e80                      ; 004d9eac
        ;   XREF to: 004d9e80 (UNCONDITIONAL_JUMP)  ; LAB_004d9e80
    MOV ECX,dword ptr [0x007bc9e8]      ; 004d9eae | DAT_007bc9e8
        ;   Label: LAB_004d9eae
    PUSH ECX                            ; 004d9eb4
    JMP 0x004d9e81                      ; 004d9eb5
        ;   XREF to: 004d9e81 (UNCONDITIONAL_JUMP)  ; LAB_004d9e81
    MOV EDX,dword ptr [0x01ceded8]      ; 004d9eb7 | DAT_01ceded8
        ;   Label: LAB_004d9eb7
    PUSH EDX                            ; 004d9ebd
    JMP 0x004d9e81                      ; 004d9ebe
        ;   XREF to: 004d9e81 (UNCONDITIONAL_JUMP)  ; LAB_004d9e81
    MOV EAX,[0x01cb81c4]                ; 004d9ec0 | DAT_01cb81c4
        ;   Label: LAB_004d9ec0
    PUSH EAX                            ; 004d9ec5
    JMP 0x004d9e81                      ; 004d9ec6
        ;   XREF to: 004d9e81 (UNCONDITIONAL_JUMP)  ; LAB_004d9e81
    MOV EBP,dword ptr [0x01c3de74]      ; 004d9ec8 | DAT_01c3de74
        ;   Label: LAB_004d9ec8
    PUSH EBP                            ; 004d9ece
    JMP 0x004d9e81                      ; 004d9ecf
        ;   XREF to: 004d9e81 (UNCONDITIONAL_JUMP)  ; LAB_004d9e81
    MOV EDI,dword ptr [0x026535b0]      ; 004d9ed1 | DAT_026535b0
        ;   Label: LAB_004d9ed1
    PUSH EDI                            ; 004d9ed7
    JMP 0x004d9e81                      ; 004d9ed8
        ;   XREF to: 004d9e81 (UNCONDITIONAL_JUMP)  ; LAB_004d9e81
    PUSH EBX                            ; 004d9eda
        ;   Label: LAB_004d9eda
    MOV EDX,0x5db39a                    ; 004d9edb | = "..\\core\\inv.cpp"
    MOV ECX,0xa3                        ; 004d9ee0
    PUSH 0x5db3aa                       ; 004d9ee5 | = "getModel - Can't classify : %s"
    MOV dword ptr [0x01d046a0],EDX      ; 004d9eea | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004d9ef0 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004d9ef6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 004d9efb
    XOR EAX,EAX                         ; 004d9efe
    POP EBP                             ; 004d9f00
    POP EDI                             ; 004d9f01
    POP ESI                             ; 004d9f02
    POP EBX                             ; 004d9f03
    RET                                 ; 004d9f04

