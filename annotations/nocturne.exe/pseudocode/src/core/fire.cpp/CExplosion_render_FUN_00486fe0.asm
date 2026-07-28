; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_render_FUN_00486fe0(CExplosion *this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x8c]:1  local_8c
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
; undefined        Stack[-0x58]:1  local_58
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
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a87e
;
; Referenced Globals:
;   double DOUBLE_00581214 = 27
;   double DOUBLE_0058121c = 5.54070922470058E-315
;   double DOUBLE_00581224 = 0.00390625
;   double DOUBLE_0058122c = 148
;   double DOUBLE_00581234 = 5.55851772209180E-315
;   double DOUBLE_0058123c = 113
;   float FLOAT_0059d1f8 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b858c
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00486fe0
        ;   Label: core_fire.cpp_CExplosion_render_FUN_00486fe0
    PUSH EBP                            ; 00486fe1
    SUB ESP,0x84                        ; 00486fe2
    MOV ESI,dword ptr [ESP + 0x90]      ; 00486fe8
    TEST dword ptr [ESI + 0xc],0x7fffffff ; 00486fef
    JNZ 0x00487001                      ; 00486ff6
        ;   XREF to: 00487001 (CONDITIONAL_JUMP)  ; LAB_00487001
    ADD ESP,0x84                        ; 00486ff8
    POP EBP                             ; 00486ffe
    POP ESI                             ; 00486fff
    RET                                 ; 00487000
    PUSH EDI                            ; 00487001
        ;   Label: LAB_00487001
    PUSH EBX                            ; 00487002
    FLD float ptr [ESI + 0xc]           ; 00487003
    FLD1                                ; 00487006
    FSUBRP                              ; 00487008
    FMUL double ptr [0x00581214]        ; 0048700a | DOUBLE_00581214
    CALL crt_math.c_round_FUN_00563a30  ; 00487010
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x78]        ; 00487015
    MOV EDX,dword ptr [ESP + 0x78]      ; 00487019
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048701d
    SUB EAX,EDX                         ; 00487024
    SHL EAX,0x4                         ; 00487026
    ADD EAX,0x5b858c                    ; 00487029 | DAT_005b858c
    PUSH EAX                            ; 0048702e
    MOV ECX,dword ptr [0x005ae704]      ; 0048702f | DAT_005ae704
    PUSH ECX                            ; 00487035 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 00487036
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0048703b
    PUSH ESI                            ; 0048703e
    MOV EBX,dword ptr [0x005ae704]      ; 0048703f | DAT_005ae704
    PUSH EBX                            ; 00487045 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00487046
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048704b
    LEA EAX,[ESP + 0x3c]                ; 0048704e
    PUSH EAX                            ; 00487052
    MOV EDI,dword ptr [0x005ae704]      ; 00487053 | DAT_005ae704
    PUSH EDI                            ; 00487059 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0 ; 0048705a
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; CVector3f * engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(CDemonRenderer * this_ptr, CVector3f * output)
    ADD ESP,0x8                         ; 0048705f
    PUSH 0x0                            ; 00487062
    LEA EAX,[ESP + 0x40]                ; 00487064
    PUSH EAX                            ; 00487068
    MOV EBP,dword ptr [0x005ae704]      ; 00487069 | DAT_005ae704
    PUSH EBP                            ; 0048706f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00487070
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    FLD float ptr [ESI + 0x10]          ; 00487075
    FMUL double ptr [0x0058122c]        ; 00487078 | DOUBLE_0058122c
    FLD float ptr [ESI + 0x10]          ; 0048707e
    FCHS                                ; 00487081
    FMUL float ptr [0x0058121c]         ; 00487083 | DOUBLE_0058121c
    FXCH                                ; 00487089
    FLD double ptr [0x00581224]         ; 0048708b | DOUBLE_00581224
    FXCH                                ; 00487091
    FMUL ST1                            ; 00487093
    FXCH ST2                            ; 00487095
    FMULP                               ; 00487097
    ADD ESP,0xc                         ; 00487099
    MOV EAX,dword ptr [ESI + 0x18]      ; 0048709c
    FXCH                                ; 0048709f
    CALL crt_math.c_round_FUN_00563a30  ; 004870a1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004870a6
    CALL crt_math.c_round_FUN_00563a30  ; 004870a8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004870ad
    FISTP dword ptr [ESP + 0x84]        ; 004870af
    FISTP dword ptr [ESP + 0x80]        ; 004870b6
    TEST EAX,EAX                        ; 004870bd
    JZ 0x004870e1                       ; 004870bf
        ;   XREF to: 004870e1 (CONDITIONAL_JUMP)  ; LAB_004870e1
    MOV ECX,dword ptr [ESP + 0x84]      ; 004870c1
    MOV EDX,dword ptr [ESP + 0x80]      ; 004870c8
    NEG ECX                             ; 004870cf
    NEG EDX                             ; 004870d1
    MOV dword ptr [ESP + 0x84],ECX      ; 004870d3
    MOV dword ptr [ESP + 0x80],EDX      ; 004870da
    MOV EAX,dword ptr [ESP + 0x80]      ; 004870e1
        ;   Label: LAB_004870e1
    MOV dword ptr [ESP + 0x88],EAX      ; 004870e8
    FILD dword ptr [ESP + 0x88]         ; 004870ef
    FSTP float ptr [ESP + 0x7c]         ; 004870f6
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004870fa
    MOV dword ptr [ESP + 0x60],EAX      ; 004870fe
    FLD float ptr [ESI + 0x10]          ; 00487102
    FMUL float ptr [0x00581234]         ; 00487105 | DOUBLE_00581234
    FMUL double ptr [0x00581224]        ; 0048710b | DOUBLE_00581224
    MOV EDX,dword ptr [0x005ae704]      ; 00487111 | DAT_005ae704
    XOR EBX,EBX                         ; 00487117
    LEA EAX,[ESP + 0x60]                ; 00487119
    MOV dword ptr [ESP + 0x68],EBX      ; 0048711d
    LEA EBX,[ESP + 0x6c]                ; 00487121
    FSTP float ptr [ESP + 0x64]         ; 00487125
    FLD float ptr [EAX]                 ; 00487129
    FMUL float ptr [0x0059d1f8]         ; 0048712b | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 00487131
    FLD float ptr [EAX + 0x4]           ; 00487133
    FMUL float ptr [0x0059d1f8]         ; 00487136 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048713c
    FLD float ptr [EAX + 0x8]           ; 0048713f
    FMUL float ptr [0x0059d1f8]         ; 00487142 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00487148
    LEA EAX,[ESP + 0x6c]                ; 0048714b
    PUSH EAX                            ; 0048714f
    MOV EAX,dword ptr [EDX]             ; 00487150 | DAT_01b4d738
    PUSH EAX                            ; 00487152
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00487153
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00487158
    MOV EAX,dword ptr [ESP + 0x84]      ; 0048715b
    LEA EBX,[ESP + 0x48]                ; 00487162
    MOV dword ptr [ESP + 0x88],EAX      ; 00487166
    MOV EDX,dword ptr [0x005ae704]      ; 0048716d | DAT_005ae704
    FILD dword ptr [ESP + 0x88]         ; 00487173
    LEA EAX,[ESP + 0x60]                ; 0048717a
    FSTP float ptr [ESP + 0x60]         ; 0048717e
    FLD float ptr [EAX]                 ; 00487182
    FMUL float ptr [0x0059d1f8]         ; 00487184 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048718a
    FLD float ptr [EAX + 0x4]           ; 0048718c
    FMUL float ptr [0x0059d1f8]         ; 0048718f | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00487195
    FLD float ptr [EAX + 0x8]           ; 00487198
    FMUL float ptr [0x0059d1f8]         ; 0048719b | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004871a1
    LEA EAX,[ESP + 0x48]                ; 004871a4
    PUSH EAX                            ; 004871a8
    MOV EAX,dword ptr [EDX]             ; 004871a9 | DAT_01b4d738
    ADD EAX,0x30                        ; 004871ab
    PUSH EAX                            ; 004871ae
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004871af
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [ESI + 0x10]          ; 004871b4
    FCHS                                ; 004871b7
    FMUL double ptr [0x0058123c]        ; 004871b9 | DOUBLE_0058123c
    FMUL double ptr [0x00581224]        ; 004871bf | DOUBLE_00581224
    LEA EBX,[ESP + 0x5c]                ; 004871c5
    LEA EAX,[ESP + 0x68]                ; 004871c9
    ADD ESP,0x8                         ; 004871cd
    MOV EDX,dword ptr [0x005ae704]      ; 004871d0 | DAT_005ae704
    FSTP float ptr [ESP + 0x64]         ; 004871d6
    FLD float ptr [EAX]                 ; 004871da
    FMUL float ptr [0x0059d1f8]         ; 004871dc | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 004871e2
    FLD float ptr [EAX + 0x4]           ; 004871e4
    FMUL float ptr [0x0059d1f8]         ; 004871e7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 004871ed
    FLD float ptr [EAX + 0x8]           ; 004871f0
    FMUL float ptr [0x0059d1f8]         ; 004871f3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 004871f9
    LEA EAX,[ESP + 0x54]                ; 004871fc
    PUSH EAX                            ; 00487200
    MOV EAX,dword ptr [EDX]             ; 00487201 | DAT_01b4d738
    ADD EAX,0x60                        ; 00487203
    PUSH EAX                            ; 00487206
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00487207
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0048720c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048720f
    LEA EBX,[ESP + 0x30]                ; 00487213
    MOV dword ptr [ESP + 0x60],EAX      ; 00487217
    LEA EAX,[ESP + 0x60]                ; 0048721b
    MOV EDX,dword ptr [0x005ae704]      ; 0048721f | DAT_005ae704
    FLD float ptr [EAX]                 ; 00487225
    FMUL float ptr [0x0059d1f8]         ; 00487227 | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048722d
    FLD float ptr [EAX + 0x4]           ; 0048722f
    FMUL float ptr [0x0059d1f8]         ; 00487232 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 00487238
    FLD float ptr [EAX + 0x8]           ; 0048723b
    FMUL float ptr [0x0059d1f8]         ; 0048723e | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 00487244
    LEA EAX,[ESP + 0x30]                ; 00487247
    PUSH EAX                            ; 0048724b
    MOV EAX,dword ptr [EDX]             ; 0048724c | DAT_01b4d738
    ADD EAX,0x90                        ; 0048724e
    PUSH EAX                            ; 00487253
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00487254
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00487259
    MOV EAX,[0x005ae704]                ; 0048725c | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 00487261 | DAT_01b4d738
    MOV dword ptr [EDX + 0x18],0x20000  ; 00487263
    MOV EDX,dword ptr [EAX]             ; 0048726a | DAT_01b4d738
    MOV dword ptr [EDX + 0x1c],0x20000  ; 0048726c
    MOV EDX,dword ptr [EAX]             ; 00487273 | DAT_01b4d738
    MOV dword ptr [EDX + 0x48],0xfe0000 ; 00487275
    MOV EDX,dword ptr [EAX]             ; 0048727c | DAT_01b4d738
    MOV dword ptr [EDX + 0x4c],0x20000  ; 0048727e
    MOV EDX,dword ptr [EAX]             ; 00487285 | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],0xfe0000 ; 00487287
    MOV EDX,dword ptr [EAX]             ; 0048728e | DAT_01b4d738
    MOV dword ptr [EDX + 0x7c],0xfe0000 ; 00487290
    MOV EDX,dword ptr [EAX]             ; 00487297 | DAT_01b4d738
    MOV dword ptr [EDX + 0xa8],0x20000  ; 00487299
    MOV EDX,dword ptr [EAX]             ; 004872a3 | DAT_01b4d738
    MOV dword ptr [EDX + 0xac],0xfe0000 ; 004872a5
    MOV EDX,dword ptr [EAX]             ; 004872af | DAT_01b4d738
    MOV dword ptr [EDX + 0x2c],0x8000   ; 004872b1
    MOV EDX,dword ptr [EAX]             ; 004872b8 | DAT_01b4d738
    MOV dword ptr [EDX + 0x5c],0x8000   ; 004872ba
    MOV EDX,dword ptr [EAX]             ; 004872c1 | DAT_01b4d738
    MOV dword ptr [EDX + 0x8c],0x8000   ; 004872c3
    MOV EDX,dword ptr [EAX]             ; 004872cd | DAT_01b4d738
    MOV ESI,0x4                         ; 004872cf
    MOV EBP,0x3                         ; 004872d4
    MOV dword ptr [EDX + 0xbc],0x8000   ; 004872d9
    XOR EDI,EDI                         ; 004872e3
    MOV dword ptr [ESP + 0xc],ESI       ; 004872e5
    MOV dword ptr [ESP + 0x1c],EDI      ; 004872e9
    MOV dword ptr [ESP + 0x18],EDI      ; 004872ed
    MOV dword ptr [ESP + 0x14],EDI      ; 004872f1
    MOV dword ptr [ESP + 0x10],EDI      ; 004872f5
    MOV ESI,0x1                         ; 004872f9
    MOV dword ptr [ESP + 0x20],EDI      ; 004872fe
    PUSH ESI                            ; 00487302
    MOV dword ptr [ESP + 0x30],EBP      ; 00487303
    MOV EDI,0x2                         ; 00487307
    PUSH EAX                            ; 0048730c | DAT_01b4d738
    MOV dword ptr [ESP + 0x2c],ESI      ; 0048730d
    MOV dword ptr [ESP + 0x30],EDI      ; 00487311
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00487315
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0048731a
    PUSH 0x123                          ; 0048731d
    LEA EAX,[ESP + 0xc]                 ; 00487322
    PUSH EAX                            ; 00487326
    MOV EAX,[0x005ae704]                ; 00487327 | DAT_005ae704
    PUSH EAX                            ; 0048732c | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 0048732d
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 00487332
    XOR EBX,EBX                         ; 00487335
    PUSH EBX                            ; 00487337
    MOV EDX,dword ptr [0x005ae704]      ; 00487338 | DAT_005ae704
    PUSH EDX                            ; 0048733e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0048733f
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00487344
    MOV ECX,dword ptr [0x005ae704]      ; 00487347 | DAT_005ae704
    PUSH ECX                            ; 0048734d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0048734e
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00487353
    POP EBX                             ; 00487356
    POP EDI                             ; 00487357
    ADD ESP,0x84                        ; 00487358
    POP EBP                             ; 0048735e
    POP ESI                             ; 0048735f
    RET                                 ; 00487360

