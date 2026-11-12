; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_lightgun_cpp_CLightGun_fire_FUN_004e2e70(CLightGun *this_ptr)
;
; Parameters:
; CLightGun *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CDraculaBride_005dc005
;   TerminatedCString s_CBatman_005dc013
;   TerminatedCString s_CBatCreature_005dc01b
;   TerminatedCString s_CBride_005dc028
;   TerminatedCString s_CShadow_005dc02f
;   TerminatedCString s_CGhoul_005dc037
;   TerminatedCString s_CTVBat_005dc03e
;   TerminatedCString s_CBatCreature_005dc045
;   TerminatedCString s_CWerewolf_005dc052
;   TerminatedCString s_CSvetlana_005dc05c
;   TerminatedCString s_CTrigger_CGlass_005dc072
;   undefined4 s_s_in_volume_005dc089+1
;   TerminatedCString s_cre_fire_wav_005dc098
;   undefined4 DAT_005dc0a6
;   undefined4 DAT_005dc0aa
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CVector3f_ctor_FUN_0040d340
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720
;   core_lightgun.cpp_FUN_004e2bf0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0
;   core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_00537df0
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2e70
        ;   Label: core_lightgun.cpp_CLightGun_fire_FUN_004e2e70
    PUSH ESI                            ; 004e2e71
    PUSH EDI                            ; 004e2e72
    PUSH EBP                            ; 004e2e73
    MOV EBP,ESP                         ; 004e2e74
    SUB ESP,0x204                       ; 004e2e76
    AND ESP,0xfffffff8                  ; 004e2e7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e2e7f
    FLD float ptr [EAX + 0x6dc]         ; 004e2e82
    FCOMP float ptr [0x005f95d0]        ; 004e2e88 | DAT_005f95d0
    FNSTSW AX                           ; 004e2e8e
    SAHF                                ; 004e2e90
    JNC 0x004e2e9c                      ; 004e2e91
        ;   XREF to: 004e2e9c (CONDITIONAL_JUMP)  ; LAB_004e2e9c
    XOR EAX,EAX                         ; 004e2e93
    MOV ESP,EBP                         ; 004e2e95
    POP EBP                             ; 004e2e97
    POP EDI                             ; 004e2e98
    POP ESI                             ; 004e2e99
    POP EBX                             ; 004e2e9a
    RET                                 ; 004e2e9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e2e9c
        ;   Label: LAB_004e2e9c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e2e9f
    FLD float ptr [EAX + 0x444]         ; 004e2ea2
    MOV dword ptr [EAX + 0x6dc],0x0     ; 004e2ea8
    PUSH EDX                            ; 004e2eb2
    FSTP float ptr [EAX + 0x6f0]        ; 004e2eb3
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e2eb9
    LEA ESI,[ESP + 0xf4]                ; 004e2ebf
    LEA EDI,[ESP + 0x184]               ; 004e2ec6
    CALL dword ptr [EAX + 0xe8]         ; 004e2ecd
    LEA ESI,[ESP + 0xf4]                ; 004e2ed3
    ADD ESP,0x4                         ; 004e2eda
    LEA EAX,[ESP + 0x180]               ; 004e2edd
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e2ee4
    MOVSD ES:EDI,ESI                    ; 004e2ee7
    MOVSD ES:EDI,ESI                    ; 004e2ee8
    MOVSD ES:EDI,ESI                    ; 004e2ee9
    PUSH EAX                            ; 004e2eea
    FLD float ptr [ESP + 0x18c]         ; 004e2eeb
    LEA ESI,[ESP + 0x100]               ; 004e2ef2
    LEA EDI,[ESP + 0x130]               ; 004e2ef9
    FADD float ptr [0x005dc0a6]         ; 004e2f00 | DAT_005dc0a6
    PUSH ECX                            ; 004e2f06
    FSTP float ptr [ESP + 0x190]        ; 004e2f07
    CALL core_actor.cpp_FUN_00408d70    ; 004e2f0e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004e2f13
    LEA ESI,[ESP + 0xfc]                ; 004e2f16
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e2f1d
    MOVSD ES:EDI,ESI                    ; 004e2f20
    MOVSD ES:EDI,ESI                    ; 004e2f21
    MOVSD ES:EDI,ESI                    ; 004e2f22
    MOV EAX,dword ptr [EAX + 0x444]     ; 004e2f23
    MOV dword ptr [ESP + 0xec],EAX      ; 004e2f29
    LEA EAX,[ESP + 0xe4]                ; 004e2f30
    XOR EBX,EBX                         ; 004e2f37
    PUSH EAX                            ; 004e2f39
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e2f3a
    LEA ESI,[ESP + 0x1a8]               ; 004e2f3d
    PUSH EDI                            ; 004e2f44
    MOV dword ptr [ESP + 0xec],EBX      ; 004e2f45
    MOV dword ptr [ESP + 0xf0],EBX      ; 004e2f4c
    CALL core_actor.cpp_FUN_00408cf0    ; 004e2f53
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA EDI,[ESP + 0x1b8]               ; 004e2f58
    ADD ESP,0x8                         ; 004e2f5f
    LEA ESI,[ESP + 0x1a4]               ; 004e2f62
    FLD float ptr [ESP + 0x12c]         ; 004e2f69
    FLD float ptr [ESP + 0x130]         ; 004e2f70
    MOVSD ES:EDI,ESI                    ; 004e2f77
    MOVSD ES:EDI,ESI                    ; 004e2f78
    MOVSD ES:EDI,ESI                    ; 004e2f79
    FLD float ptr [ESP + 0x134]         ; 004e2f7a
    LEA EDI,[ESP + 0x108]               ; 004e2f81
    LEA ESI,[ESP + 0x198]               ; 004e2f88
    FXCH ST2                            ; 004e2f8f
    FADD float ptr [ESP + 0x1b0]        ; 004e2f91
    FXCH                                ; 004e2f98
    FADD float ptr [ESP + 0x1b4]        ; 004e2f9a
    FXCH ST2                            ; 004e2fa1
    FADD float ptr [ESP + 0x1b8]        ; 004e2fa3
    FXCH                                ; 004e2faa
    FSTP float ptr [ESP + 0x198]        ; 004e2fac
    FXCH                                ; 004e2fb3
    FSTP float ptr [ESP + 0x19c]        ; 004e2fb5
    FSTP float ptr [ESP + 0x1a0]        ; 004e2fbc
    MOVSD ES:EDI,ESI                    ; 004e2fc3
    MOVSD ES:EDI,ESI                    ; 004e2fc4
    MOVSD ES:EDI,ESI                    ; 004e2fc5
    MOV EAX,[0x0061b5a8]                ; 004e2fc6 | g_CDemonSetPtr
    LEA EDI,[ESP + 0x120]               ; 004e2fcb
    LEA ESI,[ESP + 0x12c]               ; 004e2fd2
    PUSH EAX                            ; 004e2fd9 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004e2fda
    MOVSD ES:EDI,ESI                    ; 004e2fdb
    MOVSD ES:EDI,ESI                    ; 004e2fdc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004e2fdd
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e2fe2
    PUSH 0xff                           ; 004e2fe5
    PUSH 0xff                           ; 004e2fea
    PUSH 0xff                           ; 004e2fef
    PUSH 0x1                            ; 004e2ff4
    MOV EDX,dword ptr [0x0061b5a8]      ; 004e2ff6 | g_CDemonSetPtr
    PUSH EDX                            ; 004e2ffc | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0 ; 004e2ffd
        ;   XREF to: 00537ef0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00537ef0(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 004e3002
    MOV ECX,dword ptr [0x0061b5a8]      ; 004e3005 | g_CDemonSetPtr
    PUSH ECX                            ; 004e300b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_00537df0 ; 004e300c
        ;   XREF to: 00537df0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_00537df0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e3011
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e3014
    PUSH EBX                            ; 004e3017
    MOV ESI,dword ptr [0x0061b5a8]      ; 004e3018 | g_CDemonSetPtr
    PUSH ESI                            ; 004e301e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004e301f
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDI,dword ptr [EBX + 0x460]     ; 004e3024
    ADD ESP,0x8                         ; 004e302a
    TEST EDI,EDI                        ; 004e302d
    JNZ 0x004e31b6                      ; 004e302f
        ;   XREF to: 004e31b6 (CONDITIONAL_JUMP)  ; LAB_004e31b6
    MOV EBX,dword ptr [0x0061b5a8]      ; 004e3035 | g_CDemonSetPtr
        ;   Label: LAB_004e3035
    PUSH EBX                            ; 004e303b | g_CDemonSetInstance
    XOR EDI,EDI                         ; 004e303c
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90 ; 004e303e
        ;   XREF to: 00537a90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e3043
    LEA EAX,[ESP + 0x108]               ; 004e3046
        ;   Label: LAB_004e3046
    PUSH EAX                            ; 004e304d
    LEA EAX,[ESP + 0x124]               ; 004e304e
    PUSH EAX                            ; 004e3055
    MOV ESI,dword ptr [0x0061b5a8]      ; 004e3056 | g_CDemonSetPtr
    PUSH ESI                            ; 004e305c | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 004e305d
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x20c],EAX     ; 004e3062
    FLD float ptr [ESP + 0x20c]         ; 004e3069
    ADD ESP,0xc                         ; 004e3070
    FLDZ                                ; 004e3073
    FXCH                                ; 004e3075
    FST float ptr [ESP + 0x8]           ; 004e3077
    FSTP double ptr [ESP]               ; 004e307b
    FCOMP double ptr [ESP]              ; 004e307e
    FNSTSW AX                           ; 004e3081
    SAHF                                ; 004e3083
    JBE 0x004e31cb                      ; 004e3084
        ;   XREF to: 004e31cb (CONDITIONAL_JUMP)  ; LAB_004e31cb
    MOV EAX,[0x0061b5a8]                ; 004e308a | g_CDemonSetPtr
        ;   Label: LAB_004e308a
    PUSH EAX                            ; 004e308f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40 ; 004e3090
        ;   XREF to: 00537c40 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e3095
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e3098
    PUSH EDX                            ; 004e309b
    CALL core_lightgun.cpp_FUN_004e2bf0 ; 004e309c
        ;   XREF to: 004e2bf0 (UNCONDITIONAL_CALL)  ; undefined core_lightgun.cpp_FUN_004e2bf0()
    ADD ESP,0x4                         ; 004e30a1
    XOR ECX,ECX                         ; 004e30a4
    LEA EAX,[ESP + 0x84]                ; 004e30a6
    MOV dword ptr [ESP + 0x1f0],ECX     ; 004e30ad
    ADD EAX,0xc                         ; 004e30b4
    MOV dword ptr [ESP + 0x1e8],ECX     ; 004e30b7
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004e30be
    MOV EAX,[0x0061b5a8]                ; 004e30c5 | g_CDemonSetPtr
        ;   Label: LAB_004e30c5
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 004e30ca
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 004e30d1 | g_CDemonSetInstance.character_count
    JGE 0x004e3867                      ; 004e30d7
        ;   XREF to: 004e3867 (CONDITIONAL_JUMP)  ; LAB_004e3867
    ADD EAX,dword ptr [ESP + 0x1e8]     ; 004e30dd
    MOV EAX,dword ptr [EAX + 0x14f0ac]  ; 004e30e4 | g_CDemonSetInstance.characters[0]
    MOV dword ptr [ESP + 0x1e0],EAX     ; 004e30ea
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 004e30f1
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e30f8
    PUSH ESI                            ; 004e30fe
    CALL dword ptr [EAX + 0xe8]         ; 004e30ff
    ADD ESP,0x4                         ; 004e3105
    TEST EAX,EAX                        ; 004e3108
    JZ 0x004e3359                       ; 004e310a
        ;   XREF to: 004e3359 (CONDITIONAL_JUMP)  ; LAB_004e3359
    PUSH 0x5dc005                       ; 004e3110 | = "CDraculaBride"
        ;   Label: LAB_004e3110
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004e3115
    PUSH ESI                            ; 004e311c
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e311d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e3122
    TEST EAX,EAX                        ; 004e3125
    JZ 0x004e33cc                       ; 004e3127
        ;   XREF to: 004e33cc (CONDITIONAL_JUMP)  ; LAB_004e33cc
    MOV EBX,dword ptr [ESP + 0x1e0]     ; 004e312d
        ;   Label: LAB_004e312d
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004e3134
    PUSH EBX                            ; 004e313b
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e313c
    LEA ESI,[ESP + 0xb8]                ; 004e3142
    CALL dword ptr [EAX + 0x24]         ; 004e3149
    ADD ESP,0x4                         ; 004e314c
    LEA EAX,[ESP + 0xa8]                ; 004e314f
    PUSH EAX                            ; 004e3156
    LEA EAX,[ESP + 0xa0]                ; 004e3157
    PUSH EAX                            ; 004e315e
    LEA EAX,[EBX + 0x30]                ; 004e315f
    PUSH EAX                            ; 004e3162
    ADD EBX,0x20                        ; 004e3163
    LEA EDI,[ESP + 0xa8]                ; 004e3166
    PUSH EBX                            ; 004e316d
    MOV ECX,0x6                         ; 004e316e
    LEA ESI,[ESP + 0xc4]                ; 004e3173
    PUSH 0x1cb3950                      ; 004e317a
    MOVSD.REP ES:EDI,ESI                ; 004e317f
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720 ; 004e3181
        ;   XREF to: 00441720 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 004e3186
    TEST EAX,EAX                        ; 004e3189
    JNZ 0x004e3429                      ; 004e318b
        ;   XREF to: 004e3429 (CONDITIONAL_JUMP)  ; LAB_004e3429
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 004e3191
        ;   Label: LAB_004e3191
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 004e3198
    INC EDX                             ; 004e319f
    ADD EAX,0x4                         ; 004e31a0
    MOV dword ptr [ESP + 0x1f0],EDX     ; 004e31a3
    MOV dword ptr [ESP + 0x1e8],EAX     ; 004e31aa
    JMP 0x004e30c5                      ; 004e31b1
        ;   XREF to: 004e30c5 (UNCONDITIONAL_JUMP)  ; LAB_004e30c5
    PUSH EDI                            ; 004e31b6
        ;   Label: LAB_004e31b6
    MOV ECX,dword ptr [0x0061b5a8]      ; 004e31b7 | g_CDemonSetPtr
    PUSH ECX                            ; 004e31bd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004e31be
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e31c3
    JMP 0x004e3035                      ; 004e31c6
        ;   XREF to: 004e3035 (UNCONDITIONAL_JUMP)  ; LAB_004e3035
    FLD1                                ; 004e31cb
        ;   Label: LAB_004e31cb
    FCOMP double ptr [ESP]              ; 004e31cd
    FNSTSW AX                           ; 004e31d0
    SAHF                                ; 004e31d2
    JC 0x004e308a                       ; 004e31d3
        ;   XREF to: 004e308a (CONDITIONAL_JUMP)  ; LAB_004e308a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e31d9
    FLD float ptr [EAX + 0x444]         ; 004e31dc
    FMUL float ptr [ESP + 0x8]          ; 004e31e2
    FSTP float ptr [EAX + 0x6f0]        ; 004e31e6
    MOV EAX,[0x007bdc94]                ; 004e31ec | g_CCharacterClassInfo.name_hash
    PUSH EAX                            ; 004e31f1
    MOV EAX,[0x0061b5a8]                ; 004e31f2 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004e31f7 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004e31fd
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004e31fe
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e3203
    MOV dword ptr [ESP + 0x1f4],EAX     ; 004e3206
    TEST EAX,EAX                        ; 004e320d
    JZ 0x004e322e                       ; 004e320f
        ;   XREF to: 004e322e (CONDITIONAL_JUMP)  ; LAB_004e322e
    PUSH EAX                            ; 004e3211
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004e3212
    CALL dword ptr [EDX + 0x114]        ; 004e3218
    ADD ESP,0x4                         ; 004e321e
    TEST EAX,EAX                        ; 004e3221
    JLE 0x004e322e                      ; 004e3223
        ;   XREF to: 004e322e (CONDITIONAL_JUMP)  ; LAB_004e322e
    XOR ECX,ECX                         ; 004e3225
    MOV dword ptr [ESP + 0x1f4],ECX     ; 004e3227
    MOV EBX,dword ptr [0x01cb8280]      ; 004e322e | g_CGlassClassInfo.name_hash
        ;   Label: LAB_004e322e
    MOV EAX,[0x0061b5a8]                ; 004e3234 | g_CDemonSetPtr
    PUSH EBX                            ; 004e3239
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004e323a | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004e3240
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004e3241
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e3246
    MOV ESI,EAX                         ; 004e3249
    MOV EAX,[0x02653628]                ; 004e324b | g_CTriggerClassInfo.name_hash
    PUSH EAX                            ; 004e3250
    MOV EAX,[0x0061b5a8]                ; 004e3251 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004e3256 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004e325c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004e325d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e3262
    MOV EBX,EAX                         ; 004e3265
    MOV ECX,dword ptr [ESP + 0x1f4]     ; 004e3267
    MOV dword ptr [ESP + 0x1e4],EAX     ; 004e326e
    TEST ECX,ECX                        ; 004e3275
    JZ 0x004e32cf                       ; 004e3277
        ;   XREF to: 004e32cf (CONDITIONAL_JUMP)  ; LAB_004e32cf
    PUSH ECX                            ; 004e3279
    MOV EAX,dword ptr [ECX + 0x2b0]     ; 004e327a
    CALL dword ptr [EAX + 0xe8]         ; 004e3280
    ADD ESP,0x4                         ; 004e3286
    TEST EAX,EAX                        ; 004e3289
    JZ 0x004e308a                       ; 004e328b
        ;   XREF to: 004e308a (CONDITIONAL_JUMP)  ; LAB_004e308a
    TEST EDI,EDI                        ; 004e3291
    JNZ 0x004e308a                      ; 004e3293
        ;   XREF to: 004e308a (CONDITIONAL_JUMP)  ; LAB_004e308a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3299
    MOV ESI,dword ptr [0x0061b5a8]      ; 004e329c | g_CDemonSetPtr
    FLD float ptr [0x005f95d0]          ; 004e32a2 | DAT_005f95d0
    PUSH ESI                            ; 004e32a8 | g_CDemonSetInstance
    FSTP float ptr [EAX + 0x6dc]        ; 004e32a9
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40 ; 004e32af
        ;   XREF to: 00537c40 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e32b4
    MOV EDI,dword ptr [0x0061b5a8]      ; 004e32b7 | g_CDemonSetPtr
    PUSH EDI                            ; 004e32bd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004e32be
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e32c3
    XOR EAX,EAX                         ; 004e32c6
    MOV ESP,EBP                         ; 004e32c8
    POP EBP                             ; 004e32ca
    POP EDI                             ; 004e32cb
    POP ESI                             ; 004e32cc
    POP EBX                             ; 004e32cd
    RET                                 ; 004e32ce
    TEST ESI,ESI                        ; 004e32cf
        ;   Label: LAB_004e32cf
    JNZ 0x004e333a                      ; 004e32d1
        ;   XREF to: 004e333a (CONDITIONAL_JUMP)  ; LAB_004e333a
    TEST EAX,EAX                        ; 004e32d3
    JZ 0x004e334a                       ; 004e32d5
        ;   XREF to: 004e334a (CONDITIONAL_JUMP)  ; LAB_004e334a
    PUSH EAX                            ; 004e32d7
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550 ; 004e32d8
        ;   XREF to: 00578550 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 004e32dd
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e32e0
    PUSH ESI                            ; 004e32e3
    PUSH EBX                            ; 004e32e4
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 ; 004e32e5
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e32ea
    TEST EAX,EAX                        ; 004e32ed
    JZ 0x004e331e                       ; 004e32ef
        ;   XREF to: 004e331e (CONDITIONAL_JUMP)  ; LAB_004e331e
    PUSH ESI                            ; 004e32f1
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004e32f2
    CALL dword ptr [EAX + 0xf4]         ; 004e32f8
    MOV dword ptr [ESP + 0x204],EAX     ; 004e32fe
    FLD float ptr [ESP + 0x204]         ; 004e3305
    ADD ESP,0x4                         ; 004e330c
    SUB ESP,0x4                         ; 004e330f
    FSTP float ptr [ESP]                ; 004e3312
    PUSH EBX                            ; 004e3315
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 004e3316
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004e331b
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004e331e
        ;   Label: LAB_004e331e
    PUSH EAX                            ; 004e3325
    MOV EDX,dword ptr [0x0061b5a8]      ; 004e3326 | g_CDemonSetPtr
    PUSH EDX                            ; 004e332c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004e332d
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e3332
    JMP 0x004e308a                      ; 004e3335
        ;   XREF to: 004e308a (UNCONDITIONAL_JUMP)  ; LAB_004e308a
    PUSH ESI                            ; 004e333a
        ;   Label: LAB_004e333a
    MOV ECX,dword ptr [0x0061b5a8]      ; 004e333b | g_CDemonSetPtr
    PUSH ECX                            ; 004e3341 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004e3342
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e3347
    INC EDI                             ; 004e334a
        ;   Label: LAB_004e334a
    CMP EDI,0x1                         ; 004e334b
    JL 0x004e3046                       ; 004e334e
        ;   XREF to: 004e3046 (CONDITIONAL_JUMP)  ; LAB_004e3046
    JMP 0x004e308a                      ; 004e3354
        ;   XREF to: 004e308a (UNCONDITIONAL_JUMP)  ; LAB_004e308a
    PUSH 0x5dc037                       ; 004e3359 | = "CGhoul"
        ;   Label: LAB_004e3359
    PUSH ESI                            ; 004e335e
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e335f
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e3364
    TEST EAX,EAX                        ; 004e3367
    JNZ 0x004e312d                      ; 004e3369
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    PUSH 0x5dc03e                       ; 004e336f | = "CTVBat"
    PUSH ESI                            ; 004e3374
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e3375
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e337a
    TEST EAX,EAX                        ; 004e337d
    JNZ 0x004e312d                      ; 004e337f
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    PUSH 0x5dc045                       ; 004e3385 | = "CBatCreature"
    PUSH ESI                            ; 004e338a
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e338b
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e3390
    TEST EAX,EAX                        ; 004e3393
    JNZ 0x004e312d                      ; 004e3395
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    PUSH 0x5dc052                       ; 004e339b | = "CWerewolf"
    PUSH ESI                            ; 004e33a0
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e33a1
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e33a6
    TEST EAX,EAX                        ; 004e33a9
    JNZ 0x004e312d                      ; 004e33ab
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    PUSH 0x5dc05c                       ; 004e33b1 | = "CSvetlana"
    PUSH ESI                            ; 004e33b6
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e33b7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e33bc
    TEST EAX,EAX                        ; 004e33bf
    JNZ 0x004e312d                      ; 004e33c1
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    JMP 0x004e3110                      ; 004e33c7
        ;   XREF to: 004e3110 (UNCONDITIONAL_JUMP)  ; LAB_004e3110
    PUSH 0x5dc013                       ; 004e33cc | = "CBatman"
        ;   Label: LAB_004e33cc
    PUSH ESI                            ; 004e33d1
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e33d2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e33d7
    TEST EAX,EAX                        ; 004e33da
    JNZ 0x004e312d                      ; 004e33dc
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    PUSH 0x5dc01b                       ; 004e33e2 | = "CBatCreature"
    PUSH ESI                            ; 004e33e7
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e33e8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e33ed
    TEST EAX,EAX                        ; 004e33f0
    JNZ 0x004e312d                      ; 004e33f2
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    PUSH 0x5dc028                       ; 004e33f8 | = "CBride"
    PUSH ESI                            ; 004e33fd
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e33fe
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e3403
    TEST EAX,EAX                        ; 004e3406
    JNZ 0x004e312d                      ; 004e3408
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    PUSH 0x5dc02f                       ; 004e340e | = "CShadow"
    PUSH ESI                            ; 004e3413
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e3414
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e3419
    TEST EAX,EAX                        ; 004e341c
    JNZ 0x004e312d                      ; 004e341e
        ;   XREF to: 004e312d (CONDITIONAL_JUMP)  ; LAB_004e312d
    JMP 0x004e3191                      ; 004e3424
        ;   XREF to: 004e3191 (UNCONDITIONAL_JUMP)  ; LAB_004e3191
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 004e3429
        ;   Label: LAB_004e3429
    PUSH ESI                            ; 004e3430
    PUSH 0x5dc08a                       ; 004e3431 | s_s_in_volume_005dc089+1
    MOV EDI,dword ptr [0x00609ed0]      ; 004e3436 | g_CConsolePtr
    PUSH EDI                            ; 004e343c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004e343d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    MOV EDX,dword ptr [0x01cedef4]      ; 004e3442 | DAT_01cedef4
    MOV EDX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004e3448
    LEA ESI,[ESP + 0x198]               ; 004e344f
    LEA EAX,[EDX + 0x20]                ; 004e3456
    LEA EDI,[ESP + 0x1c8]               ; 004e3459
    ADD ESP,0xc                         ; 004e3460
    FLD float ptr [EAX]                 ; 004e3463
    FLD float ptr [EAX + 0x4]           ; 004e3465
    FLD float ptr [EAX + 0x8]           ; 004e3468
    FXCH ST2                            ; 004e346b
    FSUB float ptr [EBX]                ; 004e346d
    FXCH                                ; 004e346f
    FSUB float ptr [EBX + 0x4]          ; 004e3471
    FXCH ST2                            ; 004e3474
    FSUB float ptr [EBX + 0x8]          ; 004e3476
    FXCH                                ; 004e3479
    FSTP float ptr [ESP + 0x18c]        ; 004e347b
    FXCH                                ; 004e3482
    FSTP float ptr [ESP + 0x190]        ; 004e3484
    FSTP float ptr [ESP + 0x194]        ; 004e348b
    MOVSD ES:EDI,ESI                    ; 004e3492
    MOVSD ES:EDI,ESI                    ; 004e3493
    MOVSD ES:EDI,ESI                    ; 004e3494
    FLD float ptr [ESP + 0x1c0]         ; 004e3495
    FMUL ST0                            ; 004e349c
    FLD float ptr [ESP + 0x1bc]         ; 004e349e
    FMUL ST0                            ; 004e34a5
    FADDP                               ; 004e34a7
    FLD float ptr [ESP + 0x1c4]         ; 004e34a9
    FMUL ST0                            ; 004e34b0
    FADDP                               ; 004e34b2
    FSQRT                               ; 004e34b4
    FCOMP double ptr [0x005dc0b2]       ; 004e34b6 | DAT_005dc0b2
    FNSTSW AX                           ; 004e34bc
    SAHF                                ; 004e34be
    JC 0x004e3713                       ; 004e34bf
        ;   XREF to: 004e3713 (CONDITIONAL_JUMP)  ; LAB_004e3713
    LEA EAX,[ESP + 0x120]               ; 004e34c5
        ;   Label: LAB_004e34c5
    MOV EBX,dword ptr [0x0061b5a8]      ; 004e34cc | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1fc],EAX     ; 004e34d2
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004e34d9
    PUSH EBX                            ; 004e34e0 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x1fc],EAX     ; 004e34e1
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90 ; 004e34e8
        ;   XREF to: 00537a90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00537a90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e34ed
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 004e34f0
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004e34f7
    PUSH ESI                            ; 004e34fe
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e34ff
    LEA ESI,[ESP + 0xd0]                ; 004e3505
    LEA EDI,[ESP + 0x88]                ; 004e350c
    CALL dword ptr [EAX + 0x24]         ; 004e3513
    MOV ECX,0x6                         ; 004e3516
    ADD ESP,0x4                         ; 004e351b
    LEA EAX,[ESP + 0x1c8]               ; 004e351e
    LEA ESI,[ESP + 0xcc]                ; 004e3525
    PUSH EAX                            ; 004e352c
    MOVSD.REP ES:EDI,ESI                ; 004e352d
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 004e352f
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x13c]               ; 004e3534
    ADD ESP,0x4                         ; 004e353b
    LEA ESI,[ESP + 0x1c8]               ; 004e353e
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004e3545
    FLD float ptr [ESP + 0x84]          ; 004e354c
    FADD float ptr [EAX]                ; 004e3553
    FLD float ptr [ESP + 0x88]          ; 004e3555
    FXCH                                ; 004e355c
    FSTP float ptr [ESP + 0x1c8]        ; 004e355e
    FADD float ptr [EAX + 0x4]          ; 004e3565
    FLD float ptr [ESP + 0x8c]          ; 004e3568
    FXCH                                ; 004e356f
    FSTP float ptr [ESP + 0x1cc]        ; 004e3571
    FADD float ptr [EAX + 0x8]          ; 004e3578
    LEA EAX,[ESP + 0x174]               ; 004e357b
    FSTP float ptr [ESP + 0x1d0]        ; 004e3582
    PUSH EAX                            ; 004e3589
    MOVSD ES:EDI,ESI                    ; 004e358a
    MOVSD ES:EDI,ESI                    ; 004e358b
    MOVSD ES:EDI,ESI                    ; 004e358c
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 004e358d
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 004e3592
    FLD float ptr [0x005dc0aa]          ; 004e3595 | DAT_005dc0aa
    FLD float ptr [ESP + 0x138]         ; 004e359b
    FMUL ST1                            ; 004e35a2
    FLD float ptr [ESP + 0x13c]         ; 004e35a4
    FMUL ST2                            ; 004e35ab
    FLD float ptr [ESP + 0x140]         ; 004e35ad
    FMULP ST3                           ; 004e35b4
    LEA EDI,[ESP + 0x114]               ; 004e35b6
    LEA ESI,[ESP + 0x174]               ; 004e35bd
    LEA EAX,[ESP + 0x114]               ; 004e35c4
    FXCH                                ; 004e35cb
    FSTP float ptr [ESP + 0x174]        ; 004e35cd
    FSTP float ptr [ESP + 0x178]        ; 004e35d4
    FSTP float ptr [ESP + 0x17c]        ; 004e35db
    MOVSD ES:EDI,ESI                    ; 004e35e2
    MOVSD ES:EDI,ESI                    ; 004e35e3
    MOVSD ES:EDI,ESI                    ; 004e35e4
    PUSH EAX                            ; 004e35e5
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 004e35e6
    PUSH EDI                            ; 004e35ed
    LEA ESI,[ESP + 0x1dc]               ; 004e35ee
    CALL core_actor.cpp_FUN_00408d70    ; 004e35f5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA EDI,[ESP + 0x164]               ; 004e35fa
    LEA ESI,[ESP + 0x1dc]               ; 004e3601
    ADD ESP,0x8                         ; 004e3608
    MOVSD ES:EDI,ESI                    ; 004e360b
    MOVSD ES:EDI,ESI                    ; 004e360c
    MOVSD ES:EDI,ESI                    ; 004e360d
    XOR EBX,EBX                         ; 004e360e
    XOR ESI,ESI                         ; 004e3610
    XOR EDI,EDI                         ; 004e3612
    LEA EAX,[ESP + 0x15c]               ; 004e3614
        ;   Label: LAB_004e3614
    PUSH EAX                            ; 004e361b
    MOV EAX,dword ptr [ESP + 0x200]     ; 004e361c
    PUSH EAX                            ; 004e3623
    MOV EDX,dword ptr [0x0061b5a8]      ; 004e3624 | g_CDemonSetPtr
    PUSH EDX                            ; 004e362a | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 004e362b
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV EAX,[0x0061b5a8]                ; 004e3630 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 004e3635 | g_CDemonSetInstance.collision_actor
    ADD ESP,0xc                         ; 004e363b
    CMP EDI,ECX                         ; 004e363e
    JNZ 0x004e37d6                      ; 004e3640
        ;   XREF to: 004e37d6 (CONDITIONAL_JUMP)  ; LAB_004e37d6
    MOV EBX,dword ptr [0x0061b5a8]      ; 004e3646 | g_CDemonSetPtr
        ;   Label: LAB_004e3646
    PUSH EBX                            ; 004e364c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40 ; 004e364d
        ;   XREF to: 00537c40 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00537c40(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e3652
    TEST ESI,ESI                        ; 004e3655
    JZ 0x004e3191                       ; 004e3657
        ;   XREF to: 004e3191 (CONDITIONAL_JUMP)  ; LAB_004e3191
    LEA EAX,[ESP + 0x48]                ; 004e365d
    PUSH EAX                            ; 004e3661
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004e3662
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e3667
    PUSH 0x5dc005                       ; 004e366a | = "CDraculaBride"
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 004e366f
    PUSH ESI                            ; 004e3676
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e3677
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e367c
    TEST EAX,EAX                        ; 004e367f
    JZ 0x004e3802                       ; 004e3681
        ;   XREF to: 004e3802 (CONDITIONAL_JUMP)  ; LAB_004e3802
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e3687
        ;   Label: LAB_004e3687
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e368a
    PUSH ESI                            ; 004e368d
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e368e
    CALL dword ptr [EAX + 0xf4]         ; 004e3694
    MOV dword ptr [ESP + 0x204],EAX     ; 004e369a
    FLD float ptr [ESP + 0x204]         ; 004e36a1
    ADD ESP,0x4                         ; 004e36a8
    FSTP float ptr [ESP + 0x4c]         ; 004e36ab
    MOV EDI,0x6c                        ; 004e36af
        ;   Label: LAB_004e36af
    XOR EAX,EAX                         ; 004e36b4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e36b6
    MOV dword ptr [ESP + 0x50],EAX      ; 004e36b9
    MOV dword ptr [ESP + 0x5c],EAX      ; 004e36bd
    MOV dword ptr [ESP + 0x58],EAX      ; 004e36c1
    MOV dword ptr [ESP + 0x54],EAX      ; 004e36c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e36c9
    MOV dword ptr [ESP + 0x78],EDI      ; 004e36cc
    MOV dword ptr [ESP + 0x7c],EAX      ; 004e36d0
    PUSH ESI                            ; 004e36d4
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e36d5
    CALL dword ptr [EAX + 0x9c]         ; 004e36db
    ADD ESP,0x4                         ; 004e36e1
    MOV dword ptr [ESP + 0x80],EAX      ; 004e36e4
    LEA EAX,[ESP + 0x48]                ; 004e36eb
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004e36ef
    PUSH EAX                            ; 004e36f6
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 004e36f7
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 004e36fe
    PUSH EDI                            ; 004e3704
    CALL dword ptr [EDX + 0x110]        ; 004e3705
    ADD ESP,0x8                         ; 004e370b
    JMP 0x004e3191                      ; 004e370e
        ;   XREF to: 004e3191 (UNCONDITIONAL_JUMP)  ; LAB_004e3191
    PUSH EBX                            ; 004e3713
        ;   Label: LAB_004e3713
    PUSH EDX                            ; 004e3714
    LEA ESI,[ESP + 0x14c]               ; 004e3715
    LEA EDI,[ESP + 0x170]               ; 004e371c
    CALL core_actor.cpp_FUN_00408de0    ; 004e3723
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x14c]               ; 004e3728
    ADD ESP,0x8                         ; 004e372f
    XOR EAX,EAX                         ; 004e3732
    MOVSD ES:EDI,ESI                    ; 004e3734
    MOVSD ES:EDI,ESI                    ; 004e3735
    MOVSD ES:EDI,ESI                    ; 004e3736
    MOV dword ptr [ESP + 0x16c],EAX     ; 004e3737
    LEA EAX,[ESP + 0x168]               ; 004e373e
    PUSH EAX                            ; 004e3745
    LEA ESI,[ESP + 0x154]               ; 004e3746
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004e374d
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    ADD ESP,0x4                         ; 004e3752
    LEA EAX,[ESP + 0xc]                 ; 004e3755
    PUSH EAX                            ; 004e3759
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004e375a
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004e375f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e3762
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e3765
    PUSH EDX                            ; 004e3768
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004e3769
    CALL dword ptr [EAX + 0xf4]         ; 004e376f
    MOV dword ptr [ESP + 0x204],EAX     ; 004e3775
    FLD float ptr [ESP + 0x204]         ; 004e377c
    ADD ESP,0x4                         ; 004e3783
    LEA EAX,[ESP + 0xc]                 ; 004e3786
    PUSH EAX                            ; 004e378a
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 004e378b
    MOV EDX,dword ptr [ESP + 0x1e4]     ; 004e3792
    PUSH ECX                            ; 004e3799
    FSTP float ptr [ESP + 0x18]         ; 004e379a
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 004e379e
    CALL dword ptr [EDX + 0x110]        ; 004e37a4
    ADD ESP,0x8                         ; 004e37aa
    JMP 0x004e34c5                      ; 004e37ad
        ;   XREF to: 004e34c5 (UNCONDITIONAL_JUMP)  ; LAB_004e34c5
    MOV EAX,[0x0061b5a8]                ; 004e37b2 | g_CDemonSetPtr
        ;   Label: LAB_004e37b2
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 004e37b7 | g_CDemonSetInstance.collision_actor
    PUSH ECX                            ; 004e37bd
    PUSH EAX                            ; 004e37be | g_CDemonSetInstance
    INC EBX                             ; 004e37bf
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004e37c0
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e37c5
    CMP EBX,0x3                         ; 004e37c8
    JL 0x004e3614                       ; 004e37cb
        ;   XREF to: 004e3614 (CONDITIONAL_JUMP)  ; LAB_004e3614
    JMP 0x004e3646                      ; 004e37d1
        ;   XREF to: 004e3646 (UNCONDITIONAL_JUMP)  ; LAB_004e3646
    MOV EDX,ECX                         ; 004e37d6
        ;   Label: LAB_004e37d6
    CMP EDX,dword ptr [ESP + 0x1f8]     ; 004e37d8
    JNZ 0x004e37eb                      ; 004e37df
        ;   XREF to: 004e37eb (CONDITIONAL_JUMP)  ; LAB_004e37eb
    MOV ESI,0x1                         ; 004e37e1
    JMP 0x004e3646                      ; 004e37e6
        ;   XREF to: 004e3646 (UNCONDITIONAL_JUMP)  ; LAB_004e3646
    PUSH 0x5dc072                       ; 004e37eb | = "CTrigger || CGlass"
        ;   Label: LAB_004e37eb
    PUSH EDX                            ; 004e37f0
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e37f1
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e37f6
    TEST EAX,EAX                        ; 004e37f9
    JNZ 0x004e37b2                      ; 004e37fb
        ;   XREF to: 004e37b2 (CONDITIONAL_JUMP)  ; LAB_004e37b2
    JMP 0x004e3646                      ; 004e37fd
        ;   XREF to: 004e3646 (UNCONDITIONAL_JUMP)  ; LAB_004e3646
    PUSH 0x5dc013                       ; 004e3802 | = "CBatman"
        ;   Label: LAB_004e3802
    PUSH ESI                            ; 004e3807
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e3808
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e380d
    TEST EAX,EAX                        ; 004e3810
    JNZ 0x004e3687                      ; 004e3812
        ;   XREF to: 004e3687 (CONDITIONAL_JUMP)  ; LAB_004e3687
    PUSH 0x5dc01b                       ; 004e3818 | = "CBatCreature"
    PUSH ESI                            ; 004e381d
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e381e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e3823
    TEST EAX,EAX                        ; 004e3826
    JNZ 0x004e3687                      ; 004e3828
        ;   XREF to: 004e3687 (CONDITIONAL_JUMP)  ; LAB_004e3687
    PUSH 0x5dc028                       ; 004e382e | = "CBride"
    PUSH ESI                            ; 004e3833
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e3834
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e3839
    TEST EAX,EAX                        ; 004e383c
    JNZ 0x004e3687                      ; 004e383e
        ;   XREF to: 004e3687 (CONDITIONAL_JUMP)  ; LAB_004e3687
    PUSH 0x5dc02f                       ; 004e3844 | = "CShadow"
    PUSH ESI                            ; 004e3849
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 004e384a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e384f
    TEST EAX,EAX                        ; 004e3852
    JNZ 0x004e3687                      ; 004e3854
        ;   XREF to: 004e3687 (CONDITIONAL_JUMP)  ; LAB_004e3687
    MOV dword ptr [ESP + 0x4c],0x3dcccccd ; 004e385a
    JMP 0x004e36af                      ; 004e3862
        ;   XREF to: 004e36af (UNCONDITIONAL_JUMP)  ; LAB_004e36af
    PUSH EAX                            ; 004e3867 | g_CDemonSetInstance
        ;   Label: LAB_004e3867
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004e3868
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e386d
    LEA EAX,[ESP + 0x12c]               ; 004e3870
    PUSH EAX                            ; 004e3877
    PUSH 0x5dc098                       ; 004e3878 | = "cre-fire.wav"
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e387d
    PUSH EDI                            ; 004e3880
    MOV EAX,[0x0061c068]                ; 004e3881 | DAT_0061c068
    PUSH EAX                            ; 004e3886
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 004e3887
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004e388c
    MOV EDX,dword ptr [EDI + 0x6d8]     ; 004e388f
    PUSH dword ptr [0x005f95d8]         ; 004e3895 | DAT_005f95d8
    PUSH EDX                            ; 004e389b
    CALL sound_sndmain.cpp_FUN_00550f20 ; 004e389c
        ;   XREF to: 00550f20 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00550f20()
    ADD ESP,0x8                         ; 004e38a1
    MOV dword ptr [EDI + 0x6d4],0x1     ; 004e38a4
    PUSH EDI                            ; 004e38ae
    MOV dword ptr [EDI + 0x6e4],0x1     ; 004e38af
    CALL core_weapon.cpp_CWeapon_fire_FUN_0058a290 ; 004e38b9
        ;   XREF to: 0058a290 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0058a290(CWeapon * this_ptr)
    MOV EAX,0x1                         ; 004e38be
    ADD ESP,0x4                         ; 004e38c3
    MOV ESP,EBP                         ; 004e38c6
    POP EBP                             ; 004e38c8
    POP EDI                             ; 004e38c9
    POP ESI                             ; 004e38ca
    POP EBX                             ; 004e38cb
    RET                                 ; 004e38cc

