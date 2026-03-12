; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blendPixelWithHardwarePalette_FUN_00433f50(int x,int y,float alpha,int color)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; float            Stack[0xc]:4   alpha
; int              Stack[0x10]:4   color
; Local Variables:
; uint             Stack[-0x38]:4  local_38
; _MMX_INTEGER     Stack[-0x30]:8  local_30
; _MMX_INTEGER     Stack[-0x28]:8  local_28
; _MMX_INTEGER     Stack[-0x20]:8  local_20
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAAWithBlending_FUN_004339c0 at 00433b43
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   uint[256] g_Hardware32BitPalette
;   ushort[256] g_Hardware16BitPalette
;   _BIT_INTEGER32 g_RedBitPosition
;   _BIT_INTEGER32 g_RedBitCount
;   _BIT_INTEGER32 g_GreenBitPosition
;   _BIT_INTEGER32 g_GreenBitCount
;   _BIT_INTEGER32 g_BlueBitPosition
;   _BIT_INTEGER32 g_BlueBitCount
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433f50
        ;   Label: cockpit_ckptutil.c_blendPixelWithHardwarePalette_FUN_00433f50
    PUSH ESI                            ; 00433f51
    PUSH EDI                            ; 00433f52
    PUSH EBP                            ; 00433f53
    MOV EBP,ESP                         ; 00433f54
    SUB ESP,0x2c                        ; 00433f56
    AND ESP,0xfffffff8                  ; 00433f59
    MOV EAX,dword ptr [EBP + 0x14]      ; 00433f5c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00433f5f
    MOV EDI,dword ptr [EBP + 0x20]      ; 00433f62
    CMP EAX,dword ptr [0x02d02558]      ; 00433f65 | g_ClipLeft
    JL 0x00434199                       ; 00433f6b
        ;   XREF to: 00434199 (CONDITIONAL_JUMP)  ; LAB_00434199
    CMP EAX,dword ptr [0x02d02560]      ; 00433f71 | g_ClipRight
    JG 0x00434199                       ; 00433f77
        ;   XREF to: 00434199 (CONDITIONAL_JUMP)  ; LAB_00434199
    CMP ESI,dword ptr [0x02d0255c]      ; 00433f7d | g_ClipTop
    JL 0x00434199                       ; 00433f83
        ;   XREF to: 00434199 (CONDITIONAL_JUMP)  ; LAB_00434199
    CMP ESI,dword ptr [0x02d02564]      ; 00433f89 | g_ClipBottom
    JG 0x00434199                       ; 00433f8f
        ;   XREF to: 00434199 (CONDITIONAL_JUMP)  ; LAB_00434199
    MOV ECX,dword ptr [0x0067939c]      ; 00433f95 | g_BitsPerPixel
    CMP ECX,0x8                         ; 00433f9b
    JZ 0x00434199                       ; 00433f9e
        ;   XREF to: 00434199 (CONDITIONAL_JUMP)  ; LAB_00434199
    LEA EDX,[ESI*0x4 + 0x0]             ; 00433fa4
    CMP ECX,0x10                        ; 00433fab
    JZ 0x004341a0                       ; 00433fae
        ;   XREF to: 004341a0 (CONDITIONAL_JUMP)  ; LAB_004341a0
    LEA EBX,[EAX*0x4 + 0x0]             ; 00433fb4
    MOV EDX,dword ptr [EDX + 0x2cf6a9c] ; 00433fbb | g_ScreenBufferArray
    ADD EBX,EDX                         ; 00433fc1
    MOV CL,byte ptr [0x02d01f24]        ; 00433fc3 | g_RedBitPosition
    MOV EDX,dword ptr [EBX]             ; 00433fc9
    SHR EDX,CL                          ; 00433fcb
    XOR ECX,ECX                         ; 00433fcd
    AND EDX,0xff                        ; 00433fcf
    MOV dword ptr [ESP + 0x14],ECX      ; 00433fd5
    MOV dword ptr [ESP + 0x10],EDX      ; 00433fd9
    FILD qword ptr [ESP + 0x10]         ; 00433fdd
    MOV CL,byte ptr [0x02d01f30]        ; 00433fe1 | g_GreenBitPosition
    MOV EDX,dword ptr [EBX]             ; 00433fe7
    FLD float ptr [EBP + 0x1c]          ; 00433fe9
    FXCH                                ; 00433fec
    FMUL ST1                            ; 00433fee
    SHR EDX,CL                          ; 00433ff0
    XOR ECX,ECX                         ; 00433ff2
    AND EDX,0xff                        ; 00433ff4
    MOV dword ptr [ESP + 0x14],ECX      ; 00433ffa
    MOV dword ptr [ESP + 0x10],EDX      ; 00433ffe
    FILD qword ptr [ESP + 0x10]         ; 00434002
    MOV CL,byte ptr [0x02d01f3c]        ; 00434006 | g_BlueBitPosition
    MOV EDX,dword ptr [EBX]             ; 0043400c
    FMUL ST2                            ; 0043400e
    SHR EDX,CL                          ; 00434010
    XOR EBX,EBX                         ; 00434012
    AND EDX,0xff                        ; 00434014
    MOV dword ptr [ESP + 0x24],EBX      ; 0043401a
    MOV dword ptr [ESP + 0x20],EDX      ; 0043401e
    FILD qword ptr [ESP + 0x20]         ; 00434022
    FMULP ST3                           ; 00434026
        ;   Label: LAB_00434026
    FXCH                                ; 00434028
    FSTP float ptr [ESP + 0x4]          ; 0043402a
    FSTP float ptr [ESP]                ; 0043402e
    FSTP float ptr [ESP + 0xc]          ; 00434031
    CMP dword ptr [0x0067939c],0x10     ; 00434035 | g_BitsPerPixel
    JNZ 0x0043422e                      ; 0043403c
        ;   XREF to: 0043422e (CONDITIONAL_JUMP)  ; LAB_0043422e
    MOV DX,word ptr [EDI*0x2 + 0x2d01d24] ; 00434042 | g_Hardware16BitPalette
    AND EDX,0xffff                      ; 0043404a
    MOV CL,byte ptr [0x02d01f24]        ; 00434050 | g_RedBitPosition
    MOV EBX,EDX                         ; 00434056
    SHR EBX,CL                          ; 00434058
    MOV CL,byte ptr [0x02d01f2c]        ; 0043405a | g_RedBitCount
    SHL EBX,CL                          ; 00434060
    MOV ECX,EBX                         ; 00434062
    AND ECX,0xff                        ; 00434064
    MOV EDI,EDX                         ; 0043406a
    MOV dword ptr [ESP + 0x8],ECX       ; 0043406c
    MOV CL,byte ptr [0x02d01f30]        ; 00434070 | g_GreenBitPosition
    SHR EDI,CL                          ; 00434076
    MOV CL,byte ptr [0x02d01f38]        ; 00434078 | g_GreenBitCount
    SHL EDI,CL                          ; 0043407e
    MOV CL,byte ptr [0x02d01f3c]        ; 00434080 | g_BlueBitPosition
    SHR EDX,CL                          ; 00434086
    MOV CL,byte ptr [0x02d01f44]        ; 00434088 | g_BlueBitCount
    SHL EDX,CL                          ; 0043408e
    MOV ECX,EDX                         ; 00434090
        ;   Label: LAB_00434090
    AND EDI,0xff                        ; 00434092
    AND ECX,0xff                        ; 00434098
    FLD float ptr [EBP + 0x1c]          ; 0043409e
    XOR EBX,EBX                         ; 004340a1
    MOV EDX,dword ptr [ESP + 0x8]       ; 004340a3
    MOV dword ptr [ESP + 0x24],EBX      ; 004340a7
    MOV dword ptr [ESP + 0x20],EDX      ; 004340ab
    FLD1                                ; 004340af
    FILD qword ptr [ESP + 0x20]         ; 004340b1
    FXCH                                ; 004340b5
    FSUBRP ST2,ST0                      ; 004340b7
    FMUL ST1                            ; 004340b9
    MOV dword ptr [ESP + 0x18],EDI      ; 004340bb
    MOV dword ptr [ESP + 0x10],ECX      ; 004340bf
    MOV dword ptr [ESP + 0x1c],EBX      ; 004340c3
    MOV dword ptr [ESP + 0x14],EBX      ; 004340c7
    FILD qword ptr [ESP + 0x18]         ; 004340cb
    FMUL ST2                            ; 004340cf
    FILD qword ptr [ESP + 0x10]         ; 004340d1
    FMULP ST3                           ; 004340d5
    SHL ESI,0x2                         ; 004340d7
    MOV EDI,dword ptr [0x0067939c]      ; 004340da | g_BitsPerPixel
    FLD float ptr [ESP + 0x4]           ; 004340e0
    FLD float ptr [ESP]                 ; 004340e4
    FLD float ptr [ESP + 0xc]           ; 004340e7
    FXCH ST4                            ; 004340eb
    FADD ST0,ST2                        ; 004340ed
    FXCH ST3                            ; 004340ef
    FADD ST0,ST1                        ; 004340f1
    FXCH ST5                            ; 004340f3
    FADD ST0,ST4                        ; 004340f5
    FXCH ST3                            ; 004340f7
    FSTP ST2                            ; 004340f9
    FXCH ST4                            ; 004340fb
    FSTP ST4                            ; 004340fd
    FXCH                                ; 004340ff
    FSTP ST2                            ; 00434101
    FSTP float ptr [ESP + 0x4]          ; 00434103
    FXCH                                ; 00434107
    FSTP float ptr [ESP]                ; 00434109
    FSTP float ptr [ESP + 0xc]          ; 0043410c
    CMP EDI,0x10                        ; 00434110
    JNZ 0x0043426e                      ; 00434113
        ;   XREF to: 0043426e (CONDITIONAL_JUMP)  ; LAB_0043426e
    FLD float ptr [ESP + 0x4]           ; 00434119
    FLD float ptr [ESP]                 ; 0043411d
    FLD float ptr [ESP + 0xc]           ; 00434120
    MOV CL,byte ptr [0x02d01f2c]        ; 00434124 | g_RedBitCount
    FXCH ST2                            ; 0043412a
    CALL crt_math.c_round_FUN_005fe6b0  ; 0043412c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00434131
    CALL crt_math.c_round_FUN_005fe6b0  ; 00434133
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00434138
    CALL crt_math.c_round_FUN_005fe6b0  ; 0043413a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0043413f
    FISTP qword ptr [ESP + 0x10]        ; 00434141
    FXCH                                ; 00434145
    FISTP qword ptr [ESP + 0x20]        ; 00434147
    FISTP qword ptr [ESP + 0x18]        ; 0043414b
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043414f
    MOV EDX,dword ptr [ESP + 0x20]      ; 00434153
    SHR EDI,CL                          ; 00434157
    MOV CL,byte ptr [0x02d01f38]        ; 00434159 | g_GreenBitCount
    MOV EBX,dword ptr [ESP + 0x18]      ; 0043415f
    SHR EDX,CL                          ; 00434163
    MOV CL,byte ptr [0x02d01f44]        ; 00434165 | g_BlueBitCount
    SHR EBX,CL                          ; 0043416b
    LEA ECX,[EAX + EAX*0x1]             ; 0043416d
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 00434170 | g_ScreenBufferArray
    MOV ESI,EDI                         ; 00434176
    ADD EAX,ECX                         ; 00434178
    MOV CL,byte ptr [0x02d01f24]        ; 0043417a | g_RedBitPosition
    SHL ESI,CL                          ; 00434180
    MOV CL,byte ptr [0x02d01f30]        ; 00434182 | g_GreenBitPosition
    SHL EDX,CL                          ; 00434188
    MOV CL,byte ptr [0x02d01f3c]        ; 0043418a | g_BlueBitPosition
    OR EDX,ESI                          ; 00434190
    SHL EBX,CL                          ; 00434192
    OR EDX,EBX                          ; 00434194
    MOV word ptr [EAX],DX               ; 00434196
    MOV ESP,EBP                         ; 00434199
        ;   Label: LAB_00434199
    POP EBP                             ; 0043419b
    POP EDI                             ; 0043419c
    POP ESI                             ; 0043419d
    POP EBX                             ; 0043419e
    RET                                 ; 0043419f
    MOV EDX,dword ptr [EDX + 0x2cf6a9c] ; 004341a0 | g_ScreenBufferArray
        ;   Label: LAB_004341a0
    MOV DX,word ptr [EDX + EAX*0x2]     ; 004341a6
    AND EDX,0xffff                      ; 004341aa
    MOV CL,byte ptr [0x02d01f24]        ; 004341b0 | g_RedBitPosition
    MOV EBX,EDX                         ; 004341b6
    SHR EBX,CL                          ; 004341b8
    MOV CL,byte ptr [0x02d01f2c]        ; 004341ba | g_RedBitCount
    SHL EBX,CL                          ; 004341c0
    XOR ECX,ECX                         ; 004341c2
    AND EBX,0xff                        ; 004341c4
    MOV dword ptr [ESP + 0x14],ECX      ; 004341ca
    MOV dword ptr [ESP + 0x10],EBX      ; 004341ce
    FILD qword ptr [ESP + 0x10]         ; 004341d2
    MOV CL,byte ptr [0x02d01f30]        ; 004341d6 | g_GreenBitPosition
    MOV EBX,EDX                         ; 004341dc
    FLD float ptr [EBP + 0x1c]          ; 004341de
    FXCH                                ; 004341e1
    FMUL ST1                            ; 004341e3
    SHR EBX,CL                          ; 004341e5
    MOV CL,byte ptr [0x02d01f38]        ; 004341e7 | g_GreenBitCount
    SHL EBX,CL                          ; 004341ed
    XOR ECX,ECX                         ; 004341ef
    AND EBX,0xff                        ; 004341f1
    MOV dword ptr [ESP + 0x14],ECX      ; 004341f7
    MOV dword ptr [ESP + 0x10],EBX      ; 004341fb
    FILD qword ptr [ESP + 0x10]         ; 004341ff
    MOV CL,byte ptr [0x02d01f3c]        ; 00434203 | g_BlueBitPosition
    FMUL ST2                            ; 00434209
    SHR EDX,CL                          ; 0043420b
    MOV CL,byte ptr [0x02d01f44]        ; 0043420d | g_BlueBitCount
    SHL EDX,CL                          ; 00434213
    XOR EBX,EBX                         ; 00434215
    AND EDX,0xff                        ; 00434217
    MOV dword ptr [ESP + 0x14],EBX      ; 0043421d
    MOV dword ptr [ESP + 0x10],EDX      ; 00434221
    FILD qword ptr [ESP + 0x10]         ; 00434225
    JMP 0x00434026                      ; 00434229
        ;   XREF to: 00434026 (UNCONDITIONAL_JUMP)  ; LAB_00434026
    LEA EBX,[EDI*0x4 + 0x0]             ; 0043422e
        ;   Label: LAB_0043422e
    MOV CL,byte ptr [0x02d01f24]        ; 00434235 | g_RedBitPosition
    MOV EDX,dword ptr [EBX + 0x2d01924] ; 0043423b | g_Hardware32BitPalette
    SHR EDX,CL                          ; 00434241
    MOV EDI,dword ptr [EBX + 0x2d01924] ; 00434243 | g_Hardware32BitPalette
    AND EDX,0xff                        ; 00434249
    MOV CL,byte ptr [0x02d01f30]        ; 0043424f | g_GreenBitPosition
    MOV dword ptr [ESP + 0x8],EDX       ; 00434255
    SHR EDI,CL                          ; 00434259
    MOV CL,byte ptr [0x02d01f3c]        ; 0043425b | g_BlueBitPosition
    MOV EDX,dword ptr [EBX + 0x2d01924] ; 00434261 | g_Hardware32BitPalette
    SHR EDX,CL                          ; 00434267
    JMP 0x00434090                      ; 00434269
        ;   XREF to: 00434090 (UNCONDITIONAL_JUMP)  ; LAB_00434090
    FLD float ptr [ESP + 0x4]           ; 0043426e
        ;   Label: LAB_0043426e
    FLD float ptr [ESP]                 ; 00434272
    FLD float ptr [ESP + 0xc]           ; 00434275
    MOV CL,byte ptr [0x02d01f24]        ; 00434279 | g_RedBitPosition
    FXCH ST2                            ; 0043427f
    CALL crt_math.c_round_FUN_005fe6b0  ; 00434281
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00434286
    CALL crt_math.c_round_FUN_005fe6b0  ; 00434288
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0043428d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0043428f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    SHL EAX,0x2                         ; 00434294
    FXCH                                ; 00434297
    FISTP qword ptr [ESP + 0x18]        ; 00434299
    FXCH                                ; 0043429d
    FISTP qword ptr [ESP + 0x10]        ; 0043429f
    FISTP qword ptr [ESP + 0x20]        ; 004342a3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004342a7
    MOV EBX,dword ptr [ESP + 0x18]      ; 004342ab
    MOV dword ptr [ESP + 0x28],EDX      ; 004342af
    SHL EBX,CL                          ; 004342b3
    MOV EDX,dword ptr [ESI + 0x2cf6a9c] ; 004342b5 | g_ScreenBufferArray
    MOV CL,byte ptr [0x02d01f30]        ; 004342bb | g_GreenBitPosition
    ADD EDX,EAX                         ; 004342c1
    MOV EAX,dword ptr [ESP + 0x28]      ; 004342c3
    MOV EDI,dword ptr [ESP + 0x20]      ; 004342c7
    SHL EAX,CL                          ; 004342cb
    MOV CL,byte ptr [0x02d01f3c]        ; 004342cd | g_BlueBitPosition
    OR EAX,EBX                          ; 004342d3
    SHL EDI,CL                          ; 004342d5
    OR EAX,EDI                          ; 004342d7
    MOV dword ptr [EDX],EAX             ; 004342d9
    MOV ESP,EBP                         ; 004342db
    POP EBP                             ; 004342dd
    POP EDI                             ; 004342de
    POP ESI                             ; 004342df
    POP EBX                             ; 004342e0
    RET                                 ; 004342e1

