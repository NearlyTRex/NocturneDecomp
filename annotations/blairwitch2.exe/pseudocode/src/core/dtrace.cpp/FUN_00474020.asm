; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00474020(int param_1,float *param_2)
;
;
; XREF[1]:
;   core_dtrace.cpp_FUN_00474550 at 00474653
;
; Referenced Globals:
;   undefined4 DAT_005d1b6b
;   undefined4 DAT_005f5b10
;   undefined4 DAT_0060b27c
;   undefined4 DAT_0060b280
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005b849c
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474020
        ;   Label: core_dtrace.cpp_FUN_00474020
    PUSH ESI                            ; 00474021
    PUSH EDI                            ; 00474022
    PUSH EBP                            ; 00474023
    SUB ESP,0xd8                        ; 00474024
    MOV EBP,dword ptr [ESP + 0xf0]      ; 0047402a
    MOV EAX,dword ptr [ESP + 0xec]      ; 00474031
    FLD float ptr [0x005d1b6b]          ; 00474038 | DAT_005d1b6b
    FLD float ptr [EAX + 0x28]          ; 0047403e
    FMUL ST1                            ; 00474041
    FLD float ptr [EAX + 0x2c]          ; 00474043
    FMUL ST2                            ; 00474046
    FLD float ptr [EAX + 0x30]          ; 00474048
    FMULP ST3                           ; 0047404b
    LEA EDI,[ESP + 0x9c]                ; 0047404d
    LEA ESI,[ESP + 0x90]                ; 00474054
    LEA EDX,[ESP + 0x48]                ; 0047405b
    LEA EAX,[ESP + 0x9c]                ; 0047405f
    FXCH                                ; 00474066
    FSTP float ptr [ESP + 0x90]         ; 00474068
    FSTP float ptr [ESP + 0x94]         ; 0047406f
    FSTP float ptr [ESP + 0x98]         ; 00474076
    MOVSD ES:EDI,ESI                    ; 0047407d
    MOVSD ES:EDI,ESI                    ; 0047407e
    MOVSD ES:EDI,ESI                    ; 0047407f
    CMP EDX,EAX                         ; 00474080
    JZ 0x004740a5                       ; 00474082
        ;   XREF to: 004740a5 (CONDITIONAL_JUMP)  ; LAB_004740a5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00474084
    MOV dword ptr [ESP + 0x48],EAX      ; 0047408b
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0047408f
    MOV dword ptr [ESP + 0x4c],EAX      ; 00474096
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0047409a
    MOV dword ptr [ESP + 0x50],EAX      ; 004740a1
    PUSH 0x1c21e68                      ; 004740a5
        ;   Label: LAB_004740a5
    MOV EDX,dword ptr [0x0060b27c]      ; 004740aa | DAT_0060b27c
    PUSH EDX                            ; 004740b0
    LEA EBX,[ESP + 0x5c]                ; 004740b1
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280 ; 004740b5
        ;   XREF to: 0046b280 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 004740ba
    MOV EAX,EBP                         ; 004740bd
    MOV EDX,dword ptr [0x0060b280]      ; 004740bf | DAT_0060b280
    FLD float ptr [EAX]                 ; 004740c5
    FMUL float ptr [0x005f5b10]         ; 004740c7 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 004740cd
    FLD float ptr [EAX + 0x4]           ; 004740cf
    FMUL float ptr [0x005f5b10]         ; 004740d2 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 004740d8
    FLD float ptr [EAX + 0x8]           ; 004740db
    FMUL float ptr [0x005f5b10]         ; 004740de | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 004740e4
    LEA EAX,[ESP + 0x54]                ; 004740e7
    PUSH EAX                            ; 004740eb
    MOV EAX,dword ptr [EDX]             ; 004740ec
    PUSH EAX                            ; 004740ee
    CALL engine_special.cpp_FUN_0055d723 ; 004740ef
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004740f4
    FLD float ptr [EBP]                 ; 004740f7
    FADD float ptr [ESP + 0x48]         ; 004740fa
    FSTP float ptr [ESP + 0x6c]         ; 004740fe
    MOV EAX,dword ptr [EBP + 0x4]       ; 00474102
    MOV dword ptr [ESP + 0x70],EAX      ; 00474105
    MOV EAX,dword ptr [EBP + 0x8]       ; 00474109
    LEA EBX,[ESP + 0x78]                ; 0047410c
    MOV dword ptr [ESP + 0x74],EAX      ; 00474110
    LEA EAX,[ESP + 0x6c]                ; 00474114
    MOV EDX,dword ptr [0x0060b280]      ; 00474118 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0047411e
    FMUL float ptr [0x005f5b10]         ; 00474120 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 00474126
    FLD float ptr [EAX + 0x4]           ; 00474128
    FMUL float ptr [0x005f5b10]         ; 0047412b | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 00474131
    FLD float ptr [EAX + 0x8]           ; 00474134
    FMUL float ptr [0x005f5b10]         ; 00474137 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 0047413d
    LEA EAX,[ESP + 0x78]                ; 00474140
    PUSH EAX                            ; 00474144
    MOV EAX,dword ptr [EDX]             ; 00474145
    ADD EAX,0x30                        ; 00474147
    PUSH EAX                            ; 0047414a
    CALL engine_special.cpp_FUN_0055d723 ; 0047414b
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00474150
    FLD float ptr [EBP]                 ; 00474153
    FADD float ptr [ESP + 0x48]         ; 00474156
    FSTP float ptr [ESP + 0x6c]         ; 0047415a
    MOV EAX,dword ptr [EBP + 0x4]       ; 0047415e
    LEA EBX,[ESP + 0xa8]                ; 00474161
    MOV dword ptr [ESP + 0x70],EAX      ; 00474168
    MOV EDX,dword ptr [0x0060b280]      ; 0047416c | DAT_0060b280
    FLD float ptr [EBP + 0x8]           ; 00474172
    FADD float ptr [ESP + 0x50]         ; 00474175
    LEA EAX,[ESP + 0x6c]                ; 00474179
    FSTP float ptr [ESP + 0x74]         ; 0047417d
    FLD float ptr [EAX]                 ; 00474181
    FMUL float ptr [0x005f5b10]         ; 00474183 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 00474189
    FLD float ptr [EAX + 0x4]           ; 0047418b
    FMUL float ptr [0x005f5b10]         ; 0047418e | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 00474194
    FLD float ptr [EAX + 0x8]           ; 00474197
    FMUL float ptr [0x005f5b10]         ; 0047419a | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 004741a0
    LEA EAX,[ESP + 0xa8]                ; 004741a3
    PUSH EAX                            ; 004741aa
    MOV EAX,dword ptr [EDX]             ; 004741ab
    ADD EAX,0x60                        ; 004741ad
    PUSH EAX                            ; 004741b0
    CALL engine_special.cpp_FUN_0055d723 ; 004741b1
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004741b6
    MOV EAX,dword ptr [EBP]             ; 004741b9
    MOV dword ptr [ESP + 0x6c],EAX      ; 004741bc
    MOV EAX,dword ptr [EBP + 0x4]       ; 004741c0
    LEA EBX,[ESP + 0x84]                ; 004741c3
    MOV dword ptr [ESP + 0x70],EAX      ; 004741ca
    MOV EDX,dword ptr [0x0060b280]      ; 004741ce | DAT_0060b280
    FLD float ptr [EBP + 0x8]           ; 004741d4
    FADD float ptr [ESP + 0x50]         ; 004741d7
    LEA EAX,[ESP + 0x6c]                ; 004741db
    FSTP float ptr [ESP + 0x74]         ; 004741df
    FLD float ptr [EAX]                 ; 004741e3
    FMUL float ptr [0x005f5b10]         ; 004741e5 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 004741eb
    FLD float ptr [EAX + 0x4]           ; 004741ed
    FMUL float ptr [0x005f5b10]         ; 004741f0 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 004741f6
    FLD float ptr [EAX + 0x8]           ; 004741f9
    FMUL float ptr [0x005f5b10]         ; 004741fc | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 00474202
    LEA EAX,[ESP + 0x84]                ; 00474205
    PUSH EAX                            ; 0047420c
    MOV EAX,dword ptr [EDX]             ; 0047420d
    ADD EAX,0x90                        ; 0047420f
    PUSH EAX                            ; 00474214
    CALL engine_special.cpp_FUN_0055d723 ; 00474215
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0047421a
    MOV EAX,dword ptr [EBP]             ; 0047421d
    MOV dword ptr [ESP + 0x6c],EAX      ; 00474220
    FLD float ptr [EBP + 0x4]           ; 00474224
    FADD float ptr [ESP + 0x4c]         ; 00474227
    FSTP float ptr [ESP + 0x70]         ; 0047422b
    MOV EAX,dword ptr [EBP + 0x8]       ; 0047422f
    LEA EBX,[ESP + 0xb4]                ; 00474232
    MOV dword ptr [ESP + 0x74],EAX      ; 00474239
    LEA EAX,[ESP + 0x6c]                ; 0047423d
    MOV EDX,dword ptr [0x0060b280]      ; 00474241 | DAT_0060b280
    FLD float ptr [EAX]                 ; 00474247
    FMUL float ptr [0x005f5b10]         ; 00474249 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 0047424f
    FLD float ptr [EAX + 0x4]           ; 00474251
    FMUL float ptr [0x005f5b10]         ; 00474254 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 0047425a
    FLD float ptr [EAX + 0x8]           ; 0047425d
    FMUL float ptr [0x005f5b10]         ; 00474260 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 00474266
    LEA EAX,[ESP + 0xb4]                ; 00474269
    PUSH EAX                            ; 00474270
    MOV EAX,dword ptr [EDX]             ; 00474271
    ADD EAX,0xc0                        ; 00474273
    PUSH EAX                            ; 00474278
    CALL engine_special.cpp_FUN_0055d723 ; 00474279
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0047427e
    FLD float ptr [EBP]                 ; 00474281
    FADD float ptr [ESP + 0x48]         ; 00474284
    FSTP float ptr [ESP + 0x6c]         ; 00474288
    FLD float ptr [EBP + 0x4]           ; 0047428c
    FADD float ptr [ESP + 0x4c]         ; 0047428f
    FSTP float ptr [ESP + 0x70]         ; 00474293
    MOV EAX,dword ptr [EBP + 0x8]       ; 00474297
    LEA EBX,[ESP + 0x60]                ; 0047429a
    MOV dword ptr [ESP + 0x74],EAX      ; 0047429e
    LEA EAX,[ESP + 0x6c]                ; 004742a2
    MOV EDX,dword ptr [0x0060b280]      ; 004742a6 | DAT_0060b280
    FLD float ptr [EAX]                 ; 004742ac
    FMUL float ptr [0x005f5b10]         ; 004742ae | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 004742b4
    FLD float ptr [EAX + 0x4]           ; 004742b6
    FMUL float ptr [0x005f5b10]         ; 004742b9 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 004742bf
    FLD float ptr [EAX + 0x8]           ; 004742c2
    FMUL float ptr [0x005f5b10]         ; 004742c5 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 004742cb
    LEA EAX,[ESP + 0x60]                ; 004742ce
    PUSH EAX                            ; 004742d2
    MOV EAX,dword ptr [EDX]             ; 004742d3
    ADD EAX,0xf0                        ; 004742d5
    PUSH EAX                            ; 004742da
    CALL engine_special.cpp_FUN_0055d723 ; 004742db
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004742e0
    FLD float ptr [EBP]                 ; 004742e3
    FADD float ptr [ESP + 0x48]         ; 004742e6
    LEA EBX,[ESP + 0xcc]                ; 004742ea
    FSTP float ptr [ESP + 0x6c]         ; 004742f1
    FLD float ptr [EBP + 0x4]           ; 004742f5
    FADD float ptr [ESP + 0x4c]         ; 004742f8
    LEA EAX,[ESP + 0x6c]                ; 004742fc
    FSTP float ptr [ESP + 0x70]         ; 00474300
    FLD float ptr [EBP + 0x8]           ; 00474304
    FADD float ptr [ESP + 0x50]         ; 00474307
    MOV EDX,dword ptr [0x0060b280]      ; 0047430b | DAT_0060b280
    FSTP float ptr [ESP + 0x74]         ; 00474311
    FLD float ptr [EAX]                 ; 00474315
    FMUL float ptr [0x005f5b10]         ; 00474317 | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 0047431d
    FLD float ptr [EAX + 0x4]           ; 0047431f
    FMUL float ptr [0x005f5b10]         ; 00474322 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 00474328
    FLD float ptr [EAX + 0x8]           ; 0047432b
    FMUL float ptr [0x005f5b10]         ; 0047432e | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 00474334
    LEA EAX,[ESP + 0xcc]                ; 00474337
    PUSH EAX                            ; 0047433e
    MOV EAX,dword ptr [EDX]             ; 0047433f
    ADD EAX,0x120                       ; 00474341
    PUSH EAX                            ; 00474346
    CALL engine_special.cpp_FUN_0055d723 ; 00474347
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0047434c
    MOV EAX,dword ptr [EBP]             ; 0047434f
    MOV dword ptr [ESP + 0x6c],EAX      ; 00474352
    LEA EBX,[ESP + 0xc0]                ; 00474356
    FLD float ptr [EBP + 0x4]           ; 0047435d
    FADD float ptr [ESP + 0x4c]         ; 00474360
    MOV EDX,dword ptr [0x0060b280]      ; 00474364 | DAT_0060b280
    FSTP float ptr [ESP + 0x70]         ; 0047436a
    FLD float ptr [EBP + 0x8]           ; 0047436e
    FADD float ptr [ESP + 0x50]         ; 00474371
    LEA EAX,[ESP + 0x6c]                ; 00474375
    FSTP float ptr [ESP + 0x74]         ; 00474379
    FLD float ptr [EAX]                 ; 0047437d
    FMUL float ptr [0x005f5b10]         ; 0047437f | DAT_005f5b10
    FISTP dword ptr [EBX]               ; 00474385
    FLD float ptr [EAX + 0x4]           ; 00474387
    FMUL float ptr [0x005f5b10]         ; 0047438a | DAT_005f5b10
    FISTP dword ptr [EBX + 0x4]         ; 00474390
    FLD float ptr [EAX + 0x8]           ; 00474393
    FMUL float ptr [0x005f5b10]         ; 00474396 | DAT_005f5b10
    FISTP dword ptr [EBX + 0x8]         ; 0047439c
    LEA EAX,[ESP + 0xc0]                ; 0047439f
    PUSH EAX                            ; 004743a6
    MOV EAX,dword ptr [EDX]             ; 004743a7
    ADD EAX,0x150                       ; 004743a9
    PUSH EAX                            ; 004743ae
    CALL engine_special.cpp_FUN_0055d723 ; 004743af
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004743b4
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004743b7
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    AND EAX,0xff                        ; 004743bc
    PUSH EAX                            ; 004743c1
    MOV ECX,dword ptr [0x0060b280]      ; 004743c2 | DAT_0060b280
    PUSH ECX                            ; 004743c8
    MOV EBX,0x4                         ; 004743c9
    MOV EDI,0x4                         ; 004743ce
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0 ; 004743d3
        ;   XREF to: 0046b7e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 004743d8
    XOR ESI,ESI                         ; 004743db
    MOV EDX,dword ptr [0x0060b280]      ; 004743dd | DAT_0060b280
    PUSH 0x1                            ; 004743e3
    MOV dword ptr [ESP + 0x8],EBX       ; 004743e5
    MOV dword ptr [ESP + 0xc],ESI       ; 004743e9
    MOV dword ptr [ESP + 0x10],ESI      ; 004743ed
    MOV dword ptr [ESP + 0x14],ESI      ; 004743f1
    PUSH EDX                            ; 004743f5
    MOV dword ptr [ESP + 0x1c],ESI      ; 004743f6
    MOV EBX,0x1                         ; 004743fa
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 004743ff
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    LEA EAX,[ESP + 0x8]                 ; 00474404
    ADD ESP,0x8                         ; 00474408
    MOV EBP,dword ptr [0x0060b280]      ; 0047440b | DAT_0060b280
    MOV dword ptr [ESP + 0x3c],ESI      ; 00474411
    MOV dword ptr [ESP + 0x30],EBX      ; 00474415
    MOV dword ptr [ESP + 0x18],EDI      ; 00474419
    PUSH EAX                            ; 0047441d
    MOV ESI,0x5                         ; 0047441e
    MOV EBX,0x6                         ; 00474423
    PUSH EBP                            ; 00474428
    XOR EDI,EDI                         ; 00474429
    MOV EBP,0x4                         ; 0047442b
    MOV dword ptr [ESP + 0x2c],ESI      ; 00474430
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 00474434
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x2                         ; 00474439
    MOV EDX,0x3                         ; 0047443e
    ADD ESP,0x8                         ; 00474443
    MOV ECX,0x7                         ; 00474446
    MOV dword ptr [ESP + 0x3c],EAX      ; 0047444b
    MOV EAX,ESP                         ; 0047444f
    MOV ESI,dword ptr [0x0060b280]      ; 00474451 | DAT_0060b280
    PUSH EAX                            ; 00474457
    MOV dword ptr [ESP + 0x34],EDX      ; 00474458
    MOV dword ptr [ESP + 0x28],ECX      ; 0047445c
    PUSH ESI                            ; 00474460
    MOV dword ptr [ESP + 0x20],EBX      ; 00474461
    MOV EBX,0x1                         ; 00474465
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 0047446a
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x7                         ; 0047446f
    MOV EDX,0x3                         ; 00474474
    MOV ESI,0x2                         ; 00474479
    ADD ESP,0x8                         ; 0047447e
    MOV ECX,dword ptr [0x0060b280]      ; 00474481 | DAT_0060b280
    MOV dword ptr [ESP + 0x24],EAX      ; 00474487
    MOV EAX,ESP                         ; 0047448b
    MOV dword ptr [ESP + 0x3c],EDI      ; 0047448d
    PUSH EAX                            ; 00474491
    MOV dword ptr [ESP + 0x34],EBP      ; 00474492
    MOV dword ptr [ESP + 0x1c],EDX      ; 00474496
    PUSH ECX                            ; 0047449a
    MOV EDI,0x6                         ; 0047449b
    MOV EBP,0x5                         ; 004744a0
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 004744a5
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 004744aa
    MOV EAX,ESP                         ; 004744ad
    MOV dword ptr [ESP + 0x3c],EBX      ; 004744af
    MOV dword ptr [ESP + 0x30],ESI      ; 004744b3
    PUSH EAX                            ; 004744b7
    MOV EAX,[0x0060b280]                ; 004744b8 | DAT_0060b280
    MOV dword ptr [ESP + 0x28],EDI      ; 004744bd
    PUSH EAX                            ; 004744c1
    MOV dword ptr [ESP + 0x20],EBP      ; 004744c2
    MOV ESI,0x7                         ; 004744c6
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 004744cb
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EDX,0x4                         ; 004744d0
    ADD ESP,0x8                         ; 004744d5
    MOV EAX,ESP                         ; 004744d8
    MOV dword ptr [ESP + 0x24],EDI      ; 004744da
    PUSH EAX                            ; 004744de
    MOV EDI,dword ptr [0x0060b280]      ; 004744df | DAT_0060b280
    MOV dword ptr [ESP + 0x40],EDX      ; 004744e5
    PUSH EDI                            ; 004744e9
    MOV dword ptr [ESP + 0x38],EBP      ; 004744ea
    MOV dword ptr [ESP + 0x20],ESI      ; 004744ee
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 004744f2
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    MOV EAX,0x2                         ; 004744f7
    ADD ESP,0x8                         ; 004744fc
    MOV EBP,0x3                         ; 004744ff
    MOV dword ptr [ESP + 0x30],EAX      ; 00474504
    MOV EAX,ESP                         ; 00474508
    MOV dword ptr [ESP + 0x24],EBX      ; 0047450a
    PUSH EAX                            ; 0047450e
    MOV EBX,dword ptr [0x0060b280]      ; 0047450f | DAT_0060b280
    XOR ECX,ECX                         ; 00474515
    PUSH EBX                            ; 00474517
    MOV dword ptr [ESP + 0x44],EBP      ; 00474518
    MOV dword ptr [ESP + 0x20],ECX      ; 0047451c
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 00474520
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD ESP,0x8                         ; 00474525
    PUSH 0x0                            ; 00474528
    MOV ESI,dword ptr [0x0060b280]      ; 0047452a | DAT_0060b280
    PUSH ESI                            ; 00474530
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00474531
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00474536
    ADD ESP,0xd8                        ; 00474539
    POP EBP                             ; 0047453f
    POP EDI                             ; 00474540
    POP ESI                             ; 00474541
    POP EBX                             ; 00474542
    RET                                 ; 00474543

