; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; short * FUN_00551dc0(int param_1,int param_2,short *param_3,int param_4,short *param_5,int param_6,int param_7,short *param_8,int param_9,short *param_10,int param_11)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
;   FUN_005587b0 at 0055888f
;
; Called Functions:
;   FUN_00551d80
;   FUN_00551da0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551dc0
        ;   Label: FUN_00551dc0
    PUSH ESI                            ; 00551dc1
    PUSH EDI                            ; 00551dc2
    PUSH EBP                            ; 00551dc3
    SUB ESP,0x4c                        ; 00551dc4
    MOV EDX,dword ptr [ESP + 0x64]      ; 00551dc7
    MOV ECX,dword ptr [ESP + 0x68]      ; 00551dcb
    MOV EDI,dword ptr [ESP + 0x70]      ; 00551dcf
    MOV ESI,dword ptr [ESP + 0x78]      ; 00551dd3
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00551dd7
    MOV EBX,dword ptr [ESP + 0x88]      ; 00551ddb
    CMP EBX,0x1                         ; 00551de2
    JL 0x00551e80                       ; 00551de5
        ;   XREF to: 00551e80 (CONDITIONAL_JUMP)  ; LAB_00551e80
    CMP ECX,EAX                         ; 00551deb
    JNZ 0x00551e88                      ; 00551ded
        ;   XREF to: 00551e88 (CONDITIONAL_JUMP)  ; LAB_00551e88
    MOV EBP,dword ptr [ESP + 0x60]      ; 00551df3
    CMP EBP,dword ptr [ESP + 0x74]      ; 00551df7
    JNZ 0x00551e88                      ; 00551dfb
        ;   XREF to: 00551e88 (CONDITIONAL_JUMP)  ; LAB_00551e88
    CMP EDX,ESI                         ; 00551e01
    JNZ 0x00551e88                      ; 00551e03
        ;   XREF to: 00551e88 (CONDITIONAL_JUMP)  ; LAB_00551e88
    CMP EDI,dword ptr [ESP + 0x84]      ; 00551e09
    JZ 0x00551e42                       ; 00551e10
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    MOV EDX,EBP                         ; 00551e12
    MOV EAX,EBP                         ; 00551e14
    SAR EDX,0x1f                        ; 00551e16
    SHL EDX,0x3                         ; 00551e19
    SBB EAX,EDX                         ; 00551e1c
    SAR EAX,0x3                         ; 00551e1e
    MOV ECX,EAX                         ; 00551e21
    IMUL ECX,EBX                        ; 00551e23
    IMUL ECX,ESI                        ; 00551e26
    MOV ESI,EDI                         ; 00551e29
    MOV EDI,dword ptr [ESP + 0x84]      ; 00551e2b
    PUSH EDI                            ; 00551e32
    MOV EAX,ECX                         ; 00551e33
    SHR ECX,0x2                         ; 00551e35
    MOVSD.REP ES:EDI,ESI                ; 00551e38
    MOV CL,AL                           ; 00551e3a
    AND CL,0x3                          ; 00551e3c
    MOVSB.REP ES:EDI,ESI                ; 00551e3f
    POP EDI                             ; 00551e41
    CMP dword ptr [ESP + 0x6c],0x0      ; 00551e42
        ;   Label: LAB_00551e42
    JZ 0x00551e53                       ; 00551e47
        ;   XREF to: 00551e53 (CONDITIONAL_JUMP)  ; LAB_00551e53
    CMP dword ptr [ESP + 0x80],0x0      ; 00551e49
    JZ 0x00551e64                       ; 00551e51
        ;   XREF to: 00551e64 (CONDITIONAL_JUMP)  ; LAB_00551e64
    CMP dword ptr [ESP + 0x6c],0x0      ; 00551e53
        ;   Label: LAB_00551e53
    JNZ 0x00551e80                      ; 00551e58
        ;   XREF to: 00551e80 (CONDITIONAL_JUMP)  ; LAB_00551e80
    CMP dword ptr [ESP + 0x80],0x0      ; 00551e5a
    JZ 0x00551e80                       ; 00551e62
        ;   XREF to: 00551e80 (CONDITIONAL_JUMP)  ; LAB_00551e80
    CMP dword ptr [ESP + 0x74],0x8      ; 00551e64
        ;   Label: LAB_00551e64
    JNZ 0x005523b4                      ; 00551e69
        ;   XREF to: 005523b4 (CONDITIONAL_JUMP)  ; LAB_005523b4
    PUSH EBX                            ; 00551e6f
    MOV EDX,dword ptr [ESP + 0x88]      ; 00551e70
    PUSH EDX                            ; 00551e77
    CALL FUN_00551d80                   ; 00551e78
        ;   XREF to: 00551d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00551d80()
    ADD ESP,0x8                         ; 00551e7d
    ADD ESP,0x4c                        ; 00551e80
        ;   Label: LAB_00551e80
    POP EBP                             ; 00551e83
    POP EDI                             ; 00551e84
    POP ESI                             ; 00551e85
    POP EBX                             ; 00551e86
    RET                                 ; 00551e87
    MOV dword ptr [ESP + 0x44],ECX      ; 00551e88
        ;   Label: LAB_00551e88
    MOV dword ptr [ESP + 0x48],EAX      ; 00551e8c
    FILD dword ptr [ESP + 0x44]         ; 00551e90
    FILD dword ptr [ESP + 0x48]         ; 00551e94
    FDIVP                               ; 00551e98
    MOV ECX,dword ptr [ESP + 0x60]      ; 00551e9a
    FSTP float ptr [ESP + 0x18]         ; 00551e9e
    CMP ECX,0x8                         ; 00551ea2
    JNZ 0x00552123                      ; 00551ea5
        ;   XREF to: 00552123 (CONDITIONAL_JUMP)  ; LAB_00552123
    MOV EBP,dword ptr [ESP + 0x74]      ; 00551eab
    MOV EAX,EDI                         ; 00551eaf
    CMP EBP,ECX                         ; 00551eb1
    JNZ 0x00551fdd                      ; 00551eb3
        ;   XREF to: 00551fdd (CONDITIONAL_JUMP)  ; LAB_00551fdd
    MOV ECX,dword ptr [ESP + 0x84]      ; 00551eb9
    CMP EDX,0x1                         ; 00551ec0
    JNZ 0x00551f47                      ; 00551ec3
        ;   XREF to: 00551f47 (CONDITIONAL_JUMP)  ; LAB_00551f47
    CMP ESI,EDX                         ; 00551ec9
    JNZ 0x00551f05                      ; 00551ecb
        ;   XREF to: 00551f05 (CONDITIONAL_JUMP)  ; LAB_00551f05
    XOR EDX,EDX                         ; 00551ecd
    CMP EDX,EBX                         ; 00551ecf
    JGE 0x00551e42                      ; 00551ed1
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 00551ed7
    MOV ESI,ECX                         ; 00551edb
    MOV dword ptr [ESP + 0x48],EDX      ; 00551edd
        ;   Label: LAB_00551edd
    FILD dword ptr [ESP + 0x48]         ; 00551ee1
    FMUL ST1                            ; 00551ee5
    CALL FUN_005b7ff0                   ; 00551ee7
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 00551eec
    MOV EDI,dword ptr [ESP]             ; 00551eef
    INC ESI                             ; 00551ef2
    MOV CL,byte ptr [EDI + EAX*0x1]     ; 00551ef3
    INC EDX                             ; 00551ef6
    MOV byte ptr [ESI + -0x1],CL        ; 00551ef7
    CMP EDX,EBX                         ; 00551efa
    JL 0x00551edd                       ; 00551efc
        ;   XREF to: 00551edd (CONDITIONAL_JUMP)  ; LAB_00551edd
    FSTP ST0                            ; 00551efe
    JMP 0x00551e42                      ; 00551f00
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    XOR ESI,ESI                         ; 00551f05
        ;   Label: LAB_00551f05
    CMP ESI,EBX                         ; 00551f07
    JGE 0x00551e42                      ; 00551f09
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    LEA EDX,[ESI + ESI*0x1]             ; 00551f0f
    FLD float ptr [ESP + 0x18]          ; 00551f12
    ADD EDX,ECX                         ; 00551f16
    MOV dword ptr [ESP + 0x44],ESI      ; 00551f18
        ;   Label: LAB_00551f18
    FILD dword ptr [ESP + 0x44]         ; 00551f1c
    FMUL ST1                            ; 00551f20
    CALL FUN_005b7ff0                   ; 00551f22
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 00551f27
    MOV ECX,dword ptr [ESP + 0x4]       ; 00551f2b
    ADD EDX,0x2                         ; 00551f2f
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00551f32
    MOV byte ptr [EDX + -0x1],CL        ; 00551f35
    INC ESI                             ; 00551f38
    MOV byte ptr [EDX + -0x2],CL        ; 00551f39
    CMP ESI,EBX                         ; 00551f3c
    JL 0x00551f18                       ; 00551f3e
        ;   XREF to: 00551f18 (CONDITIONAL_JUMP)  ; LAB_00551f18
    FSTP ST0                            ; 00551f40
    JMP 0x00551e42                      ; 00551f42
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    CMP ESI,0x1                         ; 00551f47
        ;   Label: LAB_00551f47
    JNZ 0x00551f98                      ; 00551f4a
        ;   XREF to: 00551f98 (CONDITIONAL_JUMP)  ; LAB_00551f98
    XOR EDX,EDX                         ; 00551f4c
    CMP EDX,EBX                         ; 00551f4e
    JGE 0x00551e42                      ; 00551f50
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 00551f56
    MOV ESI,ECX                         ; 00551f5a
    MOV dword ptr [ESP + 0x44],EDX      ; 00551f5c
        ;   Label: LAB_00551f5c
    FILD dword ptr [ESP + 0x44]         ; 00551f60
    FMUL ST1                            ; 00551f64
    CALL FUN_005b7ff0                   ; 00551f66
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 00551f6b
    MOV ECX,dword ptr [ESP + 0x8]       ; 00551f6f
    MOVSX EDI,byte ptr [EAX + ECX*0x2 + 0x1] ; 00551f73
    MOVSX ECX,byte ptr [EAX + ECX*0x2]  ; 00551f78
    ADD ECX,EDI                         ; 00551f7c
    SAR ECX,0x1                         ; 00551f7e
    MOV dword ptr [ESP + 0x44],ECX      ; 00551f80
    INC ESI                             ; 00551f84
    MOV CL,byte ptr [ESP + 0x44]        ; 00551f85
    INC EDX                             ; 00551f89
    MOV byte ptr [ESI + -0x1],CL        ; 00551f8a
    CMP EDX,EBX                         ; 00551f8d
    JL 0x00551f5c                       ; 00551f8f
        ;   XREF to: 00551f5c (CONDITIONAL_JUMP)  ; LAB_00551f5c
    FSTP ST0                            ; 00551f91
    JMP 0x00551e42                      ; 00551f93
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    XOR EDX,EDX                         ; 00551f98
        ;   Label: LAB_00551f98
    CMP EDX,EBX                         ; 00551f9a
    JGE 0x00551e42                      ; 00551f9c
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    LEA ESI,[EDX + EDX*0x1]             ; 00551fa2
    FLD float ptr [ESP + 0x18]          ; 00551fa5
    ADD ESI,ECX                         ; 00551fa9
    MOV dword ptr [ESP + 0x44],EDX      ; 00551fab
        ;   Label: LAB_00551fab
    FILD dword ptr [ESP + 0x44]         ; 00551faf
    FMUL ST1                            ; 00551fb3
    CALL FUN_005b7ff0                   ; 00551fb5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 00551fba
    MOV EDI,dword ptr [ESP + 0xc]       ; 00551fbe
    MOV CL,byte ptr [EAX + EDI*0x2]     ; 00551fc2
    MOV byte ptr [ESI],CL               ; 00551fc5
    ADD ESI,0x2                         ; 00551fc7
    MOV CL,byte ptr [EAX + EDI*0x2 + 0x1] ; 00551fca
    INC EDX                             ; 00551fce
    MOV byte ptr [ESI + -0x1],CL        ; 00551fcf
    CMP EDX,EBX                         ; 00551fd2
    JL 0x00551fab                       ; 00551fd4
        ;   XREF to: 00551fab (CONDITIONAL_JUMP)  ; LAB_00551fab
    FSTP ST0                            ; 00551fd6
    JMP 0x00551e42                      ; 00551fd8
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    MOV ECX,dword ptr [ESP + 0x84]      ; 00551fdd
        ;   Label: LAB_00551fdd
    CMP EDX,0x1                         ; 00551fe4
    JNZ 0x00552083                      ; 00551fe7
        ;   XREF to: 00552083 (CONDITIONAL_JUMP)  ; LAB_00552083
    CMP ESI,EDX                         ; 00551fed
    JNZ 0x00552036                      ; 00551fef
        ;   XREF to: 00552036 (CONDITIONAL_JUMP)  ; LAB_00552036
    XOR EDX,EDX                         ; 00551ff1
    CMP EDX,EBX                         ; 00551ff3
    JGE 0x00551e42                      ; 00551ff5
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    LEA ESI,[EDX + EDX*0x1]             ; 00551ffb
    FLD float ptr [ESP + 0x18]          ; 00551ffe
    ADD ESI,ECX                         ; 00552002
    MOV dword ptr [ESP + 0x44],EDX      ; 00552004
        ;   Label: LAB_00552004
    FILD dword ptr [ESP + 0x44]         ; 00552008
    FMUL ST1                            ; 0055200c
    CALL FUN_005b7ff0                   ; 0055200e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 00552013
    MOV ECX,dword ptr [ESP + 0x10]      ; 00552017
    MOVSX CX,byte ptr [ECX + EAX*0x1]   ; 0055201b
    ADD ESI,0x2                         ; 00552020
    SHL ECX,0x8                         ; 00552023
    INC EDX                             ; 00552026
    MOV word ptr [ESI + -0x2],CX        ; 00552027
    CMP EDX,EBX                         ; 0055202b
    JL 0x00552004                       ; 0055202d
        ;   XREF to: 00552004 (CONDITIONAL_JUMP)  ; LAB_00552004
    FSTP ST0                            ; 0055202f
    JMP 0x00551e42                      ; 00552031
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    XOR ESI,ESI                         ; 00552036
        ;   Label: LAB_00552036
    CMP ESI,EBX                         ; 00552038
    JGE 0x00551e42                      ; 0055203a
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    LEA EDX,[ESI*0x4 + 0x0]             ; 00552040
    FLD float ptr [ESP + 0x18]          ; 00552047
    ADD EDX,ECX                         ; 0055204b
    MOV dword ptr [ESP + 0x48],ESI      ; 0055204d
        ;   Label: LAB_0055204d
    FILD dword ptr [ESP + 0x48]         ; 00552051
    FMUL ST1                            ; 00552055
    CALL FUN_005b7ff0                   ; 00552057
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x14]        ; 0055205c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00552060
    MOVSX CX,byte ptr [ECX + EAX*0x1]   ; 00552064
    ADD EDX,0x4                         ; 00552069
    SHL ECX,0x8                         ; 0055206c
    MOV word ptr [EDX + -0x2],CX        ; 0055206f
    INC ESI                             ; 00552073
    MOV word ptr [EDX + -0x4],CX        ; 00552074
    CMP ESI,EBX                         ; 00552078
    JL 0x0055204d                       ; 0055207a
        ;   XREF to: 0055204d (CONDITIONAL_JUMP)  ; LAB_0055204d
    FSTP ST0                            ; 0055207c
    JMP 0x00551e42                      ; 0055207e
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    CMP ESI,0x1                         ; 00552083
        ;   Label: LAB_00552083
    JNZ 0x005520d5                      ; 00552086
        ;   XREF to: 005520d5 (CONDITIONAL_JUMP)  ; LAB_005520d5
    XOR EDX,EDX                         ; 00552088
    TEST EBX,EBX                        ; 0055208a
    JLE 0x00551e42                      ; 0055208c
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 00552092
    MOV ESI,ECX                         ; 00552096
    MOV dword ptr [ESP + 0x48],EDX      ; 00552098
        ;   Label: LAB_00552098
    FILD dword ptr [ESP + 0x48]         ; 0055209c
    FMUL ST1                            ; 005520a0
    CALL FUN_005b7ff0                   ; 005520a2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1c]        ; 005520a7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005520ab
    MOVSX DI,byte ptr [EAX + ECX*0x2 + 0x1] ; 005520af
    ADD ESI,0x2                         ; 005520b5
    MOVSX CX,byte ptr [EAX + ECX*0x2]   ; 005520b8
    SHL EDI,0x7                         ; 005520bd
    SHL ECX,0x7                         ; 005520c0
    INC EDX                             ; 005520c3
    ADD ECX,EDI                         ; 005520c4
    MOV word ptr [ESI + -0x2],CX        ; 005520c6
    CMP EDX,EBX                         ; 005520ca
    JL 0x00552098                       ; 005520cc
        ;   XREF to: 00552098 (CONDITIONAL_JUMP)  ; LAB_00552098
    FSTP ST0                            ; 005520ce
    JMP 0x00551e42                      ; 005520d0
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    XOR ESI,ESI                         ; 005520d5
        ;   Label: LAB_005520d5
    TEST EBX,EBX                        ; 005520d7
    JLE 0x00551e42                      ; 005520d9
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 005520df
    MOV EDX,ECX                         ; 005520e3
    MOV dword ptr [ESP + 0x48],ESI      ; 005520e5
        ;   Label: LAB_005520e5
    FILD dword ptr [ESP + 0x48]         ; 005520e9
    FMUL ST1                            ; 005520ed
    CALL FUN_005b7ff0                   ; 005520ef
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x24]        ; 005520f4
    MOV ECX,dword ptr [ESP + 0x24]      ; 005520f8
    MOVSX DI,byte ptr [EAX + ECX*0x2]   ; 005520fc
    SHL EDI,0x8                         ; 00552101
    MOV word ptr [EDX],DI               ; 00552104
    ADD EDX,0x4                         ; 00552107
    MOVSX CX,byte ptr [EAX + ECX*0x2 + 0x1] ; 0055210a
    INC ESI                             ; 00552110
    SHL ECX,0x8                         ; 00552111
    MOV word ptr [EDX + -0x2],CX        ; 00552114
    CMP ESI,EBX                         ; 00552118
    JL 0x005520e5                       ; 0055211a
        ;   XREF to: 005520e5 (CONDITIONAL_JUMP)  ; LAB_005520e5
    FSTP ST0                            ; 0055211c
    JMP 0x00551e42                      ; 0055211e
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    MOV EAX,EDI                         ; 00552123
        ;   Label: LAB_00552123
    CMP dword ptr [ESP + 0x74],0x8      ; 00552125
    JNZ 0x00552280                      ; 0055212a
        ;   XREF to: 00552280 (CONDITIONAL_JUMP)  ; LAB_00552280
    CMP EDX,0x1                         ; 00552130
    JNZ 0x005521d0                      ; 00552133
        ;   XREF to: 005521d0 (CONDITIONAL_JUMP)  ; LAB_005521d0
    CMP ESI,EDX                         ; 00552139
    JNZ 0x00552180                      ; 0055213b
        ;   XREF to: 00552180 (CONDITIONAL_JUMP)  ; LAB_00552180
    XOR EDX,EDX                         ; 0055213d
    TEST EBX,EBX                        ; 0055213f
    JLE 0x00551e42                      ; 00552141
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 00552147
    MOV ESI,dword ptr [ESP + 0x84]      ; 0055214b
    MOV dword ptr [ESP + 0x44],EDX      ; 00552152
        ;   Label: LAB_00552152
    FILD dword ptr [ESP + 0x44]         ; 00552156
    FMUL ST1                            ; 0055215a
    CALL FUN_005b7ff0                   ; 0055215c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x28]        ; 00552161
    MOV ECX,dword ptr [ESP + 0x28]      ; 00552165
    MOVSX ECX,word ptr [EAX + ECX*0x2]  ; 00552169
    INC ESI                             ; 0055216d
    SAR ECX,0x8                         ; 0055216e
    INC EDX                             ; 00552171
    MOV byte ptr [ESI + -0x1],CL        ; 00552172
    CMP EDX,EBX                         ; 00552175
    JL 0x00552152                       ; 00552177
        ;   XREF to: 00552152 (CONDITIONAL_JUMP)  ; LAB_00552152
    FSTP ST0                            ; 00552179
    JMP 0x00551e42                      ; 0055217b
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    XOR ESI,ESI                         ; 00552180
        ;   Label: LAB_00552180
    TEST EBX,EBX                        ; 00552182
    JLE 0x00551e42                      ; 00552184
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 0055218a
    MOV EDX,dword ptr [ESP + 0x84]      ; 0055218e
    MOV dword ptr [ESP + 0x48],ESI      ; 00552195
        ;   Label: LAB_00552195
    FILD dword ptr [ESP + 0x48]         ; 00552199
    FMUL ST1                            ; 0055219d
    CALL FUN_005b7ff0                   ; 0055219f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x2c]        ; 005521a4
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005521a8
    MOVSX ECX,word ptr [EAX + ECX*0x2]  ; 005521ac
    SAR ECX,0x8                         ; 005521b0
    MOV dword ptr [ESP + 0x44],ECX      ; 005521b3
    ADD EDX,0x2                         ; 005521b7
    MOV CL,byte ptr [ESP + 0x44]        ; 005521ba
    MOV byte ptr [EDX + -0x1],CL        ; 005521be
    INC ESI                             ; 005521c1
    MOV byte ptr [EDX + -0x2],CL        ; 005521c2
    CMP ESI,EBX                         ; 005521c5
    JL 0x00552195                       ; 005521c7
        ;   XREF to: 00552195 (CONDITIONAL_JUMP)  ; LAB_00552195
    FSTP ST0                            ; 005521c9
    JMP 0x00551e42                      ; 005521cb
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    CMP ESI,0x1                         ; 005521d0
        ;   Label: LAB_005521d0
    JNZ 0x00552220                      ; 005521d3
        ;   XREF to: 00552220 (CONDITIONAL_JUMP)  ; LAB_00552220
    XOR EDX,EDX                         ; 005521d5
    TEST EBX,EBX                        ; 005521d7
    JLE 0x00551e42                      ; 005521d9
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 005521df
    MOV ESI,dword ptr [ESP + 0x84]      ; 005521e3
    MOV dword ptr [ESP + 0x48],EDX      ; 005521ea
        ;   Label: LAB_005521ea
    FILD dword ptr [ESP + 0x48]         ; 005521ee
    FMUL ST1                            ; 005521f2
    CALL FUN_005b7ff0                   ; 005521f4
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x30]        ; 005521f9
    MOV ECX,dword ptr [ESP + 0x30]      ; 005521fd
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 00552201
    SAR EDI,0x10                        ; 00552204
    MOVSX ECX,word ptr [EAX + ECX*0x4]  ; 00552207
    ADD ECX,EDI                         ; 0055220b
    INC ESI                             ; 0055220d
    SAR ECX,0x9                         ; 0055220e
    INC EDX                             ; 00552211
    MOV byte ptr [ESI + -0x1],CL        ; 00552212
    CMP EDX,EBX                         ; 00552215
    JL 0x005521ea                       ; 00552217
        ;   XREF to: 005521ea (CONDITIONAL_JUMP)  ; LAB_005521ea
    FSTP ST0                            ; 00552219
    JMP 0x00551e42                      ; 0055221b
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    XOR EDX,EDX                         ; 00552220
        ;   Label: LAB_00552220
    TEST EBX,EBX                        ; 00552222
    JLE 0x00551e42                      ; 00552224
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 0055222a
    MOV ESI,dword ptr [ESP + 0x84]      ; 0055222e
    MOV dword ptr [ESP + 0x48],EDX      ; 00552235
        ;   Label: LAB_00552235
    FILD dword ptr [ESP + 0x48]         ; 00552239
    FMUL ST1                            ; 0055223d
    CALL FUN_005b7ff0                   ; 0055223f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x34]        ; 00552244
    MOV EDI,dword ptr [ESP + 0x34]      ; 00552248
    MOVSX ECX,word ptr [EAX + EDI*0x4]  ; 0055224c
    SAR ECX,0x8                         ; 00552250
    MOV dword ptr [ESP + 0x44],ECX      ; 00552253
    MOV CL,byte ptr [ESP + 0x44]        ; 00552257
    MOV byte ptr [ESI],CL               ; 0055225b
    MOV ECX,dword ptr [EAX + EDI*0x4]   ; 0055225d
    SAR ECX,0x10                        ; 00552260
    SAR ECX,0x8                         ; 00552263
    MOV dword ptr [ESP + 0x44],ECX      ; 00552266
    ADD ESI,0x2                         ; 0055226a
    MOV CL,byte ptr [ESP + 0x44]        ; 0055226d
    INC EDX                             ; 00552271
    MOV byte ptr [ESI + -0x1],CL        ; 00552272
    CMP EDX,EBX                         ; 00552275
    JL 0x00552235                       ; 00552277
        ;   XREF to: 00552235 (CONDITIONAL_JUMP)  ; LAB_00552235
    FSTP ST0                            ; 00552279
    JMP 0x00551e42                      ; 0055227b
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    CMP EDX,0x1                         ; 00552280
        ;   Label: LAB_00552280
    JNZ 0x00552317                      ; 00552283
        ;   XREF to: 00552317 (CONDITIONAL_JUMP)  ; LAB_00552317
    CMP ESI,EDX                         ; 00552289
    JNZ 0x005522d0                      ; 0055228b
        ;   XREF to: 005522d0 (CONDITIONAL_JUMP)  ; LAB_005522d0
    XOR EDX,EDX                         ; 0055228d
    TEST EBX,EBX                        ; 0055228f
    JLE 0x00551e42                      ; 00552291
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 00552297
    MOV ESI,dword ptr [ESP + 0x84]      ; 0055229b
    MOV dword ptr [ESP + 0x44],EDX      ; 005522a2
        ;   Label: LAB_005522a2
    FILD dword ptr [ESP + 0x44]         ; 005522a6
    FMUL ST1                            ; 005522aa
    CALL FUN_005b7ff0                   ; 005522ac
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x38]        ; 005522b1
    MOV ECX,dword ptr [ESP + 0x38]      ; 005522b5
    ADD ESI,0x2                         ; 005522b9
    MOV CX,word ptr [EAX + ECX*0x2]     ; 005522bc
    INC EDX                             ; 005522c0
    MOV word ptr [ESI + -0x2],CX        ; 005522c1
    CMP EDX,EBX                         ; 005522c5
    JL 0x005522a2                       ; 005522c7
        ;   XREF to: 005522a2 (CONDITIONAL_JUMP)  ; LAB_005522a2
    FSTP ST0                            ; 005522c9
    JMP 0x00551e42                      ; 005522cb
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    XOR ESI,ESI                         ; 005522d0
        ;   Label: LAB_005522d0
    TEST EBX,EBX                        ; 005522d2
    JLE 0x00551e42                      ; 005522d4
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 005522da
    MOV EDX,dword ptr [ESP + 0x84]      ; 005522de
    MOV dword ptr [ESP + 0x44],ESI      ; 005522e5
        ;   Label: LAB_005522e5
    FILD dword ptr [ESP + 0x44]         ; 005522e9
    FMUL ST1                            ; 005522ed
    CALL FUN_005b7ff0                   ; 005522ef
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x3c]        ; 005522f4
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005522f8
    ADD EDX,0x4                         ; 005522fc
    MOV CX,word ptr [EAX + ECX*0x2]     ; 005522ff
    MOV word ptr [EDX + -0x2],CX        ; 00552303
    INC ESI                             ; 00552307
    MOV word ptr [EDX + -0x4],CX        ; 00552308
    CMP ESI,EBX                         ; 0055230c
    JL 0x005522e5                       ; 0055230e
        ;   XREF to: 005522e5 (CONDITIONAL_JUMP)  ; LAB_005522e5
    FSTP ST0                            ; 00552310
    JMP 0x00551e42                      ; 00552312
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    CMP ESI,0x1                         ; 00552317
        ;   Label: LAB_00552317
    JNZ 0x00552369                      ; 0055231a
        ;   XREF to: 00552369 (CONDITIONAL_JUMP)  ; LAB_00552369
    XOR EDX,EDX                         ; 0055231c
    TEST EBX,EBX                        ; 0055231e
    JLE 0x00551e42                      ; 00552320
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 00552326
    MOV ESI,dword ptr [ESP + 0x84]      ; 0055232a
    MOV dword ptr [ESP + 0x44],EDX      ; 00552331
        ;   Label: LAB_00552331
    FILD dword ptr [ESP + 0x44]         ; 00552335
    FMUL ST1                            ; 00552339
    CALL FUN_005b7ff0                   ; 0055233b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x40]        ; 00552340
    MOV ECX,dword ptr [ESP + 0x40]      ; 00552344
    MOV EDI,dword ptr [EAX + ECX*0x4]   ; 00552348
    SAR EDI,0x10                        ; 0055234b
    MOVSX ECX,word ptr [EAX + ECX*0x4]  ; 0055234e
    ADD ECX,EDI                         ; 00552352
    ADD ESI,0x2                         ; 00552354
    SAR ECX,0x1                         ; 00552357
    INC EDX                             ; 00552359
    MOV word ptr [ESI + -0x2],CX        ; 0055235a
    CMP EDX,EBX                         ; 0055235e
    JL 0x00552331                       ; 00552360
        ;   XREF to: 00552331 (CONDITIONAL_JUMP)  ; LAB_00552331
    FSTP ST0                            ; 00552362
    JMP 0x00551e42                      ; 00552364
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    XOR ESI,ESI                         ; 00552369
        ;   Label: LAB_00552369
    TEST EBX,EBX                        ; 0055236b
    JLE 0x00551e42                      ; 0055236d
        ;   XREF to: 00551e42 (CONDITIONAL_JUMP)  ; LAB_00551e42
    FLD float ptr [ESP + 0x18]          ; 00552373
    MOV EDX,dword ptr [ESP + 0x84]      ; 00552377
    MOV dword ptr [ESP + 0x44],ESI      ; 0055237e
        ;   Label: LAB_0055237e
    FILD dword ptr [ESP + 0x44]         ; 00552382
    FMUL ST1                            ; 00552386
    CALL FUN_005b7ff0                   ; 00552388
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x20]        ; 0055238d
    MOV ECX,dword ptr [ESP + 0x20]      ; 00552391
    MOV DI,word ptr [EAX + ECX*0x4]     ; 00552395
    MOV word ptr [EDX],DI               ; 00552399
    ADD EDX,0x4                         ; 0055239c
    MOV CX,word ptr [EAX + ECX*0x4 + 0x2] ; 0055239f
    INC ESI                             ; 005523a4
    MOV word ptr [EDX + -0x2],CX        ; 005523a5
    CMP ESI,EBX                         ; 005523a9
    JL 0x0055237e                       ; 005523ab
        ;   XREF to: 0055237e (CONDITIONAL_JUMP)  ; LAB_0055237e
    FSTP ST0                            ; 005523ad
    JMP 0x00551e42                      ; 005523af
        ;   XREF to: 00551e42 (UNCONDITIONAL_JUMP)  ; LAB_00551e42
    PUSH EBX                            ; 005523b4
        ;   Label: LAB_005523b4
    MOV EAX,dword ptr [ESP + 0x88]      ; 005523b5
    PUSH EAX                            ; 005523bc
    CALL FUN_00551da0                   ; 005523bd
        ;   XREF to: 00551da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00551da0()
    ADD ESP,0x8                         ; 005523c2
    ADD ESP,0x4c                        ; 005523c5
    POP EBP                             ; 005523c8
    POP EDI                             ; 005523c9
    POP ESI                             ; 005523ca
    POP EBX                             ; 005523cb
    RET                                 ; 005523cc

