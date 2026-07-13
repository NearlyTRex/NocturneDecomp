; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0050ec80(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   FUN_0040a140 at 0040a18c
;   FUN_0040d930 at 0040d9ab
;   FUN_0040d9f0 at 0040da81
;   FUN_004876d0 at 00487725
;   FUN_004af730 at 004af75b
;   FUN_0053c800 at 0053ce36
;   FUN_00546e10 at 00547456
;
; Referenced Globals:
;   string s_..\\core\\setcolid.cpp_0059097d
;   string s_info.keyFramedModelInstancePtr_!_00590992
;   string s_..\\core\\setcolid.cpp_005909de
;   string s_Invalid_collision_type!_005909f3
;   undefined4 DAT_00590a0d
;   undefined4 DAT_00590a11
;   undefined4 DAT_005993b0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01fba938
;   undefined4 DAT_02dc9e60
;
; Called Functions:
;   FUN_0040a200
;   FUN_0040a240
;   FUN_0040a290
;   FUN_0040a540
;   FUN_0040d890
;   FUN_0041cc70
;   FUN_0041dc20
;   FUN_00453f00
;   FUN_00454530
;   FUN_00468580
;   FUN_004687e0
;   FUN_0046c5b0
;   FUN_0046d110
;   FUN_004c8440
;   FUN_005103f0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ec80
        ;   Label: FUN_0050ec80
    PUSH ESI                            ; 0050ec81
    PUSH EDI                            ; 0050ec82
    PUSH EBP                            ; 0050ec83
    SUB ESP,0x2f8                       ; 0050ec84
    MOV EBX,dword ptr [ESP + 0x310]     ; 0050ec8a
    FLD float ptr [ESP + 0x314]         ; 0050ec91
    MOV ESI,dword ptr [ESP + 0x30c]     ; 0050ec98
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0050ec9f
    FLDZ                                ; 0050eca6
    ADD ESI,0x14cd4c                    ; 0050eca8
    ADD EDX,0x14cd40                    ; 0050ecae
    FCOMPP                              ; 0050ecb4
    FNSTSW AX                           ; 0050ecb6
    SAHF                                ; 0050ecb8
    JC 0x0050ef15                       ; 0050ecb9
        ;   XREF to: 0050ef15 (CONDITIONAL_JUMP)  ; LAB_0050ef15
    PUSH EDX                            ; 0050ecbf
    PUSH ESI                            ; 0050ecc0
    PUSH EBX                            ; 0050ecc1
    PUSH 0x1fba938                      ; 0050ecc2 | DAT_01fba938
    CALL FUN_00468580                   ; 0050ecc7
        ;   XREF to: 00468580 (UNCONDITIONAL_CALL)  ; undefined FUN_00468580()
    MOV dword ptr [ESP + 0x304],EAX     ; 0050eccc
    FLD float ptr [ESP + 0x304]         ; 0050ecd3
    ADD ESP,0x10                        ; 0050ecda
    FSTP float ptr [ESP + 0x2e0]        ; 0050ecdd
        ;   Label: LAB_0050ecdd
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0050ece4
    CMP dword ptr [EAX + 0x14cd4c],0x0  ; 0050eceb
    JNZ 0x0050ed07                      ; 0050ecf2
        ;   XREF to: 0050ed07 (CONDITIONAL_JUMP)  ; LAB_0050ed07
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0050ecf4
    MOV EAX,dword ptr [EAX + 0x15f294]  ; 0050ecfb
    MOV dword ptr [EDX + 0x14cd4c],EAX  ; 0050ed01
    LEA EAX,[ESP + 0x220]               ; 0050ed07
        ;   Label: LAB_0050ed07
    CMP EAX,EBX                         ; 0050ed0e
    JZ 0x0050ed2f                       ; 0050ed10
        ;   XREF to: 0050ed2f (CONDITIONAL_JUMP)  ; LAB_0050ed2f
    MOV EAX,dword ptr [EBX]             ; 0050ed12
    MOV dword ptr [ESP + 0x220],EAX     ; 0050ed14
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050ed1b
    MOV dword ptr [ESP + 0x224],EAX     ; 0050ed1e
    MOV EAX,dword ptr [EBX + 0x8]       ; 0050ed25
    MOV dword ptr [ESP + 0x228],EAX     ; 0050ed28
    FLD float ptr [ESP + 0x224]         ; 0050ed2f
        ;   Label: LAB_0050ed2f
    FADD float ptr [0x00590a0d]         ; 0050ed36 | DAT_00590a0d
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0050ed3c
    FSTP float ptr [ESP + 0x224]        ; 0050ed43
    MOV dword ptr [EAX + 0x14cd5c],0x0  ; 0050ed4a
    MOV dword ptr [EAX + 0x14cd60],0xffffffff ; 0050ed54
    MOV ECX,dword ptr [EAX + 0x15f2ac]  ; 0050ed5e
    MOV dword ptr [EAX + 0x14cd64],0xffffffff ; 0050ed64
    TEST ECX,ECX                        ; 0050ed6e
    JL 0x0050ef03                       ; 0050ed70
        ;   XREF to: 0050ef03 (CONDITIONAL_JUMP)  ; LAB_0050ef03
    LEA EDX,[ESP + 0x214]               ; 0050ed76
    LEA EAX,[ESP + 0x220]               ; 0050ed7d
    CMP EDX,EAX                         ; 0050ed84
    JZ 0x0050edb2                       ; 0050ed86
        ;   XREF to: 0050edb2 (CONDITIONAL_JUMP)  ; LAB_0050edb2
    MOV EAX,dword ptr [ESP + 0x220]     ; 0050ed88
    MOV dword ptr [ESP + 0x214],EAX     ; 0050ed8f
    MOV EAX,dword ptr [ESP + 0x224]     ; 0050ed96
    MOV dword ptr [ESP + 0x218],EAX     ; 0050ed9d
    MOV EAX,dword ptr [ESP + 0x228]     ; 0050eda4
    MOV dword ptr [ESP + 0x21c],EAX     ; 0050edab
    FLD float ptr [ESP + 0x208]         ; 0050edb2
        ;   Label: LAB_0050edb2
    FLD float ptr [ESP + 0x210]         ; 0050edb9
    FLD float ptr [ESP + 0x214]         ; 0050edc0
    FLD float ptr [ESP + 0x21c]         ; 0050edc7
    LEA EAX,[ESP + 0x214]               ; 0050edce
    LEA EDX,[ESP + 0x208]               ; 0050edd5
    FXCH ST3                            ; 0050eddc
    FLD float ptr [ESP + 0x314]         ; 0050edde
    FXCH                                ; 0050ede5
    FSUB ST0,ST1                        ; 0050ede7
    FXCH ST3                            ; 0050ede9
    FSUB ST0,ST1                        ; 0050edeb
    FXCH ST2                            ; 0050eded
    FADD ST0,ST1                        ; 0050edef
    FXCH ST4                            ; 0050edf1
    FADDP                               ; 0050edf3
    FXCH                                ; 0050edf5
    FSTP float ptr [ESP + 0x210]        ; 0050edf7
    FXCH ST2                            ; 0050edfe
    FSTP float ptr [ESP + 0x214]        ; 0050ee00
    FXCH                                ; 0050ee07
    FSTP float ptr [ESP + 0x21c]        ; 0050ee09
    FSTP float ptr [ESP + 0x208]        ; 0050ee10
    CMP EDX,EAX                         ; 0050ee17
    JZ 0x0050ee45                       ; 0050ee19
        ;   XREF to: 0050ee45 (CONDITIONAL_JUMP)  ; LAB_0050ee45
    MOV EAX,dword ptr [ESP + 0x214]     ; 0050ee1b
    MOV dword ptr [ESP + 0x208],EAX     ; 0050ee22
    MOV EAX,dword ptr [ESP + 0x218]     ; 0050ee29
    MOV dword ptr [ESP + 0x20c],EAX     ; 0050ee30
    MOV EAX,dword ptr [ESP + 0x21c]     ; 0050ee37
    MOV dword ptr [ESP + 0x210],EAX     ; 0050ee3e
    FLD float ptr [ESP + 0x20c]         ; 0050ee45
        ;   Label: LAB_0050ee45
    LEA EAX,[ESP + 0x1b0]               ; 0050ee4c
    FADD float ptr [0x00590a11]         ; 0050ee53 | DAT_00590a11
    PUSH EAX                            ; 0050ee59
    FSTP float ptr [ESP + 0x210]        ; 0050ee5a
    CALL FUN_00511990                   ; 0050ee61
        ;   XREF to: 00511990 (UNCONDITIONAL_CALL)  ; undefined FUN_00511990()
    ADD ESP,0x4                         ; 0050ee66
    XOR EBX,EBX                         ; 0050ee69
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0050ee6b
    MOV dword ptr [ESP + 0x1b0],EBX     ; 0050ee72
    MOV EDI,dword ptr [EAX + 0x1569c0]  ; 0050ee79
    MOV dword ptr [ESP + 0x2ec],EBX     ; 0050ee7f
    TEST EDI,EDI                        ; 0050ee86
    JLE 0x0050eeee                      ; 0050ee88
        ;   XREF to: 0050eeee (CONDITIONAL_JUMP)  ; LAB_0050eeee
    LEA EBP,[EAX + 0x14cd40]            ; 0050ee8a
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0050ee90
    MOV EDI,dword ptr [ESP + 0x2f0]     ; 0050ee97
        ;   Label: LAB_0050ee97
    MOV EDI,dword ptr [EDI + 0x1569c4]  ; 0050ee9e
    PUSH EDI                            ; 0050eea4
    MOV ESI,dword ptr [ESP + 0x310]     ; 0050eea5
    PUSH ESI                            ; 0050eeac
    CALL FUN_005103f0                   ; 0050eead
        ;   XREF to: 005103f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005103f0()
    ADD ESP,0x8                         ; 0050eeb2
    TEST EAX,EAX                        ; 0050eeb5
    JZ 0x0050ef3f                       ; 0050eeb7
        ;   XREF to: 0050ef3f (CONDITIONAL_JUMP)  ; LAB_0050ef3f
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 0050eebd
        ;   Label: LAB_0050eebd
    MOV EDX,dword ptr [ESP + 0x2ec]     ; 0050eec4
    ADD EAX,0x4                         ; 0050eecb
    INC EDX                             ; 0050eece
    MOV dword ptr [ESP + 0x2f0],EAX     ; 0050eecf
    MOV dword ptr [ESP + 0x2ec],EDX     ; 0050eed6
    MOV EAX,EDX                         ; 0050eedd
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0050eedf
    CMP EAX,dword ptr [EDX + 0x1569c0]  ; 0050eee6
    JL 0x0050ee97                       ; 0050eeec
        ;   XREF to: 0050ee97 (CONDITIONAL_JUMP)  ; LAB_0050ee97
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0050eeee
        ;   Label: LAB_0050eeee
    MOV EBX,dword ptr [EAX + 0x14cd5c]  ; 0050eef5
    TEST EBX,EBX                        ; 0050eefb
    JNZ 0x0050f8e4                      ; 0050eefd
        ;   XREF to: 0050f8e4 (CONDITIONAL_JUMP)  ; LAB_0050f8e4
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 0050ef03
        ;   Label: LAB_0050ef03
    ADD ESP,0x2f8                       ; 0050ef0a
    POP EBP                             ; 0050ef10
    POP EDI                             ; 0050ef11
    POP ESI                             ; 0050ef12
    POP EBX                             ; 0050ef13
    RET                                 ; 0050ef14
    PUSH EDX                            ; 0050ef15
        ;   Label: LAB_0050ef15
    PUSH ESI                            ; 0050ef16
    PUSH dword ptr [ESP + 0x31c]        ; 0050ef17
    PUSH EBX                            ; 0050ef1e
    PUSH 0x1fba938                      ; 0050ef1f | DAT_01fba938
    CALL FUN_004687e0                   ; 0050ef24
        ;   XREF to: 004687e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004687e0()
    MOV dword ptr [ESP + 0x308],EAX     ; 0050ef29
    FLD float ptr [ESP + 0x308]         ; 0050ef30
    ADD ESP,0x14                        ; 0050ef37
    JMP 0x0050ecdd                      ; 0050ef3a
        ;   XREF to: 0050ecdd (UNCONDITIONAL_JUMP)  ; LAB_0050ecdd
    MOV EAX,[0x02dc9e60]                ; 0050ef3f | DAT_02dc9e60
        ;   Label: LAB_0050ef3f
    PUSH EAX                            ; 0050ef44
    PUSH EDI                            ; 0050ef45
    CALL FUN_0040d890                   ; 0050ef46
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 0050ef4b
    TEST EAX,EAX                        ; 0050ef4e
    JNZ 0x0050eebd                      ; 0050ef50
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0050ef56
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0050ef5d
    LEA EAX,[ESP + 0x1b0]               ; 0050ef64
    PUSH EAX                            ; 0050ef6b
    MOV EDX,dword ptr [EDI + 0x14c]     ; 0050ef6c
    PUSH EDI                            ; 0050ef72
    CALL dword ptr [EDX + 0x34]         ; 0050ef73
    ADD ESP,0x8                         ; 0050ef76
    MOV EBX,EAX                         ; 0050ef79
    TEST EAX,EAX                        ; 0050ef7b
    JZ 0x0050eebd                       ; 0050ef7d
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    PUSH EAX                            ; 0050ef83
    LEA EAX,[ESP + 0x1b4]               ; 0050ef84
    PUSH EAX                            ; 0050ef8b
    LEA EAX,[ESP + 0x1f8]               ; 0050ef8c
    PUSH EAX                            ; 0050ef93
    PUSH EDI                            ; 0050ef94
    CALL FUN_0040a540                   ; 0050ef95
        ;   XREF to: 0040a540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a540()
    ADD ESP,0x10                        ; 0050ef9a
    PUSH EAX                            ; 0050ef9d
    LEA EAX,[ESP + 0x20c]               ; 0050ef9e
    PUSH EAX                            ; 0050efa5
    CALL FUN_0041dc20                   ; 0050efa6
        ;   XREF to: 0041dc20 (UNCONDITIONAL_CALL)  ; undefined FUN_0041dc20()
    ADD ESP,0x8                         ; 0050efab
    TEST EAX,EAX                        ; 0050efae
    JZ 0x0050eebd                       ; 0050efb0
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    CMP dword ptr [ESI + 0x15f2f4],0x0  ; 0050efb6
    JZ 0x0050f6c8                       ; 0050efbd
        ;   XREF to: 0050f6c8 (CONDITIONAL_JUMP)  ; LAB_0050f6c8
    CMP EBX,0x2                         ; 0050efc3
        ;   Label: LAB_0050efc3
    JNC 0x0050f8ad                      ; 0050efc6
        ;   XREF to: 0050f8ad (CONDITIONAL_JUMP)  ; LAB_0050f8ad
    CMP EBX,0x1                         ; 0050efcc
    JNZ 0x0050f8bc                      ; 0050efcf
        ;   XREF to: 0050f8bc (CONDITIONAL_JUMP)  ; LAB_0050f8bc
    PUSH 0x5993b0                       ; 0050efd5 | DAT_005993b0
    PUSH 0x8                            ; 0050efda
    LEA EAX,[ESP + 0x8]                 ; 0050efdc
    PUSH EAX                            ; 0050efe0
    CALL FUN_005644a7                   ; 0050efe1
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 0050efe6
    LEA EDX,[ESP + 0x1d8]               ; 0050efe9
    PUSH EDX                            ; 0050eff0
    MOV EAX,dword ptr [EDI + 0x14c]     ; 0050eff1
    PUSH EDI                            ; 0050eff7
    LEA EBX,[ESP + 0x8]                 ; 0050eff8
    XOR ESI,ESI                         ; 0050effc
    CALL dword ptr [EAX + 0x14]         ; 0050effe
    ADD ESP,0x8                         ; 0050f001
    PUSH ESI                            ; 0050f004
        ;   Label: LAB_0050f004
    LEA EAX,[ESP + 0x29c]               ; 0050f005
    PUSH EAX                            ; 0050f00c
    LEA EAX,[ESP + 0x1e0]               ; 0050f00d
    PUSH EAX                            ; 0050f014
    CALL FUN_0041cc70                   ; 0050f015
        ;   XREF to: 0041cc70 (UNCONDITIONAL_CALL)  ; undefined FUN_0041cc70()
    ADD ESP,0xc                         ; 0050f01a
    PUSH EAX                            ; 0050f01d
    LEA EAX,[ESP + 0x290]               ; 0050f01e
    PUSH EAX                            ; 0050f025
    PUSH EDI                            ; 0050f026
    CALL FUN_0040a240                   ; 0050f027
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 0050f02c
    CMP EBX,EAX                         ; 0050f02f
    JZ 0x0050f043                       ; 0050f031
        ;   XREF to: 0050f043 (CONDITIONAL_JUMP)  ; LAB_0050f043
    MOV EDX,dword ptr [EAX]             ; 0050f033
    MOV dword ptr [EBX],EDX             ; 0050f035
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050f037
    MOV dword ptr [EBX + 0x4],EDX       ; 0050f03a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050f03d
    MOV dword ptr [EBX + 0x8],EDX       ; 0050f040
    INC ESI                             ; 0050f043
        ;   Label: LAB_0050f043
    ADD EBX,0xc                         ; 0050f044
    CMP ESI,0x8                         ; 0050f047
    JL 0x0050f004                       ; 0050f04a
        ;   XREF to: 0050f004 (CONDITIONAL_JUMP)  ; LAB_0050f004
    LEA EAX,[ESP + 0x48]                ; 0050f04c
    PUSH EAX                            ; 0050f050
    LEA EAX,[ESP + 0x34]                ; 0050f051
    PUSH EAX                            ; 0050f055
    LEA EAX,[ESP + 0x8]                 ; 0050f056
    PUSH EAX                            ; 0050f05a
    LEA EAX,[ESP + 0xa4]                ; 0050f05b
    PUSH EAX                            ; 0050f062
    CALL FUN_0046c5b0                   ; 0050f063
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f068
    LEA EAX,[ESP + 0x2e0]               ; 0050f06b
    PUSH EAX                            ; 0050f072
    LEA EAX,[ESP + 0x224]               ; 0050f073
    PUSH dword ptr [ESP + 0x318]        ; 0050f07a
    PUSH EAX                            ; 0050f081
    LEA EAX,[ESP + 0xa4]                ; 0050f082
    PUSH EAX                            ; 0050f089
    CALL FUN_0046d110                   ; 0050f08a
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f08f
    MOV ESI,EAX                         ; 0050f092
    LEA EAX,[ESP + 0x18]                ; 0050f094
    PUSH EAX                            ; 0050f098
    LEA EAX,[ESP + 0x4c]                ; 0050f099
    PUSH EAX                            ; 0050f09d
    LEA EAX,[ESP + 0x8]                 ; 0050f09e
    PUSH EAX                            ; 0050f0a2
    LEA EAX,[ESP + 0xa4]                ; 0050f0a3
    PUSH EAX                            ; 0050f0aa
    CALL FUN_0046c5b0                   ; 0050f0ab
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f0b0
    LEA EAX,[ESP + 0x2e0]               ; 0050f0b3
    PUSH EAX                            ; 0050f0ba
    LEA EAX,[ESP + 0x224]               ; 0050f0bb
    PUSH dword ptr [ESP + 0x318]        ; 0050f0c2
    PUSH EAX                            ; 0050f0c9
    LEA EAX,[ESP + 0xa4]                ; 0050f0ca
    PUSH EAX                            ; 0050f0d1
    XOR EBX,EBX                         ; 0050f0d2
    CALL FUN_0046d110                   ; 0050f0d4
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f0d9
    OR ESI,EAX                          ; 0050f0dc
    JZ 0x0050f156                       ; 0050f0de
        ;   XREF to: 0050f156 (CONDITIONAL_JUMP)  ; LAB_0050f156
    FLD float ptr [ESP + 0xbc]          ; 0050f0e0
    FLD float ptr [ESP + 0xc0]          ; 0050f0e7
    FLD float ptr [ESP + 0xc4]          ; 0050f0ee
    LEA EAX,[ESP + 0x268]               ; 0050f0f5
    LEA EDX,[ESP + 0x2a4]               ; 0050f0fc
    FXCH ST2                            ; 0050f103
    FCHS                                ; 0050f105
    FXCH                                ; 0050f107
    FCHS                                ; 0050f109
    FXCH ST2                            ; 0050f10b
    FCHS                                ; 0050f10d
    FXCH ST2                            ; 0050f10f
    FSTP float ptr [ESP + 0x26c]        ; 0050f111
    FXCH                                ; 0050f118
    FSTP float ptr [ESP + 0x270]        ; 0050f11a
    FSTP float ptr [ESP + 0x268]        ; 0050f121
    CMP EDX,EAX                         ; 0050f128
    JZ 0x0050f156                       ; 0050f12a
        ;   XREF to: 0050f156 (CONDITIONAL_JUMP)  ; LAB_0050f156
    MOV EAX,dword ptr [ESP + 0x268]     ; 0050f12c
    MOV dword ptr [ESP + 0x2a4],EAX     ; 0050f133
    MOV EAX,dword ptr [ESP + 0x26c]     ; 0050f13a
    MOV dword ptr [ESP + 0x2a8],EAX     ; 0050f141
    MOV EAX,dword ptr [ESP + 0x270]     ; 0050f148
    MOV dword ptr [ESP + 0x2ac],EAX     ; 0050f14f
    LEA EAX,[ESP + 0x54]                ; 0050f156
        ;   Label: LAB_0050f156
    PUSH EAX                            ; 0050f15a
    LEA EAX,[ESP + 0x28]                ; 0050f15b
    PUSH EAX                            ; 0050f15f
    LEA EAX,[ESP + 0x14]                ; 0050f160
    PUSH EAX                            ; 0050f164
    LEA EAX,[ESP + 0x14c]               ; 0050f165
    PUSH EAX                            ; 0050f16c
    CALL FUN_0046c5b0                   ; 0050f16d
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f172
    LEA EAX,[ESP + 0x2e0]               ; 0050f175
    PUSH EAX                            ; 0050f17c
    LEA EAX,[ESP + 0x224]               ; 0050f17d
    PUSH dword ptr [ESP + 0x318]        ; 0050f184
    PUSH EAX                            ; 0050f18b
    LEA EAX,[ESP + 0x14c]               ; 0050f18c
    PUSH EAX                            ; 0050f193
    OR EBX,ESI                          ; 0050f194
    CALL FUN_0046d110                   ; 0050f196
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f19b
    MOV ESI,EAX                         ; 0050f19e
    LEA EAX,[ESP + 0x3c]                ; 0050f1a0
    PUSH EAX                            ; 0050f1a4
    LEA EAX,[ESP + 0x58]                ; 0050f1a5
    PUSH EAX                            ; 0050f1a9
    LEA EAX,[ESP + 0x14]                ; 0050f1aa
    PUSH EAX                            ; 0050f1ae
    LEA EAX,[ESP + 0x14c]               ; 0050f1af
    PUSH EAX                            ; 0050f1b6
    CALL FUN_0046c5b0                   ; 0050f1b7
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f1bc
    LEA EAX,[ESP + 0x2e0]               ; 0050f1bf
    PUSH EAX                            ; 0050f1c6
    LEA EAX,[ESP + 0x224]               ; 0050f1c7
    PUSH dword ptr [ESP + 0x318]        ; 0050f1ce
    PUSH EAX                            ; 0050f1d5
    LEA EAX,[ESP + 0x14c]               ; 0050f1d6
    PUSH EAX                            ; 0050f1dd
    CALL FUN_0046d110                   ; 0050f1de
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f1e3
    OR ESI,EAX                          ; 0050f1e6
    JZ 0x0050f260                       ; 0050f1e8
        ;   XREF to: 0050f260 (CONDITIONAL_JUMP)  ; LAB_0050f260
    FLD float ptr [ESP + 0x164]         ; 0050f1ea
    FLD float ptr [ESP + 0x168]         ; 0050f1f1
    FLD float ptr [ESP + 0x16c]         ; 0050f1f8
    LEA EAX,[ESP + 0x2c8]               ; 0050f1ff
    LEA EDX,[ESP + 0x2a4]               ; 0050f206
    FXCH ST2                            ; 0050f20d
    FCHS                                ; 0050f20f
    FXCH                                ; 0050f211
    FCHS                                ; 0050f213
    FXCH ST2                            ; 0050f215
    FCHS                                ; 0050f217
    FXCH ST2                            ; 0050f219
    FSTP float ptr [ESP + 0x2cc]        ; 0050f21b
    FXCH                                ; 0050f222
    FSTP float ptr [ESP + 0x2d0]        ; 0050f224
    FSTP float ptr [ESP + 0x2c8]        ; 0050f22b
    CMP EDX,EAX                         ; 0050f232
    JZ 0x0050f260                       ; 0050f234
        ;   XREF to: 0050f260 (CONDITIONAL_JUMP)  ; LAB_0050f260
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 0050f236
    MOV dword ptr [ESP + 0x2a4],EAX     ; 0050f23d
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 0050f244
    MOV dword ptr [ESP + 0x2a8],EAX     ; 0050f24b
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 0050f252
    MOV dword ptr [ESP + 0x2ac],EAX     ; 0050f259
    LEA EAX,[ESP + 0x3c]                ; 0050f260
        ;   Label: LAB_0050f260
    PUSH EAX                            ; 0050f264
    LEA EAX,[ESP + 0x10]                ; 0050f265
    PUSH EAX                            ; 0050f269
    LEA EAX,[ESP + 0x8]                 ; 0050f26a
    PUSH EAX                            ; 0050f26e
    LEA EAX,[ESP + 0x114]               ; 0050f26f
    PUSH EAX                            ; 0050f276
    CALL FUN_0046c5b0                   ; 0050f277
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f27c
    LEA EAX,[ESP + 0x2e0]               ; 0050f27f
    PUSH EAX                            ; 0050f286
    LEA EAX,[ESP + 0x224]               ; 0050f287
    PUSH dword ptr [ESP + 0x318]        ; 0050f28e
    PUSH EAX                            ; 0050f295
    LEA EAX,[ESP + 0x114]               ; 0050f296
    PUSH EAX                            ; 0050f29d
    OR EBX,ESI                          ; 0050f29e
    CALL FUN_0046d110                   ; 0050f2a0
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f2a5
    MOV ESI,EAX                         ; 0050f2a8
    LEA EAX,[ESP + 0x30]                ; 0050f2aa
    PUSH EAX                            ; 0050f2ae
    LEA EAX,[ESP + 0x40]                ; 0050f2af
    PUSH EAX                            ; 0050f2b3
    LEA EAX,[ESP + 0x8]                 ; 0050f2b4
    PUSH EAX                            ; 0050f2b8
    LEA EAX,[ESP + 0x114]               ; 0050f2b9
    PUSH EAX                            ; 0050f2c0
    CALL FUN_0046c5b0                   ; 0050f2c1
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f2c6
    LEA EAX,[ESP + 0x2e0]               ; 0050f2c9
    PUSH EAX                            ; 0050f2d0
    LEA EAX,[ESP + 0x224]               ; 0050f2d1
    PUSH dword ptr [ESP + 0x318]        ; 0050f2d8
    PUSH EAX                            ; 0050f2df
    LEA EAX,[ESP + 0x114]               ; 0050f2e0
    PUSH EAX                            ; 0050f2e7
    CALL FUN_0046d110                   ; 0050f2e8
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f2ed
    OR ESI,EAX                          ; 0050f2f0
    JZ 0x0050f36a                       ; 0050f2f2
        ;   XREF to: 0050f36a (CONDITIONAL_JUMP)  ; LAB_0050f36a
    FLD float ptr [ESP + 0x12c]         ; 0050f2f4
    FLD float ptr [ESP + 0x130]         ; 0050f2fb
    FLD float ptr [ESP + 0x134]         ; 0050f302
    LEA EAX,[ESP + 0x2d4]               ; 0050f309
    LEA EDX,[ESP + 0x2a4]               ; 0050f310
    FXCH ST2                            ; 0050f317
    FCHS                                ; 0050f319
    FXCH                                ; 0050f31b
    FCHS                                ; 0050f31d
    FXCH ST2                            ; 0050f31f
    FCHS                                ; 0050f321
    FXCH ST2                            ; 0050f323
    FSTP float ptr [ESP + 0x2d8]        ; 0050f325
    FXCH                                ; 0050f32c
    FSTP float ptr [ESP + 0x2dc]        ; 0050f32e
    FSTP float ptr [ESP + 0x2d4]        ; 0050f335
    CMP EDX,EAX                         ; 0050f33c
    JZ 0x0050f36a                       ; 0050f33e
        ;   XREF to: 0050f36a (CONDITIONAL_JUMP)  ; LAB_0050f36a
    MOV EAX,dword ptr [ESP + 0x2d4]     ; 0050f340
    MOV dword ptr [ESP + 0x2a4],EAX     ; 0050f347
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 0050f34e
    MOV dword ptr [ESP + 0x2a8],EAX     ; 0050f355
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 0050f35c
    MOV dword ptr [ESP + 0x2ac],EAX     ; 0050f363
    LEA EAX,[ESP + 0x54]                ; 0050f36a
        ;   Label: LAB_0050f36a
    PUSH EAX                            ; 0050f36e
    LEA EAX,[ESP + 0x4c]                ; 0050f36f
    PUSH EAX                            ; 0050f373
    LEA EAX,[ESP + 0x20]                ; 0050f374
    PUSH EAX                            ; 0050f378
    LEA EAX,[ESP + 0x184]               ; 0050f379
    PUSH EAX                            ; 0050f380
    CALL FUN_0046c5b0                   ; 0050f381
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f386
    LEA EAX,[ESP + 0x2e0]               ; 0050f389
    PUSH EAX                            ; 0050f390
    LEA EAX,[ESP + 0x224]               ; 0050f391
    PUSH dword ptr [ESP + 0x318]        ; 0050f398
    PUSH EAX                            ; 0050f39f
    LEA EAX,[ESP + 0x184]               ; 0050f3a0
    PUSH EAX                            ; 0050f3a7
    OR EBX,ESI                          ; 0050f3a8
    CALL FUN_0046d110                   ; 0050f3aa
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f3af
    MOV ESI,EAX                         ; 0050f3b2
    LEA EAX,[ESP + 0x24]                ; 0050f3b4
    PUSH EAX                            ; 0050f3b8
    LEA EAX,[ESP + 0x58]                ; 0050f3b9
    PUSH EAX                            ; 0050f3bd
    LEA EAX,[ESP + 0x20]                ; 0050f3be
    PUSH EAX                            ; 0050f3c2
    LEA EAX,[ESP + 0x184]               ; 0050f3c3
    PUSH EAX                            ; 0050f3ca
    CALL FUN_0046c5b0                   ; 0050f3cb
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f3d0
    LEA EAX,[ESP + 0x2e0]               ; 0050f3d3
    PUSH EAX                            ; 0050f3da
    LEA EAX,[ESP + 0x224]               ; 0050f3db
    PUSH dword ptr [ESP + 0x318]        ; 0050f3e2
    PUSH EAX                            ; 0050f3e9
    LEA EAX,[ESP + 0x184]               ; 0050f3ea
    PUSH EAX                            ; 0050f3f1
    CALL FUN_0046d110                   ; 0050f3f2
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f3f7
    OR ESI,EAX                          ; 0050f3fa
    JZ 0x0050f474                       ; 0050f3fc
        ;   XREF to: 0050f474 (CONDITIONAL_JUMP)  ; LAB_0050f474
    FLD float ptr [ESP + 0x19c]         ; 0050f3fe
    FLD float ptr [ESP + 0x1a0]         ; 0050f405
    FLD float ptr [ESP + 0x1a4]         ; 0050f40c
    LEA EDX,[ESP + 0x22c]               ; 0050f413
    LEA EAX,[ESP + 0x2a4]               ; 0050f41a
    FXCH ST2                            ; 0050f421
    FCHS                                ; 0050f423
    FXCH                                ; 0050f425
    FCHS                                ; 0050f427
    FXCH ST2                            ; 0050f429
    FCHS                                ; 0050f42b
    FXCH ST2                            ; 0050f42d
    FSTP float ptr [ESP + 0x230]        ; 0050f42f
    FXCH                                ; 0050f436
    FSTP float ptr [ESP + 0x234]        ; 0050f438
    FSTP float ptr [ESP + 0x22c]        ; 0050f43f
    CMP EAX,EDX                         ; 0050f446
    JZ 0x0050f474                       ; 0050f448
        ;   XREF to: 0050f474 (CONDITIONAL_JUMP)  ; LAB_0050f474
    MOV EAX,dword ptr [ESP + 0x22c]     ; 0050f44a
    MOV dword ptr [ESP + 0x2a4],EAX     ; 0050f451
    MOV EAX,dword ptr [ESP + 0x230]     ; 0050f458
    MOV dword ptr [ESP + 0x2a8],EAX     ; 0050f45f
    MOV EAX,dword ptr [ESP + 0x234]     ; 0050f466
    MOV dword ptr [ESP + 0x2ac],EAX     ; 0050f46d
    LEA EAX,[ESP + 0x24]                ; 0050f474
        ;   Label: LAB_0050f474
    PUSH EAX                            ; 0050f478
    LEA EAX,[ESP + 0x1c]                ; 0050f479
    PUSH EAX                            ; 0050f47d
    LEA EAX,[ESP + 0x8]                 ; 0050f47e
    PUSH EAX                            ; 0050f482
    LEA EAX,[ESP + 0x6c]                ; 0050f483
    PUSH EAX                            ; 0050f487
    CALL FUN_0046c5b0                   ; 0050f488
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f48d
    LEA EAX,[ESP + 0x2e0]               ; 0050f490
    PUSH EAX                            ; 0050f497
    LEA EAX,[ESP + 0x224]               ; 0050f498
    PUSH dword ptr [ESP + 0x318]        ; 0050f49f
    PUSH EAX                            ; 0050f4a6
    LEA EAX,[ESP + 0x6c]                ; 0050f4a7
    PUSH EAX                            ; 0050f4ab
    OR EBX,ESI                          ; 0050f4ac
    CALL FUN_0046d110                   ; 0050f4ae
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f4b3
    MOV ESI,EAX                         ; 0050f4b6
    LEA EAX,[ESP + 0xc]                 ; 0050f4b8
    PUSH EAX                            ; 0050f4bc
    LEA EAX,[ESP + 0x28]                ; 0050f4bd
    PUSH EAX                            ; 0050f4c1
    LEA EAX,[ESP + 0x8]                 ; 0050f4c2
    PUSH EAX                            ; 0050f4c6
    LEA EAX,[ESP + 0x6c]                ; 0050f4c7
    PUSH EAX                            ; 0050f4cb
    CALL FUN_0046c5b0                   ; 0050f4cc
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f4d1
    LEA EAX,[ESP + 0x2e0]               ; 0050f4d4
    PUSH EAX                            ; 0050f4db
    LEA EAX,[ESP + 0x224]               ; 0050f4dc
    PUSH dword ptr [ESP + 0x318]        ; 0050f4e3
    PUSH EAX                            ; 0050f4ea
    LEA EAX,[ESP + 0x6c]                ; 0050f4eb
    PUSH EAX                            ; 0050f4ef
    CALL FUN_0046d110                   ; 0050f4f0
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f4f5
    OR ESI,EAX                          ; 0050f4f8
    JZ 0x0050f572                       ; 0050f4fa
        ;   XREF to: 0050f572 (CONDITIONAL_JUMP)  ; LAB_0050f572
    FLD float ptr [ESP + 0x84]          ; 0050f4fc
    FLD float ptr [ESP + 0x88]          ; 0050f503
    FLD float ptr [ESP + 0x8c]          ; 0050f50a
    LEA EDX,[ESP + 0x274]               ; 0050f511
    LEA EAX,[ESP + 0x2a4]               ; 0050f518
    FXCH ST2                            ; 0050f51f
    FCHS                                ; 0050f521
    FXCH                                ; 0050f523
    FCHS                                ; 0050f525
    FXCH ST2                            ; 0050f527
    FCHS                                ; 0050f529
    FXCH ST2                            ; 0050f52b
    FSTP float ptr [ESP + 0x278]        ; 0050f52d
    FXCH                                ; 0050f534
    FSTP float ptr [ESP + 0x27c]        ; 0050f536
    FSTP float ptr [ESP + 0x274]        ; 0050f53d
    CMP EAX,EDX                         ; 0050f544
    JZ 0x0050f572                       ; 0050f546
        ;   XREF to: 0050f572 (CONDITIONAL_JUMP)  ; LAB_0050f572
    MOV EAX,dword ptr [ESP + 0x274]     ; 0050f548
    MOV dword ptr [ESP + 0x2a4],EAX     ; 0050f54f
    MOV EAX,dword ptr [ESP + 0x278]     ; 0050f556
    MOV dword ptr [ESP + 0x2a8],EAX     ; 0050f55d
    MOV EAX,dword ptr [ESP + 0x27c]     ; 0050f564
    MOV dword ptr [ESP + 0x2ac],EAX     ; 0050f56b
    LEA EAX,[ESP + 0x54]                ; 0050f572
        ;   Label: LAB_0050f572
    PUSH EAX                            ; 0050f576
    LEA EAX,[ESP + 0x40]                ; 0050f577
    PUSH EAX                            ; 0050f57b
    LEA EAX,[ESP + 0x38]                ; 0050f57c
    PUSH EAX                            ; 0050f580
    LEA EAX,[ESP + 0xdc]                ; 0050f581
    PUSH EAX                            ; 0050f588
    CALL FUN_0046c5b0                   ; 0050f589
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f58e
    LEA EAX,[ESP + 0x2e0]               ; 0050f591
    PUSH EAX                            ; 0050f598
    LEA EAX,[ESP + 0x224]               ; 0050f599
    PUSH dword ptr [ESP + 0x318]        ; 0050f5a0
    PUSH EAX                            ; 0050f5a7
    LEA EAX,[ESP + 0xdc]                ; 0050f5a8
    PUSH EAX                            ; 0050f5af
    OR EBX,ESI                          ; 0050f5b0
    CALL FUN_0046d110                   ; 0050f5b2
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f5b7
    MOV ESI,EAX                         ; 0050f5ba
    LEA EAX,[ESP + 0x48]                ; 0050f5bc
    PUSH EAX                            ; 0050f5c0
    LEA EAX,[ESP + 0x58]                ; 0050f5c1
    PUSH EAX                            ; 0050f5c5
    LEA EAX,[ESP + 0x38]                ; 0050f5c6
    PUSH EAX                            ; 0050f5ca
    LEA EAX,[ESP + 0xdc]                ; 0050f5cb
    PUSH EAX                            ; 0050f5d2
    CALL FUN_0046c5b0                   ; 0050f5d3
        ;   XREF to: 0046c5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5b0()
    ADD ESP,0x10                        ; 0050f5d8
    LEA EAX,[ESP + 0x2e0]               ; 0050f5db
    PUSH EAX                            ; 0050f5e2
    LEA EAX,[ESP + 0x224]               ; 0050f5e3
    PUSH dword ptr [ESP + 0x318]        ; 0050f5ea
    PUSH EAX                            ; 0050f5f1
    LEA EAX,[ESP + 0xdc]                ; 0050f5f2
    PUSH EAX                            ; 0050f5f9
    CALL FUN_0046d110                   ; 0050f5fa
        ;   XREF to: 0046d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d110()
    ADD ESP,0x10                        ; 0050f5ff
    OR ESI,EAX                          ; 0050f602
    JZ 0x0050f67c                       ; 0050f604
        ;   XREF to: 0050f67c (CONDITIONAL_JUMP)  ; LAB_0050f67c
    FLD float ptr [ESP + 0xf4]          ; 0050f606
    FLD float ptr [ESP + 0xf8]          ; 0050f60d
    FLD float ptr [ESP + 0xfc]          ; 0050f614
    LEA EDX,[ESP + 0x244]               ; 0050f61b
    LEA EAX,[ESP + 0x2a4]               ; 0050f622
    FXCH ST2                            ; 0050f629
    FCHS                                ; 0050f62b
    FXCH                                ; 0050f62d
    FCHS                                ; 0050f62f
    FXCH ST2                            ; 0050f631
    FCHS                                ; 0050f633
    FXCH ST2                            ; 0050f635
    FSTP float ptr [ESP + 0x248]        ; 0050f637
    FXCH                                ; 0050f63e
    FSTP float ptr [ESP + 0x24c]        ; 0050f640
    FSTP float ptr [ESP + 0x244]        ; 0050f647
    CMP EAX,EDX                         ; 0050f64e
    JZ 0x0050f67c                       ; 0050f650
        ;   XREF to: 0050f67c (CONDITIONAL_JUMP)  ; LAB_0050f67c
    MOV EAX,dword ptr [ESP + 0x244]     ; 0050f652
    MOV dword ptr [ESP + 0x2a4],EAX     ; 0050f659
    MOV EAX,dword ptr [ESP + 0x248]     ; 0050f660
    MOV dword ptr [ESP + 0x2a8],EAX     ; 0050f667
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0050f66e
    MOV dword ptr [ESP + 0x2ac],EAX     ; 0050f675
    OR EBX,ESI                          ; 0050f67c
        ;   Label: LAB_0050f67c
    JZ 0x0050eebd                       ; 0050f67e
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0050f684
    MOV dword ptr [EAX + 0x14cd5c],EDI  ; 0050f68b
    LEA EAX,[ESP + 0x2a4]               ; 0050f691
    PUSH EAX                            ; 0050f698
    LEA EAX,[ESP + 0x254]               ; 0050f699
    PUSH EAX                            ; 0050f6a0
    PUSH EDI                            ; 0050f6a1
    CALL FUN_0040a200                   ; 0050f6a2
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a200()
    ADD ESP,0xc                         ; 0050f6a7
    CMP EBP,EAX                         ; 0050f6aa
    JZ 0x0050eebd                       ; 0050f6ac
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    MOV EDX,dword ptr [EAX]             ; 0050f6b2
    MOV dword ptr [EBP],EDX             ; 0050f6b4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050f6b7
    MOV dword ptr [EBP + 0x4],EDX       ; 0050f6ba
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050f6bd
    MOV dword ptr [EBP + 0x8],EDX       ; 0050f6c0
    JMP 0x0050eebd                      ; 0050f6c3
        ;   XREF to: 0050eebd (UNCONDITIONAL_JUMP)  ; LAB_0050eebd
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0050f6c8
        ;   Label: LAB_0050f6c8
    TEST EAX,EAX                        ; 0050f6cf
    JZ 0x0050efc3                       ; 0050f6d1
        ;   XREF to: 0050efc3 (CONDITIONAL_JUMP)  ; LAB_0050efc3
    PUSH EAX                            ; 0050f6d7
    CALL FUN_00454530                   ; 0050f6d8
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    ADD ESP,0x4                         ; 0050f6dd
    MOV ECX,dword ptr [EAX + 0x358]     ; 0050f6e0
    MOV EBX,EAX                         ; 0050f6e6
    TEST ECX,ECX                        ; 0050f6e8
    JNZ 0x0050f710                      ; 0050f6ea
        ;   XREF to: 0050f710 (CONDITIONAL_JUMP)  ; LAB_0050f710
    PUSH EAX                            ; 0050f6ec
    MOV ESI,0x59097d                    ; 0050f6ed | = "..\\core\\setcolid.cpp"
    MOV EDX,0xcb                        ; 0050f6f2
    PUSH 0x590992                       ; 0050f6f7 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x01cc4800],ESI      ; 0050f6fc | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 0050f702 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0050f708
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0050f70d
    LEA EAX,[EDI + 0x20]                ; 0050f710
        ;   Label: LAB_0050f710
    FLD float ptr [ESP + 0x220]         ; 0050f713
    FSUB float ptr [EAX]                ; 0050f71a
    FLD float ptr [ESP + 0x224]         ; 0050f71c
    FXCH                                ; 0050f723
    FSTP float ptr [ESP + 0x2b0]        ; 0050f725
    FSUB float ptr [EAX + 0x4]          ; 0050f72c
    FLD float ptr [ESP + 0x228]         ; 0050f72f
    FXCH                                ; 0050f736
    FSTP float ptr [ESP + 0x2b4]        ; 0050f738
    FSUB float ptr [EAX + 0x8]          ; 0050f73f
    LEA EAX,[EDI + 0x30]                ; 0050f742
    PUSH EAX                            ; 0050f745
    LEA EAX,[ESP + 0x2e8]               ; 0050f746
    PUSH EAX                            ; 0050f74d
    PUSH dword ptr [ESP + 0x31c]        ; 0050f74e
    LEA EAX,[ESP + 0x2bc]               ; 0050f755
    FLD float ptr [ESP + 0x2ec]         ; 0050f75c
    PUSH EAX                            ; 0050f763
    FXCH                                ; 0050f764
    FSTP float ptr [ESP + 0x2c8]        ; 0050f766
    PUSH 0x0                            ; 0050f76d
    FSUB float ptr [EDI + 0x24]         ; 0050f76f
    PUSH EBX                            ; 0050f772
    FSTP float ptr [ESP + 0x2fc]        ; 0050f773
    CALL FUN_00453f00                   ; 0050f77a
        ;   XREF to: 00453f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00453f00()
    ADD ESP,0x18                        ; 0050f77f
    TEST EAX,EAX                        ; 0050f782
    JZ 0x0050eebd                       ; 0050f784
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0050f78a
    MOV EBX,0x3f800000                  ; 0050f791
    MOV dword ptr [EAX + 0x14cd5c],EDI  ; 0050f796
    XOR ECX,ECX                         ; 0050f79c
    FLD float ptr [ESP + 0x2e4]         ; 0050f79e
    FADD float ptr [EDI + 0x24]         ; 0050f7a5
    LEA EAX,[ESP + 0x238]               ; 0050f7a8
    FSTP float ptr [ESP + 0x2e0]        ; 0050f7af
    MOV dword ptr [ESP + 0x238],ECX     ; 0050f7b6
    MOV dword ptr [ESP + 0x23c],EBX     ; 0050f7bd
    MOV dword ptr [ESP + 0x240],ECX     ; 0050f7c4
    CMP EBP,EAX                         ; 0050f7cb
    JZ 0x0050eebd                       ; 0050f7cd
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    MOV dword ptr [EBP],ECX             ; 0050f7d3
    MOV EAX,dword ptr [ESP + 0x23c]     ; 0050f7d6
    MOV dword ptr [EBP + 0x4],EAX       ; 0050f7dd
    MOV EAX,dword ptr [ESP + 0x240]     ; 0050f7e0
    MOV dword ptr [EBP + 0x8],EAX       ; 0050f7e7
    JMP 0x0050eebd                      ; 0050f7ea
        ;   XREF to: 0050eebd (UNCONDITIONAL_JUMP)  ; LAB_0050eebd
    LEA EAX,[ESP + 0x220]               ; 0050f7ef
        ;   Label: LAB_0050f7ef
    PUSH EAX                            ; 0050f7f6
    LEA EAX,[ESP + 0x2c0]               ; 0050f7f7
    PUSH EAX                            ; 0050f7fe
    PUSH EDI                            ; 0050f7ff
    CALL FUN_0040a290                   ; 0050f800
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    ADD ESP,0xc                         ; 0050f805
    LEA EAX,[ESP + 0x2e8]               ; 0050f808
    PUSH EAX                            ; 0050f80f
    FLD float ptr [ESP + 0x2e4]         ; 0050f810
    PUSH dword ptr [ESP + 0x318]        ; 0050f817
    LEA EAX,[ESP + 0x2c4]               ; 0050f81e
    FSUB float ptr [EDI + 0x24]         ; 0050f825
    PUSH EAX                            ; 0050f828
    FSTP float ptr [ESP + 0x2f4]        ; 0050f829
    MOV EDX,dword ptr [EDI + 0x14c]     ; 0050f830
    PUSH EDI                            ; 0050f836
    CALL dword ptr [EDX + 0xb8]         ; 0050f837
    ADD ESP,0x10                        ; 0050f83d
    TEST EAX,EAX                        ; 0050f840
    JZ 0x0050eebd                       ; 0050f842
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    MOV EAX,dword ptr [ESP + 0x30c]     ; 0050f848
    MOV dword ptr [EAX + 0x14cd5c],EDI  ; 0050f84f
    FLD float ptr [ESP + 0x2e8]         ; 0050f855
    FADD float ptr [EDI + 0x24]         ; 0050f85c
    MOV EAX,0x3f800000                  ; 0050f85f
    FSTP float ptr [ESP + 0x2e0]        ; 0050f864
    MOV dword ptr [ESP + 0x284],EAX     ; 0050f86b
    XOR EDI,EDI                         ; 0050f872
    LEA EAX,[ESP + 0x280]               ; 0050f874
    MOV dword ptr [ESP + 0x280],EDI     ; 0050f87b
    MOV dword ptr [ESP + 0x288],EDI     ; 0050f882
    CMP EBP,EAX                         ; 0050f889
    JZ 0x0050eebd                       ; 0050f88b
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
    MOV dword ptr [EBP],EDI             ; 0050f891
    MOV EAX,dword ptr [ESP + 0x284]     ; 0050f894
    MOV dword ptr [EBP + 0x4],EAX       ; 0050f89b
    MOV EAX,dword ptr [ESP + 0x288]     ; 0050f89e
    MOV dword ptr [EBP + 0x8],EAX       ; 0050f8a5
    JMP 0x0050eebd                      ; 0050f8a8
        ;   XREF to: 0050eebd (UNCONDITIONAL_JUMP)  ; LAB_0050eebd
    JBE 0x0050eebd                      ; 0050f8ad
        ;   XREF to: 0050eebd (CONDITIONAL_JUMP)  ; LAB_0050eebd
        ;   Label: LAB_0050f8ad
    CMP EBX,0x3                         ; 0050f8b3
    JZ 0x0050f7ef                       ; 0050f8b6
        ;   XREF to: 0050f7ef (CONDITIONAL_JUMP)  ; LAB_0050f7ef
    MOV ECX,0x5909de                    ; 0050f8bc | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_0050f8bc
    MOV EBX,0x12b                       ; 0050f8c1
    PUSH 0x5909f3                       ; 0050f8c6 | = "Invalid collision type!"
    MOV dword ptr [0x01cc4800],ECX      ; 0050f8cb | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0050f8d1 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0050f8d7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0050f8dc
    JMP 0x0050eebd                      ; 0050f8df
        ;   XREF to: 0050eebd (UNCONDITIONAL_JUMP)  ; LAB_0050eebd
    PUSH EBX                            ; 0050f8e4
        ;   Label: LAB_0050f8e4
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0050f8e5
    CALL dword ptr [EDX + 0x3c]         ; 0050f8eb
    ADD ESP,0x4                         ; 0050f8ee
    MOV EDX,dword ptr [ESP + 0x30c]     ; 0050f8f1
    MOV dword ptr [EDX + 0x14cd4c],EAX  ; 0050f8f8
    MOV EAX,dword ptr [ESP + 0x2e0]     ; 0050f8fe
    ADD ESP,0x2f8                       ; 0050f905
    POP EBP                             ; 0050f90b
    POP EDI                             ; 0050f90c
    POP ESI                             ; 0050f90d
    POP EBX                             ; 0050f90e
    RET                                 ; 0050f90f

