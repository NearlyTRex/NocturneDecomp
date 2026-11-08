; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b3d70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f9ecf
;   undefined4 DAT_02c9cf0c
;
; Called Functions:
;   FUN_005b3c90
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3d70
        ;   Label: FUN_005b3d70
    PUSH ESI                            ; 005b3d71
    PUSH EDI                            ; 005b3d72
    PUSH EBP                            ; 005b3d73
    MOV EBP,ESP                         ; 005b3d74
    SUB ESP,0x48                        ; 005b3d76
    AND ESP,0xfffffff8                  ; 005b3d79
    IMUL EBX,dword ptr [EBP + 0x14],0xac ; 005b3d7c
    ADD EBX,0x2c9cf14                   ; 005b3d83
    MOV ECX,dword ptr [EBX]             ; 005b3d89
    TEST ECX,ECX                        ; 005b3d8b
    JZ 0x005b3d94                       ; 005b3d8d
        ;   XREF to: 005b3d94 (CONDITIONAL_JUMP)  ; LAB_005b3d94
    CMP ECX,0x4                         ; 005b3d8f
    JNZ 0x005b3da1                      ; 005b3d92
        ;   XREF to: 005b3da1 (CONDITIONAL_JUMP)  ; LAB_005b3da1
    MOV ESP,EBP                         ; 005b3d94
        ;   Label: LAB_005b3d94
    POP EBP                             ; 005b3d96
    POP EDI                             ; 005b3d97
    POP ESI                             ; 005b3d98
    POP EBX                             ; 005b3d99
    LEA EAX,[EAX]                       ; 005b3d9a
    RET                                 ; 005b3da0
    MOV EAX,dword ptr [EBX + 0x58]      ; 005b3da1
        ;   Label: LAB_005b3da1
    MOV ECX,0x20                        ; 005b3da4
    MOV dword ptr [EBX + 0x5c],EAX      ; 005b3da9
    LEA ESI,[EBX + 0x68]                ; 005b3dac
    MOV EAX,dword ptr [EBX + 0x60]      ; 005b3daf
    LEA EDI,[EBX + 0x88]                ; 005b3db2
    MOV dword ptr [EBX + 0x64],EAX      ; 005b3db8
    PUSH EDI                            ; 005b3dbb
    MOV EAX,ECX                         ; 005b3dbc
    SHR ECX,0x2                         ; 005b3dbe
    MOVSD.REP ES:EDI,ESI                ; 005b3dc1
    MOV CL,AL                           ; 005b3dc3
    AND CL,0x3                          ; 005b3dc5
    MOVSB.REP ES:EDI,ESI                ; 005b3dc8
    POP EDI                             ; 005b3dca
    MOV EDI,dword ptr [0x02c9cf0c]      ; 005b3dcb | DAT_02c9cf0c
    TEST EDI,EDI                        ; 005b3dd1
    JZ 0x005b4053                       ; 005b3dd3
        ;   XREF to: 005b4053 (CONDITIONAL_JUMP)  ; LAB_005b4053
    PUSH 0x34                           ; 005b3dd9
    PUSH 0x0                            ; 005b3ddb
    LEA EAX,[ESP + 0x8]                 ; 005b3ddd
    PUSH EAX                            ; 005b3de1
    CALL FUN_005bfb70                   ; 005b3de2
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV ECX,0x34                        ; 005b3de7
    ADD ESP,0xc                         ; 005b3dec
    MOV ESI,0x183                       ; 005b3def
    MOV dword ptr [ESP],ECX             ; 005b3df4
    MOV dword ptr [ESP + 0x4],ESI       ; 005b3df7
    CMP dword ptr [EBX + 0x14],0x0      ; 005b3dfb
    JZ 0x005b3e09                       ; 005b3dff
        ;   XREF to: 005b3e09 (CONDITIONAL_JUMP)  ; LAB_005b3e09
    MOV dword ptr [ESP + 0x4],0x187     ; 005b3e01
    CMP dword ptr [EBX + 0x18],0x0      ; 005b3e09
        ;   Label: LAB_005b3e09
    JZ 0x005b3e14                       ; 005b3e0d
        ;   XREF to: 005b3e14 (CONDITIONAL_JUMP)  ; LAB_005b3e14
    OR byte ptr [ESP + 0x4],0x8         ; 005b3e0f
    CMP dword ptr [EBX + 0x1c],0x0      ; 005b3e14
        ;   Label: LAB_005b3e14
    JZ 0x005b3e1f                       ; 005b3e18
        ;   XREF to: 005b3e1f (CONDITIONAL_JUMP)  ; LAB_005b3e1f
    OR byte ptr [ESP + 0x4],0x40        ; 005b3e1a
    MOV EAX,ESP                         ; 005b3e1f
        ;   Label: LAB_005b3e1f
    PUSH EAX                            ; 005b3e21
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b3e22
    MOV ESI,dword ptr [EAX*0x4 + 0x2c9d1c4] ; 005b3e25
    PUSH ESI                            ; 005b3e2c
    CALL dword ptr [0x02c9cf0c]         ; 005b3e2d | DAT_02c9cf0c
    TEST EAX,EAX                        ; 005b3e33
    JNZ 0x005b4047                      ; 005b3e35
        ;   XREF to: 005b4047 (CONDITIONAL_JUMP)  ; LAB_005b4047
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b3e3b
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b3e3e
    PUSH 0x3f800000                     ; 005b3e45
    SUB EAX,EDX                         ; 005b3e4a
    MOV ESI,0x2c9d1d4                   ; 005b3e4c
    SHL EAX,0x4                         ; 005b3e51
    PUSH 0xbf800000                     ; 005b3e54
    ADD ESI,EAX                         ; 005b3e59
    MOV dword ptr [EBX + 0x4],0x1       ; 005b3e5b
    PUSH ESI                            ; 005b3e62
    MOV EDI,dword ptr [ESP + 0x14]      ; 005b3e63
    PUSH EDI                            ; 005b3e67
    CALL FUN_005b3c90                   ; 005b3e68
        ;   XREF to: 005b3c90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3c90()
    MOV dword ptr [ESP + 0x54],EAX      ; 005b3e6d
    FLD float ptr [ESP + 0x54]          ; 005b3e71
    ADD ESP,0x10                        ; 005b3e75
    PUSH 0x3f800000                     ; 005b3e78
    LEA EAX,[ESI + 0xc]                 ; 005b3e7d
    PUSH 0xbf800000                     ; 005b3e80
    PUSH EAX                            ; 005b3e85
    FSTP float ptr [EBX + 0x20]         ; 005b3e86
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b3e89
    PUSH EAX                            ; 005b3e8d
    CALL FUN_005b3c90                   ; 005b3e8e
        ;   XREF to: 005b3c90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3c90()
    MOV dword ptr [ESP + 0x54],EAX      ; 005b3e93
    MOV EDX,dword ptr [EBX + 0x14]      ; 005b3e97
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b3e9a
    MOV dword ptr [EBX + 0x24],EAX      ; 005b3e9e
    ADD ESP,0x10                        ; 005b3ea1
    TEST EDX,EDX                        ; 005b3ea4
    JZ 0x005b3ecb                       ; 005b3ea6
        ;   XREF to: 005b3ecb (CONDITIONAL_JUMP)  ; LAB_005b3ecb
    PUSH 0x3f800000                     ; 005b3ea8
    ADD ESI,0x18                        ; 005b3ead
    PUSH 0x0                            ; 005b3eb0
    PUSH ESI                            ; 005b3eb2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005b3eb3
    PUSH ECX                            ; 005b3eb7
    CALL FUN_005b3c90                   ; 005b3eb8
        ;   XREF to: 005b3c90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3c90()
    MOV dword ptr [ESP + 0x54],EAX      ; 005b3ebd
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b3ec1
    MOV dword ptr [EBX + 0x28],EAX      ; 005b3ec5
    ADD ESP,0x10                        ; 005b3ec8
    CMP dword ptr [EBX + 0x18],0x0      ; 005b3ecb
        ;   Label: LAB_005b3ecb
    JNZ 0x005b3fbf                      ; 005b3ecf
        ;   XREF to: 005b3fbf (CONDITIONAL_JUMP)  ; LAB_005b3fbf
    MOV EDX,EBX                         ; 005b3ed5
        ;   Label: LAB_005b3ed5
    XOR EAX,EAX                         ; 005b3ed7
    MOV ESI,0x1                         ; 005b3ed9
        ;   Label: LAB_005b3ed9
    MOV CL,AL                           ; 005b3ede
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b3ee0
    SHL ESI,CL                          ; 005b3ee4
    TEST ESI,EDI                        ; 005b3ee6
    SETNZ CL                            ; 005b3ee8
    ADD EDX,0x4                         ; 005b3eeb
    AND ECX,0xff                        ; 005b3eee
    INC EAX                             ; 005b3ef4
    MOV dword ptr [EDX + 0x64],ECX      ; 005b3ef5
    CMP EAX,0x8                         ; 005b3ef8
    JL 0x005b3ed9                       ; 005b3efb
        ;   XREF to: 005b3ed9 (CONDITIONAL_JUMP)  ; LAB_005b3ed9
    CMP dword ptr [EBX + 0x1c],0x0      ; 005b3efd
    JZ 0x005b3f30                       ; 005b3f01
        ;   XREF to: 005b3f30 (CONDITIONAL_JUMP)  ; LAB_005b3f30
    MOV EDX,dword ptr [ESP + 0x28]      ; 005b3f03
    CMP EDX,0x4650                      ; 005b3f07
    JNC 0x005b4022                      ; 005b3f0d
        ;   XREF to: 005b4022 (CONDITIONAL_JUMP)  ; LAB_005b4022
    TEST EDX,EDX                        ; 005b3f13
    JBE 0x005b3ffe                      ; 005b3f15
        ;   XREF to: 005b3ffe (CONDITIONAL_JUMP)  ; LAB_005b3ffe
    CMP EDX,0x2328                      ; 005b3f1b
    JNZ 0x005b4034                      ; 005b3f21
        ;   XREF to: 005b4034 (CONDITIONAL_JUMP)  ; LAB_005b4034
    MOV dword ptr [EBX + 0x30],0x1      ; 005b3f27
    MOV EAX,EAX                         ; 005b3f2e
    MOV ESI,dword ptr [EBX + 0x5c]      ; 005b3f30
        ;   Label: LAB_005b3f30
    MOV EAX,dword ptr [EBX + 0x58]      ; 005b3f33
    CMP EAX,ESI                         ; 005b3f36
    JZ 0x005b3f3d                       ; 005b3f38
        ;   XREF to: 005b3f3d (CONDITIONAL_JUMP)  ; LAB_005b3f3d
    MOV dword ptr [EBX + 0x30],EAX      ; 005b3f3a
    MOV EDI,dword ptr [EBX + 0x64]      ; 005b3f3d
        ;   Label: LAB_005b3f3d
    MOV EAX,dword ptr [EBX + 0x60]      ; 005b3f40
    CMP EAX,EDI                         ; 005b3f43
    JNZ 0x005b4149                      ; 005b3f45
        ;   XREF to: 005b4149 (CONDITIONAL_JUMP)  ; LAB_005b4149
    MOV EAX,EBX                         ; 005b3f4b
        ;   Label: LAB_005b3f4b
    LEA ECX,[EBX + 0x20]                ; 005b3f4d
    MOV ESI,dword ptr [EAX + 0x88]      ; 005b3f50
        ;   Label: LAB_005b3f50
    MOV EDX,dword ptr [EAX + 0x68]      ; 005b3f56
    CMP EDX,ESI                         ; 005b3f59
    JZ 0x005b3f60                       ; 005b3f5b
        ;   XREF to: 005b3f60 (CONDITIONAL_JUMP)  ; LAB_005b3f60
    MOV dword ptr [EAX + 0x38],EDX      ; 005b3f5d
    ADD EAX,0x4                         ; 005b3f60
        ;   Label: LAB_005b3f60
    CMP EAX,ECX                         ; 005b3f63
    JNZ 0x005b3f50                      ; 005b3f65
        ;   XREF to: 005b3f50 (CONDITIONAL_JUMP)  ; LAB_005b3f50
    CMP dword ptr [EBX + 0x58],0x0      ; 005b3f67
    JNZ 0x005b4151                      ; 005b3f6b
        ;   XREF to: 005b4151 (CONDITIONAL_JUMP)  ; LAB_005b4151
    CMP dword ptr [EBX + 0x60],0x0      ; 005b3f71
    JNZ 0x005b4151                      ; 005b3f75
        ;   XREF to: 005b4151 (CONDITIONAL_JUMP)  ; LAB_005b4151
    MOV EAX,EBX                         ; 005b3f7b
    MOV ECX,dword ptr [EBX + 0x68]      ; 005b3f7d
    XOR EDX,EDX                         ; 005b3f80
    TEST ECX,ECX                        ; 005b3f82
    JNZ 0x005b416c                      ; 005b3f84
        ;   XREF to: 005b416c (CONDITIONAL_JUMP)  ; LAB_005b416c
    INC EDX                             ; 005b3f8a
        ;   Label: LAB_005b3f8a
    ADD EAX,0x4                         ; 005b3f8b
    CMP EDX,0x8                         ; 005b3f8e
    JL 0x005b4162                       ; 005b3f91
        ;   XREF to: 005b4162 (CONDITIONAL_JUMP)  ; LAB_005b4162
    MOV ECX,EBX                         ; 005b3f97
        ;   Label: LAB_005b3f97
    XOR EDX,EDX                         ; 005b3f99
    FLD float ptr [ECX + 0x20]          ; 005b3f9b
        ;   Label: LAB_005b3f9b
    FABS                                ; 005b3f9e
    FCOMP double ptr [0x005f9ecf]       ; 005b3fa0 | DAT_005f9ecf
    FNSTSW AX                           ; 005b3fa6
    SAHF                                ; 005b3fa8
    JA 0x005b4151                       ; 005b3fa9
        ;   XREF to: 005b4151 (CONDITIONAL_JUMP)  ; LAB_005b4151
    INC EDX                             ; 005b3faf
    ADD ECX,0x4                         ; 005b3fb0
    CMP EDX,0x4                         ; 005b3fb3
    JL 0x005b3f9b                       ; 005b3fb6
        ;   XREF to: 005b3f9b (CONDITIONAL_JUMP)  ; LAB_005b3f9b
    MOV ESP,EBP                         ; 005b3fb8
    POP EBP                             ; 005b3fba
    POP EDI                             ; 005b3fbb
    POP ESI                             ; 005b3fbc
    POP EBX                             ; 005b3fbd
    RET                                 ; 005b3fbe
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b3fbf
        ;   Label: LAB_005b3fbf
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b3fc2
    SUB EAX,EDX                         ; 005b3fc9
    SHL EAX,0x4                         ; 005b3fcb
    ADD EAX,0x2c9d1d4                   ; 005b3fce
    PUSH 0x3f800000                     ; 005b3fd3
    ADD EAX,0x24                        ; 005b3fd8
    PUSH 0xbf800000                     ; 005b3fdb
    PUSH EAX                            ; 005b3fe0
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b3fe1
    PUSH EDI                            ; 005b3fe5
    CALL FUN_005b3c90                   ; 005b3fe6
        ;   XREF to: 005b3c90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3c90()
    MOV dword ptr [ESP + 0x54],EAX      ; 005b3feb
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b3fef
    MOV dword ptr [EBX + 0x2c],EAX      ; 005b3ff3
    ADD ESP,0x10                        ; 005b3ff6
    JMP 0x005b3ed5                      ; 005b3ff9
        ;   XREF to: 005b3ed5 (UNCONDITIONAL_JUMP)  ; LAB_005b3ed5
    MOV dword ptr [EBX + 0x34],0xffffffff ; 005b3ffe
        ;   Label: LAB_005b3ffe
    JMP 0x005b3f30                      ; 005b4005
        ;   XREF to: 005b3f30 (UNCONDITIONAL_JUMP)  ; LAB_005b3f30
    MOV dword ptr [EBX + 0x34],0x1      ; 005b400a
        ;   Label: LAB_005b400a
    JMP 0x005b3f30                      ; 005b4011
        ;   XREF to: 005b3f30 (UNCONDITIONAL_JUMP)  ; LAB_005b3f30
    MOV dword ptr [EBX + 0x30],0xffffffff ; 005b4016
        ;   Label: LAB_005b4016
    JMP 0x005b3f30                      ; 005b401d
        ;   XREF to: 005b3f30 (UNCONDITIONAL_JUMP)  ; LAB_005b3f30
    JBE 0x005b400a                      ; 005b4022
        ;   XREF to: 005b400a (CONDITIONAL_JUMP)  ; LAB_005b400a
        ;   Label: LAB_005b4022
    CMP EDX,0x6978                      ; 005b4024
    JC 0x005b4034                       ; 005b402a
        ;   XREF to: 005b4034 (CONDITIONAL_JUMP)  ; LAB_005b4034
    JBE 0x005b4016                      ; 005b402c
        ;   XREF to: 005b4016 (CONDITIONAL_JUMP)  ; LAB_005b4016
    CMP EDX,0xffff                      ; 005b402e
    MOV dword ptr [EBX + 0x34],0x0      ; 005b4034
        ;   Label: LAB_005b4034
    MOV dword ptr [EBX + 0x30],0x0      ; 005b403b
    JMP 0x005b3f30                      ; 005b4042
        ;   XREF to: 005b3f30 (UNCONDITIONAL_JUMP)  ; LAB_005b3f30
    MOV dword ptr [EBX + 0x4],0x0       ; 005b4047
        ;   Label: LAB_005b4047
    JMP 0x005b3f30                      ; 005b404e
        ;   XREF to: 005b3f30 (UNCONDITIONAL_JUMP)  ; LAB_005b3f30
    PUSH 0x10                           ; 005b4053
        ;   Label: LAB_005b4053
    PUSH EDI                            ; 005b4055
    LEA EAX,[ESP + 0x3c]                ; 005b4056
    PUSH EAX                            ; 005b405a
    CALL FUN_005bfb70                   ; 005b405b
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005b4060
    LEA EAX,[ESP + 0x34]                ; 005b4063
    PUSH EAX                            ; 005b4067
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b4068
    MOV EDX,dword ptr [EAX*0x4 + 0x2c9d1c4] ; 005b406b
    PUSH EDX                            ; 005b4072
    CALL dword ptr CS:[0x5d0440]        ; 005b4073
    TEST EAX,EAX                        ; 005b407a
    JNZ 0x005b4141                      ; 005b407c
        ;   XREF to: 005b4141 (CONDITIONAL_JUMP)  ; LAB_005b4141
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b4082
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b4085
    PUSH 0x3f800000                     ; 005b408c
    SUB EAX,EDX                         ; 005b4091
    MOV ESI,0x2c9d1d4                   ; 005b4093
    SHL EAX,0x4                         ; 005b4098
    PUSH 0xbf800000                     ; 005b409b
    ADD ESI,EAX                         ; 005b40a0
    MOV dword ptr [EBX + 0x4],0x1       ; 005b40a2
    PUSH ESI                            ; 005b40a9
    MOV ECX,dword ptr [ESP + 0x40]      ; 005b40aa
    PUSH ECX                            ; 005b40ae
    CALL FUN_005b3c90                   ; 005b40af
        ;   XREF to: 005b3c90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3c90()
    MOV dword ptr [ESP + 0x54],EAX      ; 005b40b4
    FLD float ptr [ESP + 0x54]          ; 005b40b8
    ADD ESP,0x10                        ; 005b40bc
    PUSH 0x3f800000                     ; 005b40bf
    LEA EAX,[ESI + 0xc]                 ; 005b40c4
    PUSH 0xbf800000                     ; 005b40c7
    PUSH EAX                            ; 005b40cc
    FSTP float ptr [EBX + 0x20]         ; 005b40cd
    MOV EDI,dword ptr [ESP + 0x44]      ; 005b40d0
    PUSH EDI                            ; 005b40d4
    CALL FUN_005b3c90                   ; 005b40d5
        ;   XREF to: 005b3c90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3c90()
    MOV dword ptr [ESP + 0x54],EAX      ; 005b40da
    FLD float ptr [ESP + 0x54]          ; 005b40de
    MOV EAX,dword ptr [EBX + 0x14]      ; 005b40e2
    FSTP float ptr [EBX + 0x24]         ; 005b40e5
    ADD ESP,0x10                        ; 005b40e8
    TEST EAX,EAX                        ; 005b40eb
    JNZ 0x005b411c                      ; 005b40ed
        ;   XREF to: 005b411c (CONDITIONAL_JUMP)  ; LAB_005b411c
    MOV EDX,EBX                         ; 005b40ef
        ;   Label: LAB_005b40ef
    XOR EAX,EAX                         ; 005b40f1
    MOV ESI,0x1                         ; 005b40f3
        ;   Label: LAB_005b40f3
    MOV CL,AL                           ; 005b40f8
    SHL ESI,CL                          ; 005b40fa
    MOV ECX,ESI                         ; 005b40fc
    TEST dword ptr [ESP + 0x40],ECX     ; 005b40fe
    SETNZ CL                            ; 005b4102
    ADD EDX,0x4                         ; 005b4105
    AND ECX,0xff                        ; 005b4108
    INC EAX                             ; 005b410e
    MOV dword ptr [EDX + 0x64],ECX      ; 005b410f
    CMP EAX,0x8                         ; 005b4112
    JL 0x005b40f3                       ; 005b4115
        ;   XREF to: 005b40f3 (CONDITIONAL_JUMP)  ; LAB_005b40f3
    JMP 0x005b3f30                      ; 005b4117
        ;   XREF to: 005b3f30 (UNCONDITIONAL_JUMP)  ; LAB_005b3f30
    PUSH 0x3f800000                     ; 005b411c
        ;   Label: LAB_005b411c
    ADD ESI,0x18                        ; 005b4121
    PUSH 0x0                            ; 005b4124
    PUSH ESI                            ; 005b4126
    MOV EDX,dword ptr [ESP + 0x48]      ; 005b4127
    PUSH EDX                            ; 005b412b
    CALL FUN_005b3c90                   ; 005b412c
        ;   XREF to: 005b3c90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b3c90()
    MOV dword ptr [ESP + 0x54],EAX      ; 005b4131
    MOV EAX,dword ptr [ESP + 0x54]      ; 005b4135
    MOV dword ptr [EBX + 0x28],EAX      ; 005b4139
    ADD ESP,0x10                        ; 005b413c
    JMP 0x005b40ef                      ; 005b413f
        ;   XREF to: 005b40ef (UNCONDITIONAL_JUMP)  ; LAB_005b40ef
    MOV dword ptr [EBX + 0x4],EDI       ; 005b4141
        ;   Label: LAB_005b4141
    JMP 0x005b3f30                      ; 005b4144
        ;   XREF to: 005b3f30 (UNCONDITIONAL_JUMP)  ; LAB_005b3f30
    MOV dword ptr [EBX + 0x34],EAX      ; 005b4149
        ;   Label: LAB_005b4149
    JMP 0x005b3f4b                      ; 005b414c
        ;   XREF to: 005b3f4b (UNCONDITIONAL_JUMP)  ; LAB_005b3f4b
    MOV dword ptr [EBX + 0xa8],0x0      ; 005b4151
        ;   Label: LAB_005b4151
    MOV ESP,EBP                         ; 005b415b
    POP EBP                             ; 005b415d
    POP EDI                             ; 005b415e
    POP ESI                             ; 005b415f
    POP EBX                             ; 005b4160
    RET                                 ; 005b4161
    CMP dword ptr [EAX + 0x68],0x0      ; 005b4162
        ;   Label: LAB_005b4162
    JZ 0x005b3f8a                       ; 005b4166
        ;   XREF to: 005b3f8a (CONDITIONAL_JUMP)  ; LAB_005b3f8a
    MOV dword ptr [EBX + 0xa8],0x0      ; 005b416c
        ;   Label: LAB_005b416c
    JMP 0x005b3f97                      ; 005b4176
        ;   XREF to: 005b3f97 (UNCONDITIONAL_JUMP)  ; LAB_005b3f97

