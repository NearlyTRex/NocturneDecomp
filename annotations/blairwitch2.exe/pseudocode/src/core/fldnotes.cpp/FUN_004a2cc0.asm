; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a2cc0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004a28b0 at 004a29d7
;
; Referenced Globals:
;   undefined4 DAT_005d5b91
;   undefined4 DAT_005d5b94
;   undefined4 DAT_005d5b97
;   undefined4 DAT_005d5b9a
;   TerminatedCString s_image_005d5b9e
;   TerminatedCString s_s_d_d_n_005d5ba4
;   TerminatedCString s_Error_parsing_image_tag_005d5baf
;   TerminatedCString s_core_fldnotes_cpp_005d5bd5
;   TerminatedCString s_Out_of_memory_005d5bea
;   TerminatedCString s_twanachar_005d5bf8
;   TerminatedCString s_s_n_005d5c02
;   TerminatedCString s_Error_parsing_twanachar_005d5c08
;   TerminatedCString s_core_fldnotes_cpp_005d5c2e
;   TerminatedCString s_Out_of_memory_005d5c43
;   TerminatedCString s_twanaentry_005d5c51
;   ... and 6 more
;
; Called Functions:
;   FUN_004a2170
;   FUN_004a2290
;   FUN_004a23c0
;   FUN_004a2bb0
;   FUN_004a2bf0
;   FUN_004a2c90
;   FUN_004a30a0
;   FUN_004e4500
;   FUN_005b7790
;   FUN_005b8130
;   FUN_005b8be2
;   FUN_005b8da0
;   FUN_005ba8cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2cc0
        ;   Label: FUN_004a2cc0
    PUSH ESI                            ; 004a2cc1
    PUSH EDI                            ; 004a2cc2
    PUSH EBP                            ; 004a2cc3
    SUB ESP,0x210                       ; 004a2cc4
    MOV EBX,dword ptr [ESP + 0x224]     ; 004a2cca
    MOV ESI,dword ptr [ESP + 0x228]     ; 004a2cd1
    PUSH 0x5d5b91                       ; 004a2cd8 | DAT_005d5b91
    PUSH ESI                            ; 004a2cdd
    CALL FUN_005b8130                   ; 004a2cde
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004a2ce3
    TEST EAX,EAX                        ; 004a2ce6
    JNZ 0x004a2d13                      ; 004a2ce8
        ;   XREF to: 004a2d13 (CONDITIONAL_JUMP)  ; LAB_004a2d13
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004a2cea
    CMP ECX,dword ptr [EBX + 0x14]      ; 004a2ced
    JNZ 0x004a2cfa                      ; 004a2cf0
        ;   XREF to: 004a2cfa (CONDITIONAL_JUMP)  ; LAB_004a2cfa
    MOV ESI,dword ptr [EBX + 0x20]      ; 004a2cf2
    CMP ESI,dword ptr [EBX + 0x18]      ; 004a2cf5
    JZ 0x004a2d03                       ; 004a2cf8
        ;   XREF to: 004a2d03 (CONDITIONAL_JUMP)  ; LAB_004a2d03
    PUSH EBX                            ; 004a2cfa
        ;   Label: LAB_004a2cfa
    CALL FUN_004a2bf0                   ; 004a2cfb
        ;   XREF to: 004a2bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2bf0()
    ADD ESP,0x4                         ; 004a2d00
    MOV EAX,0x1                         ; 004a2d03
        ;   Label: LAB_004a2d03
    ADD ESP,0x210                       ; 004a2d08
        ;   Label: LAB_004a2d08
    POP EBP                             ; 004a2d0e
    POP EDI                             ; 004a2d0f
    POP ESI                             ; 004a2d10
    POP EBX                             ; 004a2d11
    RET                                 ; 004a2d12
    PUSH 0x5d5b94                       ; 004a2d13 | DAT_005d5b94
        ;   Label: LAB_004a2d13
    PUSH ESI                            ; 004a2d18
    CALL FUN_005b8130                   ; 004a2d19
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004a2d1e
    TEST EAX,EAX                        ; 004a2d21
    JZ 0x004a2d4e                       ; 004a2d23
        ;   XREF to: 004a2d4e (CONDITIONAL_JUMP)  ; LAB_004a2d4e
    PUSH 0x5d5b97                       ; 004a2d25 | DAT_005d5b97
    PUSH ESI                            ; 004a2d2a
    CALL FUN_005b8130                   ; 004a2d2b
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004a2d30
    TEST EAX,EAX                        ; 004a2d33
    JNZ 0x004a2d67                      ; 004a2d35
        ;   XREF to: 004a2d67 (CONDITIONAL_JUMP)  ; LAB_004a2d67
    MOV EAX,0x1                         ; 004a2d37
    MOV dword ptr [EBX + 0x34],0x1      ; 004a2d3c
    ADD ESP,0x210                       ; 004a2d43
    POP EBP                             ; 004a2d49
    POP EDI                             ; 004a2d4a
    POP ESI                             ; 004a2d4b
    POP EBX                             ; 004a2d4c
    RET                                 ; 004a2d4d
    PUSH EBX                            ; 004a2d4e
        ;   Label: LAB_004a2d4e
    CALL FUN_004a2c90                   ; 004a2d4f
        ;   XREF to: 004a2c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2c90()
    MOV EAX,0x1                         ; 004a2d54
    ADD ESP,0x4                         ; 004a2d59
    ADD ESP,0x210                       ; 004a2d5c
    POP EBP                             ; 004a2d62
    POP EDI                             ; 004a2d63
    POP ESI                             ; 004a2d64
    POP EBX                             ; 004a2d65
    RET                                 ; 004a2d66
    PUSH 0x5d5b9a                       ; 004a2d67 | DAT_005d5b9a
        ;   Label: LAB_004a2d67
    PUSH ESI                            ; 004a2d6c
    CALL FUN_005b8130                   ; 004a2d6d
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004a2d72
    TEST EAX,EAX                        ; 004a2d75
    JNZ 0x004a2d8c                      ; 004a2d77
        ;   XREF to: 004a2d8c (CONDITIONAL_JUMP)  ; LAB_004a2d8c
    MOV dword ptr [EBX + 0x34],EAX      ; 004a2d79
    MOV EAX,0x1                         ; 004a2d7c
    ADD ESP,0x210                       ; 004a2d81
    POP EBP                             ; 004a2d87
    POP EDI                             ; 004a2d88
    POP ESI                             ; 004a2d89
    POP EBX                             ; 004a2d8a
    RET                                 ; 004a2d8b
    PUSH 0x5                            ; 004a2d8c
        ;   Label: LAB_004a2d8c
    PUSH 0x5d5b9e                       ; 004a2d8e | = "image"
    PUSH ESI                            ; 004a2d93
    CALL FUN_005b8da0                   ; 004a2d94
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 004a2d99
    TEST EAX,EAX                        ; 004a2d9c
    JNZ 0x004a2ebb                      ; 004a2d9e
        ;   XREF to: 004a2ebb (CONDITIONAL_JUMP)  ; LAB_004a2ebb
    LEA EAX,[ESP + 0x208]               ; 004a2da4
    PUSH EAX                            ; 004a2dab
    LEA EAX,[ESP + 0x208]               ; 004a2dac
    PUSH EAX                            ; 004a2db3
    LEA EAX,[ESP + 0x208]               ; 004a2db4
    PUSH EAX                            ; 004a2dbb
    LEA EAX,[ESP + 0x10c]               ; 004a2dbc
    PUSH EAX                            ; 004a2dc3
    PUSH 0x5d5ba4                       ; 004a2dc4 | = "%s %d %d%n"
    LEA EAX,[ESI + 0x5]                 ; 004a2dc9
    MOV EBP,0xffffffff                  ; 004a2dcc
    PUSH EAX                            ; 004a2dd1
    MOV dword ptr [ESP + 0x220],EBP     ; 004a2dd2
    CALL FUN_005ba8cc                   ; 004a2dd9
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ba8cc()
    ADD ESP,0x18                        ; 004a2dde
    CMP dword ptr [ESP + 0x208],0x3     ; 004a2de1
    JL 0x004a2e9b                       ; 004a2de9
        ;   XREF to: 004a2e9b (CONDITIONAL_JUMP)  ; LAB_004a2e9b
    MOV EDX,dword ptr [ESP + 0x204]     ; 004a2def
    PUSH EDX                            ; 004a2df6
    MOV ECX,dword ptr [ESP + 0x204]     ; 004a2df7
    PUSH ECX                            ; 004a2dfe
    PUSH EBX                            ; 004a2dff
    CALL FUN_004a30a0                   ; 004a2e00
        ;   XREF to: 004a30a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a30a0()
    ADD ESP,0xc                         ; 004a2e05
    TEST EAX,EAX                        ; 004a2e08
    JZ 0x004a2d08                       ; 004a2e0a
        ;   XREF to: 004a2d08 (CONDITIONAL_JUMP)  ; LAB_004a2d08
    PUSH 0x2c                           ; 004a2e10
    CALL FUN_005b8be2                   ; 004a2e12
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004a2e17
    TEST EAX,EAX                        ; 004a2e1a
    JZ 0x004a2e3f                       ; 004a2e1c
        ;   XREF to: 004a2e3f (CONDITIONAL_JUMP)  ; LAB_004a2e3f
    MOV ESI,dword ptr [ESP + 0x204]     ; 004a2e1e
    PUSH ESI                            ; 004a2e25
    MOV EDI,dword ptr [ESP + 0x204]     ; 004a2e26
    PUSH EDI                            ; 004a2e2d
    LEA ESI,[ESP + 0x108]               ; 004a2e2e
    PUSH ESI                            ; 004a2e35
    PUSH EAX                            ; 004a2e36
    CALL FUN_004a2170                   ; 004a2e37
        ;   XREF to: 004a2170 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2170()
    ADD ESP,0x10                        ; 004a2e3c
    MOV ESI,EAX                         ; 004a2e3f
        ;   Label: LAB_004a2e3f
    TEST EAX,EAX                        ; 004a2e41
    JNZ 0x004a2e67                      ; 004a2e43
        ;   XREF to: 004a2e67 (CONDITIONAL_JUMP)  ; LAB_004a2e67
    MOV EBP,0x5d5bd5                    ; 004a2e45 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x5b1                       ; 004a2e4a
    PUSH 0x5d5bea                       ; 004a2e4f | = "Out of memory"
    MOV dword ptr [0x01d046a0],EBP      ; 004a2e54 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004a2e5a | DAT_01d046a4
    CALL FUN_004e4500                   ; 004a2e5f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004a2e64
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a2e67
        ;   Label: LAB_004a2e67
    MOV dword ptr [ESI],EAX             ; 004a2e6a
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a2e6c
    MOV dword ptr [ESI + 0x4],EAX       ; 004a2e6f
    MOV EAX,dword ptr [ESP + 0x200]     ; 004a2e72
    MOV EDX,dword ptr [EBX + 0x14]      ; 004a2e79
    PUSH ESI                            ; 004a2e7c
    ADD EDX,EAX                         ; 004a2e7d
    PUSH EBX                            ; 004a2e7f
    MOV dword ptr [EBX + 0x14],EDX      ; 004a2e80
    CALL FUN_004a2bb0                   ; 004a2e83
        ;   XREF to: 004a2bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2bb0()
    MOV EAX,0x1                         ; 004a2e88
    ADD ESP,0x8                         ; 004a2e8d
    ADD ESP,0x210                       ; 004a2e90
    POP EBP                             ; 004a2e96
    POP EDI                             ; 004a2e97
    POP ESI                             ; 004a2e98
    POP EBX                             ; 004a2e99
    RET                                 ; 004a2e9a
    PUSH ESI                            ; 004a2e9b
        ;   Label: LAB_004a2e9b
    PUSH 0x5d5baf                       ; 004a2e9c | = "Error parsing 'image' tag parms: '%s'"
    PUSH 0x1cab7f0                      ; 004a2ea1 | DAT_01cab7f0
    CALL FUN_005b7790                   ; 004a2ea6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 004a2eab
    MOV EAX,EBP                         ; 004a2eae
    ADD ESP,0x210                       ; 004a2eb0
    POP EBP                             ; 004a2eb6
    POP EDI                             ; 004a2eb7
    POP ESI                             ; 004a2eb8
    POP EBX                             ; 004a2eb9
    RET                                 ; 004a2eba
    PUSH 0x9                            ; 004a2ebb
        ;   Label: LAB_004a2ebb
    PUSH 0x5d5bf8                       ; 004a2ebd | = "twanachar"
    PUSH ESI                            ; 004a2ec2
    CALL FUN_005b8da0                   ; 004a2ec3
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 004a2ec8
    TEST EAX,EAX                        ; 004a2ecb
    JNZ 0x004a2fcd                      ; 004a2ecd
        ;   XREF to: 004a2fcd (CONDITIONAL_JUMP)  ; LAB_004a2fcd
    LEA EAX,[ESP + 0x20c]               ; 004a2ed3
    PUSH EAX                            ; 004a2eda
    LEA EAX,[ESP + 0x4]                 ; 004a2edb
    PUSH EAX                            ; 004a2edf
    PUSH 0x5d5c02                       ; 004a2ee0 | = " %s%n"
    LEA EAX,[ESI + 0x9]                 ; 004a2ee5
    MOV ECX,0xffffffff                  ; 004a2ee8
    PUSH EAX                            ; 004a2eed
    MOV dword ptr [ESP + 0x21c],ECX     ; 004a2eee
    CALL FUN_005ba8cc                   ; 004a2ef5
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ba8cc()
    ADD ESP,0x10                        ; 004a2efa
    CMP dword ptr [ESP + 0x20c],0x3     ; 004a2efd
    JL 0x004a2f92                       ; 004a2f05
        ;   XREF to: 004a2f92 (CONDITIONAL_JUMP)  ; LAB_004a2f92
    PUSH 0x4c                           ; 004a2f0b
    CALL FUN_005b8be2                   ; 004a2f0d
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004a2f12
    TEST EAX,EAX                        ; 004a2f15
    JZ 0x004a2f25                       ; 004a2f17
        ;   XREF to: 004a2f25 (CONDITIONAL_JUMP)  ; LAB_004a2f25
    MOV ESI,ESP                         ; 004a2f19
    PUSH ESI                            ; 004a2f1b
    PUSH EAX                            ; 004a2f1c
    CALL FUN_004a2290                   ; 004a2f1d
        ;   XREF to: 004a2290 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2290()
    ADD ESP,0x8                         ; 004a2f22
    MOV ESI,EAX                         ; 004a2f25
        ;   Label: LAB_004a2f25
    TEST EAX,EAX                        ; 004a2f27
    JNZ 0x004a2f4d                      ; 004a2f29
        ;   XREF to: 004a2f4d (CONDITIONAL_JUMP)  ; LAB_004a2f4d
    MOV EBP,0x5d5c2e                    ; 004a2f2b | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x5c7                       ; 004a2f30
    PUSH 0x5d5c43                       ; 004a2f35 | = "Out of memory"
    MOV dword ptr [0x01d046a0],EBP      ; 004a2f3a | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004a2f40 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004a2f45
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004a2f4a
    MOV EDX,dword ptr [ESI + 0xc]       ; 004a2f4d
        ;   Label: LAB_004a2f4d
    PUSH EDX                            ; 004a2f50
    MOV ECX,dword ptr [ESI + 0x8]       ; 004a2f51
    PUSH ECX                            ; 004a2f54
    PUSH EBX                            ; 004a2f55
    CALL FUN_004a30a0                   ; 004a2f56
        ;   XREF to: 004a30a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a30a0()
    ADD ESP,0xc                         ; 004a2f5b
    TEST EAX,EAX                        ; 004a2f5e
    JZ 0x004a2fb5                       ; 004a2f60
        ;   XREF to: 004a2fb5 (CONDITIONAL_JUMP)  ; LAB_004a2fb5
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a2f62
    MOV dword ptr [ESI],EAX             ; 004a2f65
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a2f67
    MOV dword ptr [ESI + 0x4],EAX       ; 004a2f6a
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a2f6d
    MOV EDI,dword ptr [EBX + 0x14]      ; 004a2f70
    PUSH ESI                            ; 004a2f73
    ADD EDI,EAX                         ; 004a2f74
    PUSH EBX                            ; 004a2f76
    MOV dword ptr [EBX + 0x14],EDI      ; 004a2f77
    CALL FUN_004a2bb0                   ; 004a2f7a
        ;   XREF to: 004a2bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2bb0()
    MOV EAX,0x1                         ; 004a2f7f
    ADD ESP,0x8                         ; 004a2f84
    ADD ESP,0x210                       ; 004a2f87
    POP EBP                             ; 004a2f8d
    POP EDI                             ; 004a2f8e
    POP ESI                             ; 004a2f8f
    POP EBX                             ; 004a2f90
    RET                                 ; 004a2f91
    PUSH ESI                            ; 004a2f92
        ;   Label: LAB_004a2f92
    PUSH 0x5d5c08                       ; 004a2f93 | = "Error parsing 'twanachar' parms: '%s'"
    PUSH 0x1cab7f0                      ; 004a2f98 | DAT_01cab7f0
    CALL FUN_005b7790                   ; 004a2f9d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV EAX,0xffffffff                  ; 004a2fa2
    ADD ESP,0xc                         ; 004a2fa7
    ADD ESP,0x210                       ; 004a2faa
    POP EBP                             ; 004a2fb0
    POP EDI                             ; 004a2fb1
    POP ESI                             ; 004a2fb2
    POP EBX                             ; 004a2fb3
    RET                                 ; 004a2fb4
    PUSH 0x2                            ; 004a2fb5
        ;   Label: LAB_004a2fb5
    MOV EAX,dword ptr [ESI + 0x14]      ; 004a2fb7
    PUSH ESI                            ; 004a2fba
    CALL dword ptr [EAX]                ; 004a2fbb
    ADD ESP,0x8                         ; 004a2fbd
    XOR EAX,EAX                         ; 004a2fc0
    ADD ESP,0x210                       ; 004a2fc2
    POP EBP                             ; 004a2fc8
    POP EDI                             ; 004a2fc9
    POP ESI                             ; 004a2fca
    POP EBX                             ; 004a2fcb
    RET                                 ; 004a2fcc
    PUSH 0x5d5c51                       ; 004a2fcd | = "twanaentry"
        ;   Label: LAB_004a2fcd
    PUSH ESI                            ; 004a2fd2
    CALL FUN_005b8130                   ; 004a2fd3
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004a2fd8
    TEST EAX,EAX                        ; 004a2fdb
    JNZ 0x004a306f                      ; 004a2fdd
        ;   XREF to: 004a306f (CONDITIONAL_JUMP)  ; LAB_004a306f
    PUSH 0x114                          ; 004a2fe3
    CALL FUN_005b8be2                   ; 004a2fe8
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004a2fed
    TEST EAX,EAX                        ; 004a2ff0
    JZ 0x004a2ffd                       ; 004a2ff2
        ;   XREF to: 004a2ffd (CONDITIONAL_JUMP)  ; LAB_004a2ffd
    PUSH EAX                            ; 004a2ff4
    CALL FUN_004a23c0                   ; 004a2ff5
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x4                         ; 004a2ffa
    MOV ESI,EAX                         ; 004a2ffd
        ;   Label: LAB_004a2ffd
    TEST EAX,EAX                        ; 004a2fff
    JNZ 0x004a3026                      ; 004a3001
        ;   XREF to: 004a3026 (CONDITIONAL_JUMP)  ; LAB_004a3026
    MOV EDX,0x5d5c5c                    ; 004a3003 | = "..\\core\\fldnotes.cpp"
    MOV ECX,0x5df                       ; 004a3008
    PUSH 0x5d5c71                       ; 004a300d | = "Out of memory"
    MOV dword ptr [0x01d046a0],EDX      ; 004a3012 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004a3018 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004a301e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004a3023
    MOV EDI,dword ptr [ESI + 0xc]       ; 004a3026
        ;   Label: LAB_004a3026
    PUSH EDI                            ; 004a3029
    MOV EBP,dword ptr [ESI + 0x8]       ; 004a302a
    PUSH EBP                            ; 004a302d
    PUSH EBX                            ; 004a302e
    CALL FUN_004a30a0                   ; 004a302f
        ;   XREF to: 004a30a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a30a0()
    ADD ESP,0xc                         ; 004a3034
    TEST EAX,EAX                        ; 004a3037
    JZ 0x004a2fb5                       ; 004a3039
        ;   XREF to: 004a2fb5 (CONDITIONAL_JUMP)  ; LAB_004a2fb5
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a303f
    MOV dword ptr [ESI],EAX             ; 004a3042
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a3044
    MOV dword ptr [ESI + 0x4],EAX       ; 004a3047
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a304a
    MOV EDX,dword ptr [EBX + 0x14]      ; 004a304d
    PUSH ESI                            ; 004a3050
    ADD EDX,EAX                         ; 004a3051
    PUSH EBX                            ; 004a3053
    MOV dword ptr [EBX + 0x14],EDX      ; 004a3054
    CALL FUN_004a2bb0                   ; 004a3057
        ;   XREF to: 004a2bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2bb0()
    MOV EAX,0x1                         ; 004a305c
    ADD ESP,0x8                         ; 004a3061
    ADD ESP,0x210                       ; 004a3064
    POP EBP                             ; 004a306a
    POP EDI                             ; 004a306b
    POP ESI                             ; 004a306c
    POP EBX                             ; 004a306d
    RET                                 ; 004a306e
    PUSH ESI                            ; 004a306f
        ;   Label: LAB_004a306f
    PUSH 0x5d5c7f                       ; 004a3070 | = "Ignoring unknown markup tag: %s"
    PUSH 0x1cab7f0                      ; 004a3075 | DAT_01cab7f0
    CALL FUN_005b7790                   ; 004a307a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV EAX,0xffffffff                  ; 004a307f
    ADD ESP,0xc                         ; 004a3084
    ADD ESP,0x210                       ; 004a3087
    POP EBP                             ; 004a308d
    POP EDI                             ; 004a308e
    POP ESI                             ; 004a308f
    POP EBX                             ; 004a3090
    RET                                 ; 004a3091

