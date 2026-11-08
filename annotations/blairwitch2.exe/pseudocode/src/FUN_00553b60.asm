; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00553b60(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined8       Stack[-0xa8]:8  local_a8
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined8       Stack[-0x98]:8  local_98
; undefined8       Stack[-0x90]:8  local_90
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x50]:8  local_50
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
;
; XREF[1]:
;   FUN_004ed260 at 004eda54
;
; Referenced Globals:
;   undefined4 DAT_005e93a6
;   undefined4 DAT_005e93ae
;   undefined4 DAT_0061bca0
;   undefined4 DAT_02648e98
;
; Called Functions:
;   FUN_00552cb0
;   FUN_005b7ff0
;   FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553b60
        ;   Label: FUN_00553b60
    PUSH ESI                            ; 00553b61
    PUSH EDI                            ; 00553b62
    PUSH EBP                            ; 00553b63
    MOV EBP,ESP                         ; 00553b64
    SUB ESP,0xb4                        ; 00553b66
    AND ESP,0xfffffff8                  ; 00553b6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00553b6f
    SHL EBX,0x2                         ; 00553b72
    CMP dword ptr [EBX + 0x2648ec8],0x0 ; 00553b75
    JZ 0x00553b99                       ; 00553b7c
        ;   XREF to: 00553b99 (CONDITIONAL_JUMP)  ; LAB_00553b99
    CMP dword ptr [EBX + 0x2648eec],0x0 ; 00553b7e
    JZ 0x00553b99                       ; 00553b85
        ;   XREF to: 00553b99 (CONDITIONAL_JUMP)  ; LAB_00553b99
    CMP dword ptr [EBX + 0x2648f0c],0x0 ; 00553b87
    JZ 0x00553b99                       ; 00553b8e
        ;   XREF to: 00553b99 (CONDITIONAL_JUMP)  ; LAB_00553b99
    CMP dword ptr [0x02648e98],0x1      ; 00553b90 | DAT_02648e98
    JGE 0x00553bb0                      ; 00553b97
        ;   XREF to: 00553bb0 (CONDITIONAL_JUMP)  ; LAB_00553bb0
    XOR EDI,EDI                         ; 00553b99
        ;   Label: LAB_00553b99
    MOV dword ptr [ESP + 0xac],EDI      ; 00553b9b
    MOV EAX,dword ptr [ESP + 0xac]      ; 00553ba2
    MOV ESP,EBP                         ; 00553ba9
    POP EBP                             ; 00553bab
    POP EDI                             ; 00553bac
    POP ESI                             ; 00553bad
    POP EBX                             ; 00553bae
    RET                                 ; 00553baf
    CALL FUN_00552cb0                   ; 00553bb0
        ;   XREF to: 00552cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00552cb0()
        ;   Label: LAB_00553bb0
    CMP EAX,dword ptr [EBX + 0x263cef0] ; 00553bb5
    JZ 0x00553f0a                       ; 00553bbb
        ;   XREF to: 00553f0a (CONDITIONAL_JUMP)  ; LAB_00553f0a
    MOV ESI,dword ptr [0x02648e98]      ; 00553bc1 | DAT_02648e98
    MOV EDX,dword ptr [EBX + 0x2648eec] ; 00553bc7
    MOV ECX,dword ptr [EBX + 0x2648f0c] ; 00553bcd
    MOV EDI,dword ptr [EBX + 0x2648ec8] ; 00553bd3
    MOV dword ptr [ESP + 0x9c],EDX      ; 00553bd9
    MOV dword ptr [ESP + 0xa0],ECX      ; 00553be0
    MOV dword ptr [ESP + 0x98],ESI      ; 00553be7
    XOR EBX,EBX                         ; 00553bee
    MOV ESI,0x1                         ; 00553bf0
    MOV EDX,dword ptr [ESP + 0x98]      ; 00553bf5
    MOV dword ptr [ESP + 0x8c],EBX      ; 00553bfc
    MOV dword ptr [ESP + 0x94],ESI      ; 00553c03
    MOV CL,byte ptr [ESP + 0x94]        ; 00553c0a
        ;   Label: LAB_00553c0a
    MOV EAX,0x1                         ; 00553c11
    SHL EAX,CL                          ; 00553c16
    CMP EAX,EDX                         ; 00553c18
    JGE 0x00553c25                      ; 00553c1a
        ;   XREF to: 00553c25 (CONDITIONAL_JUMP)  ; LAB_00553c25
    INC dword ptr [ESP + 0x94]          ; 00553c1c
    JMP 0x00553c0a                      ; 00553c23
        ;   XREF to: 00553c0a (UNCONDITIONAL_JUMP)  ; LAB_00553c0a
    XOR ESI,ESI                         ; 00553c25
        ;   Label: LAB_00553c25
    TEST EDX,EDX                        ; 00553c27
    JLE 0x00553c92                      ; 00553c29
        ;   XREF to: 00553c92 (CONDITIONAL_JUMP)  ; LAB_00553c92
    MOV EBX,dword ptr [ESP + 0x94]      ; 00553c2b
        ;   Label: LAB_00553c2b
    MOV EDX,ESI                         ; 00553c32
    XOR ECX,ECX                         ; 00553c34
    XOR EAX,EAX                         ; 00553c36
    TEST EBX,EBX                        ; 00553c38
    JLE 0x00553c53                      ; 00553c3a
        ;   XREF to: 00553c53 (CONDITIONAL_JUMP)  ; LAB_00553c53
    MOV EBX,EDX                         ; 00553c3c
        ;   Label: LAB_00553c3c
    ADD EAX,EAX                         ; 00553c3e
    AND EBX,0x1                         ; 00553c40
    INC ECX                             ; 00553c43
    OR EAX,EBX                          ; 00553c44
    MOV EBX,dword ptr [ESP + 0x94]      ; 00553c46
    SAR EDX,0x1                         ; 00553c4d
    CMP ECX,EBX                         ; 00553c4f
    JL 0x00553c3c                       ; 00553c51
        ;   XREF to: 00553c3c (CONDITIONAL_JUMP)  ; LAB_00553c3c
    FLD float ptr [EDI]                 ; 00553c53
        ;   Label: LAB_00553c53
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00553c55
    SHL EAX,0x2                         ; 00553c5c
    MOV EBX,dword ptr [ESP + 0x8c]      ; 00553c5f
    FSTP float ptr [EDX + EAX*0x1]      ; 00553c66
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00553c69
    LEA ECX,[ESI*0x4 + 0x0]             ; 00553c70
    ADD EAX,EDX                         ; 00553c77
    TEST EBX,EBX                        ; 00553c79
    JNZ 0x005540ba                      ; 00553c7b
        ;   XREF to: 005540ba (CONDITIONAL_JUMP)  ; LAB_005540ba
    MOV dword ptr [EAX],EBX             ; 00553c81
        ;   Label: LAB_00553c81
    MOV EAX,dword ptr [ESP + 0x98]      ; 00553c83
    INC ESI                             ; 00553c8a
    ADD EDI,0x4                         ; 00553c8b
    CMP ESI,EAX                         ; 00553c8e
    JL 0x00553c2b                       ; 00553c90
        ;   XREF to: 00553c2b (CONDITIONAL_JUMP)  ; LAB_00553c2b
    MOV EDX,0x2                         ; 00553c92
        ;   Label: LAB_00553c92
    MOV ECX,dword ptr [ESP + 0x98]      ; 00553c97
    MOV dword ptr [ESP + 0x90],EDX      ; 00553c9e
    CMP ECX,EDX                         ; 00553ca5
    JL 0x00553efb                       ; 00553ca7
        ;   XREF to: 00553efb (CONDITIONAL_JUMP)  ; LAB_00553efb
    MOV EAX,dword ptr [ESP + 0x90]      ; 00553cad
        ;   Label: LAB_00553cad
    MOV EDX,EAX                         ; 00553cb4
    SAR EDX,0x1f                        ; 00553cb6
    SUB EAX,EDX                         ; 00553cb9
    SAR EAX,0x1                         ; 00553cbb
    MOV dword ptr [ESP + 0xb0],EAX      ; 00553cbd
    MOV dword ptr [ESP + 0xa8],EAX      ; 00553cc4
    FILD dword ptr [ESP + 0xb0]         ; 00553ccb
    FDIVR float ptr [0x005e93ae]        ; 00553cd2 | DAT_005e93ae
    FLD ST0                             ; 00553cd8
    FSINCOS                             ; 00553cda
    FXCH ST2                            ; 00553cdc
    FLD double ptr [0x005e93a6]         ; 00553cde | DAT_005e93a6
    FXCH                                ; 00553ce4
    FMUL ST1                            ; 00553ce6
    FLD ST0                             ; 00553ce8
    FSIN                                ; 00553cea
    FXCH                                ; 00553cec
    FCOS                                ; 00553cee
    FXCH ST4                            ; 00553cf0
    FSTP double ptr [ESP + 0x78]        ; 00553cf2
    MOV EAX,dword ptr [ESP + 0x78]      ; 00553cf6
    MOV dword ptr [ESP + 0x20],EAX      ; 00553cfa
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00553cfe
    MOV dword ptr [ESP + 0x24],EAX      ; 00553d02
    FLD double ptr [ESP + 0x20]         ; 00553d06
    FMULP ST2                           ; 00553d0a
    MOV EDX,dword ptr [ESP + 0x98]      ; 00553d0c
    FXCH ST3                            ; 00553d13
    FSTP double ptr [ESP + 0x78]        ; 00553d15
    MOV EAX,dword ptr [ESP + 0x78]      ; 00553d19
    FXCH                                ; 00553d1d
    FSTP double ptr [ESP + 0x10]        ; 00553d1f
    MOV dword ptr [ESP + 0x28],EAX      ; 00553d23
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00553d27
    FXCH                                ; 00553d2b
    FSTP double ptr [ESP]               ; 00553d2d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00553d30
    XOR EAX,EAX                         ; 00553d34
    FSTP double ptr [ESP + 0x18]        ; 00553d36
    MOV dword ptr [ESP + 0xa4],EAX      ; 00553d3a
    TEST EDX,EDX                        ; 00553d41
    JLE 0x00553edc                      ; 00553d43
        ;   XREF to: 00553edc (CONDITIONAL_JUMP)  ; LAB_00553edc
    MOV EAX,dword ptr [ESP + 0x20]      ; 00553d49
        ;   Label: LAB_00553d49
    MOV dword ptr [ESP + 0x50],EAX      ; 00553d4d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00553d51
    MOV dword ptr [ESP + 0x54],EAX      ; 00553d55
    MOV EAX,dword ptr [ESP + 0x28]      ; 00553d59
    MOV dword ptr [ESP + 0x58],EAX      ; 00553d5d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00553d61
    MOV dword ptr [ESP + 0x5c],EAX      ; 00553d65
    MOV EAX,dword ptr [ESP + 0x10]      ; 00553d69
    MOV dword ptr [ESP + 0x38],EAX      ; 00553d6d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00553d71
    MOV dword ptr [ESP + 0x3c],EAX      ; 00553d75
    MOV EAX,dword ptr [ESP]             ; 00553d79
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00553d7c
    MOV dword ptr [ESP + 0x40],EAX      ; 00553d83
    MOV EAX,dword ptr [ESP + 0x4]       ; 00553d87
    XOR ESI,ESI                         ; 00553d8b
    MOV dword ptr [ESP + 0x44],EAX      ; 00553d8d
    TEST EDI,EDI                        ; 00553d91
    JLE 0x00553eb6                      ; 00553d93
        ;   XREF to: 00553eb6 (CONDITIONAL_JUMP)  ; LAB_00553eb6
    FLD double ptr [ESP + 0x18]         ; 00553d99
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00553d9d
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00553da4
    LEA EBX,[EDI*0x4 + 0x0]             ; 00553dab
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00553db2
    MOV dword ptr [ESP + 0xb0],EBX      ; 00553db9
    MOV EBX,dword ptr [ESP + 0xa0]      ; 00553dc0
    MOV EDI,dword ptr [ESP + 0xb0]      ; 00553dc7
    SHL ECX,0x2                         ; 00553dce
    ADD EBX,EDI                         ; 00553dd1
    MOV EDI,dword ptr [ESP + 0x9c]      ; 00553dd3
    ADD EAX,ECX                         ; 00553dda
    ADD EDI,dword ptr [ESP + 0xb0]      ; 00553ddc
    ADD EDX,ECX                         ; 00553de3
    ADD EDI,ECX                         ; 00553de5
    ADD EBX,ECX                         ; 00553de7
    MOV ECX,EDI                         ; 00553de9
    FLD ST0                             ; 00553deb
        ;   Label: LAB_00553deb
    FMUL double ptr [ESP + 0x50]        ; 00553ded
    FLD ST1                             ; 00553df1
    FMUL double ptr [ESP + 0x38]        ; 00553df3
    FXCH                                ; 00553df7
    FSUB double ptr [ESP + 0x58]        ; 00553df9
    FLD float ptr [ECX]                 ; 00553dfd
    FXCH                                ; 00553dff
    FST double ptr [ESP + 0x48]         ; 00553e01
    FMUL ST1                            ; 00553e05
    FXCH ST2                            ; 00553e07
    FSUB double ptr [ESP + 0x40]        ; 00553e09
    FLD float ptr [EBX]                 ; 00553e0d
    FLD double ptr [ESP + 0x48]         ; 00553e0f
    FMUL ST1                            ; 00553e13
    FXCH ST2                            ; 00553e15
    FST double ptr [ESP + 0x30]         ; 00553e17
    FMULP                               ; 00553e1b
    FLD double ptr [ESP + 0x30]         ; 00553e1d
    FMULP ST3                           ; 00553e21
    FLD float ptr [EDX]                 ; 00553e23
    MOV EDI,dword ptr [ESP + 0x50]      ; 00553e25
    ADD EAX,0x4                         ; 00553e29
    ADD EDX,0x4                         ; 00553e2c
    MOV dword ptr [ESP + 0x58],EDI      ; 00553e2f
    MOV EDI,dword ptr [ESP + 0x54]      ; 00553e33
    ADD EBX,0x4                         ; 00553e37
    MOV dword ptr [ESP + 0x5c],EDI      ; 00553e3a
    MOV EDI,dword ptr [ESP + 0x48]      ; 00553e3e
    ADD ECX,0x4                         ; 00553e42
    MOV dword ptr [ESP + 0x50],EDI      ; 00553e45
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00553e49
    INC ESI                             ; 00553e4d
    MOV dword ptr [ESP + 0x54],EDI      ; 00553e4e
    FXCH                                ; 00553e52
    FSUBP ST4,ST0                       ; 00553e54
    MOV EDI,dword ptr [ESP + 0x38]      ; 00553e56
    FXCH ST2                            ; 00553e5a
    FADDP                               ; 00553e5c
    FXCH                                ; 00553e5e
    FSUB ST0,ST2                        ; 00553e60
    MOV dword ptr [ESP + 0x40],EDI      ; 00553e62
    FSTP float ptr [ECX + -0x4]         ; 00553e66
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00553e69
    FLD float ptr [EAX + -0x4]          ; 00553e6d
    MOV dword ptr [ESP + 0x44],EDI      ; 00553e70
    FSUB ST0,ST1                        ; 00553e74
    MOV EDI,dword ptr [ESP + 0x30]      ; 00553e76
    FSTP float ptr [EBX + -0x4]         ; 00553e7a
    FLD float ptr [EDX + -0x4]          ; 00553e7d
    MOV dword ptr [ESP + 0x38],EDI      ; 00553e80
    FLD ST0                             ; 00553e84
    MOV EDI,dword ptr [ESP + 0x34]      ; 00553e86
    FADDP ST3,ST0                       ; 00553e8a
    MOV dword ptr [ESP + 0x3c],EDI      ; 00553e8c
    FXCH ST2                            ; 00553e90
    FSTP ST2                            ; 00553e92
    FXCH                                ; 00553e94
    FSTP float ptr [EDX + -0x4]         ; 00553e96
    FLD float ptr [EAX + -0x4]          ; 00553e99
    FADD ST1,ST0                        ; 00553e9c
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00553e9e
    FXCH                                ; 00553ea5
    FSTP ST1                            ; 00553ea7
    FSTP float ptr [EAX + -0x4]         ; 00553ea9
    CMP ESI,EDI                         ; 00553eac
    JL 0x00553deb                       ; 00553eae
        ;   XREF to: 00553deb (CONDITIONAL_JUMP)  ; LAB_00553deb
    FSTP ST0                            ; 00553eb4
    MOV EAX,dword ptr [ESP + 0x90]      ; 00553eb6
        ;   Label: LAB_00553eb6
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00553ebd
    ADD ECX,EAX                         ; 00553ec4
    MOV EBX,dword ptr [ESP + 0x98]      ; 00553ec6
    MOV dword ptr [ESP + 0xa4],ECX      ; 00553ecd
    CMP ECX,EBX                         ; 00553ed4
    JL 0x00553d49                       ; 00553ed6
        ;   XREF to: 00553d49 (CONDITIONAL_JUMP)  ; LAB_00553d49
    MOV ESI,dword ptr [ESP + 0x90]      ; 00553edc
        ;   Label: LAB_00553edc
    ADD ESI,ESI                         ; 00553ee3
    MOV EDI,dword ptr [ESP + 0x98]      ; 00553ee5
    MOV dword ptr [ESP + 0x90],ESI      ; 00553eec
    CMP ESI,EDI                         ; 00553ef3
    JLE 0x00553cad                      ; 00553ef5
        ;   XREF to: 00553cad (CONDITIONAL_JUMP)  ; LAB_00553cad
    CALL FUN_00552cb0                   ; 00553efb
        ;   XREF to: 00552cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00552cb0()
        ;   Label: LAB_00553efb
    MOV EDX,dword ptr [EBP + 0x14]      ; 00553f00
    MOV dword ptr [EDX*0x4 + 0x263cef0],EAX ; 00553f03
    MOV EAX,[0x02648e98]                ; 00553f0a | DAT_02648e98
        ;   Label: LAB_00553f0a
    MOV EDX,EAX                         ; 00553f0f
    SAR EDX,0x1f                        ; 00553f11
    SUB EAX,EDX                         ; 00553f14
    SAR EAX,0x1                         ; 00553f16
    LEA EDI,[EAX + 0x1]                 ; 00553f18
    MOV dword ptr [ESP + 0xb0],EDI      ; 00553f1b
    FLD float ptr [EBP + 0x18]          ; 00553f22
    FILD dword ptr [ESP + 0xb0]         ; 00553f25
    FSTP float ptr [ESP + 0xb0]         ; 00553f2c
    FMUL float ptr [ESP + 0xb0]         ; 00553f33
    FILD dword ptr [0x0061bca0]         ; 00553f3a | DAT_0061bca0
    FDIVP                               ; 00553f40
    SUB ESP,0x8                         ; 00553f42
    FSTP double ptr [ESP]               ; 00553f45
    CALL FUN_005b84d0                   ; 00553f48
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b84d0()
    MOV dword ptr [ESP + 0x80],EAX      ; 00553f4d
    MOV dword ptr [ESP + 0x84],EDX      ; 00553f54
    FLD double ptr [ESP + 0x80]         ; 00553f5b
    ADD ESP,0x8                         ; 00553f62
    FLD float ptr [EBP + 0x1c]          ; 00553f65
    FMUL float ptr [ESP + 0xb0]         ; 00553f68
    FILD dword ptr [0x0061bca0]         ; 00553f6f | DAT_0061bca0
    FDIVP                               ; 00553f75
    FXCH                                ; 00553f77
    CALL FUN_005b7ff0                   ; 00553f79
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x88]        ; 00553f7e
    SUB ESP,0x8                         ; 00553f85
    FSTP double ptr [ESP]               ; 00553f88
    CALL FUN_005b84d0                   ; 00553f8b
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b84d0()
    MOV dword ptr [ESP + 0x80],EAX      ; 00553f90
    MOV dword ptr [ESP + 0x84],EDX      ; 00553f97
    FLD double ptr [ESP + 0x80]         ; 00553f9e
    ADD ESP,0x8                         ; 00553fa5
    CALL FUN_005b7ff0                   ; 00553fa8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    MOV EAX,dword ptr [ESP + 0x88]      ; 00553fad
    FISTP dword ptr [ESP + 0x84]        ; 00553fb4
    CMP EDI,EAX                         ; 00553fbb
    JLE 0x005540c4                      ; 00553fbd
        ;   XREF to: 005540c4 (CONDITIONAL_JUMP)  ; LAB_005540c4
    MOV EDX,dword ptr [ESP + 0x84]      ; 00553fc3
    TEST EDX,EDX                        ; 00553fca
    JLE 0x005540c4                      ; 00553fcc
        ;   XREF to: 005540c4 (CONDITIONAL_JUMP)  ; LAB_005540c4
    CMP EDI,EDX                         ; 00553fd2
    JG 0x00553fdd                       ; 00553fd4
        ;   XREF to: 00553fdd (CONDITIONAL_JUMP)  ; LAB_00553fdd
    MOV dword ptr [ESP + 0x84],EDI      ; 00553fd6
    CMP dword ptr [ESP + 0x88],0x0      ; 00553fdd
        ;   Label: LAB_00553fdd
    JL 0x005540db                       ; 00553fe5
        ;   XREF to: 005540db (CONDITIONAL_JUMP)  ; LAB_005540db
    MOV ESI,dword ptr [ESP + 0x84]      ; 00553feb
        ;   Label: LAB_00553feb
    SUB ESI,dword ptr [ESP + 0x88]      ; 00553ff2
    CMP ESI,0x1                         ; 00553ff9
    JGE 0x00554019                      ; 00553ffc
        ;   XREF to: 00554019 (CONDITIONAL_JUMP)  ; LAB_00554019
    MOV EDX,dword ptr [ESP + 0x84]      ; 00553ffe
    MOV ESI,0x1                         ; 00554005
    CMP EDI,EDX                         ; 0055400a
    JG 0x00554019                       ; 0055400c
        ;   XREF to: 00554019 (CONDITIONAL_JUMP)  ; LAB_00554019
    MOV EAX,EDI                         ; 0055400e
    SUB EAX,ESI                         ; 00554010
    MOV dword ptr [ESP + 0x88],EAX      ; 00554012
    XOR ECX,ECX                         ; 00554019
        ;   Label: LAB_00554019
    XOR EBX,EBX                         ; 0055401b
    MOV dword ptr [ESP + 0x8],ECX       ; 0055401d
    MOV dword ptr [ESP + 0xc],ECX       ; 00554021
    TEST ESI,ESI                        ; 00554025
    JLE 0x00554077                      ; 00554027
        ;   XREF to: 00554077 (CONDITIONAL_JUMP)  ; LAB_00554077
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554029
    MOV EDX,dword ptr [EAX*0x4 + 0x2648eec] ; 0055402c
    MOV dword ptr [ESP + 0x80],EDX      ; 00554033
    MOV EDX,dword ptr [EAX*0x4 + 0x2648f0c] ; 0055403a
    MOV EAX,dword ptr [ESP + 0x88]      ; 00554041
    FLD double ptr [ESP + 0x8]          ; 00554048
    SHL EAX,0x2                         ; 0055404c
    MOV ECX,dword ptr [ESP + 0x80]      ; 0055404f
    ADD EDX,EAX                         ; 00554056
    ADD ECX,EAX                         ; 00554058
    FLD float ptr [ECX]                 ; 0055405a
        ;   Label: LAB_0055405a
    FMUL ST0                            ; 0055405c
    FLD float ptr [EDX]                 ; 0055405e
    FMUL ST0                            ; 00554060
    FADDP                               ; 00554062
    FSQRT                               ; 00554064
    ADD EDX,0x4                         ; 00554066
    ADD ECX,0x4                         ; 00554069
    INC EBX                             ; 0055406c
    FADDP                               ; 0055406d
    CMP EBX,ESI                         ; 0055406f
    JL 0x0055405a                       ; 00554071
        ;   XREF to: 0055405a (CONDITIONAL_JUMP)  ; LAB_0055405a
    FSTP double ptr [ESP + 0x8]         ; 00554073
    MOV dword ptr [ESP + 0xb0],ESI      ; 00554077
        ;   Label: LAB_00554077
    FILD dword ptr [ESP + 0xb0]         ; 0055407e
    FDIVR double ptr [ESP + 0x8]        ; 00554085
    MOV dword ptr [ESP + 0xb0],EDI      ; 00554089
    FILD dword ptr [ESP + 0xb0]         ; 00554090
    FDIVP                               ; 00554097
    FSQRT                               ; 00554099
    FMUL double ptr [0x005e93a6]        ; 0055409b | DAT_005e93a6
    FST double ptr [ESP + 0x8]          ; 005540a1
    FSTP float ptr [ESP + 0xac]         ; 005540a5
    MOV EAX,dword ptr [ESP + 0xac]      ; 005540ac
    MOV ESP,EBP                         ; 005540b3
    POP EBP                             ; 005540b5
    POP EDI                             ; 005540b6
    POP ESI                             ; 005540b7
    POP EBX                             ; 005540b8
    RET                                 ; 005540b9
    MOV EDX,EBX                         ; 005540ba
        ;   Label: LAB_005540ba
    MOV EBX,dword ptr [ECX + EDX*0x1]   ; 005540bc
    JMP 0x00553c81                      ; 005540bf
        ;   XREF to: 00553c81 (UNCONDITIONAL_JUMP)  ; LAB_00553c81
    XOR ESI,ESI                         ; 005540c4
        ;   Label: LAB_005540c4
    MOV dword ptr [ESP + 0xac],ESI      ; 005540c6
    MOV EAX,dword ptr [ESP + 0xac]      ; 005540cd
    MOV ESP,EBP                         ; 005540d4
    POP EBP                             ; 005540d6
    POP EDI                             ; 005540d7
    POP ESI                             ; 005540d8
    POP EBX                             ; 005540d9
    RET                                 ; 005540da
    XOR ESI,ESI                         ; 005540db
        ;   Label: LAB_005540db
    MOV dword ptr [ESP + 0x88],ESI      ; 005540dd
    JMP 0x00553feb                      ; 005540e4
        ;   XREF to: 00553feb (UNCONDITIONAL_JUMP)  ; LAB_00553feb

