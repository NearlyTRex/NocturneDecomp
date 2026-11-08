; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4dd0(void)
;
;
; XREF[1]:
;   FUN_004d8060 at 004d8321
;
; Referenced Globals:
;   undefined4 DAT_01c58aa0
;   undefined4 DAT_01c58acc
;   undefined4 DAT_01c6eaa0
;   undefined4 DAT_01c726a8
;   undefined4 DAT_01c72908
;   undefined4 DAT_01c72b68
;   undefined4 DAT_01c986d8
;   undefined4 DAT_01c986f0
;   undefined4 DAT_01c9872c
;   undefined4 DAT_01c98744
;   undefined4 DAT_01c9dadc
;   undefined4 DAT_01c9daf4
;   undefined4 DAT_01c9db38
;   undefined4 DAT_01c9db50
;   undefined4 DAT_01c9f1bc
;   ... and 33 more
;
; Called Functions:
;   FUN_004abf50
;   FUN_004ac690
;   FUN_004acf20
;   FUN_004af400
;   FUN_004afcd0
;   FUN_004b15d0
;   FUN_004b1820
;   FUN_004b1d90
;   FUN_004b22d0
;   FUN_004b2880
;   FUN_004b2d40
;   FUN_004b3530
;   FUN_004b3cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4dd0
        ;   Label: FUN_004b4dd0
    PUSH ESI                            ; 004b4dd1
    PUSH EDI                            ; 004b4dd2
    PUSH EBP                            ; 004b4dd3
    MOV EBP,ESP                         ; 004b4dd4
    AND ESP,0xfffffff8                  ; 004b4dd6
    XOR EDX,EDX                         ; 004b4dd9
    MOV EBX,0x1c58aa0                   ; 004b4ddb
    MOV dword ptr [0x01caf068],EDX      ; 004b4de0 | DAT_01caf068
    CALL FUN_004b15d0                   ; 004b4de6
        ;   XREF to: 004b15d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b15d0()
    LEA ESI,[EBX + 0x16000]             ; 004b4deb
    MOV EAX,dword ptr [EBX]             ; 004b4df1 | DAT_01c58aa0 | DAT_01c58acc
        ;   Label: LAB_004b4df1
    TEST EAX,EAX                        ; 004b4df3
    JNZ 0x004b50f0                      ; 004b4df5
        ;   XREF to: 004b50f0 (CONDITIONAL_JUMP)  ; LAB_004b50f0
    ADD EBX,0x2c                        ; 004b4dfb
        ;   Label: LAB_004b4dfb
    CMP EBX,ESI                         ; 004b4dfe
    JNZ 0x004b4df1                      ; 004b4e00
        ;   XREF to: 004b4df1 (CONDITIONAL_JUMP)  ; LAB_004b4df1
    MOV EBX,0x1c986b4                   ; 004b4e02
    LEA ESI,[EBX + 0x5400]              ; 004b4e07
    FLD float ptr [EBX + 0x24]          ; 004b4e0d | DAT_01c986d8 | DAT_01c9872c
        ;   Label: LAB_004b4e0d
    FLDZ                                ; 004b4e10
    FCOMPP                              ; 004b4e12
    FNSTSW AX                           ; 004b4e14
    SAHF                                ; 004b4e16
    JNC 0x004b4e23                      ; 004b4e17
        ;   XREF to: 004b4e23 (CONDITIONAL_JUMP)  ; LAB_004b4e23
    PUSH EBX                            ; 004b4e19
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b4e1a | DAT_01c986f0 | DAT_01c98744
    CALL dword ptr [EAX + 0x4]          ; 004b4e1d
    ADD ESP,0x4                         ; 004b4e20
    ADD EBX,0x54                        ; 004b4e23
        ;   Label: LAB_004b4e23
    CMP EBX,ESI                         ; 004b4e26
    JNZ 0x004b4e0d                      ; 004b4e28
        ;   XREF to: 004b4e0d (CONDITIONAL_JUMP)  ; LAB_004b4e0d
    MOV EBX,0x1c9dab8                   ; 004b4e2a
    LEA ESI,[EBX + 0x1700]              ; 004b4e2f
    FLD float ptr [EBX + 0x24]          ; 004b4e35 | DAT_01c9dadc | DAT_01c9db38
        ;   Label: LAB_004b4e35
    FLDZ                                ; 004b4e38
    FCOMPP                              ; 004b4e3a
    FNSTSW AX                           ; 004b4e3c
    SAHF                                ; 004b4e3e
    JNC 0x004b4e4b                      ; 004b4e3f
        ;   XREF to: 004b4e4b (CONDITIONAL_JUMP)  ; LAB_004b4e4b
    PUSH EBX                            ; 004b4e41
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b4e42 | DAT_01c9daf4 | DAT_01c9db50
    CALL dword ptr [EAX + 0x4]          ; 004b4e45
    ADD ESP,0x4                         ; 004b4e48
    ADD EBX,0x5c                        ; 004b4e4b
        ;   Label: LAB_004b4e4b
    CMP EBX,ESI                         ; 004b4e4e
    JNZ 0x004b4e35                      ; 004b4e50
        ;   XREF to: 004b4e35 (CONDITIONAL_JUMP)  ; LAB_004b4e35
    MOV EBX,0x1c9f1bc                   ; 004b4e52
    LEA EDI,[EBX + 0x730]               ; 004b4e57
    MOV ESI,dword ptr [EBX]             ; 004b4e5d | DAT_01c9f1bc | DAT_01c9f218
        ;   Label: LAB_004b4e5d
    TEST ESI,ESI                        ; 004b4e5f
    JZ 0x004b4e6c                       ; 004b4e61
        ;   XREF to: 004b4e6c (CONDITIONAL_JUMP)  ; LAB_004b4e6c
    PUSH EBX                            ; 004b4e63 | DAT_01c9f1bc | DAT_01c9f218
    CALL FUN_004af400                   ; 004b4e64
        ;   XREF to: 004af400 (UNCONDITIONAL_CALL)  ; undefined FUN_004af400()
    ADD ESP,0x4                         ; 004b4e69
    ADD EBX,0x5c                        ; 004b4e6c
        ;   Label: LAB_004b4e6c
    CMP EBX,EDI                         ; 004b4e6f
    JNZ 0x004b4e5d                      ; 004b4e71
        ;   XREF to: 004b4e5d (CONDITIONAL_JUMP)  ; LAB_004b4e5d
    MOV ECX,dword ptr [0x01c726a8]      ; 004b4e73 | DAT_01c726a8
    XOR ESI,ESI                         ; 004b4e79
    TEST ECX,ECX                        ; 004b4e7b
    JLE 0x004b4ea8                      ; 004b4e7d
        ;   XREF to: 004b4ea8 (CONDITIONAL_JUMP)  ; LAB_004b4ea8
    MOV EBX,0x1c726b0                   ; 004b4e7f
    MOV EAX,dword ptr [EBX + 0x258]     ; 004b4e84 | DAT_01c72908 | DAT_01c72b68
        ;   Label: LAB_004b4e84
    TEST EAX,EAX                        ; 004b4e8a
    JZ 0x004b4e97                       ; 004b4e8c
        ;   XREF to: 004b4e97 (CONDITIONAL_JUMP)  ; LAB_004b4e97
    PUSH EBX                            ; 004b4e8e
    CALL FUN_004acf20                   ; 004b4e8f
        ;   XREF to: 004acf20 (UNCONDITIONAL_CALL)  ; undefined FUN_004acf20()
    ADD ESP,0x4                         ; 004b4e94
    MOV EDI,dword ptr [0x01c726a8]      ; 004b4e97 | DAT_01c726a8
        ;   Label: LAB_004b4e97
    INC ESI                             ; 004b4e9d
    ADD EBX,0x260                       ; 004b4e9e
    CMP ESI,EDI                         ; 004b4ea4
    JL 0x004b4e84                       ; 004b4ea6
        ;   XREF to: 004b4e84 (CONDITIONAL_JUMP)  ; LAB_004b4e84
    MOV EBX,0x1c9f8f0                   ; 004b4ea8
        ;   Label: LAB_004b4ea8
    LEA ESI,[EBX + 0xa400]              ; 004b4ead
    FLD float ptr [EBX + 0x24]          ; 004b4eb3 | DAT_01c9f914 | DAT_01c9f9b8
        ;   Label: LAB_004b4eb3
    FLDZ                                ; 004b4eb6
    FCOMPP                              ; 004b4eb8
    FNSTSW AX                           ; 004b4eba
    SAHF                                ; 004b4ebc
    JNC 0x004b4ec9                      ; 004b4ebd
        ;   XREF to: 004b4ec9 (CONDITIONAL_JUMP)  ; LAB_004b4ec9
    PUSH EBX                            ; 004b4ebf
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b4ec0 | DAT_01c9f92c | DAT_01c9f9d0
    CALL dword ptr [EAX + 0x4]          ; 004b4ec3
    ADD ESP,0x4                         ; 004b4ec6
    ADD EBX,0xa4                        ; 004b4ec9
        ;   Label: LAB_004b4ec9
    CMP EBX,ESI                         ; 004b4ecf
    JNZ 0x004b4eb3                      ; 004b4ed1
        ;   XREF to: 004b4eb3 (CONDITIONAL_JUMP)  ; LAB_004b4eb3
    MOV EBX,0x1ca9cf4                   ; 004b4ed3
    LEA ESI,[EBX + 0x168]               ; 004b4ed8
    MOV EAX,dword ptr [EBX + 0x20]      ; 004b4ede | DAT_01ca9d14 | DAT_01ca9d38
        ;   Label: LAB_004b4ede
    TEST EAX,EAX                        ; 004b4ee1
    JZ 0x004b4eee                       ; 004b4ee3
        ;   XREF to: 004b4eee (CONDITIONAL_JUMP)  ; LAB_004b4eee
    PUSH EBX                            ; 004b4ee5
    CALL FUN_004afcd0                   ; 004b4ee6
        ;   XREF to: 004afcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004afcd0()
    ADD ESP,0x4                         ; 004b4eeb
    ADD EBX,0x24                        ; 004b4eee
        ;   Label: LAB_004b4eee
    CMP EBX,ESI                         ; 004b4ef1
    JNZ 0x004b4ede                      ; 004b4ef3
        ;   XREF to: 004b4ede (CONDITIONAL_JUMP)  ; LAB_004b4ede
    MOV EBX,0x1ca9e60                   ; 004b4ef5
    LEA ESI,[EBX + 0x2900]              ; 004b4efa
    FLD float ptr [EBX + 0x24]          ; 004b4f00 | DAT_01ca9e84 | DAT_01ca9f28
        ;   Label: LAB_004b4f00
    FLDZ                                ; 004b4f03
    FCOMPP                              ; 004b4f05
    FNSTSW AX                           ; 004b4f07
    SAHF                                ; 004b4f09
    JNC 0x004b4f16                      ; 004b4f0a
        ;   XREF to: 004b4f16 (CONDITIONAL_JUMP)  ; LAB_004b4f16
    PUSH EBX                            ; 004b4f0c
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b4f0d | DAT_01ca9e9c | DAT_01ca9f40
    CALL dword ptr [EAX + 0x4]          ; 004b4f10
    ADD ESP,0x4                         ; 004b4f13
    ADD EBX,0xa4                        ; 004b4f16
        ;   Label: LAB_004b4f16
    CMP EBX,ESI                         ; 004b4f1c
    JNZ 0x004b4f00                      ; 004b4f1e
        ;   XREF to: 004b4f00 (CONDITIONAL_JUMP)  ; LAB_004b4f00
    MOV EBX,0x1cac764                   ; 004b4f20
    LEA ESI,[EBX + 0x1400]              ; 004b4f25
    FLD float ptr [EBX + 0x24]          ; 004b4f2b | DAT_01cac788 | DAT_01cac7d8
        ;   Label: LAB_004b4f2b
    FLDZ                                ; 004b4f2e
    FCOMPP                              ; 004b4f30
    FNSTSW AX                           ; 004b4f32
    SAHF                                ; 004b4f34
    JNC 0x004b4f41                      ; 004b4f35
        ;   XREF to: 004b4f41 (CONDITIONAL_JUMP)  ; LAB_004b4f41
    PUSH EBX                            ; 004b4f37
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b4f38 | DAT_01cac7a0 | DAT_01cac7f0
    CALL dword ptr [EAX + 0x4]          ; 004b4f3b
    ADD ESP,0x4                         ; 004b4f3e
    ADD EBX,0x50                        ; 004b4f41
        ;   Label: LAB_004b4f41
    CMP EBX,ESI                         ; 004b4f44
    JNZ 0x004b4f2b                      ; 004b4f46
        ;   XREF to: 004b4f2b (CONDITIONAL_JUMP)  ; LAB_004b4f2b
    MOV EBX,0x1cadb68                   ; 004b4f48
    LEA ESI,[EBX + 0x1500]              ; 004b4f4d
    FLD float ptr [EBX + 0x24]          ; 004b4f53 | DAT_01cadb8c | DAT_01cadbe0
        ;   Label: LAB_004b4f53
    FLDZ                                ; 004b4f56
    FCOMPP                              ; 004b4f58
    FNSTSW AX                           ; 004b4f5a
    SAHF                                ; 004b4f5c
    JNC 0x004b4f69                      ; 004b4f5d
        ;   XREF to: 004b4f69 (CONDITIONAL_JUMP)  ; LAB_004b4f69
    PUSH EBX                            ; 004b4f5f
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b4f60 | DAT_01cadba4 | DAT_01cadbf8
    CALL dword ptr [EAX + 0x4]          ; 004b4f63
    ADD ESP,0x4                         ; 004b4f66
    ADD EBX,0x54                        ; 004b4f69
        ;   Label: LAB_004b4f69
    CMP EBX,ESI                         ; 004b4f6c
    JNZ 0x004b4f53                      ; 004b4f6e
        ;   XREF to: 004b4f53 (CONDITIONAL_JUMP)  ; LAB_004b4f53
    MOV EBX,0x1c9dab8                   ; 004b4f70
    LEA ESI,[EBX + 0x1700]              ; 004b4f75
    FLD float ptr [EBX + 0x24]          ; 004b4f7b | DAT_01c9dadc | DAT_01c9db38
        ;   Label: LAB_004b4f7b
    FLDZ                                ; 004b4f7e
    FCOMPP                              ; 004b4f80
    FNSTSW AX                           ; 004b4f82
    SAHF                                ; 004b4f84
    JNC 0x004b4f91                      ; 004b4f85
        ;   XREF to: 004b4f91 (CONDITIONAL_JUMP)  ; LAB_004b4f91
    PUSH EBX                            ; 004b4f87
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b4f88 | DAT_01c9daf4 | DAT_01c9db50
    CALL dword ptr [EAX + 0x4]          ; 004b4f8b
    ADD ESP,0x4                         ; 004b4f8e
    ADD EBX,0x5c                        ; 004b4f91
        ;   Label: LAB_004b4f91
    CMP EBX,ESI                         ; 004b4f94
    JNZ 0x004b4f7b                      ; 004b4f96
        ;   XREF to: 004b4f7b (CONDITIONAL_JUMP)  ; LAB_004b4f7b
    MOV EAX,[0x01c6eaa0]                ; 004b4f98 | DAT_01c6eaa0
    XOR EBX,ESI                         ; 004b4f9d
    TEST EAX,EAX                        ; 004b4f9f
    JLE 0x004b4fc0                      ; 004b4fa1
        ;   XREF to: 004b4fc0 (CONDITIONAL_JUMP)  ; LAB_004b4fc0
    MOV ESI,0x1c6eaa8                   ; 004b4fa3
    PUSH ESI                            ; 004b4fa8
        ;   Label: LAB_004b4fa8
    CALL FUN_004ac690                   ; 004b4fa9
        ;   XREF to: 004ac690 (UNCONDITIONAL_CALL)  ; undefined FUN_004ac690()
    INC EBX                             ; 004b4fae
    MOV EDX,dword ptr [0x01c6eaa0]      ; 004b4faf | DAT_01c6eaa0
    ADD ESP,0x4                         ; 004b4fb5
    ADD ESI,0x3c                        ; 004b4fb8
    CMP EBX,EDX                         ; 004b4fbb
    JL 0x004b4fa8                       ; 004b4fbd
        ;   XREF to: 004b4fa8 (CONDITIONAL_JUMP)  ; LAB_004b4fa8
    NOP                                 ; 004b4fbf
    MOV EBX,0x1cb0070                   ; 004b4fc0
        ;   Label: LAB_004b4fc0
    LEA ESI,[EBX + 0x118]               ; 004b4fc5
    PUSH EBX                            ; 004b4fcb | DAT_01cb008c
        ;   Label: LAB_004b4fcb
    CALL FUN_004b1820                   ; 004b4fcc
        ;   XREF to: 004b1820 (UNCONDITIONAL_CALL)  ; undefined FUN_004b1820()
    ADD EBX,0x1c                        ; 004b4fd1
    ADD ESP,0x4                         ; 004b4fd4
    CMP EBX,ESI                         ; 004b4fd7
    JNZ 0x004b4fcb                      ; 004b4fd9
        ;   XREF to: 004b4fcb (CONDITIONAL_JUMP)  ; LAB_004b4fcb
    MOV EBX,0x1cb018c                   ; 004b4fdb
    LEA ESI,[EBX + 0x4dd0]              ; 004b4fe0
    PUSH EBX                            ; 004b4fe6
        ;   Label: LAB_004b4fe6
    CALL FUN_004b1d90                   ; 004b4fe7
        ;   XREF to: 004b1d90 (UNCONDITIONAL_CALL)  ; undefined FUN_004b1d90()
    ADD EBX,0x3e4                       ; 004b4fec
    ADD ESP,0x4                         ; 004b4ff2
    CMP EBX,ESI                         ; 004b4ff5
    JNZ 0x004b4fe6                      ; 004b4ff7
        ;   XREF to: 004b4fe6 (CONDITIONAL_JUMP)  ; LAB_004b4fe6
    MOV EBX,0x1cb4f60                   ; 004b4ff9
    LEA ESI,[EBX + 0x8c0]               ; 004b4ffe
    PUSH EBX                            ; 004b5004
        ;   Label: LAB_004b5004
    CALL FUN_004b22d0                   ; 004b5005
        ;   XREF to: 004b22d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b22d0()
    ADD EBX,0x70                        ; 004b500a
    ADD ESP,0x4                         ; 004b500d
    CMP EBX,ESI                         ; 004b5010
    JNZ 0x004b5004                      ; 004b5012
        ;   XREF to: 004b5004 (CONDITIONAL_JUMP)  ; LAB_004b5004
    MOV EBX,0x1cb5824                   ; 004b5014
    XOR ESI,ESI                         ; 004b5019
    LEA EDI,[EBX + 0x4650]              ; 004b501b
    TEST dword ptr [EBX],0x7fffffff     ; 004b5021 | DAT_01cb5824 | DAT_01cb5848
        ;   Label: LAB_004b5021
    JZ 0x004b5040                       ; 004b5027
        ;   XREF to: 004b5040 (CONDITIONAL_JUMP)  ; LAB_004b5040
    TEST ESI,ESI                        ; 004b5029
    JNZ 0x004b5037                      ; 004b502b
        ;   XREF to: 004b5037 (CONDITIONAL_JUMP)  ; LAB_004b5037
    CALL FUN_004b2880                   ; 004b502d
        ;   XREF to: 004b2880 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2880()
    MOV ESI,0x1                         ; 004b5032
    PUSH EBX                            ; 004b5037 | DAT_01cb5824 | DAT_01cb5848
        ;   Label: LAB_004b5037
    CALL FUN_004b2d40                   ; 004b5038
        ;   XREF to: 004b2d40 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2d40()
    ADD ESP,0x4                         ; 004b503d
    ADD EBX,0x24                        ; 004b5040
        ;   Label: LAB_004b5040
    CMP EBX,EDI                         ; 004b5043
    JNZ 0x004b5021                      ; 004b5045
        ;   XREF to: 004b5021 (CONDITIONAL_JUMP)  ; LAB_004b5021
    MOV EBX,0x1cb9e78                   ; 004b5047
    LEA ESI,[EBX + 0x1b8]               ; 004b504c
    PUSH EBX                            ; 004b5052
        ;   Label: LAB_004b5052
    CALL FUN_004b3530                   ; 004b5053
        ;   XREF to: 004b3530 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3530()
    ADD EBX,0x2c                        ; 004b5058
    ADD ESP,0x4                         ; 004b505b
    CMP EBX,ESI                         ; 004b505e
    JNZ 0x004b5052                      ; 004b5060
        ;   XREF to: 004b5052 (CONDITIONAL_JUMP)  ; LAB_004b5052
    MOV EBX,0x1cba034                   ; 004b5062
    LEA ESI,[EBX + 0xe10]               ; 004b5067
    PUSH EBX                            ; 004b506d
        ;   Label: LAB_004b506d
    CALL FUN_004b3cd0                   ; 004b506e
        ;   XREF to: 004b3cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3cd0()
    ADD EBX,0x24                        ; 004b5073
    ADD ESP,0x4                         ; 004b5076
    CMP EBX,ESI                         ; 004b5079
    JNZ 0x004b506d                      ; 004b507b
        ;   XREF to: 004b506d (CONDITIONAL_JUMP)  ; LAB_004b506d
    MOV EBX,0x1cbae48                   ; 004b507d
    LEA ESI,[EBX + 0x12c0]              ; 004b5082
    PUSH EBX                            ; 004b5088
        ;   Label: LAB_004b5088
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5089 | DAT_01cbae84 | DAT_01cbaee4
    CALL dword ptr [EAX + 0x4]          ; 004b508c
    ADD EBX,0x60                        ; 004b508f
    ADD ESP,0x4                         ; 004b5092
    CMP EBX,ESI                         ; 004b5095
    JNZ 0x004b5088                      ; 004b5097
        ;   XREF to: 004b5088 (CONDITIONAL_JUMP)  ; LAB_004b5088
    MOV EBX,0x1cbc10c                   ; 004b5099
    LEA ESI,[EBX + 0x4000]              ; 004b509e
    FLD float ptr [EBX + 0x24]          ; 004b50a4 | DAT_01cbc130 | DAT_01cbc170
        ;   Label: LAB_004b50a4
    FLDZ                                ; 004b50a7
    FCOMPP                              ; 004b50a9
    FNSTSW AX                           ; 004b50ab
    SAHF                                ; 004b50ad
    JNC 0x004b50ba                      ; 004b50ae
        ;   XREF to: 004b50ba (CONDITIONAL_JUMP)  ; LAB_004b50ba
    PUSH EBX                            ; 004b50b0
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b50b1 | DAT_01cbc148 | DAT_01cbc188
    CALL dword ptr [EAX + 0x4]          ; 004b50b4
    ADD ESP,0x4                         ; 004b50b7
    ADD EBX,0x40                        ; 004b50ba
        ;   Label: LAB_004b50ba
    CMP EBX,ESI                         ; 004b50bd
    JNZ 0x004b50a4                      ; 004b50bf
        ;   XREF to: 004b50a4 (CONDITIONAL_JUMP)  ; LAB_004b50a4
    MOV EBX,0x1cc0110                   ; 004b50c1
    LEA ESI,[EBX + 0x4000]              ; 004b50c6
    FLD float ptr [EBX + 0x24]          ; 004b50cc | DAT_01cc0134 | DAT_01cc0174
        ;   Label: LAB_004b50cc
    FLDZ                                ; 004b50cf
    FCOMPP                              ; 004b50d1
    FNSTSW AX                           ; 004b50d3
    SAHF                                ; 004b50d5
    JNC 0x004b50e2                      ; 004b50d6
        ;   XREF to: 004b50e2 (CONDITIONAL_JUMP)  ; LAB_004b50e2
    PUSH EBX                            ; 004b50d8
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b50d9 | DAT_01cc014c | DAT_01cc018c
    CALL dword ptr [EAX + 0x4]          ; 004b50dc
    ADD ESP,0x4                         ; 004b50df
    ADD EBX,0x40                        ; 004b50e2
        ;   Label: LAB_004b50e2
    CMP EBX,ESI                         ; 004b50e5
    JNZ 0x004b50cc                      ; 004b50e7
        ;   XREF to: 004b50cc (CONDITIONAL_JUMP)  ; LAB_004b50cc
    MOV ESP,EBP                         ; 004b50e9
    POP EBP                             ; 004b50eb
    POP EDI                             ; 004b50ec
    POP ESI                             ; 004b50ed
    POP EBX                             ; 004b50ee
    RET                                 ; 004b50ef
    PUSH EBX                            ; 004b50f0 | DAT_01c58acc
        ;   Label: LAB_004b50f0
    CALL FUN_004abf50                   ; 004b50f1
        ;   XREF to: 004abf50 (UNCONDITIONAL_CALL)  ; undefined FUN_004abf50()
    ADD ESP,0x4                         ; 004b50f6
    JMP 0x004b4dfb                      ; 004b50f9
        ;   XREF to: 004b4dfb (UNCONDITIONAL_JUMP)  ; LAB_004b4dfb

