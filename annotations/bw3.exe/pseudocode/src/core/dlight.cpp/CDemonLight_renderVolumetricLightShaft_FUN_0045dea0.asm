; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0(CDemonLight *this_ptr)
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
;   core_dlight.cpp_FUN_0045d530 at 0045dacb
;
; Referenced Globals:
;   undefined4 DAT_005bb4ec
;   undefined4 DAT_005bb4f4
;   undefined4 DAT_005bb4fc
;   undefined4 DAT_005bb500
;   undefined4 DAT_005bb504
;   undefined4 DAT_005de4f0
;   undefined4 DAT_005de4f8
;   undefined4 DAT_005f2840
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;   undefined4 g_CGameInstance.field3_0xc
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b800
;   core_dirmat.cpp_FUN_0045b870
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
;   engine_matrix.c_FUN_0046d1a0
;   engine_matrix.c_FUN_0046d1c0
;   engine_matrix.c_FUN_0046d250
;   engine_matrix.c_pop_FUN_0046d080
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dea0
        ;   Label: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0045dea0
    PUSH ESI                            ; 0045dea1
    PUSH EDI                            ; 0045dea2
    PUSH EBP                            ; 0045dea3
    MOV EBP,ESP                         ; 0045dea4
    SUB ESP,0x188                       ; 0045dea6
    AND ESP,0xfffffff8                  ; 0045deac
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045deaf
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0045deb2
    JZ 0x0045dec6                       ; 0045deb9
        ;   XREF to: 0045dec6 (CONDITIONAL_JUMP)  ; LAB_0045dec6
    MOV EAX,[0x005fe9dc]                ; 0045debb | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x2       ; 0045dec0 | g_CGameInstance.field3_0xc
    JZ 0x0045decd                       ; 0045dec4
        ;   XREF to: 0045decd (CONDITIONAL_JUMP)  ; LAB_0045decd
    MOV ESP,EBP                         ; 0045dec6
        ;   Label: LAB_0045dec6
    POP EBP                             ; 0045dec8
    POP EDI                             ; 0045dec9
    POP ESI                             ; 0045deca
    POP EBX                             ; 0045decb
    RET                                 ; 0045decc
    MOV EBX,dword ptr [0x005f2afc]      ; 0045decd | DAT_005f2afc
        ;   Label: LAB_0045decd
    PUSH EBX                            ; 0045ded3 | DAT_01bdd7e4
    LEA ESI,[ESP + 0x158]               ; 0045ded4
    LEA EDI,[ESP + 0xb0]                ; 0045dedb
    CALL engine_matrix.c_FUN_0046d1c0   ; 0045dee2
        ;   XREF to: 0046d1c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d1c0()
    LEA ESI,[ESP + 0x158]               ; 0045dee7
    ADD ESP,0x4                         ; 0045deee
    MOVSD ES:EDI,ESI                    ; 0045def1
    MOVSD ES:EDI,ESI                    ; 0045def2
    MOVSD ES:EDI,ESI                    ; 0045def3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045def4
    FLD float ptr [ESP + 0xac]          ; 0045def7
    FSUB float ptr [EAX + 0x4]          ; 0045defe
    FLD float ptr [ESP + 0xb0]          ; 0045df01
    FXCH                                ; 0045df08
    FSTP float ptr [ESP + 0xac]         ; 0045df0a
    FSUB float ptr [EAX + 0x8]          ; 0045df11
    FLD float ptr [ESP + 0xb4]          ; 0045df14
    FXCH                                ; 0045df1b
    FSTP float ptr [ESP + 0xb0]         ; 0045df1d
    FSUB float ptr [EAX + 0xc]          ; 0045df24
    LEA EAX,[ESP + 0xac]                ; 0045df27
    PUSH EAX                            ; 0045df2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045df2f
    LEA ESI,[ESP + 0xd4]                ; 0045df32
    ADD EAX,0x10                        ; 0045df39
    LEA EDI,[ESP + 0x68]                ; 0045df3c
    PUSH EAX                            ; 0045df40
    FSTP float ptr [ESP + 0xbc]         ; 0045df41
    CALL core_dirmat.cpp_FUN_0045b870   ; 0045df48
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0xd8]                ; 0045df4d
    LEA EAX,[ESP + 0x6c]                ; 0045df54
    ADD ESP,0x8                         ; 0045df58
    LEA EDX,[ESP + 0xac]                ; 0045df5b
    MOVSD ES:EDI,ESI                    ; 0045df62
    MOVSD ES:EDI,ESI                    ; 0045df63
    MOVSD ES:EDI,ESI                    ; 0045df64
    CMP EDX,EAX                         ; 0045df65
    JZ 0x0045df8a                       ; 0045df67
        ;   XREF to: 0045df8a (CONDITIONAL_JUMP)  ; LAB_0045df8a
    MOV EAX,dword ptr [ESP + 0x64]      ; 0045df69
    MOV dword ptr [ESP + 0xac],EAX      ; 0045df6d
    MOV EAX,dword ptr [ESP + 0x68]      ; 0045df74
    MOV dword ptr [ESP + 0xb0],EAX      ; 0045df78
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0045df7f
    MOV dword ptr [ESP + 0xb4],EAX      ; 0045df83
    FLD float ptr [ESP + 0xb4]          ; 0045df8a
        ;   Label: LAB_0045df8a
    FMUL double ptr [0x005bb4ec]        ; 0045df91 | DAT_005bb4ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045df97
    FDIV float ptr [EAX + 0x38]         ; 0045df9a
    FLD float ptr [ESP + 0xb0]          ; 0045df9d
    FMUL ST0                            ; 0045dfa4
    FLD float ptr [ESP + 0xac]          ; 0045dfa6
    FMUL ST0                            ; 0045dfad
    FXCH ST2                            ; 0045dfaf
    FMUL double ptr [0x005bb4f4]        ; 0045dfb1 | DAT_005bb4f4
    FXCH                                ; 0045dfb7
    FSTP float ptr [ESP + 0x168]        ; 0045dfb9
    FXCH                                ; 0045dfc0
    FADD float ptr [ESP + 0x168]        ; 0045dfc2
    FXCH                                ; 0045dfc9
    FST float ptr [ESP + 0x170]         ; 0045dfcb
    FMUL float ptr [ESP + 0x170]        ; 0045dfd2
    FXCH                                ; 0045dfd9
    FST float ptr [ESP + 0x174]         ; 0045dfdb
    FXCH                                ; 0045dfe2
    FSTP float ptr [ESP + 0x16c]        ; 0045dfe4
    FCOMP float ptr [ESP + 0x16c]       ; 0045dfeb
    FNSTSW AX                           ; 0045dff2
    SAHF                                ; 0045dff4
    JA 0x0045dec6                       ; 0045dff5
        ;   XREF to: 0045dec6 (CONDITIONAL_JUMP)  ; LAB_0045dec6
    FLD float ptr [ESP + 0x174]         ; 0045dffb
    FDIV float ptr [ESP + 0x16c]        ; 0045e002
    LEA EDI,[ESP + 0x88]                ; 0045e009
    MOV ESI,dword ptr [0x005f2afc]      ; 0045e010 | DAT_005f2afc
    LEA EBX,[ESP + 0x100]               ; 0045e016
    PUSH ESI                            ; 0045e01d | DAT_01bdd7e4
    FLD1                                ; 0045e01e
    FSUBRP                              ; 0045e020
    LEA ESI,[ESP + 0x134]               ; 0045e022
    FSTP float ptr [ESP + 0x8]          ; 0045e029
    CALL engine_matrix.c_FUN_0046d1a0   ; 0045e02d
        ;   XREF to: 0046d1a0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d1a0()
    LEA ESI,[ESP + 0x134]               ; 0045e032
    ADD ESP,0x4                         ; 0045e039
    LEA EAX,[ESP + 0x88]                ; 0045e03c
    MOVSD ES:EDI,ESI                    ; 0045e043
    MOVSD ES:EDI,ESI                    ; 0045e044
    MOVSD ES:EDI,ESI                    ; 0045e045
    FILD dword ptr [EAX]                ; 0045e046
    FMUL float ptr [0x005de4f8]         ; 0045e048 | DAT_005de4f8
    FSTP float ptr [EBX]                ; 0045e04e
    FILD dword ptr [EAX + 0x4]          ; 0045e050
    FMUL float ptr [0x005de4f8]         ; 0045e053 | DAT_005de4f8
    FSTP float ptr [EBX + 0x4]          ; 0045e059
    FILD dword ptr [EAX + 0x8]          ; 0045e05c
    FMUL float ptr [0x005de4f8]         ; 0045e05f | DAT_005de4f8
    FSTP float ptr [EBX + 0x8]          ; 0045e065
    FLD float ptr [ESP + 0x100]         ; 0045e068
    FLD float ptr [ESP + 0x104]         ; 0045e06f
    FLD float ptr [ESP + 0x108]         ; 0045e076
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045e07d
    LEA EDI,[ESP + 0xa0]                ; 0045e080
    LEA ESI,[ESP + 0xdc]                ; 0045e087
    FXCH ST2                            ; 0045e08e
    FSUB float ptr [EBX + 0x4]          ; 0045e090
    FXCH                                ; 0045e093
    FSUB float ptr [EBX + 0x8]          ; 0045e095
    FXCH ST2                            ; 0045e098
    FSUB float ptr [EBX + 0xc]          ; 0045e09a
    FXCH                                ; 0045e09d
    FSTP float ptr [ESP + 0xdc]         ; 0045e09f
    FXCH                                ; 0045e0a6
    FSTP float ptr [ESP + 0xe0]         ; 0045e0a8
    FSTP float ptr [ESP + 0xe4]         ; 0045e0af
    MOVSD ES:EDI,ESI                    ; 0045e0b6
    MOVSD ES:EDI,ESI                    ; 0045e0b7
    MOVSD ES:EDI,ESI                    ; 0045e0b8
    FLD float ptr [ESP + 0xa4]          ; 0045e0b9
    FMUL ST0                            ; 0045e0c0
    FLD float ptr [ESP + 0xa0]          ; 0045e0c2
    FMUL ST0                            ; 0045e0c9
    FADDP                               ; 0045e0cb
    FLD float ptr [ESP + 0xa8]          ; 0045e0cd
    FMUL ST0                            ; 0045e0d4
    FADDP                               ; 0045e0d6
    FSQRT                               ; 0045e0d8
    ADD EBX,0x4                         ; 0045e0da
    FST float ptr [ESP]                 ; 0045e0dd
    FLDZ                                ; 0045e0e0
    FCOMPP                              ; 0045e0e2
    FNSTSW AX                           ; 0045e0e4
    SAHF                                ; 0045e0e6
    JNC 0x0045dec6                      ; 0045e0e7
        ;   XREF to: 0045dec6 (CONDITIONAL_JUMP)  ; LAB_0045dec6
    FLD1                                ; 0045e0ed
    FLD float ptr [ESP + 0xa0]          ; 0045e0ef
    FXCH                                ; 0045e0f6
    FDIV float ptr [ESP]                ; 0045e0f8
    FXCH                                ; 0045e0fb
    FMUL ST1                            ; 0045e0fd
    FLD float ptr [ESP + 0xa4]          ; 0045e0ff
    FMUL ST2                            ; 0045e106
    FLD float ptr [ESP + 0xa8]          ; 0045e108
    FMULP ST3                           ; 0045e10f
    MOV EAX,0xffff                      ; 0045e111
    MOV EDI,dword ptr [0x01c6e24c]      ; 0045e116 | DAT_01c6e24c
    MOV ECX,0x3f800000                  ; 0045e11c
    SUB EAX,EDI                         ; 0045e121
    LEA ESI,[ESP + 0x118]               ; 0045e123
    MOV dword ptr [ESP + 0x184],EAX     ; 0045e12a
    XOR EAX,EAX                         ; 0045e131
    MOV dword ptr [ESP + 0x12c],ECX     ; 0045e133
    MOV dword ptr [ESP + 0x124],EAX     ; 0045e13a
    MOV dword ptr [ESP + 0x128],EAX     ; 0045e141
    LEA EAX,[ESP + 0x124]               ; 0045e148
    LEA EDI,[ESP + 0x148]               ; 0045e14f
    PUSH EAX                            ; 0045e156
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e157
    FILD dword ptr [ESP + 0x188]        ; 0045e15a
    ADD EAX,0x10                        ; 0045e161
    FSTP float ptr [ESP + 0x188]        ; 0045e164
    PUSH EAX                            ; 0045e16b
    FXCH                                ; 0045e16c
    FSTP float ptr [ESP + 0xa8]         ; 0045e16e
    FSTP float ptr [ESP + 0xac]         ; 0045e175
    FSTP float ptr [ESP + 0xb0]         ; 0045e17c
    CALL core_dirmat.cpp_FUN_0045b800   ; 0045e183
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x120]               ; 0045e188
    ADD ESP,0x8                         ; 0045e18f
    MOVSD ES:EDI,ESI                    ; 0045e192
    MOVSD ES:EDI,ESI                    ; 0045e193
    MOVSD ES:EDI,ESI                    ; 0045e194
    FLD float ptr [ESP + 0xa4]          ; 0045e195
    FMUL float ptr [ESP + 0x14c]        ; 0045e19c
    FLD float ptr [ESP + 0xa0]          ; 0045e1a3
    FMUL float ptr [ESP + 0x148]        ; 0045e1aa
    FADDP                               ; 0045e1b1
    FLD float ptr [ESP + 0xa8]          ; 0045e1b3
    FMUL float ptr [ESP + 0x150]        ; 0045e1ba
    FADDP                               ; 0045e1c1
    FMUL float ptr [ESP + 0x184]        ; 0045e1c3
    FMUL float ptr [0x005bb4fc]         ; 0045e1ca | DAT_005bb4fc
    FLDZ                                ; 0045e1d0
    FCOMPP                              ; 0045e1d2
    FNSTSW AX                           ; 0045e1d4
    SAHF                                ; 0045e1d6
    JNC 0x0045dec6                      ; 0045e1d7
        ;   XREF to: 0045dec6 (CONDITIONAL_JUMP)  ; LAB_0045dec6
    PUSH 0x1                            ; 0045e1dd
    MOV ESI,dword ptr [0x005f2afc]      ; 0045e1df | DAT_005f2afc
    PUSH ESI                            ; 0045e1e5 | DAT_01bdd7e4
    XOR EDI,EDI                         ; 0045e1e6
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0045e1e8
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0045e1ed
    MOV dword ptr [ESP + 0x180],EDI     ; 0045e1f0
    MOV dword ptr [ESP + 0x17c],EBX     ; 0045e1f7
    MOV EAX,dword ptr [ESP + 0x180]     ; 0045e1fe
        ;   Label: LAB_0045e1fe
    MOV dword ptr [ESP + 0x184],EAX     ; 0045e205
    FILD dword ptr [ESP + 0x184]        ; 0045e20c
    FMUL float ptr [0x005bb500]         ; 0045e213 | DAT_005bb500
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e219
    FMUL float ptr [EAX + 0x140]        ; 0045e21c
    FLD float ptr [EAX + 0x38]          ; 0045e222
    FXCH                                ; 0045e225
    FSTP float ptr [ESP + 0x8]          ; 0045e227
    MOV EAX,dword ptr [EAX + 0x18]      ; 0045e22b
    FLD float ptr [ESP + 0x8]           ; 0045e22e
    MOV dword ptr [ESP + 0x7c],EAX      ; 0045e232
    FMUL double ptr [0x005bb4ec]        ; 0045e236 | DAT_005bb4ec
    FLD float ptr [ESP + 0x7c]          ; 0045e23c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e240
    FMUL float ptr [ESP + 0x8]          ; 0045e243
    FXCH                                ; 0045e247
    FDIVRP ST2,ST0                      ; 0045e249
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045e24b
    MOV dword ptr [ESP + 0x80],EAX      ; 0045e24e
    FLD float ptr [ESP + 0x80]          ; 0045e255
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e25c
    FMUL float ptr [ESP + 0x8]          ; 0045e25f
    MOV EAX,dword ptr [EAX + 0x30]      ; 0045e263
    MOV dword ptr [ESP + 0x84],EAX      ; 0045e266
    FLD float ptr [ESP + 0x84]          ; 0045e26d
    FMUL float ptr [ESP + 0x8]          ; 0045e274
    LEA EDI,[ESP + 0x34]                ; 0045e278
    LEA ESI,[ESP + 0x58]                ; 0045e27c
    FXCH ST2                            ; 0045e280
    FSTP float ptr [ESP + 0x58]         ; 0045e282
    FSTP float ptr [ESP + 0x5c]         ; 0045e286
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0045e28a
    FSTP float ptr [ESP + 0x60]         ; 0045e291
    MOVSD ES:EDI,ESI                    ; 0045e295
    MOVSD ES:EDI,ESI                    ; 0045e296
    MOVSD ES:EDI,ESI                    ; 0045e297
    LEA EDX,[ESP + 0x94]                ; 0045e298
    FLD float ptr [EAX + 0x4]           ; 0045e29f
    FLD float ptr [EAX + 0x8]           ; 0045e2a2
    FLD float ptr [EAX]                 ; 0045e2a5
    LEA EDI,[ESP + 0x94]                ; 0045e2a7
    LEA ESI,[ESP + 0x70]                ; 0045e2ae
    LEA EAX,[ESP + 0x40]                ; 0045e2b2
    FADD float ptr [ESP + 0x34]         ; 0045e2b6
    FXCH ST2                            ; 0045e2ba
    FADD float ptr [ESP + 0x38]         ; 0045e2bc
    FXCH                                ; 0045e2c0
    FADD float ptr [ESP + 0x3c]         ; 0045e2c2
    FXCH ST2                            ; 0045e2c6
    FSTP float ptr [ESP + 0x70]         ; 0045e2c8
    FSTP float ptr [ESP + 0x74]         ; 0045e2cc
    FSTP float ptr [ESP + 0x78]         ; 0045e2d0
    MOVSD ES:EDI,ESI                    ; 0045e2d4
    MOVSD ES:EDI,ESI                    ; 0045e2d5
    MOVSD ES:EDI,ESI                    ; 0045e2d6
    FSTP float ptr [ESP + 0x178]        ; 0045e2d7
    CMP EAX,EDX                         ; 0045e2de
    JZ 0x0045e303                       ; 0045e2e0
        ;   XREF to: 0045e303 (CONDITIONAL_JUMP)  ; LAB_0045e303
    MOV EAX,dword ptr [ESP + 0x94]      ; 0045e2e2
    MOV dword ptr [ESP + 0x40],EAX      ; 0045e2e9
    MOV EAX,dword ptr [ESP + 0x98]      ; 0045e2ed
    MOV dword ptr [ESP + 0x44],EAX      ; 0045e2f4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0045e2f8
    MOV dword ptr [ESP + 0x48],EAX      ; 0045e2ff
    LEA EAX,[ESP + 0x40]                ; 0045e303
        ;   Label: LAB_0045e303
    PUSH EAX                            ; 0045e307
    MOV EAX,[0x005f2afc]                ; 0045e308 | DAT_005f2afc
    PUSH EAX                            ; 0045e30d | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0045e30e
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0045e313
    MOV EDX,dword ptr [0x005f2afc]      ; 0045e316 | DAT_005f2afc
    PUSH EDX                            ; 0045e31c | DAT_01bdd7e4
    LEA ESI,[ESP + 0xf8]                ; 0045e31d
    CALL engine_matrix.c_FUN_0046d250   ; 0045e324
        ;   XREF to: 0046d250 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d250()
    ADD ESP,0x4                         ; 0045e329
    PUSH 0x0                            ; 0045e32c
    LEA EAX,[ESP + 0x50]                ; 0045e32e
    LEA EDI,[ESP + 0x50]                ; 0045e332
    PUSH EAX                            ; 0045e336
    MOV ECX,dword ptr [0x005f2afc]      ; 0045e337 | DAT_005f2afc
    LEA ESI,[ESP + 0xfc]                ; 0045e33d
    PUSH ECX                            ; 0045e344 | DAT_01bdd7e4
    MOVSD ES:EDI,ESI                    ; 0045e345
    MOVSD ES:EDI,ESI                    ; 0045e346
    MOVSD ES:EDI,ESI                    ; 0045e347
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0045e348
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0045e34d
    XOR EBX,EBX                         ; 0045e350
    MOV EAX,dword ptr [ESP + 0x178]     ; 0045e352
    MOV dword ptr [ESP + 0x114],EBX     ; 0045e359
    LEA EBX,[ESP + 0xb8]                ; 0045e360
    MOV dword ptr [ESP + 0x10c],EAX     ; 0045e367
    MOV dword ptr [ESP + 0x110],EAX     ; 0045e36e
    LEA EAX,[ESP + 0x10c]               ; 0045e375
    MOV EDX,dword ptr [0x005f2afc]      ; 0045e37c | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0045e382
    FMUL float ptr [0x005de4f0]         ; 0045e384 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045e38a
    FLD float ptr [EAX + 0x4]           ; 0045e38c
    FMUL float ptr [0x005de4f0]         ; 0045e38f | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045e395
    FLD float ptr [EAX + 0x8]           ; 0045e398
    FMUL float ptr [0x005de4f0]         ; 0045e39b | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045e3a1
    LEA EAX,[ESP + 0xb8]                ; 0045e3a4
    PUSH EAX                            ; 0045e3ab
    MOV EAX,dword ptr [EDX]             ; 0045e3ac | DAT_01bdd7e4
    PUSH EAX                            ; 0045e3ae
    CALL engine_special.cpp_FUN_005632a3 ; 0045e3af
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045e3b4
    MOV AH,byte ptr [ESP + 0x10f]       ; 0045e3b7
    XOR AH,0x80                         ; 0045e3be
    LEA EBX,[ESP + 0xc4]                ; 0045e3c1
    MOV byte ptr [ESP + 0x10f],AH       ; 0045e3c8
    LEA EAX,[ESP + 0x10c]               ; 0045e3cf
    MOV EDX,dword ptr [0x005f2afc]      ; 0045e3d6 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0045e3dc
    FMUL float ptr [0x005de4f0]         ; 0045e3de | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045e3e4
    FLD float ptr [EAX + 0x4]           ; 0045e3e6
    FMUL float ptr [0x005de4f0]         ; 0045e3e9 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045e3ef
    FLD float ptr [EAX + 0x8]           ; 0045e3f2
    FMUL float ptr [0x005de4f0]         ; 0045e3f5 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045e3fb
    LEA EAX,[ESP + 0xc4]                ; 0045e3fe
    PUSH EAX                            ; 0045e405
    MOV EAX,dword ptr [EDX]             ; 0045e406 | DAT_01bdd7e4
    ADD EAX,0x30                        ; 0045e408
    PUSH EAX                            ; 0045e40b
    CALL engine_special.cpp_FUN_005632a3 ; 0045e40c
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045e411
    MOV DL,byte ptr [ESP + 0x113]       ; 0045e414
    LEA EBX,[ESP + 0xe8]                ; 0045e41b
    XOR DL,0x80                         ; 0045e422
    LEA EAX,[ESP + 0x10c]               ; 0045e425
    MOV byte ptr [ESP + 0x113],DL       ; 0045e42c
    MOV EDX,dword ptr [0x005f2afc]      ; 0045e433 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0045e439
    FMUL float ptr [0x005de4f0]         ; 0045e43b | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045e441
    FLD float ptr [EAX + 0x4]           ; 0045e443
    FMUL float ptr [0x005de4f0]         ; 0045e446 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045e44c
    FLD float ptr [EAX + 0x8]           ; 0045e44f
    FMUL float ptr [0x005de4f0]         ; 0045e452 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045e458
    LEA EAX,[ESP + 0xe8]                ; 0045e45b
    PUSH EAX                            ; 0045e462
    MOV EAX,dword ptr [EDX]             ; 0045e463 | DAT_01bdd7e4
    ADD EAX,0x60                        ; 0045e465
    PUSH EAX                            ; 0045e468
    CALL engine_special.cpp_FUN_005632a3 ; 0045e469
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045e46e
    MOV DH,byte ptr [ESP + 0x10f]       ; 0045e471
    LEA EBX,[ESP + 0x13c]               ; 0045e478
    XOR DH,0x80                         ; 0045e47f
    LEA EAX,[ESP + 0x10c]               ; 0045e482
    MOV byte ptr [ESP + 0x10f],DH       ; 0045e489
    MOV EDX,dword ptr [0x005f2afc]      ; 0045e490 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0045e496
    FMUL float ptr [0x005de4f0]         ; 0045e498 | DAT_005de4f0
    FISTP dword ptr [EBX]               ; 0045e49e
    FLD float ptr [EAX + 0x4]           ; 0045e4a0
    FMUL float ptr [0x005de4f0]         ; 0045e4a3 | DAT_005de4f0
    FISTP dword ptr [EBX + 0x4]         ; 0045e4a9
    FLD float ptr [EAX + 0x8]           ; 0045e4ac
    FMUL float ptr [0x005de4f0]         ; 0045e4af | DAT_005de4f0
    FISTP dword ptr [EBX + 0x8]         ; 0045e4b5
    LEA EAX,[ESP + 0x13c]               ; 0045e4b8
    PUSH EAX                            ; 0045e4bf
    MOV EAX,dword ptr [EDX]             ; 0045e4c0 | DAT_01bdd7e4
    ADD EAX,0x90                        ; 0045e4c2
    PUSH EAX                            ; 0045e4c7
    CALL engine_special.cpp_FUN_005632a3 ; 0045e4c8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0045e4cd
    PUSH 0x5f2840                       ; 0045e4d0 | DAT_005f2840
    MOV ESI,dword ptr [0x005f2afc]      ; 0045e4d5 | DAT_005f2afc
    PUSH ESI                            ; 0045e4db | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0045e4dc
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0045e4e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045e4e4
    FLD float ptr [EAX + 0x140]         ; 0045e4e7
    FSUB float ptr [ESP + 0x8]          ; 0045e4ed
    FMUL double ptr [0x005bb504]        ; 0045e4f1 | DAT_005bb504
    FDIV float ptr [EAX + 0x140]        ; 0045e4f7
    MOV EDI,0x4                         ; 0045e4fd
    MOV EDX,dword ptr [0x005f2afc]      ; 0045e502 | DAT_005f2afc
    XOR EAX,EAX                         ; 0045e508
    MOV dword ptr [ESP + 0x10],EDI      ; 0045e50a
    MOV dword ptr [ESP + 0x20],EAX      ; 0045e50e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045e512
    MOV dword ptr [ESP + 0x18],EAX      ; 0045e516
    MOV dword ptr [ESP + 0x14],EAX      ; 0045e51a
    MOV dword ptr [ESP + 0x24],EAX      ; 0045e51e
    FMUL float ptr [ESP + 0x4]          ; 0045e522
    MOV EBX,dword ptr [EDX]             ; 0045e526 | DAT_01bdd7e4
    CALL crt_math.c_round_FUN_005a3120  ; 0045e528
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x160]       ; 0045e52d
    MOV EAX,dword ptr [ESP + 0x160]     ; 0045e534
    MOV dword ptr [EBX + 0x2c],EAX      ; 0045e53b
    MOV EAX,dword ptr [EDX]             ; 0045e53e
    MOV dword ptr [EAX + 0x20],0xffff   ; 0045e540
    MOV EAX,dword ptr [EDX]             ; 0045e547
    MOV dword ptr [EAX + 0x24],0xffff   ; 0045e549
    MOV EAX,dword ptr [EDX]             ; 0045e550
    MOV EDI,0x1                         ; 0045e552
    MOV dword ptr [EAX + 0x28],0xffff   ; 0045e557
    MOV dword ptr [ESP + 0x28],EDI      ; 0045e55e
    MOV EBX,dword ptr [EDX]             ; 0045e562
    MOV EAX,dword ptr [ESP + 0x160]     ; 0045e564
    MOV dword ptr [EBX + 0x5c],EAX      ; 0045e56b
    MOV EAX,dword ptr [EDX]             ; 0045e56e
    MOV dword ptr [EAX + 0x50],0xffff   ; 0045e570
    MOV EAX,dword ptr [EDX]             ; 0045e577
    MOV dword ptr [EAX + 0x54],0xffff   ; 0045e579
    MOV EAX,dword ptr [EDX]             ; 0045e580
    MOV dword ptr [EAX + 0x58],0xffff   ; 0045e582
    MOV dword ptr [ESP + 0x2c],0x2      ; 0045e589
    MOV EBX,dword ptr [EDX]             ; 0045e591
    MOV EAX,dword ptr [ESP + 0x160]     ; 0045e593
    MOV dword ptr [EBX + 0x8c],EAX      ; 0045e59a
    MOV EAX,dword ptr [EDX]             ; 0045e5a0
    MOV dword ptr [EAX + 0x80],0xffff   ; 0045e5a2
    MOV EAX,dword ptr [EDX]             ; 0045e5ac
    MOV dword ptr [EAX + 0x84],0xffff   ; 0045e5ae
    MOV EAX,dword ptr [EDX]             ; 0045e5b8
    MOV ECX,0x3                         ; 0045e5ba
    MOV dword ptr [EAX + 0x88],0xffff   ; 0045e5bf
    MOV dword ptr [ESP + 0x30],ECX      ; 0045e5c9
    MOV EBX,dword ptr [EDX]             ; 0045e5cd
    MOV EAX,dword ptr [ESP + 0x160]     ; 0045e5cf
    MOV dword ptr [EBX + 0xbc],EAX      ; 0045e5d6
    MOV EAX,dword ptr [EDX]             ; 0045e5dc
    MOV dword ptr [EAX + 0xb0],0xffff   ; 0045e5de
    MOV EAX,dword ptr [EDX]             ; 0045e5e8
    MOV dword ptr [EAX + 0xb4],0xffff   ; 0045e5ea
    MOV EAX,dword ptr [EDX]             ; 0045e5f4
    MOV dword ptr [EAX + 0xb8],0xffff   ; 0045e5f6
    MOV EAX,dword ptr [EDX]             ; 0045e600
    MOV dword ptr [EAX + 0x18],0xf80000 ; 0045e602
    MOV EAX,dword ptr [EDX]             ; 0045e609
    MOV dword ptr [EAX + 0x1c],0xf80000 ; 0045e60b
    MOV EAX,dword ptr [EDX]             ; 0045e612
    MOV dword ptr [EAX + 0x48],0x80000  ; 0045e614
    MOV EAX,dword ptr [EDX]             ; 0045e61b
    MOV dword ptr [EAX + 0x4c],0xf80000 ; 0045e61d
    MOV EAX,dword ptr [EDX]             ; 0045e624
    MOV dword ptr [EAX + 0x78],0x80000  ; 0045e626
    MOV EAX,dword ptr [EDX]             ; 0045e62d
    MOV dword ptr [EAX + 0x7c],0x80000  ; 0045e62f
    MOV EAX,dword ptr [EDX]             ; 0045e636
    MOV dword ptr [EAX + 0xa8],0xf80000 ; 0045e638
    MOV EAX,dword ptr [EDX]             ; 0045e642
    MOV dword ptr [EAX + 0xac],0x80000  ; 0045e644
    LEA EAX,[ESP + 0xc]                 ; 0045e64e
    PUSH EAX                            ; 0045e652
    PUSH EDX                            ; 0045e653
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510 ; 0045e654
        ;   XREF to: 0046c510 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0045e659
    MOV EBX,dword ptr [0x005f2afc]      ; 0045e65c | DAT_005f2afc
    PUSH EBX                            ; 0045e662 | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0045e663
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0045e668
    MOV ESI,dword ptr [ESP + 0x180]     ; 0045e66b
    ADD ESI,EDI                         ; 0045e672
    MOV dword ptr [ESP + 0x180],ESI     ; 0045e674
    CMP ESI,0x19                        ; 0045e67b
    JL 0x0045e1fe                       ; 0045e67e
        ;   XREF to: 0045e1fe (CONDITIONAL_JUMP)  ; LAB_0045e1fe
    PUSH 0x0                            ; 0045e684
    MOV EAX,[0x005f2afc]                ; 0045e686 | DAT_005f2afc
    PUSH EAX                            ; 0045e68b | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0 ; 0045e68c
        ;   XREF to: 0046d4b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0045e691
    MOV ESP,EBP                         ; 0045e694
    POP EBP                             ; 0045e696
    POP EDI                             ; 0045e697
    POP ESI                             ; 0045e698
    POP EBX                             ; 0045e699
    RET                                 ; 0045e69a

