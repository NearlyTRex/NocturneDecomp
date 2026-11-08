; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042ef90(int param_1,int param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   FUN_0042e930 at 0042eb04
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c3581c
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35828
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35834
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ef90
        ;   Label: FUN_0042ef90
    PUSH ESI                            ; 0042ef91
    PUSH EDI                            ; 0042ef92
    PUSH EBP                            ; 0042ef93
    MOV EBP,ESP                         ; 0042ef94
    SUB ESP,0x2c                        ; 0042ef96
    AND ESP,0xfffffff8                  ; 0042ef99
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042ef9c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042ef9f
    CMP EDX,dword ptr [0x01c35e48]      ; 0042efa2 | DAT_01c35e48
    JL 0x0042f195                       ; 0042efa8
        ;   XREF to: 0042f195 (CONDITIONAL_JUMP)  ; LAB_0042f195
    CMP EDX,dword ptr [0x01c35e50]      ; 0042efae | DAT_01c35e50
    JG 0x0042f195                       ; 0042efb4
        ;   XREF to: 0042f195 (CONDITIONAL_JUMP)  ; LAB_0042f195
    CMP ESI,dword ptr [0x01c35e4c]      ; 0042efba | DAT_01c35e4c
    JL 0x0042f195                       ; 0042efc0
        ;   XREF to: 0042f195 (CONDITIONAL_JUMP)  ; LAB_0042f195
    CMP ESI,dword ptr [0x01c35e54]      ; 0042efc6 | DAT_01c35e54
    JG 0x0042f195                       ; 0042efcc
        ;   XREF to: 0042f195 (CONDITIONAL_JUMP)  ; LAB_0042f195
    MOV ECX,dword ptr [0x006141c0]      ; 0042efd2 | DAT_006141c0
    CMP ECX,0x8                         ; 0042efd8
    JZ 0x0042f195                       ; 0042efdb
        ;   XREF to: 0042f195 (CONDITIONAL_JUMP)  ; LAB_0042f195
    LEA EAX,[ESI*0x4 + 0x0]             ; 0042efe1
    CMP ECX,0x10                        ; 0042efe8
    JZ 0x0042f19c                       ; 0042efeb
        ;   XREF to: 0042f19c (CONDITIONAL_JUMP)  ; LAB_0042f19c
    LEA EBX,[EDX*0x4 + 0x0]             ; 0042eff1
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 0042eff8
    ADD EBX,EAX                         ; 0042effe
    MOV CL,byte ptr [0x01c35814]        ; 0042f000 | DAT_01c35814
    MOV EAX,dword ptr [EBX]             ; 0042f006
    SHR EAX,CL                          ; 0042f008
    MOV CL,byte ptr [0x01c3581c]        ; 0042f00a | DAT_01c3581c
    SHL EAX,CL                          ; 0042f010
    XOR EDI,EDI                         ; 0042f012
    AND EAX,0xff                        ; 0042f014
    MOV dword ptr [ESP + 0x18],EDI      ; 0042f019
    MOV dword ptr [ESP + 0x14],EAX      ; 0042f01d
    MOV CL,byte ptr [0x01c35820]        ; 0042f021 | DAT_01c35820
    FILD qword ptr [ESP + 0x14]         ; 0042f027
    MOV EAX,dword ptr [EBX]             ; 0042f02b
    FLD float ptr [EBP + 0x1c]          ; 0042f02d
    FXCH                                ; 0042f030
    FMUL ST1                            ; 0042f032
    SHR EAX,CL                          ; 0042f034
    MOV CL,byte ptr [0x01c35828]        ; 0042f036 | DAT_01c35828
    SHL EAX,CL                          ; 0042f03c
    AND EAX,0xff                        ; 0042f03e
    MOV dword ptr [ESP + 0x18],EDI      ; 0042f043
    MOV dword ptr [ESP + 0x14],EAX      ; 0042f047
    MOV CL,byte ptr [0x01c3582c]        ; 0042f04b | DAT_01c3582c
    FILD qword ptr [ESP + 0x14]         ; 0042f051
    MOV EAX,dword ptr [EBX]             ; 0042f055
    FMUL ST2                            ; 0042f057
    SHR EAX,CL                          ; 0042f059
    MOV CL,byte ptr [0x01c35834]        ; 0042f05b | DAT_01c35834
    SHL EAX,CL                          ; 0042f061
    AND EAX,0xff                        ; 0042f063
    MOV dword ptr [ESP + 0x18],EDI      ; 0042f068
    MOV dword ptr [ESP + 0x14],EAX      ; 0042f06c
    FILD qword ptr [ESP + 0x14]         ; 0042f070
    FMULP ST3                           ; 0042f074
        ;   Label: LAB_0042f074
    FXCH                                ; 0042f076
    FSTP float ptr [ESP]                ; 0042f078
    FSTP float ptr [ESP + 0x4]          ; 0042f07b
    FSTP float ptr [ESP + 0x8]          ; 0042f07f
    MOV ECX,dword ptr [EBP + 0x20]      ; 0042f083
    LEA EAX,[ECX*0x4 + 0x0]             ; 0042f086
    SUB EAX,ECX                         ; 0042f08d
    MOV ECX,EAX                         ; 0042f08f
    XOR EAX,EAX                         ; 0042f091
    MOV AL,byte ptr [ECX + 0x1c35838]   ; 0042f093
    MOV dword ptr [ESP + 0x28],EAX      ; 0042f099
    FILD word ptr [ESP + 0x28]          ; 0042f09d
    FLD float ptr [EBP + 0x1c]          ; 0042f0a1
    XOR EAX,EAX                         ; 0042f0a4
    FLD1                                ; 0042f0a6
    MOV AL,byte ptr [ECX + 0x1c35839]   ; 0042f0a8
    FSUBRP                              ; 0042f0ae
    MOV dword ptr [ESP + 0x28],EAX      ; 0042f0b0
    FXCH                                ; 0042f0b4
    FMUL ST1                            ; 0042f0b6
    FILD word ptr [ESP + 0x28]          ; 0042f0b8
    XOR EAX,EAX                         ; 0042f0bc
    FMUL ST2                            ; 0042f0be
    MOV AL,byte ptr [ECX + 0x1c3583a]   ; 0042f0c0
    MOV dword ptr [ESP + 0x28],EAX      ; 0042f0c6
    FILD word ptr [ESP + 0x28]          ; 0042f0ca
    FMULP ST3                           ; 0042f0ce
    FLD float ptr [ESP]                 ; 0042f0d0
    FLD float ptr [ESP + 0x4]           ; 0042f0d3
    MOV CL,byte ptr [0x01c3581c]        ; 0042f0d7 | DAT_01c3581c
    FXCH ST3                            ; 0042f0dd
    FADD ST0,ST1                        ; 0042f0df
    FXCH ST2                            ; 0042f0e1
    FADD ST0,ST3                        ; 0042f0e3
    FXCH ST2                            ; 0042f0e5
    FSTP ST1                            ; 0042f0e7
    FXCH                                ; 0042f0e9
    FSTP ST2                            ; 0042f0eb
    FLD float ptr [ESP + 0x8]           ; 0042f0ed
    FXCH                                ; 0042f0f1
    FSTP float ptr [ESP]                ; 0042f0f3
    FXCH                                ; 0042f0f6
    FST float ptr [ESP + 0x4]           ; 0042f0f8
    FLD float ptr [ESP]                 ; 0042f0fc
    CALL FUN_005b7ff0                   ; 0042f0ff
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0042f104
    CALL FUN_005b7ff0                   ; 0042f106
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH ST3                            ; 0042f10b
    FADD ST0,ST2                        ; 0042f10d
    FXCH                                ; 0042f10f
    FISTP qword ptr [ESP + 0xc]         ; 0042f111
    FXCH ST2                            ; 0042f115
    FISTP qword ptr [ESP + 0x14]        ; 0042f117
    FXCH                                ; 0042f11b
    FSTP ST1                            ; 0042f11d
    MOV EDI,dword ptr [ESP + 0xc]       ; 0042f11f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042f123
    FST float ptr [ESP + 0x8]           ; 0042f127
    SHR EDI,CL                          ; 0042f12b
    CALL FUN_005b7ff0                   ; 0042f12d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    MOV CL,byte ptr [0x01c35828]        ; 0042f132 | DAT_01c35828
    FISTP qword ptr [ESP + 0x14]        ; 0042f138
    SHR EAX,CL                          ; 0042f13c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042f13e
    MOV dword ptr [ESP + 0x24],ECX      ; 0042f142
    MOV EBX,dword ptr [ESP + 0x24]      ; 0042f146
    MOV CL,byte ptr [0x01c35834]        ; 0042f14a | DAT_01c35834
    SHR EBX,CL                          ; 0042f150
    MOV ECX,dword ptr [0x006141c0]      ; 0042f152 | DAT_006141c0
    SHL ESI,0x2                         ; 0042f158
    CMP ECX,0x10                        ; 0042f15b
    JNZ 0x0042f226                      ; 0042f15e
        ;   XREF to: 0042f226 (CONDITIONAL_JUMP)  ; LAB_0042f226
    ADD EDX,EDX                         ; 0042f164
    MOV CL,byte ptr [0x01c35814]        ; 0042f166 | DAT_01c35814
    MOV dword ptr [ESP + 0x24],EDX      ; 0042f16c
    SHL EDI,CL                          ; 0042f170
    MOV CL,byte ptr [0x01c35820]        ; 0042f172 | DAT_01c35820
    MOV EDX,dword ptr [ESI + 0x1c2a38c] ; 0042f178
    MOV ESI,dword ptr [ESP + 0x24]      ; 0042f17e
    SHL EAX,CL                          ; 0042f182
    MOV CL,byte ptr [0x01c3582c]        ; 0042f184 | DAT_01c3582c
    OR EAX,EDI                          ; 0042f18a
    SHL EBX,CL                          ; 0042f18c
    ADD EDX,ESI                         ; 0042f18e
    OR EAX,EBX                          ; 0042f190
    MOV word ptr [EDX],AX               ; 0042f192
    MOV ESP,EBP                         ; 0042f195
        ;   Label: LAB_0042f195
    POP EBP                             ; 0042f197
    POP EDI                             ; 0042f198
    POP ESI                             ; 0042f199
    POP EBX                             ; 0042f19a
    RET                                 ; 0042f19b
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 0042f19c
        ;   Label: LAB_0042f19c
    MOV AX,word ptr [EAX + EDX*0x2]     ; 0042f1a2
    AND EAX,0xffff                      ; 0042f1a6
    MOV CL,byte ptr [0x01c35814]        ; 0042f1ab | DAT_01c35814
    MOV EBX,EAX                         ; 0042f1b1
    SHR EBX,CL                          ; 0042f1b3
    MOV CL,byte ptr [0x01c3581c]        ; 0042f1b5 | DAT_01c3581c
    SHL EBX,CL                          ; 0042f1bb
    XOR EDI,EDI                         ; 0042f1bd
    AND EBX,0xff                        ; 0042f1bf
    MOV dword ptr [ESP + 0x18],EDI      ; 0042f1c5
    MOV dword ptr [ESP + 0x14],EBX      ; 0042f1c9
    MOV CL,byte ptr [0x01c35820]        ; 0042f1cd | DAT_01c35820
    FILD qword ptr [ESP + 0x14]         ; 0042f1d3
    MOV EBX,EAX                         ; 0042f1d7
    FLD float ptr [EBP + 0x1c]          ; 0042f1d9
    FXCH                                ; 0042f1dc
    FMUL ST1                            ; 0042f1de
    SHR EBX,CL                          ; 0042f1e0
    MOV CL,byte ptr [0x01c35828]        ; 0042f1e2 | DAT_01c35828
    SHL EBX,CL                          ; 0042f1e8
    MOV ECX,EBX                         ; 0042f1ea
    AND ECX,0xff                        ; 0042f1ec
    MOV dword ptr [ESP + 0x10],EDI      ; 0042f1f2
    MOV dword ptr [ESP + 0xc],ECX       ; 0042f1f6
    FILD qword ptr [ESP + 0xc]          ; 0042f1fa
    MOV CL,byte ptr [0x01c3582c]        ; 0042f1fe | DAT_01c3582c
    FMUL ST2                            ; 0042f204
    SHR EAX,CL                          ; 0042f206
    MOV CL,byte ptr [0x01c35834]        ; 0042f208 | DAT_01c35834
    SHL EAX,CL                          ; 0042f20e
    AND EAX,0xff                        ; 0042f210
    MOV dword ptr [ESP + 0x10],EDI      ; 0042f215
    MOV dword ptr [ESP + 0xc],EAX       ; 0042f219
    FILD qword ptr [ESP + 0xc]          ; 0042f21d
    JMP 0x0042f074                      ; 0042f221
        ;   XREF to: 0042f074 (UNCONDITIONAL_JUMP)  ; LAB_0042f074
    SHL EDX,0x2                         ; 0042f226
        ;   Label: LAB_0042f226
    MOV ECX,dword ptr [ESI + 0x1c2a38c] ; 0042f229
    ADD EDX,ECX                         ; 0042f22f
    MOV CL,byte ptr [0x01c35814]        ; 0042f231 | DAT_01c35814
    SHL EDI,CL                          ; 0042f237
    MOV CL,byte ptr [0x01c35820]        ; 0042f239 | DAT_01c35820
    SHL EAX,CL                          ; 0042f23f
    MOV CL,byte ptr [0x01c3582c]        ; 0042f241 | DAT_01c3582c
    OR EDI,EAX                          ; 0042f247
    SHL EBX,CL                          ; 0042f249
    OR EDI,EBX                          ; 0042f24b
    MOV dword ptr [EDX],EDI             ; 0042f24d
    MOV ESP,EBP                         ; 0042f24f
    POP EBP                             ; 0042f251
    POP EDI                             ; 0042f252
    POP ESI                             ; 0042f253
    POP EBX                             ; 0042f254
    RET                                 ; 0042f255

