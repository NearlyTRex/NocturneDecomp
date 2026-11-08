; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b0a90(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004ad640 at 004ae98e
;
; Referenced Globals:
;   undefined4 DAT_005d70c3
;   undefined4 DAT_005d70cb
;   undefined4 DAT_005d70d3
;   undefined4 DAT_005d70db
;   undefined4 DAT_005d70e3
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01d02fc0
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_00408ae0
;   FUN_00408d70
;   FUN_00408de0
;   FUN_0040c8f0
;   FUN_0040d0c0
;   FUN_00503620
;   FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0a90
        ;   Label: FUN_004b0a90
    PUSH ESI                            ; 004b0a91
    PUSH EDI                            ; 004b0a92
    PUSH EBP                            ; 004b0a93
    MOV EBP,ESP                         ; 004b0a94
    SUB ESP,0xf4                        ; 004b0a96
    AND ESP,0xfffffff8                  ; 004b0a9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0a9f
    XOR EDX,EDX                         ; 004b0aa2
    ADD EAX,0x20                        ; 004b0aa4
    MOV dword ptr [ESP + 0xe4],EDX      ; 004b0aa7
    MOV dword ptr [ESP + 0xe8],EDX      ; 004b0aae
    MOV dword ptr [EAX + 0x255f4],0x0   ; 004b0ab5
    MOV dword ptr [ESP + 0xec],EAX      ; 004b0abf
    MOV EAX,[0x0061b5a8]                ; 004b0ac6 | DAT_0061b5a8
        ;   Label: LAB_004b0ac6
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004b0acb
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004b0ad2 | DAT_01fb331c
    JL 0x004b0b05                       ; 004b0ad8
        ;   XREF to: 004b0b05 (CONDITIONAL_JUMP)  ; LAB_004b0b05
    XOR EAX,EAX                         ; 004b0ada
    MOV ESP,EBP                         ; 004b0adc
    POP EBP                             ; 004b0ade
    POP EDI                             ; 004b0adf
    POP ESI                             ; 004b0ae0
    POP EBX                             ; 004b0ae1
    RET                                 ; 004b0ae2
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004b0ae3
        ;   Label: LAB_004b0ae3
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004b0aea
    INC ECX                             ; 004b0af1
    ADD EDX,0x4                         ; 004b0af2
    MOV dword ptr [ESP + 0xe4],ECX      ; 004b0af5
    MOV dword ptr [ESP + 0xe8],EDX      ; 004b0afc
    JMP 0x004b0ac6                      ; 004b0b03
        ;   XREF to: 004b0ac6 (UNCONDITIONAL_JUMP)  ; LAB_004b0ac6
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004b0b05
        ;   Label: LAB_004b0b05
    MOV EDI,dword ptr [0x01d02fc0]      ; 004b0b0c | DAT_01d02fc0
    ADD EAX,ESI                         ; 004b0b12
    PUSH EDI                            ; 004b0b14
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 004b0b15 | DAT_01fb3320
    PUSH EAX                            ; 004b0b1b
    CALL FUN_0040c8f0                   ; 004b0b1c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b0b21
    MOV EBX,EAX                         ; 004b0b24
    MOV dword ptr [ESP + 0xdc],EAX      ; 004b0b26
    TEST EAX,EAX                        ; 004b0b2d
    JZ 0x004b0ae3                       ; 004b0b2f
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    LEA EDX,[EAX + 0x20]                ; 004b0b31
    MOV EAX,dword ptr [ESP + 0xec]      ; 004b0b34
    LEA EDI,[ESP + 0x70]                ; 004b0b3b
    LEA ESI,[ESP + 0x58]                ; 004b0b3f
    FLD float ptr [EAX]                 ; 004b0b43
    FLD float ptr [EAX + 0x4]           ; 004b0b45
    FLD float ptr [EAX + 0x8]           ; 004b0b48
    FXCH ST2                            ; 004b0b4b
    FSUB float ptr [EDX]                ; 004b0b4d
    FXCH                                ; 004b0b4f
    FSUB float ptr [EDX + 0x4]          ; 004b0b51
    FXCH ST2                            ; 004b0b54
    FSUB float ptr [EDX + 0x8]          ; 004b0b56
    FXCH                                ; 004b0b59
    FSTP float ptr [ESP + 0x58]         ; 004b0b5b
    FXCH                                ; 004b0b5f
    FSTP float ptr [ESP + 0x5c]         ; 004b0b61
    FSTP float ptr [ESP + 0x60]         ; 004b0b65
    MOVSD ES:EDI,ESI                    ; 004b0b69
    MOVSD ES:EDI,ESI                    ; 004b0b6a
    MOVSD ES:EDI,ESI                    ; 004b0b6b
    FLD float ptr [ESP + 0x74]          ; 004b0b6c
    FABS                                ; 004b0b70
    FCOMP double ptr [0x005d70c3]       ; 004b0b72 | DAT_005d70c3
    FNSTSW AX                           ; 004b0b78
    SAHF                                ; 004b0b7a
    JA 0x004b0ae3                       ; 004b0b7b
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    FLD float ptr [ESP + 0x70]          ; 004b0b81
    FMUL ST0                            ; 004b0b85
    FLD float ptr [ESP + 0x78]          ; 004b0b87
    FMUL ST0                            ; 004b0b8b
    XOR EAX,EAX                         ; 004b0b8d
    FADDP                               ; 004b0b8f
    MOV dword ptr [ESP + 0x74],EAX      ; 004b0b91
    FSQRT                               ; 004b0b95
    FCOMP double ptr [0x005d70cb]       ; 004b0b97 | DAT_005d70cb
    FNSTSW AX                           ; 004b0b9d
    SAHF                                ; 004b0b9f
    JA 0x004b0ae3                       ; 004b0ba0
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    PUSH EDX                            ; 004b0ba6
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0ba7
    PUSH EDX                            ; 004b0baa
    LEA ESI,[ESP + 0x90]                ; 004b0bab
    LEA EDI,[ESP + 0x18]                ; 004b0bb2
    CALL FUN_00408de0                   ; 004b0bb6
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x90]                ; 004b0bbb
    ADD ESP,0x8                         ; 004b0bc2
    MOVSD ES:EDI,ESI                    ; 004b0bc5
    MOVSD ES:EDI,ESI                    ; 004b0bc6
    MOVSD ES:EDI,ESI                    ; 004b0bc7
    FLD float ptr [ESP + 0x10]          ; 004b0bc8
    FABS                                ; 004b0bcc
    FCOMP double ptr [0x005d70d3]       ; 004b0bce | DAT_005d70d3
    FNSTSW AX                           ; 004b0bd4
    SAHF                                ; 004b0bd6
    JA 0x004b0ae3                       ; 004b0bd7
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    FLD float ptr [ESP + 0x18]          ; 004b0bdd
    FST double ptr [ESP + 0x8]          ; 004b0be1
    FCOMP double ptr [0x005d70db]       ; 004b0be5 | DAT_005d70db
    FNSTSW AX                           ; 004b0beb
    SAHF                                ; 004b0bed
    JC 0x004b0ae3                       ; 004b0bee
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    FLD double ptr [ESP + 0x8]          ; 004b0bf4
    FCOMP double ptr [0x005d70cb]       ; 004b0bf8 | DAT_005d70cb
    FNSTSW AX                           ; 004b0bfe
    SAHF                                ; 004b0c00
    JA 0x004b0ae3                       ; 004b0c01
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    LEA EAX,[ESP + 0x10]                ; 004b0c07
    PUSH EAX                            ; 004b0c0b
    LEA ESI,[ESP + 0xd4]                ; 004b0c0c
    LEA EDI,[ESP + 0x38]                ; 004b0c13
    CALL FUN_005838f0                   ; 004b0c17
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0xd4]                ; 004b0c1c
    ADD ESP,0x4                         ; 004b0c23
    MOVSD ES:EDI,ESI                    ; 004b0c26
    MOVSD ES:EDI,ESI                    ; 004b0c27
    MOVSD ES:EDI,ESI                    ; 004b0c28
    PUSH dword ptr [ESP + 0x38]         ; 004b0c29
    CALL FUN_0040d0c0                   ; 004b0c2d
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xf4],EAX      ; 004b0c32
    FLD float ptr [ESP + 0xf4]          ; 004b0c39
    FABS                                ; 004b0c40
    ADD ESP,0x4                         ; 004b0c42
    FCOMP double ptr [0x005d70e3]       ; 004b0c45 | DAT_005d70e3
    FNSTSW AX                           ; 004b0c4b
    SAHF                                ; 004b0c4d
    JA 0x004b0ae3                       ; 004b0c4e
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    MOV ESI,dword ptr [ESP + 0xec]      ; 004b0c54
    PUSH ESI                            ; 004b0c5b
    LEA EDI,[ESP + 0x20]                ; 004b0c5c
    XOR ECX,ECX                         ; 004b0c60
    PUSH EBX                            ; 004b0c62
    LEA ESI,[ESP + 0xb4]                ; 004b0c63
    MOV dword ptr [ESP + 0xe8],ECX      ; 004b0c6a
    CALL FUN_00408de0                   ; 004b0c71
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0xb4]                ; 004b0c76
    LEA EDX,[ESP + 0x24]                ; 004b0c7d
    ADD ESP,0x8                         ; 004b0c81
    LEA EAX,[ESP + 0x10]                ; 004b0c84
    MOVSD ES:EDI,ESI                    ; 004b0c88
    MOVSD ES:EDI,ESI                    ; 004b0c89
    MOVSD ES:EDI,ESI                    ; 004b0c8a
    CMP EAX,EDX                         ; 004b0c8b
    JZ 0x004b0ca7                       ; 004b0c8d
        ;   XREF to: 004b0ca7 (CONDITIONAL_JUMP)  ; LAB_004b0ca7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b0c8f
    MOV dword ptr [ESP + 0x10],EAX      ; 004b0c93
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b0c97
    MOV dword ptr [ESP + 0x14],EAX      ; 004b0c9b
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b0c9f
    MOV dword ptr [ESP + 0x18],EAX      ; 004b0ca3
    FLD float ptr [ESP + 0x18]          ; 004b0ca7
        ;   Label: LAB_004b0ca7
    FLDZ                                ; 004b0cab
    FCOMPP                              ; 004b0cad
    FNSTSW AX                           ; 004b0caf
    SAHF                                ; 004b0cb1
    JBE 0x004b0ccb                      ; 004b0cb2
        ;   XREF to: 004b0ccb (CONDITIONAL_JUMP)  ; LAB_004b0ccb
    MOV AH,byte ptr [ESP + 0x1b]        ; 004b0cb4
    MOV EDI,0x1                         ; 004b0cb8
    XOR AH,0x80                         ; 004b0cbd
    MOV dword ptr [ESP + 0xe0],EDI      ; 004b0cc0
    MOV byte ptr [ESP + 0x1b],AH        ; 004b0cc7
    FLD float ptr [ESP + 0x10]          ; 004b0ccb
        ;   Label: LAB_004b0ccb
    FABS                                ; 004b0ccf
    FCOMP double ptr [0x005d70d3]       ; 004b0cd1 | DAT_005d70d3
    FNSTSW AX                           ; 004b0cd7
    SAHF                                ; 004b0cd9
    JA 0x004b0ae3                       ; 004b0cda
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    FLD float ptr [ESP + 0x18]          ; 004b0ce0
    FST double ptr [ESP]                ; 004b0ce4
    FCOMP double ptr [0x005d70db]       ; 004b0ce7 | DAT_005d70db
    FNSTSW AX                           ; 004b0ced
    SAHF                                ; 004b0cef
    JC 0x004b0ae3                       ; 004b0cf0
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    FLD double ptr [ESP]                ; 004b0cf6
    FCOMP double ptr [0x005d70cb]       ; 004b0cf9 | DAT_005d70cb
    FNSTSW AX                           ; 004b0cff
    SAHF                                ; 004b0d01
    JA 0x004b0ae3                       ; 004b0d02
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    LEA EAX,[ESP + 0x10]                ; 004b0d08
    PUSH EAX                            ; 004b0d0c
    LEA ESI,[ESP + 0xc8]                ; 004b0d0d
    LEA EDI,[ESP + 0xbc]                ; 004b0d14
    CALL FUN_005838f0                   ; 004b0d1b
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0xc8]                ; 004b0d20
    ADD ESP,0x4                         ; 004b0d27
    MOVSD ES:EDI,ESI                    ; 004b0d2a
    MOVSD ES:EDI,ESI                    ; 004b0d2b
    MOVSD ES:EDI,ESI                    ; 004b0d2c
    PUSH dword ptr [ESP + 0xbc]         ; 004b0d2d
    CALL FUN_0040d0c0                   ; 004b0d34
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xf4],EAX      ; 004b0d39
    FLD float ptr [ESP + 0xf4]          ; 004b0d40
    FABS                                ; 004b0d47
    ADD ESP,0x4                         ; 004b0d49
    FCOMP double ptr [0x005d70e3]       ; 004b0d4c | DAT_005d70e3
    FNSTSW AX                           ; 004b0d52
    SAHF                                ; 004b0d54
    JA 0x004b0ae3                       ; 004b0d55
        ;   XREF to: 004b0ae3 (CONDITIONAL_JUMP)  ; LAB_004b0ae3
    PUSH 0x1                            ; 004b0d5b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0d5d
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004b0d60
    PUSH 0x16                           ; 004b0d67
    MOV dword ptr [EDX + 0x25614],EAX   ; 004b0d69
    LEA EAX,[EDX + 0x2b4]               ; 004b0d6f
    PUSH EAX                            ; 004b0d75
    CALL FUN_00503620                   ; 004b0d76
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004b0d7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b0d7e
    MOV ECX,0x40000000                  ; 004b0d81
    MOV EBX,dword ptr [ESP + 0xe0]      ; 004b0d86
    MOV dword ptr [EAX + 0x10a74],0x0   ; 004b0d8d
    XOR EAX,EAX                         ; 004b0d97
    MOV dword ptr [ESP + 0x48],ECX      ; 004b0d99
    MOV dword ptr [ESP + 0x40],EAX      ; 004b0d9d
    MOV dword ptr [ESP + 0x44],EAX      ; 004b0da1
    TEST EBX,EBX                        ; 004b0da5
    JZ 0x004b0db1                       ; 004b0da7
        ;   XREF to: 004b0db1 (CONDITIONAL_JUMP)  ; LAB_004b0db1
    MOV dword ptr [ESP + 0x48],0xc0000000 ; 004b0da9
    LEA EAX,[ESP + 0x40]                ; 004b0db1
        ;   Label: LAB_004b0db1
    PUSH EAX                            ; 004b0db5
    MOV EDI,dword ptr [ESP + 0xe0]      ; 004b0db6
    PUSH EDI                            ; 004b0dbd
    LEA ESI,[ESP + 0x6c]                ; 004b0dbe
    CALL FUN_00408d70                   ; 004b0dc2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA EDI,[ESP + 0x9c]                ; 004b0dc7
    LEA ESI,[ESP + 0x6c]                ; 004b0dce
    ADD ESP,0x8                         ; 004b0dd2
    MOVSD ES:EDI,ESI                    ; 004b0dd5
    MOVSD ES:EDI,ESI                    ; 004b0dd6
    MOVSD ES:EDI,ESI                    ; 004b0dd7
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0dd8
    MOV EAX,dword ptr [ESP + 0x94]      ; 004b0ddb
    MOV dword ptr [EDX + 0x20],EAX      ; 004b0de2
    MOV EAX,dword ptr [ESP + 0x98]      ; 004b0de5
    MOV dword ptr [EDX + 0x24],EAX      ; 004b0dec
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004b0def
    MOV dword ptr [EDX + 0x28],EAX      ; 004b0df6
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004b0df9
    LEA EDI,[ESP + 0x4c]                ; 004b0e00
    LEA ESI,[ESP + 0x7c]                ; 004b0e04
    FLD float ptr [EAX + 0x24]          ; 004b0e08
    FLD float ptr [EAX + 0x28]          ; 004b0e0b
    FLD float ptr [EAX + 0x20]          ; 004b0e0e
    LEA EAX,[ESP + 0x4c]                ; 004b0e11
    FSUB float ptr [EDX + 0x20]         ; 004b0e15
    FXCH ST2                            ; 004b0e18
    FSUB float ptr [EDX + 0x24]         ; 004b0e1a
    FXCH                                ; 004b0e1d
    FSUB float ptr [EDX + 0x28]         ; 004b0e1f
    FXCH ST2                            ; 004b0e22
    FSTP float ptr [ESP + 0x7c]         ; 004b0e24
    FSTP float ptr [ESP + 0x80]         ; 004b0e28
    FSTP float ptr [ESP + 0x84]         ; 004b0e2f
    MOVSD ES:EDI,ESI                    ; 004b0e36
    MOVSD ES:EDI,ESI                    ; 004b0e37
    MOVSD ES:EDI,ESI                    ; 004b0e38
    PUSH EAX                            ; 004b0e39
    LEA ESI,[ESP + 0x2c]                ; 004b0e3a
    LEA EDI,[ESP + 0xa4]                ; 004b0e3e
    CALL FUN_005838f0                   ; 004b0e45
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x2c]                ; 004b0e4a
    ADD ESP,0x4                         ; 004b0e4e
    MOVSD ES:EDI,ESI                    ; 004b0e51
    MOVSD ES:EDI,ESI                    ; 004b0e52
    MOVSD ES:EDI,ESI                    ; 004b0e53
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b0e54
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004b0e57
    PUSH EDX                            ; 004b0e5e
    MOV dword ptr [EDX + 0x34],EAX      ; 004b0e5f
    CALL FUN_00408ae0                   ; 004b0e62
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    MOV EAX,0x1                         ; 004b0e67
    ADD ESP,0x4                         ; 004b0e6c
    MOV ESP,EBP                         ; 004b0e6f
    POP EBP                             ; 004b0e71
    POP EDI                             ; 004b0e72
    POP ESI                             ; 004b0e73
    POP EBX                             ; 004b0e74
    RET                                 ; 004b0e75

