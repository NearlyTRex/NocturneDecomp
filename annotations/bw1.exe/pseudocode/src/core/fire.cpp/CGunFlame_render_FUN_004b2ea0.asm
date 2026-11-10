; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_render_FUN_004b2ea0(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_004b5100 at 004b53ec
;
; Referenced Globals:
;   undefined4 DAT_005df514
;   undefined4 DAT_005df51c
;   undefined4 DAT_005df524
;   undefined4 DAT_005df52c
;   undefined4 DAT_005df534
;   undefined4 DAT_005df53c
;   undefined4 DAT_005df544
;   undefined4 DAT_005df54c
;   undefined4 DAT_005df550
;   undefined4 DAT_005df554
;   undefined4 DAT_005df558
;   undefined4 DAT_005df55c
;   undefined4 DAT_005df560
;   undefined4 DAT_005df564
;   undefined4 DAT_005fff94
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_matrix.c_FUN_00483ae0
;   engine_matrix.c_FUN_00483b70
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2ea0
        ;   Label: core_fire.cpp_CGunFlame_render_FUN_004b2ea0
    PUSH ESI                            ; 004b2ea1
    PUSH EDI                            ; 004b2ea2
    PUSH EBP                            ; 004b2ea3
    MOV EBP,ESP                         ; 004b2ea4
    SUB ESP,0xec                        ; 004b2ea6
    AND ESP,0xfffffff8                  ; 004b2eac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b2eaf
    FLD float ptr [EAX]                 ; 004b2eb2
    FLDZ                                ; 004b2eb4
    FCOMPP                              ; 004b2eb6
    FNSTSW AX                           ; 004b2eb8
    SAHF                                ; 004b2eba
    JC 0x004b2ec4                       ; 004b2ebb
        ;   XREF to: 004b2ec4 (CONDITIONAL_JUMP)  ; LAB_004b2ec4
    MOV ESP,EBP                         ; 004b2ebd
    POP EBP                             ; 004b2ebf
    POP EDI                             ; 004b2ec0
    POP ESI                             ; 004b2ec1
    POP EBX                             ; 004b2ec2
    RET                                 ; 004b2ec3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b2ec4
        ;   Label: LAB_004b2ec4
    FLD float ptr [EAX + 0x1c]          ; 004b2ec7
    CALL crt_math.c_round_FUN_005c03a0  ; 004b2eca
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xd8]        ; 004b2ecf
    MOV EDX,dword ptr [ESP + 0xd8]      ; 004b2ed6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b2edd
    SUB EAX,EDX                         ; 004b2ee4
    SHL EAX,0x3                         ; 004b2ee6
    ADD EAX,0x1c58588                   ; 004b2ee9
    PUSH EAX                            ; 004b2eee
    MOV EDX,dword ptr [0x00612560]      ; 004b2eef | DAT_00612560
    PUSH EDX                            ; 004b2ef5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b2ef6
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b2efb
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b2efe
    ADD EBX,0x4                         ; 004b2f01
    PUSH EBX                            ; 004b2f04
    MOV ECX,dword ptr [0x00612560]      ; 004b2f05 | DAT_00612560
    PUSH ECX                            ; 004b2f0b | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b2f0c
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b2f11
    MOV ESI,dword ptr [0x00612560]      ; 004b2f14 | DAT_00612560
    PUSH ESI                            ; 004b2f1a | DAT_01bc120c
    LEA ESI,[ESP + 0x8c]                ; 004b2f1b
    LEA EDI,[ESP + 0x74]                ; 004b2f22
    CALL engine_matrix.c_FUN_00483b70   ; 004b2f26
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b70()
    ADD ESP,0x4                         ; 004b2f2b
    LEA ESI,[ESP + 0x88]                ; 004b2f2e
    LEA EAX,[ESP + 0x70]                ; 004b2f35
    PUSH 0x0                            ; 004b2f39
    MOVSD ES:EDI,ESI                    ; 004b2f3b
    MOVSD ES:EDI,ESI                    ; 004b2f3c
    MOVSD ES:EDI,ESI                    ; 004b2f3d
    PUSH EAX                            ; 004b2f3e
    MOV EDI,dword ptr [0x00612560]      ; 004b2f3f | DAT_00612560
    PUSH EDI                            ; 004b2f45 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b2f46
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004b2f4b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b2f4e
    FLD float ptr [0x005fffb0]          ; 004b2f51 | DAT_005fffb0
    FLD ST0                             ; 004b2f57
    FSUB float ptr [EAX]                ; 004b2f59
    FDIVRP                              ; 004b2f5b
    FST float ptr [ESP + 0x14]          ; 004b2f5d
    FST double ptr [ESP]                ; 004b2f61
    FMUL double ptr [0x005df514]        ; 004b2f64 | DAT_005df514
    FLD double ptr [0x005df51c]         ; 004b2f6a | DAT_005df51c
    FXCH                                ; 004b2f70
    FADD ST0,ST1                        ; 004b2f72
    FSTP float ptr [ESP + 0x10]         ; 004b2f74
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b2f78
    FLD double ptr [ESP]                ; 004b2f7c
    MOV dword ptr [ESP + 0xc],EAX       ; 004b2f7f
    FCOMPP                              ; 004b2f83
    FNSTSW AX                           ; 004b2f85
    SAHF                                ; 004b2f87
    JNC 0x004b3078                      ; 004b2f88
        ;   XREF to: 004b3078 (CONDITIONAL_JUMP)  ; LAB_004b3078
    MOV EAX,[0x00612560]                ; 004b2f8e | DAT_00612560
    PUSH EAX                            ; 004b2f93 | DAT_01bc120c
    LEA ESI,[ESP + 0x68]                ; 004b2f94
    LEA EDI,[ESP + 0xb0]                ; 004b2f98
    CALL engine_matrix.c_FUN_00483ae0   ; 004b2f9f
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ae0()
    LEA ESI,[ESP + 0x68]                ; 004b2fa4
    ADD ESP,0x4                         ; 004b2fa8
    MOVSD ES:EDI,ESI                    ; 004b2fab
    MOVSD ES:EDI,ESI                    ; 004b2fac
    MOVSD ES:EDI,ESI                    ; 004b2fad
    FLD float ptr [ESP + 0xac]          ; 004b2fae
    FLD float ptr [ESP + 0xb0]          ; 004b2fb5
    FLD float ptr [ESP + 0xb4]          ; 004b2fbc
    LEA EDI,[ESP + 0x7c]                ; 004b2fc3
    LEA ESI,[ESP + 0x40]                ; 004b2fc7
    FXCH ST2                            ; 004b2fcb
    FSUB float ptr [EBX]                ; 004b2fcd
    FXCH                                ; 004b2fcf
    FSUB float ptr [EBX + 0x4]          ; 004b2fd1
    FXCH ST2                            ; 004b2fd4
    FSUB float ptr [EBX + 0x8]          ; 004b2fd6
    FXCH                                ; 004b2fd9
    FSTP float ptr [ESP + 0x40]         ; 004b2fdb
    FXCH                                ; 004b2fdf
    FSTP float ptr [ESP + 0x44]         ; 004b2fe1
    FSTP float ptr [ESP + 0x48]         ; 004b2fe5
    MOVSD ES:EDI,ESI                    ; 004b2fe9
    MOVSD ES:EDI,ESI                    ; 004b2fea
    MOVSD ES:EDI,ESI                    ; 004b2feb
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b2fec
    FLD float ptr [ESP + 0x80]          ; 004b2fef
    FMUL float ptr [EDX + 0x14]         ; 004b2ff6
    FLD float ptr [ESP + 0x7c]          ; 004b2ff9
    FMUL float ptr [EDX + 0x10]         ; 004b2ffd
    FADDP                               ; 004b3000
    FLD float ptr [ESP + 0x84]          ; 004b3002
    FMUL float ptr [EDX + 0x18]         ; 004b3009
    FADDP                               ; 004b300c
    FABS                                ; 004b300e
    FLD float ptr [ESP + 0x80]          ; 004b3010
    FMUL ST0                            ; 004b3017
    FLD float ptr [ESP + 0x7c]          ; 004b3019
    FMUL ST0                            ; 004b301d
    FADDP                               ; 004b301f
    FLD float ptr [ESP + 0x84]          ; 004b3021
    FMUL ST0                            ; 004b3028
    FADDP                               ; 004b302a
    FSQRT                               ; 004b302c
    FLD float ptr [EDX + 0x14]          ; 004b302e
    FMUL ST0                            ; 004b3031
    FLD float ptr [EDX + 0x10]          ; 004b3033
    FMUL ST0                            ; 004b3036
    FADDP                               ; 004b3038
    FLD float ptr [EDX + 0x18]          ; 004b303a
    FMUL ST0                            ; 004b303d
    FADDP                               ; 004b303f
    FSQRT                               ; 004b3041
    FMULP                               ; 004b3043
    FXCH                                ; 004b3045
    FSTP float ptr [ESP + 0x8]          ; 004b3047
    FDIVR float ptr [ESP + 0x8]         ; 004b304b
    FLD double ptr [ESP]                ; 004b304f
    FMUL double ptr [0x005df524]        ; 004b3052 | DAT_005df524
    FLD1                                ; 004b3058
    FLD1                                ; 004b305a
    FSUBRP ST3,ST0                      ; 004b305c
    FSUBRP                              ; 004b305e
    FMULP                               ; 004b3060
    FST float ptr [ESP + 0x8]           ; 004b3062
    FMUL double ptr [0x005df52c]        ; 004b3066 | DAT_005df52c
    FLD1                                ; 004b306c
    FADDP                               ; 004b306e
    FMUL float ptr [ESP + 0x10]         ; 004b3070
    FSTP float ptr [ESP + 0xc]          ; 004b3074
    FLD float ptr [0x005df534]          ; 004b3078 | DAT_005df534
        ;   Label: LAB_004b3078
    FLD float ptr [ESP + 0x10]          ; 004b307e
    FMUL ST1                            ; 004b3082
    FLD float ptr [ESP + 0xc]           ; 004b3084
    FCHS                                ; 004b3088
    FMULP ST2                           ; 004b308a
    FMUL double ptr [0x005df53c]        ; 004b308c | DAT_005df53c
    FXCH                                ; 004b3092
    FMUL double ptr [0x005df53c]        ; 004b3094 | DAT_005df53c
    XOR EDX,EDX                         ; 004b309a
    LEA EBX,[ESP + 0xb8]                ; 004b309c
    MOV dword ptr [ESP + 0x60],EDX      ; 004b30a3
    FSTP float ptr [ESP + 0xd8]         ; 004b30a7
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004b30ae
    MOV EDX,dword ptr [0x00612560]      ; 004b30b5 | DAT_00612560
    MOV dword ptr [ESP + 0x58],EAX      ; 004b30bb
    LEA EAX,[ESP + 0x58]                ; 004b30bf
    FSTP float ptr [ESP + 0x5c]         ; 004b30c3
    FLD float ptr [EAX]                 ; 004b30c7
    FMUL float ptr [0x005fff94]         ; 004b30c9 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b30cf
    FLD float ptr [EAX + 0x4]           ; 004b30d1
    FMUL float ptr [0x005fff94]         ; 004b30d4 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b30da
    FLD float ptr [EAX + 0x8]           ; 004b30dd
    FMUL float ptr [0x005fff94]         ; 004b30e0 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b30e6
    LEA EAX,[ESP + 0xb8]                ; 004b30e9
    PUSH EAX                            ; 004b30f0
    MOV EAX,dword ptr [EDX]             ; 004b30f1 | DAT_01bc120c
    PUSH EAX                            ; 004b30f3
    CALL engine_special.cpp_FUN_00580173 ; 004b30f4
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b30f9
    FLD float ptr [ESP + 0xc]           ; 004b30fc
    FMUL double ptr [0x005df544]        ; 004b3100 | DAT_005df544
    FMUL double ptr [0x005df53c]        ; 004b3106 | DAT_005df53c
    LEA EBX,[ESP + 0x94]                ; 004b310c
    LEA EAX,[ESP + 0x58]                ; 004b3113
    MOV EDX,dword ptr [0x00612560]      ; 004b3117 | DAT_00612560
    FSTP float ptr [ESP + 0x58]         ; 004b311d
    FLD float ptr [EAX]                 ; 004b3121
    FMUL float ptr [0x005fff94]         ; 004b3123 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3129
    FLD float ptr [EAX + 0x4]           ; 004b312b
    FMUL float ptr [0x005fff94]         ; 004b312e | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3134
    FLD float ptr [EAX + 0x8]           ; 004b3137
    FMUL float ptr [0x005fff94]         ; 004b313a | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3140
    LEA EAX,[ESP + 0x94]                ; 004b3143
    PUSH EAX                            ; 004b314a
    MOV EAX,dword ptr [EDX]             ; 004b314b | DAT_01bc120c
    ADD EAX,0x30                        ; 004b314d
    PUSH EAX                            ; 004b3150
    CALL engine_special.cpp_FUN_00580173 ; 004b3151
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b3156
    FLD float ptr [ESP + 0x10]          ; 004b3159
    FCHS                                ; 004b315d
    FMUL double ptr [0x005df544]        ; 004b315f | DAT_005df544
    FMUL double ptr [0x005df53c]        ; 004b3165 | DAT_005df53c
    LEA EBX,[ESP + 0x4c]                ; 004b316b
    LEA EAX,[ESP + 0x58]                ; 004b316f
    MOV EDX,dword ptr [0x00612560]      ; 004b3173 | DAT_00612560
    FSTP float ptr [ESP + 0x5c]         ; 004b3179
    FLD float ptr [EAX]                 ; 004b317d
    FMUL float ptr [0x005fff94]         ; 004b317f | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3185
    FLD float ptr [EAX + 0x4]           ; 004b3187
    FMUL float ptr [0x005fff94]         ; 004b318a | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3190
    FLD float ptr [EAX + 0x8]           ; 004b3193
    FMUL float ptr [0x005fff94]         ; 004b3196 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b319c
    LEA EAX,[ESP + 0x4c]                ; 004b319f
    PUSH EAX                            ; 004b31a3
    MOV EAX,dword ptr [EDX]             ; 004b31a4 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b31a6
    PUSH EAX                            ; 004b31a9
    CALL engine_special.cpp_FUN_00580173 ; 004b31aa
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b31af
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004b31b2
    LEA EBX,[ESP + 0xa0]                ; 004b31b9
    MOV dword ptr [ESP + 0x58],EAX      ; 004b31c0
    LEA EAX,[ESP + 0x58]                ; 004b31c4
    MOV EDX,dword ptr [0x00612560]      ; 004b31c8 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b31ce
    FMUL float ptr [0x005fff94]         ; 004b31d0 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b31d6
    FLD float ptr [EAX + 0x4]           ; 004b31d8
    FMUL float ptr [0x005fff94]         ; 004b31db | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b31e1
    FLD float ptr [EAX + 0x8]           ; 004b31e4
    FMUL float ptr [0x005fff94]         ; 004b31e7 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b31ed
    LEA EAX,[ESP + 0xa0]                ; 004b31f0
    PUSH EAX                            ; 004b31f7
    MOV EAX,dword ptr [EDX]             ; 004b31f8 | DAT_01bc120c
    ADD EAX,0x90                        ; 004b31fa
    PUSH EAX                            ; 004b31ff
    CALL engine_special.cpp_FUN_00580173 ; 004b3200
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b3205
    FLD1                                ; 004b3208
    FLD float ptr [ESP + 0x14]          ; 004b320a
    FLD float ptr [0x005df550]          ; 004b320e | DAT_005df550
    FSUB ST0,ST1                        ; 004b3214
    FXCH ST2                            ; 004b3216
    FSUB ST0,ST1                        ; 004b3218
    FXCH ST2                            ; 004b321a
    FMULP                               ; 004b321c
    FXCH                                ; 004b321e
    FMUL float ptr [0x005df54c]         ; 004b3220 | DAT_005df54c
    FLD ST1                             ; 004b3226
    FMUL float ptr [0x005df558]         ; 004b3228 | DAT_005df558
    FLD ST2                             ; 004b322e
    FMUL float ptr [0x005df560]         ; 004b3230 | DAT_005df560
    MOV EDX,dword ptr [0x00612560]      ; 004b3236 | DAT_00612560
    FLD ST3                             ; 004b323c
    FMUL float ptr [0x005df564]         ; 004b323e | DAT_005df564
    MOV EAX,dword ptr [EDX]             ; 004b3244 | DAT_01bc120c
    FLD1                                ; 004b3246
    MOV dword ptr [EAX + 0x18],0x20000  ; 004b3248
    FSUBRP ST5,ST0                      ; 004b324f
    MOV EAX,dword ptr [EDX]             ; 004b3251 | DAT_01bc120c
    FXCH ST4                            ; 004b3253
    FMUL float ptr [0x005df554]         ; 004b3255 | DAT_005df554
    MOV dword ptr [EAX + 0x1c],0x20000  ; 004b325b
    FXCH ST2                            ; 004b3262
    FADD ST0,ST2                        ; 004b3264
    MOV EAX,dword ptr [EDX]             ; 004b3266 | DAT_01bc120c
    FLD float ptr [0x005df55c]          ; 004b3268 | DAT_005df55c
    FXCH                                ; 004b326e
    FMUL ST1                            ; 004b3270
    MOV dword ptr [EAX + 0x48],0xfe0000 ; 004b3272
    FXCH ST2                            ; 004b3279
    FADD ST0,ST3                        ; 004b327b
    MOV EAX,dword ptr [EDX]             ; 004b327d | DAT_01bc120c
    FMUL ST1                            ; 004b327f
    MOV dword ptr [EAX + 0x4c],0x20000  ; 004b3281
    FXCH ST5                            ; 004b3288
    FADDP ST3,ST0                       ; 004b328a
    MOV EAX,dword ptr [EDX]             ; 004b328c | DAT_01bc120c
    FMULP ST2                           ; 004b328e
    MOV dword ptr [EAX + 0x78],0xfe0000 ; 004b3290
    MOV EAX,dword ptr [EDX]             ; 004b3297 | DAT_01bc120c
    FXCH ST2                            ; 004b3299
    CALL crt_math.c_round_FUN_005c03a0  ; 004b329b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV dword ptr [EAX + 0x7c],0xfe0000 ; 004b32a0
    FXCH ST2                            ; 004b32a7
    CALL crt_math.c_round_FUN_005c03a0  ; 004b32a9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [EDX]             ; 004b32ae
    FXCH ST3                            ; 004b32b0
    CALL crt_math.c_round_FUN_005c03a0  ; 004b32b2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV dword ptr [EAX + 0xa8],0x20000  ; 004b32b7
    FXCH                                ; 004b32c1
    CALL crt_math.c_round_FUN_005c03a0  ; 004b32c3
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EAX,dword ptr [EDX]             ; 004b32c8
    FXCH ST3                            ; 004b32ca
    FISTP dword ptr [ESP + 0xe4]        ; 004b32cc
    MOV dword ptr [EAX + 0xac],0xfe0000 ; 004b32d3
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b32dd
    MOV EBX,dword ptr [EDX]             ; 004b32e4
    FISTP dword ptr [ESP + 0xdc]        ; 004b32e6
    MOV dword ptr [EBX + 0x20],EAX      ; 004b32ed
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004b32f0
    MOV EBX,dword ptr [EDX]             ; 004b32f7
    FXCH                                ; 004b32f9
    FISTP dword ptr [ESP + 0xe8]        ; 004b32fb
    MOV dword ptr [EBX + 0x24],EAX      ; 004b3302
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b3305
    MOV EBX,dword ptr [EDX]             ; 004b330c
    FISTP dword ptr [ESP + 0xe0]        ; 004b330e
    MOV dword ptr [EBX + 0x28],EAX      ; 004b3315
    MOV EBX,dword ptr [EDX]             ; 004b3318
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004b331a
    MOV dword ptr [EBX + 0x2c],EAX      ; 004b3321
    MOV EBX,dword ptr [EDX]             ; 004b3324
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b3326
    MOV dword ptr [EBX + 0x50],EAX      ; 004b332d
    MOV EBX,dword ptr [EDX]             ; 004b3330
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004b3332
    MOV dword ptr [EBX + 0x54],EAX      ; 004b3339
    MOV EBX,dword ptr [EDX]             ; 004b333c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b333e
    MOV dword ptr [EBX + 0x58],EAX      ; 004b3345
    MOV EBX,dword ptr [EDX]             ; 004b3348
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004b334a
    MOV dword ptr [EBX + 0x5c],EAX      ; 004b3351
    MOV EBX,dword ptr [EDX]             ; 004b3354
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b3356
    MOV dword ptr [EBX + 0x80],EAX      ; 004b335d
    MOV EBX,dword ptr [EDX]             ; 004b3363
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004b3365
    MOV dword ptr [EBX + 0x84],EAX      ; 004b336c
    MOV EBX,dword ptr [EDX]             ; 004b3372
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b3374
    MOV dword ptr [EBX + 0x88],EAX      ; 004b337b
    MOV EBX,dword ptr [EDX]             ; 004b3381
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004b3383
    MOV dword ptr [EBX + 0x8c],EAX      ; 004b338a
    MOV EBX,dword ptr [EDX]             ; 004b3390
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004b3392
    MOV dword ptr [EBX + 0xb0],EAX      ; 004b3399
    MOV EBX,dword ptr [EDX]             ; 004b339f
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004b33a1
    MOV dword ptr [EBX + 0xb4],EAX      ; 004b33a8
    MOV EBX,dword ptr [EDX]             ; 004b33ae
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b33b0
    MOV dword ptr [EBX + 0xb8],EAX      ; 004b33b7
    MOV EBX,dword ptr [EDX]             ; 004b33bd
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004b33bf
    MOV ECX,0x4                         ; 004b33c6
    MOV dword ptr [EBX + 0xbc],EAX      ; 004b33cb
    XOR EBX,EBX                         ; 004b33d1
    MOV ESI,0x2                         ; 004b33d3
    MOV dword ptr [ESP + 0x2c],EBX      ; 004b33d8
    MOV dword ptr [ESP + 0x28],EBX      ; 004b33dc
    MOV dword ptr [ESP + 0x24],EBX      ; 004b33e0
    MOV dword ptr [ESP + 0x20],EBX      ; 004b33e4
    MOV dword ptr [ESP + 0x30],EBX      ; 004b33e8
    MOV EBX,0x1                         ; 004b33ec
    MOV EDI,0x3                         ; 004b33f1
    PUSH EBX                            ; 004b33f6
    MOV dword ptr [ESP + 0x20],ECX      ; 004b33f7
    MOV dword ptr [ESP + 0x3c],ESI      ; 004b33fb
    PUSH EDX                            ; 004b33ff
    MOV dword ptr [ESP + 0x44],EDI      ; 004b3400
    MOV dword ptr [ESP + 0x3c],EBX      ; 004b3404
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b3408
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b340d
    LEA EAX,[ESP + 0x18]                ; 004b3410
    PUSH EAX                            ; 004b3414
    MOV EAX,[0x00612560]                ; 004b3415 | DAT_00612560
    PUSH EAX                            ; 004b341a | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004b341b
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b3420
    PUSH 0x0                            ; 004b3423
    MOV EDX,dword ptr [0x00612560]      ; 004b3425 | DAT_00612560
    PUSH EDX                            ; 004b342b | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b342c
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b3431
    MOV ECX,dword ptr [0x00612560]      ; 004b3434 | DAT_00612560
    PUSH ECX                            ; 004b343a | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b343b
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b3440
    MOV ESP,EBP                         ; 004b3443
    POP EBP                             ; 004b3445
    POP EDI                             ; 004b3446
    POP ESI                             ; 004b3447
    POP EBX                             ; 004b3448
    RET                                 ; 004b3449

