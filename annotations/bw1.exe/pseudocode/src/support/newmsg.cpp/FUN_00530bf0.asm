; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00530bf0(undefined4 param_1)
;
; Local Variables:
; undefined1       Stack[-0x31c]:1  local_31c
; undefined1       Stack[-0x31b]:1  local_31b
; undefined        Stack[-0x21c]:1  local_21c
; undefined        Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0x11b]:1  local_11b
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005032a0 at 00503340
;
; Referenced Globals:
;   undefined4 DAT_005ec4f8
;   undefined4 DAT_005ec4f9
;   undefined4 DAT_005ec4fc
;   undefined4 DAT_005ec4fd
;   undefined4 DAT_005ec501
;   TerminatedCString s_support_newmsg_cpp_005ec505
;   TerminatedCString s_Unknown_message_file_ver_005ec51b
;   TerminatedCString s_anon_005ec538
;   undefined4 DAT_005ec541
;   TerminatedCString s_anon_005ec543
;   TerminatedCString s_support_newmsg_cpp_005ec555
;   TerminatedCString s_Error_reading_s_005ec56b
;   TerminatedCString s_support_newmsg_cpp_005ec57c
;   TerminatedCString s_Too_many_messages_in_s_005ec592
;   TerminatedCString s_support_newmsg_cpp_005ec5aa
;   ... and 12 more
;
; Called Functions:
;   FUN_00478fb0
;   FUN_00479180
;   FUN_005030e0
;   FUN_005c04b0
;   FUN_005c08d0
;   FUN_005c0d10
;   FUN_005c0f80
;   FUN_005c1180
;   FUN_005c2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530bf0
        ;   Label: FUN_00530bf0
    PUSH ESI                            ; 00530bf1
    PUSH EDI                            ; 00530bf2
    PUSH EBP                            ; 00530bf3
    SUB ESP,0x30c                       ; 00530bf4
    MOV EBP,dword ptr [ESP + 0x320]     ; 00530bfa
    PUSH EBP                            ; 00530c01
    XOR EDX,EDX                         ; 00530c02
    PUSH 0x5ec4f8                       ; 00530c04 | DAT_005ec4f8
    MOV dword ptr [ESP + 0x308],EDX     ; 00530c09
    CALL FUN_00478fb0                   ; 00530c10
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00478fb0()
    MOV EDI,EAX                         ; 00530c15
    ADD ESP,0x8                         ; 00530c17
    TEST EAX,EAX                        ; 00530c1a
    JG 0x00530c29                       ; 00530c1c
        ;   XREF to: 00530c29 (CONDITIONAL_JUMP)  ; LAB_00530c29
    ADD ESP,0x30c                       ; 00530c1e
        ;   Label: LAB_00530c1e
    POP EBP                             ; 00530c24
    POP EDI                             ; 00530c25
    POP ESI                             ; 00530c26
    POP EBX                             ; 00530c27
    RET                                 ; 00530c28
    PUSH 0x5ec4f9                       ; 00530c29 | DAT_005ec4f9
        ;   Label: LAB_00530c29
    PUSH EBP                            ; 00530c2e
    PUSH 0x5ec4fc                       ; 00530c2f | DAT_005ec4fc
    CALL FUN_00479180                   ; 00530c34
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    MOV ESI,EAX                         ; 00530c39
    ADD ESP,0xc                         ; 00530c3b
    MOV EBX,EAX                         ; 00530c3e
    TEST EAX,EAX                        ; 00530c40
    JZ 0x00530c1e                       ; 00530c42
        ;   XREF to: 00530c1e (CONDITIONAL_JUMP)  ; LAB_00530c1e
    PUSH EAX                            ; 00530c44
    CALL FUN_005c2e90                   ; 00530c45
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2e90()
    ADD ESP,0x4                         ; 00530c4a
    PUSH ESI                            ; 00530c4d
    PUSH 0xff                           ; 00530c4e
    ADD EDI,EAX                         ; 00530c53
    LEA EAX,[ESP + 0x108]               ; 00530c55
    PUSH EAX                            ; 00530c5c
    MOV dword ptr [ESP + 0x310],EDI     ; 00530c5d
    CALL FUN_005c1180                   ; 00530c64
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 00530c69
    LEA EAX,[ESP + 0x300]               ; 00530c6c
    PUSH EAX                            ; 00530c73
    PUSH 0x5ec4fd                       ; 00530c74 | DAT_005ec4fd
    PUSH ESI                            ; 00530c79
    CALL FUN_005c04b0                   ; 00530c7a
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 00530c7f
    PUSH ESI                            ; 00530c82
    PUSH 0xff                           ; 00530c83
    LEA EAX,[ESP + 0x108]               ; 00530c88
    PUSH EAX                            ; 00530c8f
    CALL FUN_005c1180                   ; 00530c90
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 00530c95
    PUSH 0x1d7f1b8                      ; 00530c98 | DAT_01d7f1b8
    PUSH 0x5ec501                       ; 00530c9d | DAT_005ec501
    PUSH ESI                            ; 00530ca2
    CALL FUN_005c04b0                   ; 00530ca3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 00530ca8
    CMP dword ptr [ESP + 0x300],0x0     ; 00530cab
    JNZ 0x00530df0                      ; 00530cb3
        ;   XREF to: 00530df0 (CONDITIONAL_JUMP)  ; LAB_00530df0
    PUSH EBX                            ; 00530cb9
        ;   Label: LAB_00530cb9
    PUSH 0xff                           ; 00530cba
    LEA EAX,[ESP + 0x108]               ; 00530cbf
    PUSH EAX                            ; 00530cc6
    CALL FUN_005c1180                   ; 00530cc7
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1180()
    ADD ESP,0xc                         ; 00530ccc
    PUSH 0x6225f0                       ; 00530ccf | DAT_006225f0
    PUSH 0x5ec538                       ; 00530cd4 | = "\"%[^\"]\"\n"
    PUSH EBX                            ; 00530cd9
    CALL FUN_005c04b0                   ; 00530cda
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 00530cdf
    PUSH 0x5ec541                       ; 00530ce2 | DAT_005ec541
        ;   Label: LAB_00530ce2
    PUSH EBX                            ; 00530ce7
    CALL FUN_005c04b0                   ; 00530ce8
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x8                         ; 00530ced
    PUSH EBX                            ; 00530cf0
    CALL FUN_005c2e90                   ; 00530cf1
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2e90()
    ADD ESP,0x4                         ; 00530cf6
    CMP EAX,dword ptr [ESP + 0x304]     ; 00530cf9
    JL 0x00530e18                       ; 00530d00
        ;   XREF to: 00530e18 (CONDITIONAL_JUMP)  ; LAB_00530e18
    PUSH EBX                            ; 00530d06
    CALL FUN_005c0d10                   ; 00530d07
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    MOV EDI,dword ptr [0x01d7f1c0]      ; 00530d0c | DAT_01d7f1c0
    ADD ESP,0x4                         ; 00530d12
    TEST EDI,EDI                        ; 00530d15
    JLE 0x00530d50                      ; 00530d17
        ;   XREF to: 00530d50 (CONDITIONAL_JUMP)  ; LAB_00530d50
    LEA EBP,[EDI*0x4 + 0x0]             ; 00530d19
    XOR EAX,EAX                         ; 00530d20
    ADD EAX,0x4                         ; 00530d22
        ;   Label: LAB_00530d22
    MOV EDX,dword ptr [EAX + 0x1d80160] ; 00530d25
    MOV dword ptr [EAX + 0x1d7f1c0],EDX ; 00530d2b | DAT_01d7f1c8
    MOV EDX,dword ptr [EAX + 0x1d80930] ; 00530d31
    MOV dword ptr [EAX + 0x1d7f990],EDX ; 00530d37 | DAT_01d7f998
    CMP EAX,EBP                         ; 00530d3d
    JL 0x00530d22                       ; 00530d3f
        ;   XREF to: 00530d22 (CONDITIONAL_JUMP)  ; LAB_00530d22
    LEA EAX,[EAX]                       ; 00530d41
    LEA EDX,[EDX]                       ; 00530d47
    LEA EAX,[EAX]                       ; 00530d4d
    XOR EBP,EBP                         ; 00530d50
        ;   Label: LAB_00530d50
    MOV dword ptr [ESP + 0x308],EBP     ; 00530d52
    MOV EAX,[0x01d7f1c0]                ; 00530d59 | DAT_01d7f1c0
        ;   Label: LAB_00530d59
    DEC EAX                             ; 00530d5e
    CMP EBP,EAX                         ; 00530d5f
    JGE 0x00530f97                      ; 00530d61
        ;   XREF to: 00530f97 (CONDITIONAL_JUMP)  ; LAB_00530f97
    MOV ECX,dword ptr [0x01d7f1c0]      ; 00530d67 | DAT_01d7f1c0
    LEA EDI,[EBP + 0x1]                 ; 00530d6d
    CMP EDI,ECX                         ; 00530d70
    JGE 0x00530dd9                      ; 00530d72
        ;   XREF to: 00530dd9 (CONDITIONAL_JUMP)  ; LAB_00530dd9
    MOV ESI,dword ptr [ESP + 0x308]     ; 00530d74
    LEA EBX,[EDI*0x4 + 0x0]             ; 00530d7b
    MOV ECX,dword ptr [EBX + 0x1d7f1c4] ; 00530d82 | DAT_01d7f1c8 | DAT_01d7f1cc
        ;   Label: LAB_00530d82
    PUSH ECX                            ; 00530d88
    MOV EAX,dword ptr [ESI + 0x1d7f1c4] ; 00530d89 | DAT_01d7f1c8
    PUSH EAX                            ; 00530d8f
    CALL FUN_005c0f80                   ; 00530d90
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 00530d95
    TEST EAX,EAX                        ; 00530d98
    JLE 0x00530dcc                      ; 00530d9a
        ;   XREF to: 00530dcc (CONDITIONAL_JUMP)  ; LAB_00530dcc
    MOV EDX,dword ptr [EBX + 0x1d7f1c4] ; 00530d9c | DAT_01d7f1c8
    MOV EAX,dword ptr [ESI + 0x1d7f1c4] ; 00530da2
    MOV dword ptr [ESI + 0x1d7f1c4],EDX ; 00530da8
    MOV EDX,dword ptr [EBX + 0x1d7f994] ; 00530dae | DAT_01d7f998
    MOV dword ptr [EBX + 0x1d7f1c4],EAX ; 00530db4 | DAT_01d7f1c8
    MOV EAX,dword ptr [ESI + 0x1d7f994] ; 00530dba
    MOV dword ptr [ESI + 0x1d7f994],EDX ; 00530dc0
    MOV dword ptr [EBX + 0x1d7f994],EAX ; 00530dc6 | DAT_01d7f998
    MOV EAX,[0x01d7f1c0]                ; 00530dcc | DAT_01d7f1c0
        ;   Label: LAB_00530dcc
    INC EDI                             ; 00530dd1
    ADD EBX,0x4                         ; 00530dd2
    CMP EDI,EAX                         ; 00530dd5
    JL 0x00530d82                       ; 00530dd7
        ;   XREF to: 00530d82 (CONDITIONAL_JUMP)  ; LAB_00530d82
    MOV EDX,dword ptr [ESP + 0x308]     ; 00530dd9
        ;   Label: LAB_00530dd9
    ADD EDX,0x4                         ; 00530de0
    INC EBP                             ; 00530de3
    MOV dword ptr [ESP + 0x308],EDX     ; 00530de4
    JMP 0x00530d59                      ; 00530deb
        ;   XREF to: 00530d59 (UNCONDITIONAL_JUMP)  ; LAB_00530d59
    MOV ESI,0x5ec505                    ; 00530df0 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_00530df0
    MOV EDI,0x5b                        ; 00530df5
    PUSH 0x5ec51b                       ; 00530dfa | = "Unknown message file version"
    MOV dword ptr [0x01d1d400],ESI      ; 00530dff | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00530e05 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00530e0b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00530e10
    JMP 0x00530cb9                      ; 00530e13
        ;   XREF to: 00530cb9 (UNCONDITIONAL_JUMP)  ; LAB_00530cb9
    MOV EAX,ESP                         ; 00530e18
        ;   Label: LAB_00530e18
    PUSH EAX                            ; 00530e1a
    LEA EAX,[ESP + 0x204]               ; 00530e1b
    PUSH EAX                            ; 00530e22
    PUSH 0x5ec543                       ; 00530e23 | = "\"%[^\"]\", \"%[^\"]\"\n"
    PUSH EBX                            ; 00530e28
    CALL FUN_005c04b0                   ; 00530e29
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0x10                        ; 00530e2e
    CMP EAX,0x2                         ; 00530e31
    JZ 0x00530e5a                       ; 00530e34
        ;   XREF to: 00530e5a (CONDITIONAL_JUMP)  ; LAB_00530e5a
    PUSH EBP                            ; 00530e36
    MOV ECX,0x5ec555                    ; 00530e37 | = "..\\support\\newmsg.cpp"
    MOV ESI,0x6f                        ; 00530e3c
    PUSH 0x5ec56b                       ; 00530e41 | = "Error reading %s"
    MOV dword ptr [0x01d1d400],ECX      ; 00530e46 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00530e4c | DAT_01d1d404
    CALL FUN_005030e0                   ; 00530e52
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00530e57
    CMP dword ptr [0x01d7f1c0],0x1f4    ; 00530e5a | DAT_01d7f1c0
        ;   Label: LAB_00530e5a
    JL 0x00530e89                       ; 00530e64
        ;   XREF to: 00530e89 (CONDITIONAL_JUMP)  ; LAB_00530e89
    PUSH EBP                            ; 00530e66
    MOV EAX,0x5ec57c                    ; 00530e67 | = "..\\support\\newmsg.cpp"
    MOV EDX,0x74                        ; 00530e6c
    PUSH 0x5ec592                       ; 00530e71 | = "Too many messages in %s"
    MOV [0x01d1d400],EAX                ; 00530e76 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00530e7b | DAT_01d1d404
    CALL FUN_005030e0                   ; 00530e81
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00530e86
    LEA EDI,[ESP + 0x200]               ; 00530e89
        ;   Label: LAB_00530e89
    SUB ECX,ECX                         ; 00530e90
    DEC ECX                             ; 00530e92
    XOR EAX,EAX                         ; 00530e93
    SCASB.REPNE ES:EDI                  ; 00530e95
    NOT ECX                             ; 00530e97
    DEC ECX                             ; 00530e99
    INC ECX                             ; 00530e9a
    PUSH ECX                            ; 00530e9b
    CALL FUN_005c08d0                   ; 00530e9c
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    MOV EDX,EAX                         ; 00530ea1
    MOV EAX,[0x01d7f1c0]                ; 00530ea3 | DAT_01d7f1c0
    ADD ESP,0x4                         ; 00530ea8
    MOV ECX,EDX                         ; 00530eab
    MOV dword ptr [EAX*0x4 + 0x1d80164],EDX ; 00530ead
    TEST ECX,ECX                        ; 00530eb4
    JNZ 0x00530ee3                      ; 00530eb6
        ;   XREF to: 00530ee3 (CONDITIONAL_JUMP)  ; LAB_00530ee3
    LEA EAX,[ESP + 0x200]               ; 00530eb8
    PUSH EAX                            ; 00530ebf
    MOV ESI,0x5ec5aa                    ; 00530ec0 | = "..\\support\\newmsg.cpp"
    MOV EDI,0x77                        ; 00530ec5
    PUSH 0x5ec5c0                       ; 00530eca | = "Out of memory mallocing message tag : %s"
    MOV dword ptr [0x01d1d400],ESI      ; 00530ecf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00530ed5 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00530edb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00530ee0
    MOV EDI,ESP                         ; 00530ee3
        ;   Label: LAB_00530ee3
    SUB ECX,ECX                         ; 00530ee5
    DEC ECX                             ; 00530ee7
    XOR EAX,EAX                         ; 00530ee8
    SCASB.REPNE ES:EDI                  ; 00530eea
    NOT ECX                             ; 00530eec
    DEC ECX                             ; 00530eee
    INC ECX                             ; 00530eef
    PUSH ECX                            ; 00530ef0
    CALL FUN_005c08d0                   ; 00530ef1
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    MOV EDX,dword ptr [0x01d7f1c0]      ; 00530ef6 | DAT_01d7f1c0
    ADD ESP,0x4                         ; 00530efc
    MOV dword ptr [EDX*0x4 + 0x1d80934],EAX ; 00530eff
    TEST EAX,EAX                        ; 00530f06
    JZ 0x00530f6c                       ; 00530f08
        ;   XREF to: 00530f6c (CONDITIONAL_JUMP)  ; LAB_00530f6c
    MOV EDI,dword ptr [0x01d7f1c0]      ; 00530f0a | DAT_01d7f1c0
        ;   Label: LAB_00530f0a
    LEA ESI,[ESP + 0x200]               ; 00530f10
    MOV EDI,dword ptr [EDI*0x4 + 0x1d80164] ; 00530f17
    PUSH EDI                            ; 00530f1e
    MOV AL,byte ptr [ESI]               ; 00530f1f
        ;   Label: LAB_00530f1f
    MOV byte ptr [EDI],AL               ; 00530f21
    CMP AL,0x0                          ; 00530f23
    JZ 0x00530f37                       ; 00530f25
        ;   XREF to: 00530f37 (CONDITIONAL_JUMP)  ; LAB_00530f37
    MOV AL,byte ptr [ESI + 0x1]         ; 00530f27
    ADD ESI,0x2                         ; 00530f2a
    MOV byte ptr [EDI + 0x1],AL         ; 00530f2d
    ADD EDI,0x2                         ; 00530f30
    CMP AL,0x0                          ; 00530f33
    JNZ 0x00530f1f                      ; 00530f35
        ;   XREF to: 00530f1f (CONDITIONAL_JUMP)  ; LAB_00530f1f
    POP EDI                             ; 00530f37
        ;   Label: LAB_00530f37
    MOV EDI,dword ptr [0x01d7f1c0]      ; 00530f38 | DAT_01d7f1c0
    MOV ESI,ESP                         ; 00530f3e
    MOV EDI,dword ptr [EDI*0x4 + 0x1d80934] ; 00530f40
    PUSH EDI                            ; 00530f47
    MOV AL,byte ptr [ESI]               ; 00530f48
        ;   Label: LAB_00530f48
    MOV byte ptr [EDI],AL               ; 00530f4a
    CMP AL,0x0                          ; 00530f4c
    JZ 0x00530f60                       ; 00530f4e
        ;   XREF to: 00530f60 (CONDITIONAL_JUMP)  ; LAB_00530f60
    MOV AL,byte ptr [ESI + 0x1]         ; 00530f50
    ADD ESI,0x2                         ; 00530f53
    MOV byte ptr [EDI + 0x1],AL         ; 00530f56
    ADD EDI,0x2                         ; 00530f59
    CMP AL,0x0                          ; 00530f5c
    JNZ 0x00530f48                      ; 00530f5e
        ;   XREF to: 00530f48 (CONDITIONAL_JUMP)  ; LAB_00530f48
    POP EDI                             ; 00530f60
        ;   Label: LAB_00530f60
    INC dword ptr [0x01d7f1c0]          ; 00530f61 | DAT_01d7f1c0
    JMP 0x00530ce2                      ; 00530f67
        ;   XREF to: 00530ce2 (UNCONDITIONAL_JUMP)  ; LAB_00530ce2
    MOV EAX,ESP                         ; 00530f6c
        ;   Label: LAB_00530f6c
    PUSH EAX                            ; 00530f6e
    MOV EDX,0x5ec5e9                    ; 00530f6f | = "..\\support\\newmsg.cpp"
    MOV ECX,0x7a                        ; 00530f74
    PUSH 0x5ec5ff                       ; 00530f79 | = "Out of memory mallocing message tag : %s"
    MOV dword ptr [0x01d1d400],EDX      ; 00530f7e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00530f84 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00530f8a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00530f8f
    JMP 0x00530f0a                      ; 00530f92
        ;   XREF to: 00530f0a (UNCONDITIONAL_JUMP)  ; LAB_00530f0a
    MOV dword ptr [0x01d7f1bc],0x1      ; 00530f97 | DAT_01d7f1bc
        ;   Label: LAB_00530f97
    ADD ESP,0x30c                       ; 00530fa1
    POP EBP                             ; 00530fa7
    POP EDI                             ; 00530fa8
    POP ESI                             ; 00530fa9
    POP EBX                             ; 00530faa
    RET                                 ; 00530fab

