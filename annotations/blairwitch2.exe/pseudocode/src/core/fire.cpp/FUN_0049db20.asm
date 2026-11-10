; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0049db20(CFireEffect *param_1,float *param_2,float *param_3,float param_4,float param_5,int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,float param_12,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,float param_21,float param_22,float param_23,float param_24,int param_25)
;
; Local Variables:
; undefined8       Stack[-0x170]:8  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x124]:1  local_124
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
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_emitter.cpp_CEmitter_renderOpaque_FUN_00487790 at 00487870
;   core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004e6f20 at 004e7197
;   core_weapon.cpp_CWeapon_renderAimBeam_FUN_0058a440 at 0058a5c5
;
; Referenced Globals:
;   undefined4 DAT_005d57e6
;   undefined4 DAT_005d57ea
;   undefined4 DAT_005d57f2
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_normal.x
;   undefined4 g_CDemonSetInstance.collision_normal.y
;   undefined4 g_CDemonSetInstance.collision_normal.z
;   undefined4 g_CDemonSetInstance.collision_impact_position.x
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408de0
;   core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0
;   core_setcolid.cpp_FUN_00535ee0
;   crt_math.c_acos_FUN_005b9924
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049db20
        ;   Label: core_fire.cpp_FUN_0049db20
    PUSH ESI                            ; 0049db21
    PUSH EDI                            ; 0049db22
    PUSH EBP                            ; 0049db23
    MOV EBP,ESP                         ; 0049db24
    SUB ESP,0x164                       ; 0049db26
    AND ESP,0xfffffff8                  ; 0049db2c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0049db2f
    MOV EDX,dword ptr [EBP + 0x74]      ; 0049db32
    CMP EDX,0x2                         ; 0049db35
    JG 0x0049e1e6                       ; 0049db38
        ;   XREF to: 0049e1e6 (CONDITIONAL_JUMP)  ; LAB_0049e1e6
    LEA EAX,[EDX + 0x1]                 ; 0049db3e
    MOV dword ptr [ESP + 0x144],EAX     ; 0049db41
    MOV ECX,dword ptr [EBP + 0x34]      ; 0049db48
        ;   Label: LAB_0049db48
    PUSH ECX                            ; 0049db4b
    MOV ESI,dword ptr [EBP + 0x30]      ; 0049db4c
    PUSH ESI                            ; 0049db4f
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0049db50
    PUSH EDI                            ; 0049db53
    MOV EAX,dword ptr [EBP + 0x28]      ; 0049db54
    PUSH EAX                            ; 0049db57
    MOV EDX,dword ptr [0x0061b5a8]      ; 0049db58 | g_CDemonSetPtr
    PUSH EDX                            ; 0049db5e | g_CDemonSetInstance
    LEA EDI,[ESP + 0x8c]                ; 0049db5f
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0 ; 0049db66
        ;   XREF to: 00537ef0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 0049db6b
    LEA EAX,[ESP + 0x114]               ; 0049db6e
    MOV ESI,dword ptr [EBP + 0x18]      ; 0049db75
    MOV ECX,dword ptr [0x0061b5a8]      ; 0049db78 | g_CDemonSetPtr
    PUSH EAX                            ; 0049db7e
    MOVSD ES:EDI,ESI                    ; 0049db7f
    MOVSD ES:EDI,ESI                    ; 0049db80
    MOVSD ES:EDI,ESI                    ; 0049db81
    LEA EAX,[ESP + 0x7c]                ; 0049db82
    FLD float ptr [ESP + 0x7c]          ; 0049db86
    FLD float ptr [ESP + 0x80]          ; 0049db8a
    FLD float ptr [ESP + 0x84]          ; 0049db91
    PUSH EAX                            ; 0049db98
    LEA EDI,[ESP + 0x11c]               ; 0049db99
    LEA ESI,[ESP + 0x68]                ; 0049dba0
    PUSH ECX                            ; 0049dba4 | g_CDemonSetInstance
    FXCH ST2                            ; 0049dba5
    FADD float ptr [EBX]                ; 0049dba7
    FXCH                                ; 0049dba9
    FADD float ptr [EBX + 0x4]          ; 0049dbab
    FXCH ST2                            ; 0049dbae
    FADD float ptr [EBX + 0x8]          ; 0049dbb0
    FXCH                                ; 0049dbb3
    FSTP float ptr [ESP + 0x6c]         ; 0049dbb5
    FXCH                                ; 0049dbb9
    FSTP float ptr [ESP + 0x70]         ; 0049dbbb
    FSTP float ptr [ESP + 0x74]         ; 0049dbbf
    MOVSD ES:EDI,ESI                    ; 0049dbc3
    MOVSD ES:EDI,ESI                    ; 0049dbc4
    MOVSD ES:EDI,ESI                    ; 0049dbc5
    CALL core_setcolid.cpp_FUN_00535ee0 ; 0049dbc6
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 0049dbcb
    FLD float ptr [ESP + 0x16c]         ; 0049dbd2
    ADD ESP,0xc                         ; 0049dbd9
    FLDZ                                ; 0049dbdc
    FXCH                                ; 0049dbde
    FST float ptr [ESP + 0x14]          ; 0049dbe0
    FSTP double ptr [ESP + 0x8]         ; 0049dbe4
    FCOMP double ptr [ESP + 0x8]        ; 0049dbe8
    FNSTSW AX                           ; 0049dbec
    SAHF                                ; 0049dbee
    JA 0x0049e1ed                       ; 0049dbef
        ;   XREF to: 0049e1ed (CONDITIONAL_JUMP)  ; LAB_0049e1ed
    FLD1                                ; 0049dbf5
    FCOMP double ptr [ESP + 0x8]        ; 0049dbf7
    FNSTSW AX                           ; 0049dbfb
    SAHF                                ; 0049dbfd
    JBE 0x0049e1ed                      ; 0049dbfe
        ;   XREF to: 0049e1ed (CONDITIONAL_JUMP)  ; LAB_0049e1ed
    FLD float ptr [ESP + 0x14]          ; 0049dc04
    FLD float ptr [EBX]                 ; 0049dc08
    FMUL ST1                            ; 0049dc0a
    FLD float ptr [EBX + 0x4]           ; 0049dc0c
    FMUL ST2                            ; 0049dc0f
    FLD float ptr [EBX + 0x8]           ; 0049dc11
    FMULP ST3                           ; 0049dc14
    LEA EDI,[ESP + 0xb4]                ; 0049dc16
    LEA ESI,[ESP + 0x30]                ; 0049dc1d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049dc21
    FXCH                                ; 0049dc24
    FSTP float ptr [ESP + 0x30]         ; 0049dc26
    FSTP float ptr [ESP + 0x34]         ; 0049dc2a
    FSTP float ptr [ESP + 0x38]         ; 0049dc2e
    MOVSD ES:EDI,ESI                    ; 0049dc32
    MOVSD ES:EDI,ESI                    ; 0049dc33
    MOVSD ES:EDI,ESI                    ; 0049dc34
    LEA EDX,[ESP + 0xcc]                ; 0049dc35
    FLD float ptr [EAX + 0x4]           ; 0049dc3c
    FLD float ptr [EAX + 0x8]           ; 0049dc3f
    FLD float ptr [EAX]                 ; 0049dc42
    LEA EDI,[ESP + 0xcc]                ; 0049dc44
    LEA ESI,[ESP + 0xc0]                ; 0049dc4b
    LEA EAX,[ESP + 0x114]               ; 0049dc52
    FADD float ptr [ESP + 0xb4]         ; 0049dc59
    FXCH ST2                            ; 0049dc60
    FADD float ptr [ESP + 0xb8]         ; 0049dc62
    FXCH                                ; 0049dc69
    FADD float ptr [ESP + 0xbc]         ; 0049dc6b
    FXCH ST2                            ; 0049dc72
    FSTP float ptr [ESP + 0xc0]         ; 0049dc74
    FSTP float ptr [ESP + 0xc4]         ; 0049dc7b
    FSTP float ptr [ESP + 0xc8]         ; 0049dc82
    MOVSD ES:EDI,ESI                    ; 0049dc89
    MOVSD ES:EDI,ESI                    ; 0049dc8a
    MOVSD ES:EDI,ESI                    ; 0049dc8b
    CMP EAX,EDX                         ; 0049dc8c
    JZ 0x0049dcba                       ; 0049dc8e
        ;   XREF to: 0049dcba (CONDITIONAL_JUMP)  ; LAB_0049dcba
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0049dc90
    MOV dword ptr [ESP + 0x114],EAX     ; 0049dc97
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0049dc9e
    MOV dword ptr [ESP + 0x118],EAX     ; 0049dca5
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0049dcac
    MOV dword ptr [ESP + 0x11c],EAX     ; 0049dcb3
    MOV EDX,dword ptr [0x0061b5a8]      ; 0049dcba | g_CDemonSetPtr
        ;   Label: LAB_0049dcba
    LEA EAX,[ESP + 0x120]               ; 0049dcc0
    ADD EDX,0x14d128                    ; 0049dcc7
    CMP EAX,EDX                         ; 0049dccd
    JZ 0x0049dcee                       ; 0049dccf
        ;   XREF to: 0049dcee (CONDITIONAL_JUMP)  ; LAB_0049dcee
    MOV EAX,dword ptr [EDX]             ; 0049dcd1 | g_CDemonSetInstance.collision_normal.x
    MOV dword ptr [ESP + 0x120],EAX     ; 0049dcd3
    MOV EAX,dword ptr [EDX + 0x4]       ; 0049dcda | g_CDemonSetInstance.collision_normal.y
    MOV dword ptr [ESP + 0x124],EAX     ; 0049dcdd
    MOV EAX,dword ptr [EDX + 0x8]       ; 0049dce4 | g_CDemonSetInstance.collision_normal.z
    MOV dword ptr [ESP + 0x128],EAX     ; 0049dce7
    MOV EAX,[0x0061b5a8]                ; 0049dcee | g_CDemonSetPtr
        ;   Label: LAB_0049dcee
    MOV EAX,dword ptr [EAX + 0x14d144]  ; 0049dcf3 | g_CDemonSetInstance.collision_actor
    XOR EDX,EDX                         ; 0049dcf9
    MOV dword ptr [ESP + 0x158],EAX     ; 0049dcfb
    MOV dword ptr [EBP + 0x68],EDX      ; 0049dd02
    MOV dword ptr [EBP + 0x6c],EDX      ; 0049dd05
    MOV dword ptr [EBP + 0x70],EDX      ; 0049dd08
    TEST EAX,EAX                        ; 0049dd0b
    JZ 0x0049df3a                       ; 0049dd0d
        ;   XREF to: 0049df3a (CONDITIONAL_JUMP)  ; LAB_0049df3a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0049dd13
    PUSH EAX                            ; 0049dd16
    MOV EDX,dword ptr [ESP + 0x15c]     ; 0049dd17
    PUSH EDX                            ; 0049dd1e
    LEA ESI,[ESP + 0x104]               ; 0049dd1f
    LEA EDI,[ESP + 0x98]                ; 0049dd26
    CALL core_actor.cpp_FUN_00408de0    ; 0049dd2d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x104]               ; 0049dd32
    LEA EAX,[ESP + 0x98]                ; 0049dd39
    ADD ESP,0x8                         ; 0049dd40
    LEA EDX,[EBP + 0x40]                ; 0049dd43
    MOVSD ES:EDI,ESI                    ; 0049dd46
    MOVSD ES:EDI,ESI                    ; 0049dd47
    MOVSD ES:EDI,ESI                    ; 0049dd48
    CMP EDX,EAX                         ; 0049dd49
    JZ 0x0049dd6b                       ; 0049dd4b
        ;   XREF to: 0049dd6b (CONDITIONAL_JUMP)  ; LAB_0049dd6b
    MOV EAX,dword ptr [ESP + 0x90]      ; 0049dd4d
    MOV dword ptr [EBP + 0x40],EAX      ; 0049dd54
    MOV EAX,dword ptr [ESP + 0x94]      ; 0049dd57
    MOV dword ptr [EBP + 0x44],EAX      ; 0049dd5e
    MOV EAX,dword ptr [ESP + 0x98]      ; 0049dd61
    MOV dword ptr [EBP + 0x48],EAX      ; 0049dd68
    MOV EAX,[0x0061b5a8]                ; 0049dd6b | g_CDemonSetPtr
        ;   Label: LAB_0049dd6b
    ADD EAX,0x14d138                    ; 0049dd70
    PUSH EAX                            ; 0049dd75 | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0049dd76
    PUSH ECX                            ; 0049dd7d
    LEA ESI,[ESP + 0x5c]                ; 0049dd7e
    LEA EDI,[ESP + 0x2c]                ; 0049dd82
    CALL core_actor.cpp_FUN_00408de0    ; 0049dd86
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x5c]                ; 0049dd8b
    LEA EDX,[ESP + 0x2c]                ; 0049dd8f
    ADD ESP,0x8                         ; 0049dd93
    LEA EAX,[EBP + 0x4c]                ; 0049dd96
    MOVSD ES:EDI,ESI                    ; 0049dd99
    MOVSD ES:EDI,ESI                    ; 0049dd9a
    MOVSD ES:EDI,ESI                    ; 0049dd9b
    CMP EAX,EDX                         ; 0049dd9c
    JZ 0x0049ddb5                       ; 0049dd9e
        ;   XREF to: 0049ddb5 (CONDITIONAL_JUMP)  ; LAB_0049ddb5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049dda0
    MOV dword ptr [EBP + 0x4c],EAX      ; 0049dda4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049dda7
    MOV dword ptr [EBP + 0x50],EAX      ; 0049ddab
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049ddae
    MOV dword ptr [EBP + 0x54],EAX      ; 0049ddb2
    MOV EAX,[0x0061b5a8]                ; 0049ddb5 | g_CDemonSetPtr
        ;   Label: LAB_0049ddb5
    ADD EAX,0x14d128                    ; 0049ddba
    PUSH EAX                            ; 0049ddbf | g_CDemonSetInstance.collision_normal.x
    MOV ESI,dword ptr [ESP + 0x15c]     ; 0049ddc0
    PUSH ESI                            ; 0049ddc7
    LEA ESI,[ESP + 0x50]                ; 0049ddc8
    LEA EDI,[ESP + 0x74]                ; 0049ddcc
    CALL core_actor.cpp_FUN_00408d30    ; 0049ddd0
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x50]                ; 0049ddd5
    LEA EAX,[ESP + 0x74]                ; 0049ddd9
    ADD ESP,0x8                         ; 0049dddd
    LEA EDX,[EBP + 0x58]                ; 0049dde0
    MOVSD ES:EDI,ESI                    ; 0049dde3
    MOVSD ES:EDI,ESI                    ; 0049dde4
    MOVSD ES:EDI,ESI                    ; 0049dde5
    CMP EDX,EAX                         ; 0049dde6
    JZ 0x0049ddff                       ; 0049dde8
        ;   XREF to: 0049ddff (CONDITIONAL_JUMP)  ; LAB_0049ddff
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0049ddea
    MOV dword ptr [EBP + 0x58],EAX      ; 0049ddee
    MOV EAX,dword ptr [ESP + 0x70]      ; 0049ddf1
    MOV dword ptr [EBP + 0x5c],EAX      ; 0049ddf5
    MOV EAX,dword ptr [ESP + 0x74]      ; 0049ddf8
    MOV dword ptr [EBP + 0x60],EAX      ; 0049ddfc
    MOV EDI,dword ptr [EBP + 0x74]      ; 0049ddff
        ;   Label: LAB_0049ddff
    TEST EDI,EDI                        ; 0049de02
    JNZ 0x0049de49                      ; 0049de04
        ;   XREF to: 0049de49 (CONDITIONAL_JUMP)  ; LAB_0049de49
    CMP dword ptr [EBP + 0x38],0x0      ; 0049de06
    JZ 0x0049de49                       ; 0049de0a
        ;   XREF to: 0049de49 (CONDITIONAL_JUMP)  ; LAB_0049de49
    MOV EDX,dword ptr [0x007bdc94]      ; 0049de0c | g_CCharacterClassInfo.name_hash
    PUSH EDX                            ; 0049de12
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0049de13
    PUSH ECX                            ; 0049de1a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0049de1b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0049de20
    TEST EAX,EAX                        ; 0049de23
    JZ 0x0049de49                       ; 0049de25
        ;   XREF to: 0049de49 (CONDITIONAL_JUMP)  ; LAB_0049de49
    PUSH EAX                            ; 0049de27
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0049de28
    CALL dword ptr [EDX + 0xe8]         ; 0049de2e
    ADD ESP,0x4                         ; 0049de34
    TEST EAX,EAX                        ; 0049de37
    JZ 0x0049de49                       ; 0049de39
        ;   XREF to: 0049de49 (CONDITIONAL_JUMP)  ; LAB_0049de49
    MOV ESI,0xff                        ; 0049de3b
    MOV dword ptr [EBP + 0x34],EDI      ; 0049de40
    MOV dword ptr [EBP + 0x30],ESI      ; 0049de43
    MOV dword ptr [EBP + 0x2c],ESI      ; 0049de46
    LEA EDI,[ESP + 0x84]                ; 0049de49
        ;   Label: LAB_0049de49
    MOV ESI,EBX                         ; 0049de50
    MOVSD ES:EDI,ESI                    ; 0049de52
    MOVSD ES:EDI,ESI                    ; 0049de53
    MOVSD ES:EDI,ESI                    ; 0049de54
    FLD float ptr [ESP + 0x88]          ; 0049de55
    FMUL ST0                            ; 0049de5c
    FLD float ptr [ESP + 0x84]          ; 0049de5e
    FMUL ST0                            ; 0049de65
    FADDP                               ; 0049de67
    FLD float ptr [ESP + 0x8c]          ; 0049de69
    FMUL ST0                            ; 0049de70
    FADDP                               ; 0049de72
    FSQRT                               ; 0049de74
    FLDZ                                ; 0049de76
    FXCH                                ; 0049de78
    FSTP float ptr [ESP + 0x148]        ; 0049de7a
    FCOMP float ptr [ESP + 0x148]       ; 0049de81
    FNSTSW AX                           ; 0049de88
    SAHF                                ; 0049de8a
    JNC 0x0049e2f3                      ; 0049de8b
        ;   XREF to: 0049e2f3 (CONDITIONAL_JUMP)  ; LAB_0049e2f3
    FLD1                                ; 0049de91
    FLD float ptr [ESP + 0x84]          ; 0049de93
    FXCH                                ; 0049de9a
    FDIV float ptr [ESP + 0x148]        ; 0049de9c
    FXCH                                ; 0049dea3
    FMUL ST1                            ; 0049dea5
    FLD float ptr [ESP + 0x88]          ; 0049dea7
    FMUL ST2                            ; 0049deae
    FLD float ptr [ESP + 0x8c]          ; 0049deb0
    FMULP ST3                           ; 0049deb7
    FXCH                                ; 0049deb9
    FSTP float ptr [ESP + 0x84]         ; 0049debb
    FSTP float ptr [ESP + 0x88]         ; 0049dec2
    FSTP float ptr [ESP + 0x8c]         ; 0049dec9
    FLD float ptr [ESP + 0x88]          ; 0049ded0
        ;   Label: LAB_0049ded0
    FMUL float ptr [EBX + 0x4]          ; 0049ded7
    FLD float ptr [ESP + 0x84]          ; 0049deda
    FMUL float ptr [EBX]                ; 0049dee1
    FADDP                               ; 0049dee3
    FLD float ptr [ESP + 0x8c]          ; 0049dee5
    FMUL float ptr [EBX + 0x8]          ; 0049deec
    FADDP                               ; 0049deef
    FST double ptr [ESP]                ; 0049def1
    FCOMP double ptr [0x005d57f2]       ; 0049def4 | DAT_005d57f2
    FNSTSW AX                           ; 0049defa
    SAHF                                ; 0049defc
    JA 0x0049e30f                       ; 0049defd
        ;   XREF to: 0049e30f (CONDITIONAL_JUMP)  ; LAB_0049e30f
    MOV dword ptr [ESP + 0x154],0x40490fdb ; 0049df03
    MOV EAX,dword ptr [ESP + 0x154]     ; 0049df0e
        ;   Label: LAB_0049df0e
    MOV dword ptr [EBP + 0x64],EAX      ; 0049df15
    LEA EAX,[EBP + 0x20]                ; 0049df18
    MOV EDX,dword ptr [ESP + 0x158]     ; 0049df1b
    PUSH EAX                            ; 0049df22
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0049df23
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0049df2a
    PUSH ECX                            ; 0049df30
    CALL dword ptr [EDX + 0xbc]         ; 0049df31
    ADD ESP,0x8                         ; 0049df37
    XOR ESI,ESI                         ; 0049df3a
        ;   Label: LAB_0049df3a
    MOV EDI,dword ptr [EBP + 0x3c]      ; 0049df3c
    MOV dword ptr [ESP + 0x10],ESI      ; 0049df3f
    TEST EDI,EDI                        ; 0049df43
    JZ 0x0049df4e                       ; 0049df45
        ;   XREF to: 0049df4e (CONDITIONAL_JUMP)  ; LAB_0049df4e
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049df47
    MOV dword ptr [ESP + 0x10],EAX      ; 0049df4a
    FLD float ptr [EBP + 0x70]          ; 0049df4e
        ;   Label: LAB_0049df4e
    FLDZ                                ; 0049df51
    FCOMPP                              ; 0049df53
    FNSTSW AX                           ; 0049df55
    SAHF                                ; 0049df57
    JNC 0x0049e10d                      ; 0049df58
        ;   XREF to: 0049e10d (CONDITIONAL_JUMP)  ; LAB_0049e10d
    FLD float ptr [ESP + 0x124]         ; 0049df5e
    FMUL float ptr [EBX + 0x4]          ; 0049df65
    FLD float ptr [ESP + 0x120]         ; 0049df68
    FMUL float ptr [EBX]                ; 0049df6f
    FADDP                               ; 0049df71
    FLD float ptr [ESP + 0x128]         ; 0049df73
    FMUL float ptr [EBX + 0x8]          ; 0049df7a
    FADDP                               ; 0049df7d
    FMUL float ptr [0x005d57e6]         ; 0049df7f | DAT_005d57e6
    FLD float ptr [ESP + 0x120]         ; 0049df85
    FXCH                                ; 0049df8c
    FSTP float ptr [ESP + 0x150]        ; 0049df8e
    FMUL float ptr [ESP + 0x150]        ; 0049df95
    FLD float ptr [ESP + 0x124]         ; 0049df9c
    FMUL float ptr [ESP + 0x150]        ; 0049dfa3
    FLD float ptr [ESP + 0x128]         ; 0049dfaa
    FMUL float ptr [ESP + 0x150]        ; 0049dfb1
    LEA EDI,[ESP + 0xf0]                ; 0049dfb8
    LEA ESI,[ESP + 0x9c]                ; 0049dfbf
    FXCH ST2                            ; 0049dfc6
    FSTP float ptr [ESP + 0x9c]         ; 0049dfc8
    FSTP float ptr [ESP + 0xa0]         ; 0049dfcf
    FSTP float ptr [ESP + 0xa4]         ; 0049dfd6
    MOVSD ES:EDI,ESI                    ; 0049dfdd
    MOVSD ES:EDI,ESI                    ; 0049dfde
    MOVSD ES:EDI,ESI                    ; 0049dfdf
    LEA EAX,[ESP + 0xd8]                ; 0049dfe0
    FLD float ptr [ESP + 0xf0]          ; 0049dfe7
    FLD float ptr [ESP + 0xf4]          ; 0049dfee
    FLD float ptr [ESP + 0xf8]          ; 0049dff5
    LEA EDI,[ESP + 0x18]                ; 0049dffc
    LEA ESI,[ESP + 0x12c]               ; 0049e000
    FXCH ST2                            ; 0049e007
    FSUB float ptr [EBX]                ; 0049e009
    FXCH                                ; 0049e00b
    FSUB float ptr [EBX + 0x4]          ; 0049e00d
    FXCH ST2                            ; 0049e010
    FSUB float ptr [EBX + 0x8]          ; 0049e012
    FXCH                                ; 0049e015
    FSTP float ptr [ESP + 0x12c]        ; 0049e017
    FXCH                                ; 0049e01e
    FSTP float ptr [ESP + 0x130]        ; 0049e020
    FSTP float ptr [ESP + 0x134]        ; 0049e027
    MOVSD ES:EDI,ESI                    ; 0049e02e
    MOVSD ES:EDI,ESI                    ; 0049e02f
    MOVSD ES:EDI,ESI                    ; 0049e030
    LEA EDX,[ESP + 0x18]                ; 0049e031
    FLD float ptr [ESP + 0x18]          ; 0049e035
    FLD float ptr [ESP + 0x1c]          ; 0049e039
    FLD float ptr [ESP + 0x20]          ; 0049e03d
    LEA EDI,[ESP + 0xd8]                ; 0049e041
    LEA ESI,[ESP + 0x108]               ; 0049e048
    FXCH ST2                            ; 0049e04f
    FCHS                                ; 0049e051
    FXCH                                ; 0049e053
    FCHS                                ; 0049e055
    FXCH ST2                            ; 0049e057
    FCHS                                ; 0049e059
    FXCH                                ; 0049e05b
    FSTP float ptr [ESP + 0x108]        ; 0049e05d
    FXCH                                ; 0049e064
    FSTP float ptr [ESP + 0x10c]        ; 0049e066
    FSTP float ptr [ESP + 0x110]        ; 0049e06d
    MOVSD ES:EDI,ESI                    ; 0049e074
    MOVSD ES:EDI,ESI                    ; 0049e075
    MOVSD ES:EDI,ESI                    ; 0049e076
    CMP EDX,EAX                         ; 0049e077
    JZ 0x0049e09c                       ; 0049e079
        ;   XREF to: 0049e09c (CONDITIONAL_JUMP)  ; LAB_0049e09c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0049e07b
    MOV dword ptr [ESP + 0x18],EAX      ; 0049e082
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0049e086
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049e08d
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0049e091
    MOV dword ptr [ESP + 0x20],EAX      ; 0049e098
    MOV EAX,[0x0061b5a8]                ; 0049e09c | g_CDemonSetPtr
        ;   Label: LAB_0049e09c
    PUSH EAX                            ; 0049e0a1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90 ; 0049e0a2
        ;   XREF to: 00537a90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049e0a7
    MOV EDX,dword ptr [0x0061b5a8]      ; 0049e0aa | g_CDemonSetPtr
    PUSH EDX                            ; 0049e0b0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0049e0b1
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049e0b6
    MOV ECX,dword ptr [ESP + 0x144]     ; 0049e0b9
    PUSH ECX                            ; 0049e0c0
    SUB ESP,0x54                        ; 0049e0c1
    LEA ESI,[EBP + 0x20]                ; 0049e0c4
    MOV EDI,ESP                         ; 0049e0c7
    LEA EAX,[ESP + 0x70]                ; 0049e0c9
    MOV ECX,0x15                        ; 0049e0cd
    PUSH EAX                            ; 0049e0d2
    LEA EAX,[ESP + 0x170]               ; 0049e0d3
    MOVSD.REP ES:EDI,ESI                ; 0049e0da
    PUSH EAX                            ; 0049e0dc
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049e0dd
    PUSH ESI                            ; 0049e0e0
    CALL core_fire.cpp_FUN_0049db20     ; 0049e0e1
        ;   XREF to: 0049db20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049db20()
    ADD ESP,0x64                        ; 0049e0e6
    MOV EDI,dword ptr [0x0061b5a8]      ; 0049e0e9 | g_CDemonSetPtr
    PUSH EDI                            ; 0049e0ef | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40 ; 0049e0f0
        ;   XREF to: 00537c40 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049e0f5
    FLD float ptr [EBP + 0x70]          ; 0049e0f8
    FLD1                                ; 0049e0fb
    FSUBRP                              ; 0049e0fd
    FMUL double ptr [0x005d57ea]        ; 0049e0ff | DAT_005d57ea
    FMUL float ptr [ESP + 0x10]         ; 0049e105
    FSTP float ptr [ESP + 0x10]         ; 0049e109
    FLD float ptr [EBP + 0x68]          ; 0049e10d
        ;   Label: LAB_0049e10d
    FLDZ                                ; 0049e110
    FCOMPP                              ; 0049e112
    FNSTSW AX                           ; 0049e114
    SAHF                                ; 0049e116
    JNC 0x0049e1ac                      ; 0049e117
        ;   XREF to: 0049e1ac (CONDITIONAL_JUMP)  ; LAB_0049e1ac
    CMP dword ptr [EBP + 0x68],0x3f800000 ; 0049e11d
    JNZ 0x0049e135                      ; 0049e124
        ;   XREF to: 0049e135 (CONDITIONAL_JUMP)  ; LAB_0049e135
    FLD float ptr [EBP + 0x6c]          ; 0049e126
    FCOMP float ptr [EBP + 0x64]        ; 0049e129
    FNSTSW AX                           ; 0049e12c
    SAHF                                ; 0049e12e
    JZ 0x0049e33b                       ; 0049e12f
        ;   XREF to: 0049e33b (CONDITIONAL_JUMP)  ; LAB_0049e33b
    LEA EDI,[ESP + 0xe4]                ; 0049e135
        ;   Label: LAB_0049e135
    MOV EDX,dword ptr [0x0061b5a8]      ; 0049e13c | g_CDemonSetPtr
    MOV ESI,EBX                         ; 0049e142
    PUSH EDX                            ; 0049e144 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 0049e145
    MOVSD ES:EDI,ESI                    ; 0049e146
    MOVSD ES:EDI,ESI                    ; 0049e147
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 0049e148
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0049e14d
    MOV ECX,dword ptr [ESP + 0x158]     ; 0049e150
    PUSH ECX                            ; 0049e157
    MOV EBX,dword ptr [0x0061b5a8]      ; 0049e158 | g_CDemonSetPtr
    PUSH EBX                            ; 0049e15e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0049e15f
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049e164
    MOV EAX,dword ptr [EBP + 0x74]      ; 0049e167
    INC EAX                             ; 0049e16a
    PUSH EAX                            ; 0049e16b
    SUB ESP,0x54                        ; 0049e16c
    LEA ESI,[EBP + 0x20]                ; 0049e16f
    MOV EDI,ESP                         ; 0049e172
    LEA EAX,[ESP + 0x13c]               ; 0049e174
    MOV ECX,0x15                        ; 0049e17b
    PUSH EAX                            ; 0049e180
    LEA EAX,[ESP + 0x170]               ; 0049e181
    MOVSD.REP ES:EDI,ESI                ; 0049e188
    PUSH EAX                            ; 0049e18a
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049e18b
    PUSH ESI                            ; 0049e18e
    CALL core_fire.cpp_FUN_0049db20     ; 0049e18f
        ;   XREF to: 0049db20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049db20()
    ADD ESP,0x64                        ; 0049e194
    FLD float ptr [EBP + 0x68]          ; 0049e197
    FLD1                                ; 0049e19a
    FSUBRP                              ; 0049e19c
    FMUL double ptr [0x005d57ea]        ; 0049e19e | DAT_005d57ea
    FMUL float ptr [ESP + 0x10]         ; 0049e1a4
    FSTP float ptr [ESP + 0x10]         ; 0049e1a8
    MOV EDI,dword ptr [EBP + 0x34]      ; 0049e1ac
        ;   Label: LAB_0049e1ac
    PUSH dword ptr [EBP + 0x24]         ; 0049e1af
    PUSH EDI                            ; 0049e1b2
    MOV EAX,dword ptr [EBP + 0x30]      ; 0049e1b3
    PUSH EAX                            ; 0049e1b6
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0049e1b7
    PUSH EDX                            ; 0049e1ba
    LEA EAX,[ESP + 0x130]               ; 0049e1bb
    PUSH EAX                            ; 0049e1c2
    PUSH dword ptr [ESP + 0x24]         ; 0049e1c3
    LEA EAX,[ESP + 0x12c]               ; 0049e1c7
    PUSH dword ptr [EBP + 0x20]         ; 0049e1ce
    PUSH EAX                            ; 0049e1d1
    LEA EAX,[ESP + 0x98]                ; 0049e1d2
    PUSH EAX                            ; 0049e1d9
    MOV ECX,dword ptr [EBP + 0x14]      ; 0049e1da
    PUSH ECX                            ; 0049e1dd
    CALL core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770 ; 0049e1de
        ;   XREF to: 0049d770 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserSegment_FUN_0049d770(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x28                        ; 0049e1e3
    MOV ESP,EBP                         ; 0049e1e6
        ;   Label: LAB_0049e1e6
    POP EBP                             ; 0049e1e8
    POP EDI                             ; 0049e1e9
    POP ESI                             ; 0049e1ea
    POP EBX                             ; 0049e1eb
    RET                                 ; 0049e1ec
    FLD float ptr [EBX]                 ; 0049e1ed
        ;   Label: LAB_0049e1ed
    FLD float ptr [EBX + 0x4]           ; 0049e1ef
    FLD float ptr [EBX + 0x8]           ; 0049e1f2
    LEA EDI,[ESP + 0xa8]                ; 0049e1f5
    LEA ESI,[ESP + 0x3c]                ; 0049e1fc
    LEA EAX,[ESP + 0xa8]                ; 0049e200
    LEA EDX,[ESP + 0x120]               ; 0049e207
    FXCH ST2                            ; 0049e20e
    FCHS                                ; 0049e210
    FXCH                                ; 0049e212
    FCHS                                ; 0049e214
    FXCH ST2                            ; 0049e216
    FCHS                                ; 0049e218
    FXCH ST2                            ; 0049e21a
    FSTP float ptr [ESP + 0x40]         ; 0049e21c
    FXCH                                ; 0049e220
    FSTP float ptr [ESP + 0x44]         ; 0049e222
    FSTP float ptr [ESP + 0x3c]         ; 0049e226
    MOVSD ES:EDI,ESI                    ; 0049e22a
    MOVSD ES:EDI,ESI                    ; 0049e22b
    MOVSD ES:EDI,ESI                    ; 0049e22c
    CMP EDX,EAX                         ; 0049e22d
    JZ 0x0049e25b                       ; 0049e22f
        ;   XREF to: 0049e25b (CONDITIONAL_JUMP)  ; LAB_0049e25b
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0049e231
    MOV dword ptr [ESP + 0x120],EAX     ; 0049e238
    MOV EAX,dword ptr [ESP + 0xac]      ; 0049e23f
    MOV dword ptr [ESP + 0x124],EAX     ; 0049e246
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0049e24d
    MOV dword ptr [ESP + 0x128],EAX     ; 0049e254
    FLD float ptr [ESP + 0x124]         ; 0049e25b
        ;   Label: LAB_0049e25b
    FMUL ST0                            ; 0049e262
    FLD float ptr [ESP + 0x120]         ; 0049e264
    FMUL ST0                            ; 0049e26b
    FADDP                               ; 0049e26d
    FLD float ptr [ESP + 0x128]         ; 0049e26f
    FMUL ST0                            ; 0049e276
    FADDP                               ; 0049e278
    FSQRT                               ; 0049e27a
    FLDZ                                ; 0049e27c
    FXCH                                ; 0049e27e
    FSTP float ptr [ESP + 0x14c]        ; 0049e280
    FCOMP float ptr [ESP + 0x14c]       ; 0049e287
    FNSTSW AX                           ; 0049e28e
    SAHF                                ; 0049e290
    JNC 0x0049e2d7                      ; 0049e291
        ;   XREF to: 0049e2d7 (CONDITIONAL_JUMP)  ; LAB_0049e2d7
    FLD1                                ; 0049e293
    FLD float ptr [ESP + 0x120]         ; 0049e295
    FXCH                                ; 0049e29c
    FDIV float ptr [ESP + 0x14c]        ; 0049e29e
    FXCH                                ; 0049e2a5
    FMUL ST1                            ; 0049e2a7
    FLD float ptr [ESP + 0x124]         ; 0049e2a9
    FMUL ST2                            ; 0049e2b0
    FLD float ptr [ESP + 0x128]         ; 0049e2b2
    FMULP ST3                           ; 0049e2b9
    FXCH                                ; 0049e2bb
    FSTP float ptr [ESP + 0x120]        ; 0049e2bd
    FSTP float ptr [ESP + 0x124]        ; 0049e2c4
    FSTP float ptr [ESP + 0x128]        ; 0049e2cb
    JMP 0x0049dcee                      ; 0049e2d2
        ;   XREF to: 0049dcee (UNCONDITIONAL_JUMP)  ; LAB_0049dcee
    XOR ESI,ESI                         ; 0049e2d7
        ;   Label: LAB_0049e2d7
    MOV dword ptr [ESP + 0x124],ESI     ; 0049e2d9
    MOV dword ptr [ESP + 0x120],ESI     ; 0049e2e0
    MOV dword ptr [ESP + 0x128],ESI     ; 0049e2e7
    JMP 0x0049dcee                      ; 0049e2ee
        ;   XREF to: 0049dcee (UNCONDITIONAL_JUMP)  ; LAB_0049dcee
    XOR EDX,EDX                         ; 0049e2f3
        ;   Label: LAB_0049e2f3
    MOV dword ptr [ESP + 0x88],EDX      ; 0049e2f5
    MOV dword ptr [ESP + 0x84],EDX      ; 0049e2fc
    MOV dword ptr [ESP + 0x8c],EDX      ; 0049e303
    JMP 0x0049ded0                      ; 0049e30a
        ;   XREF to: 0049ded0 (UNCONDITIONAL_JUMP)  ; LAB_0049ded0
    FLD1                                ; 0049e30f
        ;   Label: LAB_0049e30f
    FCOMP double ptr [ESP]              ; 0049e311
    FNSTSW AX                           ; 0049e314
    SAHF                                ; 0049e316
    JA 0x0049e327                       ; 0049e317
        ;   XREF to: 0049e327 (CONDITIONAL_JUMP)  ; LAB_0049e327
    XOR EDI,EDI                         ; 0049e319
    MOV dword ptr [ESP + 0x154],EDI     ; 0049e31b
    JMP 0x0049df0e                      ; 0049e322
        ;   XREF to: 0049df0e (UNCONDITIONAL_JUMP)  ; LAB_0049df0e
    FLD double ptr [ESP]                ; 0049e327
        ;   Label: LAB_0049e327
    CALL crt_math.c_acos_FUN_005b9924   ; 0049e32a
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP + 0x154]        ; 0049e32f
    JMP 0x0049df0e                      ; 0049e336
        ;   XREF to: 0049df0e (UNCONDITIONAL_JUMP)  ; LAB_0049df0e
    MOV ESI,dword ptr [ESP + 0x158]     ; 0049e33b
        ;   Label: LAB_0049e33b
    PUSH ESI                            ; 0049e342
    MOV EDI,dword ptr [0x0061b5a8]      ; 0049e343 | g_CDemonSetPtr
    PUSH EDI                            ; 0049e349 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0049e34a
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0049e34f
    JMP 0x0049db48                      ; 0049e352
        ;   XREF to: 0049db48 (UNCONDITIONAL_JUMP)  ; LAB_0049db48

