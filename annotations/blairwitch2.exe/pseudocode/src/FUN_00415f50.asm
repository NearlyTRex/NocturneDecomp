; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00415f50(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_vertexCount_005cbe22
;   TerminatedCString s_triCount_005cbe2e
;   TerminatedCString s_textureCount_005cbe37
;   TerminatedCString s_d_d_d_005cbe44
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_005cbe4e
;   TerminatedCString s_anon_005cbe72
;   TerminatedCString s_d_d_d_005cbe7c
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_005cbe87
;   TerminatedCString s_s_005cbeaa
;   TerminatedCString s_simBox_005cbeb1
;   TerminatedCString s_carriedByActor_005cbeb8
;   TerminatedCString s_bloodType_005cbec7
;   TerminatedCString s_dontUseNormals_005cbed1
;   TerminatedCString s_transparentGeometryFlag_005cbee0
;   TerminatedCString s_renderInBackground_005cbef8
;   ... and 4 more
;
; Called Functions:
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040bee0
;   FUN_0040c330
;   FUN_00415890
;   FUN_00416700
;   FUN_005b8010
;   FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415f50
        ;   Label: FUN_00415f50
    PUSH ESI                            ; 00415f51
    PUSH EDI                            ; 00415f52
    PUSH EBP                            ; 00415f53
    SUB ESP,0x8                         ; 00415f54
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00415f57
    PUSH EBX                            ; 00415f5b
    CALL FUN_0040c330                   ; 00415f5c
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 00415f61
    PUSH 0x5cbe22                       ; 00415f64 | = "vertexCount"
    LEA EAX,[EBX + 0x2d0]               ; 00415f69
    PUSH EAX                            ; 00415f6f
    CALL FUN_0040b960                   ; 00415f70
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00415f75
    PUSH 0x5cbe2e                       ; 00415f78 | = "triCount"
    LEA EAX,[EBX + 0x2dc]               ; 00415f7d
    PUSH EAX                            ; 00415f83
    CALL FUN_0040b960                   ; 00415f84
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00415f89
    PUSH 0x5cbe37                       ; 00415f8c | = "textureCount"
    LEA EAX,[EBX + 0x2e8]               ; 00415f91
    PUSH EAX                            ; 00415f97
    CALL FUN_0040b960                   ; 00415f98
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV EDX,dword ptr [0x007bc038]      ; 00415f9d | DAT_007bc038
    ADD ESP,0x8                         ; 00415fa3
    CMP EDX,0x1                         ; 00415fa6
    JZ 0x00416168                       ; 00415fa9
        ;   XREF to: 00416168 (CONDITIONAL_JUMP)  ; LAB_00416168
    MOV ECX,dword ptr [EBX + 0x2d0]     ; 00415faf
    XOR EBP,EBP                         ; 00415fb5
    TEST ECX,ECX                        ; 00415fb7
    JLE 0x00416000                      ; 00415fb9
        ;   XREF to: 00416000 (CONDITIONAL_JUMP)  ; LAB_00416000
    XOR EDI,EDI                         ; 00415fbb
    MOV ESI,dword ptr [EBX + 0x2d4]     ; 00415fbd
        ;   Label: LAB_00415fbd
    MOV EAX,dword ptr [EDI + ESI*0x1 + 0x8] ; 00415fc3
    PUSH EAX                            ; 00415fc7
    MOV EDX,dword ptr [EDI + ESI*0x1 + 0x4] ; 00415fc8
    PUSH EDX                            ; 00415fcc
    MOV ECX,dword ptr [EDI + ESI*0x1]   ; 00415fcd
    PUSH ECX                            ; 00415fd0
    PUSH 0x5cbe7c                       ; 00415fd1 | = "\t%d,%d,%d\n"
    MOV ESI,dword ptr [0x007bc034]      ; 00415fd6 | DAT_007bc034
    PUSH ESI                            ; 00415fdc
    ADD EDI,0xc                         ; 00415fdd
    INC EBP                             ; 00415fe0
    CALL FUN_005b8010                   ; 00415fe1
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 00415fe6
    ADD ESP,0x14                        ; 00415fec
    CMP EBP,EAX                         ; 00415fef
    JL 0x00415fbd                       ; 00415ff1
        ;   XREF to: 00415fbd (CONDITIONAL_JUMP)  ; LAB_00415fbd
    LEA EAX,[EAX]                       ; 00415ff3
    LEA EDX,[EDX]                       ; 00415ff9
    NOP                                 ; 00415fff
    MOV EDX,dword ptr [EBX + 0x2dc]     ; 00416000
        ;   Label: LAB_00416000
    XOR EBP,EBP                         ; 00416006
    TEST EDX,EDX                        ; 00416008
    JLE 0x00416080                      ; 0041600a
        ;   XREF to: 00416080 (CONDITIONAL_JUMP)  ; LAB_00416080
    MOV dword ptr [ESP],EBP             ; 0041600c
    XOR EDI,EDI                         ; 0041600f
    MOV ECX,dword ptr [ESP]             ; 00416011
        ;   Label: LAB_00416011
    MOV ESI,dword ptr [EBX + 0x2e0]     ; 00416014
    ADD ESI,ECX                         ; 0041601a
    MOV EAX,dword ptr [ESI + 0x38]      ; 0041601c
    PUSH EAX                            ; 0041601f
    MOV EDX,dword ptr [ESI + 0x34]      ; 00416020
    PUSH EDX                            ; 00416023
    MOV ECX,dword ptr [ESI + 0x30]      ; 00416024
    PUSH ECX                            ; 00416027
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00416028
    PUSH EAX                            ; 0041602b
    MOV EDX,dword ptr [ESI + 0x28]      ; 0041602c
    PUSH EDX                            ; 0041602f
    MOV ECX,dword ptr [ESI + 0x24]      ; 00416030
    PUSH ECX                            ; 00416033
    MOV EAX,dword ptr [ESI + 0x20]      ; 00416034
    PUSH EAX                            ; 00416037
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00416038
    PUSH EDX                            ; 0041603b
    MOV ECX,dword ptr [ESI + 0x18]      ; 0041603c
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 0041603f
    PUSH ECX                            ; 00416045
    MOV ESI,dword ptr [EDI + EAX*0x1]   ; 00416046
    PUSH ESI                            ; 00416049
    PUSH 0x5cbe87                       ; 0041604a | = "\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV EAX,[0x007bc034]                ; 0041604f | DAT_007bc034
    PUSH EAX                            ; 00416054
    CALL FUN_005b8010                   ; 00416055
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x30                        ; 0041605a
    ADD EDI,0x4                         ; 0041605d
    MOV EDX,dword ptr [ESP]             ; 00416060
    INC EBP                             ; 00416063
    ADD EDX,0x3c                        ; 00416064
    MOV ECX,dword ptr [EBX + 0x2dc]     ; 00416067
    MOV dword ptr [ESP],EDX             ; 0041606d
    CMP EBP,ECX                         ; 00416070
    JL 0x00416011                       ; 00416072
        ;   XREF to: 00416011 (CONDITIONAL_JUMP)  ; LAB_00416011
    LEA EAX,[EAX]                       ; 00416074
    LEA EDX,[EDX]                       ; 0041607a
    MOV ESI,dword ptr [EBX + 0x2e8]     ; 00416080
        ;   Label: LAB_00416080
    XOR EDI,EDI                         ; 00416086
    TEST ESI,ESI                        ; 00416088
    JLE 0x004160c0                      ; 0041608a
        ;   XREF to: 004160c0 (CONDITIONAL_JUMP)  ; LAB_004160c0
    LEA ESI,[EBX + 0x2f4]               ; 0041608c
    PUSH ESI                            ; 00416092
        ;   Label: LAB_00416092
    PUSH 0x5cbeaa                       ; 00416093 | = "\t\"%s\"\n"
    MOV EDX,dword ptr [0x007bc034]      ; 00416098 | DAT_007bc034
    PUSH EDX                            ; 0041609e
    INC EDI                             ; 0041609f
    ADD ESI,0x18                        ; 004160a0
    CALL FUN_005b8010                   ; 004160a3
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV ECX,dword ptr [EBX + 0x2e8]     ; 004160a8
    ADD ESP,0xc                         ; 004160ae
    CMP EDI,ECX                         ; 004160b1
    JL 0x00416092                       ; 004160b3
        ;   XREF to: 00416092 (CONDITIONAL_JUMP)  ; LAB_00416092
    LEA EAX,[EAX]                       ; 004160b5
    LEA EDX,[EDX]                       ; 004160bb
    MOV EBX,EBX                         ; 004160be
    CMP dword ptr [0x006098dc],0x2      ; 004160c0 | DAT_006098dc
        ;   Label: LAB_004160c0
    JL 0x004160f1                       ; 004160c7
        ;   XREF to: 004160f1 (CONDITIONAL_JUMP)  ; LAB_004160f1
    PUSH 0x5cbeb1                       ; 004160c9 | = "simBox"
    LEA EAX,[EBX + 0x10e0]              ; 004160ce
    PUSH EAX                            ; 004160d4
    CALL FUN_0040bee0                   ; 004160d5
        ;   XREF to: 0040bee0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040bee0()
    ADD ESP,0x8                         ; 004160da
    PUSH 0x5cbeb8                       ; 004160dd | = "carriedByActor"
    LEA EAX,[EBX + 0x133c]              ; 004160e2
    PUSH EAX                            ; 004160e8
    CALL FUN_0040b9e0                   ; 004160e9
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 004160ee
    CMP dword ptr [0x006098dc],0x3      ; 004160f1 | DAT_006098dc
        ;   Label: LAB_004160f1
    JL 0x00416136                       ; 004160f8
        ;   XREF to: 00416136 (CONDITIONAL_JUMP)  ; LAB_00416136
    PUSH 0x5cbec7                       ; 004160fa | = "bloodType"
    LEA EAX,[EBX + 0x10cc]              ; 004160ff
    PUSH EAX                            ; 00416105
    CALL FUN_0040b960                   ; 00416106
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041610b
    PUSH 0x5cbed1                       ; 0041610e | = "dontUseNormals"
    LEA EAX,[EBX + 0x10c4]              ; 00416113
    PUSH EAX                            ; 00416119
    CALL FUN_0040b960                   ; 0041611a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041611f
    PUSH 0x5cbee0                       ; 00416122 | = "transparentGeometryFlag"
    LEA EAX,[EBX + 0x10c8]              ; 00416127
    PUSH EAX                            ; 0041612d
    CALL FUN_0040b960                   ; 0041612e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00416133
    CMP dword ptr [0x006098dc],0x4      ; 00416136 | DAT_006098dc
        ;   Label: LAB_00416136
    JL 0x00416153                       ; 0041613d
        ;   XREF to: 00416153 (CONDITIONAL_JUMP)  ; LAB_00416153
    PUSH 0x5cbef8                       ; 0041613f | = "renderInBackground"
    LEA EAX,[EBX + 0x2b4]               ; 00416144
    PUSH EAX                            ; 0041614a
    CALL FUN_0040b960                   ; 0041614b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00416150
    CMP dword ptr [0x006098dc],0x5      ; 00416153 | DAT_006098dc
        ;   Label: LAB_00416153
    JGE 0x0041628e                      ; 0041615a
        ;   XREF to: 0041628e (CONDITIONAL_JUMP)  ; LAB_0041628e
    ADD ESP,0x8                         ; 00416160
    POP EBP                             ; 00416163
    POP EDI                             ; 00416164
    POP ESI                             ; 00416165
    POP EBX                             ; 00416166
    RET                                 ; 00416167
    MOV ESI,dword ptr [EBX + 0x2dc]     ; 00416168
        ;   Label: LAB_00416168
    PUSH ESI                            ; 0041616e
    MOV EDI,dword ptr [EBX + 0x2d0]     ; 0041616f
    PUSH EDI                            ; 00416175
    PUSH EBX                            ; 00416176
    CALL FUN_00415890                   ; 00416177
        ;   XREF to: 00415890 (UNCONDITIONAL_CALL)  ; undefined FUN_00415890()
    XOR EDI,EDI                         ; 0041617c
    MOV EBP,dword ptr [EBX + 0x2d0]     ; 0041617e
    ADD ESP,0xc                         ; 00416184
    TEST EBP,EBP                        ; 00416187
    JLE 0x004161c0                      ; 00416189
        ;   XREF to: 004161c0 (CONDITIONAL_JUMP)  ; LAB_004161c0
    XOR EBP,EBP                         ; 0041618b
    MOV ESI,dword ptr [EBX + 0x2d4]     ; 0041618d
        ;   Label: LAB_0041618d
    ADD ESI,EBP                         ; 00416193
    LEA EAX,[ESI + 0x8]                 ; 00416195
    PUSH EAX                            ; 00416198
    LEA EAX,[ESI + 0x4]                 ; 00416199
    PUSH EAX                            ; 0041619c
    PUSH ESI                            ; 0041619d
    PUSH 0x5cbe44                       ; 0041619e | = "%d,%d,%d\n"
    MOV ESI,dword ptr [0x007bc034]      ; 004161a3 | DAT_007bc034
    PUSH ESI                            ; 004161a9
    INC EDI                             ; 004161aa
    ADD EBP,0xc                         ; 004161ab
    CALL FUN_005b8100                   ; 004161ae
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 004161b3
    ADD ESP,0x14                        ; 004161b9
    CMP EDI,EAX                         ; 004161bc
    JL 0x0041618d                       ; 004161be
        ;   XREF to: 0041618d (CONDITIONAL_JUMP)  ; LAB_0041618d
    XOR EDX,EDX                         ; 004161c0
        ;   Label: LAB_004161c0
    MOV ECX,dword ptr [EBX + 0x2dc]     ; 004161c2
    MOV dword ptr [ESP + 0x4],EDX       ; 004161c8
    TEST ECX,ECX                        ; 004161cc
    JLE 0x00416240                      ; 004161ce
        ;   XREF to: 00416240 (CONDITIONAL_JUMP)  ; LAB_00416240
    XOR EBP,EBP                         ; 004161d4
    XOR EDI,EDI                         ; 004161d6
    MOV ESI,dword ptr [EBX + 0x2e0]     ; 004161d8
        ;   Label: LAB_004161d8
    ADD ESI,EBP                         ; 004161de
    LEA EAX,[ESI + 0x38]                ; 004161e0
    PUSH EAX                            ; 004161e3
    LEA EAX,[ESI + 0x34]                ; 004161e4
    PUSH EAX                            ; 004161e7
    LEA EAX,[ESI + 0x30]                ; 004161e8
    PUSH EAX                            ; 004161eb
    LEA EAX,[ESI + 0x2c]                ; 004161ec
    PUSH EAX                            ; 004161ef
    LEA EAX,[ESI + 0x28]                ; 004161f0
    PUSH EAX                            ; 004161f3
    LEA EAX,[ESI + 0x24]                ; 004161f4
    PUSH EAX                            ; 004161f7
    LEA EAX,[ESI + 0x20]                ; 004161f8
    PUSH EAX                            ; 004161fb
    LEA EAX,[ESI + 0x1c]                ; 004161fc
    PUSH EAX                            ; 004161ff
    LEA EAX,[ESI + 0x18]                ; 00416200
    PUSH EAX                            ; 00416203
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 00416204
    ADD EAX,EDI                         ; 0041620a
    PUSH EAX                            ; 0041620c
    PUSH 0x5cbe4e                       ; 0041620d | = "\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV EAX,[0x007bc034]                ; 00416212 | DAT_007bc034
    PUSH EAX                            ; 00416217
    ADD EBP,0x3c                        ; 00416218
    CALL FUN_005b8100                   ; 0041621b
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0x30                        ; 00416220
    ADD EDI,0x4                         ; 00416223
    MOV EDX,dword ptr [ESP + 0x4]       ; 00416226
    MOV dword ptr [ESI + 0x4],0x3       ; 0041622a
    INC EDX                             ; 00416231
    MOV ECX,dword ptr [EBX + 0x2dc]     ; 00416232
    MOV dword ptr [ESP + 0x4],EDX       ; 00416238
    CMP EDX,ECX                         ; 0041623c
    JL 0x004161d8                       ; 0041623e
        ;   XREF to: 004161d8 (CONDITIONAL_JUMP)  ; LAB_004161d8
    MOV ESI,dword ptr [EBX + 0x2e8]     ; 00416240
        ;   Label: LAB_00416240
    XOR EDI,EDI                         ; 00416246
    TEST ESI,ESI                        ; 00416248
    JLE 0x00416280                      ; 0041624a
        ;   XREF to: 00416280 (CONDITIONAL_JUMP)  ; LAB_00416280
    LEA ESI,[EBX + 0x2f4]               ; 0041624c
    PUSH ESI                            ; 00416252
        ;   Label: LAB_00416252
    PUSH 0x5cbe72                       ; 00416253 | = " \"%[^\"]\"\n"
    MOV EBP,dword ptr [0x007bc034]      ; 00416258 | DAT_007bc034
    PUSH EBP                            ; 0041625e
    INC EDI                             ; 0041625f
    ADD ESI,0x18                        ; 00416260
    CALL FUN_005b8100                   ; 00416263
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 00416268
    ADD ESP,0xc                         ; 0041626e
    CMP EDI,EAX                         ; 00416271
    JL 0x00416252                       ; 00416273
        ;   XREF to: 00416252 (CONDITIONAL_JUMP)  ; LAB_00416252
    LEA EAX,[EAX]                       ; 00416275
    LEA EDX,[EDX]                       ; 0041627b
    MOV EBX,EBX                         ; 0041627e
    PUSH EBX                            ; 00416280
        ;   Label: LAB_00416280
    CALL FUN_00416700                   ; 00416281
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; undefined FUN_00416700()
    ADD ESP,0x4                         ; 00416286
    JMP 0x004160c0                      ; 00416289
        ;   XREF to: 004160c0 (UNCONDITIONAL_JUMP)  ; LAB_004160c0
    PUSH 0x5cbf0b                       ; 0041628e | = "dontPickMeUp"
        ;   Label: LAB_0041628e
    ADD EBX,0x10d8                      ; 00416293
    PUSH EBX                            ; 00416299
    CALL FUN_0040b960                   ; 0041629a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0041629f
    ADD ESP,0x8                         ; 004162a2
    POP EBP                             ; 004162a5
    POP EDI                             ; 004162a6
    POP ESI                             ; 004162a7
    POP EBX                             ; 004162a8
    RET                                 ; 004162a9

