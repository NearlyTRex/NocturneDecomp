; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_FUN_00464190(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
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
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
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
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
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
;   core_dlight.cpp_FUN_00463820 at 00463dbb
;
; Referenced Globals:
;   undefined4 DAT_005d91d4
;   undefined4 DAT_005d91dc
;   undefined4 DAT_005d91e4
;   undefined4 DAT_005d91e8
;   undefined4 DAT_005d91ec
;   undefined4 DAT_005febd0
;   undefined4 DAT_005febd8
;   undefined4 DAT_006122c0
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field12_0xc
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f690
;   core_dirmat.cpp_FUN_0045f700
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_matrix.c_FUN_00483ac0
;   engine_matrix.c_FUN_00483ae0
;   engine_matrix.c_FUN_00483b70
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464190
        ;   Label: core_dlight.cpp_FUN_00464190
    PUSH ESI                            ; 00464191
    PUSH EDI                            ; 00464192
    PUSH EBP                            ; 00464193
    MOV EBP,ESP                         ; 00464194
    SUB ESP,0x188                       ; 00464196
    AND ESP,0xfffffff8                  ; 0046419c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046419f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 004641a2
    JZ 0x004641b6                       ; 004641a9
        ;   XREF to: 004641b6 (CONDITIONAL_JUMP)  ; LAB_004641b6
    MOV EAX,[0x0061d95c]                ; 004641ab | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0xc],0x2       ; 004641b0 | g_CGameInstance.field12_0xc
    JZ 0x004641bd                       ; 004641b4
        ;   XREF to: 004641bd (CONDITIONAL_JUMP)  ; LAB_004641bd
    MOV ESP,EBP                         ; 004641b6
        ;   Label: LAB_004641b6
    POP EBP                             ; 004641b8
    POP EDI                             ; 004641b9
    POP ESI                             ; 004641ba
    POP EBX                             ; 004641bb
    RET                                 ; 004641bc
    MOV EBX,dword ptr [0x00612560]      ; 004641bd | DAT_00612560
        ;   Label: LAB_004641bd
    PUSH EBX                            ; 004641c3 | DAT_01bc120c
    LEA ESI,[ESP + 0x158]               ; 004641c4
    LEA EDI,[ESP + 0xb0]                ; 004641cb
    CALL engine_matrix.c_FUN_00483ae0   ; 004641d2
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ae0()
    LEA ESI,[ESP + 0x158]               ; 004641d7
    ADD ESP,0x4                         ; 004641de
    MOVSD ES:EDI,ESI                    ; 004641e1
    MOVSD ES:EDI,ESI                    ; 004641e2
    MOVSD ES:EDI,ESI                    ; 004641e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004641e4
    FLD float ptr [ESP + 0xac]          ; 004641e7
    FSUB float ptr [EAX + 0x4]          ; 004641ee
    FLD float ptr [ESP + 0xb0]          ; 004641f1
    FXCH                                ; 004641f8
    FSTP float ptr [ESP + 0xac]         ; 004641fa
    FSUB float ptr [EAX + 0x8]          ; 00464201
    FLD float ptr [ESP + 0xb4]          ; 00464204
    FXCH                                ; 0046420b
    FSTP float ptr [ESP + 0xb0]         ; 0046420d
    FSUB float ptr [EAX + 0xc]          ; 00464214
    LEA EAX,[ESP + 0xac]                ; 00464217
    PUSH EAX                            ; 0046421e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046421f
    LEA ESI,[ESP + 0xd4]                ; 00464222
    ADD EAX,0x10                        ; 00464229
    LEA EDI,[ESP + 0x68]                ; 0046422c
    PUSH EAX                            ; 00464230
    FSTP float ptr [ESP + 0xbc]         ; 00464231
    CALL core_dirmat.cpp_FUN_0045f700   ; 00464238
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f700()
    LEA ESI,[ESP + 0xd8]                ; 0046423d
    LEA EAX,[ESP + 0x6c]                ; 00464244
    ADD ESP,0x8                         ; 00464248
    LEA EDX,[ESP + 0xac]                ; 0046424b
    MOVSD ES:EDI,ESI                    ; 00464252
    MOVSD ES:EDI,ESI                    ; 00464253
    MOVSD ES:EDI,ESI                    ; 00464254
    CMP EDX,EAX                         ; 00464255
    JZ 0x0046427a                       ; 00464257
        ;   XREF to: 0046427a (CONDITIONAL_JUMP)  ; LAB_0046427a
    MOV EAX,dword ptr [ESP + 0x64]      ; 00464259
    MOV dword ptr [ESP + 0xac],EAX      ; 0046425d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00464264
    MOV dword ptr [ESP + 0xb0],EAX      ; 00464268
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046426f
    MOV dword ptr [ESP + 0xb4],EAX      ; 00464273
    FLD float ptr [ESP + 0xb4]          ; 0046427a
        ;   Label: LAB_0046427a
    FMUL double ptr [0x005d91d4]        ; 00464281 | DAT_005d91d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464287
    FDIV float ptr [EAX + 0x38]         ; 0046428a
    FLD float ptr [ESP + 0xb0]          ; 0046428d
    FMUL ST0                            ; 00464294
    FLD float ptr [ESP + 0xac]          ; 00464296
    FMUL ST0                            ; 0046429d
    FXCH ST2                            ; 0046429f
    FMUL double ptr [0x005d91dc]        ; 004642a1 | DAT_005d91dc
    FXCH                                ; 004642a7
    FSTP float ptr [ESP + 0x168]        ; 004642a9
    FXCH                                ; 004642b0
    FADD float ptr [ESP + 0x168]        ; 004642b2
    FXCH                                ; 004642b9
    FST float ptr [ESP + 0x170]         ; 004642bb
    FMUL float ptr [ESP + 0x170]        ; 004642c2
    FXCH                                ; 004642c9
    FST float ptr [ESP + 0x174]         ; 004642cb
    FXCH                                ; 004642d2
    FSTP float ptr [ESP + 0x16c]        ; 004642d4
    FCOMP float ptr [ESP + 0x16c]       ; 004642db
    FNSTSW AX                           ; 004642e2
    SAHF                                ; 004642e4
    JA 0x004641b6                       ; 004642e5
        ;   XREF to: 004641b6 (CONDITIONAL_JUMP)  ; LAB_004641b6
    FLD float ptr [ESP + 0x174]         ; 004642eb
    FDIV float ptr [ESP + 0x16c]        ; 004642f2
    LEA EDI,[ESP + 0x88]                ; 004642f9
    MOV ESI,dword ptr [0x00612560]      ; 00464300 | DAT_00612560
    LEA EBX,[ESP + 0x100]               ; 00464306
    PUSH ESI                            ; 0046430d | DAT_01bc120c
    FLD1                                ; 0046430e
    FSUBRP                              ; 00464310
    LEA ESI,[ESP + 0x134]               ; 00464312
    FSTP float ptr [ESP + 0x8]          ; 00464319
    CALL engine_matrix.c_FUN_00483ac0   ; 0046431d
        ;   XREF to: 00483ac0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ac0()
    LEA ESI,[ESP + 0x134]               ; 00464322
    ADD ESP,0x4                         ; 00464329
    LEA EAX,[ESP + 0x88]                ; 0046432c
    MOVSD ES:EDI,ESI                    ; 00464333
    MOVSD ES:EDI,ESI                    ; 00464334
    MOVSD ES:EDI,ESI                    ; 00464335
    FILD dword ptr [EAX]                ; 00464336
    FMUL float ptr [0x005febd8]         ; 00464338 | DAT_005febd8
    FSTP float ptr [EBX]                ; 0046433e
    FILD dword ptr [EAX + 0x4]          ; 00464340
    FMUL float ptr [0x005febd8]         ; 00464343 | DAT_005febd8
    FSTP float ptr [EBX + 0x4]          ; 00464349
    FILD dword ptr [EAX + 0x8]          ; 0046434c
    FMUL float ptr [0x005febd8]         ; 0046434f | DAT_005febd8
    FSTP float ptr [EBX + 0x8]          ; 00464355
    FLD float ptr [ESP + 0x100]         ; 00464358
    FLD float ptr [ESP + 0x104]         ; 0046435f
    FLD float ptr [ESP + 0x108]         ; 00464366
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046436d
    LEA EDI,[ESP + 0xa0]                ; 00464370
    LEA ESI,[ESP + 0xdc]                ; 00464377
    FXCH ST2                            ; 0046437e
    FSUB float ptr [EBX + 0x4]          ; 00464380
    FXCH                                ; 00464383
    FSUB float ptr [EBX + 0x8]          ; 00464385
    FXCH ST2                            ; 00464388
    FSUB float ptr [EBX + 0xc]          ; 0046438a
    FXCH                                ; 0046438d
    FSTP float ptr [ESP + 0xdc]         ; 0046438f
    FXCH                                ; 00464396
    FSTP float ptr [ESP + 0xe0]         ; 00464398
    FSTP float ptr [ESP + 0xe4]         ; 0046439f
    MOVSD ES:EDI,ESI                    ; 004643a6
    MOVSD ES:EDI,ESI                    ; 004643a7
    MOVSD ES:EDI,ESI                    ; 004643a8
    FLD float ptr [ESP + 0xa4]          ; 004643a9
    FMUL ST0                            ; 004643b0
    FLD float ptr [ESP + 0xa0]          ; 004643b2
    FMUL ST0                            ; 004643b9
    FADDP                               ; 004643bb
    FLD float ptr [ESP + 0xa8]          ; 004643bd
    FMUL ST0                            ; 004643c4
    FADDP                               ; 004643c6
    FSQRT                               ; 004643c8
    ADD EBX,0x4                         ; 004643ca
    FST float ptr [ESP]                 ; 004643cd
    FLDZ                                ; 004643d0
    FCOMPP                              ; 004643d2
    FNSTSW AX                           ; 004643d4
    SAHF                                ; 004643d6
    JNC 0x004641b6                      ; 004643d7
        ;   XREF to: 004641b6 (CONDITIONAL_JUMP)  ; LAB_004641b6
    FLD1                                ; 004643dd
    FLD float ptr [ESP + 0xa0]          ; 004643df
    FXCH                                ; 004643e6
    FDIV float ptr [ESP]                ; 004643e8
    FXCH                                ; 004643eb
    FMUL ST1                            ; 004643ed
    FLD float ptr [ESP + 0xa4]          ; 004643ef
    FMUL ST2                            ; 004643f6
    FLD float ptr [ESP + 0xa8]          ; 004643f8
    FMULP ST3                           ; 004643ff
    MOV EAX,0xffff                      ; 00464401
    MOV EDI,dword ptr [0x01c51cac]      ; 00464406 | DAT_01c51cac
    MOV ECX,0x3f800000                  ; 0046440c
    SUB EAX,EDI                         ; 00464411
    LEA ESI,[ESP + 0x118]               ; 00464413
    MOV dword ptr [ESP + 0x184],EAX     ; 0046441a
    XOR EAX,EAX                         ; 00464421
    MOV dword ptr [ESP + 0x12c],ECX     ; 00464423
    MOV dword ptr [ESP + 0x124],EAX     ; 0046442a
    MOV dword ptr [ESP + 0x128],EAX     ; 00464431
    LEA EAX,[ESP + 0x124]               ; 00464438
    LEA EDI,[ESP + 0x148]               ; 0046443f
    PUSH EAX                            ; 00464446
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464447
    FILD dword ptr [ESP + 0x188]        ; 0046444a
    ADD EAX,0x10                        ; 00464451
    FSTP float ptr [ESP + 0x188]        ; 00464454
    PUSH EAX                            ; 0046445b
    FXCH                                ; 0046445c
    FSTP float ptr [ESP + 0xa8]         ; 0046445e
    FSTP float ptr [ESP + 0xac]         ; 00464465
    FSTP float ptr [ESP + 0xb0]         ; 0046446c
    CALL core_dirmat.cpp_FUN_0045f690   ; 00464473
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x120]               ; 00464478
    ADD ESP,0x8                         ; 0046447f
    MOVSD ES:EDI,ESI                    ; 00464482
    MOVSD ES:EDI,ESI                    ; 00464483
    MOVSD ES:EDI,ESI                    ; 00464484
    FLD float ptr [ESP + 0xa4]          ; 00464485
    FMUL float ptr [ESP + 0x14c]        ; 0046448c
    FLD float ptr [ESP + 0xa0]          ; 00464493
    FMUL float ptr [ESP + 0x148]        ; 0046449a
    FADDP                               ; 004644a1
    FLD float ptr [ESP + 0xa8]          ; 004644a3
    FMUL float ptr [ESP + 0x150]        ; 004644aa
    FADDP                               ; 004644b1
    FMUL float ptr [ESP + 0x184]        ; 004644b3
    FMUL float ptr [0x005d91e4]         ; 004644ba | DAT_005d91e4
    FLDZ                                ; 004644c0
    FCOMPP                              ; 004644c2
    FNSTSW AX                           ; 004644c4
    SAHF                                ; 004644c6
    JNC 0x004641b6                      ; 004644c7
        ;   XREF to: 004641b6 (CONDITIONAL_JUMP)  ; LAB_004641b6
    PUSH 0x1                            ; 004644cd
    MOV ESI,dword ptr [0x00612560]      ; 004644cf | DAT_00612560
    PUSH ESI                            ; 004644d5 | DAT_01bc120c
    XOR EDI,EDI                         ; 004644d6
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004644d8
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004644dd
    MOV dword ptr [ESP + 0x180],EDI     ; 004644e0
    MOV dword ptr [ESP + 0x17c],EBX     ; 004644e7
    MOV EAX,dword ptr [ESP + 0x180]     ; 004644ee
        ;   Label: LAB_004644ee
    MOV dword ptr [ESP + 0x184],EAX     ; 004644f5
    FILD dword ptr [ESP + 0x184]        ; 004644fc
    FMUL float ptr [0x005d91e8]         ; 00464503 | DAT_005d91e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464509
    FMUL float ptr [EAX + 0x140]        ; 0046450c
    FLD float ptr [EAX + 0x38]          ; 00464512
    FXCH                                ; 00464515
    FSTP float ptr [ESP + 0x8]          ; 00464517
    MOV EAX,dword ptr [EAX + 0x18]      ; 0046451b
    FLD float ptr [ESP + 0x8]           ; 0046451e
    MOV dword ptr [ESP + 0x7c],EAX      ; 00464522
    FMUL double ptr [0x005d91d4]        ; 00464526 | DAT_005d91d4
    FLD float ptr [ESP + 0x7c]          ; 0046452c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00464530
    FMUL float ptr [ESP + 0x8]          ; 00464533
    FXCH                                ; 00464537
    FDIVRP ST2,ST0                      ; 00464539
    MOV EAX,dword ptr [EAX + 0x24]      ; 0046453b
    MOV dword ptr [ESP + 0x80],EAX      ; 0046453e
    FLD float ptr [ESP + 0x80]          ; 00464545
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046454c
    FMUL float ptr [ESP + 0x8]          ; 0046454f
    MOV EAX,dword ptr [EAX + 0x30]      ; 00464553
    MOV dword ptr [ESP + 0x84],EAX      ; 00464556
    FLD float ptr [ESP + 0x84]          ; 0046455d
    FMUL float ptr [ESP + 0x8]          ; 00464564
    LEA EDI,[ESP + 0x34]                ; 00464568
    LEA ESI,[ESP + 0x58]                ; 0046456c
    FXCH ST2                            ; 00464570
    FSTP float ptr [ESP + 0x58]         ; 00464572
    FSTP float ptr [ESP + 0x5c]         ; 00464576
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0046457a
    FSTP float ptr [ESP + 0x60]         ; 00464581
    MOVSD ES:EDI,ESI                    ; 00464585
    MOVSD ES:EDI,ESI                    ; 00464586
    MOVSD ES:EDI,ESI                    ; 00464587
    LEA EDX,[ESP + 0x94]                ; 00464588
    FLD float ptr [EAX + 0x4]           ; 0046458f
    FLD float ptr [EAX + 0x8]           ; 00464592
    FLD float ptr [EAX]                 ; 00464595
    LEA EDI,[ESP + 0x94]                ; 00464597
    LEA ESI,[ESP + 0x70]                ; 0046459e
    LEA EAX,[ESP + 0x40]                ; 004645a2
    FADD float ptr [ESP + 0x34]         ; 004645a6
    FXCH ST2                            ; 004645aa
    FADD float ptr [ESP + 0x38]         ; 004645ac
    FXCH                                ; 004645b0
    FADD float ptr [ESP + 0x3c]         ; 004645b2
    FXCH ST2                            ; 004645b6
    FSTP float ptr [ESP + 0x70]         ; 004645b8
    FSTP float ptr [ESP + 0x74]         ; 004645bc
    FSTP float ptr [ESP + 0x78]         ; 004645c0
    MOVSD ES:EDI,ESI                    ; 004645c4
    MOVSD ES:EDI,ESI                    ; 004645c5
    MOVSD ES:EDI,ESI                    ; 004645c6
    FSTP float ptr [ESP + 0x178]        ; 004645c7
    CMP EAX,EDX                         ; 004645ce
    JZ 0x004645f3                       ; 004645d0
        ;   XREF to: 004645f3 (CONDITIONAL_JUMP)  ; LAB_004645f3
    MOV EAX,dword ptr [ESP + 0x94]      ; 004645d2
    MOV dword ptr [ESP + 0x40],EAX      ; 004645d9
    MOV EAX,dword ptr [ESP + 0x98]      ; 004645dd
    MOV dword ptr [ESP + 0x44],EAX      ; 004645e4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004645e8
    MOV dword ptr [ESP + 0x48],EAX      ; 004645ef
    LEA EAX,[ESP + 0x40]                ; 004645f3
        ;   Label: LAB_004645f3
    PUSH EAX                            ; 004645f7
    MOV EAX,[0x00612560]                ; 004645f8 | DAT_00612560
    PUSH EAX                            ; 004645fd | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004645fe
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00464603
    MOV EDX,dword ptr [0x00612560]      ; 00464606 | DAT_00612560
    PUSH EDX                            ; 0046460c | DAT_01bc120c
    LEA ESI,[ESP + 0xf8]                ; 0046460d
    CALL engine_matrix.c_FUN_00483b70   ; 00464614
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b70()
    ADD ESP,0x4                         ; 00464619
    PUSH 0x0                            ; 0046461c
    LEA EAX,[ESP + 0x50]                ; 0046461e
    LEA EDI,[ESP + 0x50]                ; 00464622
    PUSH EAX                            ; 00464626
    MOV ECX,dword ptr [0x00612560]      ; 00464627 | DAT_00612560
    LEA ESI,[ESP + 0xfc]                ; 0046462d
    PUSH ECX                            ; 00464634 | DAT_01bc120c
    MOVSD ES:EDI,ESI                    ; 00464635
    MOVSD ES:EDI,ESI                    ; 00464636
    MOVSD ES:EDI,ESI                    ; 00464637
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00464638
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0046463d
    XOR EBX,EBX                         ; 00464640
    MOV EAX,dword ptr [ESP + 0x178]     ; 00464642
    MOV dword ptr [ESP + 0x114],EBX     ; 00464649
    LEA EBX,[ESP + 0xb8]                ; 00464650
    MOV dword ptr [ESP + 0x10c],EAX     ; 00464657
    MOV dword ptr [ESP + 0x110],EAX     ; 0046465e
    LEA EAX,[ESP + 0x10c]               ; 00464665
    MOV EDX,dword ptr [0x00612560]      ; 0046466c | DAT_00612560
    FLD float ptr [EAX]                 ; 00464672
    FMUL float ptr [0x005febd0]         ; 00464674 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 0046467a
    FLD float ptr [EAX + 0x4]           ; 0046467c
    FMUL float ptr [0x005febd0]         ; 0046467f | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00464685
    FLD float ptr [EAX + 0x8]           ; 00464688
    FMUL float ptr [0x005febd0]         ; 0046468b | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00464691
    LEA EAX,[ESP + 0xb8]                ; 00464694
    PUSH EAX                            ; 0046469b
    MOV EAX,dword ptr [EDX]             ; 0046469c | DAT_01bc120c
    PUSH EAX                            ; 0046469e
    CALL engine_special.cpp_FUN_00580173 ; 0046469f
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004646a4
    MOV AH,byte ptr [ESP + 0x10f]       ; 004646a7
    XOR AH,0x80                         ; 004646ae
    LEA EBX,[ESP + 0xc4]                ; 004646b1
    MOV byte ptr [ESP + 0x10f],AH       ; 004646b8
    LEA EAX,[ESP + 0x10c]               ; 004646bf
    MOV EDX,dword ptr [0x00612560]      ; 004646c6 | DAT_00612560
    FLD float ptr [EAX]                 ; 004646cc
    FMUL float ptr [0x005febd0]         ; 004646ce | DAT_005febd0
    FISTP dword ptr [EBX]               ; 004646d4
    FLD float ptr [EAX + 0x4]           ; 004646d6
    FMUL float ptr [0x005febd0]         ; 004646d9 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 004646df
    FLD float ptr [EAX + 0x8]           ; 004646e2
    FMUL float ptr [0x005febd0]         ; 004646e5 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 004646eb
    LEA EAX,[ESP + 0xc4]                ; 004646ee
    PUSH EAX                            ; 004646f5
    MOV EAX,dword ptr [EDX]             ; 004646f6 | DAT_01bc120c
    ADD EAX,0x30                        ; 004646f8
    PUSH EAX                            ; 004646fb
    CALL engine_special.cpp_FUN_00580173 ; 004646fc
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00464701
    MOV DL,byte ptr [ESP + 0x113]       ; 00464704
    LEA EBX,[ESP + 0xe8]                ; 0046470b
    XOR DL,0x80                         ; 00464712
    LEA EAX,[ESP + 0x10c]               ; 00464715
    MOV byte ptr [ESP + 0x113],DL       ; 0046471c
    MOV EDX,dword ptr [0x00612560]      ; 00464723 | DAT_00612560
    FLD float ptr [EAX]                 ; 00464729
    FMUL float ptr [0x005febd0]         ; 0046472b | DAT_005febd0
    FISTP dword ptr [EBX]               ; 00464731
    FLD float ptr [EAX + 0x4]           ; 00464733
    FMUL float ptr [0x005febd0]         ; 00464736 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 0046473c
    FLD float ptr [EAX + 0x8]           ; 0046473f
    FMUL float ptr [0x005febd0]         ; 00464742 | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 00464748
    LEA EAX,[ESP + 0xe8]                ; 0046474b
    PUSH EAX                            ; 00464752
    MOV EAX,dword ptr [EDX]             ; 00464753 | DAT_01bc120c
    ADD EAX,0x60                        ; 00464755
    PUSH EAX                            ; 00464758
    CALL engine_special.cpp_FUN_00580173 ; 00464759
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0046475e
    MOV DH,byte ptr [ESP + 0x10f]       ; 00464761
    LEA EBX,[ESP + 0x13c]               ; 00464768
    XOR DH,0x80                         ; 0046476f
    LEA EAX,[ESP + 0x10c]               ; 00464772
    MOV byte ptr [ESP + 0x10f],DH       ; 00464779
    MOV EDX,dword ptr [0x00612560]      ; 00464780 | DAT_00612560
    FLD float ptr [EAX]                 ; 00464786
    FMUL float ptr [0x005febd0]         ; 00464788 | DAT_005febd0
    FISTP dword ptr [EBX]               ; 0046478e
    FLD float ptr [EAX + 0x4]           ; 00464790
    FMUL float ptr [0x005febd0]         ; 00464793 | DAT_005febd0
    FISTP dword ptr [EBX + 0x4]         ; 00464799
    FLD float ptr [EAX + 0x8]           ; 0046479c
    FMUL float ptr [0x005febd0]         ; 0046479f | DAT_005febd0
    FISTP dword ptr [EBX + 0x8]         ; 004647a5
    LEA EAX,[ESP + 0x13c]               ; 004647a8
    PUSH EAX                            ; 004647af
    MOV EAX,dword ptr [EDX]             ; 004647b0 | DAT_01bc120c
    ADD EAX,0x90                        ; 004647b2
    PUSH EAX                            ; 004647b7
    CALL engine_special.cpp_FUN_00580173 ; 004647b8
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004647bd
    PUSH 0x6122c0                       ; 004647c0 | DAT_006122c0
    MOV ESI,dword ptr [0x00612560]      ; 004647c5 | DAT_00612560
    PUSH ESI                            ; 004647cb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004647cc
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004647d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004647d4
    FLD float ptr [EAX + 0x140]         ; 004647d7
    FSUB float ptr [ESP + 0x8]          ; 004647dd
    FMUL double ptr [0x005d91ec]        ; 004647e1 | DAT_005d91ec
    FDIV float ptr [EAX + 0x140]        ; 004647e7
    MOV EDI,0x4                         ; 004647ed
    MOV EDX,dword ptr [0x00612560]      ; 004647f2 | DAT_00612560
    XOR EAX,EAX                         ; 004647f8
    MOV dword ptr [ESP + 0x10],EDI      ; 004647fa
    MOV dword ptr [ESP + 0x20],EAX      ; 004647fe
    MOV dword ptr [ESP + 0x1c],EAX      ; 00464802
    MOV dword ptr [ESP + 0x18],EAX      ; 00464806
    MOV dword ptr [ESP + 0x14],EAX      ; 0046480a
    MOV dword ptr [ESP + 0x24],EAX      ; 0046480e
    FMUL float ptr [ESP + 0x4]          ; 00464812
    MOV EBX,dword ptr [EDX]             ; 00464816 | DAT_01bc120c
    CALL crt_math.c_round_FUN_005c03a0  ; 00464818
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x160]       ; 0046481d
    MOV EAX,dword ptr [ESP + 0x160]     ; 00464824
    MOV dword ptr [EBX + 0x2c],EAX      ; 0046482b
    MOV EAX,dword ptr [EDX]             ; 0046482e
    MOV dword ptr [EAX + 0x20],0xffff   ; 00464830
    MOV EAX,dword ptr [EDX]             ; 00464837
    MOV dword ptr [EAX + 0x24],0xffff   ; 00464839
    MOV EAX,dword ptr [EDX]             ; 00464840
    MOV EDI,0x1                         ; 00464842
    MOV dword ptr [EAX + 0x28],0xffff   ; 00464847
    MOV dword ptr [ESP + 0x28],EDI      ; 0046484e
    MOV EBX,dword ptr [EDX]             ; 00464852
    MOV EAX,dword ptr [ESP + 0x160]     ; 00464854
    MOV dword ptr [EBX + 0x5c],EAX      ; 0046485b
    MOV EAX,dword ptr [EDX]             ; 0046485e
    MOV dword ptr [EAX + 0x50],0xffff   ; 00464860
    MOV EAX,dword ptr [EDX]             ; 00464867
    MOV dword ptr [EAX + 0x54],0xffff   ; 00464869
    MOV EAX,dword ptr [EDX]             ; 00464870
    MOV dword ptr [EAX + 0x58],0xffff   ; 00464872
    MOV dword ptr [ESP + 0x2c],0x2      ; 00464879
    MOV EBX,dword ptr [EDX]             ; 00464881
    MOV EAX,dword ptr [ESP + 0x160]     ; 00464883
    MOV dword ptr [EBX + 0x8c],EAX      ; 0046488a
    MOV EAX,dword ptr [EDX]             ; 00464890
    MOV dword ptr [EAX + 0x80],0xffff   ; 00464892
    MOV EAX,dword ptr [EDX]             ; 0046489c
    MOV dword ptr [EAX + 0x84],0xffff   ; 0046489e
    MOV EAX,dword ptr [EDX]             ; 004648a8
    MOV ECX,0x3                         ; 004648aa
    MOV dword ptr [EAX + 0x88],0xffff   ; 004648af
    MOV dword ptr [ESP + 0x30],ECX      ; 004648b9
    MOV EBX,dword ptr [EDX]             ; 004648bd
    MOV EAX,dword ptr [ESP + 0x160]     ; 004648bf
    MOV dword ptr [EBX + 0xbc],EAX      ; 004648c6
    MOV EAX,dword ptr [EDX]             ; 004648cc
    MOV dword ptr [EAX + 0xb0],0xffff   ; 004648ce
    MOV EAX,dword ptr [EDX]             ; 004648d8
    MOV dword ptr [EAX + 0xb4],0xffff   ; 004648da
    MOV EAX,dword ptr [EDX]             ; 004648e4
    MOV dword ptr [EAX + 0xb8],0xffff   ; 004648e6
    MOV EAX,dword ptr [EDX]             ; 004648f0
    MOV dword ptr [EAX + 0x18],0xf80000 ; 004648f2
    MOV EAX,dword ptr [EDX]             ; 004648f9
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 004648fb
    MOV EAX,dword ptr [EDX]             ; 00464902
    MOV dword ptr [EAX + 0x48],0x80000  ; 00464904
    MOV EAX,dword ptr [EDX]             ; 0046490b
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0046490d
    MOV EAX,dword ptr [EDX]             ; 00464914
    MOV dword ptr [EAX + 0x78],0x80000  ; 00464916
    MOV EAX,dword ptr [EDX]             ; 0046491d
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0046491f
    MOV EAX,dword ptr [EDX]             ; 00464926
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 00464928
    MOV EAX,dword ptr [EDX]             ; 00464932
    MOV dword ptr [EAX + 0xac],0x80000  ; 00464934
    LEA EAX,[ESP + 0xc]                 ; 0046493e
    PUSH EAX                            ; 00464942
    PUSH EDX                            ; 00464943
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 00464944
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00464949
    MOV EBX,dword ptr [0x00612560]      ; 0046494c | DAT_00612560
    PUSH EBX                            ; 00464952 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 00464953
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00464958
    MOV ESI,dword ptr [ESP + 0x180]     ; 0046495b
    ADD ESI,EDI                         ; 00464962
    MOV dword ptr [ESP + 0x180],ESI     ; 00464964
    CMP ESI,0x19                        ; 0046496b
    JL 0x004644ee                       ; 0046496e
        ;   XREF to: 004644ee (CONDITIONAL_JUMP)  ; LAB_004644ee
    PUSH 0x0                            ; 00464974
    MOV EAX,[0x00612560]                ; 00464976 | DAT_00612560
    PUSH EAX                            ; 0046497b | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 0046497c
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00464981
    MOV ESP,EBP                         ; 00464984
    POP EBP                             ; 00464986
    POP EDI                             ; 00464987
    POP ESI                             ; 00464988
    POP EBX                             ; 00464989
    RET                                 ; 0046498a

