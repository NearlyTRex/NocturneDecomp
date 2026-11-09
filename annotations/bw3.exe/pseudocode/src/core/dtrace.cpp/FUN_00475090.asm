; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00475090(int param_1,float *param_2)
;
;
; XREF[1]:
;   core_dtrace.cpp_FUN_004755c0 at 004756c3
;
; Referenced Globals:
;   undefined4 DAT_005bca21
;   undefined4 DAT_005dee30
;   undefined4 DAT_005f2af8
;   undefined4 DAT_005f2afc
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005a35cc
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475090
        ;   Label: core_dtrace.cpp_FUN_00475090
    PUSH ESI                            ; 00475091
    PUSH EDI                            ; 00475092
    PUSH EBP                            ; 00475093
    SUB ESP,0xd8                        ; 00475094
    MOV EBP,dword ptr [ESP + 0xf0]      ; 0047509a
    MOV EAX,dword ptr [ESP + 0xec]      ; 004750a1
    FLD float ptr [0x005bca21]          ; 004750a8 | DAT_005bca21
    FLD float ptr [EAX + 0x28]          ; 004750ae
    FMUL ST1                            ; 004750b1
    FLD float ptr [EAX + 0x2c]          ; 004750b3
    FMUL ST2                            ; 004750b6
    FLD float ptr [EAX + 0x30]          ; 004750b8
    FMULP ST3                           ; 004750bb
    LEA EDI,[ESP + 0x9c]                ; 004750bd
    LEA ESI,[ESP + 0x90]                ; 004750c4
    LEA EDX,[ESP + 0x48]                ; 004750cb
    LEA EAX,[ESP + 0x9c]                ; 004750cf
    FXCH                                ; 004750d6
    FSTP float ptr [ESP + 0x90]         ; 004750d8
    FSTP float ptr [ESP + 0x94]         ; 004750df
    FSTP float ptr [ESP + 0x98]         ; 004750e6
    MOVSD ES:EDI,ESI                    ; 004750ed
    MOVSD ES:EDI,ESI                    ; 004750ee
    MOVSD ES:EDI,ESI                    ; 004750ef
    CMP EDX,EAX                         ; 004750f0
    JZ 0x00475115                       ; 004750f2
        ;   XREF to: 00475115 (CONDITIONAL_JUMP)  ; LAB_00475115
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004750f4
    MOV dword ptr [ESP + 0x48],EAX      ; 004750fb
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004750ff
    MOV dword ptr [ESP + 0x4c],EAX      ; 00475106
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0047510a
    MOV dword ptr [ESP + 0x50],EAX      ; 00475111
    PUSH 0x1c599c0                      ; 00475115
        ;   Label: LAB_00475115
    MOV EDX,dword ptr [0x005f2af8]      ; 0047511a | DAT_005f2af8
    PUSH EDX                            ; 00475120
    LEA EBX,[ESP + 0x5c]                ; 00475121
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60 ; 00475125
        ;   XREF to: 0046ce60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 0047512a
    MOV EAX,EBP                         ; 0047512d
    MOV EDX,dword ptr [0x005f2afc]      ; 0047512f | DAT_005f2afc
    FLD float ptr [EAX]                 ; 00475135
    FMUL float ptr [0x005dee30]         ; 00475137 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 0047513d
    FLD float ptr [EAX + 0x4]           ; 0047513f
    FMUL float ptr [0x005dee30]         ; 00475142 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475148
    FLD float ptr [EAX + 0x8]           ; 0047514b
    FMUL float ptr [0x005dee30]         ; 0047514e | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 00475154
    LEA EAX,[ESP + 0x54]                ; 00475157
    PUSH EAX                            ; 0047515b
    MOV EAX,dword ptr [EDX]             ; 0047515c
    PUSH EAX                            ; 0047515e
    CALL engine_special.cpp_FUN_005632a3 ; 0047515f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00475164
    FLD float ptr [EBP]                 ; 00475167
    FADD float ptr [ESP + 0x48]         ; 0047516a
    FSTP float ptr [ESP + 0x6c]         ; 0047516e
    MOV EAX,dword ptr [EBP + 0x4]       ; 00475172
    MOV dword ptr [ESP + 0x70],EAX      ; 00475175
    MOV EAX,dword ptr [EBP + 0x8]       ; 00475179
    LEA EBX,[ESP + 0x78]                ; 0047517c
    MOV dword ptr [ESP + 0x74],EAX      ; 00475180
    LEA EAX,[ESP + 0x6c]                ; 00475184
    MOV EDX,dword ptr [0x005f2afc]      ; 00475188 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0047518e
    FMUL float ptr [0x005dee30]         ; 00475190 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 00475196
    FLD float ptr [EAX + 0x4]           ; 00475198
    FMUL float ptr [0x005dee30]         ; 0047519b | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 004751a1
    FLD float ptr [EAX + 0x8]           ; 004751a4
    FMUL float ptr [0x005dee30]         ; 004751a7 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 004751ad
    LEA EAX,[ESP + 0x78]                ; 004751b0
    PUSH EAX                            ; 004751b4
    MOV EAX,dword ptr [EDX]             ; 004751b5
    ADD EAX,0x30                        ; 004751b7
    PUSH EAX                            ; 004751ba
    CALL engine_special.cpp_FUN_005632a3 ; 004751bb
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004751c0
    FLD float ptr [EBP]                 ; 004751c3
    FADD float ptr [ESP + 0x48]         ; 004751c6
    FSTP float ptr [ESP + 0x6c]         ; 004751ca
    MOV EAX,dword ptr [EBP + 0x4]       ; 004751ce
    LEA EBX,[ESP + 0xa8]                ; 004751d1
    MOV dword ptr [ESP + 0x70],EAX      ; 004751d8
    MOV EDX,dword ptr [0x005f2afc]      ; 004751dc | DAT_005f2afc
    FLD float ptr [EBP + 0x8]           ; 004751e2
    FADD float ptr [ESP + 0x50]         ; 004751e5
    LEA EAX,[ESP + 0x6c]                ; 004751e9
    FSTP float ptr [ESP + 0x74]         ; 004751ed
    FLD float ptr [EAX]                 ; 004751f1
    FMUL float ptr [0x005dee30]         ; 004751f3 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 004751f9
    FLD float ptr [EAX + 0x4]           ; 004751fb
    FMUL float ptr [0x005dee30]         ; 004751fe | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475204
    FLD float ptr [EAX + 0x8]           ; 00475207
    FMUL float ptr [0x005dee30]         ; 0047520a | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 00475210
    LEA EAX,[ESP + 0xa8]                ; 00475213
    PUSH EAX                            ; 0047521a
    MOV EAX,dword ptr [EDX]             ; 0047521b
    ADD EAX,0x60                        ; 0047521d
    PUSH EAX                            ; 00475220
    CALL engine_special.cpp_FUN_005632a3 ; 00475221
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00475226
    MOV EAX,dword ptr [EBP]             ; 00475229
    MOV dword ptr [ESP + 0x6c],EAX      ; 0047522c
    MOV EAX,dword ptr [EBP + 0x4]       ; 00475230
    LEA EBX,[ESP + 0x84]                ; 00475233
    MOV dword ptr [ESP + 0x70],EAX      ; 0047523a
    MOV EDX,dword ptr [0x005f2afc]      ; 0047523e | DAT_005f2afc
    FLD float ptr [EBP + 0x8]           ; 00475244
    FADD float ptr [ESP + 0x50]         ; 00475247
    LEA EAX,[ESP + 0x6c]                ; 0047524b
    FSTP float ptr [ESP + 0x74]         ; 0047524f
    FLD float ptr [EAX]                 ; 00475253
    FMUL float ptr [0x005dee30]         ; 00475255 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 0047525b
    FLD float ptr [EAX + 0x4]           ; 0047525d
    FMUL float ptr [0x005dee30]         ; 00475260 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475266
    FLD float ptr [EAX + 0x8]           ; 00475269
    FMUL float ptr [0x005dee30]         ; 0047526c | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 00475272
    LEA EAX,[ESP + 0x84]                ; 00475275
    PUSH EAX                            ; 0047527c
    MOV EAX,dword ptr [EDX]             ; 0047527d
    ADD EAX,0x90                        ; 0047527f
    PUSH EAX                            ; 00475284
    CALL engine_special.cpp_FUN_005632a3 ; 00475285
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0047528a
    MOV EAX,dword ptr [EBP]             ; 0047528d
    MOV dword ptr [ESP + 0x6c],EAX      ; 00475290
    FLD float ptr [EBP + 0x4]           ; 00475294
    FADD float ptr [ESP + 0x4c]         ; 00475297
    FSTP float ptr [ESP + 0x70]         ; 0047529b
    MOV EAX,dword ptr [EBP + 0x8]       ; 0047529f
    LEA EBX,[ESP + 0xb4]                ; 004752a2
    MOV dword ptr [ESP + 0x74],EAX      ; 004752a9
    LEA EAX,[ESP + 0x6c]                ; 004752ad
    MOV EDX,dword ptr [0x005f2afc]      ; 004752b1 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 004752b7
    FMUL float ptr [0x005dee30]         ; 004752b9 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 004752bf
    FLD float ptr [EAX + 0x4]           ; 004752c1
    FMUL float ptr [0x005dee30]         ; 004752c4 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 004752ca
    FLD float ptr [EAX + 0x8]           ; 004752cd
    FMUL float ptr [0x005dee30]         ; 004752d0 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 004752d6
    LEA EAX,[ESP + 0xb4]                ; 004752d9
    PUSH EAX                            ; 004752e0
    MOV EAX,dword ptr [EDX]             ; 004752e1
    ADD EAX,0xc0                        ; 004752e3
    PUSH EAX                            ; 004752e8
    CALL engine_special.cpp_FUN_005632a3 ; 004752e9
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004752ee
    FLD float ptr [EBP]                 ; 004752f1
    FADD float ptr [ESP + 0x48]         ; 004752f4
    FSTP float ptr [ESP + 0x6c]         ; 004752f8
    FLD float ptr [EBP + 0x4]           ; 004752fc
    FADD float ptr [ESP + 0x4c]         ; 004752ff
    FSTP float ptr [ESP + 0x70]         ; 00475303
    MOV EAX,dword ptr [EBP + 0x8]       ; 00475307
    LEA EBX,[ESP + 0x60]                ; 0047530a
    MOV dword ptr [ESP + 0x74],EAX      ; 0047530e
    LEA EAX,[ESP + 0x6c]                ; 00475312
    MOV EDX,dword ptr [0x005f2afc]      ; 00475316 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0047531c
    FMUL float ptr [0x005dee30]         ; 0047531e | DAT_005dee30
    FISTP dword ptr [EBX]               ; 00475324
    FLD float ptr [EAX + 0x4]           ; 00475326
    FMUL float ptr [0x005dee30]         ; 00475329 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 0047532f
    FLD float ptr [EAX + 0x8]           ; 00475332
    FMUL float ptr [0x005dee30]         ; 00475335 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 0047533b
    LEA EAX,[ESP + 0x60]                ; 0047533e
    PUSH EAX                            ; 00475342
    MOV EAX,dword ptr [EDX]             ; 00475343
    ADD EAX,0xf0                        ; 00475345
    PUSH EAX                            ; 0047534a
    CALL engine_special.cpp_FUN_005632a3 ; 0047534b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00475350
    FLD float ptr [EBP]                 ; 00475353
    FADD float ptr [ESP + 0x48]         ; 00475356
    LEA EBX,[ESP + 0xcc]                ; 0047535a
    FSTP float ptr [ESP + 0x6c]         ; 00475361
    FLD float ptr [EBP + 0x4]           ; 00475365
    FADD float ptr [ESP + 0x4c]         ; 00475368
    LEA EAX,[ESP + 0x6c]                ; 0047536c
    FSTP float ptr [ESP + 0x70]         ; 00475370
    FLD float ptr [EBP + 0x8]           ; 00475374
    FADD float ptr [ESP + 0x50]         ; 00475377
    MOV EDX,dword ptr [0x005f2afc]      ; 0047537b | DAT_005f2afc
    FSTP float ptr [ESP + 0x74]         ; 00475381
    FLD float ptr [EAX]                 ; 00475385
    FMUL float ptr [0x005dee30]         ; 00475387 | DAT_005dee30
    FISTP dword ptr [EBX]               ; 0047538d
    FLD float ptr [EAX + 0x4]           ; 0047538f
    FMUL float ptr [0x005dee30]         ; 00475392 | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475398
    FLD float ptr [EAX + 0x8]           ; 0047539b
    FMUL float ptr [0x005dee30]         ; 0047539e | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 004753a4
    LEA EAX,[ESP + 0xcc]                ; 004753a7
    PUSH EAX                            ; 004753ae
    MOV EAX,dword ptr [EDX]             ; 004753af
    ADD EAX,0x120                       ; 004753b1
    PUSH EAX                            ; 004753b6
    CALL engine_special.cpp_FUN_005632a3 ; 004753b7
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004753bc
    MOV EAX,dword ptr [EBP]             ; 004753bf
    MOV dword ptr [ESP + 0x6c],EAX      ; 004753c2
    LEA EBX,[ESP + 0xc0]                ; 004753c6
    FLD float ptr [EBP + 0x4]           ; 004753cd
    FADD float ptr [ESP + 0x4c]         ; 004753d0
    MOV EDX,dword ptr [0x005f2afc]      ; 004753d4 | DAT_005f2afc
    FSTP float ptr [ESP + 0x70]         ; 004753da
    FLD float ptr [EBP + 0x8]           ; 004753de
    FADD float ptr [ESP + 0x50]         ; 004753e1
    LEA EAX,[ESP + 0x6c]                ; 004753e5
    FSTP float ptr [ESP + 0x74]         ; 004753e9
    FLD float ptr [EAX]                 ; 004753ed
    FMUL float ptr [0x005dee30]         ; 004753ef | DAT_005dee30
    FISTP dword ptr [EBX]               ; 004753f5
    FLD float ptr [EAX + 0x4]           ; 004753f7
    FMUL float ptr [0x005dee30]         ; 004753fa | DAT_005dee30
    FISTP dword ptr [EBX + 0x4]         ; 00475400
    FLD float ptr [EAX + 0x8]           ; 00475403
    FMUL float ptr [0x005dee30]         ; 00475406 | DAT_005dee30
    FISTP dword ptr [EBX + 0x8]         ; 0047540c
    LEA EAX,[ESP + 0xc0]                ; 0047540f
    PUSH EAX                            ; 00475416
    MOV EAX,dword ptr [EDX]             ; 00475417
    ADD EAX,0x150                       ; 00475419
    PUSH EAX                            ; 0047541e
    CALL engine_special.cpp_FUN_005632a3 ; 0047541f
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00475424
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 00475427
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    AND EAX,0xff                        ; 0047542c
    PUSH EAX                            ; 00475431
    MOV ECX,dword ptr [0x005f2afc]      ; 00475432 | DAT_005f2afc
    PUSH ECX                            ; 00475438
    MOV EBX,0x4                         ; 00475439
    MOV EDI,0x4                         ; 0047543e
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0 ; 00475443
        ;   XREF to: 0046d3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046d3c0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 00475448
    XOR ESI,ESI                         ; 0047544b
    MOV EDX,dword ptr [0x005f2afc]      ; 0047544d | DAT_005f2afc
    PUSH 0x1                            ; 00475453
    MOV dword ptr [ESP + 0x8],EBX       ; 00475455
    MOV dword ptr [ESP + 0xc],ESI       ; 00475459
    MOV dword ptr [ESP + 0x10],ESI      ; 0047545d
    MOV dword ptr [ESP + 0x14],ESI      ; 00475461
    PUSH EDX                            ; 00475465
    MOV dword ptr [ESP + 0x1c],ESI      ; 00475466
    MOV EBX,0x1                         ; 0047546a
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0047546f
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    LEA EAX,[ESP + 0x8]                 ; 00475474
    ADD ESP,0x8                         ; 00475478
    MOV EBP,dword ptr [0x005f2afc]      ; 0047547b | DAT_005f2afc
    MOV dword ptr [ESP + 0x3c],ESI      ; 00475481
    MOV dword ptr [ESP + 0x30],EBX      ; 00475485
    MOV dword ptr [ESP + 0x18],EDI      ; 00475489
    PUSH EAX                            ; 0047548d
    MOV ESI,0x5                         ; 0047548e
    MOV EBX,0x6                         ; 00475493
    PUSH EBP                            ; 00475498
    XOR EDI,EDI                         ; 00475499
    MOV EBP,0x4                         ; 0047549b
    MOV dword ptr [ESP + 0x2c],ESI      ; 004754a0
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 004754a4
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x2                         ; 004754a9
    MOV EDX,0x3                         ; 004754ae
    ADD ESP,0x8                         ; 004754b3
    MOV ECX,0x7                         ; 004754b6
    MOV dword ptr [ESP + 0x3c],EAX      ; 004754bb
    MOV EAX,ESP                         ; 004754bf
    MOV ESI,dword ptr [0x005f2afc]      ; 004754c1 | DAT_005f2afc
    PUSH EAX                            ; 004754c7
    MOV dword ptr [ESP + 0x34],EDX      ; 004754c8
    MOV dword ptr [ESP + 0x28],ECX      ; 004754cc
    PUSH ESI                            ; 004754d0
    MOV dword ptr [ESP + 0x20],EBX      ; 004754d1
    MOV EBX,0x1                         ; 004754d5
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 004754da
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x7                         ; 004754df
    MOV EDX,0x3                         ; 004754e4
    MOV ESI,0x2                         ; 004754e9
    ADD ESP,0x8                         ; 004754ee
    MOV ECX,dword ptr [0x005f2afc]      ; 004754f1 | DAT_005f2afc
    MOV dword ptr [ESP + 0x24],EAX      ; 004754f7
    MOV EAX,ESP                         ; 004754fb
    MOV dword ptr [ESP + 0x3c],EDI      ; 004754fd
    PUSH EAX                            ; 00475501
    MOV dword ptr [ESP + 0x34],EBP      ; 00475502
    MOV dword ptr [ESP + 0x1c],EDX      ; 00475506
    PUSH ECX                            ; 0047550a
    MOV EDI,0x6                         ; 0047550b
    MOV EBP,0x5                         ; 00475510
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 00475515
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 0047551a
    MOV EAX,ESP                         ; 0047551d
    MOV dword ptr [ESP + 0x3c],EBX      ; 0047551f
    MOV dword ptr [ESP + 0x30],ESI      ; 00475523
    PUSH EAX                            ; 00475527
    MOV EAX,[0x005f2afc]                ; 00475528 | DAT_005f2afc
    MOV dword ptr [ESP + 0x28],EDI      ; 0047552d
    PUSH EAX                            ; 00475531
    MOV dword ptr [ESP + 0x20],EBP      ; 00475532
    MOV ESI,0x7                         ; 00475536
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 0047553b
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EDX,0x4                         ; 00475540
    ADD ESP,0x8                         ; 00475545
    MOV EAX,ESP                         ; 00475548
    MOV dword ptr [ESP + 0x24],EDI      ; 0047554a
    PUSH EAX                            ; 0047554e
    MOV EDI,dword ptr [0x005f2afc]      ; 0047554f | DAT_005f2afc
    MOV dword ptr [ESP + 0x40],EDX      ; 00475555
    PUSH EDI                            ; 00475559
    MOV dword ptr [ESP + 0x38],EBP      ; 0047555a
    MOV dword ptr [ESP + 0x20],ESI      ; 0047555e
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 00475562
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x2                         ; 00475567
    ADD ESP,0x8                         ; 0047556c
    MOV EBP,0x3                         ; 0047556f
    MOV dword ptr [ESP + 0x30],EAX      ; 00475574
    MOV EAX,ESP                         ; 00475578
    MOV dword ptr [ESP + 0x24],EBX      ; 0047557a
    PUSH EAX                            ; 0047557e
    MOV EBX,dword ptr [0x005f2afc]      ; 0047557f | DAT_005f2afc
    XOR ECX,ECX                         ; 00475585
    PUSH EBX                            ; 00475587
    MOV dword ptr [ESP + 0x44],EBP      ; 00475588
    MOV dword ptr [ESP + 0x20],ECX      ; 0047558c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0 ; 00475590
        ;   XREF to: 0046b2c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0046b2c0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00475595
    PUSH 0x0                            ; 00475598
    MOV ESI,dword ptr [0x005f2afc]      ; 0047559a | DAT_005f2afc
    PUSH ESI                            ; 004755a0
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 004755a1
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004755a6
    ADD ESP,0xd8                        ; 004755a9
    POP EBP                             ; 004755af
    POP EDI                             ; 004755b0
    POP ESI                             ; 004755b1
    POP EBX                             ; 004755b2
    RET                                 ; 004755b3

