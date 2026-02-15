; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
; CVector2d *      Stack[0x8]:4   uv_scale
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_006542da = 0.00390625
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce0a0
        ;   Label: shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0
    PUSH ESI                            ; 005ce0a1
    PUSH EDI                            ; 005ce0a2
    PUSH EBP                            ; 005ce0a3
    MOV EBP,ESP                         ; 005ce0a4
    SUB ESP,0x7c                        ; 005ce0a6
    AND ESP,0xfffffff8                  ; 005ce0a9
    MOV ESI,dword ptr [EBP + 0x14]      ; 005ce0ac
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ce0af
    FLDZ                                ; 005ce0b2
    FCOMP double ptr [ESI + 0x50]       ; 005ce0b4
    FNSTSW AX                           ; 005ce0b7
    SAHF                                ; 005ce0b9
    JBE 0x005ce285                      ; 005ce0ba
        ;   XREF to: 005ce285 (CONDITIONAL_JUMP)  ; LAB_005ce285
    FLD double ptr [ESI + 0x50]         ; 005ce0c0
    FCHS                                ; 005ce0c3
    FSTP double ptr [ESP + 0x20]        ; 005ce0c5
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ce0c9
        ;   Label: LAB_005ce0c9
    MOV dword ptr [ESP],EAX             ; 005ce0cd
    MOV EAX,dword ptr [ESP + 0x24]      ; 005ce0d0
    FLDZ                                ; 005ce0d4
    MOV dword ptr [ESP + 0x4],EAX       ; 005ce0d6
    FCOMP double ptr [ESI + 0x48]       ; 005ce0da
    FNSTSW AX                           ; 005ce0dd
    SAHF                                ; 005ce0df
    JA 0x005ce298                       ; 005ce0e0
        ;   XREF to: 005ce298 (CONDITIONAL_JUMP)  ; LAB_005ce298
    MOV EAX,dword ptr [ESI + 0x48]      ; 005ce0e6
    MOV dword ptr [ESP + 0x10],EAX      ; 005ce0e9
    MOV EAX,dword ptr [ESI + 0x4c]      ; 005ce0ed
    MOV dword ptr [ESP + 0x14],EAX      ; 005ce0f0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ce0f4
        ;   Label: LAB_005ce0f4
    MOV dword ptr [ESP + 0x38],EAX      ; 005ce0f8
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ce0fc
    FLDZ                                ; 005ce100
    MOV dword ptr [ESP + 0x3c],EAX      ; 005ce102
    FCOMP double ptr [ESI + 0x40]       ; 005ce106
    FNSTSW AX                           ; 005ce109
    SAHF                                ; 005ce10b
    JA 0x005ce2a6                       ; 005ce10c
        ;   XREF to: 005ce2a6 (CONDITIONAL_JUMP)  ; LAB_005ce2a6
    MOV EAX,dword ptr [ESI + 0x40]      ; 005ce112
    MOV dword ptr [ESP + 0x18],EAX      ; 005ce115
    MOV EAX,dword ptr [ESI + 0x44]      ; 005ce119
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ce11c
    MOV EAX,dword ptr [ESP + 0x18]      ; 005ce120
        ;   Label: LAB_005ce120
    MOV dword ptr [ESP + 0x40],EAX      ; 005ce124
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005ce128
    MOV dword ptr [ESP + 0x44],EAX      ; 005ce12c
    MOV EAX,dword ptr [ESP + 0x38]      ; 005ce130
    MOV dword ptr [ESP + 0x48],EAX      ; 005ce134
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005ce138
    MOV dword ptr [ESP + 0x4c],EAX      ; 005ce13c
    MOV EAX,dword ptr [ESP]             ; 005ce140
    MOV dword ptr [ESP + 0x50],EAX      ; 005ce143
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ce147
    MOV dword ptr [ESP + 0x54],EAX      ; 005ce14b
    LEA EAX,[ESI + 0x40]                ; 005ce14f
    MOV ECX,dword ptr [EAX]             ; 005ce152
    MOV dword ptr [ESP + 0x58],ECX      ; 005ce154
    MOV ECX,dword ptr [EAX + 0x4]       ; 005ce158
    MOV dword ptr [ESP + 0x5c],ECX      ; 005ce15b
    MOV ECX,dword ptr [EAX + 0x8]       ; 005ce15f
    MOV dword ptr [ESP + 0x60],ECX      ; 005ce162
    MOV ECX,dword ptr [EAX + 0xc]       ; 005ce166
    FLDZ                                ; 005ce169
    MOV dword ptr [ESP + 0x64],ECX      ; 005ce16b
    MOV ECX,dword ptr [EAX + 0x10]      ; 005ce16f
    MOV EAX,dword ptr [EAX + 0x14]      ; 005ce172
    MOV dword ptr [ESP + 0x68],ECX      ; 005ce175
    MOV dword ptr [ESP + 0x6c],EAX      ; 005ce179
    FCOMP double ptr [ESP + 0x58]       ; 005ce17d
    FNSTSW AX                           ; 005ce181
    SAHF                                ; 005ce183
    JA 0x005ce2b4                       ; 005ce184
        ;   XREF to: 005ce2b4 (CONDITIONAL_JUMP)  ; LAB_005ce2b4
    XOR EDI,EDI                         ; 005ce18a
    MOV EAX,0x3ff00000                  ; 005ce18c
    MOV dword ptr [ESP + 0x8],EDI       ; 005ce191
    MOV dword ptr [ESP + 0xc],EAX       ; 005ce195
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ce199
        ;   Label: LAB_005ce199
    MOV dword ptr [ESP + 0x58],EAX      ; 005ce19d
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ce1a1
    FLDZ                                ; 005ce1a5
    MOV dword ptr [ESP + 0x5c],EAX      ; 005ce1a7
    FCOMP double ptr [ESP + 0x60]       ; 005ce1ab
    FNSTSW AX                           ; 005ce1af
    SAHF                                ; 005ce1b1
    JA 0x005ce2c8                       ; 005ce1b2
        ;   XREF to: 005ce2c8 (CONDITIONAL_JUMP)  ; LAB_005ce2c8
    XOR EDI,EDI                         ; 005ce1b8
    MOV EAX,0x3ff00000                  ; 005ce1ba
    MOV dword ptr [ESP + 0x28],EDI      ; 005ce1bf
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ce1c3
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ce1c7
        ;   Label: LAB_005ce1c7
    MOV dword ptr [ESP + 0x60],EAX      ; 005ce1cb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005ce1cf
    FLDZ                                ; 005ce1d3
    MOV dword ptr [ESP + 0x64],EAX      ; 005ce1d5
    FCOMP double ptr [ESP + 0x68]       ; 005ce1d9
    FNSTSW AX                           ; 005ce1dd
    SAHF                                ; 005ce1df
    JA 0x005ce2dc                       ; 005ce1e0
        ;   XREF to: 005ce2dc (CONDITIONAL_JUMP)  ; LAB_005ce2dc
    XOR EDI,EDI                         ; 005ce1e6
    MOV EAX,0x3ff00000                  ; 005ce1e8
    MOV dword ptr [ESP + 0x30],EDI      ; 005ce1ed
    MOV dword ptr [ESP + 0x34],EAX      ; 005ce1f1
    FLD double ptr [ESP + 0x40]         ; 005ce1f5
        ;   Label: LAB_005ce1f5
    MOV EAX,dword ptr [ESP + 0x30]      ; 005ce1f9
    MOV EBX,dword ptr [ESI]             ; 005ce1fd
    MOV dword ptr [ESP + 0x68],EAX      ; 005ce1ff
    MOV EAX,dword ptr [ESP + 0x34]      ; 005ce203
    MOV EBX,dword ptr [EBX + 0x4]       ; 005ce207
    MOV dword ptr [ESP + 0x6c],EAX      ; 005ce20a
    FCOMP double ptr [ESP + 0x48]       ; 005ce20e
    FNSTSW AX                           ; 005ce212
    SAHF                                ; 005ce214
    JC 0x005ce2f0                       ; 005ce215
        ;   XREF to: 005ce2f0 (CONDITIONAL_JUMP)  ; LAB_005ce2f0
    FLD double ptr [ESP + 0x40]         ; 005ce21b
    FCOMP double ptr [ESP + 0x50]       ; 005ce21f
    FNSTSW AX                           ; 005ce223
    SAHF                                ; 005ce225
    JC 0x005ce2f0                       ; 005ce226
        ;   XREF to: 005ce2f0 (CONDITIONAL_JUMP)  ; LAB_005ce2f0
    LEA EAX,[ESI + 0x10]                ; 005ce22c
    MOV ECX,ESI                         ; 005ce22f
    ADD ESI,0xc                         ; 005ce231
    MOV dword ptr [ESP + 0x78],ESI      ; 005ce234
    FLD double ptr [0x006542da]         ; 005ce238 | DOUBLE_006542da
    FLD double ptr [ESP + 0x58]         ; 005ce23e
    IMUL ESI,dword ptr [ECX + 0x4],0x38 ; 005ce242
        ;   Label: LAB_005ce242
    FLD double ptr [ESI + EBX*0x1 + 0x10] ; 005ce246
    FMUL double ptr [EDX]               ; 005ce24a
    FMUL ST1                            ; 005ce24c
    FSTP double ptr [EAX]               ; 005ce24e
    FLD double ptr [ESI + EBX*0x1 + 0x8] ; 005ce250
    FCHS                                ; 005ce254
    FMUL double ptr [EDX + 0x8]         ; 005ce256
    FLD double ptr [EAX]                ; 005ce259
    FMUL ST3                            ; 005ce25b
    FXCH                                ; 005ce25d
    FST double ptr [EAX + 0x8]          ; 005ce25f
    FMUL ST3                            ; 005ce262
    ADD EAX,0x10                        ; 005ce264
    ADD ECX,0x4                         ; 005ce267
    MOV ESI,dword ptr [ESP + 0x78]      ; 005ce26a
    FXCH                                ; 005ce26e
    FSTP double ptr [EAX + -0x10]       ; 005ce270
    FSTP double ptr [EAX + -0x8]        ; 005ce273
    CMP ECX,ESI                         ; 005ce276
    JNZ 0x005ce242                      ; 005ce278
        ;   XREF to: 005ce242 (CONDITIONAL_JUMP)  ; LAB_005ce242
    FSTP ST0                            ; 005ce27a
    FSTP ST0                            ; 005ce27c
    MOV ESP,EBP                         ; 005ce27e
    POP EBP                             ; 005ce280
    POP EDI                             ; 005ce281
    POP ESI                             ; 005ce282
    POP EBX                             ; 005ce283
    RET                                 ; 005ce284
    MOV EAX,dword ptr [ESI + 0x50]      ; 005ce285
        ;   Label: LAB_005ce285
    MOV dword ptr [ESP + 0x20],EAX      ; 005ce288
    MOV EAX,dword ptr [ESI + 0x54]      ; 005ce28c
    MOV dword ptr [ESP + 0x24],EAX      ; 005ce28f
    JMP 0x005ce0c9                      ; 005ce293
        ;   XREF to: 005ce0c9 (UNCONDITIONAL_JUMP)  ; LAB_005ce0c9
    FLD double ptr [ESI + 0x48]         ; 005ce298
        ;   Label: LAB_005ce298
    FCHS                                ; 005ce29b
    FSTP double ptr [ESP + 0x10]        ; 005ce29d
    JMP 0x005ce0f4                      ; 005ce2a1
        ;   XREF to: 005ce0f4 (UNCONDITIONAL_JUMP)  ; LAB_005ce0f4
    FLD double ptr [ESI + 0x40]         ; 005ce2a6
        ;   Label: LAB_005ce2a6
    FCHS                                ; 005ce2a9
    FSTP double ptr [ESP + 0x18]        ; 005ce2ab
    JMP 0x005ce120                      ; 005ce2af
        ;   XREF to: 005ce120 (UNCONDITIONAL_JUMP)  ; LAB_005ce120
    XOR ECX,ECX                         ; 005ce2b4
        ;   Label: LAB_005ce2b4
    MOV EBX,0xbff00000                  ; 005ce2b6
    MOV dword ptr [ESP + 0x8],ECX       ; 005ce2bb
    MOV dword ptr [ESP + 0xc],EBX       ; 005ce2bf
    JMP 0x005ce199                      ; 005ce2c3
        ;   XREF to: 005ce199 (UNCONDITIONAL_JUMP)  ; LAB_005ce199
    XOR ECX,ECX                         ; 005ce2c8
        ;   Label: LAB_005ce2c8
    MOV EBX,0xbff00000                  ; 005ce2ca
    MOV dword ptr [ESP + 0x28],ECX      ; 005ce2cf
    MOV dword ptr [ESP + 0x2c],EBX      ; 005ce2d3
    JMP 0x005ce1c7                      ; 005ce2d7
        ;   XREF to: 005ce1c7 (UNCONDITIONAL_JUMP)  ; LAB_005ce1c7
    XOR ECX,ECX                         ; 005ce2dc
        ;   Label: LAB_005ce2dc
    MOV EBX,0xbff00000                  ; 005ce2de
    MOV dword ptr [ESP + 0x30],ECX      ; 005ce2e3
    MOV dword ptr [ESP + 0x34],EBX      ; 005ce2e7
    JMP 0x005ce1f5                      ; 005ce2eb
        ;   XREF to: 005ce1f5 (UNCONDITIONAL_JUMP)  ; LAB_005ce1f5
    FLD double ptr [ESP + 0x48]         ; 005ce2f0
        ;   Label: LAB_005ce2f0
    FCOMP double ptr [ESP + 0x40]       ; 005ce2f4
    FNSTSW AX                           ; 005ce2f8
    SAHF                                ; 005ce2fa
    JC 0x005ce362                       ; 005ce2fb
        ;   XREF to: 005ce362 (CONDITIONAL_JUMP)  ; LAB_005ce362
    FLD double ptr [ESP + 0x48]         ; 005ce2fd
    FCOMP double ptr [ESP + 0x50]       ; 005ce301
    FNSTSW AX                           ; 005ce305
    SAHF                                ; 005ce307
    JC 0x005ce362                       ; 005ce308
        ;   XREF to: 005ce362 (CONDITIONAL_JUMP)  ; LAB_005ce362
    LEA EAX,[ESI + 0x10]                ; 005ce30a
    MOV ECX,ESI                         ; 005ce30d
    ADD ESI,0xc                         ; 005ce30f
    MOV dword ptr [ESP + 0x74],ESI      ; 005ce312
    FLD double ptr [0x006542da]         ; 005ce316 | DOUBLE_006542da
    FLD double ptr [ESP + 0x60]         ; 005ce31c
    IMUL ESI,dword ptr [ECX + 0x4],0x38 ; 005ce320
        ;   Label: LAB_005ce320
    FLD double ptr [ESI + EBX*0x1]      ; 005ce324
    FMUL double ptr [EDX]               ; 005ce327
    FSTP double ptr [EAX]               ; 005ce329
    FLD double ptr [ESI + EBX*0x1 + 0x10] ; 005ce32b
    FCHS                                ; 005ce32f
    FMUL double ptr [EDX + 0x8]         ; 005ce331
    FMUL ST1                            ; 005ce334
    FLD double ptr [EAX]                ; 005ce336
    FMUL ST3                            ; 005ce338
    FXCH                                ; 005ce33a
    FST double ptr [EAX + 0x8]          ; 005ce33c
    FMUL ST3                            ; 005ce33f
    ADD EAX,0x10                        ; 005ce341
    ADD ECX,0x4                         ; 005ce344
    MOV ESI,dword ptr [ESP + 0x74]      ; 005ce347
    FXCH                                ; 005ce34b
    FSTP double ptr [EAX + -0x10]       ; 005ce34d
    FSTP double ptr [EAX + -0x8]        ; 005ce350
    CMP ECX,ESI                         ; 005ce353
    JNZ 0x005ce320                      ; 005ce355
        ;   XREF to: 005ce320 (CONDITIONAL_JUMP)  ; LAB_005ce320
    FSTP ST0                            ; 005ce357
    FSTP ST0                            ; 005ce359
    MOV ESP,EBP                         ; 005ce35b
    POP EBP                             ; 005ce35d
    POP EDI                             ; 005ce35e
    POP ESI                             ; 005ce35f
    POP EBX                             ; 005ce360
    RET                                 ; 005ce361
    LEA EAX,[ESI + 0x10]                ; 005ce362
        ;   Label: LAB_005ce362
    MOV ECX,ESI                         ; 005ce365
    ADD ESI,0xc                         ; 005ce367
    MOV dword ptr [ESP + 0x70],ESI      ; 005ce36a
    FLD double ptr [0x006542da]         ; 005ce36e | DOUBLE_006542da
    FLD double ptr [ESP + 0x68]         ; 005ce374
    IMUL ESI,dword ptr [ECX + 0x4],0x38 ; 005ce378
        ;   Label: LAB_005ce378
    FLD double ptr [ESI + EBX*0x1]      ; 005ce37c
    FCHS                                ; 005ce37f
    FMUL double ptr [EDX]               ; 005ce381
    FMUL ST1                            ; 005ce383
    FSTP double ptr [EAX]               ; 005ce385
    FLD double ptr [ESI + EBX*0x1 + 0x8] ; 005ce387
    FCHS                                ; 005ce38b
    FMUL double ptr [EDX + 0x8]         ; 005ce38d
    FLD double ptr [EAX]                ; 005ce390
    FMUL ST3                            ; 005ce392
    FXCH                                ; 005ce394
    FST double ptr [EAX + 0x8]          ; 005ce396
    FMUL ST3                            ; 005ce399
    ADD EAX,0x10                        ; 005ce39b
    ADD ECX,0x4                         ; 005ce39e
    MOV ESI,dword ptr [ESP + 0x70]      ; 005ce3a1
    FXCH                                ; 005ce3a5
    FSTP double ptr [EAX + -0x10]       ; 005ce3a7
    FSTP double ptr [EAX + -0x8]        ; 005ce3aa
    CMP ECX,ESI                         ; 005ce3ad
    JNZ 0x005ce378                      ; 005ce3af
        ;   XREF to: 005ce378 (CONDITIONAL_JUMP)  ; LAB_005ce378
    FSTP ST0                            ; 005ce3b1
    FSTP ST0                            ; 005ce3b3
    MOV ESP,EBP                         ; 005ce3b5
    POP EBP                             ; 005ce3b7
    POP EDI                             ; 005ce3b8
    POP ESI                             ; 005ce3b9
    POP EBX                             ; 005ce3ba
    RET                                 ; 005ce3bb

