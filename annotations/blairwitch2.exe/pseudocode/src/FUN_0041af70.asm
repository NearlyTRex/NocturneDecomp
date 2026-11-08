; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_0041af70(float *param_1,float *param_2,float *param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; XREF[6]:
;   FUN_004093a0 at 00409564
;   FUN_0041cb40 at 0041cbea
;   FUN_0044f020 at 0044f06a
;   FUN_004e5970 at 004e5c5e
;   FUN_0053a1b0 at 0053a44e
;   FUN_00587900 at 00587944
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041af70
        ;   Label: FUN_0041af70
    PUSH ESI                            ; 0041af71
    PUSH EDI                            ; 0041af72
    PUSH EBP                            ; 0041af73
    MOV EBP,ESP                         ; 0041af74
    SUB ESP,0x58                        ; 0041af76
    AND ESP,0xfffffff8                  ; 0041af79
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041af7c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0041af7f
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0041af82
    MOV EDX,dword ptr [EBP + 0x20]      ; 0041af85
    FLD float ptr [ECX]                 ; 0041af88
    MOV EBX,0x1                         ; 0041af8a
    FCOMP float ptr [ESI]               ; 0041af8f
    FNSTSW AX                           ; 0041af91
    SAHF                                ; 0041af93
    JC 0x0041b0f1                       ; 0041af94
        ;   XREF to: 0041b0f1 (CONDITIONAL_JUMP)  ; LAB_0041b0f1
    FLD float ptr [ECX]                 ; 0041af9a
    FCOMP float ptr [ESI + 0xc]         ; 0041af9c
    FNSTSW AX                           ; 0041af9f
    SAHF                                ; 0041afa1
    JBE 0x0041b123                      ; 0041afa2
        ;   XREF to: 0041b123 (CONDITIONAL_JUMP)  ; LAB_0041b123
    FLD float ptr [ESI + 0xc]           ; 0041afa8
    FSUB float ptr [ECX]                ; 0041afab
    FST float ptr [ESP + 0x30]          ; 0041afad
    FCOMP float ptr [EDI]               ; 0041afb1
    FNSTSW AX                           ; 0041afb3
    SAHF                                ; 0041afb5
    JC 0x0041b110                       ; 0041afb6
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x30]          ; 0041afbc
    FDIV float ptr [EDI]                ; 0041afc0
    MOV EAX,0x3f800000                  ; 0041afc2
    XOR EBX,EBX                         ; 0041afc7
        ;   Label: LAB_0041afc7
    MOV dword ptr [ESP + 0x40],EAX      ; 0041afc9
    FSTP float ptr [ESP + 0x30]         ; 0041afcd
    FLD float ptr [ECX + 0x4]           ; 0041afd1
        ;   Label: LAB_0041afd1
    FCOMP float ptr [ESI + 0x4]         ; 0041afd4
    FNSTSW AX                           ; 0041afd7
    SAHF                                ; 0041afd9
    JNC 0x0041b130                      ; 0041afda
        ;   XREF to: 0041b130 (CONDITIONAL_JUMP)  ; LAB_0041b130
    FLD float ptr [ESI + 0x4]           ; 0041afe0
    FSUB float ptr [ECX + 0x4]          ; 0041afe3
    FST float ptr [ESP + 0x34]          ; 0041afe6
    FCOMP float ptr [EDI + 0x4]         ; 0041afea
    FNSTSW AX                           ; 0041afed
    SAHF                                ; 0041afef
    JA 0x0041b110                       ; 0041aff0
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x34]          ; 0041aff6
    FDIV float ptr [EDI + 0x4]          ; 0041affa
    MOV EAX,0xbf800000                  ; 0041affd
    XOR EBX,EBX                         ; 0041b002
        ;   Label: LAB_0041b002
    MOV dword ptr [ESP + 0x54],EAX      ; 0041b004
    FSTP float ptr [ESP + 0x34]         ; 0041b008
    FLD float ptr [ECX + 0x8]           ; 0041b00c
        ;   Label: LAB_0041b00c
    FCOMP float ptr [ESI + 0x8]         ; 0041b00f
    FNSTSW AX                           ; 0041b012
    SAHF                                ; 0041b014
    JNC 0x0041b16b                      ; 0041b015
        ;   XREF to: 0041b16b (CONDITIONAL_JUMP)  ; LAB_0041b16b
    FLD float ptr [ESI + 0x8]           ; 0041b01b
    FSUB float ptr [ECX + 0x8]          ; 0041b01e
    FST float ptr [ESP + 0x44]          ; 0041b021
    FCOMP float ptr [EDI + 0x8]         ; 0041b025
    FNSTSW AX                           ; 0041b028
    SAHF                                ; 0041b02a
    JA 0x0041b110                       ; 0041b02b
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x44]          ; 0041b031
    FDIV float ptr [EDI + 0x8]          ; 0041b035
    MOV dword ptr [ESP + 0x2c],0xbf800000 ; 0041b038
    FSTP float ptr [ESP + 0x44]         ; 0041b040
        ;   Label: LAB_0041b040
    FLD float ptr [ESP + 0x34]          ; 0041b044
        ;   Label: LAB_0041b044
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041b048
    XOR EBX,EBX                         ; 0041b04c
    MOV dword ptr [ESP + 0x38],EAX      ; 0041b04e
    FCOMP float ptr [ESP + 0x30]        ; 0041b052
    FNSTSW AX                           ; 0041b056
    SAHF                                ; 0041b058
    JBE 0x0041b068                      ; 0041b059
        ;   XREF to: 0041b068 (CONDITIONAL_JUMP)  ; LAB_0041b068
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041b05b
    MOV EBX,0x1                         ; 0041b05f
    MOV dword ptr [ESP + 0x38],EAX      ; 0041b064
    FLD float ptr [ESP + 0x44]          ; 0041b068
        ;   Label: LAB_0041b068
    FCOMP float ptr [ESP + 0x38]        ; 0041b06c
    FNSTSW AX                           ; 0041b070
    SAHF                                ; 0041b072
    JBE 0x0041b372                      ; 0041b073
        ;   XREF to: 0041b372 (CONDITIONAL_JUMP)  ; LAB_0041b372
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041b079
    MOV dword ptr [ESP + 0x38],EAX      ; 0041b07d
    FLD float ptr [EDI]                 ; 0041b081
        ;   Label: LAB_0041b081
    FMUL float ptr [ESP + 0x38]         ; 0041b083
    FADD float ptr [ECX]                ; 0041b087
    FST float ptr [ESP + 0x24]          ; 0041b089
    FCOMP float ptr [ESI]               ; 0041b08d
    FNSTSW AX                           ; 0041b08f
    SAHF                                ; 0041b091
    JC 0x0041b110                       ; 0041b092
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x24]          ; 0041b098
    FCOMP float ptr [ESI + 0xc]         ; 0041b09c
    FNSTSW AX                           ; 0041b09f
    SAHF                                ; 0041b0a1
    JA 0x0041b110                       ; 0041b0a2
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [EDI + 0x4]           ; 0041b0a4
    FMUL float ptr [ESP + 0x38]         ; 0041b0a7
    FADD float ptr [ECX + 0x4]          ; 0041b0ab
    FST float ptr [ESP + 0x20]          ; 0041b0ae
    FCOMP float ptr [ESI + 0x4]         ; 0041b0b2
    FNSTSW AX                           ; 0041b0b5
    SAHF                                ; 0041b0b7
    JC 0x0041b110                       ; 0041b0b8
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x20]          ; 0041b0ba
    FCOMP float ptr [ESI + 0x10]        ; 0041b0be
    FNSTSW AX                           ; 0041b0c1
    SAHF                                ; 0041b0c3
    JA 0x0041b110                       ; 0041b0c4
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    TEST EDX,EDX                        ; 0041b0c6
    JZ 0x0041b0de                       ; 0041b0c8
        ;   XREF to: 0041b0de (CONDITIONAL_JUMP)  ; LAB_0041b0de
    MOV dword ptr [EDX + 0x4],0x0       ; 0041b0ca
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041b0d1
    MOV dword ptr [EDX],0x0             ; 0041b0d5
    MOV dword ptr [EDX + 0x8],EAX       ; 0041b0db
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041b0de
        ;   Label: LAB_0041b0de
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041b0e2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b0e6
    MOV ESP,EBP                         ; 0041b0ea
    POP EBP                             ; 0041b0ec
    POP EDI                             ; 0041b0ed
    POP ESI                             ; 0041b0ee
    POP EBX                             ; 0041b0ef
    RET                                 ; 0041b0f0
    FLD float ptr [ESI]                 ; 0041b0f1
        ;   Label: LAB_0041b0f1
    FSUB float ptr [ECX]                ; 0041b0f3
    FST float ptr [ESP + 0x30]          ; 0041b0f5
    FCOMP float ptr [EDI]               ; 0041b0f9
    FNSTSW AX                           ; 0041b0fb
    SAHF                                ; 0041b0fd
    JA 0x0041b110                       ; 0041b0fe
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x30]          ; 0041b100
    FDIV float ptr [EDI]                ; 0041b104
    MOV EAX,0xbf800000                  ; 0041b106
    JMP 0x0041afc7                      ; 0041b10b
        ;   XREF to: 0041afc7 (UNCONDITIONAL_JUMP)  ; LAB_0041afc7
    MOV dword ptr [ESP + 0x3c],0xbf800000 ; 0041b110
        ;   Label: LAB_0041b110
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b118
    MOV ESP,EBP                         ; 0041b11c
    POP EBP                             ; 0041b11e
    POP EDI                             ; 0041b11f
    POP ESI                             ; 0041b120
    POP EBX                             ; 0041b121
    RET                                 ; 0041b122
    MOV dword ptr [ESP + 0x30],0xbf800000 ; 0041b123
        ;   Label: LAB_0041b123
    JMP 0x0041afd1                      ; 0041b12b
        ;   XREF to: 0041afd1 (UNCONDITIONAL_JUMP)  ; LAB_0041afd1
    FLD float ptr [ECX + 0x4]           ; 0041b130
        ;   Label: LAB_0041b130
    FCOMP float ptr [ESI + 0x10]        ; 0041b133
    FNSTSW AX                           ; 0041b136
    SAHF                                ; 0041b138
    JBE 0x0041b15e                      ; 0041b139
        ;   XREF to: 0041b15e (CONDITIONAL_JUMP)  ; LAB_0041b15e
    FLD float ptr [ESI + 0x10]          ; 0041b13b
    FSUB float ptr [ECX + 0x4]          ; 0041b13e
    FST float ptr [ESP + 0x34]          ; 0041b141
    FCOMP float ptr [EDI + 0x4]         ; 0041b145
    FNSTSW AX                           ; 0041b148
    SAHF                                ; 0041b14a
    JC 0x0041b110                       ; 0041b14b
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x34]          ; 0041b14d
    FDIV float ptr [EDI + 0x4]          ; 0041b151
    MOV EAX,0x3f800000                  ; 0041b154
    JMP 0x0041b002                      ; 0041b159
        ;   XREF to: 0041b002 (UNCONDITIONAL_JUMP)  ; LAB_0041b002
    MOV dword ptr [ESP + 0x34],0xbf800000 ; 0041b15e
        ;   Label: LAB_0041b15e
    JMP 0x0041b00c                      ; 0041b166
        ;   XREF to: 0041b00c (UNCONDITIONAL_JUMP)  ; LAB_0041b00c
    FLD float ptr [ECX + 0x8]           ; 0041b16b
        ;   Label: LAB_0041b16b
    FCOMP float ptr [ESI + 0x14]        ; 0041b16e
    FNSTSW AX                           ; 0041b171
    SAHF                                ; 0041b173
    JBE 0x0041b19c                      ; 0041b174
        ;   XREF to: 0041b19c (CONDITIONAL_JUMP)  ; LAB_0041b19c
    FLD float ptr [ESI + 0x14]          ; 0041b176
    FSUB float ptr [ECX + 0x8]          ; 0041b179
    FST float ptr [ESP + 0x44]          ; 0041b17c
    FCOMP float ptr [EDI + 0x8]         ; 0041b180
    FNSTSW AX                           ; 0041b183
    SAHF                                ; 0041b185
    JC 0x0041b110                       ; 0041b186
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x44]          ; 0041b188
    FDIV float ptr [EDI + 0x8]          ; 0041b18c
    MOV dword ptr [ESP + 0x2c],0x3f800000 ; 0041b18f
    JMP 0x0041b040                      ; 0041b197
        ;   XREF to: 0041b040 (UNCONDITIONAL_JUMP)  ; LAB_0041b040
    MOV dword ptr [ESP + 0x44],0xbf800000 ; 0041b19c
        ;   Label: LAB_0041b19c
    TEST EBX,EBX                        ; 0041b1a4
    JZ 0x0041b044                       ; 0041b1a6
        ;   XREF to: 0041b044 (CONDITIONAL_JUMP)  ; LAB_0041b044
    TEST EDX,EDX                        ; 0041b1ac
    JZ 0x0041b22e                       ; 0041b1ae
        ;   XREF to: 0041b22e (CONDITIONAL_JUMP)  ; LAB_0041b22e
    FLD float ptr [EDI]                 ; 0041b1b4
    FLD float ptr [EDI + 0x4]           ; 0041b1b6
    FLD float ptr [EDI + 0x8]           ; 0041b1b9
    LEA ESI,[ESP + 0xc]                 ; 0041b1bc
    MOV EAX,ESP                         ; 0041b1c0
    FXCH ST2                            ; 0041b1c2
    FCHS                                ; 0041b1c4
    FXCH                                ; 0041b1c6
    FCHS                                ; 0041b1c8
    FXCH ST2                            ; 0041b1ca
    FCHS                                ; 0041b1cc
    MOV EDI,ESP                         ; 0041b1ce
    FXCH ST2                            ; 0041b1d0
    FSTP float ptr [ESP + 0x10]         ; 0041b1d2
    FXCH                                ; 0041b1d6
    FSTP float ptr [ESP + 0x14]         ; 0041b1d8
    FSTP float ptr [ESP + 0xc]          ; 0041b1dc
    MOVSD ES:EDI,ESI                    ; 0041b1e0
    MOVSD ES:EDI,ESI                    ; 0041b1e1
    MOVSD ES:EDI,ESI                    ; 0041b1e2
    CMP EDX,EAX                         ; 0041b1e3
    JNZ 0x0041b23f                      ; 0041b1e5
        ;   XREF to: 0041b23f (CONDITIONAL_JUMP)  ; LAB_0041b23f
    FLD float ptr [EDX + 0x4]           ; 0041b1e7
        ;   Label: LAB_0041b1e7
    FMUL ST0                            ; 0041b1ea
    FLD float ptr [EDX]                 ; 0041b1ec
    FMUL ST0                            ; 0041b1ee
    FADDP                               ; 0041b1f0
    FLD float ptr [EDX + 0x8]           ; 0041b1f2
    FMUL ST0                            ; 0041b1f5
    FADDP                               ; 0041b1f7
    FSQRT                               ; 0041b1f9
    FLDZ                                ; 0041b1fb
    FXCH                                ; 0041b1fd
    FSTP float ptr [ESP + 0x48]         ; 0041b1ff
    FCOMP float ptr [ESP + 0x48]        ; 0041b203
    FNSTSW AX                           ; 0041b207
    SAHF                                ; 0041b209
    JNC 0x0041b254                      ; 0041b20a
        ;   XREF to: 0041b254 (CONDITIONAL_JUMP)  ; LAB_0041b254
    FLD1                                ; 0041b20c
    FLD float ptr [EDX]                 ; 0041b20e
    FXCH                                ; 0041b210
    FDIV float ptr [ESP + 0x48]         ; 0041b212
    FXCH                                ; 0041b216
    FMUL ST1                            ; 0041b218
    FLD float ptr [EDX + 0x4]           ; 0041b21a
    FMUL ST2                            ; 0041b21d
    FLD float ptr [EDX + 0x8]           ; 0041b21f
    FMULP ST3                           ; 0041b222
    FXCH                                ; 0041b224
    FSTP float ptr [EDX]                ; 0041b226
    FSTP float ptr [EDX + 0x4]          ; 0041b228
    FSTP float ptr [EDX + 0x8]          ; 0041b22b
    XOR EDX,EDX                         ; 0041b22e
        ;   Label: LAB_0041b22e
    MOV dword ptr [ESP + 0x3c],EDX      ; 0041b230
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b234
    MOV ESP,EBP                         ; 0041b238
    POP EBP                             ; 0041b23a
    POP EDI                             ; 0041b23b
    POP ESI                             ; 0041b23c
    POP EBX                             ; 0041b23d
    RET                                 ; 0041b23e
    MOV EAX,dword ptr [ESP]             ; 0041b23f
        ;   Label: LAB_0041b23f
    MOV dword ptr [EDX],EAX             ; 0041b242
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b244
    MOV dword ptr [EDX + 0x4],EAX       ; 0041b248
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041b24b
    MOV dword ptr [EDX + 0x8],EAX       ; 0041b24f
    JMP 0x0041b1e7                      ; 0041b252
        ;   XREF to: 0041b1e7 (UNCONDITIONAL_JUMP)  ; LAB_0041b1e7
    MOV dword ptr [EDX + 0x8],0x0       ; 0041b254
        ;   Label: LAB_0041b254
    MOV EAX,dword ptr [EDX + 0x8]       ; 0041b25b
    MOV dword ptr [EDX + 0x4],EAX       ; 0041b25e
    MOV EAX,dword ptr [EDX + 0x4]       ; 0041b261
    MOV dword ptr [EDX],EAX             ; 0041b264
    XOR EDX,EDX                         ; 0041b266
    MOV dword ptr [ESP + 0x3c],EDX      ; 0041b268
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b26c
    MOV ESP,EBP                         ; 0041b270
    POP EBP                             ; 0041b272
    POP EDI                             ; 0041b273
    POP ESI                             ; 0041b274
    POP EBX                             ; 0041b275
    RET                                 ; 0041b276
    FLD float ptr [EDI + 0x4]           ; 0041b277
        ;   Label: LAB_0041b277
    FMUL float ptr [ESP + 0x38]         ; 0041b27a
    FADD float ptr [ECX + 0x4]          ; 0041b27e
    FST float ptr [ESP + 0x1c]          ; 0041b281
    FCOMP float ptr [ESI + 0x4]         ; 0041b285
    FNSTSW AX                           ; 0041b288
    SAHF                                ; 0041b28a
    JC 0x0041b110                       ; 0041b28b
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x1c]          ; 0041b291
    FCOMP float ptr [ESI + 0x10]        ; 0041b295
    FNSTSW AX                           ; 0041b298
    SAHF                                ; 0041b29a
    JA 0x0041b110                       ; 0041b29b
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [EDI + 0x8]           ; 0041b2a1
    FMUL float ptr [ESP + 0x38]         ; 0041b2a4
    FADD float ptr [ECX + 0x8]          ; 0041b2a8
    FST float ptr [ESP + 0x4c]          ; 0041b2ab
    FCOMP float ptr [ESI + 0x8]         ; 0041b2af
    FNSTSW AX                           ; 0041b2b2
    SAHF                                ; 0041b2b4
    JC 0x0041b110                       ; 0041b2b5
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x4c]          ; 0041b2bb
    FCOMP float ptr [ESI + 0x14]        ; 0041b2bf
    FNSTSW AX                           ; 0041b2c2
    SAHF                                ; 0041b2c4
    JA 0x0041b110                       ; 0041b2c5
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    TEST EDX,EDX                        ; 0041b2cb
    JZ 0x0041b0de                       ; 0041b2cd
        ;   XREF to: 0041b0de (CONDITIONAL_JUMP)  ; LAB_0041b0de
    MOV dword ptr [EDX + 0x4],EBX       ; 0041b2d3
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041b2d6
    MOV dword ptr [EDX + 0x8],EBX       ; 0041b2da
    MOV dword ptr [EDX],EAX             ; 0041b2dd
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041b2df
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041b2e3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b2e7
    MOV ESP,EBP                         ; 0041b2eb
    POP EBP                             ; 0041b2ed
    POP EDI                             ; 0041b2ee
    POP ESI                             ; 0041b2ef
    POP EBX                             ; 0041b2f0
    RET                                 ; 0041b2f1
    FLD float ptr [EDI]                 ; 0041b2f2
        ;   Label: LAB_0041b2f2
    FMUL float ptr [ESP + 0x38]         ; 0041b2f4
    FADD float ptr [ECX]                ; 0041b2f8
    FST float ptr [ESP + 0x28]          ; 0041b2fa
    FCOMP float ptr [ESI]               ; 0041b2fe
    FNSTSW AX                           ; 0041b300
    SAHF                                ; 0041b302
    JC 0x0041b110                       ; 0041b303
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x28]          ; 0041b309
    FCOMP float ptr [ESI + 0xc]         ; 0041b30d
    FNSTSW AX                           ; 0041b310
    SAHF                                ; 0041b312
    JA 0x0041b110                       ; 0041b313
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [EDI + 0x8]           ; 0041b319
    FMUL float ptr [ESP + 0x38]         ; 0041b31c
    FADD float ptr [ECX + 0x8]          ; 0041b320
    FST float ptr [ESP + 0x50]          ; 0041b323
    FCOMP float ptr [ESI + 0x8]         ; 0041b327
    FNSTSW AX                           ; 0041b32a
    SAHF                                ; 0041b32c
    JC 0x0041b110                       ; 0041b32d
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    FLD float ptr [ESP + 0x50]          ; 0041b333
    FCOMP float ptr [ESI + 0x14]        ; 0041b337
    FNSTSW AX                           ; 0041b33a
    SAHF                                ; 0041b33c
    JA 0x0041b110                       ; 0041b33d
        ;   XREF to: 0041b110 (CONDITIONAL_JUMP)  ; LAB_0041b110
    TEST EDX,EDX                        ; 0041b343
    JZ 0x0041b0de                       ; 0041b345
        ;   XREF to: 0041b0de (CONDITIONAL_JUMP)  ; LAB_0041b0de
    MOV dword ptr [EDX + 0x8],0x0       ; 0041b34b
    MOV EAX,dword ptr [ESP + 0x54]      ; 0041b352
    MOV dword ptr [EDX],0x0             ; 0041b356
    MOV dword ptr [EDX + 0x4],EAX       ; 0041b35c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041b35f
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041b363
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b367
    MOV ESP,EBP                         ; 0041b36b
    POP EBP                             ; 0041b36d
    POP EDI                             ; 0041b36e
    POP ESI                             ; 0041b36f
    POP EBX                             ; 0041b370
    RET                                 ; 0041b371
    CMP EBX,0x1                         ; 0041b372
        ;   Label: LAB_0041b372
    JNC 0x0041b392                      ; 0041b375
        ;   XREF to: 0041b392 (CONDITIONAL_JUMP)  ; LAB_0041b392
    TEST EBX,EBX                        ; 0041b377
    JZ 0x0041b277                       ; 0041b379
        ;   XREF to: 0041b277 (CONDITIONAL_JUMP)  ; LAB_0041b277
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041b37f
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041b383
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b387
    MOV ESP,EBP                         ; 0041b38b
    POP EBP                             ; 0041b38d
    POP EDI                             ; 0041b38e
    POP ESI                             ; 0041b38f
    POP EBX                             ; 0041b390
    RET                                 ; 0041b391
    JBE 0x0041b2f2                      ; 0041b392
        ;   XREF to: 0041b2f2 (CONDITIONAL_JUMP)  ; LAB_0041b2f2
        ;   Label: LAB_0041b392
    CMP EBX,0x2                         ; 0041b398
    JZ 0x0041b081                       ; 0041b39b
        ;   XREF to: 0041b081 (CONDITIONAL_JUMP)  ; LAB_0041b081
    MOV EAX,dword ptr [ESP + 0x38]      ; 0041b3a1
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041b3a5
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041b3a9
    MOV ESP,EBP                         ; 0041b3ad
    POP EBP                             ; 0041b3af
    POP EDI                             ; 0041b3b0
    POP ESI                             ; 0041b3b1
    POP EBX                             ; 0041b3b2
    RET                                 ; 0041b3b3

