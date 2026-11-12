; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x18c]:1  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined        Stack[-0x158]:1  local_158
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
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
; undefined        Stack[-0x104]:1  local_104
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x78]:4  local_78
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
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460 at 004637d8
;
; Referenced Globals:
;   undefined4 DAT_005d922c
;   undefined4 DAT_005d9234
;   undefined4 DAT_005d923c
;   undefined4 DAT_005d9244
;   undefined4 DAT_005d924c
;   undefined4 DAT_005d9254
;   undefined4 DAT_005d9258
;   undefined4 DAT_005d925c
;   undefined4 DAT_005d9264
;   undefined4 DAT_005d926c
;   undefined4 DAT_005febd0
;   undefined4 DAT_005febd8
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   ... and 4 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f690
;   core_dirmat.cpp_FUN_0045f700
;   core_dirmat.cpp_FUN_0045f840
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
;   engine_drender.cpp_FUN_00483ac0
;   engine_drender.cpp_FUN_00483ae0
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465060
        ;   Label: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060
    PUSH ESI                            ; 00465061
    PUSH EDI                            ; 00465062
    PUSH EBP                            ; 00465063
    MOV EBP,ESP                         ; 00465064
    SUB ESP,0x17c                       ; 00465066
    SUB EBP,0x7e                        ; 0046506c
    MOV EAX,dword ptr [EBP + 0x92]      ; 0046506f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 00465075
    JZ 0x0046509f                       ; 0046507c
        ;   XREF to: 0046509f (CONDITIONAL_JUMP)  ; LAB_0046509f
    MOV EAX,[0x00622c18]                ; 0046507e | g_CDemonSetPtr
    FLD float ptr [EAX + 0x15ac80]      ; 00465083 | g_CDemonSetInstance.active_fog.density_multiplier
    FCOMP double ptr [0x005d922c]       ; 00465089 | DAT_005d922c
    FNSTSW AX                           ; 0046508f
    SAHF                                ; 00465091
    JC 0x0046509f                       ; 00465092
        ;   XREF to: 0046509f (CONDITIONAL_JUMP)  ; LAB_0046509f
    MOV EAX,[0x0061d95c]                ; 00465094 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0xc],0x0       ; 00465099 | g_CGameInstance.halo_mode
    JNZ 0x004650a7                      ; 0046509d
        ;   XREF to: 004650a7 (CONDITIONAL_JUMP)  ; LAB_004650a7
    LEA ESP,[EBP + 0x7e]                ; 0046509f
        ;   Label: LAB_0046509f
    POP EBP                             ; 004650a2
    POP EDI                             ; 004650a3
    POP ESI                             ; 004650a4
    POP EBX                             ; 004650a5
    RET                                 ; 004650a6
    MOV EBX,dword ptr [0x00612560]      ; 004650a7 | DAT_00612560
        ;   Label: LAB_004650a7
    PUSH EBX                            ; 004650ad | DAT_01bc120c
    LEA ESI,[EBP + -0x2e]               ; 004650ae
    LEA EDI,[EBP + -0x16]               ; 004650b1
    CALL engine_drender.cpp_FUN_00483ac0 ; 004650b4
        ;   XREF to: 00483ac0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00483ac0()
    LEA ESI,[EBP + -0x2e]               ; 004650b9
    LEA EAX,[EBP + -0x16]               ; 004650bc
    LEA EBX,[EBP + 0xffffff42]          ; 004650bf
    ADD ESP,0x4                         ; 004650c5
    MOVSD ES:EDI,ESI                    ; 004650c8
    MOVSD ES:EDI,ESI                    ; 004650c9
    MOVSD ES:EDI,ESI                    ; 004650ca
    FILD dword ptr [EAX]                ; 004650cb
    FMUL float ptr [0x005febd8]         ; 004650cd | DAT_005febd8
    FSTP float ptr [EBX]                ; 004650d3
    FILD dword ptr [EAX + 0x4]          ; 004650d5
    FMUL float ptr [0x005febd8]         ; 004650d8 | DAT_005febd8
    FSTP float ptr [EBX + 0x4]          ; 004650de
    FILD dword ptr [EAX + 0x8]          ; 004650e1
    FMUL float ptr [0x005febd8]         ; 004650e4 | DAT_005febd8
    FSTP float ptr [EBX + 0x8]          ; 004650ea
    FLD float ptr [EBP + 0xffffff42]    ; 004650ed
    FLD float ptr [EBP + 0xffffff46]    ; 004650f3
    FLD float ptr [EBP + 0xffffff4a]    ; 004650f9
    MOV EBX,dword ptr [EBP + 0x92]      ; 004650ff
    LEA EDI,[EBP + -0x3a]               ; 00465105
    LEA ESI,[EBP + -0x22]               ; 00465108
    FXCH ST2                            ; 0046510b
    FSUB float ptr [EBX + 0x4]          ; 0046510d
    FXCH                                ; 00465110
    FSUB float ptr [EBX + 0x8]          ; 00465112
    FXCH ST2                            ; 00465115
    FSUB float ptr [EBX + 0xc]          ; 00465117
    FXCH                                ; 0046511a
    FSTP float ptr [EBP + -0x22]        ; 0046511c
    FXCH                                ; 0046511f
    FSTP float ptr [EBP + -0x1e]        ; 00465121
    FSTP float ptr [EBP + -0x1a]        ; 00465124
    MOVSD ES:EDI,ESI                    ; 00465127
    MOVSD ES:EDI,ESI                    ; 00465128
    MOVSD ES:EDI,ESI                    ; 00465129
    FLD float ptr [EBP + -0x36]         ; 0046512a
    FMUL ST0                            ; 0046512d
    FLD float ptr [EBP + -0x3a]         ; 0046512f
    FMUL ST0                            ; 00465132
    FADDP                               ; 00465134
    FLD float ptr [EBP + -0x32]         ; 00465136
    FMUL ST0                            ; 00465139
    FADDP                               ; 0046513b
    FSQRT                               ; 0046513d
    ADD EBX,0x4                         ; 0046513f
    FLDZ                                ; 00465142
    FCOMPP                              ; 00465144
    FNSTSW AX                           ; 00465146
    SAHF                                ; 00465148
    JNC 0x0046509f                      ; 00465149
        ;   XREF to: 0046509f (CONDITIONAL_JUMP)  ; LAB_0046509f
    MOV dword ptr [EBP + -0x62],0x3f800000 ; 0046514f
    LEA EAX,[EBP + -0x6a]               ; 00465156
    XOR ESI,ESI                         ; 00465159
    PUSH EAX                            ; 0046515b
    MOV EAX,dword ptr [EBP + 0x92]      ; 0046515c
    MOV dword ptr [EBP + -0x6a],ESI     ; 00465162
    ADD EAX,0x10                        ; 00465165
    MOV dword ptr [EBP + -0x66],ESI     ; 00465168
    PUSH EAX                            ; 0046516b
    LEA ESI,[EBP + -0x5e]               ; 0046516c
    MOV dword ptr [EBP + 0x76],EAX      ; 0046516f
    CALL core_dirmat.cpp_FUN_0045f690   ; 00465172
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 00465177
    MOV ECX,dword ptr [0x00612560]      ; 0046517a | DAT_00612560
    PUSH ECX                            ; 00465180 | DAT_01bc120c
    LEA ESI,[EBP + 0xffffff4e]          ; 00465181
    LEA EDI,[EBP + 0xffffff72]          ; 00465187
    CALL engine_drender.cpp_FUN_00483ae0 ; 0046518d
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00483ae0()
    LEA ESI,[EBP + 0xffffff4e]          ; 00465192
    LEA EAX,[EBP + 0xffffff72]          ; 00465198
    ADD ESP,0x4                         ; 0046519e
    MOVSD ES:EDI,ESI                    ; 004651a1
    MOVSD ES:EDI,ESI                    ; 004651a2
    MOVSD ES:EDI,ESI                    ; 004651a3
    PUSH EAX                            ; 004651a4
    FLD float ptr [EBP + 0xffffff76]    ; 004651a5
    FLD float ptr [EBP + 0xffffff72]    ; 004651ab
    FSUB float ptr [EBX]                ; 004651b1
    FLD float ptr [EBP + 0xffffff7a]    ; 004651b3
    FXCH                                ; 004651b9
    FSTP float ptr [EBP + 0xffffff72]   ; 004651bb
    FXCH                                ; 004651c1
    FSUB float ptr [EBX + 0x4]          ; 004651c3
    LEA ESI,[EBP + -0xa]                ; 004651c6
    FSTP float ptr [EBP + 0xffffff76]   ; 004651c9
    FSUB float ptr [EBX + 0x8]          ; 004651cf
    MOV EBX,dword ptr [EBP + 0x76]      ; 004651d2
    LEA EDI,[EBP + 0xffffff66]          ; 004651d5
    PUSH EBX                            ; 004651db
    FSTP float ptr [EBP + 0xffffff7a]   ; 004651dc
    CALL core_dirmat.cpp_FUN_0045f700   ; 004651e2
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[EBP + -0xa]                ; 004651e7
    LEA EDX,[EBP + 0xffffff66]          ; 004651ea
    LEA EAX,[EBP + 0xffffff72]          ; 004651f0
    ADD ESP,0x8                         ; 004651f6
    MOVSD ES:EDI,ESI                    ; 004651f9
    MOVSD ES:EDI,ESI                    ; 004651fa
    MOVSD ES:EDI,ESI                    ; 004651fb
    CMP EAX,EDX                         ; 004651fc
    JZ 0x00465224                       ; 004651fe
        ;   XREF to: 00465224 (CONDITIONAL_JUMP)  ; LAB_00465224
    MOV EAX,dword ptr [EBP + 0xffffff66] ; 00465200
    MOV dword ptr [EBP + 0xffffff72],EAX ; 00465206
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 0046520c
    MOV dword ptr [EBP + 0xffffff76],EAX ; 00465212
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 00465218
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 0046521e
    FLD float ptr [EBP + 0xffffff7a]    ; 00465224
        ;   Label: LAB_00465224
    FMUL double ptr [0x005d9234]        ; 0046522a | DAT_005d9234
    MOV EAX,dword ptr [EBP + 0x92]      ; 00465230
    FDIV float ptr [EAX + 0x38]         ; 00465236
    FLD float ptr [EBP + 0xffffff76]    ; 00465239
    FMUL ST0                            ; 0046523f
    FLD float ptr [EBP + 0xffffff72]    ; 00465241
    FMUL ST0                            ; 00465247
    FXCH ST2                            ; 00465249
    FMUL double ptr [0x005d923c]        ; 0046524b | DAT_005d923c
    FXCH ST2                            ; 00465251
    FADDP                               ; 00465253
    FLD ST0                             ; 00465255
    FLD ST2                             ; 00465257
    FMULP ST3                           ; 00465259
    FDIV ST0,ST2                        ; 0046525b
    FLD1                                ; 0046525d
    FSUBRP                              ; 0046525f
    FSTP float ptr [EBP + 0x32]         ; 00465261
    FCOMPP                              ; 00465264
    FNSTSW AX                           ; 00465266
    SAHF                                ; 00465268
    JNC 0x0046527d                      ; 00465269
        ;   XREF to: 0046527d (CONDITIONAL_JUMP)  ; LAB_0046527d
    FLD float ptr [EBP + 0x32]          ; 0046526b
    FCOMP double ptr [0x005d9244]       ; 0046526e | DAT_005d9244
    FNSTSW AX                           ; 00465274
    SAHF                                ; 00465276
    JA 0x0046509f                       ; 00465277
        ;   XREF to: 0046509f (CONDITIONAL_JUMP)  ; LAB_0046509f
    MOV EAX,dword ptr [EBP + 0x92]      ; 0046527d
        ;   Label: LAB_0046527d
    ADD EAX,0x4                         ; 00465283
    PUSH EAX                            ; 00465286
    MOV ESI,dword ptr [0x00612560]      ; 00465287 | DAT_00612560
    PUSH ESI                            ; 0046528d | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0046528e
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,dword ptr [EBP + 0x92]      ; 00465293
    ADD ESP,0x8                         ; 00465299
    ADD EAX,0x10                        ; 0046529c
    PUSH EAX                            ; 0046529f
    LEA ESI,[EBP + 0xffffff36]          ; 004652a0
    LEA EDI,[EBP + -0x76]               ; 004652a6
    CALL core_dirmat.cpp_FUN_0045f840   ; 004652a9
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f840()
    ADD ESP,0x4                         ; 004652ae
    LEA ESI,[EBP + 0xffffff36]          ; 004652b1
    LEA EAX,[EBP + -0x76]               ; 004652b7
    PUSH 0x0                            ; 004652ba
    MOVSD ES:EDI,ESI                    ; 004652bc
    MOVSD ES:EDI,ESI                    ; 004652bd
    MOVSD ES:EDI,ESI                    ; 004652be
    PUSH EAX                            ; 004652bf
    MOV EDI,dword ptr [0x00612560]      ; 004652c0 | DAT_00612560
    PUSH EDI                            ; 004652c6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004652c7
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EAX,0x1                         ; 004652cc
    ADD ESP,0xc                         ; 004652d1
    MOV dword ptr [EBP + 0x36],EAX      ; 004652d4
    MOV EAX,dword ptr [EBP + 0x92]      ; 004652d7
        ;   Label: LAB_004652d7
    FLD float ptr [EAX + 0x38]          ; 004652dd
    FDIVR double ptr [0x005d9234]       ; 004652e0 | DAT_005d9234
    MOV EAX,dword ptr [EBP + 0x36]      ; 004652e6
    MOV dword ptr [EBP + 0x76],EAX      ; 004652e9
    FILD dword ptr [EBP + 0x76]         ; 004652ec
    FMULP                               ; 004652ef
    FMUL double ptr [0x005d924c]        ; 004652f1 | DAT_005d924c
    FST float ptr [EBP + 0x3a]          ; 004652f7
    FLD ST0                             ; 004652fa
    FLD1                                ; 004652fc
    FPATAN                              ; 004652fe
    FCOS                                ; 00465300
    FLD1                                ; 00465302
    XOR EDX,EDX                         ; 00465304
    FSUBRP ST2,ST0                      ; 00465306
    MOV dword ptr [EBP + 0x3e],EDX      ; 00465308
    FXCH                                ; 0046530b
    FSTP float ptr [EBP + 0x46]         ; 0046530d
    FSTP float ptr [EBP + 0x42]         ; 00465310
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00465313
        ;   Label: LAB_00465313
    MOV dword ptr [EBP + 0x76],EAX      ; 00465316
    FLD float ptr [0x005d9254]          ; 00465319 | DAT_005d9254
    FILD dword ptr [EBP + 0x76]         ; 0046531f
    FMUL ST1                            ; 00465322
    FLD float ptr [0x005d9258]          ; 00465324 | DAT_005d9258
    FXCH                                ; 0046532a
    FMUL ST1                            ; 0046532c
    INC EAX                             ; 0046532e
    FLD double ptr [0x005d923c]         ; 0046532f | DAT_005d923c
    FXCH                                ; 00465335
    FMUL ST1                            ; 00465337
    MOV dword ptr [EBP + 0x76],EAX      ; 00465339
    FLD ST0                             ; 0046533c
    FSIN                                ; 0046533e
    FILD dword ptr [EBP + 0x76]         ; 00465340
    FMULP ST5                           ; 00465343
    FXCH ST4                            ; 00465345
    FMULP ST3                           ; 00465347
    FXCH ST2                            ; 00465349
    FMULP                               ; 0046534b
    FLD ST0                             ; 0046534d
    FSIN                                ; 0046534f
    FXCH ST2                            ; 00465351
    FCOS                                ; 00465353
    FXCH                                ; 00465355
    FCOS                                ; 00465357
    MOV EDX,dword ptr [EBP + 0x92]      ; 00465359
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 0046535f
    MOV EAX,dword ptr [EBP + 0x92]      ; 00465365
    SAR EDX,0x1f                        ; 0046536b
    MOV EAX,dword ptr [EAX + 0x1cc0]    ; 0046536e
    SUB EAX,EDX                         ; 00465374
    SAR EAX,0x1                         ; 00465376
    MOV EDX,dword ptr [EBP + 0x92]      ; 00465378
    MOV dword ptr [EBP + 0x76],EAX      ; 0046537e
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 00465381
    MOV EAX,dword ptr [EBP + 0x92]      ; 00465387
    SAR EDX,0x1f                        ; 0046538d
    MOV EAX,dword ptr [EAX + 0x1cc4]    ; 00465390
    SUB EAX,EDX                         ; 00465396
    SAR EAX,0x1                         ; 00465398
    FLD float ptr [EBP + 0x3a]          ; 0046539a
    FXCH ST2                            ; 0046539d
    FMUL ST2                            ; 0046539f
    MOV dword ptr [EBP + 0x7a],EAX      ; 004653a1
    FSTP float ptr [EBP + 0x52]         ; 004653a4
    FILD dword ptr [EBP + 0x7a]         ; 004653a7
    FLD ST0                             ; 004653aa
    FMUL float ptr [EBP + 0x52]         ; 004653ac
    MOV EDX,dword ptr [EBP + 0x92]      ; 004653af
    FSUBP                               ; 004653b5
    MOV ECX,dword ptr [EDX + 0x1cc0]    ; 004653b7
    CALL crt_math.c_round_FUN_005c03a0  ; 004653bd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x16]        ; 004653c2
    MOV EAX,dword ptr [EBP + 0x16]      ; 004653c5
    IMUL EAX,ECX                        ; 004653c8
    FXCH ST3                            ; 004653cb
    FMUL ST1                            ; 004653cd
    FSTP float ptr [EBP + 0x56]         ; 004653cf
    FILD dword ptr [EBP + 0x76]         ; 004653d2
    FLD ST0                             ; 004653d5
    FMUL float ptr [EBP + 0x56]         ; 004653d7
    FADDP                               ; 004653da
    FXCH ST2                            ; 004653dc
    FMUL ST1                            ; 004653de
    FXCH ST2                            ; 004653e0
    CALL crt_math.c_round_FUN_005c03a0  ; 004653e2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x72]        ; 004653e7
    ADD EAX,dword ptr [EBP + 0x72]      ; 004653ea
    LEA EDX,[EAX + EAX*0x1]             ; 004653ed
    MOV EAX,dword ptr [EBP + 0x92]      ; 004653f0
    FMULP ST2                           ; 004653f6
    MOV EAX,dword ptr [EAX + 0x2f94]    ; 004653f8
    ADD EDX,EAX                         ; 004653fe
    XOR EAX,EAX                         ; 00465400
    MOV AX,word ptr [EDX]               ; 00465402
    MOV dword ptr [EBP + 0x7a],EAX      ; 00465405
    XOR ESI,ESI                         ; 00465408
    FILD dword ptr [EBP + 0x7a]         ; 0046540a
    FMUL double ptr [0x005d925c]        ; 0046540d | DAT_005d925c
    MOV dword ptr [EBP + 0x62],ESI      ; 00465413
    FXCH                                ; 00465416
    FSTP float ptr [EBP + 0x4e]         ; 00465418
    FSTP float ptr [EBP + 0x5e]         ; 0046541b
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0046541e
    FSTP float ptr [EBP + 0x4a]         ; 00465421
    MOV dword ptr [EBP + 0x5a],EAX      ; 00465424
    MOV EAX,dword ptr [EBP + 0x92]      ; 00465427
        ;   Label: LAB_00465427
    MOV EAX,dword ptr [EAX + 0x140]     ; 0046542d
    FLD float ptr [EBP + 0x42]          ; 00465433
    MOV dword ptr [EBP + 0x1e],EAX      ; 00465436
    MOV EAX,dword ptr [EBP + 0x62]      ; 00465439
    FMUL float ptr [EBP + 0x1e]         ; 0046543c
    MOV dword ptr [EBP + 0x7a],EAX      ; 0046543f
    FILD dword ptr [EBP + 0x7a]         ; 00465442
    FMUL ST1                            ; 00465445
    FLD float ptr [0x005d9264]          ; 00465447 | DAT_005d9264
    FXCH                                ; 0046544d
    FMUL ST1                            ; 0046544f
    FLD float ptr [EBP + 0x1e]          ; 00465451
    FXCH                                ; 00465454
    FSTP float ptr [EBP + 0x6a]         ; 00465456
    FSUB float ptr [EBP + 0x6a]         ; 00465459
    FLD1                                ; 0046545c
    FDIV float ptr [EBP + 0x1e]         ; 0046545e
    INC EAX                             ; 00465461
    FXCH                                ; 00465462
    FMUL ST1                            ; 00465464
    MOV dword ptr [EBP + 0x7a],EAX      ; 00465466
    FLD double ptr [0x005d926c]         ; 00465469 | DAT_005d926c
    FXCH                                ; 0046546f
    FMUL ST1                            ; 00465471
    FILD dword ptr [EBP + 0x7a]         ; 00465473
    FMULP ST5                           ; 00465476
    FLD float ptr [EBP + 0x46]          ; 00465478
    FXCH                                ; 0046547b
    FMUL ST1                            ; 0046547d
    MOV EAX,dword ptr [EBP + 0x92]      ; 0046547f
    FXCH ST5                            ; 00465485
    FMULP ST4                           ; 00465487
    FLD float ptr [EAX + 0x2fa8]        ; 00465489
    FMULP ST5                           ; 0046548f
    FXCH ST3                            ; 00465491
    FSTP float ptr [EBP + 0x66]         ; 00465493
    FXCH ST3                            ; 00465496
    FSTP float ptr [EBP + 0x2a]         ; 00465498
    FLD float ptr [EBP + 0x1e]          ; 0046549b
    FSUB float ptr [EBP + 0x66]         ; 0046549e
    FMULP                               ; 004654a1
    FMULP ST2                           ; 004654a3
    FMULP                               ; 004654a5
    FMUL float ptr [EAX + 0x2fa8]       ; 004654a7
    FSTP float ptr [EBP + 0x2e]         ; 004654ad
    FLD float ptr [EBP + 0x2a]          ; 004654b0
    FISTP dword ptr [EBP + 0x22]        ; 004654b6
    FLD float ptr [EBP + 0x2e]          ; 004654bc
    FISTP dword ptr [EBP + 0x26]        ; 004654c2
    FLD float ptr [EBP + 0x6a]          ; 004654c8
    FCOMP float ptr [EBP + 0x5e]        ; 004654cb
    FNSTSW AX                           ; 004654ce
    SAHF                                ; 004654d0
    JNC 0x00465753                      ; 004654d1
        ;   XREF to: 00465753 (CONDITIONAL_JUMP)  ; LAB_00465753
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004654d7
    MOV dword ptr [EBP + -0x3e],EAX     ; 004654da
        ;   Label: LAB_004654da
    FLD float ptr [EBP + -0x3e]         ; 004654dd
    FMUL float ptr [EBP + 0x56]         ; 004654e0
    FLD float ptr [EBP + -0x3e]         ; 004654e3
    FMUL float ptr [EBP + 0x52]         ; 004654e6
    LEA EBX,[EBP + -0x52]               ; 004654e9
    LEA EAX,[EBP + -0x46]               ; 004654ec
    MOV EDX,dword ptr [0x00612560]      ; 004654ef | DAT_00612560
    FXCH                                ; 004654f5
    FSTP float ptr [EBP + -0x46]        ; 004654f7
    FSTP float ptr [EBP + -0x42]        ; 004654fa
    FLD float ptr [EAX]                 ; 004654fd
    FMUL float ptr [0x005febd0]         ; 004654ff | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00465505
    FLD float ptr [EAX + 0x4]           ; 00465507
    FMUL float ptr [0x005febd0]         ; 0046550a | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00465510
    FLD float ptr [EAX + 0x8]           ; 00465513
    FMUL float ptr [0x005febd0]         ; 00465516 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 0046551c
    LEA EAX,[EBP + -0x52]               ; 0046551f
    PUSH EAX                            ; 00465522
    MOV EAX,dword ptr [EDX]             ; 00465523 | DAT_01bc120c
    PUSH EAX                            ; 00465525
    CALL engine_special.cpp_FUN_00580173 ; 00465526
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x6a]          ; 0046552b
    ADD ESP,0x8                         ; 0046552e
    FCOMP float ptr [EBP + 0x5a]        ; 00465531
    FNSTSW AX                           ; 00465534
    SAHF                                ; 00465536
    JNC 0x0046575b                      ; 00465537
        ;   XREF to: 0046575b (CONDITIONAL_JUMP)  ; LAB_0046575b
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0046553d
    MOV dword ptr [EBP + -0x3e],EAX     ; 00465540
        ;   Label: LAB_00465540
    FLD float ptr [EBP + -0x3e]         ; 00465543
    FMUL float ptr [EBP + 0x4e]         ; 00465546
    FLD float ptr [EBP + -0x3e]         ; 00465549
    FMUL float ptr [EBP + 0x4a]         ; 0046554c
    LEA EBX,[EBP + 0xffffff2a]          ; 0046554f
    LEA EAX,[EBP + -0x46]               ; 00465555
    MOV EDX,dword ptr [0x00612560]      ; 00465558 | DAT_00612560
    FXCH                                ; 0046555e
    FSTP float ptr [EBP + -0x46]        ; 00465560
    FSTP float ptr [EBP + -0x42]        ; 00465563
    FLD float ptr [EAX]                 ; 00465566
    FMUL float ptr [0x005febd0]         ; 00465568 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 0046556e
    FLD float ptr [EAX + 0x4]           ; 00465570
    FMUL float ptr [0x005febd0]         ; 00465573 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00465579
    FLD float ptr [EAX + 0x8]           ; 0046557c
    FMUL float ptr [0x005febd0]         ; 0046557f | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00465585
    LEA EAX,[EBP + 0xffffff2a]          ; 00465588
    PUSH EAX                            ; 0046558e
    MOV EAX,dword ptr [EDX]             ; 0046558f | DAT_01bc120c
    ADD EAX,0x30                        ; 00465591
    PUSH EAX                            ; 00465594
    CALL engine_special.cpp_FUN_00580173 ; 00465595
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x66]          ; 0046559a
    ADD ESP,0x8                         ; 0046559d
    FCOMP float ptr [EBP + 0x5a]        ; 004655a0
    FNSTSW AX                           ; 004655a3
    SAHF                                ; 004655a5
    JNC 0x00465763                      ; 004655a6
        ;   XREF to: 00465763 (CONDITIONAL_JUMP)  ; LAB_00465763
    MOV EAX,dword ptr [EBP + 0x66]      ; 004655ac
    MOV dword ptr [EBP + -0x3e],EAX     ; 004655af
        ;   Label: LAB_004655af
    FLD float ptr [EBP + -0x3e]         ; 004655b2
    FMUL float ptr [EBP + 0x4e]         ; 004655b5
    FLD float ptr [EBP + -0x3e]         ; 004655b8
    FMUL float ptr [EBP + 0x4a]         ; 004655bb
    LEA EBX,[EBP + 0xffffff5a]          ; 004655be
    LEA EAX,[EBP + -0x46]               ; 004655c4
    MOV EDX,dword ptr [0x00612560]      ; 004655c7 | DAT_00612560
    FXCH                                ; 004655cd
    FSTP float ptr [EBP + -0x46]        ; 004655cf
    FSTP float ptr [EBP + -0x42]        ; 004655d2
    FLD float ptr [EAX]                 ; 004655d5
    FMUL float ptr [0x005febd0]         ; 004655d7 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 004655dd
    FLD float ptr [EAX + 0x4]           ; 004655df
    FMUL float ptr [0x005febd0]         ; 004655e2 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 004655e8
    FLD float ptr [EAX + 0x8]           ; 004655eb
    FMUL float ptr [0x005febd0]         ; 004655ee | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 004655f4
    LEA EAX,[EBP + 0xffffff5a]          ; 004655f7
    PUSH EAX                            ; 004655fd
    MOV EAX,dword ptr [EDX]             ; 004655fe | DAT_01bc120c
    ADD EAX,0x60                        ; 00465600
    PUSH EAX                            ; 00465603
    CALL engine_special.cpp_FUN_00580173 ; 00465604
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x66]          ; 00465609
    ADD ESP,0x8                         ; 0046560c
    FCOMP float ptr [EBP + 0x5e]        ; 0046560f
    FNSTSW AX                           ; 00465612
    SAHF                                ; 00465614
    JNC 0x0046576b                      ; 00465615
        ;   XREF to: 0046576b (CONDITIONAL_JUMP)  ; LAB_0046576b
    MOV EAX,dword ptr [EBP + 0x66]      ; 0046561b
    MOV dword ptr [EBP + -0x3e],EAX     ; 0046561e
        ;   Label: LAB_0046561e
    FLD float ptr [EBP + -0x3e]         ; 00465621
    FMUL float ptr [EBP + 0x56]         ; 00465624
    FLD float ptr [EBP + -0x3e]         ; 00465627
    FMUL float ptr [EBP + 0x52]         ; 0046562a
    LEA EBX,[EBP + 0xffffff7e]          ; 0046562d
    LEA EAX,[EBP + -0x46]               ; 00465633
    MOV EDX,dword ptr [0x00612560]      ; 00465636 | DAT_00612560
    FXCH                                ; 0046563c
    FSTP float ptr [EBP + -0x46]        ; 0046563e
    FSTP float ptr [EBP + -0x42]        ; 00465641
    FLD float ptr [EAX]                 ; 00465644
    FMUL float ptr [0x005febd0]         ; 00465646 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 0046564c
    FLD float ptr [EAX + 0x4]           ; 0046564e
    FMUL float ptr [0x005febd0]         ; 00465651 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00465657
    FLD float ptr [EAX + 0x8]           ; 0046565a
    FMUL float ptr [0x005febd0]         ; 0046565d | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00465663
    LEA EAX,[EBP + 0xffffff7e]          ; 00465666
    PUSH EAX                            ; 0046566c
    MOV EAX,dword ptr [EDX]             ; 0046566d | DAT_01bc120c
    ADD EAX,0x90                        ; 0046566f
    PUSH EAX                            ; 00465674
    CALL engine_special.cpp_FUN_00580173 ; 00465675
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x00612560]      ; 0046567a | DAT_00612560
    ADD ESP,0x8                         ; 00465680
    MOV EBX,dword ptr [EDX]             ; 00465683 | DAT_01bc120c
    MOV EAX,dword ptr [EBP + 0x22]      ; 00465685
    MOV dword ptr [EBX + 0x20],EAX      ; 00465688
    MOV EBX,dword ptr [EDX]             ; 0046568b | DAT_01bc120c
    MOV EAX,dword ptr [EBP + 0x22]      ; 0046568d
    MOV dword ptr [EBX + 0x50],EAX      ; 00465690
    MOV EBX,dword ptr [EDX]             ; 00465693 | DAT_01bc120c
    MOV EAX,dword ptr [EBP + 0x26]      ; 00465695
    MOV dword ptr [EBX + 0x80],EAX      ; 00465698
    MOV EBX,dword ptr [EDX]             ; 0046569e | DAT_01bc120c
    PUSH 0x451040                       ; 004656a0 | LAB_00451040
    MOV EAX,dword ptr [EBP + 0x26]      ; 004656a5
    MOV EDI,0x4                         ; 004656a8
    MOV ECX,0x1                         ; 004656ad
    MOV dword ptr [EBX + 0xb0],EAX      ; 004656b2
    MOV ESI,dword ptr [EBP + 0x62]      ; 004656b8
    MOV dword ptr [EBP + 0xffffff06],EDI ; 004656bb
    XOR EAX,EAX                         ; 004656c1
    MOV dword ptr [EBP + 0xffffff22],ECX ; 004656c3
    MOV dword ptr [EBP + 0xffffff16],EAX ; 004656c9
    MOV dword ptr [EBP + 0xffffff12],EAX ; 004656cf
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 004656d5
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 004656db
    MOV EAX,0x2                         ; 004656e1
    INC ESI                             ; 004656e6
    MOV dword ptr [EBP + 0xffffff1e],EAX ; 004656e7
    LEA EAX,[EBP + 0xffffff02]          ; 004656ed
    XOR EBX,EBX                         ; 004656f3
    PUSH EAX                            ; 004656f5
    MOV EDI,0x3                         ; 004656f6
    MOV dword ptr [EBP + 0xffffff26],EBX ; 004656fb
    PUSH EDX                            ; 00465701 | DAT_01bc120c
    MOV dword ptr [EBP + 0x62],ESI      ; 00465702
    MOV dword ptr [EBP + 0xffffff1a],EDI ; 00465705
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50 ; 0046570b
        ;   XREF to: 00483c50 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 00465710
    CMP ESI,0x4                         ; 00465713
    JL 0x00465427                       ; 00465716
        ;   XREF to: 00465427 (CONDITIONAL_JUMP)  ; LAB_00465427
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0046571c
    INC EAX                             ; 0046571f
    MOV dword ptr [EBP + 0x3e],EAX      ; 00465720
    CMP EAX,0x10                        ; 00465723
    JL 0x00465313                       ; 00465726
        ;   XREF to: 00465313 (CONDITIONAL_JUMP)  ; LAB_00465313
    MOV ECX,dword ptr [EBP + 0x36]      ; 0046572c
    INC ECX                             ; 0046572f
    MOV dword ptr [EBP + 0x36],ECX      ; 00465730
    CMP ECX,0x10                        ; 00465733
    JL 0x004652d7                       ; 00465736
        ;   XREF to: 004652d7 (CONDITIONAL_JUMP)  ; LAB_004652d7
    MOV ESI,dword ptr [0x00612560]      ; 0046573c | DAT_00612560
    PUSH ESI                            ; 00465742 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 00465743
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00465748
    LEA ESP,[EBP + 0x7e]                ; 0046574b
    POP EBP                             ; 0046574e
    POP EDI                             ; 0046574f
    POP ESI                             ; 00465750
    POP EBX                             ; 00465751
    RET                                 ; 00465752
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00465753
        ;   Label: LAB_00465753
    JMP 0x004654da                      ; 00465756
        ;   XREF to: 004654da (UNCONDITIONAL_JUMP)  ; LAB_004654da
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0046575b
        ;   Label: LAB_0046575b
    JMP 0x00465540                      ; 0046575e
        ;   XREF to: 00465540 (UNCONDITIONAL_JUMP)  ; LAB_00465540
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00465763
        ;   Label: LAB_00465763
    JMP 0x004655af                      ; 00465766
        ;   XREF to: 004655af (UNCONDITIONAL_JUMP)  ; LAB_004655af
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0046576b
        ;   Label: LAB_0046576b
    JMP 0x0046561e                      ; 0046576e
        ;   XREF to: 0046561e (UNCONDITIONAL_JUMP)  ; LAB_0046561e

