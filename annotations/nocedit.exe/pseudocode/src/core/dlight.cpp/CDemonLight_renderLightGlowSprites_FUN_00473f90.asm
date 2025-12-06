; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90(CDemonLight * this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined1       Stack[-0x138]:1  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined1       Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
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
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
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
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c916
;
; Referenced Globals:
;   double DOUBLE_0061f15b = 18
;   double DOUBLE_0061f163 = 2
;   float FLOAT_0061f16b = 0.00001525902
;   double DOUBLE_0061f173 = 65535
;   float FLOAT_0061f17b = 0.1111111
;   double DOUBLE_0061f183 = 0.5
;   double DOUBLE_0061f18b = 0.25
;   float FLOAT_0065c900 = 256
;   float FLOAT_0065c908 = 0.00390625
;   undefined4 DAT_0066ff08
;   undefined4 DAT_0066ff24
;   undefined4 DAT_0066ff28
;   undefined4 DAT_0066ff2c
;   undefined4 DAT_0066ff30
;   undefined4 DAT_0066ff34
;   ... and 4 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   crt_math.c_round_FUN_005fe6b0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
;   engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
;   engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
;   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473f90
        ;   Label: core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90
    PUSH ESI                            ; 00473f91
    PUSH EDI                            ; 00473f92
    PUSH EBP                            ; 00473f93
    MOV EBP,ESP                         ; 00473f94
    SUB ESP,0x138                       ; 00473f96
    AND ESP,0xfffffff8                  ; 00473f9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473f9f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 00473fa2
    JNZ 0x00473fb2                      ; 00473fa9 | LAB_00473fb2
        ;   XREF to: 00473fb2 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00473fab
        ;   Label: LAB_00473fab
    POP EBP                             ; 00473fad
    POP EDI                             ; 00473fae
    POP ESI                             ; 00473faf
    POP EBX                             ; 00473fb0
    RET                                 ; 00473fb1
    LEA EAX,[ESP + 0xd4]                ; 00473fb2
        ;   Label: LAB_00473fb2
    PUSH EAX                            ; 00473fb9
    MOV ECX,dword ptr [0x006703ec]      ; 00473fba | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 00473fc0 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780 ; 00473fc1 | float * engine_drender.cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780(CDemonRenderer * this_ptr, float * output)
        ;   XREF to: 0048c780 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00473fc6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473fc9
    FLD float ptr [ESP + 0xd4]          ; 00473fcc
    FSUB float ptr [EAX + 0x4]          ; 00473fd3
    FLD float ptr [ESP + 0xd8]          ; 00473fd6
    FXCH                                ; 00473fdd
    FSTP float ptr [ESP + 0xd4]         ; 00473fdf
    FSUB float ptr [EAX + 0x8]          ; 00473fe6
    FLD float ptr [ESP + 0xdc]          ; 00473fe9
    FXCH                                ; 00473ff0
    FSTP float ptr [ESP + 0xd8]         ; 00473ff2
    FSUB float ptr [EAX + 0xc]          ; 00473ff9
    LEA EAX,[ESP + 0xd4]                ; 00473ffc
    PUSH EAX                            ; 00474003
    LEA EAX,[ESP + 0x9c]                ; 00474004
    PUSH EAX                            ; 0047400b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047400c
    ADD EAX,0x10                        ; 0047400f
    PUSH EAX                            ; 00474012
    FSTP float ptr [ESP + 0xe8]         ; 00474013
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0047401a | CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * matrix, CVector3f * output, CVector3f * input)
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 0047401f
    LEA EAX,[ESP + 0xe0]                ; 00474021
    ADD ESP,0xc                         ; 00474028
    CMP EAX,EDX                         ; 0047402b
    JZ 0x0047404c                       ; 0047402d | LAB_0047404c
        ;   XREF to: 0047404c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 0047402f
    MOV dword ptr [ESP + 0xd4],EAX      ; 00474031
    MOV EAX,dword ptr [EDX + 0x4]       ; 00474038
    MOV dword ptr [ESP + 0xd8],EAX      ; 0047403b
    MOV EAX,dword ptr [EDX + 0x8]       ; 00474042
    MOV dword ptr [ESP + 0xdc],EAX      ; 00474045
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047404c
        ;   Label: LAB_0047404c
    FLD float ptr [ESP + 0xdc]          ; 0047404f
    FCOMP float ptr [EAX + 0x140]       ; 00474056
    FNSTSW AX                           ; 0047405c
    SAHF                                ; 0047405e
    JA 0x00473fab                       ; 0047405f | LAB_00473fab
        ;   XREF to: 00473fab (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0xdc]          ; 00474065
    FMUL double ptr [0x0061f15b]        ; 0047406c | double DOUBLE_0061f15b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474072
    FDIV float ptr [EAX + 0x38]         ; 00474075
    FLD float ptr [ESP + 0xd8]          ; 00474078
    FMUL ST0                            ; 0047407f
    FLD float ptr [ESP + 0xd4]          ; 00474081
    FMUL ST0                            ; 00474088
    FXCH ST2                            ; 0047408a
    FMUL double ptr [0x0061f163]        ; 0047408c | double DOUBLE_0061f163
    FXCH                                ; 00474092
    FSTP float ptr [ESP + 0x118]        ; 00474094
    FXCH                                ; 0047409b
    FADD float ptr [ESP + 0x118]        ; 0047409d
    FXCH                                ; 004740a4
    FST float ptr [ESP + 0x124]         ; 004740a6
    FMUL float ptr [ESP + 0x124]        ; 004740ad
    FXCH                                ; 004740b4
    FST float ptr [ESP + 0x120]         ; 004740b6
    FXCH                                ; 004740bd
    FSTP float ptr [ESP + 0x11c]        ; 004740bf
    FCOMP float ptr [ESP + 0x11c]       ; 004740c6
    FNSTSW AX                           ; 004740cd
    SAHF                                ; 004740cf
    JA 0x00473fab                       ; 004740d0 | LAB_00473fab
        ;   XREF to: 00473fab (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x120]         ; 004740d6
    FDIV float ptr [ESP + 0x11c]        ; 004740dd
    LEA ESI,[ESP + 0x5c]                ; 004740e4
    MOV EBX,dword ptr [0x006703ec]      ; 004740e8 | CDemonRenderer * g_CDemonRendererPtr
    LEA EDI,[ESP + 0xa4]                ; 004740ee
    PUSH EBX                            ; 004740f5 | CDemonRenderer g_CDemonRendererInstance
    FLD1                                ; 004740f6
    FSUBRP                              ; 004740f8
    LEA EBX,[ESP + 0x54]                ; 004740fa
    FSTP float ptr [ESP + 0x4]          ; 004740fe
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760 ; 00474102 | void engine_drender.cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760(CDemonRenderer * this_ptr, CVector3i * output)
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x60]                ; 00474107
    ADD ESP,0x4                         ; 0047410b
    LEA EAX,[ESP + 0xa4]                ; 0047410e
    MOVSD ES:EDI,ESI                    ; 00474115
    MOVSD ES:EDI,ESI                    ; 00474116
    MOVSD ES:EDI,ESI                    ; 00474117
    FILD dword ptr [EAX]                ; 00474118
    FMUL float ptr [0x0065c908]         ; 0047411a | float FLOAT_0065c908
    FSTP float ptr [EBX]                ; 00474120
    FILD dword ptr [EAX + 0x4]          ; 00474122
    FMUL float ptr [0x0065c908]         ; 00474125 | float FLOAT_0065c908
    FSTP float ptr [EBX + 0x4]          ; 0047412b
    FILD dword ptr [EAX + 0x8]          ; 0047412e
    FMUL float ptr [0x0065c908]         ; 00474131 | float FLOAT_0065c908
    FSTP float ptr [EBX + 0x8]          ; 00474137
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047413a
    FLD float ptr [ESP + 0x50]          ; 0047413d
    FSUB float ptr [EBX + 0x4]          ; 00474141
    FLD float ptr [ESP + 0x54]          ; 00474144
    FXCH                                ; 00474148
    FSTP float ptr [ESP + 0xc8]         ; 0047414a
    FSUB float ptr [EBX + 0x8]          ; 00474151
    FST float ptr [ESP + 0xcc]          ; 00474154
    FMUL float ptr [ESP + 0xcc]         ; 0047415b
    FLD float ptr [ESP + 0xc8]          ; 00474162
    FMUL ST0                            ; 00474169
    FLD float ptr [ESP + 0x58]          ; 0047416b
    FSUB float ptr [EBX + 0xc]          ; 0047416f
    FXCH                                ; 00474172
    FADDP ST2,ST0                       ; 00474174
    FST float ptr [ESP + 0xd0]          ; 00474176
    FMUL float ptr [ESP + 0xd0]         ; 0047417d
    FADDP                               ; 00474184
    FSQRT                               ; 00474186
    ADD EBX,0x4                         ; 00474188
    FST float ptr [ESP + 0x8]           ; 0047418b
    FLDZ                                ; 0047418f
    FCOMPP                              ; 00474191
    FNSTSW AX                           ; 00474193
    SAHF                                ; 00474195
    JNC 0x00473fab                      ; 00474196 | LAB_00473fab
        ;   XREF to: 00473fab (CONDITIONAL_JUMP)
    FLD1                                ; 0047419c
    FLD float ptr [ESP + 0xc8]          ; 0047419e
    FXCH                                ; 004741a5
    FDIV float ptr [ESP + 0x8]          ; 004741a7
    FXCH                                ; 004741ab
    FMUL ST1                            ; 004741ad
    FLD float ptr [ESP + 0xcc]          ; 004741af
    FMUL ST2                            ; 004741b6
    FLD float ptr [ESP + 0xd0]          ; 004741b8
    FMULP ST3                           ; 004741bf
    MOV EAX,0xffff                      ; 004741c1
    MOV EDX,0x3f800000                  ; 004741c6
    MOV ESI,dword ptr [0x02d051f4]      ; 004741cb | float g_PerspectiveReciprocal
    XOR EDI,EDI                         ; 004741d1
    SUB EAX,ESI                         ; 004741d3
    MOV dword ptr [ESP + 0xbc],EDI      ; 004741d5
    MOV dword ptr [ESP + 0x134],EAX     ; 004741dc
    LEA EAX,[ESP + 0xbc]                ; 004741e3
    MOV dword ptr [ESP + 0xc0],EDI      ; 004741ea
    PUSH EAX                            ; 004741f1
    LEA EAX,[ESP + 0x84]                ; 004741f2
    MOV dword ptr [ESP + 0xc8],EDX      ; 004741f9
    PUSH EAX                            ; 00474200
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474201
    FILD dword ptr [ESP + 0x13c]        ; 00474204
    ADD EAX,0x10                        ; 0047420b
    FSTP float ptr [ESP + 0x13c]        ; 0047420e
    PUSH EAX                            ; 00474215
    FXCH                                ; 00474216
    FSTP float ptr [ESP + 0xd4]         ; 00474218
    FSTP float ptr [ESP + 0xd8]         ; 0047421f
    FSTP float ptr [ESP + 0xdc]         ; 00474226
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 0047422d | CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00474232
    FLD float ptr [ESP + 0xcc]          ; 00474235
    FMUL float ptr [EAX + 0x4]          ; 0047423c
    FLD float ptr [ESP + 0xc8]          ; 0047423f
    FMUL float ptr [EAX]                ; 00474246
    FADDP                               ; 00474248
    FLD float ptr [ESP + 0xd0]          ; 0047424a
    FMUL float ptr [EAX + 0x8]          ; 00474251
    FADDP                               ; 00474254
    FMUL float ptr [ESP + 0x134]        ; 00474256
    FMUL float ptr [0x0061f16b]         ; 0047425d | float FLOAT_0061f16b
    FLDZ                                ; 00474263
    FCOMPP                              ; 00474265
    FNSTSW AX                           ; 00474267
    SAHF                                ; 00474269
    JNC 0x00473fab                      ; 0047426a | LAB_00473fab
        ;   XREF to: 00473fab (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00474270
    PUSH 0x1                            ; 00474273
    MOV ECX,dword ptr [0x006703ec]      ; 00474275 | CDemonRenderer * g_CDemonRendererPtr
    FMUL double ptr [0x0061f173]        ; 0047427b | double DOUBLE_0061f173
    PUSH ECX                            ; 00474281 | CDemonRenderer g_CDemonRendererInstance
    CALL crt_math.c_round_FUN_005fe6b0  ; 00474282 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x134]       ; 00474287
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50 ; 0047428e | void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer * this_ptr, int blend_mode)
        ;   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00474293
    MOV dword ptr [ESP + 0x130],EDI     ; 00474296
    MOV dword ptr [ESP + 0x128],EBX     ; 0047429d
    MOV EDI,0x66ff08                    ; 004742a4 | DAT_0066ff08
    MOV EAX,dword ptr [ESP + 0x130]     ; 004742a9
        ;   Label: LAB_004742a9
    MOV dword ptr [ESP + 0x134],EAX     ; 004742b0
    FILD dword ptr [ESP + 0x134]        ; 004742b7
    FMUL float ptr [0x0061f17b]         ; 004742be | float FLOAT_0061f17b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004742c4
    FMUL float ptr [EAX + 0x140]        ; 004742c7
    FLD float ptr [EAX + 0x38]          ; 004742cd
    FXCH                                ; 004742d0
    FLD ST0                             ; 004742d2
    FMUL double ptr [0x0061f15b]        ; 004742d4 | double DOUBLE_0061f15b
    FDIVRP ST2,ST0                      ; 004742da
    FLD float ptr [EDI + 0x1c]          ; 004742dc | DAT_0066ff24
    FMUL double ptr [0x0061f183]        ; 004742df | double DOUBLE_0061f183
    MOV EAX,dword ptr [EAX + 0x18]      ; 004742e5
    FXCH                                ; 004742e8
    FMUL double ptr [0x0061f18b]        ; 004742ea | double DOUBLE_0061f18b
    MOV dword ptr [ESP + 0x38],EAX      ; 004742f0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004742f4
    FLD float ptr [ESP + 0x38]          ; 004742f7
    MOV EAX,dword ptr [EAX + 0x24]      ; 004742fb
    FXCH                                ; 004742fe
    FSTP float ptr [ESP + 0x4]          ; 00474300
    MOV dword ptr [ESP + 0x3c],EAX      ; 00474304
    FMUL float ptr [ESP + 0x4]          ; 00474308
    FLD float ptr [ESP + 0x3c]          ; 0047430c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00474310
    FMUL float ptr [ESP + 0x4]          ; 00474313
    MOV EAX,dword ptr [EAX + 0x30]      ; 00474317
    MOV dword ptr [ESP + 0x40],EAX      ; 0047431a
    FXCH ST3                            ; 0047431e
    FMUL double ptr [0x0061f163]        ; 00474320 | double DOUBLE_0061f163
    FLD float ptr [ESP + 0x40]          ; 00474326
    FMUL float ptr [ESP + 0x4]          ; 0047432a
    FXCH                                ; 0047432e
    FXCH ST3                            ; 00474330
    FMUL ST3                            ; 00474332
    FXCH ST2                            ; 00474334
    FSTP float ptr [ESP + 0x44]         ; 00474336
    FXCH ST3                            ; 0047433a
    FSTP float ptr [ESP + 0x48]         ; 0047433c
    MOV EAX,dword ptr [ESP + 0x128]     ; 00474340
    FXCH ST2                            ; 00474347
    FSTP float ptr [ESP + 0x4c]         ; 00474349
    FLD float ptr [EAX]                 ; 0047434d
    FADD float ptr [ESP + 0x44]         ; 0047434f
    LEA EDX,[ESP + 0x68]                ; 00474353
    FSTP float ptr [ESP + 0xe0]         ; 00474357
    FLD float ptr [EAX + 0x4]           ; 0047435e
    FADD float ptr [ESP + 0x48]         ; 00474361
    MOV ESI,EDI                         ; 00474365
    FSTP float ptr [ESP + 0xe4]         ; 00474367
    FLD float ptr [EAX + 0x8]           ; 0047436e
    FADD float ptr [ESP + 0x4c]         ; 00474371
    LEA EAX,[ESP + 0xe0]                ; 00474375
    FSTP float ptr [ESP + 0xe8]         ; 0047437c
    FXCH                                ; 00474383
    FSTP ST1                            ; 00474385
    FSTP float ptr [ESP + 0xc]          ; 00474387
    CMP EDX,EAX                         ; 0047438b
    JZ 0x004743b0                       ; 0047438d | LAB_004743b0
        ;   XREF to: 004743b0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0047438f
    MOV dword ptr [ESP + 0x68],EAX      ; 00474396
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0047439a
    MOV dword ptr [ESP + 0x6c],EAX      ; 004743a1
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004743a5
    MOV dword ptr [ESP + 0x70],EAX      ; 004743ac
    LEA EAX,[ESP + 0x68]                ; 004743b0
        ;   Label: LAB_004743b0
    PUSH EAX                            ; 004743b4
    MOV EAX,[0x006703ec]                ; 004743b5 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 004743ba | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 004743bb | void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004743c0
    LEA EAX,[ESP + 0x104]               ; 004743c3
    PUSH EAX                            ; 004743ca
    MOV EDX,dword ptr [0x006703ec]      ; 004743cb | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 004743d1 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800 ; 004743d2 | float * engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800(CDemonRenderer * this_ptr, float * output)
        ;   XREF to: 0048c800 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004743d7
    PUSH 0x0                            ; 004743da
    LEA EAX,[ESP + 0x108]               ; 004743dc
    PUSH EAX                            ; 004743e3
    MOV ECX,dword ptr [0x006703ec]      ; 004743e4 | CDemonRenderer * g_CDemonRendererPtr
    PUSH ECX                            ; 004743ea | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 004743eb | void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004743f0
    XOR EBX,EBX                         ; 004743f3
    MOV EAX,dword ptr [ESP + 0xc]       ; 004743f5
    MOV dword ptr [ESP + 0xb8],EBX      ; 004743f9
    LEA EBX,[ESP + 0x74]                ; 00474400
    MOV dword ptr [ESP + 0xb0],EAX      ; 00474404
    MOV dword ptr [ESP + 0xb4],EAX      ; 0047440b
    LEA EAX,[ESP + 0xb0]                ; 00474412
    MOV EDX,dword ptr [0x006703ec]      ; 00474419 | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 0047441f
    FMUL float ptr [0x0065c900]         ; 00474421 | float FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00474427
    FLD float ptr [EAX + 0x4]           ; 00474429
    FMUL float ptr [0x0065c900]         ; 0047442c | float FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00474432
    FLD float ptr [EAX + 0x8]           ; 00474435
    FMUL float ptr [0x0065c900]         ; 00474438 | float FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 0047443e
    LEA EAX,[ESP + 0x74]                ; 00474441
    PUSH EAX                            ; 00474445
    MOV EAX,dword ptr [EDX]             ; 00474446 | CDemonRenderer g_CDemonRendererInstance
    PUSH EAX                            ; 00474448
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00474449 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047444e
    MOV AH,byte ptr [ESP + 0xb3]        ; 00474451
    XOR AH,0x80                         ; 00474458
    LEA EBX,[ESP + 0xec]                ; 0047445b
    MOV byte ptr [ESP + 0xb3],AH        ; 00474462
    LEA EAX,[ESP + 0xb0]                ; 00474469
    MOV EDX,dword ptr [0x006703ec]      ; 00474470 | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 00474476
    FMUL float ptr [0x0065c900]         ; 00474478 | float FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 0047447e
    FLD float ptr [EAX + 0x4]           ; 00474480
    FMUL float ptr [0x0065c900]         ; 00474483 | float FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00474489
    FLD float ptr [EAX + 0x8]           ; 0047448c
    FMUL float ptr [0x0065c900]         ; 0047448f | float FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 00474495
    LEA EAX,[ESP + 0xec]                ; 00474498
    PUSH EAX                            ; 0047449f
    MOV EAX,dword ptr [EDX]             ; 004744a0 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x30                        ; 004744a2
    PUSH EAX                            ; 004744a5
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004744a6 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004744ab
    MOV DL,byte ptr [ESP + 0xb7]        ; 004744ae
    LEA EBX,[ESP + 0xf8]                ; 004744b5
    XOR DL,0x80                         ; 004744bc
    LEA EAX,[ESP + 0xb0]                ; 004744bf
    MOV byte ptr [ESP + 0xb7],DL        ; 004744c6
    MOV EDX,dword ptr [0x006703ec]      ; 004744cd | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 004744d3
    FMUL float ptr [0x0065c900]         ; 004744d5 | float FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 004744db
    FLD float ptr [EAX + 0x4]           ; 004744dd
    FMUL float ptr [0x0065c900]         ; 004744e0 | float FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 004744e6
    FLD float ptr [EAX + 0x8]           ; 004744e9
    FMUL float ptr [0x0065c900]         ; 004744ec | float FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 004744f2
    LEA EAX,[ESP + 0xf8]                ; 004744f5
    PUSH EAX                            ; 004744fc
    MOV EAX,dword ptr [EDX]             ; 004744fd | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x60                        ; 004744ff
    PUSH EAX                            ; 00474502
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00474503 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00474508
    MOV DH,byte ptr [ESP + 0xb3]        ; 0047450b
    LEA EBX,[ESP + 0x8c]                ; 00474512
    XOR DH,0x80                         ; 00474519
    LEA EAX,[ESP + 0xb0]                ; 0047451c
    MOV byte ptr [ESP + 0xb3],DH        ; 00474523
    MOV EDX,dword ptr [0x006703ec]      ; 0047452a | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 00474530
    FMUL float ptr [0x0065c900]         ; 00474532 | float FLOAT_0065c900
    FISTP dword ptr [EBX]               ; 00474538
    FLD float ptr [EAX + 0x4]           ; 0047453a
    FMUL float ptr [0x0065c900]         ; 0047453d | float FLOAT_0065c900
    FISTP dword ptr [EBX + 0x4]         ; 00474543
    FLD float ptr [EAX + 0x8]           ; 00474546
    FMUL float ptr [0x0065c900]         ; 00474549 | float FLOAT_0065c900
    FISTP dword ptr [EBX + 0x8]         ; 0047454f
    LEA EAX,[ESP + 0x8c]                ; 00474552
    PUSH EAX                            ; 00474559
    MOV EAX,dword ptr [EDX]             ; 0047455a | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0x90                        ; 0047455c
    PUSH EAX                            ; 00474561
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00474562 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00474567
    PUSH ESI                            ; 0047456a | DAT_0066ff08
    MOV EAX,[0x006703ec]                ; 0047456b | CDemonRenderer * g_CDemonRendererPtr
    PUSH EAX                            ; 00474570 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 ; 00474571 | void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   XREF to: 0048db80 (UNCONDITIONAL_CALL)
    MOV EDX,0x4                         ; 00474576
    ADD ESP,0x8                         ; 0047457b
    XOR ECX,ECX                         ; 0047457e
    MOV dword ptr [ESP + 0x14],EDX      ; 00474580
    MOV dword ptr [ESP + 0x24],ECX      ; 00474584
    MOV dword ptr [ESP + 0x20],ECX      ; 00474588
    MOV dword ptr [ESP + 0x1c],ECX      ; 0047458c
    MOV dword ptr [ESP + 0x18],ECX      ; 00474590
    MOV dword ptr [ESP + 0x28],ECX      ; 00474594
    MOV EDX,dword ptr [0x006703ec]      ; 00474598 | CDemonRenderer * g_CDemonRendererPtr
    MOV EBX,dword ptr [ESI + 0x20]      ; 0047459e | DAT_0066ff28
    MOV EAX,dword ptr [EDX]             ; 004745a1 | CDemonRenderer g_CDemonRendererInstance
    SHL EBX,0x10                        ; 004745a3
    MOV dword ptr [EAX + 0x18],EBX      ; 004745a6
    MOV EAX,dword ptr [ESI + 0x24]      ; 004745a9 | DAT_0066ff2c
    MOV EBX,dword ptr [EDX]             ; 004745ac | CDemonRenderer g_CDemonRendererInstance
    SHL EAX,0x10                        ; 004745ae
    MOV dword ptr [EBX + 0x1c],EAX      ; 004745b1
    MOV EBX,dword ptr [EDX]             ; 004745b4 | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004745b6
    MOV dword ptr [EBX + 0x2c],EAX      ; 004745bd
    MOV EAX,dword ptr [EDX]             ; 004745c0 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x20],0xffff   ; 004745c2
    MOV EAX,dword ptr [EDX]             ; 004745c9 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x24],0xffff   ; 004745cb
    MOV EAX,dword ptr [EDX]             ; 004745d2 | CDemonRenderer g_CDemonRendererInstance
    MOV EBX,0x1                         ; 004745d4
    MOV dword ptr [EAX + 0x28],0xffff   ; 004745d9
    MOV dword ptr [ESP + 0x2c],EBX      ; 004745e0
    MOV EBX,dword ptr [ESI + 0x28]      ; 004745e4 | DAT_0066ff30
    MOV EAX,dword ptr [EDX]             ; 004745e7 | CDemonRenderer g_CDemonRendererInstance
    SHL EBX,0x10                        ; 004745e9
    MOV dword ptr [EAX + 0x48],EBX      ; 004745ec | DAT_00f80000
    MOV EAX,dword ptr [ESI + 0x24]      ; 004745ef | DAT_0066ff2c
    MOV EBX,dword ptr [EDX]             ; 004745f2 | CDemonRenderer g_CDemonRendererInstance
    SHL EAX,0x10                        ; 004745f4
    MOV dword ptr [EBX + 0x4c],EAX      ; 004745f7
    MOV EBX,dword ptr [EDX]             ; 004745fa | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004745fc
    MOV dword ptr [EBX + 0x5c],EAX      ; 00474603
    MOV EAX,dword ptr [EDX]             ; 00474606 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x50],0xffff   ; 00474608
    MOV EAX,dword ptr [EDX]             ; 0047460f | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x54],0xffff   ; 00474611
    MOV EAX,dword ptr [EDX]             ; 00474618 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x58],0xffff   ; 0047461a
    MOV dword ptr [ESP + 0x30],0x2      ; 00474621
    MOV EAX,dword ptr [ESI + 0x28]      ; 00474629 | DAT_0066ff30
    MOV EBX,dword ptr [EDX]             ; 0047462c | CDemonRenderer g_CDemonRendererInstance
    SHL EAX,0x10                        ; 0047462e
    MOV dword ptr [EBX + 0x78],EAX      ; 00474631 | DAT_00f80000
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00474634 | DAT_0066ff34
    MOV EBX,dword ptr [EDX]             ; 00474637 | CDemonRenderer g_CDemonRendererInstance
    SHL EAX,0x10                        ; 00474639
    MOV dword ptr [EBX + 0x7c],EAX      ; 0047463c | DAT_00f80000
    MOV EBX,dword ptr [EDX]             ; 0047463f | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00474641
    MOV dword ptr [EBX + 0x8c],EAX      ; 00474648
    MOV EAX,dword ptr [EDX]             ; 0047464e | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x80],0xffff   ; 00474650
    MOV EAX,dword ptr [EDX]             ; 0047465a | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0x84],0xffff   ; 0047465c
    MOV EAX,dword ptr [EDX]             ; 00474666 | CDemonRenderer g_CDemonRendererInstance
    MOV ECX,0x3                         ; 00474668
    MOV dword ptr [EAX + 0x88],0xffff   ; 0047466d
    MOV dword ptr [ESP + 0x34],ECX      ; 00474677
    MOV EBX,dword ptr [ESI + 0x20]      ; 0047467b | DAT_0066ff28
    MOV EAX,dword ptr [EDX]             ; 0047467e | CDemonRenderer g_CDemonRendererInstance
    SHL EBX,0x10                        ; 00474680
    MOV dword ptr [EAX + 0xa8],EBX      ; 00474683
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00474689 | DAT_0066ff34
    MOV EBX,dword ptr [EDX]             ; 0047468c | CDemonRenderer g_CDemonRendererInstance
    SHL EAX,0x10                        ; 0047468e
    MOV dword ptr [EBX + 0xac],EAX      ; 00474691 | DAT_00f80000
    MOV EBX,dword ptr [EDX]             ; 00474697 | CDemonRenderer g_CDemonRendererInstance
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00474699
    MOV dword ptr [EBX + 0xbc],EAX      ; 004746a0
    MOV EAX,dword ptr [EDX]             ; 004746a6 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb0],0xffff   ; 004746a8
    MOV EAX,dword ptr [EDX]             ; 004746b2 | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb4],0xffff   ; 004746b4
    MOV EAX,dword ptr [EDX]             ; 004746be | CDemonRenderer g_CDemonRendererInstance
    MOV dword ptr [EAX + 0xb8],0xffff   ; 004746c0
    LEA EAX,[ESP + 0x10]                ; 004746ca
    PUSH EAX                            ; 004746ce
    PUSH EDX                            ; 004746cf | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10 ; 004746d0 | void engine_drender.cpp_CDemonRenderer_renderComplexMultiFeature_FUN_0048bf10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * polygon_info)
        ;   XREF to: 0048bf10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004746d5
    MOV EBX,dword ptr [0x006703ec]      ; 004746d8 | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 004746de | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004746df | void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)

