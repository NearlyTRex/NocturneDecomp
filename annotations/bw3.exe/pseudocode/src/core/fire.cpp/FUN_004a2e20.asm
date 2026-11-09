; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a2e20(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,float param_21,float param_22,float param_23,float param_24,int param_25)
;
; Local Variables:
; undefined8       Stack[-0x178]:8  local_178
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined        Stack[-0x10c]:1  local_10c
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
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
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
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_emitter.cpp_FUN_004889b0 at 00488a90
;   core_weapon.cpp_FUN_0057bb60 at 0057bcf4
;
; Referenced Globals:
;   undefined4 DAT_005c09e4
;   undefined4 DAT_005c09e8
;   undefined4 DAT_005c09f0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 DAT_01d5ba14
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364264_0x14d128
;   undefined4 g_CDemonSetInstance.field1364268_0x14d12c
;   undefined4 g_CDemonSetInstance.field1364272_0x14d130
;   undefined4 g_CDemonSetInstance.field1364280_0x14d138
;   undefined4 g_CDemonSetInstance.field1364292_0x14d144
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bf0
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870
;   core_setcolid.cpp_FUN_0053ccc0
;   core_setcolid.cpp_FUN_0053ecd0
;   crt_math.c_acos_FUN_005a4b74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2e20
        ;   Label: core_fire.cpp_FUN_004a2e20
    PUSH ESI                            ; 004a2e21
    PUSH EDI                            ; 004a2e22
    PUSH EBP                            ; 004a2e23
    MOV EBP,ESP                         ; 004a2e24
    SUB ESP,0x168                       ; 004a2e26
    AND ESP,0xfffffff8                  ; 004a2e2c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004a2e2f
    MOV EDX,dword ptr [EBP + 0x74]      ; 004a2e32
    CMP EDX,0x2                         ; 004a2e35
    JG 0x004a3309                       ; 004a2e38
        ;   XREF to: 004a3309 (CONDITIONAL_JUMP)  ; LAB_004a3309
    LEA EAX,[EDX + 0x1]                 ; 004a2e3e
    MOV dword ptr [ESP + 0x148],EAX     ; 004a2e41
    MOV ECX,dword ptr [EBP + 0x34]      ; 004a2e48
        ;   Label: LAB_004a2e48
    PUSH ECX                            ; 004a2e4b
    MOV ESI,dword ptr [EBP + 0x30]      ; 004a2e4c
    PUSH ESI                            ; 004a2e4f
    MOV EDI,dword ptr [EBP + 0x2c]      ; 004a2e50
    PUSH EDI                            ; 004a2e53
    MOV EAX,dword ptr [EBP + 0x28]      ; 004a2e54
    PUSH EAX                            ; 004a2e57
    MOV EDX,dword ptr [0x00603b28]      ; 004a2e58 | g_CDemonSetPtr
    PUSH EDX                            ; 004a2e5e | g_CDemonSetInstance
    LEA EDI,[ESP + 0xa4]                ; 004a2e5f
    CALL core_setcolid.cpp_FUN_0053ecd0 ; 004a2e66
        ;   XREF to: 0053ecd0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_0053ecd0(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 004a2e6b
    LEA EAX,[ESP + 0xb4]                ; 004a2e6e
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a2e75
    MOV ECX,dword ptr [0x00603b28]      ; 004a2e78 | g_CDemonSetPtr
    PUSH EAX                            ; 004a2e7e
    MOVSD ES:EDI,ESI                    ; 004a2e7f
    MOVSD ES:EDI,ESI                    ; 004a2e80
    MOVSD ES:EDI,ESI                    ; 004a2e81
    LEA EAX,[ESP + 0x94]                ; 004a2e82
    FLD float ptr [ESP + 0x94]          ; 004a2e89
    FLD float ptr [ESP + 0x98]          ; 004a2e90
    FLD float ptr [ESP + 0x9c]          ; 004a2e97
    PUSH EAX                            ; 004a2e9e
    LEA EDI,[ESP + 0xbc]                ; 004a2e9f
    LEA ESI,[ESP + 0x80]                ; 004a2ea6
    PUSH ECX                            ; 004a2ead | g_CDemonSetInstance
    FXCH ST2                            ; 004a2eae
    FADD float ptr [EBX]                ; 004a2eb0
    FXCH                                ; 004a2eb2
    FADD float ptr [EBX + 0x4]          ; 004a2eb4
    FXCH ST2                            ; 004a2eb7
    FADD float ptr [EBX + 0x8]          ; 004a2eb9
    FXCH                                ; 004a2ebc
    FSTP float ptr [ESP + 0x84]         ; 004a2ebe
    FXCH                                ; 004a2ec5
    FSTP float ptr [ESP + 0x88]         ; 004a2ec7
    FSTP float ptr [ESP + 0x8c]         ; 004a2ece
    MOVSD ES:EDI,ESI                    ; 004a2ed5
    MOVSD ES:EDI,ESI                    ; 004a2ed6
    MOVSD ES:EDI,ESI                    ; 004a2ed7
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004a2ed8
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x170],EAX     ; 004a2edd
    FLD float ptr [ESP + 0x170]         ; 004a2ee4
    ADD ESP,0xc                         ; 004a2eeb
    FLDZ                                ; 004a2eee
    FXCH                                ; 004a2ef0
    FST float ptr [ESP + 0x14]          ; 004a2ef2
    FSTP double ptr [ESP]               ; 004a2ef6
    FCOMP double ptr [ESP]              ; 004a2ef9
    FNSTSW AX                           ; 004a2efc
    SAHF                                ; 004a2efe
    JA 0x004a3310                       ; 004a2eff
        ;   XREF to: 004a3310 (CONDITIONAL_JUMP)  ; LAB_004a3310
    FLD1                                ; 004a2f05
    FCOMP double ptr [ESP]              ; 004a2f07
    FNSTSW AX                           ; 004a2f0a
    SAHF                                ; 004a2f0c
    JBE 0x004a3310                      ; 004a2f0d
        ;   XREF to: 004a3310 (CONDITIONAL_JUMP)  ; LAB_004a3310
    FLD float ptr [ESP + 0x14]          ; 004a2f13
    FLD float ptr [EBX]                 ; 004a2f17
    FMUL ST1                            ; 004a2f19
    FLD float ptr [EBX + 0x4]           ; 004a2f1b
    FMUL ST2                            ; 004a2f1e
    FLD float ptr [EBX + 0x8]           ; 004a2f20
    FMULP ST3                           ; 004a2f23
    LEA EDI,[ESP + 0x114]               ; 004a2f25
    LEA ESI,[ESP + 0xd8]                ; 004a2f2c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a2f33
    FXCH                                ; 004a2f36
    FSTP float ptr [ESP + 0xd8]         ; 004a2f38
    FSTP float ptr [ESP + 0xdc]         ; 004a2f3f
    FSTP float ptr [ESP + 0xe0]         ; 004a2f46
    MOVSD ES:EDI,ESI                    ; 004a2f4d
    MOVSD ES:EDI,ESI                    ; 004a2f4e
    MOVSD ES:EDI,ESI                    ; 004a2f4f
    FLD float ptr [EAX]                 ; 004a2f50
    FLD float ptr [EAX + 0x4]           ; 004a2f52
    FLD float ptr [EAX + 0x8]           ; 004a2f55
    LEA EDI,[ESP + 0x60]                ; 004a2f58
    LEA ESI,[ESP + 0x108]               ; 004a2f5c
    FXCH ST2                            ; 004a2f63
    FADD float ptr [ESP + 0x114]        ; 004a2f65
    FXCH                                ; 004a2f6c
    FADD float ptr [ESP + 0x118]        ; 004a2f6e
    FXCH ST2                            ; 004a2f75
    FADD float ptr [ESP + 0x11c]        ; 004a2f77
    FXCH                                ; 004a2f7e
    FSTP float ptr [ESP + 0x108]        ; 004a2f80
    FXCH                                ; 004a2f87
    FSTP float ptr [ESP + 0x10c]        ; 004a2f89
    FSTP float ptr [ESP + 0x110]        ; 004a2f90
    MOVSD ES:EDI,ESI                    ; 004a2f97
    MOVSD ES:EDI,ESI                    ; 004a2f98
    MOVSD ES:EDI,ESI                    ; 004a2f99
    LEA EAX,[ESP + 0xb4]                ; 004a2f9a
    LEA ESI,[ESP + 0x60]                ; 004a2fa1
    CMP EAX,ESI                         ; 004a2fa5
    JZ 0x004a2fca                       ; 004a2fa7
        ;   XREF to: 004a2fca (CONDITIONAL_JUMP)  ; LAB_004a2fca
    MOV EAX,dword ptr [ESP + 0x60]      ; 004a2fa9
    MOV dword ptr [ESP + 0xb4],EAX      ; 004a2fad
    MOV EAX,dword ptr [ESP + 0x64]      ; 004a2fb4
    MOV dword ptr [ESP + 0xb8],EAX      ; 004a2fb8
    MOV EAX,dword ptr [ESP + 0x68]      ; 004a2fbf
    MOV dword ptr [ESP + 0xbc],EAX      ; 004a2fc3
    MOV ESI,dword ptr [0x00603b28]      ; 004a2fca | g_CDemonSetPtr
        ;   Label: LAB_004a2fca
    LEA EAX,[ESP + 0x84]                ; 004a2fd0
    ADD ESI,0x14d128                    ; 004a2fd7
    CMP EAX,ESI                         ; 004a2fdd
    JZ 0x004a2ffe                       ; 004a2fdf
        ;   XREF to: 004a2ffe (CONDITIONAL_JUMP)  ; LAB_004a2ffe
    MOV EAX,dword ptr [ESI]             ; 004a2fe1 | g_CDemonSetInstance.field1364264_0x14d128
    MOV dword ptr [ESP + 0x84],EAX      ; 004a2fe3
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a2fea | g_CDemonSetInstance.field1364268_0x14d12c
    MOV dword ptr [ESP + 0x88],EAX      ; 004a2fed
    MOV EAX,dword ptr [ESI + 0x8]       ; 004a2ff4 | g_CDemonSetInstance.field1364272_0x14d130
    MOV dword ptr [ESP + 0x8c],EAX      ; 004a2ff7
    MOV EAX,[0x00603b28]                ; 004a2ffe | g_CDemonSetPtr
        ;   Label: LAB_004a2ffe
    MOV EAX,dword ptr [EAX + 0x14d144]  ; 004a3003 | g_CDemonSetInstance.field1364292_0x14d144
    MOV dword ptr [ESP + 0x160],EAX     ; 004a3009
    MOV EAX,[0x01d5ba14]                ; 004a3010 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004a3015
    XOR EDX,EDX                         ; 004a301c
    MOV EDI,dword ptr [ESP + 0x160]     ; 004a301e
    MOV ESI,dword ptr [EAX + 0x20b8c]   ; 004a3025
    MOV dword ptr [EAX + 0x20b8c],0x0   ; 004a302b
    MOV dword ptr [ESP + 0x14c],ESI     ; 004a3035
    MOV dword ptr [EBP + 0x68],EDX      ; 004a303c
    MOV dword ptr [EBP + 0x6c],EDX      ; 004a303f
    MOV dword ptr [EBP + 0x70],EDX      ; 004a3042
    TEST EDI,EDI                        ; 004a3045
    JNZ 0x004a3422                      ; 004a3047
        ;   XREF to: 004a3422 (CONDITIONAL_JUMP)  ; LAB_004a3422
    XOR EAX,EAX                         ; 004a304d
        ;   Label: LAB_004a304d
    MOV EDX,dword ptr [EBP + 0x3c]      ; 004a304f
    MOV dword ptr [ESP + 0x10],EAX      ; 004a3052
    TEST EDX,EDX                        ; 004a3056
    JZ 0x004a3061                       ; 004a3058
        ;   XREF to: 004a3061 (CONDITIONAL_JUMP)  ; LAB_004a3061
    MOV EAX,dword ptr [EBP + 0x20]      ; 004a305a
    MOV dword ptr [ESP + 0x10],EAX      ; 004a305d
    FLD float ptr [EBP + 0x70]          ; 004a3061
        ;   Label: LAB_004a3061
    FLDZ                                ; 004a3064
    FCOMPP                              ; 004a3066
    FNSTSW AX                           ; 004a3068
    SAHF                                ; 004a306a
    JNC 0x004a3230                      ; 004a306b
        ;   XREF to: 004a3230 (CONDITIONAL_JUMP)  ; LAB_004a3230
    FLD float ptr [ESP + 0x88]          ; 004a3071
    FMUL float ptr [EBX + 0x4]          ; 004a3078
    FLD float ptr [ESP + 0x84]          ; 004a307b
    FMUL float ptr [EBX]                ; 004a3082
    FADDP                               ; 004a3084
    FLD float ptr [ESP + 0x8c]          ; 004a3086
    FMUL float ptr [EBX + 0x8]          ; 004a308d
    FADDP                               ; 004a3090
    FMUL float ptr [0x005c09e4]         ; 004a3092 | DAT_005c09e4
    FLD float ptr [ESP + 0x84]          ; 004a3098
    FXCH                                ; 004a309f
    FSTP float ptr [ESP + 0x158]        ; 004a30a1
    FMUL float ptr [ESP + 0x158]        ; 004a30a8
    FLD float ptr [ESP + 0x88]          ; 004a30af
    FMUL float ptr [ESP + 0x158]        ; 004a30b6
    FLD float ptr [ESP + 0x8c]          ; 004a30bd
    FMUL float ptr [ESP + 0x158]        ; 004a30c4
    LEA EDI,[ESP + 0x18]                ; 004a30cb
    LEA ESI,[ESP + 0xc0]                ; 004a30cf
    FXCH ST2                            ; 004a30d6
    FSTP float ptr [ESP + 0xc0]         ; 004a30d8
    FSTP float ptr [ESP + 0xc4]         ; 004a30df
    FSTP float ptr [ESP + 0xc8]         ; 004a30e6
    MOVSD ES:EDI,ESI                    ; 004a30ed
    MOVSD ES:EDI,ESI                    ; 004a30ee
    MOVSD ES:EDI,ESI                    ; 004a30ef
    FLD float ptr [ESP + 0x18]          ; 004a30f0
    FLD float ptr [ESP + 0x1c]          ; 004a30f4
    FLD float ptr [ESP + 0x20]          ; 004a30f8
    LEA EDI,[ESP + 0x9c]                ; 004a30fc
    LEA ESI,[ESP + 0xcc]                ; 004a3103
    FXCH ST2                            ; 004a310a
    FSUB float ptr [EBX]                ; 004a310c
    FXCH                                ; 004a310e
    FSUB float ptr [EBX + 0x4]          ; 004a3110
    FXCH ST2                            ; 004a3113
    FSUB float ptr [EBX + 0x8]          ; 004a3115
    FXCH                                ; 004a3118
    FSTP float ptr [ESP + 0xcc]         ; 004a311a
    FXCH                                ; 004a3121
    FSTP float ptr [ESP + 0xd0]         ; 004a3123
    FSTP float ptr [ESP + 0xd4]         ; 004a312a
    MOVSD ES:EDI,ESI                    ; 004a3131
    MOVSD ES:EDI,ESI                    ; 004a3132
    MOVSD ES:EDI,ESI                    ; 004a3133
    FLD float ptr [ESP + 0x9c]          ; 004a3134
    FLD float ptr [ESP + 0xa0]          ; 004a313b
    FLD float ptr [ESP + 0xa4]          ; 004a3142
    LEA EDI,[ESP + 0xe4]                ; 004a3149
    LEA ESI,[ESP + 0x12c]               ; 004a3150
    FXCH ST2                            ; 004a3157
    FCHS                                ; 004a3159
    FXCH                                ; 004a315b
    FCHS                                ; 004a315d
    FXCH ST2                            ; 004a315f
    FCHS                                ; 004a3161
    FXCH                                ; 004a3163
    FSTP float ptr [ESP + 0x12c]        ; 004a3165
    FXCH                                ; 004a316c
    FSTP float ptr [ESP + 0x130]        ; 004a316e
    FSTP float ptr [ESP + 0x134]        ; 004a3175
    MOVSD ES:EDI,ESI                    ; 004a317c
    MOVSD ES:EDI,ESI                    ; 004a317d
    MOVSD ES:EDI,ESI                    ; 004a317e
    LEA EAX,[ESP + 0x9c]                ; 004a317f
    LEA ESI,[ESP + 0xe4]                ; 004a3186
    CMP EAX,ESI                         ; 004a318d
    JZ 0x004a31bb                       ; 004a318f
        ;   XREF to: 004a31bb (CONDITIONAL_JUMP)  ; LAB_004a31bb
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004a3191
    MOV dword ptr [ESP + 0x9c],EAX      ; 004a3198
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004a319f
    MOV dword ptr [ESP + 0xa0],EAX      ; 004a31a6
    MOV EAX,dword ptr [ESP + 0xec]      ; 004a31ad
    MOV dword ptr [ESP + 0xa4],EAX      ; 004a31b4
    MOV ECX,dword ptr [0x00603b28]      ; 004a31bb | g_CDemonSetPtr
        ;   Label: LAB_004a31bb
    PUSH ECX                            ; 004a31c1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870 ; 004a31c2
        ;   XREF to: 0053e870 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_0053e870(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004a31c7
    MOV ESI,dword ptr [0x00603b28]      ; 004a31ca | g_CDemonSetPtr
    PUSH ESI                            ; 004a31d0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004a31d1
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004a31d6
    MOV EDI,dword ptr [ESP + 0x148]     ; 004a31d9
    PUSH EDI                            ; 004a31e0
    SUB ESP,0x54                        ; 004a31e1
    MOV EDI,ESP                         ; 004a31e4
    LEA EAX,[ESP + 0xf4]                ; 004a31e6
    PUSH EAX                            ; 004a31ed
    LEA EAX,[ESP + 0x110]               ; 004a31ee
    MOV ECX,0x15                        ; 004a31f5
    PUSH EAX                            ; 004a31fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a31fb
    LEA ESI,[EBP + 0x20]                ; 004a31fe
    PUSH EAX                            ; 004a3201
    MOVSD.REP ES:EDI,ESI                ; 004a3202
    CALL core_fire.cpp_FUN_004a2e20     ; 004a3204
        ;   XREF to: 004a2e20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2e20()
    ADD ESP,0x64                        ; 004a3209
    MOV EDX,dword ptr [0x00603b28]      ; 004a320c | g_CDemonSetPtr
    PUSH EDX                            ; 004a3212 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20 ; 004a3213
        ;   XREF to: 0053ea20 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_0053ea20(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004a3218
    FLD float ptr [EBP + 0x70]          ; 004a321b
    FLD1                                ; 004a321e
    FSUBRP                              ; 004a3220
    FMUL double ptr [0x005c09e8]        ; 004a3222 | DAT_005c09e8
    FMUL float ptr [ESP + 0x10]         ; 004a3228
    FSTP float ptr [ESP + 0x10]         ; 004a322c
    FLD float ptr [EBP + 0x68]          ; 004a3230
        ;   Label: LAB_004a3230
    FLDZ                                ; 004a3233
    FCOMPP                              ; 004a3235
    FNSTSW AX                           ; 004a3237
    SAHF                                ; 004a3239
    JNC 0x004a32cf                      ; 004a323a
        ;   XREF to: 004a32cf (CONDITIONAL_JUMP)  ; LAB_004a32cf
    CMP dword ptr [EBP + 0x68],0x3f800000 ; 004a3240
    JNZ 0x004a3258                      ; 004a3247
        ;   XREF to: 004a3258 (CONDITIONAL_JUMP)  ; LAB_004a3258
    FLD float ptr [EBP + 0x6c]          ; 004a3249
    FCOMP float ptr [EBP + 0x64]        ; 004a324c
    FNSTSW AX                           ; 004a324f
    SAHF                                ; 004a3251
    JZ 0x004a36c5                       ; 004a3252
        ;   XREF to: 004a36c5 (CONDITIONAL_JUMP)  ; LAB_004a36c5
    MOV ESI,EBX                         ; 004a3258
        ;   Label: LAB_004a3258
    MOV EBX,dword ptr [0x00603b28]      ; 004a325a | g_CDemonSetPtr
    LEA EDI,[ESP + 0xf0]                ; 004a3260
    PUSH EBX                            ; 004a3267 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004a3268
    MOVSD ES:EDI,ESI                    ; 004a3269
    MOVSD ES:EDI,ESI                    ; 004a326a
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004a326b
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004a3270
    MOV ESI,dword ptr [ESP + 0x160]     ; 004a3273
    PUSH ESI                            ; 004a327a
    MOV EDI,dword ptr [0x00603b28]      ; 004a327b | g_CDemonSetPtr
    PUSH EDI                            ; 004a3281 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004a3282
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a3287
    MOV EAX,dword ptr [EBP + 0x74]      ; 004a328a
    INC EAX                             ; 004a328d
    PUSH EAX                            ; 004a328e
    SUB ESP,0x54                        ; 004a328f
    MOV EDI,ESP                         ; 004a3292
    LEA EAX,[ESP + 0x148]               ; 004a3294
    PUSH EAX                            ; 004a329b
    LEA EAX,[ESP + 0x110]               ; 004a329c
    LEA ESI,[EBP + 0x20]                ; 004a32a3
    PUSH EAX                            ; 004a32a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004a32a7
    MOV ECX,0x15                        ; 004a32aa
    PUSH EAX                            ; 004a32af
    MOVSD.REP ES:EDI,ESI                ; 004a32b0
    CALL core_fire.cpp_FUN_004a2e20     ; 004a32b2
        ;   XREF to: 004a2e20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2e20()
    ADD ESP,0x64                        ; 004a32b7
    FLD float ptr [EBP + 0x68]          ; 004a32ba
    FLD1                                ; 004a32bd
    FSUBRP                              ; 004a32bf
    FMUL double ptr [0x005c09e8]        ; 004a32c1 | DAT_005c09e8
    FMUL float ptr [ESP + 0x10]         ; 004a32c7
    FSTP float ptr [ESP + 0x10]         ; 004a32cb
    MOV EDX,dword ptr [EBP + 0x34]      ; 004a32cf
        ;   Label: LAB_004a32cf
    PUSH dword ptr [EBP + 0x24]         ; 004a32d2
    PUSH EDX                            ; 004a32d5
    MOV ECX,dword ptr [EBP + 0x30]      ; 004a32d6
    PUSH ECX                            ; 004a32d9
    MOV EBX,dword ptr [EBP + 0x2c]      ; 004a32da
    PUSH EBX                            ; 004a32dd
    LEA EAX,[ESP + 0x94]                ; 004a32de
    PUSH EAX                            ; 004a32e5
    PUSH dword ptr [ESP + 0x24]         ; 004a32e6
    LEA EAX,[ESP + 0xcc]                ; 004a32ea
    PUSH dword ptr [EBP + 0x20]         ; 004a32f1
    PUSH EAX                            ; 004a32f4
    LEA EAX,[ESP + 0xb0]                ; 004a32f5
    PUSH EAX                            ; 004a32fc
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a32fd
    PUSH ESI                            ; 004a3300
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0 ; 004a3301
        ;   XREF to: 004a2aa0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_004a2aa0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x28                        ; 004a3306
    MOV ESP,EBP                         ; 004a3309
        ;   Label: LAB_004a3309
    POP EBP                             ; 004a330b
    POP EDI                             ; 004a330c
    POP ESI                             ; 004a330d
    POP EBX                             ; 004a330e
    RET                                 ; 004a330f
    FLD float ptr [EBX]                 ; 004a3310
        ;   Label: LAB_004a3310
    FLD float ptr [EBX + 0x4]           ; 004a3312
    FLD float ptr [EBX + 0x8]           ; 004a3315
    LEA EDI,[ESP + 0xa8]                ; 004a3318
    LEA ESI,[ESP + 0x120]               ; 004a331f
    FXCH ST2                            ; 004a3326
    FCHS                                ; 004a3328
    FXCH                                ; 004a332a
    FCHS                                ; 004a332c
    FXCH ST2                            ; 004a332e
    FCHS                                ; 004a3330
    FXCH ST2                            ; 004a3332
    FSTP float ptr [ESP + 0x124]        ; 004a3334
    FXCH                                ; 004a333b
    FSTP float ptr [ESP + 0x128]        ; 004a333d
    FSTP float ptr [ESP + 0x120]        ; 004a3344
    MOVSD ES:EDI,ESI                    ; 004a334b
    MOVSD ES:EDI,ESI                    ; 004a334c
    MOVSD ES:EDI,ESI                    ; 004a334d
    LEA EAX,[ESP + 0xa8]                ; 004a334e
    LEA ESI,[ESP + 0x84]                ; 004a3355
    CMP ESI,EAX                         ; 004a335c
    JZ 0x004a338a                       ; 004a335e
        ;   XREF to: 004a338a (CONDITIONAL_JUMP)  ; LAB_004a338a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004a3360
    MOV dword ptr [ESP + 0x84],EAX      ; 004a3367
    MOV EAX,dword ptr [ESP + 0xac]      ; 004a336e
    MOV dword ptr [ESP + 0x88],EAX      ; 004a3375
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004a337c
    MOV dword ptr [ESP + 0x8c],EAX      ; 004a3383
    FLD float ptr [ESP + 0x88]          ; 004a338a
        ;   Label: LAB_004a338a
    FMUL ST0                            ; 004a3391
    FLD float ptr [ESP + 0x84]          ; 004a3393
    FMUL ST0                            ; 004a339a
    FADDP                               ; 004a339c
    FLD float ptr [ESP + 0x8c]          ; 004a339e
    FMUL ST0                            ; 004a33a5
    FADDP                               ; 004a33a7
    FSQRT                               ; 004a33a9
    FLDZ                                ; 004a33ab
    FXCH                                ; 004a33ad
    FSTP float ptr [ESP + 0x150]        ; 004a33af
    FCOMP float ptr [ESP + 0x150]       ; 004a33b6
    FNSTSW AX                           ; 004a33bd
    SAHF                                ; 004a33bf
    JNC 0x004a3406                      ; 004a33c0
        ;   XREF to: 004a3406 (CONDITIONAL_JUMP)  ; LAB_004a3406
    FLD1                                ; 004a33c2
    FLD float ptr [ESP + 0x84]          ; 004a33c4
    FXCH                                ; 004a33cb
    FDIV float ptr [ESP + 0x150]        ; 004a33cd
    FXCH                                ; 004a33d4
    FMUL ST1                            ; 004a33d6
    FLD float ptr [ESP + 0x88]          ; 004a33d8
    FMUL ST2                            ; 004a33df
    FLD float ptr [ESP + 0x8c]          ; 004a33e1
    FMULP ST3                           ; 004a33e8
    FXCH                                ; 004a33ea
    FSTP float ptr [ESP + 0x84]         ; 004a33ec
    FSTP float ptr [ESP + 0x88]         ; 004a33f3
    FSTP float ptr [ESP + 0x8c]         ; 004a33fa
    JMP 0x004a2ffe                      ; 004a3401
        ;   XREF to: 004a2ffe (UNCONDITIONAL_JUMP)  ; LAB_004a2ffe
    XOR ESI,ESI                         ; 004a3406
        ;   Label: LAB_004a3406
    MOV dword ptr [ESP + 0x88],ESI      ; 004a3408
    MOV dword ptr [ESP + 0x84],ESI      ; 004a340f
    MOV dword ptr [ESP + 0x8c],ESI      ; 004a3416
    JMP 0x004a2ffe                      ; 004a341d
        ;   XREF to: 004a2ffe (UNCONDITIONAL_JUMP)  ; LAB_004a2ffe
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a3422
        ;   Label: LAB_004a3422
    PUSH EAX                            ; 004a3425
    PUSH EDI                            ; 004a3426
    LEA ESI,[ESP + 0x104]               ; 004a3427
    CALL core_actor.cpp_FUN_00408bf0    ; 004a342e
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA EDI,[ESP + 0x5c]                ; 004a3433
    LEA ESI,[ESP + 0x104]               ; 004a3437
    ADD ESP,0x8                         ; 004a343e
    MOVSD ES:EDI,ESI                    ; 004a3441
    MOVSD ES:EDI,ESI                    ; 004a3442
    MOVSD ES:EDI,ESI                    ; 004a3443
    LEA EAX,[EBP + 0x40]                ; 004a3444
    LEA ESI,[ESP + 0x54]                ; 004a3447
    CMP EAX,ESI                         ; 004a344b
    JZ 0x004a3464                       ; 004a344d
        ;   XREF to: 004a3464 (CONDITIONAL_JUMP)  ; LAB_004a3464
    MOV EAX,dword ptr [ESP + 0x54]      ; 004a344f
    MOV dword ptr [EBP + 0x40],EAX      ; 004a3453
    MOV EAX,dword ptr [ESP + 0x58]      ; 004a3456
    MOV dword ptr [EBP + 0x44],EAX      ; 004a345a
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004a345d
    MOV dword ptr [EBP + 0x48],EAX      ; 004a3461
    MOV EAX,[0x00603b28]                ; 004a3464 | g_CDemonSetPtr
        ;   Label: LAB_004a3464
    ADD EAX,0x14d138                    ; 004a3469
    PUSH EAX                            ; 004a346e | g_CDemonSetInstance.field1364280_0x14d138
    MOV ECX,dword ptr [ESP + 0x164]     ; 004a346f
    PUSH ECX                            ; 004a3476
    LEA ESI,[ESP + 0x50]                ; 004a3477
    LEA EDI,[ESP + 0x2c]                ; 004a347b
    CALL core_actor.cpp_FUN_00408bf0    ; 004a347f
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x50]                ; 004a3484
    ADD ESP,0x8                         ; 004a3488
    MOVSD ES:EDI,ESI                    ; 004a348b
    MOVSD ES:EDI,ESI                    ; 004a348c
    MOVSD ES:EDI,ESI                    ; 004a348d
    LEA EAX,[EBP + 0x4c]                ; 004a348e
    LEA ESI,[ESP + 0x24]                ; 004a3491
    CMP EAX,ESI                         ; 004a3495
    JZ 0x004a34ae                       ; 004a3497
        ;   XREF to: 004a34ae (CONDITIONAL_JUMP)  ; LAB_004a34ae
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a3499
    MOV dword ptr [EBP + 0x4c],EAX      ; 004a349d
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a34a0
    MOV dword ptr [EBP + 0x50],EAX      ; 004a34a4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004a34a7
    MOV dword ptr [EBP + 0x54],EAX      ; 004a34ab
    MOV EAX,[0x00603b28]                ; 004a34ae | g_CDemonSetPtr
        ;   Label: LAB_004a34ae
    ADD EAX,0x14d128                    ; 004a34b3
    PUSH EAX                            ; 004a34b8 | g_CDemonSetInstance.field1364264_0x14d128
    MOV ESI,dword ptr [ESP + 0x164]     ; 004a34b9
    PUSH ESI                            ; 004a34c0
    LEA ESI,[ESP + 0x74]                ; 004a34c1
    LEA EDI,[ESP + 0x44]                ; 004a34c5
    CALL core_actor.cpp_FUN_00408b40    ; 004a34c9
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x74]                ; 004a34ce
    ADD ESP,0x8                         ; 004a34d2
    MOVSD ES:EDI,ESI                    ; 004a34d5
    MOVSD ES:EDI,ESI                    ; 004a34d6
    MOVSD ES:EDI,ESI                    ; 004a34d7
    LEA EAX,[ESP + 0x3c]                ; 004a34d8
    LEA ESI,[EBP + 0x58]                ; 004a34dc
    CMP ESI,EAX                         ; 004a34df
    JZ 0x004a34f8                       ; 004a34e1
        ;   XREF to: 004a34f8 (CONDITIONAL_JUMP)  ; LAB_004a34f8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a34e3
    MOV dword ptr [EBP + 0x58],EAX      ; 004a34e7
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a34ea
    MOV dword ptr [EBP + 0x5c],EAX      ; 004a34ee
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a34f1
    MOV dword ptr [EBP + 0x60],EAX      ; 004a34f5
    MOV EDI,dword ptr [EBP + 0x74]      ; 004a34f8
        ;   Label: LAB_004a34f8
    TEST EDI,EDI                        ; 004a34fb
    JNZ 0x004a3542                      ; 004a34fd
        ;   XREF to: 004a3542 (CONDITIONAL_JUMP)  ; LAB_004a3542
    CMP dword ptr [EBP + 0x38],0x0      ; 004a34ff
    JZ 0x004a3542                       ; 004a3503
        ;   XREF to: 004a3542 (CONDITIONAL_JUMP)  ; LAB_004a3542
    MOV EDX,dword ptr [0x007e2cec]      ; 004a3505 | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 004a350b
    MOV ECX,dword ptr [ESP + 0x164]     ; 004a350c
    PUSH ECX                            ; 004a3513
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a3514
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004a3519
    TEST EAX,EAX                        ; 004a351c
    JZ 0x004a3542                       ; 004a351e
        ;   XREF to: 004a3542 (CONDITIONAL_JUMP)  ; LAB_004a3542
    PUSH EAX                            ; 004a3520
    MOV ESI,dword ptr [EAX + 0x154]     ; 004a3521
    CALL dword ptr [ESI + 0xe0]         ; 004a3527
    ADD ESP,0x4                         ; 004a352d
    TEST EAX,EAX                        ; 004a3530
    JZ 0x004a3542                       ; 004a3532
        ;   XREF to: 004a3542 (CONDITIONAL_JUMP)  ; LAB_004a3542
    MOV ESI,0xff                        ; 004a3534
    MOV dword ptr [EBP + 0x34],EDI      ; 004a3539
    MOV dword ptr [EBP + 0x30],ESI      ; 004a353c
    MOV dword ptr [EBP + 0x2c],ESI      ; 004a353f
    MOV EDX,dword ptr [0x01c5bc48]      ; 004a3542 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_004a3542
    PUSH EDX                            ; 004a3548
    MOV ECX,dword ptr [ESP + 0x164]     ; 004a3549
    PUSH ECX                            ; 004a3550
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004a3551
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 004a3556
    ADD ESP,0x8                         ; 004a3558
    TEST EAX,EAX                        ; 004a355b
    JZ 0x004a3577                       ; 004a355d
        ;   XREF to: 004a3577 (CONDITIONAL_JUMP)  ; LAB_004a3577
    PUSH ESI                            ; 004a355f
    MOV EAX,dword ptr [EAX + 0x154]     ; 004a3560
    CALL dword ptr [EAX + 0xe0]         ; 004a3566
    ADD ESP,0x4                         ; 004a356c
    TEST EAX,EAX                        ; 004a356f
    JZ 0x004a3647                       ; 004a3571
        ;   XREF to: 004a3647 (CONDITIONAL_JUMP)  ; LAB_004a3647
    LEA EDI,[ESP + 0x30]                ; 004a3577
        ;   Label: LAB_004a3577
    MOV ESI,EBX                         ; 004a357b
    MOVSD ES:EDI,ESI                    ; 004a357d
    MOVSD ES:EDI,ESI                    ; 004a357e
    MOVSD ES:EDI,ESI                    ; 004a357f
    FLD float ptr [ESP + 0x34]          ; 004a3580
    FMUL ST0                            ; 004a3584
    FLD float ptr [ESP + 0x30]          ; 004a3586
    FMUL ST0                            ; 004a358a
    FADDP                               ; 004a358c
    FLD float ptr [ESP + 0x38]          ; 004a358e
    FMUL ST0                            ; 004a3592
    FADDP                               ; 004a3594
    FSQRT                               ; 004a3596
    FLDZ                                ; 004a3598
    FXCH                                ; 004a359a
    FSTP float ptr [ESP + 0x154]        ; 004a359c
    FCOMP float ptr [ESP + 0x154]       ; 004a35a3
    FNSTSW AX                           ; 004a35aa
    SAHF                                ; 004a35ac
    JNC 0x004a3684                      ; 004a35ad
        ;   XREF to: 004a3684 (CONDITIONAL_JUMP)  ; LAB_004a3684
    FLD1                                ; 004a35b3
    FLD float ptr [ESP + 0x30]          ; 004a35b5
    FXCH                                ; 004a35b9
    FDIV float ptr [ESP + 0x154]        ; 004a35bb
    FXCH                                ; 004a35c2
    FMUL ST1                            ; 004a35c4
    FLD float ptr [ESP + 0x34]          ; 004a35c6
    FMUL ST2                            ; 004a35ca
    FLD float ptr [ESP + 0x38]          ; 004a35cc
    FMULP ST3                           ; 004a35d0
    FXCH                                ; 004a35d2
    FSTP float ptr [ESP + 0x30]         ; 004a35d4
    FSTP float ptr [ESP + 0x34]         ; 004a35d8
    FSTP float ptr [ESP + 0x38]         ; 004a35dc
    FLD float ptr [ESP + 0x34]          ; 004a35e0
        ;   Label: LAB_004a35e0
    FMUL float ptr [EBX + 0x4]          ; 004a35e4
    FLD float ptr [ESP + 0x30]          ; 004a35e7
    FMUL float ptr [EBX]                ; 004a35eb
    FADDP                               ; 004a35ed
    FLD float ptr [ESP + 0x38]          ; 004a35ef
    FMUL float ptr [EBX + 0x8]          ; 004a35f3
    FADDP                               ; 004a35f6
    FST double ptr [ESP + 0x8]          ; 004a35f8
    FCOMP double ptr [0x005c09f0]       ; 004a35fc | DAT_005c09f0
    FNSTSW AX                           ; 004a3602
    SAHF                                ; 004a3604
    JA 0x004a3697                       ; 004a3605
        ;   XREF to: 004a3697 (CONDITIONAL_JUMP)  ; LAB_004a3697
    MOV dword ptr [ESP + 0x15c],0x40490fdb ; 004a360b
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004a3616
        ;   Label: LAB_004a3616
    LEA ESI,[EBP + 0x20]                ; 004a361d
    MOV EDI,dword ptr [ESP + 0x160]     ; 004a3620
    PUSH ESI                            ; 004a3627
    MOV dword ptr [EBP + 0x64],EAX      ; 004a3628
    MOV EAX,dword ptr [ESP + 0x164]     ; 004a362b
    PUSH EDI                            ; 004a3632
    MOV EAX,dword ptr [EAX + 0x154]     ; 004a3633
    CALL dword ptr [EAX + 0xb4]         ; 004a3639
    ADD ESP,0x8                         ; 004a363f
    JMP 0x004a304d                      ; 004a3642
        ;   XREF to: 004a304d (UNCONDITIONAL_JUMP)  ; LAB_004a304d
    MOV EAX,[0x01d5ba14]                ; 004a3647 | DAT_01d5ba14
        ;   Label: LAB_004a3647
    MOV EBX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004a364c
    MOV dword ptr [EBX + 0x20b8c],ESI   ; 004a3653
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004a3659
    MOV EBX,dword ptr [ESP + 0x14c]     ; 004a3660
    CMP EBX,dword ptr [EAX + 0x20b8c]   ; 004a3667
    JZ 0x004a3309                       ; 004a366d
        ;   XREF to: 004a3309 (CONDITIONAL_JUMP)  ; LAB_004a3309
    MOV dword ptr [EAX + 0x20b90],0x0   ; 004a3673
    MOV ESP,EBP                         ; 004a367d
    POP EBP                             ; 004a367f
    POP EDI                             ; 004a3680
    POP ESI                             ; 004a3681
    POP EBX                             ; 004a3682
    RET                                 ; 004a3683
    XOR EDI,EDI                         ; 004a3684
        ;   Label: LAB_004a3684
    MOV dword ptr [ESP + 0x34],EDI      ; 004a3686
    MOV dword ptr [ESP + 0x30],EDI      ; 004a368a
    MOV dword ptr [ESP + 0x38],EDI      ; 004a368e
    JMP 0x004a35e0                      ; 004a3692
        ;   XREF to: 004a35e0 (UNCONDITIONAL_JUMP)  ; LAB_004a35e0
    FLD1                                ; 004a3697
        ;   Label: LAB_004a3697
    FCOMP double ptr [ESP + 0x8]        ; 004a3699
    FNSTSW AX                           ; 004a369d
    SAHF                                ; 004a369f
    JA 0x004a36b0                       ; 004a36a0
        ;   XREF to: 004a36b0 (CONDITIONAL_JUMP)  ; LAB_004a36b0
    XOR ECX,ECX                         ; 004a36a2
    MOV dword ptr [ESP + 0x15c],ECX     ; 004a36a4
    JMP 0x004a3616                      ; 004a36ab
        ;   XREF to: 004a3616 (UNCONDITIONAL_JUMP)  ; LAB_004a3616
    FLD double ptr [ESP + 0x8]          ; 004a36b0
        ;   Label: LAB_004a36b0
    CALL crt_math.c_acos_FUN_005a4b74   ; 004a36b4
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005a4b74()
    FSTP float ptr [ESP + 0x15c]        ; 004a36b9
    JMP 0x004a3616                      ; 004a36c0
        ;   XREF to: 004a3616 (UNCONDITIONAL_JUMP)  ; LAB_004a3616
    MOV EDI,dword ptr [ESP + 0x160]     ; 004a36c5
        ;   Label: LAB_004a36c5
    PUSH EDI                            ; 004a36cc
    MOV EAX,[0x00603b28]                ; 004a36cd | g_CDemonSetPtr
    PUSH EAX                            ; 004a36d2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004a36d3
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004a36d8
    JMP 0x004a2e48                      ; 004a36db
        ;   XREF to: 004a2e48 (UNCONDITIONAL_JUMP)  ; LAB_004a2e48

