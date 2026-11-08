; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541b70(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   FUN_00532b80 at 005330a1
;
; Referenced Globals:
;   undefined4 DAT_005d0d2a
;   TerminatedCString s_f_f_f_005d0d2e
;   TerminatedCString s_f_f_f_005d0d38
;   undefined4 DAT_005d0d42
;   TerminatedCString s_f_f_f_005d0d46
;   TerminatedCString s_f_f_f_005d0d50
;   TerminatedCString s_f_f_f_005d0d5a
;   undefined4 DAT_005d0d64
;   TerminatedCString s_f_f_f_005d0d68
;   TerminatedCString s_f_f_f_005d0d72
;   undefined4 DAT_005d0d7c
;   undefined4 DAT_005d0d80
;   TerminatedCString s_core_setutil_cpp_005d0d84
;   TerminatedCString s_Panning_cameras_not_supp_005d0d98
;   undefined4 DAT_00603b28
;   ... and 13 more
;
; Called Functions:
;   FUN_00450c00
;   FUN_004e4330
;   FUN_00541b00
;   FUN_005a3230
;   FUN_005a3f00
;   FUN_005a5b9c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541b70
        ;   Label: FUN_00541b70
    PUSH ESI                            ; 00541b71
    PUSH EDI                            ; 00541b72
    PUSH EBP                            ; 00541b73
    SUB ESP,0x100                       ; 00541b74
    MOV EBX,dword ptr [ESP + 0x114]     ; 00541b7a
    MOV ESI,dword ptr [ESP + 0x118]     ; 00541b81
    PUSH EBX                            ; 00541b88
    CALL FUN_00541b00                   ; 00541b89
        ;   XREF to: 00541b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00541b00()
    MOV EAX,[0x00603b28]                ; 00541b8e | DAT_00603b28
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 00541b93 | DAT_02032588
    ADD ESP,0x4                         ; 00541b99
    CMP EDX,0xb                         ; 00541b9c
    JGE 0x00541e1e                      ; 00541b9f
        ;   XREF to: 00541e1e (CONDITIONAL_JUMP)  ; LAB_00541e1e
    PUSH ESI                            ; 00541ba5
        ;   Label: LAB_00541ba5
    PUSH 0xff                           ; 00541ba6
    LEA EAX,[ESP + 0x8]                 ; 00541bab
    PUSH EAX                            ; 00541baf
    CALL FUN_005a3f00                   ; 00541bb0
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541bb5
    PUSH EBX                            ; 00541bb8
    PUSH 0x5d0d2a                       ; 00541bb9 | DAT_005d0d2a
    LEA EAX,[ESP + 0x8]                 ; 00541bbe
    PUSH EAX                            ; 00541bc2
    CALL FUN_005a5b9c                   ; 00541bc3
        ;   XREF to: 005a5b9c (UNCONDITIONAL_CALL)  ; undefined FUN_005a5b9c()
    MOV EAX,[0x00603b28]                ; 00541bc8 | DAT_00603b28
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 00541bcd | DAT_02032588
    ADD ESP,0xc                         ; 00541bd3
    CMP ECX,0xb                         ; 00541bd6
    JL 0x00541bee                       ; 00541bd9
        ;   XREF to: 00541bee (CONDITIONAL_JUMP)  ; LAB_00541bee
    PUSH ESI                            ; 00541bdb
    PUSH 0xff                           ; 00541bdc
    LEA EAX,[ESP + 0x8]                 ; 00541be1
    PUSH EAX                            ; 00541be5
    CALL FUN_005a3f00                   ; 00541be6
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541beb
    LEA EAX,[EBX + 0x108]               ; 00541bee
        ;   Label: LAB_00541bee
    PUSH EAX                            ; 00541bf4
    LEA EAX,[EBX + 0x104]               ; 00541bf5
    PUSH EAX                            ; 00541bfb
    LEA EAX,[EBX + 0x100]               ; 00541bfc
    PUSH EAX                            ; 00541c02
    PUSH 0x5d0d2e                       ; 00541c03 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00541c08
    CALL FUN_005a3230                   ; 00541c09
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 00541c0e | DAT_00603b28
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 00541c13 | DAT_02032588
    ADD ESP,0x14                        ; 00541c19
    CMP EDI,0xb                         ; 00541c1c
    JL 0x00541c34                       ; 00541c1f
        ;   XREF to: 00541c34 (CONDITIONAL_JUMP)  ; LAB_00541c34
    PUSH ESI                            ; 00541c21
    PUSH 0xff                           ; 00541c22
    LEA EAX,[ESP + 0x8]                 ; 00541c27
    PUSH EAX                            ; 00541c2b
    CALL FUN_005a3f00                   ; 00541c2c
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541c31
    LEA EAX,[EBX + 0x110]               ; 00541c34
        ;   Label: LAB_00541c34
    PUSH EAX                            ; 00541c3a
    LEA EAX,[EBX + 0x114]               ; 00541c3b
    PUSH EAX                            ; 00541c41
    LEA EAX,[EBX + 0x10c]               ; 00541c42
    PUSH EAX                            ; 00541c48
    PUSH 0x5d0d38                       ; 00541c49 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00541c4e
    CALL FUN_005a3230                   ; 00541c4f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 00541c54 | DAT_00603b28
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 00541c59 | DAT_02032588
    ADD ESP,0x14                        ; 00541c5f
    CMP EBP,0xb                         ; 00541c62
    JL 0x00541c7a                       ; 00541c65
        ;   XREF to: 00541c7a (CONDITIONAL_JUMP)  ; LAB_00541c7a
    PUSH ESI                            ; 00541c67
    PUSH 0xff                           ; 00541c68
    LEA EAX,[ESP + 0x8]                 ; 00541c6d
    PUSH EAX                            ; 00541c71
    CALL FUN_005a3f00                   ; 00541c72
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541c77
    LEA EAX,[EBX + 0x144]               ; 00541c7a
        ;   Label: LAB_00541c7a
    PUSH EAX                            ; 00541c80
    PUSH 0x5d0d42                       ; 00541c81 | DAT_005d0d42
    PUSH ESI                            ; 00541c86
    CALL FUN_005a3230                   ; 00541c87
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00541c8c
    PUSH ESI                            ; 00541c8f
    PUSH 0xff                           ; 00541c90
    LEA EAX,[ESP + 0x8]                 ; 00541c95
    PUSH EAX                            ; 00541c99
    CALL FUN_005a3f00                   ; 00541c9a
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541c9f
    LEA EAX,[EBX + 0x120]               ; 00541ca2
    PUSH EAX                            ; 00541ca8
    LEA EAX,[EBX + 0x11c]               ; 00541ca9
    PUSH EAX                            ; 00541caf
    LEA EAX,[EBX + 0x118]               ; 00541cb0
    PUSH EAX                            ; 00541cb6
    PUSH 0x5d0d46                       ; 00541cb7 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00541cbc
    CALL FUN_005a3230                   ; 00541cbd
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 00541cc2
    LEA EAX,[EBX + 0x12c]               ; 00541cc5
    PUSH EAX                            ; 00541ccb
    LEA EAX,[EBX + 0x128]               ; 00541ccc
    PUSH EAX                            ; 00541cd2
    LEA EAX,[EBX + 0x124]               ; 00541cd3
    PUSH EAX                            ; 00541cd9
    PUSH 0x5d0d50                       ; 00541cda | = "%f,%f,%f\n"
    PUSH ESI                            ; 00541cdf
    CALL FUN_005a3230                   ; 00541ce0
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 00541ce5
    LEA EAX,[EBX + 0x138]               ; 00541ce8
    PUSH EAX                            ; 00541cee
    LEA EAX,[EBX + 0x134]               ; 00541cef
    PUSH EAX                            ; 00541cf5
    LEA EAX,[EBX + 0x130]               ; 00541cf6
    PUSH EAX                            ; 00541cfc
    PUSH 0x5d0d5a                       ; 00541cfd | = "%f,%f,%f\n"
    PUSH ESI                            ; 00541d02
    CALL FUN_005a3230                   ; 00541d03
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EAX,[0x00603b28]                ; 00541d08 | DAT_00603b28
    LEA EDI,[EBX + 0x154]               ; 00541d0d
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 00541d13 | DAT_02032588
    ADD ESP,0x14                        ; 00541d19
    CMP EDX,0x12                        ; 00541d1c
    JL 0x00541e36                       ; 00541d1f
        ;   XREF to: 00541e36 (CONDITIONAL_JUMP)  ; LAB_00541e36
    LEA EAX,[EBX + 0x150]               ; 00541d25
    PUSH EAX                            ; 00541d2b
    PUSH 0x5d0d64                       ; 00541d2c | DAT_005d0d64
    PUSH ESI                            ; 00541d31
    CALL FUN_005a3230                   ; 00541d32
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV ECX,dword ptr [EBX + 0x150]     ; 00541d37
    ADD ESP,0xc                         ; 00541d3d
    TEST ECX,ECX                        ; 00541d40
    JNZ 0x00541d5a                      ; 00541d42
        ;   XREF to: 00541d5a (CONDITIONAL_JUMP)  ; LAB_00541d5a
    MOV EAX,[0x00603b28]                ; 00541d44 | DAT_00603b28
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 00541d49 | DAT_02032588
    PUSH EBP                            ; 00541d4f
    PUSH ESI                            ; 00541d50
    PUSH EDI                            ; 00541d51
    CALL FUN_00450c00                   ; 00541d52
        ;   XREF to: 00450c00 (UNCONDITIONAL_CALL)  ; undefined FUN_00450c00()
    ADD ESP,0xc                         ; 00541d57
    MOV EAX,[0x00603b28]                ; 00541d5a | DAT_00603b28
        ;   Label: LAB_00541d5a
    CMP dword ptr [EAX + 0x15acc0],0x17 ; 00541d5f | DAT_02032588
    JL 0x00541dc1                       ; 00541d66
        ;   XREF to: 00541dc1 (CONDITIONAL_JUMP)  ; LAB_00541dc1
    PUSH ESI                            ; 00541d68
    PUSH 0xff                           ; 00541d69
    LEA EAX,[ESP + 0x8]                 ; 00541d6e
    PUSH EAX                            ; 00541d72
    CALL FUN_005a3f00                   ; 00541d73
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541d78
    LEA EAX,[EBX + 0x184]               ; 00541d7b
    PUSH EAX                            ; 00541d81
    LEA EAX,[EBX + 0x180]               ; 00541d82
    PUSH EAX                            ; 00541d88
    LEA EAX,[EBX + 0x17c]               ; 00541d89
    PUSH EAX                            ; 00541d8f
    PUSH 0x5d0d68                       ; 00541d90 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00541d95
    CALL FUN_005a3230                   ; 00541d96
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 00541d9b
    LEA EAX,[EBX + 0x190]               ; 00541d9e
    PUSH EAX                            ; 00541da4
    LEA EAX,[EBX + 0x18c]               ; 00541da5
    PUSH EAX                            ; 00541dab
    LEA EAX,[EBX + 0x188]               ; 00541dac
    PUSH EAX                            ; 00541db2
    PUSH 0x5d0d72                       ; 00541db3 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00541db8
    CALL FUN_005a3230                   ; 00541db9
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0x14                        ; 00541dbe
    MOV EAX,[0x00603b28]                ; 00541dc1 | DAT_00603b28
        ;   Label: LAB_00541dc1
    CMP dword ptr [EAX + 0x15acc0],0x17 ; 00541dc6 | DAT_02032588
    JL 0x00541df7                       ; 00541dcd
        ;   XREF to: 00541df7 (CONDITIONAL_JUMP)  ; LAB_00541df7
    PUSH ESI                            ; 00541dcf
    PUSH 0xff                           ; 00541dd0
    LEA EAX,[ESP + 0x8]                 ; 00541dd5
    PUSH EAX                            ; 00541dd9
    CALL FUN_005a3f00                   ; 00541dda
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541ddf
    LEA EAX,[EBX + 0x178]               ; 00541de2
    PUSH EAX                            ; 00541de8
    PUSH 0x5d0d7c                       ; 00541de9 | DAT_005d0d7c
    PUSH ESI                            ; 00541dee
    CALL FUN_005a3230                   ; 00541def
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    ADD ESP,0xc                         ; 00541df4
    MOV EAX,[0x00603b28]                ; 00541df7 | DAT_00603b28 | DAT_01ed78c8
        ;   Label: LAB_00541df7
    CMP dword ptr [EAX + 0x15acc0],0x1b ; 00541dfc | DAT_02032588
    JZ 0x00541e8e                       ; 00541e03
        ;   XREF to: 00541e8e (CONDITIONAL_JUMP)  ; LAB_00541e8e
    MOV dword ptr [EBX + 0x140],0x0     ; 00541e09
    ADD ESP,0x100                       ; 00541e13
        ;   Label: LAB_00541e13
    POP EBP                             ; 00541e19
    POP EDI                             ; 00541e1a
    POP ESI                             ; 00541e1b
    POP EBX                             ; 00541e1c
    RET                                 ; 00541e1d
    PUSH ESI                            ; 00541e1e
        ;   Label: LAB_00541e1e
    PUSH 0xff                           ; 00541e1f
    LEA EAX,[ESP + 0x8]                 ; 00541e24
    PUSH EAX                            ; 00541e28
    CALL FUN_005a3f00                   ; 00541e29
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541e2e
    JMP 0x00541ba5                      ; 00541e31
        ;   XREF to: 00541ba5 (UNCONDITIONAL_JUMP)  ; LAB_00541ba5
    MOV dword ptr [EBX + 0x150],0x1     ; 00541e36
        ;   Label: LAB_00541e36
    MOV EBP,dword ptr [EAX + 0x15ac40]  ; 00541e40 | DAT_02032508
    ADD EAX,0x15ac40                    ; 00541e46
    MOV dword ptr [EDI],EBP             ; 00541e4b
    MOV ECX,EDI                         ; 00541e4d
    MOV EBP,dword ptr [EAX + 0x4]       ; 00541e4f | DAT_0203250c
    MOV EDX,EAX                         ; 00541e52
    MOV dword ptr [EDI + 0x4],EBP       ; 00541e54
    ADD EDI,0xc                         ; 00541e57
    MOV EBP,dword ptr [EAX + 0x8]       ; 00541e5a | DAT_02032510
    ADD EAX,0xc                         ; 00541e5d
    MOV dword ptr [EDI + -0x4],EBP      ; 00541e60
    CMP EDI,EAX                         ; 00541e63
    JZ 0x00541e77                       ; 00541e65
        ;   XREF to: 00541e77 (CONDITIONAL_JUMP)  ; LAB_00541e77
    MOV EBP,dword ptr [EAX]             ; 00541e67 | DAT_02032514
    MOV dword ptr [EDI],EBP             ; 00541e69
    MOV EBP,dword ptr [EAX + 0x4]       ; 00541e6b | DAT_02032518
    MOV dword ptr [EDI + 0x4],EBP       ; 00541e6e
    MOV EBP,dword ptr [EAX + 0x8]       ; 00541e71 | DAT_0203251c
    MOV dword ptr [EDI + 0x8],EBP       ; 00541e74
    MOV EAX,dword ptr [EDX + 0x18]      ; 00541e77 | DAT_02032520
        ;   Label: LAB_00541e77
    MOV dword ptr [ECX + 0x18],EAX      ; 00541e7a
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00541e7d | DAT_02032524
    MOV dword ptr [ECX + 0x1c],EAX      ; 00541e80
    MOV EAX,dword ptr [EDX + 0x20]      ; 00541e83 | DAT_02032528
    MOV dword ptr [ECX + 0x20],EAX      ; 00541e86
    JMP 0x00541d5a                      ; 00541e89
        ;   XREF to: 00541d5a (UNCONDITIONAL_JUMP)  ; LAB_00541d5a
    PUSH ESI                            ; 00541e8e
        ;   Label: LAB_00541e8e
    PUSH 0xff                           ; 00541e8f
    LEA EAX,[ESP + 0x8]                 ; 00541e94
    PUSH EAX                            ; 00541e98
    CALL FUN_005a3f00                   ; 00541e99
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3f00()
    ADD ESP,0xc                         ; 00541e9e
    LEA EAX,[EBX + 0x140]               ; 00541ea1
    PUSH EAX                            ; 00541ea7
    PUSH 0x5d0d80                       ; 00541ea8 | DAT_005d0d80
    PUSH ESI                            ; 00541ead
    CALL FUN_005a3230                   ; 00541eae
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3230()
    MOV EBP,dword ptr [EBX + 0x140]     ; 00541eb3
    ADD ESP,0xc                         ; 00541eb9
    TEST EBP,EBP                        ; 00541ebc
    JZ 0x00541e13                       ; 00541ebe
        ;   XREF to: 00541e13 (CONDITIONAL_JUMP)  ; LAB_00541e13
    MOV EAX,0x5d0d84                    ; 00541ec4 | = "..\\core\\setutil.cpp"
    MOV EDX,0xd5                        ; 00541ec9
    PUSH 0x5d0d98                       ; 00541ece | = "Panning cameras not supported, bucko!"
    MOV [0x01d71de0],EAX                ; 00541ed3 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00541ed8 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00541ede
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00541ee3
    ADD ESP,0x100                       ; 00541ee6
    POP EBP                             ; 00541eec
    POP EDI                             ; 00541eed
    POP ESI                             ; 00541eee
    POP EBX                             ; 00541eef
    RET                                 ; 00541ef0

