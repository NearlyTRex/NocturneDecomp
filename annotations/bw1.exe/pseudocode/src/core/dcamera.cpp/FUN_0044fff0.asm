; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044fff0(int param_1,char *param_2)
;
; Local Variables:
; undefined1       Stack[-0x144]:1  local_144
; undefined1       Stack[-0x143]:1  local_143
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x9d]:1  local_9d
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0054f0d0 at 0054f7df
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005d772f
;   TerminatedCString s_CDemonCamera_loadImage_n_005d7743
;   TerminatedCString s_ACT_005d776a
;   undefined4 s_ACT_005d776a+1
;   undefined4 s_ACT_005d776a+2
;   undefined4 s_ACT_005d776a+3
;   TerminatedCString s_rb_005d776f
;   TerminatedCString s_backdrop_005d7772
;   TerminatedCString s_rb_005d777b
;   TerminatedCString s_art_005d777e
;   TerminatedCString s_core_dcamera_cpp_005d7782
;   TerminatedCString s_CDemonCamera_loadImage_n_005d7796
;   TerminatedCString s_fog_005d77b7
;   undefined4 s_fog_005d77b7+1
;   undefined4 s_fog_005d77b7+2
;   ... and 46 more
;
; Called Functions:
;   FUN_00442d90
;   FUN_004436f0
;   FUN_00478fb0
;   FUN_00479180
;   FUN_00484f00
;   FUN_00484fb0
;   FUN_004ab020
;   FUN_005030e0
;   FUN_005bfb70
;   FUN_005c0b10
;   FUN_005c0d10
;   FUN_005c0f80
;   FUN_005c170c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044fff0
        ;   Label: FUN_0044fff0
    PUSH ESI                            ; 0044fff1
    PUSH EDI                            ; 0044fff2
    PUSH EBP                            ; 0044fff3
    SUB ESP,0x134                       ; 0044fff4
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0044fffa
    MOV EDI,ESP                         ; 00450001
    MOV DL,0x2e                         ; 00450003
    PUSH EDI                            ; 00450005
    MOV AL,byte ptr [ESI]               ; 00450006
        ;   Label: LAB_00450006
    MOV byte ptr [EDI],AL               ; 00450008
    CMP AL,0x0                          ; 0045000a
    JZ 0x0045001e                       ; 0045000c
        ;   XREF to: 0045001e (CONDITIONAL_JUMP)  ; LAB_0045001e
    MOV AL,byte ptr [ESI + 0x1]         ; 0045000e
    ADD ESI,0x2                         ; 00450011
    MOV byte ptr [EDI + 0x1],AL         ; 00450014
    ADD EDI,0x2                         ; 00450017
    CMP AL,0x0                          ; 0045001a
    JNZ 0x00450006                      ; 0045001c
        ;   XREF to: 00450006 (CONDITIONAL_JUMP)  ; LAB_00450006
    POP EDI                             ; 0045001e
        ;   Label: LAB_0045001e
    MOV ESI,ESP                         ; 0045001f
    MOV AL,byte ptr [ESI]               ; 00450021
        ;   Label: LAB_00450021
    CMP AL,DL                           ; 00450023
    JZ 0x00450039                       ; 00450025
        ;   XREF to: 00450039 (CONDITIONAL_JUMP)  ; LAB_00450039
    CMP AL,0x0                          ; 00450027
    JZ 0x00450037                       ; 00450029
        ;   XREF to: 00450037 (CONDITIONAL_JUMP)  ; LAB_00450037
    INC ESI                             ; 0045002b
    MOV AL,byte ptr [ESI]               ; 0045002c
    CMP AL,DL                           ; 0045002e
    JZ 0x00450039                       ; 00450030
        ;   XREF to: 00450039 (CONDITIONAL_JUMP)  ; LAB_00450039
    INC ESI                             ; 00450032
    CMP AL,0x0                          ; 00450033
    JNZ 0x00450021                      ; 00450035
        ;   XREF to: 00450021 (CONDITIONAL_JUMP)  ; LAB_00450021
    SUB ESI,ESI                         ; 00450037
        ;   Label: LAB_00450037
    MOV EDI,ESI                         ; 00450039
        ;   Label: LAB_00450039
    TEST ESI,ESI                        ; 0045003b
    JNZ 0x00450062                      ; 0045003d
        ;   XREF to: 00450062 (CONDITIONAL_JUMP)  ; LAB_00450062
    MOV EDX,0x5d772f                    ; 0045003f | = "..\\core\\dcamera.cpp"
    MOV ECX,0x9c1                       ; 00450044
    PUSH 0x5d7743                       ; 00450049 | = "CDemonCamera::loadImage - no extention"
    MOV dword ptr [0x01d1d400],EDX      ; 0045004e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00450054 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0045005a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0045005f
    MOV ESI,0x5d776a                    ; 00450062 | = ".ACT"
        ;   Label: LAB_00450062
    PUSH EDI                            ; 00450067
    MOV AL,byte ptr [ESI]               ; 00450068 | = ".ACT" | s_ACT_005d776a+2
        ;   Label: LAB_00450068
    MOV byte ptr [EDI],AL               ; 0045006a
    CMP AL,0x0                          ; 0045006c
    JZ 0x00450080                       ; 0045006e
        ;   XREF to: 00450080 (CONDITIONAL_JUMP)  ; LAB_00450080
    MOV AL,byte ptr [ESI + 0x1]         ; 00450070 | s_ACT_005d776a+1 | s_ACT_005d776a+3
    ADD ESI,0x2                         ; 00450073
    MOV byte ptr [EDI + 0x1],AL         ; 00450076
    ADD EDI,0x2                         ; 00450079
    CMP AL,0x0                          ; 0045007c
    JNZ 0x00450068                      ; 0045007e
        ;   XREF to: 00450068 (CONDITIONAL_JUMP)  ; LAB_00450068
    POP EDI                             ; 00450080
        ;   Label: LAB_00450080
    PUSH 0x5d776f                       ; 00450081 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 00450086
    PUSH EAX                            ; 0045008a
    PUSH 0x5d7772                       ; 0045008b | = "backdrop"
    CALL FUN_00479180                   ; 00450090
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 00450095
    MOV EBX,EAX                         ; 00450098
    TEST EAX,EAX                        ; 0045009a
    JZ 0x004507cc                       ; 0045009c
        ;   XREF to: 004507cc (CONDITIONAL_JUMP)  ; LAB_004507cc
    PUSH EBX                            ; 004500a2
        ;   Label: LAB_004500a2
    PUSH 0x3                            ; 004500a3
    PUSH 0x100                          ; 004500a5
    PUSH 0xb81198                       ; 004500aa | DAT_00b81198
    CALL FUN_005c0b10                   ; 004500af
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 004500b4
    PUSH EBX                            ; 004500b7
    CALL FUN_005c0d10                   ; 004500b8
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 004500bd
    LEA EDI,[ESP + 0x50]                ; 004500c0
    MOV ESI,dword ptr [ESP + 0x14c]     ; 004500c4
    MOV DL,0x2e                         ; 004500cb
    PUSH EDI                            ; 004500cd
    MOV AL,byte ptr [ESI]               ; 004500ce
        ;   Label: LAB_004500ce
    MOV byte ptr [EDI],AL               ; 004500d0
    CMP AL,0x0                          ; 004500d2
    JZ 0x004500e6                       ; 004500d4
        ;   XREF to: 004500e6 (CONDITIONAL_JUMP)  ; LAB_004500e6
    MOV AL,byte ptr [ESI + 0x1]         ; 004500d6
    ADD ESI,0x2                         ; 004500d9
    MOV byte ptr [EDI + 0x1],AL         ; 004500dc
    ADD EDI,0x2                         ; 004500df
    CMP AL,0x0                          ; 004500e2
    JNZ 0x004500ce                      ; 004500e4
        ;   XREF to: 004500ce (CONDITIONAL_JUMP)  ; LAB_004500ce
    POP EDI                             ; 004500e6
        ;   Label: LAB_004500e6
    LEA ESI,[ESP + 0x50]                ; 004500e7
    MOV AL,byte ptr [ESI]               ; 004500eb
        ;   Label: LAB_004500eb
    CMP AL,DL                           ; 004500ed
    JZ 0x00450103                       ; 004500ef
        ;   XREF to: 00450103 (CONDITIONAL_JUMP)  ; LAB_00450103
    CMP AL,0x0                          ; 004500f1
    JZ 0x00450101                       ; 004500f3
        ;   XREF to: 00450101 (CONDITIONAL_JUMP)  ; LAB_00450101
    INC ESI                             ; 004500f5
    MOV AL,byte ptr [ESI]               ; 004500f6
    CMP AL,DL                           ; 004500f8
    JZ 0x00450103                       ; 004500fa
        ;   XREF to: 00450103 (CONDITIONAL_JUMP)  ; LAB_00450103
    INC ESI                             ; 004500fc
    CMP AL,0x0                          ; 004500fd
    JNZ 0x004500eb                      ; 004500ff
        ;   XREF to: 004500eb (CONDITIONAL_JUMP)  ; LAB_004500eb
    SUB ESI,ESI                         ; 00450101
        ;   Label: LAB_00450101
    MOV EDI,ESI                         ; 00450103
        ;   Label: LAB_00450103
    TEST ESI,ESI                        ; 00450105
    JNZ 0x0045012c                      ; 00450107
        ;   XREF to: 0045012c (CONDITIONAL_JUMP)  ; LAB_0045012c
    MOV EBX,0x5d7782                    ; 00450109 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x9d4                       ; 0045010e
    PUSH 0x5d7796                       ; 00450113 | = "CDemonCamera::loadImage - no ext"
    MOV dword ptr [0x01d1d400],EBX      ; 00450118 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0045011e | DAT_01d1d404
    CALL FUN_005030e0                   ; 00450124
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00450129
    MOV ESI,0x5d77b7                    ; 0045012c | = ".fog"
        ;   Label: LAB_0045012c
    PUSH EDI                            ; 00450131
    MOV AL,byte ptr [ESI]               ; 00450132 | = ".fog" | s_fog_005d77b7+2
        ;   Label: LAB_00450132
    MOV byte ptr [EDI],AL               ; 00450134
    CMP AL,0x0                          ; 00450136
    JZ 0x0045014a                       ; 00450138
        ;   XREF to: 0045014a (CONDITIONAL_JUMP)  ; LAB_0045014a
    MOV AL,byte ptr [ESI + 0x1]         ; 0045013a | s_fog_005d77b7+1 | s_fog_005d77b7+3
    ADD ESI,0x2                         ; 0045013d
    MOV byte ptr [EDI + 0x1],AL         ; 00450140
    ADD EDI,0x2                         ; 00450143
    CMP AL,0x0                          ; 00450146
    JNZ 0x00450132                      ; 00450148
        ;   XREF to: 00450132 (CONDITIONAL_JUMP)  ; LAB_00450132
    POP EDI                             ; 0045014a
        ;   Label: LAB_0045014a
    PUSH 0x5d77bc                       ; 0045014b | = "rb"
    LEA EAX,[ESP + 0x54]                ; 00450150
    PUSH EAX                            ; 00450154
    PUSH 0x5d77bf                       ; 00450155 | = "backdrop"
    CALL FUN_00479180                   ; 0045015a
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 0045015f
    MOV dword ptr [ESP + 0x130],EAX     ; 00450162
    TEST EAX,EAX                        ; 00450169
    JZ 0x00450474                       ; 0045016b
        ;   XREF to: 00450474 (CONDITIONAL_JUMP)  ; LAB_00450474
    PUSH EAX                            ; 00450171
    PUSH 0x1                            ; 00450172
    PUSH 0x1000                         ; 00450174
    PUSH 0x1480e2c                      ; 00450179
    CALL FUN_005c0b10                   ; 0045017e
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    MOV EDI,dword ptr [0x01481e48]      ; 00450183 | DAT_01481e48
    ADD ESP,0x10                        ; 00450189
    TEST EDI,EDI                        ; 0045018c
    JZ 0x00450863                       ; 0045018e
        ;   XREF to: 00450863 (CONDITIONAL_JUMP)  ; LAB_00450863
    MOV EBP,0x10                        ; 00450194
    MOV EAX,[0x01481e38]                ; 00450199 | DAT_01481e38
    MOV EDX,dword ptr [0x01481e3c]      ; 0045019e | DAT_01481e3c
    MOV ECX,dword ptr [0x01481e40]      ; 004501a4 | DAT_01481e40
    OR EAX,EDX                          ; 004501aa
    MOV dword ptr [0x01480e28],EBP      ; 004501ac | DAT_01480e28
    OR EAX,ECX                          ; 004501b2
    JNZ 0x004501c0                      ; 004501b4
        ;   XREF to: 004501c0 (CONDITIONAL_JUMP)  ; LAB_004501c0
    MOV dword ptr [0x01480e28],0x1      ; 004501b6 | DAT_01480e28
    MOV ESI,dword ptr [ESP + 0x130]     ; 004501c0
        ;   Label: LAB_004501c0
    PUSH ESI                            ; 004501c7
    PUSH 0x1                            ; 004501c8
    PUSH 0x3                            ; 004501ca
    LEA EAX,[ESP + 0xb0]                ; 004501cc
    PUSH EAX                            ; 004501d3
    CALL FUN_005c0b10                   ; 004501d4
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 004501d9
    XOR AH,AH                           ; 004501dc
    PUSH 0x5d77c8                       ; 004501de | = "LZW"
    MOV byte ptr [ESP + 0xab],AH        ; 004501e3
    LEA EAX,[ESP + 0xa8]                ; 004501ea
    PUSH EAX                            ; 004501f1
    CALL FUN_005c0f80                   ; 004501f2
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 004501f7
    TEST EAX,EAX                        ; 004501fa
    JNZ 0x004507ee                      ; 004501fc
        ;   XREF to: 004507ee (CONDITIONAL_JUMP)  ; LAB_004507ee
    LEA EAX,[ESP + 0x50]                ; 00450202
        ;   Label: LAB_00450202
    PUSH EAX                            ; 00450206
    PUSH 0x5d77d0                       ; 00450207 | = "backdrop"
    CALL FUN_00478fb0                   ; 0045020c
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00478fb0()
    ADD ESP,0x8                         ; 00450211
    SUB EAX,0x1003                      ; 00450214
    MOV dword ptr [ESP + 0xa8],EAX      ; 00450219
    CMP EAX,0x1                         ; 00450220
    JGE 0x0045024d                      ; 00450223
        ;   XREF to: 0045024d (CONDITIONAL_JUMP)  ; LAB_0045024d
    LEA EAX,[ESP + 0x50]                ; 00450225
    PUSH EAX                            ; 00450229
    MOV ECX,0x5d77d9                    ; 0045022a | = "..\\core\\dcamera.cpp"
    MOV EBX,0x9f4                       ; 0045022f
    PUSH 0x5d77ed                       ; 00450234 | = "Hell froze loading %s"
    MOV dword ptr [0x01d1d400],ECX      ; 00450239 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0045023f | DAT_01d1d404
    CALL FUN_005030e0                   ; 00450245
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0045024a
    CMP dword ptr [ESP + 0xa8],0x7a120  ; 0045024d
        ;   Label: LAB_0045024d
    JBE 0x00450282                      ; 00450258
        ;   XREF to: 00450282 (CONDITIONAL_JUMP)  ; LAB_00450282
    LEA EAX,[ESP + 0x50]                ; 0045025a
    PUSH EAX                            ; 0045025e
    MOV EDI,0x5d7803                    ; 0045025f | = "..\\core\\dcamera.cpp"
    MOV EBP,0x9fa                       ; 00450264
    PUSH 0x5d7817                       ; 00450269 | = "%s too big to fit in decompress buffer"
    MOV dword ptr [0x01d1d400],EDI      ; 0045026e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00450274 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0045027a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0045027f
    MOV EAX,dword ptr [ESP + 0x130]     ; 00450282
        ;   Label: LAB_00450282
    PUSH EAX                            ; 00450289
    PUSH 0x1                            ; 0045028a
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0045028c
    PUSH EDX                            ; 00450293
    PUSH 0x7ddbb4                       ; 00450294 | DAT_007ddbb4
    CALL FUN_005c0b10                   ; 00450299
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 0045029e
    PUSH 0x13411c8                      ; 004502a1
    CALL FUN_004436f0                   ; 004502a6
        ;   XREF to: 004436f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004436f0()
    MOV EDX,dword ptr [0x01480e28]      ; 004502ab | DAT_01480e28
    LEA EAX,[EDX*0x4 + 0x0]             ; 004502b1
    ADD EAX,EDX                         ; 004502b8
    SHL EAX,0xa                         ; 004502ba
    MOV EDX,EAX                         ; 004502bd
    SHL EAX,0x4                         ; 004502bf
    ADD ESP,0x4                         ; 004502c2
    SUB EAX,EDX                         ; 004502c5
    PUSH 0x1                            ; 004502c7
    MOV dword ptr [ESP + 0xb0],EAX      ; 004502c9
    LEA EAX,[ESP + 0xb0]                ; 004502d0
    PUSH EAX                            ; 004502d7
    PUSH 0x1354e20                      ; 004502d8
    LEA EAX,[ESP + 0xb4]                ; 004502dd
    PUSH EAX                            ; 004502e4
    PUSH 0x7ddbb4                       ; 004502e5 | DAT_007ddbb4
    PUSH 0x13411c8                      ; 004502ea
    CALL FUN_00442d90                   ; 004502ef
        ;   XREF to: 00442d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00442d90()
    ADD ESP,0x18                        ; 004502f4
    TEST EAX,EAX                        ; 004502f7
    JZ 0x00450836                       ; 004502f9
        ;   XREF to: 00450836 (CONDITIONAL_JUMP)  ; LAB_00450836
    XOR ESI,ESI                         ; 004502ff
        ;   Label: LAB_004502ff
    MOV EDI,dword ptr [0x01480e28]      ; 00450301 | DAT_01480e28
    MOV dword ptr [ESP + 0xa0],ESI      ; 00450307
    TEST EDI,EDI                        ; 0045030e
    JLE 0x00450464                      ; 00450310
        ;   XREF to: 00450464 (CONDITIONAL_JUMP)  ; LAB_00450464
    MOV EBP,0xfffed400                  ; 00450316
    XOR EDI,EDI                         ; 0045031b
    MOV ESI,0x12c00                     ; 0045031d
    MOV dword ptr [ESP + 0x110],EDI     ; 00450322
    MOV dword ptr [ESP + 0x114],EBP     ; 00450329
    MOV dword ptr [ESP + 0x10c],ESI     ; 00450330
    MOV EAX,dword ptr [ESP + 0x110]     ; 00450337
        ;   Label: LAB_00450337
    MOV dword ptr [ESP + 0xfc],EAX      ; 0045033e
    MOV EAX,dword ptr [ESP + 0x114]     ; 00450345
    MOV dword ptr [ESP + 0x100],EAX     ; 0045034c
    MOV EAX,dword ptr [ESP + 0x110]     ; 00450353
    MOV dword ptr [ESP + 0x104],EAX     ; 0045035a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00450361
    MOV dword ptr [ESP + 0x108],EAX     ; 00450368
    MOV ECX,dword ptr [ESP + 0x104]     ; 0045036f
        ;   Label: LAB_0045036f
    MOV EDI,dword ptr [ESP + 0x100]     ; 00450376
    MOV EBP,dword ptr [ESP + 0xfc]      ; 0045037d
    XOR EDX,EDX                         ; 00450384
    XOR EBX,EBX                         ; 00450386
    LEA EAX,[EDX + EBP*0x1]             ; 00450388
        ;   Label: LAB_00450388
    MOV EAX,dword ptr [EAX + 0x1354e1d] ; 0045038b
    SAR EAX,0x18                        ; 00450391
    ADD EAX,EBX                         ; 00450394
    MOV ESI,dword ptr [ESP + 0xa0]      ; 00450396
    MOV EBX,EAX                         ; 0045039d
    SHL EAX,0x2                         ; 0045039f
    TEST ESI,ESI                        ; 004503a2
    JLE 0x004503b2                      ; 004503a4
        ;   XREF to: 004503b2 (CONDITIONAL_JUMP)  ; LAB_004503b2
    LEA ESI,[EDI + EDX*0x1]             ; 004503a6
    MOVZX ESI,byte ptr [ESI + 0x1354e20] ; 004503a9 | DAT_01342220 | DAT_01342221 | DAT_01342360
    ADD EAX,ESI                         ; 004503b0
    INC ECX                             ; 004503b2
        ;   Label: LAB_004503b2
    INC EDX                             ; 004503b3
    MOV byte ptr [ECX + 0x1354e1f],AL   ; 004503b4 | DAT_01354f60
    CMP EDX,0x140                       ; 004503ba
    JL 0x00450388                       ; 004503c0
        ;   XREF to: 00450388 (CONDITIONAL_JUMP)  ; LAB_00450388
    MOV EBP,dword ptr [ESP + 0x100]     ; 004503c2
    MOV EAX,dword ptr [ESP + 0x104]     ; 004503c9
    MOV EDI,dword ptr [ESP + 0xfc]      ; 004503d0
    MOV EDX,dword ptr [ESP + 0x108]     ; 004503d7
    ADD EBP,0x140                       ; 004503de
    ADD EAX,0x140                       ; 004503e4
    ADD EDI,0x140                       ; 004503e9
    MOV dword ptr [ESP + 0x100],EBP     ; 004503ef
    MOV dword ptr [ESP + 0x104],EAX     ; 004503f6
    MOV dword ptr [ESP + 0xfc],EDI      ; 004503fd
    CMP EAX,EDX                         ; 00450404
    JNZ 0x0045036f                      ; 00450406
        ;   XREF to: 0045036f (CONDITIONAL_JUMP)  ; LAB_0045036f
    MOV EBP,dword ptr [ESP + 0x10c]     ; 0045040c
    MOV EAX,dword ptr [ESP + 0x110]     ; 00450413
    MOV EDX,dword ptr [ESP + 0x114]     ; 0045041a
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00450421
    MOV EBX,dword ptr [0x01480e28]      ; 00450428 | DAT_01480e28
    ADD EBP,0x12c00                     ; 0045042e
    ADD EAX,0x12c00                     ; 00450434
    ADD EDX,0x12c00                     ; 00450439
    INC ECX                             ; 0045043f
    MOV dword ptr [ESP + 0x10c],EBP     ; 00450440
    MOV dword ptr [ESP + 0x110],EAX     ; 00450447
    MOV dword ptr [ESP + 0x114],EDX     ; 0045044e
    MOV dword ptr [ESP + 0xa0],ECX      ; 00450455
    CMP ECX,EBX                         ; 0045045c
    JL 0x00450337                       ; 0045045e
        ;   XREF to: 00450337 (CONDITIONAL_JUMP)  ; LAB_00450337
    MOV ECX,dword ptr [ESP + 0x130]     ; 00450464
        ;   Label: LAB_00450464
    PUSH ECX                            ; 0045046b
    CALL FUN_005c0d10                   ; 0045046c
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 00450471
    PUSH 0x5d7869                       ; 00450474 | DAT_005d7869
        ;   Label: LAB_00450474
    MOV EBX,dword ptr [ESP + 0x150]     ; 00450479
    PUSH EBX                            ; 00450480
    PUSH 0x5d786c                       ; 00450481 | = "backdrop"
    CALL FUN_00479180                   ; 00450486
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 0045048b
    MOV EBP,EAX                         ; 0045048e
    TEST EAX,EAX                        ; 00450490
    JZ 0x0045087b                       ; 00450492
        ;   XREF to: 0045087b (CONDITIONAL_JUMP)  ; LAB_0045087b
    XOR EDX,EDX                         ; 00450498
        ;   Label: LAB_00450498
    XOR EAX,EAX                         ; 0045049a
    MOV ECX,dword ptr [0x0061b4a0]      ; 0045049c | DAT_0061b4a0
        ;   Label: LAB_0045049c
    MOVZX ESI,byte ptr [EAX + 0xb8119a] ; 004504a2
    XOR EBX,EBX                         ; 004504a9
    MOVZX EDI,byte ptr [EAX + 0xb81198] ; 004504ab | DAT_00b81198
    MOV BL,byte ptr [EAX + 0xb81199]    ; 004504b2
    CMP ECX,0x20                        ; 004504b8
    JNZ 0x0045089d                      ; 004504bb
        ;   XREF to: 0045089d (CONDITIONAL_JUMP)  ; LAB_0045089d
    MOV CL,byte ptr [0x01c4e9d4]        ; 004504c1 | DAT_01c4e9d4
    SHL EDI,CL                          ; 004504c7
    MOV CL,byte ptr [0x01c4e9e0]        ; 004504c9 | DAT_01c4e9e0
    SHL EBX,CL                          ; 004504cf
    MOV CL,byte ptr [0x01c4e9ec]        ; 004504d1 | DAT_01c4e9ec
    SHL ESI,CL                          ; 004504d7
    OR EBX,EDI                          ; 004504d9
    MOV ECX,ESI                         ; 004504db
    OR ECX,EBX                          ; 004504dd
    ADD EDX,0x4                         ; 004504df
        ;   Label: LAB_004504df
    ADD EAX,0x3                         ; 004504e2
    MOV dword ptr [EDX + 0xb81498],ECX  ; 004504e5
    CMP EDX,0x400                       ; 004504eb
    JNZ 0x0045049c                      ; 004504f1
        ;   XREF to: 0045049c (CONDITIONAL_JUMP)  ; LAB_0045049c
    PUSH EBP                            ; 004504f3
    PUSH 0x1e0                          ; 004504f4
    PUSH 0x280                          ; 004504f9
    PUSH 0x1483a50                      ; 004504fe
    CALL FUN_005c0b10                   ; 00450503
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00450508
    PUSH EBP                            ; 0045050b
    CALL FUN_005c0d10                   ; 0045050c
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 00450511
    MOV EAX,dword ptr [ESP + 0x148]     ; 00450514
    MOV EBX,dword ptr [EAX + 0x148]     ; 0045051b
    CMP EBX,0xf0                        ; 00450521
    JNZ 0x004508ae                      ; 00450527
        ;   XREF to: 004508ae (CONDITIONAL_JUMP)  ; LAB_004508ae
    XOR ECX,ECX                         ; 0045052d
    MOV dword ptr [ESP + 0x124],ECX     ; 0045052f
    MOV EBP,0x1483a50                   ; 00450536
    MOV EDI,dword ptr [ESP + 0x148]     ; 0045053b
        ;   Label: LAB_0045053b
    MOV EAX,dword ptr [ESP + 0x124]     ; 00450542
    XOR EBX,EBX                         ; 00450549
    MOV ECX,dword ptr [ESP + 0x124]     ; 0045054b
    MOV dword ptr [ESP + 0xb0],EBX      ; 00450552
    MOV EDI,dword ptr [EDI + 0x158]     ; 00450559
    ADD EAX,EBP                         ; 0045055f
    ADD EDI,ECX                         ; 00450561
    ADD EDI,0x4                         ; 00450563
        ;   Label: LAB_00450563
    MOVZX ESI,byte ptr [EAX + 0x1]      ; 00450566
    ADD EAX,0x2                         ; 0045056a
    XOR EDX,EDX                         ; 0045056d
    XOR EBX,EBX                         ; 0045056f
    XOR ECX,ECX                         ; 00450571
    MOV ESI,dword ptr [ESI*0x4 + 0xb8149c] ; 00450573
    MOV DL,byte ptr [EAX + -0x2]        ; 0045057a
    MOV BL,byte ptr [EAX + 0x27e]       ; 0045057d
    MOV CL,byte ptr [EAX + 0x27f]       ; 00450583
    AND ESI,0xfcfcfc                    ; 00450589
    MOV EDX,dword ptr [EDX*0x4 + 0xb8149c] ; 0045058f
    MOV EBX,dword ptr [EBX*0x4 + 0xb8149c] ; 00450596
    MOV ECX,dword ptr [ECX*0x4 + 0xb8149c] ; 0045059d
    AND EDX,0xfcfcfc                    ; 004505a4
    SHR ESI,0x2                         ; 004505aa
    AND EBX,0xfcfcfc                    ; 004505ad
    AND ECX,0xfcfcfc                    ; 004505b3
    SHR EDX,0x2                         ; 004505b9
    SHR EBX,0x2                         ; 004505bc
    SHR ECX,0x2                         ; 004505bf
    ADD EDX,ESI                         ; 004505c2
    MOV ESI,dword ptr [ESP + 0xb0]      ; 004505c4
    ADD EDX,EBX                         ; 004505cb
    INC ESI                             ; 004505cd
    ADD EDX,ECX                         ; 004505ce
    MOV dword ptr [ESP + 0xb0],ESI      ; 004505d0
    MOV dword ptr [EDI + -0x4],EDX      ; 004505d7
    CMP ESI,0x140                       ; 004505da
    JL 0x00450563                       ; 004505e0
        ;   XREF to: 00450563 (CONDITIONAL_JUMP)  ; LAB_00450563
    MOV ECX,dword ptr [ESP + 0x124]     ; 004505e2
    ADD ECX,0x500                       ; 004505e9
    MOV dword ptr [ESP + 0x124],ECX     ; 004505ef
    CMP ECX,0x4b000                     ; 004505f6
    JNZ 0x0045053b                      ; 004505fc
        ;   XREF to: 0045053b (CONDITIONAL_JUMP)  ; LAB_0045053b
    LEA EAX,[EAX]                       ; 00450602
    LEA EDX,[EDX]                       ; 00450608
    MOV EAX,EAX                         ; 0045060e
    XOR EDI,EDI                         ; 00450610
        ;   Label: LAB_00450610
    XOR EBP,EBP                         ; 00450612
    MOV EDX,EDI                         ; 00450614
        ;   Label: LAB_00450614
    MOV EAX,EDI                         ; 00450616
    SAR EDX,0x1f                        ; 00450618
    SHL EDX,0x8                         ; 0045061b
    SBB EAX,EDX                         ; 0045061e
    SAR EAX,0x8                         ; 00450620
    MOV EBX,EBP                         ; 00450623
    XOR ECX,ECX                         ; 00450625
    IMUL ESI,EAX,0x280                  ; 00450627
    MOV EDX,ECX                         ; 0045062d
        ;   Label: LAB_0045062d
    MOV EAX,ECX                         ; 0045062f
    SAR EDX,0x1f                        ; 00450631
    SHL EDX,0x8                         ; 00450634
    SBB EAX,EDX                         ; 00450637
    SAR EAX,0x8                         ; 00450639
    INC EBX                             ; 0045063c
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x1483a50] ; 0045063d
    ADD ECX,0x280                       ; 00450644
    MOV byte ptr [EBX + 0x14cea4f],AL   ; 0045064a
    CMP ECX,0x28000                     ; 00450650
    JNZ 0x0045062d                      ; 00450656
        ;   XREF to: 0045062d (CONDITIONAL_JUMP)  ; LAB_0045062d
    ADD EBP,0x100                       ; 00450658
    ADD EDI,0x1e0                       ; 0045065e
    CMP EBP,0x10000                     ; 00450664
    JNZ 0x00450614                      ; 0045066a
        ;   XREF to: 00450614 (CONDITIONAL_JUMP)  ; LAB_00450614
    PUSH 0x61127c                       ; 0045066c | DAT_0061127c
    MOV ESI,dword ptr [0x00612560]      ; 00450671 | DAT_00612560
    PUSH ESI                            ; 00450677 | DAT_01bc120c
    CALL FUN_00484f00                   ; 00450678
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    MOV ESI,0x14cea50                   ; 0045067d
    ADD ESP,0x8                         ; 00450682
    MOV EDI,dword ptr [0x01c50930]      ; 00450685 | DAT_01c50930
    MOV ECX,EBP                         ; 0045068b
    PUSH EDI                            ; 0045068d
    MOV EAX,ECX                         ; 0045068e
    SHR ECX,0x2                         ; 00450690
    MOVSD.REP ES:EDI,ESI                ; 00450693 | DAT_014cea50 | DAT_014cea54
    MOV CL,AL                           ; 00450695
    AND CL,0x3                          ; 00450697
    MOVSB.REP ES:EDI,ESI                ; 0045069a | DAT_014cea54 | DAT_014cea55
    POP EDI                             ; 0045069c
    MOV ECX,0x300                       ; 0045069d
    MOV ESI,0xb81198                    ; 004506a2
    MOV EDI,dword ptr [0x01c4e3d0]      ; 004506a7 | DAT_01c4e3d0
    PUSH EDI                            ; 004506ad
    MOV EAX,ECX                         ; 004506ae
    SHR ECX,0x2                         ; 004506b0
    MOVSD.REP ES:EDI,ESI                ; 004506b3 | DAT_00b81198 | DAT_00b8119c
    MOV CL,AL                           ; 004506b5
    AND CL,0x3                          ; 004506b7
    MOVSB.REP ES:EDI,ESI                ; 004506ba | DAT_00b8119c | DAT_00b8119d
    POP EDI                             ; 004506bc
    PUSH 0xb81198                       ; 004506bd | DAT_00b81198
    PUSH 0x61127c                       ; 004506c2 | DAT_0061127c
    MOV EDI,dword ptr [0x00612560]      ; 004506c7 | DAT_00612560
    PUSH EDI                            ; 004506cd | DAT_01bc120c
    CALL FUN_00484fb0                   ; 004506ce
        ;   XREF to: 00484fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484fb0()
    ADD ESP,0xc                         ; 004506d3
    PUSH 0x12d40                        ; 004506d6
    MOV ECX,0xb23458                    ; 004506db
    XOR EDX,EDX                         ; 004506e0
    CALL FUN_004ab020                   ; 004506e2
        ;   XREF to: 004ab020 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab020()
    CMP dword ptr [0x0061b49c],0x180    ; 004506e7 | DAT_0061b49c
    JNZ 0x004507c1                      ; 004506f1
        ;   XREF to: 004507c1 (CONDITIONAL_JUMP)  ; LAB_004507c1
    XOR EAX,EAX                         ; 004506f7
    MOV dword ptr [ESP + 0x12c],EAX     ; 004506f9
    MOV dword ptr [ESP + 0x128],EAX     ; 00450700
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00450707
        ;   Label: LAB_00450707
    MOV EDX,EAX                         ; 0045070e
    MOV ECX,0xc0                        ; 00450710
    SAR EDX,0x1f                        ; 00450715
    IDIV ECX                            ; 00450718
    IMUL EBP,EAX,0x140                  ; 0045071a
    XOR EDI,EDI                         ; 00450720
    MOV EAX,dword ptr [ESP + 0x128]     ; 00450722
    XOR ESI,ESI                         ; 00450729
    MOV dword ptr [ESP + 0xf8],EAX      ; 0045072b
    MOV EDX,ESI                         ; 00450732
        ;   Label: LAB_00450732
    MOV EAX,ESI                         ; 00450734
    SAR EDX,0x1f                        ; 00450736
    SHL EDX,0x8                         ; 00450739
    SBB EAX,EDX                         ; 0045073c
    SAR EAX,0x8                         ; 0045073e
    MOV ECX,dword ptr [0x01480e28]      ; 00450741 | DAT_01480e28
    MOV EBX,EAX                         ; 00450747
    XOR EAX,EAX                         ; 00450749
    TEST ECX,ECX                        ; 0045074b
    JLE 0x0045077e                      ; 0045074d
        ;   XREF to: 0045077e (CONDITIONAL_JUMP)  ; LAB_0045077e
    MOV EDX,dword ptr [ESP + 0xf8]      ; 0045074f
    LEA ECX,[EBX + EBP*0x1]             ; 00450756
    ADD EDX,EDI                         ; 00450759
    ADD EDX,0x12c00                     ; 0045075b
        ;   Label: LAB_0045075b
    MOV BL,byte ptr [ECX + 0x1354e20]   ; 00450761
    INC EAX                             ; 00450767
    MOV byte ptr [EDX + 0x1342220],BL   ; 00450768
    MOV EBX,dword ptr [0x01480e28]      ; 0045076e | DAT_01480e28
    ADD ECX,0x12c00                     ; 00450774
    CMP EAX,EBX                         ; 0045077a
    JL 0x0045075b                       ; 0045077c
        ;   XREF to: 0045075b (CONDITIONAL_JUMP)  ; LAB_0045075b
    INC EDI                             ; 0045077e
        ;   Label: LAB_0045077e
    ADD ESI,0x140                       ; 0045077f
    CMP EDI,0x100                       ; 00450785
    JL 0x00450732                       ; 0045078b
        ;   XREF to: 00450732 (CONDITIONAL_JUMP)  ; LAB_00450732
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0045078d
    MOV ESI,dword ptr [ESP + 0x128]     ; 00450794
    ADD EDI,0xf0                        ; 0045079b
    ADD ESI,0x140                       ; 004507a1
    MOV dword ptr [ESP + 0x12c],EDI     ; 004507a7
    MOV dword ptr [ESP + 0x128],ESI     ; 004507ae
    CMP EDI,0xb400                      ; 004507b5
    JNZ 0x00450707                      ; 004507bb
        ;   XREF to: 00450707 (CONDITIONAL_JUMP)  ; LAB_00450707
    ADD ESP,0x134                       ; 004507c1
        ;   Label: LAB_004507c1
    POP EBP                             ; 004507c7
    POP EDI                             ; 004507c8
    POP ESI                             ; 004507c9
    POP EBX                             ; 004507ca
    RET                                 ; 004507cb
    PUSH 0x5d777b                       ; 004507cc | = "rb"
        ;   Label: LAB_004507cc
    LEA EAX,[ESP + 0x4]                 ; 004507d1
    PUSH EAX                            ; 004507d5
    PUSH 0x5d777e                       ; 004507d6 | = "art"
    CALL FUN_00479180                   ; 004507db
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 004507e0
    MOV EBX,EAX                         ; 004507e3
    TEST EAX,EAX                        ; 004507e5
    JZ 0x004507c1                       ; 004507e7
        ;   XREF to: 004507c1 (CONDITIONAL_JUMP)  ; LAB_004507c1
    JMP 0x004500a2                      ; 004507e9
        ;   XREF to: 004500a2 (UNCONDITIONAL_JUMP)  ; LAB_004500a2
    PUSH 0x5d77cc                       ; 004507ee | = "EFD"
        ;   Label: LAB_004507ee
    LEA EAX,[ESP + 0xa8]                ; 004507f3
    PUSH EAX                            ; 004507fa
    CALL FUN_005c0f80                   ; 004507fb
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 00450800
    TEST EAX,EAX                        ; 00450803
    JZ 0x00450202                       ; 00450805
        ;   XREF to: 00450202 (CONDITIONAL_JUMP)  ; LAB_00450202
    PUSH 0x1                            ; 0045080b
    PUSH -0x3                           ; 0045080d
    PUSH ESI                            ; 0045080f
    CALL FUN_005c170c                   ; 00450810
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined FUN_005c170c()
    ADD ESP,0xc                         ; 00450815
    PUSH ESI                            ; 00450818
    MOV EAX,[0x01480e28]                ; 00450819 | DAT_01480e28
    PUSH EAX                            ; 0045081e
    PUSH 0x12c00                        ; 0045081f
    PUSH 0x1354e20                      ; 00450824
    CALL FUN_005c0b10                   ; 00450829
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 0045082e
    JMP 0x00450464                      ; 00450831
        ;   XREF to: 00450464 (UNCONDITIONAL_JUMP)  ; LAB_00450464
    LEA EAX,[ESP + 0x50]                ; 00450836
        ;   Label: LAB_00450836
    PUSH EAX                            ; 0045083a
    MOV ECX,0x5d783e                    ; 0045083b | = "..\\core\\dcamera.cpp"
    MOV EBX,0xa03                       ; 00450840
    PUSH 0x5d7852                       ; 00450845 | = "Error decompressing %s"
    MOV dword ptr [0x01d1d400],ECX      ; 0045084a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00450850 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00450856
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0045085b
    JMP 0x004502ff                      ; 0045085e
        ;   XREF to: 004502ff (UNCONDITIONAL_JUMP)  ; LAB_004502ff
    PUSH 0x12c000                       ; 00450863
        ;   Label: LAB_00450863
    PUSH EDI                            ; 00450868
    PUSH 0x1354e20                      ; 00450869
    CALL FUN_005bfb70                   ; 0045086e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 00450873
    JMP 0x00450464                      ; 00450876
        ;   XREF to: 00450464 (UNCONDITIONAL_JUMP)  ; LAB_00450464
    PUSH 0x5d7875                       ; 0045087b | DAT_005d7875
        ;   Label: LAB_0045087b
    PUSH EBX                            ; 00450880
    PUSH 0x5d7878                       ; 00450881 | DAT_005d7878
    CALL FUN_00479180                   ; 00450886
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 0045088b
    MOV EBP,EAX                         ; 0045088e
    TEST EAX,EAX                        ; 00450890
    JZ 0x004507c1                       ; 00450892
        ;   XREF to: 004507c1 (CONDITIONAL_JUMP)  ; LAB_004507c1
    JMP 0x00450498                      ; 00450898
        ;   XREF to: 00450498 (UNCONDITIONAL_JUMP)  ; LAB_00450498
    MOV ECX,EBX                         ; 0045089d
        ;   Label: LAB_0045089d
    SHL EDI,0x10                        ; 0045089f
    SHL ECX,0x8                         ; 004508a2
    OR ECX,EDI                          ; 004508a5
    OR ECX,ESI                          ; 004508a7
    JMP 0x004504df                      ; 004508a9
        ;   XREF to: 004504df (UNCONDITIONAL_JUMP)  ; LAB_004504df
    CMP EBX,0x1e0                       ; 004508ae
        ;   Label: LAB_004508ae
    JNZ 0x004508ea                      ; 004508b4
        ;   XREF to: 004508ea (CONDITIONAL_JUMP)  ; LAB_004508ea
    MOV ECX,dword ptr [ESP + 0x148]     ; 004508b6
    MOV EAX,0x1483a50                   ; 004508bd
    XOR EDX,EDX                         ; 004508c2
    MOV ECX,dword ptr [ECX + 0x158]     ; 004508c4
    XOR EBX,EBX                         ; 004508ca
        ;   Label: LAB_004508ca
    MOV BL,byte ptr [EAX]               ; 004508cc | DAT_01483a50 | DAT_01483a51
    INC EAX                             ; 004508ce
    ADD ECX,0x4                         ; 004508cf
    MOV EBX,dword ptr [EBX*0x4 + 0xb8149c] ; 004508d2
    INC EDX                             ; 004508d9
    MOV dword ptr [ECX + -0x4],EBX      ; 004508da
    CMP EDX,0x4b000                     ; 004508dd
    JL 0x004508ca                       ; 004508e3
        ;   XREF to: 004508ca (CONDITIONAL_JUMP)  ; LAB_004508ca
    JMP 0x00450610                      ; 004508e5
        ;   XREF to: 00450610 (UNCONDITIONAL_JUMP)  ; LAB_00450610
    JLE 0x004509e2                      ; 004508ea
        ;   XREF to: 004509e2 (CONDITIONAL_JUMP)  ; LAB_004509e2
        ;   Label: LAB_004508ea
    MOV EAX,dword ptr [EAX + 0x158]     ; 004508f0
    MOV dword ptr [ESP + 0xb4],EAX      ; 004508f6
    MOV EAX,dword ptr [ESP + 0x148]     ; 004508fd
    XOR EBP,EBP                         ; 00450904
    MOV EDX,dword ptr [EAX + 0x148]     ; 00450906
    MOV dword ptr [ESP + 0xb8],EBP      ; 0045090c
    TEST EDX,EDX                        ; 00450913
    JLE 0x00450610                      ; 00450915
        ;   XREF to: 00450610 (CONDITIONAL_JUMP)  ; LAB_00450610
    MOV dword ptr [ESP + 0x120],EBP     ; 0045091b
    MOV EAX,dword ptr [ESP + 0x148]     ; 00450922
        ;   Label: LAB_00450922
    MOV EDI,dword ptr [EAX + 0x144]     ; 00450929
    XOR ESI,ESI                         ; 0045092f
    TEST EDI,EDI                        ; 00450931
    JLE 0x004509a5                      ; 00450933
        ;   XREF to: 004509a5 (CONDITIONAL_JUMP)  ; LAB_004509a5
    MOV EBX,dword ptr [ESP + 0x120]     ; 00450935
    XOR ECX,ECX                         ; 0045093c
    MOV EDI,dword ptr [ESP + 0x148]     ; 0045093e
        ;   Label: LAB_0045093e
    MOV EDX,EBX                         ; 00450945
    MOV EAX,EBX                         ; 00450947
    SAR EDX,0x1f                        ; 00450949
    IDIV dword ptr [EDI + 0x148]        ; 0045094c
    IMUL EDI,EAX,0x280                  ; 00450952
    MOV EDX,ECX                         ; 00450958
    MOV EBP,dword ptr [ESP + 0x148]     ; 0045095a
    SAR EDX,0x1f                        ; 00450961
    MOV EAX,ECX                         ; 00450964
    IDIV dword ptr [EBP + 0x144]        ; 00450966
    ADD EAX,EDI                         ; 0045096c
    ADD EAX,0x1483a50                   ; 0045096e
    MOV AL,byte ptr [EAX]               ; 00450973 | DAT_01483a50
    AND EAX,0xff                        ; 00450975
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0045097a
    MOV EAX,dword ptr [EAX*0x4 + 0xb8149c] ; 00450981
    ADD ECX,0x280                       ; 00450988
    MOV dword ptr [EDX],EAX             ; 0045098e
    LEA EAX,[EDX + 0x4]                 ; 00450990
    INC ESI                             ; 00450993
    MOV EDX,dword ptr [EBP + 0x144]     ; 00450994
    MOV dword ptr [ESP + 0xb4],EAX      ; 0045099a
    CMP ESI,EDX                         ; 004509a1
    JL 0x0045093e                       ; 004509a3
        ;   XREF to: 0045093e (CONDITIONAL_JUMP)  ; LAB_0045093e
    MOV EBP,dword ptr [ESP + 0x120]     ; 004509a5
        ;   Label: LAB_004509a5
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004509ac
    MOV EDX,dword ptr [ESP + 0x148]     ; 004509b3
    ADD EBP,0x1e0                       ; 004509ba
    INC EAX                             ; 004509c0
    MOV ECX,dword ptr [EDX + 0x148]     ; 004509c1
    MOV dword ptr [ESP + 0x120],EBP     ; 004509c7
    MOV dword ptr [ESP + 0xb8],EAX      ; 004509ce
    CMP EAX,ECX                         ; 004509d5
    JGE 0x00450610                      ; 004509d7
        ;   XREF to: 00450610 (CONDITIONAL_JUMP)  ; LAB_00450610
    JMP 0x00450922                      ; 004509dd
        ;   XREF to: 00450922 (UNCONDITIONAL_JUMP)  ; LAB_00450922
    MOV EAX,dword ptr [EAX + 0x158]     ; 004509e2
        ;   Label: LAB_004509e2
    MOV dword ptr [ESP + 0xbc],EAX      ; 004509e8
    MOV EAX,0x9600000                   ; 004509ef
    MOV ECX,dword ptr [ESP + 0x148]     ; 004509f4
    MOV EDX,EAX                         ; 004509fb
    MOV EBP,dword ptr [ECX + 0x144]     ; 004509fd
    SAR EDX,0x1f                        ; 00450a03
    IDIV EBP                            ; 00450a06
    MOV EDX,EAX                         ; 00450a08
    MOV EBX,dword ptr [ECX + 0x148]     ; 00450a0a
    SAR EDX,0x1f                        ; 00450a10
    IDIV EBX                            ; 00450a13
    XOR ESI,ESI                         ; 00450a15
    MOV dword ptr [ESP + 0xc8],ESI      ; 00450a17
    MOV dword ptr [ESP + 0xc0],EAX      ; 00450a1e
    TEST EBX,EBX                        ; 00450a25
    JLE 0x00450610                      ; 00450a27
        ;   XREF to: 00450610 (CONDITIONAL_JUMP)  ; LAB_00450610
    MOV dword ptr [ESP + 0x11c],ESI     ; 00450a2d
    XOR EAX,EAX                         ; 00450a34
        ;   Label: LAB_00450a34
    MOV dword ptr [ESP + 0xc4],EAX      ; 00450a36
    MOV EAX,dword ptr [ESP + 0x148]     ; 00450a3d
    CMP dword ptr [EAX + 0x144],0x0     ; 00450a44
    JLE 0x00450e99                      ; 00450a4b
        ;   XREF to: 00450e99 (CONDITIONAL_JUMP)  ; LAB_00450e99
    XOR EBP,EBP                         ; 00450a51
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00450a53
    MOV dword ptr [ESP + 0x118],EBP     ; 00450a5a
    MOV dword ptr [ESP + 0xe0],EAX      ; 00450a61
    MOV EAX,dword ptr [ESP + 0x118]     ; 00450a68
        ;   Label: LAB_00450a68
    MOV ECX,dword ptr [ESP + 0x148]     ; 00450a6f
    MOV EDX,EAX                         ; 00450a76
    MOV EBX,dword ptr [ECX + 0x144]     ; 00450a78
    SAR EDX,0x1f                        ; 00450a7e
    IDIV EBX                            ; 00450a81
    MOV EBX,EAX                         ; 00450a83
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00450a85
    MOV EDX,EAX                         ; 00450a8c
    MOV ESI,dword ptr [ECX + 0x148]     ; 00450a8e
    SAR EDX,0x1f                        ; 00450a94
    IDIV ESI                            ; 00450a97
    MOV ECX,EAX                         ; 00450a99
    MOV EAX,0x27d80                     ; 00450a9b
    MOV ESI,dword ptr [ESP + 0x148]     ; 00450aa0
    MOV EDX,EAX                         ; 00450aa7
    MOV EDI,dword ptr [ESI + 0x144]     ; 00450aa9
    SAR EDX,0x1f                        ; 00450aaf
    IDIV EDI                            ; 00450ab2
    ADD EAX,EBX                         ; 00450ab4
    MOV dword ptr [ESP + 0xd8],EAX      ; 00450ab6
    MOV EAX,0x1de20                     ; 00450abd
    MOV EDX,EAX                         ; 00450ac2
    MOV EBP,dword ptr [ESI + 0x148]     ; 00450ac4
    SAR EDX,0x1f                        ; 00450aca
    IDIV EBP                            ; 00450acd
    MOV EBP,ECX                         ; 00450acf
    SAR EBP,0x8                         ; 00450ad1
    IMUL EBP,EBP,0x280                  ; 00450ad4
    ADD EAX,ECX                         ; 00450ada
    MOV dword ptr [ESP + 0xdc],EAX      ; 00450adc
    MOV EAX,EBX                         ; 00450ae3
    SAR EAX,0x8                         ; 00450ae5
    MOV dword ptr [ESP + 0xe4],EAX      ; 00450ae8
    ADD EAX,EBP                         ; 00450aef
    ADD EAX,0x1483a50                   ; 00450af1
    MOV AL,byte ptr [EAX]               ; 00450af6 | DAT_01483a50
    AND EAX,0xff                        ; 00450af8
    MOV EAX,dword ptr [EAX*0x4 + 0xb8149c] ; 00450afd
    MOV EDX,EAX                         ; 00450b04
    MOV EDI,0xff                        ; 00450b06
    AND EDX,0xff                        ; 00450b0b
    AND ECX,0xff                        ; 00450b11
    MOV dword ptr [ESP + 0xcc],EDX      ; 00450b17
    SUB EDI,ECX                         ; 00450b1e
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00450b20
    IMUL ECX,EDI                        ; 00450b27
    MOV EDX,EAX                         ; 00450b2a
    SHR EDX,0x8                         ; 00450b2c
    AND EDX,0xff                        ; 00450b2f
    MOV dword ptr [ESP + 0xd0],EDX      ; 00450b35
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00450b3c
    IMUL ESI,EDI                        ; 00450b43
    SHR EAX,0x10                        ; 00450b46
    AND EAX,0xff                        ; 00450b49
    MOV dword ptr [ESP + 0xd4],EAX      ; 00450b4e
    MOV EDX,EBX                         ; 00450b55
    MOV EBX,dword ptr [ESP + 0xd4]      ; 00450b57
    IMUL EBX,EDI                        ; 00450b5e
    MOV EAX,0xff                        ; 00450b61
    AND EDX,0xff                        ; 00450b66
    SUB EAX,EDX                         ; 00450b6c
    MOV EDX,EAX                         ; 00450b6e
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450b70
    IMUL EAX,EDX                        ; 00450b77
    ADD ECX,EAX                         ; 00450b7a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450b7c
    IMUL EAX,EDX                        ; 00450b83
    ADD ESI,EAX                         ; 00450b86
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00450b88
    IMUL EAX,EDX                        ; 00450b8f
    ADD EBX,EAX                         ; 00450b92
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00450b94
    SAR EAX,0x8                         ; 00450b9b
    ADD EBP,EAX                         ; 00450b9e
    ADD EBP,0x1483a50                   ; 00450ba0
    MOVZX EBP,byte ptr [EBP]            ; 00450ba6 | DAT_01483a50
    MOV dword ptr [ESP + 0xe8],EAX      ; 00450baa
    MOV EAX,dword ptr [EBP*0x4 + 0xb8149c] ; 00450bb1
    MOV EBP,EAX                         ; 00450bb8
    AND EBP,0xff                        ; 00450bba
    MOV dword ptr [ESP + 0xcc],EBP      ; 00450bc0
    MOV EBP,EAX                         ; 00450bc7
    SHR EAX,0x10                        ; 00450bc9
    AND EAX,0xff                        ; 00450bcc
    MOV dword ptr [ESP + 0xd4],EAX      ; 00450bd1
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450bd8
    IMUL EAX,EDI                        ; 00450bdf
    SHR EBP,0x8                         ; 00450be2
    AND EBP,0xff                        ; 00450be5
    MOV dword ptr [ESP + 0xd0],EBP      ; 00450beb
    MOV EBP,dword ptr [ESP + 0xd8]      ; 00450bf2
    AND EBP,0xff                        ; 00450bf9
    MOV dword ptr [ESP + 0xec],EAX      ; 00450bff
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450c06
    IMUL EAX,EBP                        ; 00450c0d
    ADD EAX,dword ptr [ESP + 0xec]      ; 00450c10
    ADD ECX,EAX                         ; 00450c17
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450c19
    IMUL EAX,EDI                        ; 00450c20
    MOV dword ptr [ESP + 0xec],EAX      ; 00450c23
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450c2a
    IMUL EAX,EBP                        ; 00450c31
    ADD EAX,dword ptr [ESP + 0xec]      ; 00450c34
    ADD ESI,EAX                         ; 00450c3b
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00450c3d
    IMUL EDI,EAX                        ; 00450c44
    IMUL EAX,EBP                        ; 00450c47
    ADD EDI,EAX                         ; 00450c4a
    ADD EBX,EDI                         ; 00450c4c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00450c4e
    SAR EAX,0x8                         ; 00450c55
    IMUL EAX,EAX,0x280                  ; 00450c58
    MOV EDI,dword ptr [ESP + 0xe4]      ; 00450c5e
    MOV dword ptr [ESP + 0xec],EAX      ; 00450c65
    ADD EAX,EDI                         ; 00450c6c
    ADD EAX,0x1483a50                   ; 00450c6e
    MOV AL,byte ptr [EAX]               ; 00450c73 | DAT_01483a50
    AND EAX,0xff                        ; 00450c75
    MOV EAX,dword ptr [EAX*0x4 + 0xb8149c] ; 00450c7a
    MOV EDI,EAX                         ; 00450c81
    AND EDI,0xff                        ; 00450c83
    MOV dword ptr [ESP + 0xcc],EDI      ; 00450c89
    MOV EDI,EAX                         ; 00450c90
    SHR EAX,0x10                        ; 00450c92
    AND EAX,0xff                        ; 00450c95
    MOV dword ptr [ESP + 0xd4],EAX      ; 00450c9a
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450ca1
    IMUL EAX,EDX                        ; 00450ca8
    SHR EDI,0x8                         ; 00450cab
    AND EDI,0xff                        ; 00450cae
    MOV dword ptr [ESP + 0xd0],EDI      ; 00450cb4
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00450cbb
    AND EDI,0xff                        ; 00450cc2
    MOV dword ptr [ESP + 0xf4],EAX      ; 00450cc8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450ccf
    IMUL EAX,EDI                        ; 00450cd6
    MOV dword ptr [ESP + 0xf0],EAX      ; 00450cd9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00450ce0
    ADD EAX,dword ptr [ESP + 0xf0]      ; 00450ce7
    ADD ECX,EAX                         ; 00450cee
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450cf0
    IMUL EAX,EDX                        ; 00450cf7
    MOV dword ptr [ESP + 0xf0],EAX      ; 00450cfa
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450d01
    IMUL EAX,EDI                        ; 00450d08
    MOV dword ptr [ESP + 0xf4],EAX      ; 00450d0b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00450d12
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00450d19
    ADD ESI,EAX                         ; 00450d20
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00450d22
    IMUL EAX,EDX                        ; 00450d29
    MOV dword ptr [ESP + 0xf4],EAX      ; 00450d2c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00450d33
    IMUL EAX,EDI                        ; 00450d3a
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00450d3d
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00450d44
    ADD EBX,EAX                         ; 00450d4b
    MOV EAX,dword ptr [ESP + 0xec]      ; 00450d4d
    ADD EAX,EDX                         ; 00450d54
    ADD EAX,0x1483a50                   ; 00450d56
    MOV AL,byte ptr [EAX]               ; 00450d5b | DAT_01483a50
    AND EAX,0xff                        ; 00450d5d
    MOV EAX,dword ptr [EAX*0x4 + 0xb8149c] ; 00450d62
    MOV EDX,EAX                         ; 00450d69
    AND EDX,0xff                        ; 00450d6b
    MOV dword ptr [ESP + 0xcc],EDX      ; 00450d71
    MOV EDX,EAX                         ; 00450d78
    SHR EAX,0x10                        ; 00450d7a
    AND EAX,0xff                        ; 00450d7d
    MOV dword ptr [ESP + 0xd4],EAX      ; 00450d82
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450d89
    IMUL EAX,EBP                        ; 00450d90
    MOV dword ptr [ESP + 0xf4],EAX      ; 00450d93
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00450d9a
    IMUL EAX,EDI                        ; 00450da1
    SHR EDX,0x8                         ; 00450da4
    AND EDX,0xff                        ; 00450da7
    MOV dword ptr [ESP + 0xd0],EDX      ; 00450dad
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00450db4
    ADD ECX,EAX                         ; 00450dbb
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450dbd
    IMUL EAX,EBP                        ; 00450dc4
    MOV dword ptr [ESP + 0xf4],EAX      ; 00450dc7
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00450dce
    IMUL EAX,EDI                        ; 00450dd5
    ADD EAX,dword ptr [ESP + 0xf4]      ; 00450dd8
    ADD ESI,EAX                         ; 00450ddf
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00450de1
    IMUL EBP,EAX                        ; 00450de8
    IMUL EAX,EDI                        ; 00450deb
    ADD EAX,EBP                         ; 00450dee
    XOR EDX,EDX                         ; 00450df0
    ADD EBX,EAX                         ; 00450df2
    MOV EAX,ECX                         ; 00450df4
    MOV ECX,dword ptr [ESP + 0xc0]      ; 00450df6
    DIV ECX                             ; 00450dfd
    MOV ECX,EAX                         ; 00450dff
    XOR EDX,EDX                         ; 00450e01
    MOV EAX,ESI                         ; 00450e03
    DIV dword ptr [ESP + 0xc0]          ; 00450e05
    MOV EDI,dword ptr [ESP + 0xc0]      ; 00450e0c
    MOV ESI,EAX                         ; 00450e13
    XOR EDX,EDX                         ; 00450e15
    MOV EAX,EBX                         ; 00450e17
    DIV EDI                             ; 00450e19
    MOV EBX,EAX                         ; 00450e1b
    CMP ECX,0xff                        ; 00450e1d
    JBE 0x00450e2a                      ; 00450e23
        ;   XREF to: 00450e2a (CONDITIONAL_JUMP)  ; LAB_00450e2a
    MOV ECX,0xff                        ; 00450e25
    CMP ESI,0xff                        ; 00450e2a
        ;   Label: LAB_00450e2a
    JBE 0x00450e37                      ; 00450e30
        ;   XREF to: 00450e37 (CONDITIONAL_JUMP)  ; LAB_00450e37
    MOV ESI,0xff                        ; 00450e32
    CMP EBX,0xff                        ; 00450e37
        ;   Label: LAB_00450e37
    JBE 0x00450e44                      ; 00450e3d
        ;   XREF to: 00450e44 (CONDITIONAL_JUMP)  ; LAB_00450e44
    MOV EBX,0xff                        ; 00450e3f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00450e44
        ;   Label: LAB_00450e44
    MOV EDX,dword ptr [ESP + 0x148]     ; 00450e4b
    SHL ESI,0x8                         ; 00450e52
    SHL EBX,0x10                        ; 00450e55
    OR ECX,ESI                          ; 00450e58
    MOV ESI,dword ptr [ESP + 0xc4]      ; 00450e5a
    OR ECX,EBX                          ; 00450e61
    MOV EBX,dword ptr [ESP + 0x118]     ; 00450e63
    INC ESI                             ; 00450e6a
    MOV dword ptr [EAX],ECX             ; 00450e6b
    LEA ECX,[EAX + 0x4]                 ; 00450e6d
    ADD EBX,0x28000                     ; 00450e70
    MOV dword ptr [ESP + 0xc4],ESI      ; 00450e76
    MOV EDI,dword ptr [EDX + 0x144]     ; 00450e7d
    MOV dword ptr [ESP + 0xbc],ECX      ; 00450e83
    MOV dword ptr [ESP + 0x118],EBX     ; 00450e8a
    CMP ESI,EDI                         ; 00450e91
    JL 0x00450a68                       ; 00450e93
        ;   XREF to: 00450a68 (CONDITIONAL_JUMP)  ; LAB_00450a68
    MOV EBX,dword ptr [ESP + 0x11c]     ; 00450e99
        ;   Label: LAB_00450e99
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00450ea0
    MOV EDX,dword ptr [ESP + 0x148]     ; 00450ea7
    ADD EBX,0x1e000                     ; 00450eae
    INC ESI                             ; 00450eb4
    MOV EDI,dword ptr [EDX + 0x148]     ; 00450eb5
    MOV dword ptr [ESP + 0x11c],EBX     ; 00450ebb
    MOV dword ptr [ESP + 0xc8],ESI      ; 00450ec2
    CMP ESI,EDI                         ; 00450ec9
    JGE 0x00450610                      ; 00450ecb
        ;   XREF to: 00450610 (CONDITIONAL_JUMP)  ; LAB_00450610
    JMP 0x00450a34                      ; 00450ed1
        ;   XREF to: 00450a34 (UNCONDITIONAL_JUMP)  ; LAB_00450a34

