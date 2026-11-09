; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_reorderShortBlockSamples_FUN_00528f90(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
;   sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_0052b450 at 0052bd43
;
; Referenced Globals:
;   undefined4 DAT_006207f8
;   undefined4 DAT_006207fc
;   undefined4 DAT_00620800
;   undefined4 DAT_00620804
;   undefined4 DAT_00620808
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528f90
        ;   Label: sound_mp3.cpp_reorderShortBlockSamples_FUN_00528f90
    PUSH ESI                            ; 00528f91
    PUSH EDI                            ; 00528f92
    PUSH EBP                            ; 00528f93
    SUB ESP,0x58                        ; 00528f94
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00528f97
    MOV EDI,dword ptr [ESP + 0x70]      ; 00528f9b
    MOV ECX,dword ptr [ESP + 0x78]      ; 00528f9f
    MOV ECX,dword ptr [ECX]             ; 00528fa3
    MOV EDX,dword ptr [ECX]             ; 00528fa5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00528fa7
    SUB EAX,EDX                         ; 00528fae
    MOV EDX,dword ptr [ECX + 0x10]      ; 00528fb0
    LEA EBX,[EDI + 0x48]                ; 00528fb3
    ADD EDX,EAX                         ; 00528fb6
    XOR ECX,ECX                         ; 00528fb8
    MOV dword ptr [ESP],EDX             ; 00528fba
    IMUL EAX,ECX,0x48                   ; 00528fbd
        ;   Label: LAB_00528fbd
    MOV EDX,EBX                         ; 00528fc0
    ADD EAX,EDI                         ; 00528fc2
    MOV dword ptr [EAX],0x0             ; 00528fc4
        ;   Label: LAB_00528fc4
    ADD EAX,0x4                         ; 00528fca
    CMP EAX,EDX                         ; 00528fcd
    JNZ 0x00528fc4                      ; 00528fcf
        ;   XREF to: 00528fc4 (CONDITIONAL_JUMP)  ; LAB_00528fc4
    INC ECX                             ; 00528fd1
    ADD EBX,0x48                        ; 00528fd2
    CMP ECX,0x20                        ; 00528fd5
    JL 0x00528fbd                       ; 00528fd8
        ;   XREF to: 00528fbd (CONDITIONAL_JUMP)  ; LAB_00528fbd
    MOV EAX,dword ptr [ESP + 0x74]      ; 00528fda
    CMP dword ptr [EAX + 0x10],0x0      ; 00528fde
    JZ 0x00528fea                       ; 00528fe2
        ;   XREF to: 00528fea (CONDITIONAL_JUMP)  ; LAB_00528fea
    CMP dword ptr [EAX + 0x14],0x2      ; 00528fe4
    JZ 0x0052902d                       ; 00528fe8
        ;   XREF to: 0052902d (CONDITIONAL_JUMP)  ; LAB_0052902d
    LEA EBP,[ESI + 0x48]                ; 00528fea
        ;   Label: LAB_00528fea
    MOV dword ptr [ESP + 0x10],EDI      ; 00528fed
    XOR EBX,EBX                         ; 00528ff1
    MOV EDI,0x48                        ; 00528ff3
    IMUL EAX,EBX,0x48                   ; 00528ff8
        ;   Label: LAB_00528ff8
    MOV EDX,dword ptr [ESP + 0x10]      ; 00528ffb
    MOV ECX,EBP                         ; 00528fff
    ADD EAX,ESI                         ; 00529001
    ADD EDX,0x4                         ; 00529003
        ;   Label: LAB_00529003
    FLD float ptr [EAX]                 ; 00529006
    ADD EAX,0x4                         ; 00529008
    FSTP float ptr [EDX + -0x4]         ; 0052900b
    CMP EAX,ECX                         ; 0052900e
    JNZ 0x00529003                      ; 00529010
        ;   XREF to: 00529003 (CONDITIONAL_JUMP)  ; LAB_00529003
    MOV EAX,dword ptr [ESP + 0x10]      ; 00529012
    INC EBX                             ; 00529016
    ADD EAX,EDI                         ; 00529017
    ADD EBP,0x48                        ; 00529019
    MOV dword ptr [ESP + 0x10],EAX      ; 0052901c
    CMP EBX,0x20                        ; 00529020
    JL 0x00528ff8                       ; 00529023
        ;   XREF to: 00528ff8 (CONDITIONAL_JUMP)  ; LAB_00528ff8
    ADD ESP,0x58                        ; 00529025
        ;   Label: LAB_00529025
    POP EBP                             ; 00529028
    POP EDI                             ; 00529029
    POP ESI                             ; 0052902a
    POP EBX                             ; 0052902b
    RET                                 ; 0052902c
    CMP dword ptr [EAX + 0x18],0x0      ; 0052902d
        ;   Label: LAB_0052902d
    JZ 0x005291ab                       ; 00529031
        ;   XREF to: 005291ab (CONDITIONAL_JUMP)  ; LAB_005291ab
    MOV EBP,0x48                        ; 00529037
    LEA EAX,[ESI + 0x48]                ; 0052903c
    MOV dword ptr [ESP + 0x14],EDI      ; 0052903f
    XOR EBX,EBX                         ; 00529043
    MOV dword ptr [ESP + 0xc],EAX       ; 00529045
    IMUL EAX,EBX,0x48                   ; 00529049
        ;   Label: LAB_00529049
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052904c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00529050
    ADD EAX,ESI                         ; 00529054
    ADD EDX,0x4                         ; 00529056
        ;   Label: LAB_00529056
    FLD float ptr [EAX]                 ; 00529059
    ADD EAX,0x4                         ; 0052905b
    FSTP float ptr [EDX + -0x4]         ; 0052905e
    CMP EAX,ECX                         ; 00529061
    JNZ 0x00529056                      ; 00529063
        ;   XREF to: 00529056 (CONDITIONAL_JUMP)  ; LAB_00529056
    MOV ECX,dword ptr [ESP + 0x14]      ; 00529065
    MOV EDX,dword ptr [ESP + 0xc]       ; 00529069
    INC EBX                             ; 0052906d
    ADD ECX,EBP                         ; 0052906e
    ADD EDX,EBP                         ; 00529070
    MOV dword ptr [ESP + 0x14],ECX      ; 00529072
    MOV dword ptr [ESP + 0xc],EDX       ; 00529076
    CMP EBX,0x2                         ; 0052907a
    JL 0x00529049                       ; 0052907d
        ;   XREF to: 00529049 (CONDITIONAL_JUMP)  ; LAB_00529049
    MOV EDX,dword ptr [ESP]             ; 0052907f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00529082
    ADD EAX,EDX                         ; 00529089
    SHL EAX,0x2                         ; 0052908b
    ADD EAX,EDX                         ; 0052908e
    SHL EAX,0x2                         ; 00529090
    MOV EDX,dword ptr [EAX + 0x620800]  ; 00529093 | DAT_00620800
    MOV ECX,dword ptr [EAX + 0x620804]  ; 00529099 | DAT_00620804
    SUB ECX,EDX                         ; 0052909f
    MOV dword ptr [ESP + 0x34],ECX      ; 005290a1
    LEA ECX,[EAX + 0xc]                 ; 005290a5
    ADD EAX,0x34                        ; 005290a8
    MOV dword ptr [ESP + 0x18],ECX      ; 005290ab
    MOV dword ptr [ESP + 0x4],EAX       ; 005290af
    XOR EAX,EAX                         ; 005290b3
        ;   Label: LAB_005290b3
    LEA EDX,[EDX + EDX*0x2]             ; 005290b5
    MOV dword ptr [ESP + 0x40],EAX      ; 005290b8
    MOV dword ptr [ESP + 0x2c],EDX      ; 005290bc
    MOV EAX,dword ptr [ESP + 0x34]      ; 005290c0
    MOV dword ptr [ESP + 0x38],EDX      ; 005290c4
    MOV dword ptr [ESP + 0x24],EAX      ; 005290c8
    MOV EDX,dword ptr [ESP + 0x34]      ; 005290cc
        ;   Label: LAB_005290cc
    TEST EDX,EDX                        ; 005290d0
    JLE 0x00529162                      ; 005290d2
        ;   XREF to: 00529162 (CONDITIONAL_JUMP)  ; LAB_00529162
    MOV EAX,dword ptr [ESP + 0x40]      ; 005290d8
    IMUL EAX,EDX                        ; 005290dc
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005290df
    MOV EDX,dword ptr [ESP + 0x24]      ; 005290e3
    ADD EAX,ECX                         ; 005290e7
    MOV EBX,dword ptr [ESP + 0x38]      ; 005290e9
    ADD EDX,EAX                         ; 005290ed
    MOV ECX,EAX                         ; 005290ef
    MOV dword ptr [ESP + 0x4c],EDX      ; 005290f1
    MOV EBP,0x12                        ; 005290f5
        ;   Label: LAB_005290f5
    MOV EDX,ECX                         ; 005290fa
    MOV EAX,ECX                         ; 005290fc
    SAR EDX,0x1f                        ; 005290fe
    IDIV EBP                            ; 00529101
    IMUL EAX,EAX,0x48                   ; 00529103
    MOV EDX,ECX                         ; 00529106
    MOV dword ptr [ESP + 0x54],0x12     ; 00529108
    SAR EDX,0x1f                        ; 00529110
    LEA EBP,[ESI + EAX*0x1]             ; 00529113
    MOV EAX,ECX                         ; 00529116
    IDIV dword ptr [ESP + 0x54]         ; 00529118
    SHL EDX,0x2                         ; 0052911c
    ADD EBP,EDX                         ; 0052911f
    MOV EAX,EBX                         ; 00529121
    MOV dword ptr [ESP + 0x50],EBP      ; 00529123
    MOV EDX,EBX                         ; 00529127
    MOV EBP,0x12                        ; 00529129
    SAR EDX,0x1f                        ; 0052912e
    IDIV EBP                            ; 00529131
    IMUL EAX,EAX,0x48                   ; 00529133
    MOV EDX,EBX                         ; 00529136
    MOV dword ptr [ESP + 0x54],0x12     ; 00529138
    SAR EDX,0x1f                        ; 00529140
    LEA EBP,[EDI + EAX*0x1]             ; 00529143
    MOV EAX,EBX                         ; 00529146
    IDIV dword ptr [ESP + 0x54]         ; 00529148
    MOV EAX,dword ptr [ESP + 0x50]      ; 0052914c
    INC ECX                             ; 00529150
    FLD float ptr [EAX]                 ; 00529151
    FSTP float ptr [EBP + EDX*0x4]      ; 00529153
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00529157
    ADD EBX,0x3                         ; 0052915b
    CMP ECX,EBP                         ; 0052915e
    JL 0x005290f5                       ; 00529160
        ;   XREF to: 005290f5 (CONDITIONAL_JUMP)  ; LAB_005290f5
    MOV EDX,dword ptr [ESP + 0x40]      ; 00529162
        ;   Label: LAB_00529162
    MOV EAX,dword ptr [ESP + 0x38]      ; 00529166
    INC EDX                             ; 0052916a
    INC EAX                             ; 0052916b
    MOV dword ptr [ESP + 0x40],EDX      ; 0052916c
    MOV dword ptr [ESP + 0x38],EAX      ; 00529170
    CMP EDX,0x3                         ; 00529174
    JL 0x005290cc                       ; 00529177
        ;   XREF to: 005290cc (CONDITIONAL_JUMP)  ; LAB_005290cc
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052917d
    MOV EBP,dword ptr [ESP + 0x4]       ; 00529181
    MOV EDX,dword ptr [EBX + 0x6207f8]  ; 00529185 | DAT_00620804
    MOV EAX,dword ptr [EBX + 0x6207fc]  ; 0052918b | DAT_00620808
    ADD EBX,0x4                         ; 00529191
    SUB EAX,EDX                         ; 00529194
    MOV dword ptr [ESP + 0x18],EBX      ; 00529196
    MOV dword ptr [ESP + 0x34],EAX      ; 0052919a
    CMP EBX,EBP                         ; 0052919e
    JZ 0x00529025                       ; 005291a0
        ;   XREF to: 00529025 (CONDITIONAL_JUMP)  ; LAB_00529025
    JMP 0x005290b3                      ; 005291a6
        ;   XREF to: 005290b3 (UNCONDITIONAL_JUMP)  ; LAB_005290b3
    MOV ECX,dword ptr [ESP]             ; 005291ab
        ;   Label: LAB_005291ab
    LEA EAX,[ECX*0x8 + 0x0]             ; 005291ae
    ADD EAX,ECX                         ; 005291b5
    SHL EAX,0x2                         ; 005291b7
    ADD EAX,ECX                         ; 005291ba
    SHL EAX,0x2                         ; 005291bc
    XOR EDX,EDX                         ; 005291bf
    MOV dword ptr [ESP + 0x1c],EAX      ; 005291c1
    MOV ECX,dword ptr [EAX + 0x6207f8]  ; 005291c5 | DAT_006207f8
    ADD EAX,0x34                        ; 005291cb
    MOV dword ptr [ESP + 0x30],ECX      ; 005291ce
    MOV dword ptr [ESP + 0x8],EAX       ; 005291d2
    MOV EAX,dword ptr [ESP + 0x30]      ; 005291d6
        ;   Label: LAB_005291d6
    LEA EDX,[EDX + EDX*0x2]             ; 005291da
    XOR EBX,EBX                         ; 005291dd
    MOV dword ptr [ESP + 0x28],EDX      ; 005291df
    MOV dword ptr [ESP + 0x3c],EDX      ; 005291e3
    MOV dword ptr [ESP + 0x20],EAX      ; 005291e7
    MOV dword ptr [ESP + 0x44],EBX      ; 005291eb
    MOV EBP,dword ptr [ESP + 0x30]      ; 005291ef
        ;   Label: LAB_005291ef
    TEST EBP,EBP                        ; 005291f3
    JLE 0x00529285                      ; 005291f5
        ;   XREF to: 00529285 (CONDITIONAL_JUMP)  ; LAB_00529285
    MOV EAX,dword ptr [ESP + 0x44]      ; 005291fb
    IMUL EAX,EBP                        ; 005291ff
    MOV EBP,dword ptr [ESP + 0x28]      ; 00529202
    MOV EDX,dword ptr [ESP + 0x20]      ; 00529206
    ADD EAX,EBP                         ; 0052920a
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0052920c
    ADD EDX,EAX                         ; 00529210
    MOV ECX,EAX                         ; 00529212
    MOV dword ptr [ESP + 0x48],EDX      ; 00529214
    MOV EBP,0x12                        ; 00529218
        ;   Label: LAB_00529218
    MOV EDX,ECX                         ; 0052921d
    MOV EAX,ECX                         ; 0052921f
    SAR EDX,0x1f                        ; 00529221
    IDIV EBP                            ; 00529224
    IMUL EAX,EAX,0x48                   ; 00529226
    MOV EDX,ECX                         ; 00529229
    MOV dword ptr [ESP + 0x54],0x12     ; 0052922b
    SAR EDX,0x1f                        ; 00529233
    LEA EBP,[ESI + EAX*0x1]             ; 00529236
    MOV EAX,ECX                         ; 00529239
    IDIV dword ptr [ESP + 0x54]         ; 0052923b
    SHL EDX,0x2                         ; 0052923f
    ADD EBP,EDX                         ; 00529242
    MOV EAX,EBX                         ; 00529244
    MOV dword ptr [ESP + 0x50],EBP      ; 00529246
    MOV EDX,EBX                         ; 0052924a
    MOV EBP,0x12                        ; 0052924c
    SAR EDX,0x1f                        ; 00529251
    IDIV EBP                            ; 00529254
    IMUL EAX,EAX,0x48                   ; 00529256
    MOV EDX,EBX                         ; 00529259
    MOV dword ptr [ESP + 0x54],0x12     ; 0052925b
    SAR EDX,0x1f                        ; 00529263
    LEA EBP,[EDI + EAX*0x1]             ; 00529266
    MOV EAX,EBX                         ; 00529269
    IDIV dword ptr [ESP + 0x54]         ; 0052926b
    MOV EAX,dword ptr [ESP + 0x50]      ; 0052926f
    INC ECX                             ; 00529273
    ADD EBX,0x3                         ; 00529274
    FLD float ptr [EAX]                 ; 00529277
    MOV EAX,dword ptr [ESP + 0x48]      ; 00529279
    FSTP float ptr [EBP + EDX*0x4]      ; 0052927d
    CMP ECX,EAX                         ; 00529281
    JL 0x00529218                       ; 00529283
        ;   XREF to: 00529218 (CONDITIONAL_JUMP)  ; LAB_00529218
    MOV ECX,dword ptr [ESP + 0x44]      ; 00529285
        ;   Label: LAB_00529285
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00529289
    INC ECX                             ; 0052928d
    INC EDX                             ; 0052928e
    MOV dword ptr [ESP + 0x44],ECX      ; 0052928f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00529293
    CMP ECX,0x3                         ; 00529297
    JL 0x005291ef                       ; 0052929a
        ;   XREF to: 005291ef (CONDITIONAL_JUMP)  ; LAB_005291ef
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005292a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005292a4
    MOV EDX,dword ptr [EBP + 0x6207f8]  ; 005292a8 | DAT_006207f8
    MOV EAX,dword ptr [EBP + 0x6207fc]  ; 005292ae | DAT_006207fc
    ADD EBP,0x4                         ; 005292b4
    SUB EAX,EDX                         ; 005292b7
    MOV dword ptr [ESP + 0x1c],EBP      ; 005292b9
    MOV dword ptr [ESP + 0x30],EAX      ; 005292bd
    CMP EBP,ECX                         ; 005292c1
    JZ 0x00529025                       ; 005292c3
        ;   XREF to: 00529025 (CONDITIONAL_JUMP)  ; LAB_00529025
    JMP 0x005291d6                      ; 005292c9
        ;   XREF to: 005291d6 (UNCONDITIONAL_JUMP)  ; LAB_005291d6

