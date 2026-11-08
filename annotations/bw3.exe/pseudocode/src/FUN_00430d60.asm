; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430d60(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[6]:
;   FUN_00410110 at 00410175
;   FUN_00489b80 at 00489bab
;   FUN_004f91d0 at 004f9263
;   FUN_005099e0 at 00509a5b
;   FUN_00523e50 at 00524047
;   FUN_00599d60 at 00599dc5
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005b83c5+1
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_005fed24
;   undefined4 DAT_01d2130c
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   FUN_00408b80
;   FUN_0042f770
;   FUN_0042fbd0
;   FUN_0042ff70
;   FUN_0042ffe0
;   FUN_004300e0
;   FUN_00431ce0
;   FUN_0048c150
;   FUN_004bd930
;   FUN_004ce9c0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430d60
        ;   Label: FUN_00430d60
    PUSH ESI                            ; 00430d61
    PUSH EDI                            ; 00430d62
    PUSH EBP                            ; 00430d63
    MOV EBP,ESP                         ; 00430d64
    SUB ESP,0x44                        ; 00430d66
    AND ESP,0xfffffff8                  ; 00430d69
    MOV EBX,dword ptr [EBP + 0x14]      ; 00430d6c
    CMP dword ptr [EBX + 0x27b0],0x0    ; 00430d6f
    JNZ 0x00430f6a                      ; 00430d76
        ;   XREF to: 00430f6a (CONDITIONAL_JUMP)  ; LAB_00430f6a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430d7c
    FLD float ptr [EAX + 0x4]           ; 00430d7f
    FLDZ                                ; 00430d82
    FCOMPP                              ; 00430d84
    FNSTSW AX                           ; 00430d86
    SAHF                                ; 00430d88
    JNC 0x00430f63                      ; 00430d89
        ;   XREF to: 00430f63 (CONDITIONAL_JUMP)  ; LAB_00430f63
    MOV EDX,dword ptr [EBP + 0x18]      ; 00430d8f
    MOV dword ptr [EBX + 0x3268],0x1    ; 00430d92
    FLD float ptr [EDX + 0x10]          ; 00430d9c
    FMUL ST0                            ; 00430d9f
    FLD float ptr [EDX + 0xc]           ; 00430da1
    FMUL ST0                            ; 00430da4
    FADDP                               ; 00430da6
    FLD float ptr [EDX + 0x14]          ; 00430da8
    FMUL ST0                            ; 00430dab
    FADDP                               ; 00430dad
    FSQRT                               ; 00430daf
    XOR ECX,ECX                         ; 00430db1
    ADD EDX,0xc                         ; 00430db3
    FLDZ                                ; 00430db6
    FCOMPP                              ; 00430db8
    FNSTSW AX                           ; 00430dba
    SAHF                                ; 00430dbc
    JNC 0x00430dc1                      ; 00430dbd
        ;   XREF to: 00430dc1 (CONDITIONAL_JUMP)  ; LAB_00430dc1
    MOV ECX,EDX                         ; 00430dbf
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430dc1
        ;   Label: LAB_00430dc1
    MOV EAX,dword ptr [EAX + 0x30]      ; 00430dc4
    CMP EAX,0x6                         ; 00430dc7
    JNC 0x00430fb9                      ; 00430dca
        ;   XREF to: 00430fb9 (CONDITIONAL_JUMP)  ; LAB_00430fb9
    CMP EAX,0x4                         ; 00430dd0
    JNC 0x00430fd6                      ; 00430dd3
        ;   XREF to: 00430fd6 (CONDITIONAL_JUMP)  ; LAB_00430fd6
    CMP EAX,0x3                         ; 00430dd9
    JNZ 0x00430dee                      ; 00430ddc
        ;   XREF to: 00430dee (CONDITIONAL_JUMP)  ; LAB_00430dee
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430dde
    PUSH dword ptr [EAX + 0x18]         ; 00430de1
    PUSH ECX                            ; 00430de4
    PUSH EBX                            ; 00430de5
    CALL FUN_0042ffe0                   ; 00430de6
        ;   XREF to: 0042ffe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ffe0()
    ADD ESP,0xc                         ; 00430deb
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430dee
        ;   Label: LAB_00430dee
    CMP dword ptr [EAX + 0x28],0x5      ; 00430df1
    JNZ 0x00430e35                      ; 00430df5
        ;   XREF to: 00430e35 (CONDITIONAL_JUMP)  ; LAB_00430e35
    ADD EAX,0x1c                        ; 00430df7
    PUSH EAX                            ; 00430dfa
    PUSH EBX                            ; 00430dfb
    LEA ESI,[ESP + 0x14]                ; 00430dfc
    CALL FUN_00408b80                   ; 00430e00
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 00430e05
    PUSH 0x40000000                     ; 00430e08
    LEA EDI,[ESP + 0x4]                 ; 00430e0d
    PUSH 0x0                            ; 00430e11
    LEA ESI,[ESP + 0x14]                ; 00430e13
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430e17
    PUSH 0x3f800000                     ; 00430e1a
    MOVSD ES:EDI,ESI                    ; 00430e1f
    MOVSD ES:EDI,ESI                    ; 00430e20
    MOVSD ES:EDI,ESI                    ; 00430e21
    PUSH 0x0                            ; 00430e22
    MOV ESI,dword ptr [EAX]             ; 00430e24
    PUSH ESI                            ; 00430e26
    LEA EAX,[ESP + 0x14]                ; 00430e27
    PUSH EAX                            ; 00430e2b
    PUSH EBX                            ; 00430e2c
    CALL FUN_0042fbd0                   ; 00430e2d
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042fbd0()
    ADD ESP,0x1c                        ; 00430e32
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430e35
        ;   Label: LAB_00430e35
    CMP dword ptr [EAX + 0x28],0x9      ; 00430e38
    JNZ 0x00430e59                      ; 00430e3c
        ;   XREF to: 00430e59 (CONDITIONAL_JUMP)  ; LAB_00430e59
    ADD EAX,0x1c                        ; 00430e3e
    PUSH EAX                            ; 00430e41
    PUSH EBX                            ; 00430e42
    LEA ESI,[ESP + 0x38]                ; 00430e43
    CALL FUN_00408b80                   ; 00430e47
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 00430e4c
    MOV dword ptr [EBX + 0xbc70],0x3f000000 ; 00430e4f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430e59
        ;   Label: LAB_00430e59
    FLD float ptr [EAX + 0x8]           ; 00430e5c
    FLDZ                                ; 00430e5f
    FCOMPP                              ; 00430e61
    FNSTSW AX                           ; 00430e63
    SAHF                                ; 00430e65
    JNC 0x00430ec9                      ; 00430e66
        ;   XREF to: 00430ec9 (CONDITIONAL_JUMP)  ; LAB_00430ec9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430e68
    FLD float ptr [EAX + 0x4]           ; 00430e6b
    FMUL float ptr [EAX + 0x8]          ; 00430e6e
    CALL FUN_005a3120                   ; 00430e71
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x40]        ; 00430e76
    MOV EAX,dword ptr [ESP + 0x40]      ; 00430e7a
    INC EAX                             ; 00430e7e
    MOV dword ptr [ESP + 0x3c],EAX      ; 00430e7f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430e83
    ADD EAX,0x1c                        ; 00430e86
    PUSH EAX                            ; 00430e89
    PUSH EBX                            ; 00430e8a
    LEA ESI,[ESP + 0x20]                ; 00430e8b
    LEA EDI,[ESP + 0x2c]                ; 00430e8f
    CALL FUN_00408b80                   ; 00430e93
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x20]                ; 00430e98
    ADD ESP,0x8                         ; 00430e9c
    MOVSD ES:EDI,ESI                    ; 00430e9f
    MOVSD ES:EDI,ESI                    ; 00430ea0
    MOVSD ES:EDI,ESI                    ; 00430ea1
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 00430ea2
    PUSH EAX                            ; 00430ea8
    MOV EDX,dword ptr [ESP + 0x40]      ; 00430ea9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430ead
    PUSH EDX                            ; 00430eb0
    ADD EAX,0xc                         ; 00430eb1
    PUSH EAX                            ; 00430eb4
    LEA EAX,[ESP + 0x30]                ; 00430eb5
    PUSH EAX                            ; 00430eb9
    MOV ECX,dword ptr [0x005fed24]      ; 00430eba | DAT_005fed24
    PUSH ECX                            ; 00430ec0
    CALL FUN_004ce9c0                   ; 00430ec1
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce9c0()
    ADD ESP,0x14                        ; 00430ec6
    CMP dword ptr [EBX + 0x2540],0x1    ; 00430ec9
        ;   Label: LAB_00430ec9
    JNZ 0x00430f0c                      ; 00430ed0
        ;   XREF to: 00430f0c (CONDITIONAL_JUMP)  ; LAB_00430f0c
    MOV EAX,[0x01d5ba14]                ; 00430ed2 | DAT_01d5ba14
    CMP EBX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00430ed7
    JZ 0x00430f0c                       ; 00430ede
        ;   XREF to: 00430f0c (CONDITIONAL_JUMP)  ; LAB_00430f0c
    FLD float ptr [EBX + 0x2538]        ; 00430ee0
    FDIV float ptr [EBX + 0x253c]       ; 00430ee6
    PUSH 0x40a00000                     ; 00430eec
    SUB ESP,0x4                         ; 00430ef1
    LEA EAX,[EBX + 0x2544]              ; 00430ef4
    FSTP float ptr [ESP]                ; 00430efa
    PUSH EAX                            ; 00430efd
    MOV EAX,[0x005fe9dc]                ; 00430efe | DAT_005fe9dc
    PUSH EAX                            ; 00430f03 | DAT_01d2130c
    CALL FUN_004bd930                   ; 00430f04
        ;   XREF to: 004bd930 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd930()
    ADD ESP,0x10                        ; 00430f09
    MOV EAX,[0x01d5ba14]                ; 00430f0c | DAT_01d5ba14
        ;   Label: LAB_00430f0c
    CMP EBX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00430f11
    JZ 0x00430f50                       ; 00430f18
        ;   XREF to: 00430f50 (CONDITIONAL_JUMP)  ; LAB_00430f50
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430f1a
    CMP dword ptr [EAX + 0x30],0x6f     ; 00430f1d
    JNZ 0x00430f50                      ; 00430f21
        ;   XREF to: 00430f50 (CONDITIONAL_JUMP)  ; LAB_00430f50
    FLD float ptr [EBX + 0x2538]        ; 00430f23
    FDIV float ptr [EBX + 0x253c]       ; 00430f29
    PUSH 0x40a00000                     ; 00430f2f
    SUB ESP,0x4                         ; 00430f34
    LEA EAX,[EBX + 0x2544]              ; 00430f37
    FSTP float ptr [ESP]                ; 00430f3d
    PUSH EAX                            ; 00430f40
    MOV ESI,dword ptr [0x005fe9dc]      ; 00430f41 | DAT_005fe9dc
    PUSH ESI                            ; 00430f47 | DAT_01d2130c
    CALL FUN_004bd930                   ; 00430f48
        ;   XREF to: 004bd930 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd930()
    ADD ESP,0x10                        ; 00430f4d
    FLD float ptr [EBX + 0x2538]        ; 00430f50
        ;   Label: LAB_00430f50
    FLDZ                                ; 00430f56
    FCOMPP                              ; 00430f58
    FNSTSW AX                           ; 00430f5a
    SAHF                                ; 00430f5c
    JNC 0x00430fe6                      ; 00430f5d
        ;   XREF to: 00430fe6 (CONDITIONAL_JUMP)  ; LAB_00430fe6
    MOV ESP,EBP                         ; 00430f63
        ;   Label: LAB_00430f63
    POP EBP                             ; 00430f65
    POP EDI                             ; 00430f66
    POP ESI                             ; 00430f67
    POP EBX                             ; 00430f68
    RET                                 ; 00430f69
    PUSH 0x5b83c6                       ; 00430f6a | s_ShotInvulnerable_005b83c5+1
        ;   Label: LAB_00430f6a
    MOV EDI,dword ptr [0x005fba60]      ; 00430f6f | DAT_005fba60
    PUSH EDI                            ; 00430f75
    CALL FUN_0048c150                   ; 00430f76
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 00430f7b
    MOV ESP,EBP                         ; 00430f7e
    POP EBP                             ; 00430f80
    POP EDI                             ; 00430f81
    POP ESI                             ; 00430f82
    POP EBX                             ; 00430f83
    RET                                 ; 00430f84
    PUSH 0x1                            ; 00430f85
        ;   Label: LAB_00430f85
    MOV EAX,dword ptr [EBP + 0x18]      ; 00430f87
    PUSH dword ptr [EAX + 0x18]         ; 00430f8a
    PUSH ECX                            ; 00430f8d
    PUSH EBX                            ; 00430f8e
    CALL FUN_004300e0                   ; 00430f8f
        ;   XREF to: 004300e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004300e0()
    ADD ESP,0x10                        ; 00430f94
    JMP 0x00430dee                      ; 00430f97
        ;   XREF to: 00430dee (UNCONDITIONAL_JUMP)  ; LAB_00430dee
    PUSH EBX                            ; 00430f9c
        ;   Label: LAB_00430f9c
    CALL FUN_0042f770                   ; 00430f9d
        ;   XREF to: 0042f770 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f770()
    ADD ESP,0x4                         ; 00430fa2
    JMP 0x00430dee                      ; 00430fa5
        ;   XREF to: 00430dee (UNCONDITIONAL_JUMP)  ; LAB_00430dee
    MOV dword ptr [EBX + 0xbc70],0x40000000 ; 00430faa
        ;   Label: LAB_00430faa
    JMP 0x00430dee                      ; 00430fb4
        ;   XREF to: 00430dee (UNCONDITIONAL_JUMP)  ; LAB_00430dee
    JBE 0x00430faa                      ; 00430fb9
        ;   XREF to: 00430faa (CONDITIONAL_JUMP)  ; LAB_00430faa
        ;   Label: LAB_00430fb9
    CMP EAX,0x68                        ; 00430fbb
    JNC 0x00430fca                      ; 00430fbe
        ;   XREF to: 00430fca (CONDITIONAL_JUMP)  ; LAB_00430fca
    CMP EAX,0x7                         ; 00430fc0
    JZ 0x00430f85                       ; 00430fc3
        ;   XREF to: 00430f85 (CONDITIONAL_JUMP)  ; LAB_00430f85
    JMP 0x00430dee                      ; 00430fc5
        ;   XREF to: 00430dee (UNCONDITIONAL_JUMP)  ; LAB_00430dee
    JBE 0x00430f9c                      ; 00430fca
        ;   XREF to: 00430f9c (CONDITIONAL_JUMP)  ; LAB_00430f9c
        ;   Label: LAB_00430fca
    CMP EAX,0x6a                        ; 00430fcc
    JZ 0x00430faa                       ; 00430fcf
        ;   XREF to: 00430faa (CONDITIONAL_JUMP)  ; LAB_00430faa
    JMP 0x00430dee                      ; 00430fd1
        ;   XREF to: 00430dee (UNCONDITIONAL_JUMP)  ; LAB_00430dee
    JBE 0x00430f85                      ; 00430fd6
        ;   XREF to: 00430f85 (CONDITIONAL_JUMP)  ; LAB_00430f85
        ;   Label: LAB_00430fd6
    PUSH EBX                            ; 00430fd8
    CALL FUN_0042ff70                   ; 00430fd9
        ;   XREF to: 0042ff70 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ff70()
    ADD ESP,0x4                         ; 00430fde
    JMP 0x00430dee                      ; 00430fe1
        ;   XREF to: 00430dee (UNCONDITIONAL_JUMP)  ; LAB_00430dee
    PUSH EBX                            ; 00430fe6
        ;   Label: LAB_00430fe6
    CALL FUN_00431ce0                   ; 00430fe7
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00431ce0()
    ADD ESP,0x4                         ; 00430fec
    MOV ESP,EBP                         ; 00430fef
    POP EBP                             ; 00430ff1
    POP EDI                             ; 00430ff2
    POP ESI                             ; 00430ff3
    POP EBX                             ; 00430ff4
    RET                                 ; 00430ff5

