; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00458bc0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005d7d65
;   TerminatedCString s_Bip01_Head_005d7d74
;   TerminatedCString s_Bip01_L_ForeArm_005d7d7f
;   TerminatedCString s_Bip01_R_ForeArm_005d7d8f
;   TerminatedCString s_Bip01_L_UpperArm_005d7d9f
;   TerminatedCString s_Bip01_R_UpperArm_005d7db0
;   TerminatedCString s_Bip01_L_Foot_005d7dc1
;   TerminatedCString s_Bip01_R_Foot_005d7dce
;   TerminatedCString s_Bip01_L_Hand_005d7ddb
;   TerminatedCString s_Bip01_R_Hand_005d7de8
;   TerminatedCString s_Bip01_Spine_005d7df5
;   TerminatedCString s_Bip01_Spine2_005d7e01
;   undefined4 DAT_005d7e0e
;   TerminatedCString s_l4arm_005d7e13
;   undefined4 DAT_005d7e19
;   ... and 42 more
;
; Called Functions:
;   FUN_0040cc00
;   FUN_004a0510
;   FUN_004a6c30
;   FUN_005634f0
;   FUN_00565780
;   FUN_00569b20
;   FUN_00569eb0
;   FUN_00569f30
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458bc0
        ;   Label: FUN_00458bc0
    PUSH ESI                            ; 00458bc1
    PUSH EDI                            ; 00458bc2
    PUSH EBP                            ; 00458bc3
    MOV EBP,ESP                         ; 00458bc4
    SUB ESP,0x4                         ; 00458bc6
    MOV EBX,dword ptr [EBP + 0x14]      ; 00458bc9
    LEA EAX,[EBX + 0x158]               ; 00458bcc
    PUSH EAX                            ; 00458bd2
    CALL FUN_00569b20                   ; 00458bd3
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 00458bd8
    PUSH 0x5d7d65                       ; 00458bdb | = "COMBATMODEHARD"
    MOV EDX,dword ptr [0x0061b4d0]      ; 00458be0 | DAT_0061b4d0
    PUSH EDX                            ; 00458be6
    CALL FUN_004a6c30                   ; 00458be7
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 00458bec
    TEST EAX,EAX                        ; 00458bef
    JNZ 0x00458fb2                      ; 00458bf1
        ;   XREF to: 00458fb2 (CONDITIONAL_JUMP)  ; LAB_00458fb2
    MOV dword ptr [EBX + 0xc368],0x3f400000 ; 00458bf7
    LEA ESI,[EBX + 0x158]               ; 00458c01
        ;   Label: LAB_00458c01
    PUSH ESI                            ; 00458c07
    CALL FUN_00569f30                   ; 00458c08
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00458c0d
    PUSH 0x1                            ; 00458c10
    PUSH 0x5d7d74                       ; 00458c12 | = "Bip01 Head"
    PUSH EAX                            ; 00458c17
    MOV EDI,EAX                         ; 00458c18
    CALL FUN_005634f0                   ; 00458c1a
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458c1f
    PUSH 0x1                            ; 00458c22
    PUSH 0x5d7d7f                       ; 00458c24 | = "Bip01 L ForeArm"
    PUSH EDI                            ; 00458c29
    MOV dword ptr [EBX + 0xc2fc],EAX    ; 00458c2a
    CALL FUN_005634f0                   ; 00458c30
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458c35
    PUSH 0x1                            ; 00458c38
    PUSH 0x5d7d8f                       ; 00458c3a | = "Bip01 R ForeArm"
    PUSH EDI                            ; 00458c3f
    MOV dword ptr [EBX + 0xc308],EAX    ; 00458c40
    CALL FUN_005634f0                   ; 00458c46
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458c4b
    PUSH 0x1                            ; 00458c4e
    PUSH 0x5d7d9f                       ; 00458c50 | = "Bip01 L UpperArm"
    PUSH EDI                            ; 00458c55
    MOV dword ptr [EBX + 0xc30c],EAX    ; 00458c56
    CALL FUN_005634f0                   ; 00458c5c
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458c61
    PUSH 0x1                            ; 00458c64
    PUSH 0x5d7db0                       ; 00458c66 | = "Bip01 R UpperArm"
    PUSH EDI                            ; 00458c6b
    MOV dword ptr [EBX + 0xc310],EAX    ; 00458c6c
    CALL FUN_005634f0                   ; 00458c72
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458c77
    PUSH 0x1                            ; 00458c7a
    PUSH 0x5d7dc1                       ; 00458c7c | = "Bip01 L Foot"
    PUSH EDI                            ; 00458c81
    MOV dword ptr [EBX + 0xc314],EAX    ; 00458c82
    CALL FUN_005634f0                   ; 00458c88
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458c8d
    PUSH 0x1                            ; 00458c90
    PUSH 0x5d7dce                       ; 00458c92 | = "Bip01 R Foot"
    PUSH EDI                            ; 00458c97
    MOV dword ptr [EBX + 0xc318],EAX    ; 00458c98
    CALL FUN_005634f0                   ; 00458c9e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458ca3
    PUSH 0x1                            ; 00458ca6
    PUSH 0x5d7ddb                       ; 00458ca8 | = "Bip01 L Hand"
    PUSH EDI                            ; 00458cad
    MOV dword ptr [EBX + 0xc31c],EAX    ; 00458cae
    CALL FUN_005634f0                   ; 00458cb4
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458cb9
    MOV dword ptr [EBX + 0xc300],EAX    ; 00458cbc
    PUSH 0x1                            ; 00458cc2
    PUSH 0x5d7de8                       ; 00458cc4 | = "Bip01 R Hand"
    PUSH EDI                            ; 00458cc9
    CALL FUN_005634f0                   ; 00458cca
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458ccf
    PUSH 0x1                            ; 00458cd2
    PUSH 0x5d7df5                       ; 00458cd4 | = "Bip01 Spine"
    PUSH EDI                            ; 00458cd9
    MOV dword ptr [EBX + 0xc304],EAX    ; 00458cda
    CALL FUN_005634f0                   ; 00458ce0
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458ce5
    PUSH 0x1                            ; 00458ce8
    PUSH 0x5d7e01                       ; 00458cea | = "Bip01 Spine2"
    PUSH EDI                            ; 00458cef
    MOV dword ptr [EBX + 0xc320],EAX    ; 00458cf0
    CALL FUN_005634f0                   ; 00458cf6
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00458cfb
    PUSH ESI                            ; 00458cfe
    MOV dword ptr [EBX + 0xc324],EAX    ; 00458cff
    CALL FUN_00569eb0                   ; 00458d05
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00458d0a
    PUSH 0x1                            ; 00458d0d
    PUSH 0x5d7e0e                       ; 00458d0f | DAT_005d7e0e
    PUSH EAX                            ; 00458d14
    MOV ESI,EAX                         ; 00458d15
    MOV EDI,EAX                         ; 00458d17
    CALL FUN_00565780                   ; 00458d19
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00458d1e
    PUSH 0x1                            ; 00458d21
    PUSH 0x5d7e13                       ; 00458d23 | = "l4arm"
    PUSH ESI                            ; 00458d28
    MOV dword ptr [EBX + 0xc328],EAX    ; 00458d29
    CALL FUN_00565780                   ; 00458d2f
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00458d34
    PUSH 0x1                            ; 00458d37
    PUSH 0x5d7e19                       ; 00458d39 | DAT_005d7e19
    PUSH ESI                            ; 00458d3e
    MOV dword ptr [EBX + 0xc32c],EAX    ; 00458d3f
    CALL FUN_00565780                   ; 00458d45
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00458d4a
    PUSH 0x0                            ; 00458d4d
    PUSH 0x5d7e1e                       ; 00458d4f | = "r4arm"
    PUSH ESI                            ; 00458d54
    MOV dword ptr [EBX + 0xc330],EAX    ; 00458d55
    CALL FUN_00565780                   ; 00458d5b
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00458d60
    MOV dword ptr [EBX + 0xc334],EAX    ; 00458d63
    TEST EAX,EAX                        ; 00458d69
    JL 0x00458fc1                       ; 00458d6b
        ;   XREF to: 00458fc1 (CONDITIONAL_JUMP)  ; LAB_00458fc1
    PUSH 0x0                            ; 00458d71
        ;   Label: LAB_00458d71
    PUSH 0x5d7e24                       ; 00458d73 | = "waist"
    PUSH EDI                            ; 00458d78
    CALL FUN_00565780                   ; 00458d79
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00458d7e
    PUSH 0x1                            ; 00458d81
    PUSH 0x5d7e2a                       ; 00458d83 | = "torso"
    PUSH EDI                            ; 00458d88
    MOV dword ptr [EBX + 0xc338],EAX    ; 00458d89
    CALL FUN_00565780                   ; 00458d8f
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 00458d94
    PUSH 0x1                            ; 00458d97
    PUSH 0x5d7e30                       ; 00458d99 | DAT_005d7e30
    PUSH EDI                            ; 00458d9e
    MOV dword ptr [EBX + 0xc33c],EAX    ; 00458d9f
    CALL FUN_00565780                   ; 00458da5
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    MOV dword ptr [EBX + 0x2384],0x0    ; 00458daa
    MOV dword ptr [EBX + 0xc340],EAX    ; 00458db4
    MOV EAX,dword ptr [EBX + 0xc300]    ; 00458dba
    MOV dword ptr [EBX + 0x25a8],EAX    ; 00458dc0
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 00458dc6
    MOV dword ptr [EBX + 0x25ac],EAX    ; 00458dcc
    MOV EAX,dword ptr [EBX + 0xc304]    ; 00458dd2
    MOV dword ptr [EBX + 0x2620],EAX    ; 00458dd8
    ADD ESP,0xc                         ; 00458dde
    MOV EAX,dword ptr [EBX + 0xc334]    ; 00458de1
    PUSH EBX                            ; 00458de7
    MOV dword ptr [EBX + 0x2624],EAX    ; 00458de8
    CALL FUN_004a0510                   ; 00458dee
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    MOV ESI,dword ptr [EBX + 0xc2ec]    ; 00458df3
    ADD ESP,0x4                         ; 00458df9
    TEST ESI,ESI                        ; 00458dfc
    SETNZ AL                            ; 00458dfe
    PUSH 0x3f800000                     ; 00458e01
    AND EAX,0xff                        ; 00458e06
    PUSH 0x0                            ; 00458e0b
    MOV dword ptr [EBX + 0xfc],EAX      ; 00458e0d
    CALL FUN_0040cc00                   ; 00458e13
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + -0x4],EAX      ; 00458e18
    ADD ESP,0x8                         ; 00458e1b
    MOV EDI,dword ptr [EBX + 0xc338]    ; 00458e1e
    MOV EAX,dword ptr [EBP + -0x4]      ; 00458e24
    MOV dword ptr [EBX + 0xc35c],EAX    ; 00458e27
    TEST EDI,EDI                        ; 00458e2d
    JL 0x00458e52                       ; 00458e2f
        ;   XREF to: 00458e52 (CONDITIONAL_JUMP)  ; LAB_00458e52
    FLD float ptr [EBX + 0x3000]        ; 00458e31
    FLDZ                                ; 00458e37
    FCOMPP                              ; 00458e39
    FNSTSW AX                           ; 00458e3b
    SAHF                                ; 00458e3d
    JBE 0x00458e52                      ; 00458e3e
        ;   XREF to: 00458e52 (CONDITIONAL_JUMP)  ; LAB_00458e52
    FLD float ptr [EBX + 0x2490]        ; 00458e40
    FADD double ptr [0x005d7ef3]        ; 00458e46 | DAT_005d7ef3
    FSTP float ptr [EBX + 0x3000]       ; 00458e4c
    PUSH 0x5d7e35                       ; 00458e52 | = "d_cooper.dfm"
        ;   Label: LAB_00458e52
    LEA ESI,[EBX + 0x24a8]              ; 00458e57
    PUSH ESI                            ; 00458e5d
    MOV dword ptr [EBX + 0xc348],0x0    ; 00458e5e
    CALL FUN_005c04e0                   ; 00458e68
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    LEA EDI,[EBX + 0xc36c]              ; 00458e6d
    ADD ESP,0x8                         ; 00458e73
    TEST EAX,EAX                        ; 00458e76
    JZ 0x00458fd0                       ; 00458e78
        ;   XREF to: 00458fd0 (CONDITIONAL_JUMP)  ; LAB_00458fd0
    PUSH 0x5d7e45                       ; 00458e7e | = "d_deputy.dfm"
    PUSH ESI                            ; 00458e83
    CALL FUN_005c04e0                   ; 00458e84
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458e89
    TEST EAX,EAX                        ; 00458e8c
    JZ 0x00458fd7                       ; 00458e8e
        ;   XREF to: 00458fd7 (CONDITIONAL_JUMP)  ; LAB_00458fd7
    PUSH 0x5d7e55                       ; 00458e94 | = "d_editor.dfm"
    PUSH ESI                            ; 00458e99
    CALL FUN_005c04e0                   ; 00458e9a
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458e9f
    TEST EAX,EAX                        ; 00458ea2
    JZ 0x00458fde                       ; 00458ea4
        ;   XREF to: 00458fde (CONDITIONAL_JUMP)  ; LAB_00458fde
    PUSH 0x5d7e65                       ; 00458eaa | = "d_gretchen.dfm"
    PUSH ESI                            ; 00458eaf
    CALL FUN_005c04e0                   ; 00458eb0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458eb5
    TEST EAX,EAX                        ; 00458eb8
    JZ 0x00458fe8                       ; 00458eba
        ;   XREF to: 00458fe8 (CONDITIONAL_JUMP)  ; LAB_00458fe8
    PUSH 0x5d7e77                       ; 00458ec0 | = "d_innkeeper.dfm"
    PUSH ESI                            ; 00458ec5
    CALL FUN_005c04e0                   ; 00458ec6
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458ecb
    TEST EAX,EAX                        ; 00458ece
    JZ 0x00458ff2                       ; 00458ed0
        ;   XREF to: 00458ff2 (CONDITIONAL_JUMP)  ; LAB_00458ff2
    PUSH 0x5d7e8a                       ; 00458ed6 | = "d_librarian.dfm"
    PUSH ESI                            ; 00458edb
    CALL FUN_005c04e0                   ; 00458edc
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458ee1
    TEST EAX,EAX                        ; 00458ee4
    JZ 0x00458ffc                       ; 00458ee6
        ;   XREF to: 00458ffc (CONDITIONAL_JUMP)  ; LAB_00458ffc
    PUSH 0x5d7e9d                       ; 00458eec | = "d_marm.dfm"
    PUSH ESI                            ; 00458ef1
    CALL FUN_005c04e0                   ; 00458ef2
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458ef7
    TEST EAX,EAX                        ; 00458efa
    JZ 0x00459006                       ; 00458efc
        ;   XREF to: 00459006 (CONDITIONAL_JUMP)  ; LAB_00459006
    PUSH 0x5d7eab                       ; 00458f02 | = "d_mrsbrody.dfm"
    PUSH ESI                            ; 00458f07
    CALL FUN_005c04e0                   ; 00458f08
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458f0d
    TEST EAX,EAX                        ; 00458f10
    JZ 0x00459010                       ; 00458f12
        ;   XREF to: 00459010 (CONDITIONAL_JUMP)  ; LAB_00459010
    PUSH 0x5d7ebd                       ; 00458f18 | = "d_pastor.dfm"
    PUSH ESI                            ; 00458f1d
    CALL FUN_005c04e0                   ; 00458f1e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458f23
    TEST EAX,EAX                        ; 00458f26
    JZ 0x0045901a                       ; 00458f28
        ;   XREF to: 0045901a (CONDITIONAL_JUMP)  ; LAB_0045901a
    PUSH 0x5d7ecd                       ; 00458f2e | = "d_sheriff.dfm"
    PUSH ESI                            ; 00458f33
    CALL FUN_005c04e0                   ; 00458f34
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458f39
    TEST EAX,EAX                        ; 00458f3c
    JZ 0x00459024                       ; 00458f3e
        ;   XREF to: 00459024 (CONDITIONAL_JUMP)  ; LAB_00459024
    PUSH 0x5d7ede                       ; 00458f44 | = "d_shopkeep.dfm"
    PUSH ESI                            ; 00458f49
    CALL FUN_005c04e0                   ; 00458f4a
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00458f4f
    TEST EAX,EAX                        ; 00458f52
    JNZ 0x0045902e                      ; 00458f54
        ;   XREF to: 0045902e (CONDITIONAL_JUMP)  ; LAB_0045902e
    MOV ESI,0x5d7eed                    ; 00458f5a | DAT_005d7eed
    PUSH EDI                            ; 00458f5f
        ;   Label: LAB_00458f5f
    MOV AL,byte ptr [ESI]               ; 00458f60 | DAT_005d7eed | DAT_005d7eef | DAT_005d7ef0
        ;   Label: LAB_00458f60
    MOV byte ptr [EDI],AL               ; 00458f62
    CMP AL,0x0                          ; 00458f64
    JZ 0x00458f78                       ; 00458f66
        ;   XREF to: 00458f78 (CONDITIONAL_JUMP)  ; LAB_00458f78
    MOV AL,byte ptr [ESI + 0x1]         ; 00458f68 | DAT_005d7eee | DAT_005d7ef0 | DAT_005d7ef1
    ADD ESI,0x2                         ; 00458f6b
    MOV byte ptr [EDI + 0x1],AL         ; 00458f6e
    ADD EDI,0x2                         ; 00458f71
    CMP AL,0x0                          ; 00458f74
    JNZ 0x00458f60                      ; 00458f76
        ;   XREF to: 00458f60 (CONDITIONAL_JUMP)  ; LAB_00458f60
    POP EDI                             ; 00458f78
        ;   Label: LAB_00458f78
    MOV dword ptr [EBX + 0xc350],0x0    ; 00458f79
    MOV dword ptr [EBX + 0xc354],0x0    ; 00458f83
    MOV dword ptr [EBX + 0xc358],0x0    ; 00458f8d
    MOV dword ptr [EBX + 0xc364],0x0    ; 00458f97
    MOV dword ptr [EBX + 0xc34c],0x0    ; 00458fa1
    MOV ESP,EBP                         ; 00458fab
    POP EBP                             ; 00458fad
    POP EDI                             ; 00458fae
    POP ESI                             ; 00458faf
    POP EBX                             ; 00458fb0
    RET                                 ; 00458fb1
    MOV dword ptr [EBX + 0xc368],0x3f800000 ; 00458fb2
        ;   Label: LAB_00458fb2
    JMP 0x00458c01                      ; 00458fbc
        ;   XREF to: 00458c01 (UNCONDITIONAL_JUMP)  ; LAB_00458c01
    MOV dword ptr [EBX + 0xc334],0x3b   ; 00458fc1
        ;   Label: LAB_00458fc1
    JMP 0x00458d71                      ; 00458fcb
        ;   XREF to: 00458d71 (UNCONDITIONAL_JUMP)  ; LAB_00458d71
    MOV ESI,0x5d7e42                    ; 00458fd0 | DAT_005d7e42
        ;   Label: LAB_00458fd0
    JMP 0x00458f5f                      ; 00458fd5
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7e52                    ; 00458fd7 | DAT_005d7e52
        ;   Label: LAB_00458fd7
    JMP 0x00458f5f                      ; 00458fdc
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7e62                    ; 00458fde | DAT_005d7e62
        ;   Label: LAB_00458fde
    JMP 0x00458f5f                      ; 00458fe3
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7e74                    ; 00458fe8 | DAT_005d7e74
        ;   Label: LAB_00458fe8
    JMP 0x00458f5f                      ; 00458fed
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7e87                    ; 00458ff2 | DAT_005d7e87
        ;   Label: LAB_00458ff2
    JMP 0x00458f5f                      ; 00458ff7
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7e9a                    ; 00458ffc | DAT_005d7e9a
        ;   Label: LAB_00458ffc
    JMP 0x00458f5f                      ; 00459001
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7ea8                    ; 00459006 | DAT_005d7ea8
        ;   Label: LAB_00459006
    JMP 0x00458f5f                      ; 0045900b
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7eba                    ; 00459010 | DAT_005d7eba
        ;   Label: LAB_00459010
    JMP 0x00458f5f                      ; 00459015
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7eca                    ; 0045901a | DAT_005d7eca
        ;   Label: LAB_0045901a
    JMP 0x00458f5f                      ; 0045901f
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7edb                    ; 00459024 | DAT_005d7edb
        ;   Label: LAB_00459024
    JMP 0x00458f5f                      ; 00459029
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f
    MOV ESI,0x5d7ef0                    ; 0045902e | DAT_005d7ef0
        ;   Label: LAB_0045902e
    JMP 0x00458f5f                      ; 00459033
        ;   XREF to: 00458f5f (UNCONDITIONAL_JUMP)  ; LAB_00458f5f

