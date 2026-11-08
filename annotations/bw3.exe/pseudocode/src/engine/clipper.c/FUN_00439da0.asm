; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00439da0(uint param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0043a840 at 0043a854
;
; Referenced Globals:
;   void* switchdataD_00439d4c = 0043a034
;   void* PTR_caseD_1_00439d50 = 0043a30c
;   void* PTR_caseD_3_00439d58 = 0043a047
;   void* switchdataD_00439d5c = 0043a0d1
;   void* PTR_caseD_1_00439d60 = 0043a3e5
;   void* PTR_caseD_3_00439d68 = 0043a0d6
;   void* switchdataD_00439d6c = 0043a175
;   void* PTR_caseD_1_00439d70 = 0043a494
;   void* PTR_caseD_3_00439d78 = 0043a17a
;   void* switchdataD_00439d7c = 0043a218
;   void* PTR_caseD_1_00439d80 = 0043a543
;   void* PTR_caseD_3_00439d88 = 0043a21d
;   void* switchdataD_00439d8c = 0043a6f9
;   void* PTR_caseD_1_00439d90 = 0043a763
;   void* PTR_caseD_3_00439d98 = 0043a73e
;   ... and 41 more
;
; Called Functions:
;   FUN_004390c0
;   FUN_004391c0
;   FUN_004392c0
;   FUN_004393c0
;   FUN_004394c0
;   FUN_004e4330
;   FUN_00515ac0
;   FUN_00565c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439da0
        ;   Label: FUN_00439da0
    PUSH ESI                            ; 00439da1
    PUSH EDI                            ; 00439da2
    PUSH EBP                            ; 00439da3
    SUB ESP,0x140                       ; 00439da4
    MOV EBP,dword ptr [ESP + 0x154]     ; 00439daa
    MOV EDI,dword ptr [ESP + 0x158]     ; 00439db1
    MOV EDX,0xffffffff                  ; 00439db8
    XOR EBX,EBX                         ; 00439dbd
    MOV dword ptr [ESP + 0x100],EDX     ; 00439dbf
    XOR EDX,EDX                         ; 00439dc6
    TEST EBP,EBP                        ; 00439dc8
    JLE 0x00439df8                      ; 00439dca
        ;   XREF to: 00439df8 (CONDITIONAL_JUMP)  ; LAB_00439df8
    MOV EAX,EDI                         ; 00439dcc
    IMUL ECX,dword ptr [EAX],0x30       ; 00439dce
        ;   Label: LAB_00439dce
    MOV ECX,dword ptr [ECX + 0x60b024]  ; 00439dd1 | DAT_0060b024
    TEST ECX,0x80000000                 ; 00439dd7
    JZ 0x00439de0                       ; 00439ddd
        ;   XREF to: 00439de0 (CONDITIONAL_JUMP)  ; LAB_00439de0
    INC EBX                             ; 00439ddf
    MOV ESI,dword ptr [ESP + 0x100]     ; 00439de0
        ;   Label: LAB_00439de0
    ADD EAX,0x4                         ; 00439de7
    AND ESI,ECX                         ; 00439dea
    INC EDX                             ; 00439dec
    MOV dword ptr [ESP + 0x100],ESI     ; 00439ded
    CMP EDX,EBP                         ; 00439df4
    JL 0x00439dce                       ; 00439df6
        ;   XREF to: 00439dce (CONDITIONAL_JUMP)  ; LAB_00439dce
    CMP EBX,EBP                         ; 00439df8
        ;   Label: LAB_00439df8
    JNZ 0x00439e0a                      ; 00439dfa
        ;   XREF to: 00439e0a (CONDITIONAL_JUMP)  ; LAB_00439e0a
    TEST byte ptr [ESP + 0x100],0xff    ; 00439dfc
    JNZ 0x00439ec0                      ; 00439e04
        ;   XREF to: 00439ec0 (CONDITIONAL_JUMP)  ; LAB_00439ec0
    TEST EBX,EBX                        ; 00439e0a
        ;   Label: LAB_00439e0a
    JNZ 0x00439fad                      ; 00439e0c
        ;   XREF to: 00439fad (CONDITIONAL_JUMP)  ; LAB_00439fad
    CMP dword ptr [0x01c6cee8],0x0      ; 00439e12 | DAT_01c6cee8
    JZ 0x00439f28                       ; 00439e19
        ;   XREF to: 00439f28 (CONDITIONAL_JUMP)  ; LAB_00439f28
    CMP dword ptr [0x007303f4],0x0      ; 00439e1f | DAT_007303f4
    JNZ 0x00439f28                      ; 00439e26
        ;   XREF to: 00439f28 (CONDITIONAL_JUMP)  ; LAB_00439f28
    XOR EAX,EAX                         ; 00439e2c
    TEST EBP,EBP                        ; 00439e2e
    JLE 0x00439e50                      ; 00439e30
        ;   XREF to: 00439e50 (CONDITIONAL_JUMP)  ; LAB_00439e50
    MOV EBX,EDI                         ; 00439e32
    IMUL EDX,dword ptr [EBX],0x30       ; 00439e34
        ;   Label: LAB_00439e34
    INC EAX                             ; 00439e37
    ADD EDX,0x60b014                    ; 00439e38 | DAT_0060b014
    ADD EBX,0x4                         ; 00439e3e
    MOV dword ptr [EAX*0x4 + 0x7e4488],EDX ; 00439e41 | DAT_007e448c | DAT_007e4490
    CMP EAX,EBP                         ; 00439e48
    JL 0x00439e34                       ; 00439e4a
        ;   XREF to: 00439e34 (CONDITIONAL_JUMP)  ; LAB_00439e34
    LEA EAX,[EAX]                       ; 00439e4c
    CMP dword ptr [0x007303fc],0x0      ; 00439e50 | DAT_007303fc
        ;   Label: LAB_00439e50
    JZ 0x00439ef2                       ; 00439e57
        ;   XREF to: 00439ef2 (CONDITIONAL_JUMP)  ; LAB_00439ef2
    CMP EBP,0x3                         ; 00439e5d
    JLE 0x00439ed2                      ; 00439e60
        ;   XREF to: 00439ed2 (CONDITIONAL_JUMP)  ; LAB_00439ed2
    LEA EAX,[EBP + -0x2]                ; 00439e66
    XOR EBX,EBX                         ; 00439e69
    MOV dword ptr [ESP + 0x128],EAX     ; 00439e6b
    LEA EDI,[EAX*0x4 + 0x0]             ; 00439e72
    XOR ESI,ESI                         ; 00439e79
    TEST EDI,EDI                        ; 00439e7b
    JLE 0x00439ea7                      ; 00439e7d
        ;   XREF to: 00439ea7 (CONDITIONAL_JUMP)  ; LAB_00439ea7
    MOV EAX,dword ptr [EBX + 0x7e4494]  ; 00439e7f | DAT_007e4494 | DAT_007e4498
        ;   Label: LAB_00439e7f
    PUSH EAX                            ; 00439e85
    MOV EDX,dword ptr [EBX + 0x7e4490]  ; 00439e86 | DAT_007e4490 | DAT_007e4494
    PUSH EDX                            ; 00439e8c
    MOV ECX,dword ptr [0x007e448c]      ; 00439e8d | DAT_007e448c
    PUSH ECX                            ; 00439e93
    CALL FUN_00515ac0                   ; 00439e94
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00515ac0()
    ADD ESP,0xc                         ; 00439e99
    TEST EAX,EAX                        ; 00439e9c
    JZ 0x00439ecf                       ; 00439e9e
        ;   XREF to: 00439ecf (CONDITIONAL_JUMP)  ; LAB_00439ecf
    ADD EBX,0x4                         ; 00439ea0
        ;   Label: LAB_00439ea0
    CMP EBX,EDI                         ; 00439ea3
    JL 0x00439e7f                       ; 00439ea5
        ;   XREF to: 00439e7f (CONDITIONAL_JUMP)  ; LAB_00439e7f
    CMP ESI,dword ptr [ESP + 0x128]     ; 00439ea7
        ;   Label: LAB_00439ea7
    JNZ 0x00439ef2                      ; 00439eae
        ;   XREF to: 00439ef2 (CONDITIONAL_JUMP)  ; LAB_00439ef2
        ;   Label: LAB_00439eae
    MOV EAX,0x1                         ; 00439eb0
        ;   Label: LAB_00439eb0
    ADD ESP,0x140                       ; 00439eb5
        ;   Label: LAB_00439eb5
    POP EBP                             ; 00439ebb
    POP EDI                             ; 00439ebc
    POP ESI                             ; 00439ebd
    POP EBX                             ; 00439ebe
    RET                                 ; 00439ebf
    XOR EBX,EBP                         ; 00439ec0
        ;   Label: LAB_00439ec0
    MOV EAX,0x1                         ; 00439ec2
    MOV dword ptr [0x007e3e88],EBX      ; 00439ec7 | DAT_007e3e88
    JMP 0x00439eb5                      ; 00439ecd
        ;   XREF to: 00439eb5 (UNCONDITIONAL_JUMP)  ; LAB_00439eb5
    INC ESI                             ; 00439ecf
        ;   Label: LAB_00439ecf
    JMP 0x00439ea0                      ; 00439ed0
        ;   XREF to: 00439ea0 (UNCONDITIONAL_JUMP)  ; LAB_00439ea0
    MOV EAX,[0x007e4494]                ; 00439ed2 | DAT_007e4494
        ;   Label: LAB_00439ed2
    PUSH EAX                            ; 00439ed7
    MOV EDX,dword ptr [0x007e4490]      ; 00439ed8 | DAT_007e4490
    PUSH EDX                            ; 00439ede
    MOV ECX,dword ptr [0x007e448c]      ; 00439edf | DAT_007e448c
    PUSH ECX                            ; 00439ee5
    CALL FUN_00515ac0                   ; 00439ee6
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00515ac0()
    ADD ESP,0xc                         ; 00439eeb
    TEST EAX,EAX                        ; 00439eee
    JMP 0x00439eae                      ; 00439ef0
        ;   XREF to: 00439eae (UNCONDITIONAL_JUMP)  ; LAB_00439eae
    MOV ESI,dword ptr [0x01c6e2b4]      ; 00439ef2 | DAT_01c6e2b4
        ;   Label: LAB_00439ef2
    PUSH ESI                            ; 00439ef8
    LEA EAX,[EBP + -0x2]                ; 00439ef9
    MOV EBX,dword ptr [0x01ed3198]      ; 00439efc | DAT_01ed3198
    PUSH EBP                            ; 00439f02
    ADD EBX,EAX                         ; 00439f03
    PUSH 0x7e448c                       ; 00439f05 | DAT_007e448c
    MOV dword ptr [0x01ed3198],EBX      ; 00439f0a | DAT_01ed3198
    CALL FUN_00565c40                   ; 00439f10
        ;   XREF to: 00565c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00565c40()
    MOV EAX,0x1                         ; 00439f15
    ADD ESP,0xc                         ; 00439f1a
    ADD ESP,0x140                       ; 00439f1d
    POP EBP                             ; 00439f23
    POP EDI                             ; 00439f24
    POP ESI                             ; 00439f25
    POP EBX                             ; 00439f26
    RET                                 ; 00439f27
    XOR ECX,ECX                         ; 00439f28
        ;   Label: LAB_00439f28
    MOV dword ptr [0x007e3e88],EBP      ; 00439f2a | DAT_007e3e88
    MOV dword ptr [ESP + 0x13c],ECX     ; 00439f30
    TEST EBP,EBP                        ; 00439f37
    JLE 0x00439fa0                      ; 00439f39
        ;   XREF to: 00439fa0 (CONDITIONAL_JUMP)  ; LAB_00439fa0
    MOV EBX,0x7e3e8c                    ; 00439f3b | DAT_007e3e8c
    MOV EDX,EDI                         ; 00439f40
    IMUL ESI,dword ptr [EDX],0x30       ; 00439f42
        ;   Label: LAB_00439f42
    MOV ECX,0x30                        ; 00439f45
    ADD ESI,0x60b014                    ; 00439f4a | DAT_0060b014
    MOV EDI,EBX                         ; 00439f50
    TEST EDI,0x7                        ; 00439f52
    JZ 0x00439f60                       ; 00439f58
        ;   XREF to: 00439f60 (CONDITIONAL_JUMP)  ; LAB_00439f60
    MOVSD ES:EDI,ESI                    ; 00439f5a | DAT_0060b014 | DAT_007e3e8c | DAT_007e3ebc
    SUB ECX,0x4                         ; 00439f5b
    JLE 0x00439f7d                      ; 00439f5e
        ;   XREF to: 00439f7d (CONDITIONAL_JUMP)  ; LAB_00439f7d
    SUB ECX,0x8                         ; 00439f60
        ;   Label: LAB_00439f60
    JL 0x00439f71                       ; 00439f63
        ;   XREF to: 00439f71 (CONDITIONAL_JUMP)  ; LAB_00439f71
    FILD qword ptr [ESI]                ; 00439f65 | DAT_0060b018 | DAT_0060b020 | DAT_0060b014
    ADD ESI,0x8                         ; 00439f67
    FISTP qword ptr [EDI]               ; 00439f6a | DAT_007e3e90 | DAT_007e3e98 | DAT_007e3ec0
    ADD EDI,0x8                         ; 00439f6c
    JMP 0x00439f60                      ; 00439f6f
        ;   XREF to: 00439f60 (UNCONDITIONAL_JUMP)  ; LAB_00439f60
    ADD ECX,0x8                         ; 00439f71
        ;   Label: LAB_00439f71
    JLE 0x00439f7d                      ; 00439f74
        ;   XREF to: 00439f7d (CONDITIONAL_JUMP)  ; LAB_00439f7d
    MOVSD ES:EDI,ESI                    ; 00439f76 | DAT_0060b020 | DAT_007e3e98
    SUB ECX,0x4                         ; 00439f77
    JLE 0x00439f7d                      ; 00439f7a
        ;   XREF to: 00439f7d (CONDITIONAL_JUMP)  ; LAB_00439f7d
    MOVSD ES:EDI,ESI                    ; 00439f7c | DAT_0060b024 | DAT_007e3e9c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00439f7d
        ;   Label: LAB_00439f7d
    ADD EDX,0x4                         ; 00439f84
    INC EAX                             ; 00439f87
    ADD EBX,0x30                        ; 00439f88
    MOV dword ptr [ESP + 0x13c],EAX     ; 00439f8b
    CMP EBP,EAX                         ; 00439f92
    JG 0x00439f42                       ; 00439f94
        ;   XREF to: 00439f42 (CONDITIONAL_JUMP)  ; LAB_00439f42
    LEA EAX,[EAX]                       ; 00439f96
    LEA EDX,[EDX]                       ; 00439f9c
    XOR EAX,EAX                         ; 00439fa0
        ;   Label: LAB_00439fa0
    ADD ESP,0x140                       ; 00439fa2
    POP EBP                             ; 00439fa8
    POP EDI                             ; 00439fa9
    POP ESI                             ; 00439faa
    POP EBX                             ; 00439fab
    RET                                 ; 00439fac
    XOR EAX,EAX                         ; 00439fad
        ;   Label: LAB_00439fad
    TEST EBP,EBP                        ; 00439faf
    JLE 0x00439fd0                      ; 00439fb1
        ;   XREF to: 00439fd0 (CONDITIONAL_JUMP)  ; LAB_00439fd0
    MOV EBX,EDI                         ; 00439fb3
    IMUL EDX,dword ptr [EBX],0x30       ; 00439fb5
        ;   Label: LAB_00439fb5
    INC EAX                             ; 00439fb8
    ADD EDX,0x60b014                    ; 00439fb9 | DAT_0060b014
    ADD EBX,0x4                         ; 00439fbf
    MOV dword ptr [ESP + EAX*0x4 + 0x7c],EDX ; 00439fc2
    CMP EAX,EBP                         ; 00439fc6
    JL 0x00439fb5                       ; 00439fc8
        ;   XREF to: 00439fb5 (CONDITIONAL_JUMP)  ; LAB_00439fb5
    LEA EAX,[EAX]                       ; 00439fca
    LEA EDX,[ESP + 0x80]                ; 00439fd0
        ;   Label: LAB_00439fd0
    MOV dword ptr [0x007e3e88],EBP      ; 00439fd7 | DAT_007e3e88
    MOV dword ptr [ESP + 0x108],EBP     ; 00439fdd
    XOR EAX,EAX                         ; 00439fe4
    XOR ESI,ESI                         ; 00439fe6
    MOV [0x007e4d50],EAX                ; 00439fe8 | DAT_007e4d50
    MOV dword ptr [ESP + 0x10c],ESI     ; 00439fed
    MOV EAX,ESP                         ; 00439ff4
    MOV EBX,dword ptr [EDX + EBP*0x4 + -0x4] ; 00439ff6
    MOV dword ptr [ESP + 0x104],EAX     ; 00439ffa
    TEST EBP,EBP                        ; 0043a001
    JLE 0x0043a066                      ; 0043a003
        ;   XREF to: 0043a066 (CONDITIONAL_JUMP)  ; LAB_0043a066
    LEA EBP,[ESP + 0x80]                ; 0043a005
    MOV EDX,dword ptr [EBX]             ; 0043a00c | DAT_0060b014
        ;   Label: LAB_0043a00c
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043a00e | DAT_0060b01c
    MOV EDI,dword ptr [EBP]             ; 0043a011
    XOR EAX,EAX                         ; 0043a014
    CMP EDX,ECX                         ; 0043a016
    JL 0x0043a01f                       ; 0043a018
        ;   XREF to: 0043a01f (CONDITIONAL_JUMP)  ; LAB_0043a01f
    MOV EAX,0x1                         ; 0043a01a
    MOV ECX,dword ptr [EDI + 0x8]       ; 0043a01f | DAT_0060b01c
        ;   Label: LAB_0043a01f
    CMP ECX,dword ptr [EDI]             ; 0043a022 | DAT_0060b014
    JG 0x0043a028                       ; 0043a024
        ;   XREF to: 0043a028 (CONDITIONAL_JUMP)  ; LAB_0043a028
    OR AL,0x2                           ; 0043a026
    CMP EAX,0x3                         ; 0043a028
        ;   Label: LAB_0043a028
    JA 0x0043a047                       ; 0043a02b
        ;   XREF to: 0043a047 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439d4c]  ; 0043a02d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x104]     ; 0043a034
        ;   Label: caseD_0
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043a03b
    ADD EAX,ECX                         ; 0043a042
    INC ESI                             ; 0043a044
    MOV dword ptr [EAX],EBX             ; 0043a045
    MOV ECX,dword ptr [ESP + 0x10c]     ; 0043a047
        ;   Label: caseD_3
    MOV EBX,EDI                         ; 0043a04e
    ADD EBP,0x4                         ; 0043a050
    INC ECX                             ; 0043a053
    MOV EDI,dword ptr [ESP + 0x108]     ; 0043a054
    MOV dword ptr [ESP + 0x10c],ECX     ; 0043a05b
    CMP ECX,EDI                         ; 0043a062
    JL 0x0043a00c                       ; 0043a064
        ;   XREF to: 0043a00c (CONDITIONAL_JUMP)  ; LAB_0043a00c
    MOV dword ptr [0x007e3e88],ESI      ; 0043a066 | DAT_007e3e88
        ;   Label: LAB_0043a066
    CMP ESI,0x3                         ; 0043a06c
    JL 0x00439eb0                       ; 0043a06f
        ;   XREF to: 00439eb0 (CONDITIONAL_JUMP)  ; LAB_00439eb0
    MOV EDX,ESP                         ; 0043a075
    LEA EBP,[ESP + 0x80]                ; 0043a077
    XOR EBX,EBX                         ; 0043a07e
    MOV dword ptr [ESP + 0x110],ESI     ; 0043a080
    MOV dword ptr [ESP + 0x114],EBX     ; 0043a087
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 0043a08e
    TEST ESI,ESI                        ; 0043a092
    JLE 0x0043a103                      ; 0043a094
        ;   XREF to: 0043a103 (CONDITIONAL_JUMP)  ; LAB_0043a103
    MOV dword ptr [ESP + 0x12c],EDX     ; 0043a096
    MOV ESI,dword ptr [ESP + 0x12c]     ; 0043a09d
        ;   Label: LAB_0043a09d
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043a0a4
    MOV ECX,dword ptr [EDI]             ; 0043a0a7
    XOR EAX,EAX                         ; 0043a0a9
    NEG EDX                             ; 0043a0ab
    MOV ESI,dword ptr [ESI]             ; 0043a0ad
    CMP EDX,ECX                         ; 0043a0af
    JL 0x0043a0b8                       ; 0043a0b1
        ;   XREF to: 0043a0b8 (CONDITIONAL_JUMP)  ; LAB_0043a0b8
    MOV EAX,0x1                         ; 0043a0b3
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043a0b8
        ;   Label: LAB_0043a0b8
    MOV ECX,dword ptr [ESI]             ; 0043a0bb
    NEG EDX                             ; 0043a0bd
    CMP EDX,ECX                         ; 0043a0bf
    JL 0x0043a0c5                       ; 0043a0c1
        ;   XREF to: 0043a0c5 (CONDITIONAL_JUMP)  ; LAB_0043a0c5
    OR AL,0x2                           ; 0043a0c3
    CMP EAX,0x3                         ; 0043a0c5
        ;   Label: LAB_0043a0c5
    JA 0x0043a0d6                       ; 0043a0c8
        ;   XREF to: 0043a0d6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439d5c]  ; 0043a0ca | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043a0d1
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043a0d2
    MOV EAX,dword ptr [ESP + 0x114]     ; 0043a0d6
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x110]     ; 0043a0dd
    MOV EDI,ESI                         ; 0043a0e4
    MOV ESI,dword ptr [ESP + 0x12c]     ; 0043a0e6
    INC EAX                             ; 0043a0ed
    ADD ESI,0x4                         ; 0043a0ee
    MOV dword ptr [ESP + 0x114],EAX     ; 0043a0f1
    MOV dword ptr [ESP + 0x12c],ESI     ; 0043a0f8
    CMP EAX,EDX                         ; 0043a0ff
    JL 0x0043a09d                       ; 0043a101
        ;   XREF to: 0043a09d (CONDITIONAL_JUMP)  ; LAB_0043a09d
    MOV dword ptr [0x007e3e88],EBX      ; 0043a103 | DAT_007e3e88
        ;   Label: LAB_0043a103
    CMP EBX,0x3                         ; 0043a109
    JL 0x00439eb0                       ; 0043a10c
        ;   XREF to: 00439eb0 (CONDITIONAL_JUMP)  ; LAB_00439eb0
    LEA EDI,[ESP + 0x80]                ; 0043a112
    MOV EBP,ESP                         ; 0043a119
    XOR ESI,ESI                         ; 0043a11b
    MOV dword ptr [ESP + 0x118],EBX     ; 0043a11d
    MOV dword ptr [ESP + 0x11c],ESI     ; 0043a124
    MOV EDI,dword ptr [EDI + EBX*0x4 + -0x4] ; 0043a12b
    TEST EBX,EBX                        ; 0043a12f
    JLE 0x0043a1a7                      ; 0043a131
        ;   XREF to: 0043a1a7 (CONDITIONAL_JUMP)  ; LAB_0043a1a7
    LEA EAX,[ESP + 0x80]                ; 0043a137
    MOV dword ptr [ESP + 0x130],EAX     ; 0043a13e
    MOV EBX,dword ptr [ESP + 0x130]     ; 0043a145
        ;   Label: LAB_0043a145
    MOV EDX,dword ptr [EDI + 0x4]       ; 0043a14c | DAT_0060b018
    MOV ECX,dword ptr [EDI + 0x8]       ; 0043a14f | DAT_0060b01c
    XOR EAX,EAX                         ; 0043a152
    MOV EBX,dword ptr [EBX]             ; 0043a154
    CMP EDX,ECX                         ; 0043a156
    JL 0x0043a15f                       ; 0043a158
        ;   XREF to: 0043a15f (CONDITIONAL_JUMP)  ; LAB_0043a15f
    MOV EAX,0x1                         ; 0043a15a
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043a15f | DAT_0060b01c
        ;   Label: LAB_0043a15f
    CMP ECX,dword ptr [EBX + 0x4]       ; 0043a162 | DAT_0060b018
    JG 0x0043a169                       ; 0043a165
        ;   XREF to: 0043a169 (CONDITIONAL_JUMP)  ; LAB_0043a169
    OR AL,0x2                           ; 0043a167
    CMP EAX,0x3                         ; 0043a169
        ;   Label: LAB_0043a169
    JA 0x0043a17a                       ; 0043a16c
        ;   XREF to: 0043a17a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439d6c]  ; 0043a16e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC ESI                             ; 0043a175
        ;   Label: caseD_0
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 0043a176
    MOV ECX,dword ptr [ESP + 0x130]     ; 0043a17a
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x118]     ; 0043a181
    MOV EDI,EBX                         ; 0043a188
    MOV EBX,dword ptr [ESP + 0x11c]     ; 0043a18a
    ADD ECX,0x4                         ; 0043a191
    INC EBX                             ; 0043a194
    MOV dword ptr [ESP + 0x130],ECX     ; 0043a195
    MOV dword ptr [ESP + 0x11c],EBX     ; 0043a19c
    CMP EBX,EDX                         ; 0043a1a3
    JL 0x0043a145                       ; 0043a1a5
        ;   XREF to: 0043a145 (CONDITIONAL_JUMP)  ; LAB_0043a145
    MOV dword ptr [0x007e3e88],ESI      ; 0043a1a7 | DAT_007e3e88
        ;   Label: LAB_0043a1a7
    CMP ESI,0x3                         ; 0043a1ad
    JL 0x00439eb0                       ; 0043a1b0
        ;   XREF to: 00439eb0 (CONDITIONAL_JUMP)  ; LAB_00439eb0
    MOV EDX,ESP                         ; 0043a1b6
    LEA EBP,[ESP + 0x80]                ; 0043a1b8
    XOR EBX,EBX                         ; 0043a1bf
    MOV dword ptr [ESP + 0x120],ESI     ; 0043a1c1
    MOV dword ptr [ESP + 0x124],EBX     ; 0043a1c8
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 0043a1cf
    TEST ESI,ESI                        ; 0043a1d3
    JLE 0x0043a24a                      ; 0043a1d5
        ;   XREF to: 0043a24a (CONDITIONAL_JUMP)  ; LAB_0043a24a
    MOV dword ptr [ESP + 0x134],EDX     ; 0043a1db
    MOV ESI,dword ptr [ESP + 0x134]     ; 0043a1e2
        ;   Label: LAB_0043a1e2
    MOV EDX,dword ptr [EDI + 0x8]       ; 0043a1e9
    MOV ECX,dword ptr [EDI + 0x4]       ; 0043a1ec
    XOR EAX,EAX                         ; 0043a1ef
    NEG EDX                             ; 0043a1f1
    MOV ESI,dword ptr [ESI]             ; 0043a1f3
    CMP EDX,ECX                         ; 0043a1f5
    JL 0x0043a1fe                       ; 0043a1f7
        ;   XREF to: 0043a1fe (CONDITIONAL_JUMP)  ; LAB_0043a1fe
    MOV EAX,0x1                         ; 0043a1f9
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043a1fe
        ;   Label: LAB_0043a1fe
    MOV ECX,dword ptr [ESI + 0x4]       ; 0043a201
    NEG EDX                             ; 0043a204
    CMP EDX,ECX                         ; 0043a206
    JL 0x0043a20c                       ; 0043a208
        ;   XREF to: 0043a20c (CONDITIONAL_JUMP)  ; LAB_0043a20c
    OR AL,0x2                           ; 0043a20a
    CMP EAX,0x3                         ; 0043a20c
        ;   Label: LAB_0043a20c
    JA 0x0043a21d                       ; 0043a20f
        ;   XREF to: 0043a21d (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439d7c]  ; 0043a211 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043a218
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043a219
    MOV ECX,dword ptr [ESP + 0x134]     ; 0043a21d
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x120]     ; 0043a224
    MOV EDI,ESI                         ; 0043a22b
    MOV ESI,dword ptr [ESP + 0x124]     ; 0043a22d
    ADD ECX,0x4                         ; 0043a234
    INC ESI                             ; 0043a237
    MOV dword ptr [ESP + 0x134],ECX     ; 0043a238
    MOV dword ptr [ESP + 0x124],ESI     ; 0043a23f
    CMP ESI,EDX                         ; 0043a246
    JL 0x0043a1e2                       ; 0043a248
        ;   XREF to: 0043a1e2 (CONDITIONAL_JUMP)  ; LAB_0043a1e2
    MOV dword ptr [0x007e3e88],EBX      ; 0043a24a | DAT_007e3e88
        ;   Label: LAB_0043a24a
    CMP EBX,0x3                         ; 0043a250
    JL 0x00439eb0                       ; 0043a253
        ;   XREF to: 00439eb0 (CONDITIONAL_JUMP)  ; LAB_00439eb0
    XOR EDX,EDX                         ; 0043a259
    TEST EBX,EBX                        ; 0043a25b
    JLE 0x0043a2b0                      ; 0043a25d
        ;   XREF to: 0043a2b0 (CONDITIONAL_JUMP)  ; LAB_0043a2b0
    MOV EBX,0x7e3e8c                    ; 0043a25f | DAT_007e3e8c
    XOR EBP,EBP                         ; 0043a264
    MOV ECX,0x30                        ; 0043a266
        ;   Label: LAB_0043a266
    MOV EDI,EBX                         ; 0043a26b
    MOV ESI,dword ptr [ESP + EBP*0x1 + 0x80] ; 0043a26d
    TEST EDI,0x7                        ; 0043a274
    JZ 0x0043a282                       ; 0043a27a
        ;   XREF to: 0043a282 (CONDITIONAL_JUMP)  ; LAB_0043a282
    MOVSD ES:EDI,ESI                    ; 0043a27c | DAT_0060b014 | DAT_007e3e8c | DAT_007e3ebc
    SUB ECX,0x4                         ; 0043a27d
    JLE 0x0043a29f                      ; 0043a280
        ;   XREF to: 0043a29f (CONDITIONAL_JUMP)  ; LAB_0043a29f
    SUB ECX,0x8                         ; 0043a282
        ;   Label: LAB_0043a282
    JL 0x0043a293                       ; 0043a285
        ;   XREF to: 0043a293 (CONDITIONAL_JUMP)  ; LAB_0043a293
    FILD qword ptr [ESI]                ; 0043a287 | DAT_0060b018 | DAT_0060b020
    ADD ESI,0x8                         ; 0043a289
    FISTP qword ptr [EDI]               ; 0043a28c | DAT_007e3e90 | DAT_007e3e98 | DAT_007e3ec0
    ADD EDI,0x8                         ; 0043a28e
    JMP 0x0043a282                      ; 0043a291
        ;   XREF to: 0043a282 (UNCONDITIONAL_JUMP)  ; LAB_0043a282
    ADD ECX,0x8                         ; 0043a293
        ;   Label: LAB_0043a293
    JLE 0x0043a29f                      ; 0043a296
        ;   XREF to: 0043a29f (CONDITIONAL_JUMP)  ; LAB_0043a29f
    MOVSD ES:EDI,ESI                    ; 0043a298 | DAT_0060b020 | DAT_007e3e98
    SUB ECX,0x4                         ; 0043a299
    JLE 0x0043a29f                      ; 0043a29c
        ;   XREF to: 0043a29f (CONDITIONAL_JUMP)  ; LAB_0043a29f
    MOVSD ES:EDI,ESI                    ; 0043a29e | DAT_0060b024 | DAT_007e3e9c
    ADD EBP,0x4                         ; 0043a29f
        ;   Label: LAB_0043a29f
    INC EDX                             ; 0043a2a2
    MOV ECX,dword ptr [0x007e3e88]      ; 0043a2a3 | DAT_007e3e88
    ADD EBX,0x30                        ; 0043a2a9
    CMP EDX,ECX                         ; 0043a2ac
    JL 0x0043a266                       ; 0043a2ae
        ;   XREF to: 0043a266 (CONDITIONAL_JUMP)  ; LAB_0043a266
    MOV EBX,dword ptr [0x005f12f4]      ; 0043a2b0 | DAT_005f12f4
        ;   Label: LAB_0043a2b0
    XOR EBP,EBP                         ; 0043a2b6
    TEST EBX,EBX                        ; 0043a2b8
    JNZ 0x0043a60a                      ; 0043a2ba
        ;   XREF to: 0043a60a (CONDITIONAL_JUMP)  ; LAB_0043a60a
    MOV EBP,dword ptr [0x007e3e88]      ; 0043a2c0 | DAT_007e3e88
        ;   Label: LAB_0043a2c0
    CMP EBP,0x3                         ; 0043a2c6
    JL 0x00439eb0                       ; 0043a2c9
        ;   XREF to: 00439eb0 (CONDITIONAL_JUMP)  ; LAB_00439eb0
    XOR EDX,EDX                         ; 0043a2cf
    TEST EBP,EBP                        ; 0043a2d1
    JLE 0x0043a2ff                      ; 0043a2d3
        ;   XREF to: 0043a2ff (CONDITIONAL_JUMP)  ; LAB_0043a2ff
    MOV EAX,0x7e3e8c                    ; 0043a2d5 | DAT_007e3e8c
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043a2da | DAT_007e3e94 | DAT_007e3ec4
        ;   Label: LAB_0043a2da
    TEST EBX,EBX                        ; 0043a2dd
    JNZ 0x0043a7fa                      ; 0043a2df
        ;   XREF to: 0043a7fa (CONDITIONAL_JUMP)  ; LAB_0043a7fa
    MOV dword ptr [EAX + 0x8],0x1       ; 0043a2e5 | DAT_007e3e94 | DAT_007e3ec4
    MOV dword ptr [EAX],EBX             ; 0043a2ec | DAT_007e3e8c | DAT_007e3ebc
    MOV dword ptr [EAX + 0x4],EBX       ; 0043a2ee | DAT_007e3e90 | DAT_007e3ec0
        ;   Label: LAB_0043a2ee
    MOV ECX,dword ptr [0x007e3e88]      ; 0043a2f1 | DAT_007e3e88
        ;   Label: LAB_0043a2f1
    INC EDX                             ; 0043a2f7
    ADD EAX,0x30                        ; 0043a2f8
    CMP EDX,ECX                         ; 0043a2fb
    JL 0x0043a2da                       ; 0043a2fd
        ;   XREF to: 0043a2da (CONDITIONAL_JUMP)  ; LAB_0043a2da
    XOR EAX,EAX                         ; 0043a2ff
        ;   Label: LAB_0043a2ff
    ADD ESP,0x140                       ; 0043a301
    POP EBP                             ; 0043a307
    POP EDI                             ; 0043a308
    POP ESI                             ; 0043a309
    POP EBX                             ; 0043a30a
    RET                                 ; 0043a30b
    CMP dword ptr [0x007e4d50],0xc      ; 0043a30c | DAT_007e4d50
        ;   Label: caseD_1
    JL 0x0043a337                       ; 0043a313
        ;   XREF to: 0043a337 (CONDITIONAL_JUMP)  ; LAB_0043a337
    MOV EAX,0x5b8f4a                    ; 0043a315 | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 0043a31a
    PUSH 0x5b8f5e                       ; 0043a31f | = "Ran out of clipped verts!"
    MOV [0x01d71de0],EAX                ; 0043a324 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0043a329 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0043a32f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0043a334
    MOV EAX,[0x007e4d50]                ; 0043a337 | DAT_007e4d50
        ;   Label: LAB_0043a337
    IMUL EDX,EAX,0x30                   ; 0043a33c
    MOV ECX,dword ptr [ESP + 0x104]     ; 0043a33f
    ADD EDX,0x7e4b10                    ; 0043a346 | DAT_007e4b10
    INC EAX                             ; 0043a34c
    PUSH EDX                            ; 0043a34d | DAT_007e4b10
    MOV [0x007e4d50],EAX                ; 0043a34e | DAT_007e4d50
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043a353
    PUSH EBX                            ; 0043a35a
    ADD EAX,ECX                         ; 0043a35b
    PUSH EDI                            ; 0043a35d
    INC ESI                             ; 0043a35e
    MOV dword ptr [EAX],EDX             ; 0043a35f | DAT_007e4b10
    CALL FUN_004390c0                   ; 0043a361
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004390c0()
    ADD ESP,0xc                         ; 0043a366
    JMP 0x0043a047                      ; 0043a369
        ;   XREF to: 0043a047 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDX,dword ptr [ESP + 0x104]     ; 0043a36e
        ;   Label: caseD_2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043a375
    ADD EAX,EDX                         ; 0043a37c
    MOV ECX,dword ptr [0x007e4d50]      ; 0043a37e | DAT_007e4d50
    INC ESI                             ; 0043a384
    MOV dword ptr [EAX],EBX             ; 0043a385
    CMP ECX,0xc                         ; 0043a387
    JL 0x0043a3ae                       ; 0043a38a
        ;   XREF to: 0043a3ae (CONDITIONAL_JUMP)  ; LAB_0043a3ae
    MOV EAX,0x5b8f4a                    ; 0043a38c | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 0043a391
    PUSH 0x5b8f5e                       ; 0043a396 | = "Ran out of clipped verts!"
    MOV [0x01d71de0],EAX                ; 0043a39b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0043a3a0 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0043a3a6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0043a3ab
    MOV EAX,[0x007e4d50]                ; 0043a3ae | DAT_007e4d50
        ;   Label: LAB_0043a3ae
    IMUL EDX,EAX,0x30                   ; 0043a3b3
    MOV ECX,dword ptr [ESP + 0x104]     ; 0043a3b6
    ADD EDX,0x7e4b10                    ; 0043a3bd | DAT_007e4b10
    INC EAX                             ; 0043a3c3
    PUSH EDX                            ; 0043a3c4 | DAT_007e4b10
    MOV [0x007e4d50],EAX                ; 0043a3c5 | DAT_007e4d50
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043a3ca
    PUSH EDI                            ; 0043a3d1
    ADD EAX,ECX                         ; 0043a3d2
    PUSH EBX                            ; 0043a3d4
    INC ESI                             ; 0043a3d5
    MOV dword ptr [EAX],EDX             ; 0043a3d6 | DAT_007e4b10
    CALL FUN_004390c0                   ; 0043a3d8
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004390c0()
    ADD ESP,0xc                         ; 0043a3dd
    JMP 0x0043a047                      ; 0043a3e0
        ;   XREF to: 0043a047 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007e4d50],0xc      ; 0043a3e5 | DAT_007e4d50
        ;   Label: caseD_1
    JL 0x0043a410                       ; 0043a3ec
        ;   XREF to: 0043a410 (CONDITIONAL_JUMP)  ; LAB_0043a410
    MOV ECX,0x5b8f4a                    ; 0043a3ee | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043a3f3
    PUSH 0x5b8f5e                       ; 0043a3f8 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],ECX      ; 0043a3fd | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0043a403 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0043a408
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0043a40d
    MOV EAX,[0x007e4d50]                ; 0043a410 | DAT_007e4d50
        ;   Label: LAB_0043a410
    IMUL EDX,EAX,0x30                   ; 0043a415
    ADD EDX,0x7e4b10                    ; 0043a418 | DAT_007e4b10
    PUSH EDX                            ; 0043a41e | DAT_007e4b10
    PUSH EDI                            ; 0043a41f
    INC EBX                             ; 0043a420
    INC EAX                             ; 0043a421
    PUSH ESI                            ; 0043a422
    MOV [0x007e4d50],EAX                ; 0043a423 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043a428 | DAT_007e4b10
    CALL FUN_004391c0                   ; 0043a42c
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004391c0()
    ADD ESP,0xc                         ; 0043a431
    JMP 0x0043a0d6                      ; 0043a434
        ;   XREF to: 0043a0d6 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 0043a439
        ;   Label: caseD_2
    MOV EAX,[0x007e4d50]                ; 0043a43a | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043a43f
    CMP EAX,0xc                         ; 0043a443
    JL 0x0043a46b                       ; 0043a446
        ;   XREF to: 0043a46b (CONDITIONAL_JUMP)  ; LAB_0043a46b
    MOV EDX,0x5b8f4a                    ; 0043a448 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043a44d
    PUSH 0x5b8f5e                       ; 0043a452 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],EDX      ; 0043a457 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0043a45d | DAT_01d71de4
    CALL FUN_004e4330                   ; 0043a463
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0043a468
    MOV EAX,[0x007e4d50]                ; 0043a46b | DAT_007e4d50
        ;   Label: LAB_0043a46b
    IMUL EDX,EAX,0x30                   ; 0043a470
    ADD EDX,0x7e4b10                    ; 0043a473 | DAT_007e4b10
    PUSH EDX                            ; 0043a479 | DAT_007e4b10
    PUSH ESI                            ; 0043a47a
    INC EBX                             ; 0043a47b
    INC EAX                             ; 0043a47c
    PUSH EDI                            ; 0043a47d
    MOV [0x007e4d50],EAX                ; 0043a47e | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043a483 | DAT_007e4b10
    CALL FUN_004391c0                   ; 0043a487
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004391c0()
    ADD ESP,0xc                         ; 0043a48c
    JMP 0x0043a0d6                      ; 0043a48f
        ;   XREF to: 0043a0d6 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007e4d50],0xc      ; 0043a494 | DAT_007e4d50
        ;   Label: caseD_1
    JL 0x0043a4bf                       ; 0043a49b
        ;   XREF to: 0043a4bf (CONDITIONAL_JUMP)  ; LAB_0043a4bf
    MOV ECX,0x5b8f4a                    ; 0043a49d | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043a4a2
    PUSH 0x5b8f5e                       ; 0043a4a7 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],ECX      ; 0043a4ac | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0043a4b2 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0043a4b7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0043a4bc
    MOV EAX,[0x007e4d50]                ; 0043a4bf | DAT_007e4d50
        ;   Label: LAB_0043a4bf
    IMUL EDX,EAX,0x30                   ; 0043a4c4
    ADD EDX,0x7e4b10                    ; 0043a4c7 | DAT_007e4b10
    PUSH EDX                            ; 0043a4cd | DAT_007e4b10
    PUSH EDI                            ; 0043a4ce
    INC ESI                             ; 0043a4cf
    INC EAX                             ; 0043a4d0
    PUSH EBX                            ; 0043a4d1
    MOV [0x007e4d50],EAX                ; 0043a4d2 | DAT_007e4d50
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 0043a4d7 | DAT_007e4b10
    CALL FUN_004392c0                   ; 0043a4db
        ;   XREF to: 004392c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004392c0()
    ADD ESP,0xc                         ; 0043a4e0
    JMP 0x0043a17a                      ; 0043a4e3
        ;   XREF to: 0043a17a (UNCONDITIONAL_JUMP)  ; caseD_3
    INC ESI                             ; 0043a4e8
        ;   Label: caseD_2
    MOV EAX,[0x007e4d50]                ; 0043a4e9 | DAT_007e4d50
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 0043a4ee
    CMP EAX,0xc                         ; 0043a4f2
    JL 0x0043a51a                       ; 0043a4f5
        ;   XREF to: 0043a51a (CONDITIONAL_JUMP)  ; LAB_0043a51a
    MOV EDX,0x5b8f4a                    ; 0043a4f7 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043a4fc
    PUSH 0x5b8f5e                       ; 0043a501 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],EDX      ; 0043a506 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0043a50c | DAT_01d71de4
    CALL FUN_004e4330                   ; 0043a512
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0043a517
    MOV EAX,[0x007e4d50]                ; 0043a51a | DAT_007e4d50
        ;   Label: LAB_0043a51a
    IMUL EDX,EAX,0x30                   ; 0043a51f
    ADD EDX,0x7e4b10                    ; 0043a522 | DAT_007e4b10
    PUSH EDX                            ; 0043a528 | DAT_007e4b10
    PUSH EBX                            ; 0043a529
    INC ESI                             ; 0043a52a
    INC EAX                             ; 0043a52b
    PUSH EDI                            ; 0043a52c
    MOV [0x007e4d50],EAX                ; 0043a52d | DAT_007e4d50
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 0043a532 | DAT_007e4b10
    CALL FUN_004392c0                   ; 0043a536
        ;   XREF to: 004392c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004392c0()
    ADD ESP,0xc                         ; 0043a53b
    JMP 0x0043a17a                      ; 0043a53e
        ;   XREF to: 0043a17a (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x007e4d50],0xc      ; 0043a543 | DAT_007e4d50
        ;   Label: caseD_1
    JL 0x0043a56e                       ; 0043a54a
        ;   XREF to: 0043a56e (CONDITIONAL_JUMP)  ; LAB_0043a56e
    MOV ECX,0x5b8f4a                    ; 0043a54c | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043a551
    PUSH 0x5b8f5e                       ; 0043a556 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],ECX      ; 0043a55b | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0043a561 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0043a566
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0043a56b
    MOV ECX,dword ptr [0x007e4d50]      ; 0043a56e | DAT_007e4d50
        ;   Label: LAB_0043a56e
    LEA EAX,[ECX*0x4 + 0x0]             ; 0043a574
    SUB EAX,ECX                         ; 0043a57b
    MOV EDX,0x7e4b10                    ; 0043a57d | DAT_007e4b10
    SHL EAX,0x4                         ; 0043a582
    ADD EDX,EAX                         ; 0043a585
    PUSH EDX                            ; 0043a587 | DAT_007e4b10
    PUSH EDI                            ; 0043a588
    INC EBX                             ; 0043a589
    INC ECX                             ; 0043a58a
    PUSH ESI                            ; 0043a58b
    MOV dword ptr [0x007e4d50],ECX      ; 0043a58c | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043a592 | DAT_007e4b10
    CALL FUN_004393c0                   ; 0043a596
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004393c0()
    ADD ESP,0xc                         ; 0043a59b
    JMP 0x0043a21d                      ; 0043a59e
        ;   XREF to: 0043a21d (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 0043a5a3
        ;   Label: caseD_2
    MOV EAX,[0x007e4d50]                ; 0043a5a4 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043a5a9
    CMP EAX,0xc                         ; 0043a5ad
    JL 0x0043a5d5                       ; 0043a5b0
        ;   XREF to: 0043a5d5 (CONDITIONAL_JUMP)  ; LAB_0043a5d5
    MOV EDX,0x5b8f4a                    ; 0043a5b2 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043a5b7
    PUSH 0x5b8f5e                       ; 0043a5bc | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],EDX      ; 0043a5c1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0043a5c7 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0043a5cd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0043a5d2
    MOV EDX,dword ptr [0x007e4d50]      ; 0043a5d5 | DAT_007e4d50
        ;   Label: LAB_0043a5d5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043a5db
    SUB EAX,EDX                         ; 0043a5e2
    INC EDX                             ; 0043a5e4
    SHL EAX,0x4                         ; 0043a5e5
    MOV dword ptr [0x007e4d50],EDX      ; 0043a5e8 | DAT_007e4d50
    MOV EDX,0x7e4b10                    ; 0043a5ee | DAT_007e4b10
    ADD EDX,EAX                         ; 0043a5f3
    PUSH EDX                            ; 0043a5f5 | DAT_007e4b10
    PUSH ESI                            ; 0043a5f6
    INC EBX                             ; 0043a5f7
    PUSH EDI                            ; 0043a5f8
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043a5f9 | DAT_007e4b10
    CALL FUN_004393c0                   ; 0043a5fd
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004393c0()
    ADD ESP,0xc                         ; 0043a602
    JMP 0x0043a21d                      ; 0043a605
        ;   XREF to: 0043a21d (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,dword ptr [0x007e3e88]      ; 0043a60a | DAT_007e3e88
        ;   Label: LAB_0043a60a
    TEST ESI,ESI                        ; 0043a610
    JLE 0x0043a635                      ; 0043a612
        ;   XREF to: 0043a635 (CONDITIONAL_JUMP)  ; LAB_0043a635
    LEA ECX,[ESI*0x4 + 0x0]             ; 0043a614
    SUB ECX,ESI                         ; 0043a61b
    XOR EAX,EAX                         ; 0043a61d
    SHL ECX,0x4                         ; 0043a61f
    MOV EDX,dword ptr [EAX + 0x7e3e94]  ; 0043a622 | DAT_007e3e94 | DAT_007e3ec4
        ;   Label: LAB_0043a622
    CMP EBP,EDX                         ; 0043a628
    JGE 0x0043a62e                      ; 0043a62a
        ;   XREF to: 0043a62e (CONDITIONAL_JUMP)  ; LAB_0043a62e
    MOV EBP,EDX                         ; 0043a62c
    ADD EAX,0x30                        ; 0043a62e
        ;   Label: LAB_0043a62e
    CMP EAX,ECX                         ; 0043a631
    JL 0x0043a622                       ; 0043a633
        ;   XREF to: 0043a622 (CONDITIONAL_JUMP)  ; LAB_0043a622
    CMP EBP,dword ptr [0x005f12f4]      ; 0043a635 | DAT_005f12f4
        ;   Label: LAB_0043a635
    JL 0x0043a2c0                       ; 0043a63b
        ;   XREF to: 0043a2c0 (CONDITIONAL_JUMP)  ; LAB_0043a2c0
    MOV EAX,[0x007e3e88]                ; 0043a641 | DAT_007e3e88
    MOV [0x007e450c],EAX                ; 0043a646 | DAT_007e450c
    LEA ECX,[EAX*0x4 + 0x0]             ; 0043a64b
    MOV ESI,0x7e3e8c                    ; 0043a652 | DAT_007e3e8c
    SUB ECX,EAX                         ; 0043a657
    MOV EDI,0x7e4510                    ; 0043a659 | DAT_007e4510
    SHL ECX,0x4                         ; 0043a65e
    XOR EBP,EBP                         ; 0043a661
    TEST EDI,0x7                        ; 0043a663
    JZ 0x0043a671                       ; 0043a669
        ;   XREF to: 0043a671 (CONDITIONAL_JUMP)  ; LAB_0043a671
    MOVSD ES:EDI,ESI                    ; 0043a66b | DAT_007e3e8c | DAT_007e4510
    SUB ECX,0x4                         ; 0043a66c
    JLE 0x0043a68e                      ; 0043a66f
        ;   XREF to: 0043a68e (CONDITIONAL_JUMP)  ; LAB_0043a68e
    SUB ECX,0x8                         ; 0043a671
        ;   Label: LAB_0043a671
    JL 0x0043a682                       ; 0043a674
        ;   XREF to: 0043a682 (CONDITIONAL_JUMP)  ; LAB_0043a682
    FILD qword ptr [ESI]                ; 0043a676 | DAT_007e3e8c
    ADD ESI,0x8                         ; 0043a678
    FISTP qword ptr [EDI]               ; 0043a67b | DAT_007e4510
    ADD EDI,0x8                         ; 0043a67d
    JMP 0x0043a671                      ; 0043a680
        ;   XREF to: 0043a671 (UNCONDITIONAL_JUMP)  ; LAB_0043a671
    ADD ECX,0x8                         ; 0043a682
        ;   Label: LAB_0043a682
    JLE 0x0043a68e                      ; 0043a685
        ;   XREF to: 0043a68e (CONDITIONAL_JUMP)  ; LAB_0043a68e
    MOVSD ES:EDI,ESI                    ; 0043a687 | DAT_007e3e8c | DAT_007e4510
    SUB ECX,0x4                         ; 0043a688
    JLE 0x0043a68e                      ; 0043a68b
        ;   XREF to: 0043a68e (CONDITIONAL_JUMP)  ; LAB_0043a68e
    MOVSD ES:EDI,ESI                    ; 0043a68d | DAT_007e3e90 | DAT_007e4514
    MOV EAX,[0x007e450c]                ; 0043a68e | DAT_007e450c
        ;   Label: LAB_0043a68e
    MOV dword ptr [0x007e3e88],EBP      ; 0043a693 | DAT_007e3e88
    TEST EAX,EAX                        ; 0043a699
    JLE 0x0043a2c0                      ; 0043a69b
        ;   XREF to: 0043a2c0 (CONDITIONAL_JUMP)  ; LAB_0043a2c0
    MOV dword ptr [ESP + 0x138],0x7e4510 ; 0043a6a1 | DAT_007e4510
    MOV EDI,dword ptr [0x007e450c]      ; 0043a6ac | DAT_007e450c
        ;   Label: LAB_0043a6ac
    LEA EAX,[EBP + 0x1]                 ; 0043a6b2
    CMP EAX,EDI                         ; 0043a6b5
    JNZ 0x0043a6bb                      ; 0043a6b7
        ;   XREF to: 0043a6bb (CONDITIONAL_JUMP)  ; LAB_0043a6bb
    XOR EAX,EDI                         ; 0043a6b9
    IMUL EAX,EAX,0x30                   ; 0043a6bb
        ;   Label: LAB_0043a6bb
    MOV EBX,dword ptr [ESP + 0x138]     ; 0043a6be
    MOV EDX,0x7e4510                    ; 0043a6c5 | DAT_007e4510
    MOV ESI,dword ptr [0x005f12f4]      ; 0043a6ca | DAT_005f12f4
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043a6d0 | DAT_007e4518 | DAT_007e4548
    ADD EDX,EAX                         ; 0043a6d3
    XOR EAX,EAX                         ; 0043a6d5
    CMP ECX,ESI                         ; 0043a6d7
    JL 0x0043a6e0                       ; 0043a6d9
        ;   XREF to: 0043a6e0 (CONDITIONAL_JUMP)  ; LAB_0043a6e0
    MOV EAX,0x1                         ; 0043a6db
    MOV EDI,dword ptr [0x005f12f4]      ; 0043a6e0 | DAT_005f12f4
        ;   Label: LAB_0043a6e0
    CMP EDI,dword ptr [EDX + 0x8]       ; 0043a6e6 | DAT_007e4548 | DAT_007e4578
    JG 0x0043a6ed                       ; 0043a6e9
        ;   XREF to: 0043a6ed (CONDITIONAL_JUMP)  ; LAB_0043a6ed
    OR AL,0x2                           ; 0043a6eb
    CMP EAX,0x3                         ; 0043a6ed
        ;   Label: LAB_0043a6ed
    JA 0x0043a73e                       ; 0043a6f0
        ;   XREF to: 0043a73e (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x439d8c]  ; 0043a6f2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 0043a6f9 | DAT_007e3e88
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043a700
    ADD EDI,0x7e3e8c                    ; 0043a705 | DAT_007e3e8c
    MOV ESI,EBX                         ; 0043a70b
    TEST EDI,0x7                        ; 0043a70d
    JZ 0x0043a71b                       ; 0043a713
        ;   XREF to: 0043a71b (CONDITIONAL_JUMP)  ; LAB_0043a71b
    MOVSD ES:EDI,ESI                    ; 0043a715 | DAT_007e4540 | DAT_007e3e8c
    SUB ECX,0x4                         ; 0043a716
    JLE 0x0043a738                      ; 0043a719
        ;   XREF to: 0043a738 (CONDITIONAL_JUMP)  ; LAB_0043a738
    SUB ECX,0x8                         ; 0043a71b
        ;   Label: LAB_0043a71b
    JL 0x0043a72c                       ; 0043a71e
        ;   XREF to: 0043a72c (CONDITIONAL_JUMP)  ; LAB_0043a72c
    FILD qword ptr [ESI]                ; 0043a720 | DAT_007e4540+4 | DAT_007e454c
    ADD ESI,0x8                         ; 0043a722
    FISTP qword ptr [EDI]               ; 0043a725 | DAT_007e3e90 | DAT_007e3e98 | DAT_007e3e8c
    ADD EDI,0x8                         ; 0043a727
    JMP 0x0043a71b                      ; 0043a72a
        ;   XREF to: 0043a71b (UNCONDITIONAL_JUMP)  ; LAB_0043a71b
    ADD ECX,0x8                         ; 0043a72c
        ;   Label: LAB_0043a72c
    JLE 0x0043a738                      ; 0043a72f
        ;   XREF to: 0043a738 (CONDITIONAL_JUMP)  ; LAB_0043a738
    MOVSD ES:EDI,ESI                    ; 0043a731 | DAT_007e454c | DAT_007e3e98
    SUB ECX,0x4                         ; 0043a732
    JLE 0x0043a738                      ; 0043a735
        ;   XREF to: 0043a738 (CONDITIONAL_JUMP)  ; LAB_0043a738
    MOVSD ES:EDI,ESI                    ; 0043a737 | DAT_007e4550 | DAT_007e3e9c
    INC dword ptr [0x007e3e88]          ; 0043a738 | DAT_007e3e88
        ;   Label: LAB_0043a738
    MOV ECX,dword ptr [ESP + 0x138]     ; 0043a73e
        ;   Label: caseD_3
    MOV EBX,dword ptr [0x007e450c]      ; 0043a745 | DAT_007e450c
    ADD ECX,0x30                        ; 0043a74b
    INC EBP                             ; 0043a74e
    MOV dword ptr [ESP + 0x138],ECX     ; 0043a74f | DAT_007e4540 | DAT_007e4570
    CMP EBP,EBX                         ; 0043a756
    JGE 0x0043a2c0                      ; 0043a758
        ;   XREF to: 0043a2c0 (CONDITIONAL_JUMP)  ; LAB_0043a2c0
    JMP 0x0043a6ac                      ; 0043a75e
        ;   XREF to: 0043a6ac (UNCONDITIONAL_JUMP)  ; LAB_0043a6ac
    IMUL EAX,dword ptr [0x007e3e88],0x30 ; 0043a763 | DAT_007e3e88
        ;   Label: caseD_1
    ADD EAX,0x7e3e8c                    ; 0043a76a | DAT_007e3e8c
    PUSH EAX                            ; 0043a76f | DAT_007e3e8c
    PUSH EBX                            ; 0043a770 | DAT_007e4540
    PUSH EDX                            ; 0043a771 | DAT_007e4570
    CALL FUN_004394c0                   ; 0043a772
        ;   XREF to: 004394c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004394c0()
    MOV EBX,dword ptr [0x007e3e88]      ; 0043a777 | DAT_007e3e88
    INC EBX                             ; 0043a77d
    ADD ESP,0xc                         ; 0043a77e
    MOV dword ptr [0x007e3e88],EBX      ; 0043a781 | DAT_007e3e88
    JMP 0x0043a73e                      ; 0043a787
        ;   XREF to: 0043a73e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 0043a789 | DAT_007e3e88
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043a790
    MOV ESI,EBX                         ; 0043a795
    ADD EDI,0x7e3e8c                    ; 0043a797 | DAT_007e3e8c
    TEST EDI,0x7                        ; 0043a79d
    JZ 0x0043a7ab                       ; 0043a7a3
        ;   XREF to: 0043a7ab (CONDITIONAL_JUMP)  ; LAB_0043a7ab
    MOVSD ES:EDI,ESI                    ; 0043a7a5 | DAT_007e4540 | DAT_007e3e8c
    SUB ECX,0x4                         ; 0043a7a6
    JLE 0x0043a7c8                      ; 0043a7a9
        ;   XREF to: 0043a7c8 (CONDITIONAL_JUMP)  ; LAB_0043a7c8
    SUB ECX,0x8                         ; 0043a7ab
        ;   Label: LAB_0043a7ab
    JL 0x0043a7bc                       ; 0043a7ae
        ;   XREF to: 0043a7bc (CONDITIONAL_JUMP)  ; LAB_0043a7bc
    FILD qword ptr [ESI]                ; 0043a7b0 | DAT_007e4540+4 | DAT_007e454c
    ADD ESI,0x8                         ; 0043a7b2
    FISTP qword ptr [EDI]               ; 0043a7b5 | DAT_007e3e90 | DAT_007e3e98 | DAT_007e3e8c
    ADD EDI,0x8                         ; 0043a7b7
    JMP 0x0043a7ab                      ; 0043a7ba
        ;   XREF to: 0043a7ab (UNCONDITIONAL_JUMP)  ; LAB_0043a7ab
    ADD ECX,0x8                         ; 0043a7bc
        ;   Label: LAB_0043a7bc
    JLE 0x0043a7c8                      ; 0043a7bf
        ;   XREF to: 0043a7c8 (CONDITIONAL_JUMP)  ; LAB_0043a7c8
    MOVSD ES:EDI,ESI                    ; 0043a7c1 | DAT_007e454c | DAT_007e3e98
    SUB ECX,0x4                         ; 0043a7c2
    JLE 0x0043a7c8                      ; 0043a7c5
        ;   XREF to: 0043a7c8 (CONDITIONAL_JUMP)  ; LAB_0043a7c8
    MOVSD ES:EDI,ESI                    ; 0043a7c7 | DAT_007e4550 | DAT_007e3e9c
    MOV ECX,dword ptr [0x007e3e88]      ; 0043a7c8 | DAT_007e3e88
        ;   Label: LAB_0043a7c8
    INC ECX                             ; 0043a7ce
    MOV dword ptr [0x007e3e88],ECX      ; 0043a7cf | DAT_007e3e88
    IMUL EAX,ECX,0x30                   ; 0043a7d5
    ADD EAX,0x7e3e8c                    ; 0043a7d8 | DAT_007e3e8c
    PUSH EAX                            ; 0043a7dd | DAT_007e3ebc
    PUSH EDX                            ; 0043a7de | DAT_007e4570
    PUSH EBX                            ; 0043a7df | DAT_007e4540
    CALL FUN_004394c0                   ; 0043a7e0
        ;   XREF to: 004394c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004394c0()
    MOV EDI,dword ptr [0x007e3e88]      ; 0043a7e5 | DAT_007e3e88
    INC EDI                             ; 0043a7eb
    ADD ESP,0xc                         ; 0043a7ec
    MOV dword ptr [0x007e3e88],EDI      ; 0043a7ef | DAT_007e3e88
    JMP 0x0043a73e                      ; 0043a7f5
        ;   XREF to: 0043a73e (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,dword ptr [EAX]             ; 0043a7fa | DAT_007e3ebc
        ;   Label: LAB_0043a7fa
    CMP ECX,EBX                         ; 0043a7fc
    JLE 0x0043a807                      ; 0043a7fe
        ;   XREF to: 0043a807 (CONDITIONAL_JUMP)  ; LAB_0043a807
    MOV dword ptr [EAX],EBX             ; 0043a800 | DAT_007e3ebc
    JMP 0x0043a2f1                      ; 0043a802
        ;   XREF to: 0043a2f1 (UNCONDITIONAL_JUMP)  ; LAB_0043a2f1
    NEG EBX                             ; 0043a807
        ;   Label: LAB_0043a807
    CMP EBX,ECX                         ; 0043a809
    JLE 0x0043a814                      ; 0043a80b
        ;   XREF to: 0043a814 (CONDITIONAL_JUMP)  ; LAB_0043a814
    MOV dword ptr [EAX],EBX             ; 0043a80d | DAT_007e3ebc
    JMP 0x0043a2f1                      ; 0043a80f
        ;   XREF to: 0043a2f1 (UNCONDITIONAL_JUMP)  ; LAB_0043a2f1
    MOV EBP,dword ptr [EAX + 0x8]       ; 0043a814 | DAT_007e3ec4
        ;   Label: LAB_0043a814
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043a817 | DAT_007e3ec0
    CMP ECX,EBP                         ; 0043a81a
    JLE 0x0043a826                      ; 0043a81c
        ;   XREF to: 0043a826 (CONDITIONAL_JUMP)  ; LAB_0043a826
    MOV dword ptr [EAX + 0x4],EBP       ; 0043a81e | DAT_007e3ec0
    JMP 0x0043a2f1                      ; 0043a821
        ;   XREF to: 0043a2f1 (UNCONDITIONAL_JUMP)  ; LAB_0043a2f1
    CMP EBX,ECX                         ; 0043a826
        ;   Label: LAB_0043a826
    JLE 0x0043a2f1                      ; 0043a828
        ;   XREF to: 0043a2f1 (CONDITIONAL_JUMP)  ; LAB_0043a2f1
    JMP 0x0043a2ee                      ; 0043a82e
        ;   XREF to: 0043a2ee (UNCONDITIONAL_JUMP)  ; LAB_0043a2ee

