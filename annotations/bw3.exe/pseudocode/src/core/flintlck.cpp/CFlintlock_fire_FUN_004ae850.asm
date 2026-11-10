; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_flintlck_cpp_CFlintlock_fire_FUN_004ae850(CFlintlock *this_ptr)
;
; Parameters:
; CFlintlock *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_wp_noammo_wav_005c1cae
;   TerminatedCString s_RIC_CT0A_WAV_005c1cbc
;   TerminatedCString s_RIC_CT0B_WAV_005c1cc9
;   TerminatedCString s_RIC_CT0C_WAV_005c1cd6
;   TerminatedCString s_RIC_WD0B_WAV_005c1ce3
;   TerminatedCString s_RIC_WD0C_WAV_005c1cf0
;   TerminatedCString s_RIC_DT_WAV_005c1cfd
;   TerminatedCString s_wp_flintlock_wav_005c1d08
;   undefined4 DAT_005c1d1d
;   undefined4 DAT_005c1d25
;   undefined4 DAT_005c1d2d
;   undefined4 DAT_005c1d35
;   undefined4 DAT_005c1d3d
;   undefined4 DAT_005c1d45
;   undefined4 DAT_005c1d4d
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_fire.cpp_FUN_004a2090
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0
;   core_glass.cpp_FUN_004cc040
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae850
        ;   Label: core_flintlck.cpp_CFlintlock_fire_FUN_004ae850
    PUSH ESI                            ; 004ae851
    PUSH EDI                            ; 004ae852
    PUSH EBP                            ; 004ae853
    MOV EBP,ESP                         ; 004ae854
    SUB ESP,0x284                       ; 004ae856
    AND ESP,0xfffffff8                  ; 004ae85c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ae85f
    PUSH EBX                            ; 004ae862
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ae863
    LEA ESI,[ESP + 0x1cc]               ; 004ae869
    LEA EDI,[ESP + 0xdc]                ; 004ae870
    CALL dword ptr [EAX + 0xe0]         ; 004ae877
    ADD ESP,0x4                         ; 004ae87d
    LEA EAX,[ESP + 0xd8]                ; 004ae880
    LEA ESI,[ESP + 0x1c8]               ; 004ae887
    PUSH EAX                            ; 004ae88e
    MOVSD ES:EDI,ESI                    ; 004ae88f
    MOVSD ES:EDI,ESI                    ; 004ae890
    MOVSD ES:EDI,ESI                    ; 004ae891
    PUSH EBX                            ; 004ae892
    LEA ESI,[ESP + 0xd4]                ; 004ae893
    CALL core_actor.cpp_FUN_00408b80    ; 004ae89a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004ae89f
    LEA EDI,[ESP + 0xc0]                ; 004ae8a2
    LEA ESI,[ESP + 0xcc]                ; 004ae8a9
    PUSH EBX                            ; 004ae8b0
    MOVSD ES:EDI,ESI                    ; 004ae8b1
    MOVSD ES:EDI,ESI                    ; 004ae8b2
    MOVSD ES:EDI,ESI                    ; 004ae8b3
    CALL core_weapon.cpp_CWeapon_fire_FUN_0057b880 ; 004ae8b4
        ;   XREF to: 0057b880 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0057b880(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004ae8b9
    TEST EAX,EAX                        ; 004ae8bc
    JZ 0x004aee70                       ; 004ae8be
        ;   XREF to: 004aee70 (CONDITIONAL_JUMP)  ; LAB_004aee70
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 004ae8c4
    MOV dword ptr [ESP + 0xec],EAX      ; 004ae8ca
    LEA EAX,[ESP + 0xe4]                ; 004ae8d1
    LEA ESI,[ESP + 0xf0]                ; 004ae8d8
    PUSH EAX                            ; 004ae8df
    LEA EDI,[ESP + 0x13c]               ; 004ae8e0
    XOR ECX,ECX                         ; 004ae8e7
    PUSH EBX                            ; 004ae8e9
    MOV dword ptr [ESP + 0xec],ECX      ; 004ae8ea
    MOV dword ptr [ESP + 0xf0],ECX      ; 004ae8f1
    CALL core_actor.cpp_FUN_00408b00    ; 004ae8f8
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 004ae8fd
    LEA ESI,[ESP + 0xf0]                ; 004ae900
    FLD float ptr [ESP + 0xc0]          ; 004ae907
    FLD float ptr [ESP + 0xc4]          ; 004ae90e
    MOVSD ES:EDI,ESI                    ; 004ae915
    MOVSD ES:EDI,ESI                    ; 004ae916
    MOVSD ES:EDI,ESI                    ; 004ae917
    FLD float ptr [ESP + 0xc8]          ; 004ae918
    LEA EDI,[ESP + 0x114]               ; 004ae91f
    LEA ESI,[ESP + 0x210]               ; 004ae926
    FXCH ST2                            ; 004ae92d
    FADD float ptr [ESP + 0x138]        ; 004ae92f
    FXCH                                ; 004ae936
    FADD float ptr [ESP + 0x13c]        ; 004ae938
    FXCH ST2                            ; 004ae93f
    FADD float ptr [ESP + 0x140]        ; 004ae941
    FXCH                                ; 004ae948
    FSTP float ptr [ESP + 0x210]        ; 004ae94a
    FXCH                                ; 004ae951
    FSTP float ptr [ESP + 0x214]        ; 004ae953
    FSTP float ptr [ESP + 0x218]        ; 004ae95a
    MOVSD ES:EDI,ESI                    ; 004ae961
    MOVSD ES:EDI,ESI                    ; 004ae962
    MOVSD ES:EDI,ESI                    ; 004ae963
    FLD float ptr [EBX + 0x2e8]         ; 004ae964
    FDIVR double ptr [0x005c1d1d]       ; 004ae96a | DAT_005c1d1d
    FLD float ptr [ESP + 0x138]         ; 004ae970
    FXCH                                ; 004ae977
    FSTP float ptr [ESP + 0x264]        ; 004ae979
    FMUL float ptr [ESP + 0x264]        ; 004ae980
    FLD float ptr [ESP + 0x13c]         ; 004ae987
    FMUL float ptr [ESP + 0x264]        ; 004ae98e
    FLD float ptr [ESP + 0x140]         ; 004ae995
    FMUL float ptr [ESP + 0x264]        ; 004ae99c
    FLD float ptr [ESP + 0xc0]          ; 004ae9a3
    FLD float ptr [ESP + 0xc4]          ; 004ae9aa
    LEA EDI,[ESP + 0x198]               ; 004ae9b1
    LEA ESI,[ESP + 0x21c]               ; 004ae9b8
    FXCH ST4                            ; 004ae9bf
    FSTP float ptr [ESP + 0x21c]        ; 004ae9c1
    FXCH ST2                            ; 004ae9c8
    FSTP float ptr [ESP + 0x220]        ; 004ae9ca
    FSTP float ptr [ESP + 0x224]        ; 004ae9d1
    MOVSD ES:EDI,ESI                    ; 004ae9d8
    MOVSD ES:EDI,ESI                    ; 004ae9d9
    MOVSD ES:EDI,ESI                    ; 004ae9da
    FLD float ptr [ESP + 0xc8]          ; 004ae9db
    LEA EDI,[ESP + 0x144]               ; 004ae9e2
    LEA ESI,[ESP + 0x120]               ; 004ae9e9
    FXCH                                ; 004ae9f0
    FSUB float ptr [ESP + 0x198]        ; 004ae9f2
    FXCH ST2                            ; 004ae9f9
    FSUB float ptr [ESP + 0x19c]        ; 004ae9fb
    FXCH                                ; 004aea02
    FSUB float ptr [ESP + 0x1a0]        ; 004aea04
    FXCH ST2                            ; 004aea0b
    FSTP float ptr [ESP + 0x120]        ; 004aea0d
    FSTP float ptr [ESP + 0x124]        ; 004aea14
    FSTP float ptr [ESP + 0x128]        ; 004aea1b
    MOVSD ES:EDI,ESI                    ; 004aea22
    MOVSD ES:EDI,ESI                    ; 004aea23
    MOVSD ES:EDI,ESI                    ; 004aea24
    MOV EDI,dword ptr [0x00603b28]      ; 004aea25 | g_CDemonSetPtr
    PUSH EDI                            ; 004aea2b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004aea2c
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004aea31
    PUSH 0x1                            ; 004aea34
    MOV EAX,[0x00603b28]                ; 004aea36 | g_CDemonSetPtr
    PUSH EAX                            ; 004aea3b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90 ; 004aea3c
        ;   XREF to: 0053ec90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_0053ec90(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004aea41
    PUSH EBX                            ; 004aea44
    MOV EDX,dword ptr [0x00603b28]      ; 004aea45 | g_CDemonSetPtr
    PUSH EDX                            ; 004aea4b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004aea4c
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004aea51
    MOV ECX,dword ptr [0x00603b28]      ; 004aea54 | g_CDemonSetPtr
    PUSH ECX                            ; 004aea5a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0 ; 004aea5b
        ;   XREF to: 0053ebd0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_skipExactCollisions_FUN_0053ebd0(CDemonSet * this_ptr)
    MOV ESI,dword ptr [EBX + 0x304]     ; 004aea60
    ADD ESP,0x4                         ; 004aea66
    TEST ESI,ESI                        ; 004aea69
    JNZ 0x004aeea0                      ; 004aea6b
        ;   XREF to: 004aeea0 (CONDITIONAL_JUMP)  ; LAB_004aeea0
    XOR EDX,EDX                         ; 004aea71
        ;   Label: LAB_004aea71
    MOV dword ptr [ESP + 0x278],EDX     ; 004aea73
    LEA EAX,[ESP + 0x114]               ; 004aea7a
        ;   Label: LAB_004aea7a
    PUSH EAX                            ; 004aea81
    LEA EAX,[ESP + 0x148]               ; 004aea82
    PUSH EAX                            ; 004aea89
    MOV ECX,dword ptr [0x00603b28]      ; 004aea8a | g_CDemonSetPtr
    PUSH ECX                            ; 004aea90 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 004aea91
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0x28c],EAX     ; 004aea96
    FLD float ptr [ESP + 0x28c]         ; 004aea9d
    ADD ESP,0xc                         ; 004aeaa4
    FLDZ                                ; 004aeaa7
    FXCH                                ; 004aeaa9
    FSTP double ptr [ESP + 0x8]         ; 004aeaab
    FCOMP double ptr [ESP + 0x8]        ; 004aeaaf
    FNSTSW AX                           ; 004aeab3
    SAHF                                ; 004aeab5
    JBE 0x004aeeb4                      ; 004aeab6
        ;   XREF to: 004aeeb4 (CONDITIONAL_JUMP)  ; LAB_004aeeb4
    MOV EDI,dword ptr [0x00603b28]      ; 004aeabc | g_CDemonSetPtr
        ;   Label: LAB_004aeabc
    PUSH EDI                            ; 004aeac2 | g_CDemonSetInstance
    LEA ESI,[ESP + 0xc4]                ; 004aeac3
    LEA EDI,[ESP + 0x154]               ; 004aeaca
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004aead1
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004aead6
    MOVSD ES:EDI,ESI                    ; 004aead9
    MOVSD ES:EDI,ESI                    ; 004aeada
    MOVSD ES:EDI,ESI                    ; 004aeadb
    PUSH EBX                            ; 004aeadc
    MOV EAX,dword ptr [EBX + 0x154]     ; 004aeadd
    LEA ESI,[ESP + 0x1b4]               ; 004aeae3
    LEA EDI,[ESP + 0xb8]                ; 004aeaea
    CALL dword ptr [EAX + 0xe0]         ; 004aeaf1
    LEA ESI,[ESP + 0x1b4]               ; 004aeaf7
    ADD ESP,0x4                         ; 004aeafe
    MOVSD ES:EDI,ESI                    ; 004aeb01
    MOVSD ES:EDI,ESI                    ; 004aeb02
    MOVSD ES:EDI,ESI                    ; 004aeb03
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004aeb04
    MOV dword ptr [ESP + 0x18c],EAX     ; 004aeb0b
    PUSH EBX                            ; 004aeb12
    MOV EAX,dword ptr [EBX + 0x154]     ; 004aeb13
    LEA ESI,[ESP + 0x244]               ; 004aeb19
    LEA EDI,[ESP + 0x1c0]               ; 004aeb20
    CALL dword ptr [EAX + 0xe0]         ; 004aeb27
    LEA ESI,[ESP + 0x244]               ; 004aeb2d
    ADD ESP,0x4                         ; 004aeb34
    MOVSD ES:EDI,ESI                    ; 004aeb37
    MOVSD ES:EDI,ESI                    ; 004aeb38
    MOVSD ES:EDI,ESI                    ; 004aeb39
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004aeb3a
    MOV dword ptr [ESP + 0x190],EAX     ; 004aeb41
    PUSH EBX                            ; 004aeb48
    MOV EAX,dword ptr [EBX + 0x154]     ; 004aeb49
    LEA ESI,[ESP + 0x178]               ; 004aeb4f
    LEA EDI,[ESP + 0x1d8]               ; 004aeb56
    CALL dword ptr [EAX + 0xe0]         ; 004aeb5d
    LEA ESI,[ESP + 0x178]               ; 004aeb63
    ADD ESP,0x4                         ; 004aeb6a
    LEA EAX,[ESP + 0x18c]               ; 004aeb6d
    MOVSD ES:EDI,ESI                    ; 004aeb74
    MOVSD ES:EDI,ESI                    ; 004aeb75
    MOVSD ES:EDI,ESI                    ; 004aeb76
    PUSH EAX                            ; 004aeb77
    FLD float ptr [ESP + 0x1e0]         ; 004aeb78
    LEA ESI,[ESP + 0x88]                ; 004aeb7f
    LEA EDI,[ESP + 0x1e4]               ; 004aeb86
    FADD double ptr [0x005c1d4d]        ; 004aeb8d | DAT_005c1d4d
    PUSH EBX                            ; 004aeb93
    FSTP float ptr [ESP + 0x19c]        ; 004aeb94
    CALL core_actor.cpp_FUN_00408b80    ; 004aeb9b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x8c]                ; 004aeba0
    ADD ESP,0x8                         ; 004aeba7
    LEA EAX,[ESP + 0x150]               ; 004aebaa
    FLD float ptr [ESP + 0x154]         ; 004aebb1
    FLD float ptr [ESP + 0x190]         ; 004aebb8
    PUSH EAX                            ; 004aebbf
    MOVSD ES:EDI,ESI                    ; 004aebc0
    MOVSD ES:EDI,ESI                    ; 004aebc1
    MOVSD ES:EDI,ESI                    ; 004aebc2
    MOV EAX,[0x005fc5a0]                ; 004aebc3 | DAT_005fc5a0
    FXCH                                ; 004aebc8
    FLD float ptr [0x005c1d55]          ; 004aebca | DAT_005c1d55
    FXCH                                ; 004aebd0
    FADD ST0,ST1                        ; 004aebd2
    FXCH ST2                            ; 004aebd4
    FADDP                               ; 004aebd6
    FXCH                                ; 004aebd8
    FSTP float ptr [ESP + 0x158]        ; 004aebda
    PUSH EAX                            ; 004aebe1
    FSTP float ptr [ESP + 0x198]        ; 004aebe2
    CALL core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010 ; 004aebe9
        ;   XREF to: 004a2010 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_004a2010(CFireEffect * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 004aebee
    LEA EAX,[EBX + 0x3c]                ; 004aebf1
    PUSH EAX                            ; 004aebf4
    LEA EAX,[ESP + 0x154]               ; 004aebf5
    PUSH EAX                            ; 004aebfc
    MOV EDX,dword ptr [0x005fc5a0]      ; 004aebfd | DAT_005fc5a0
    PUSH EDX                            ; 004aec03
    XOR ESI,ESI                         ; 004aec04
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450 ; 004aec06
        ;   XREF to: 004a2450 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004a2450(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004aec0b
    PUSH 0x40400000                     ; 004aec0e
        ;   Label: LAB_004aec0e
    PUSH 0xc0400000                     ; 004aec13
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004aec18
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x260],EAX     ; 004aec1d
    ADD ESP,0x8                         ; 004aec24
    PUSH 0x41000000                     ; 004aec27
    PUSH 0x0                            ; 004aec2c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004aec2e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x264],EAX     ; 004aec33
    ADD ESP,0x8                         ; 004aec3a
    PUSH 0x40400000                     ; 004aec3d
    PUSH 0xc0400000                     ; 004aec42
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004aec47
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004aec4c
    FLD float ptr [ESP + 0x288]         ; 004aec53
    ADD ESP,0x8                         ; 004aec5a
    MOV EAX,dword ptr [ESP + 0x25c]     ; 004aec5d
    MOV dword ptr [ESP + 0x274],EAX     ; 004aec64
    MOV EAX,dword ptr [ESP + 0x258]     ; 004aec6b
    FSTP float ptr [ESP + 0x270]        ; 004aec72
    MOV dword ptr [ESP + 0x26c],EAX     ; 004aec79
    MOV EAX,dword ptr [ESP + 0x270]     ; 004aec80
    MOV dword ptr [ESP + 0x9c],EAX      ; 004aec87
    MOV EAX,dword ptr [ESP + 0x274]     ; 004aec8e
    MOV dword ptr [ESP + 0xa0],EAX      ; 004aec95
    MOV EAX,dword ptr [ESP + 0x26c]     ; 004aec9c
    LEA EDI,[ESP + 0x1ec]               ; 004aeca3
    MOV dword ptr [ESP + 0xa4],EAX      ; 004aecaa
    LEA EAX,[ESP + 0x9c]                ; 004aecb1
    CMP EDI,EAX                         ; 004aecb8
    JZ 0x004aece6                       ; 004aecba
        ;   XREF to: 004aece6 (CONDITIONAL_JUMP)  ; LAB_004aece6
    MOV EAX,dword ptr [ESP + 0x270]     ; 004aecbc
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004aecc3
    MOV EAX,dword ptr [ESP + 0x274]     ; 004aecca
    MOV dword ptr [ESP + 0x1f0],EAX     ; 004aecd1
    MOV EAX,dword ptr [ESP + 0x26c]     ; 004aecd8
    MOV dword ptr [ESP + 0x1f4],EAX     ; 004aecdf
    PUSH 0xffff                         ; 004aece6
        ;   Label: LAB_004aece6
    PUSH 0x6                            ; 004aeceb
    PUSH 0x10000                        ; 004aeced
    PUSH 0x20000                        ; 004aecf2
    LEA EAX,[ESP + 0x1fc]               ; 004aecf7
    PUSH EAX                            ; 004aecfe
    LEA EAX,[ESP + 0x1f4]               ; 004aecff
    PUSH EAX                            ; 004aed06
    MOV ECX,dword ptr [0x005fc5a0]      ; 004aed07 | DAT_005fc5a0
    PUSH ECX                            ; 004aed0d
    INC ESI                             ; 004aed0e
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 004aed0f
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004aed14
    CMP ESI,0x4                         ; 004aed17
    JL 0x004aec0e                       ; 004aed1a
        ;   XREF to: 004aec0e (CONDITIONAL_JUMP)  ; LAB_004aec0e
    LEA EAX,[ESP + 0xc0]                ; 004aed20
    PUSH EAX                            ; 004aed27
    PUSH 0x5c1d08                       ; 004aed28 | = "wp_flintlock.wav"
    PUSH EBX                            ; 004aed2d
    MOV ESI,dword ptr [0x006045f8]      ; 004aed2e | DAT_006045f8
    PUSH ESI                            ; 004aed34
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004aed35
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004aed3a
    MOV EDI,0x40400000                  ; 004aed3d
    MOV EDX,0xc0800000                  ; 004aed42
    PUSH 0x3ec90fdb                     ; 004aed47
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004aed4c
    PUSH 0xbec90fdb                     ; 004aed56
    MOV dword ptr [ESP + 0x110],EDI     ; 004aed5b
    MOV dword ptr [ESP + 0x114],EDI     ; 004aed62
    MOV dword ptr [ESP + 0x118],EDX     ; 004aed69
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004aed70
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004aed75
    FLD float ptr [ESP + 0x288]         ; 004aed7c
    ADD ESP,0x8                         ; 004aed83
    PUSH 0x3ec90fdb                     ; 004aed86
    PUSH 0xbec90fdb                     ; 004aed8b
    FSTP float ptr [ESP + 0xb0]         ; 004aed90
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004aed97
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004aed9c
    FLD float ptr [ESP + 0x288]         ; 004aeda3
    ADD ESP,0x8                         ; 004aedaa
    LEA EAX,[ESP + 0xa8]                ; 004aedad
    PUSH EAX                            ; 004aedb4
    LEA EAX,[ESP + 0x54]                ; 004aedb5
    XOR ECX,ECX                         ; 004aedb9
    PUSH EAX                            ; 004aedbb
    FSTP float ptr [ESP + 0xb4]         ; 004aedbc
    MOV dword ptr [ESP + 0xb8],ECX      ; 004aedc3
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 004aedca
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004aedcf
    LEA EAX,[ESP + 0x108]               ; 004aedd2
    PUSH EAX                            ; 004aedd9
    LEA EAX,[ESP + 0x54]                ; 004aedda
    PUSH EAX                            ; 004aedde
    LEA ESI,[ESP + 0x98]                ; 004aeddf
    LEA EDI,[ESP + 0x20c]               ; 004aede6
    CALL core_dirmat.cpp_FUN_0045b800   ; 004aeded
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 004aedf2
    LEA EAX,[ESP + 0x204]               ; 004aedf5
    LEA ESI,[ESP + 0x90]                ; 004aedfc
    PUSH EAX                            ; 004aee03
    MOVSD ES:EDI,ESI                    ; 004aee04
    MOVSD ES:EDI,ESI                    ; 004aee05
    MOVSD ES:EDI,ESI                    ; 004aee06
    PUSH EBX                            ; 004aee07
    LEA ESI,[ESP + 0x1ac]               ; 004aee08
    LEA EDI,[ESP + 0x134]               ; 004aee0f
    CALL core_actor.cpp_FUN_00408b00    ; 004aee16
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x1ac]               ; 004aee1b
    LEA EAX,[ESP + 0x134]               ; 004aee22
    ADD ESP,0x8                         ; 004aee29
    LEA EBX,[ESP + 0x108]               ; 004aee2c
    MOVSD ES:EDI,ESI                    ; 004aee33
    MOVSD ES:EDI,ESI                    ; 004aee34
    MOVSD ES:EDI,ESI                    ; 004aee35
    CMP EBX,EAX                         ; 004aee36
    JZ 0x004aee64                       ; 004aee38
        ;   XREF to: 004aee64 (CONDITIONAL_JUMP)  ; LAB_004aee64
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004aee3a
    MOV dword ptr [ESP + 0x108],EAX     ; 004aee41
    MOV EAX,dword ptr [ESP + 0x130]     ; 004aee48
    MOV dword ptr [ESP + 0x10c],EAX     ; 004aee4f
    MOV EAX,dword ptr [ESP + 0x134]     ; 004aee56
    MOV dword ptr [ESP + 0x110],EAX     ; 004aee5d
    MOV EAX,0x1                         ; 004aee64
        ;   Label: LAB_004aee64
    MOV ESP,EBP                         ; 004aee69
    POP EBP                             ; 004aee6b
    POP EDI                             ; 004aee6c
    POP ESI                             ; 004aee6d
    POP EBX                             ; 004aee6e
    RET                                 ; 004aee6f
    LEA EAX,[ESP + 0xc0]                ; 004aee70
        ;   Label: LAB_004aee70
    PUSH EAX                            ; 004aee77
    PUSH 0x5c1cae                       ; 004aee78 | = "wp_noammo.wav"
    PUSH EBX                            ; 004aee7d
    MOV EDX,dword ptr [0x006045f8]      ; 004aee7e | DAT_006045f8
    PUSH EDX                            ; 004aee84
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 004aee85
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004aee8a
    MOV dword ptr [EBX + 0x300],0x3f800000 ; 004aee8d
    XOR EAX,EAX                         ; 004aee97
    MOV ESP,EBP                         ; 004aee99
    POP EBP                             ; 004aee9b
    POP EDI                             ; 004aee9c
    POP ESI                             ; 004aee9d
    POP EBX                             ; 004aee9e
    RET                                 ; 004aee9f
    PUSH ESI                            ; 004aeea0
        ;   Label: LAB_004aeea0
    MOV EAX,[0x00603b28]                ; 004aeea1 | g_CDemonSetPtr
    PUSH EAX                            ; 004aeea6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004aeea7
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004aeeac
    JMP 0x004aea71                      ; 004aeeaf
        ;   XREF to: 004aea71 (UNCONDITIONAL_JUMP)  ; LAB_004aea71
    FLD1                                ; 004aeeb4
        ;   Label: LAB_004aeeb4
    FCOMP double ptr [ESP + 0x8]        ; 004aeeb6
    FNSTSW AX                           ; 004aeeba
    SAHF                                ; 004aeebc
    JC 0x004aeabc                       ; 004aeebd
        ;   XREF to: 004aeabc (CONDITIONAL_JUMP)  ; LAB_004aeabc
    MOV ESI,dword ptr [0x007e2cec]      ; 004aeec3 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00603b28]                ; 004aeec9 | g_CDemonSetPtr
    PUSH ESI                            ; 004aeece
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004aeecf | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004aeed5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004aeed6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004aeedb
    MOV dword ptr [ESP + 0x27c],EAX     ; 004aeede
    TEST EAX,EAX                        ; 004aeee5
    JZ 0x004aef06                       ; 004aeee7
        ;   XREF to: 004aef06 (CONDITIONAL_JUMP)  ; LAB_004aef06
    PUSH EAX                            ; 004aeee9
    MOV ESI,dword ptr [EAX + 0x154]     ; 004aeeea
    CALL dword ptr [ESI + 0x10c]        ; 004aeef0
    ADD ESP,0x4                         ; 004aeef6
    TEST EAX,EAX                        ; 004aeef9
    JLE 0x004aef06                      ; 004aeefb
        ;   XREF to: 004aef06 (CONDITIONAL_JUMP)  ; LAB_004aef06
    XOR EAX,EAX                         ; 004aeefd
    MOV dword ptr [ESP + 0x27c],EAX     ; 004aeeff
    MOV EDX,dword ptr [0x01d22e04]      ; 004aef06 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_004aef06
    MOV EAX,[0x00603b28]                ; 004aef0c | g_CDemonSetPtr
    PUSH EDX                            ; 004aef11
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 004aef12 | g_CDemonSetInstance.collision_actor
    PUSH ECX                            ; 004aef18
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004aef19
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,dword ptr [0x02cfd894]      ; 004aef1e | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 004aef24
    MOV EDI,EAX                         ; 004aef27
    MOV EAX,[0x00603b28]                ; 004aef29 | g_CDemonSetPtr
    PUSH ESI                            ; 004aef2e
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004aef2f | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004aef35
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004aef36
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004aef3b
    MOV ESI,EAX                         ; 004aef3e
    MOV ECX,dword ptr [ESP + 0x27c]     ; 004aef40
    MOV dword ptr [ESP + 0x268],EAX     ; 004aef47
    TEST ECX,ECX                        ; 004aef4e
    JNZ 0x004af10a                      ; 004aef50
        ;   XREF to: 004af10a (CONDITIONAL_JUMP)  ; LAB_004af10a
    TEST EDI,EDI                        ; 004aef56
    JNZ 0x004af353                      ; 004aef58
        ;   XREF to: 004af353 (CONDITIONAL_JUMP)  ; LAB_004af353
    TEST EAX,EAX                        ; 004aef5e
    JNZ 0x004af37a                      ; 004aef60
        ;   XREF to: 004af37a (CONDITIONAL_JUMP)  ; LAB_004af37a
    PUSH EAX                            ; 004aef66
    MOV EAX,[0x00603b28]                ; 004aef67 | g_CDemonSetPtr
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004aef6c | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004aef72
    MOV EDI,dword ptr [EAX + 0x14d134]  ; 004aef73 | g_CDemonSetInstance.ground_type
    PUSH EDI                            ; 004aef79
    LEA ESI,[EAX + 0x14d128]            ; 004aef7a
    PUSH ESI                            ; 004aef80 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 004aef81
    PUSH EAX                            ; 004aef86 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,[0x005fc5a0]                ; 004aef87 | DAT_005fc5a0
    PUSH EAX                            ; 004aef8c
    LEA EDI,[ESP + 0x24c]               ; 004aef8d
    CALL core_fire.cpp_FUN_004a2090     ; 004aef94
        ;   XREF to: 004a2090 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a2090()
    MOV EAX,[0x00603b28]                ; 004aef99 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x180]               ; 004aef9e
    ADD ESP,0x18                        ; 004aefa5
    FLD float ptr [EAX + 0x14d138]      ; 004aefa8 | g_CDemonSetInstance.collision_impact_position.x
    FLD float ptr [EAX + 0x14d13c]      ; 004aefae | g_CDemonSetInstance.collision_impact_position.y
    FLD float ptr [EAX + 0x14d140]      ; 004aefb4 | g_CDemonSetInstance.collision_impact_position.z
    FXCH ST2                            ; 004aefba
    FSUB float ptr [ESP + 0x144]        ; 004aefbc
    FXCH                                ; 004aefc3
    FSUB float ptr [ESP + 0x148]        ; 004aefc5
    FXCH ST2                            ; 004aefcc
    FSUB float ptr [ESP + 0x14c]        ; 004aefce
    FXCH                                ; 004aefd5
    FSTP float ptr [ESP + 0x168]        ; 004aefd7
    FXCH                                ; 004aefde
    FSTP float ptr [ESP + 0x16c]        ; 004aefe0
    FSTP float ptr [ESP + 0x170]        ; 004aefe7
    MOVSD ES:EDI,ESI                    ; 004aefee
    MOVSD ES:EDI,ESI                    ; 004aefef
    MOVSD ES:EDI,ESI                    ; 004aeff0
    LEA EAX,[ESP + 0x1f8]               ; 004aeff1
    LEA ESI,[ESP + 0x234]               ; 004aeff8
    CMP EAX,ESI                         ; 004aefff
    JZ 0x004af02d                       ; 004af001
        ;   XREF to: 004af02d (CONDITIONAL_JUMP)  ; LAB_004af02d
    MOV EAX,dword ptr [ESP + 0x234]     ; 004af003
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004af00a
    MOV EAX,dword ptr [ESP + 0x238]     ; 004af011
    MOV dword ptr [ESP + 0x1fc],EAX     ; 004af018
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004af01f
    MOV dword ptr [ESP + 0x200],EAX     ; 004af026
    FLD float ptr [ESP + 0x1fc]         ; 004af02d
        ;   Label: LAB_004af02d
    FMUL ST0                            ; 004af034
    FLD float ptr [ESP + 0x1f8]         ; 004af036
    FMUL ST0                            ; 004af03d
    FADDP                               ; 004af03f
    FLD float ptr [ESP + 0x200]         ; 004af041
    FMUL ST0                            ; 004af048
    FADDP                               ; 004af04a
    FSQRT                               ; 004af04c
    FCOMP float ptr [0x005c1d25]        ; 004af04e | DAT_005c1d25
    FNSTSW AX                           ; 004af054
    SAHF                                ; 004af056
    JNC 0x004aeabc                      ; 004af057
        ;   XREF to: 004aeabc (CONDITIONAL_JUMP)  ; LAB_004aeabc
    PUSH 0x3f800000                     ; 004af05d
    PUSH 0x0                            ; 004af062
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004af064
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004af069
    MOV EAX,[0x00603b28]                ; 004af070 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x288]         ; 004af075
    ADD ESP,0x8                         ; 004af07c
    MOV EAX,dword ptr [EAX + 0x14d134]  ; 004af07f | g_CDemonSetInstance.ground_type
    FSTP float ptr [ESP + 0x10]         ; 004af085
    CMP EAX,0x7                         ; 004af089
    JNC 0x004af521                      ; 004af08c
        ;   XREF to: 004af521 (CONDITIONAL_JUMP)  ; LAB_004af521
    CMP EAX,0x2                         ; 004af092
    JNZ 0x004af530                      ; 004af095
        ;   XREF to: 004af530 (CONDITIONAL_JUMP)  ; LAB_004af530
    FLD float ptr [ESP + 0x10]          ; 004af09b
        ;   Label: LAB_004af09b
    FST double ptr [ESP]                ; 004af09f
    FCOMP double ptr [0x005c1d35]       ; 004af0a2 | DAT_005c1d35
    FNSTSW AX                           ; 004af0a8
    SAHF                                ; 004af0aa
    JC 0x004af3f2                       ; 004af0ab
        ;   XREF to: 004af3f2 (CONDITIONAL_JUMP)  ; LAB_004af3f2
    FLD double ptr [ESP]                ; 004af0b1
    FCOMP double ptr [0x005c1d3d]       ; 004af0b4 | DAT_005c1d3d
    FNSTSW AX                           ; 004af0ba
    SAHF                                ; 004af0bc
    JNC 0x004af43a                      ; 004af0bd
        ;   XREF to: 004af43a (CONDITIONAL_JUMP)  ; LAB_004af43a
    PUSH 0x3e4ccccd                     ; 004af0c3
    PUSH 0x3dcccccd                     ; 004af0c8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004af0cd
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004af0d2
    FLD float ptr [ESP + 0x288]         ; 004af0d9
    ADD ESP,0x8                         ; 004af0e0
    SUB ESP,0x4                         ; 004af0e3
    LEA EAX,[ESP + 0xc4]                ; 004af0e6
    FSTP float ptr [ESP]                ; 004af0ed
    PUSH EAX                            ; 004af0f0
    PUSH 0x5c1cc9                       ; 004af0f1 | = "RIC-CT0B.WAV"
    PUSH EBX                            ; 004af0f6
    MOV EAX,[0x006045f8]                ; 004af0f7 | DAT_006045f8
    PUSH EAX                            ; 004af0fc
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004af0fd
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004af102
    JMP 0x004aeabc                      ; 004af105
        ;   XREF to: 004aeabc (UNCONDITIONAL_JUMP)  ; LAB_004aeabc
    PUSH ECX                            ; 004af10a
        ;   Label: LAB_004af10a
    MOV EAX,dword ptr [ECX + 0x154]     ; 004af10b
    CALL dword ptr [EAX + 0xe0]         ; 004af111
    ADD ESP,0x4                         ; 004af117
    TEST EAX,EAX                        ; 004af11a
    JNZ 0x004aeabc                      ; 004af11c
        ;   XREF to: 004aeabc (CONDITIONAL_JUMP)  ; LAB_004aeabc
    LEA EAX,[ESP + 0x14]                ; 004af122
    PUSH EAX                            ; 004af126
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004af127
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,[0x00603b28]                ; 004af12c | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004af131
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 004af134 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x14],EAX      ; 004af13a
    PUSH EBX                            ; 004af13e
    MOV EAX,dword ptr [EBX + 0x154]     ; 004af13f
    LEA EDI,[ESP + 0x184]               ; 004af145
    CALL dword ptr [EAX + 0xec]         ; 004af14c
    MOV ECX,0x3ecccccd                  ; 004af152
    MOV dword ptr [ESP + 0x284],EAX     ; 004af157
    MOV ESI,dword ptr [0x00603b28]      ; 004af15e | g_CDemonSetPtr
    FLD float ptr [ESP + 0x284]         ; 004af164
    ADD ESP,0x4                         ; 004af16b
    LEA EAX,[ESI + 0x14d11c]            ; 004af16e
    MOV dword ptr [ESP + 0x1c],ECX      ; 004af174
    FSTP float ptr [ESP + 0x18]         ; 004af178
    FLD float ptr [EAX]                 ; 004af17c | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 004af17e | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 004af181 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 004af184
    FSUB float ptr [ESI + 0x14d110]     ; 004af186 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 004af18c
    FSUB float ptr [ESI + 0x14d114]     ; 004af18e | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 004af194
    FSUB float ptr [ESI + 0x14d118]     ; 004af196 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 004af19c
    FSTP float ptr [ESP + 0x24c]        ; 004af19e
    FXCH                                ; 004af1a5
    FSTP float ptr [ESP + 0x250]        ; 004af1a7
    LEA ESI,[ESP + 0x24c]               ; 004af1ae
    FSTP float ptr [ESP + 0x254]        ; 004af1b5
    MOVSD ES:EDI,ESI                    ; 004af1bc
    MOVSD ES:EDI,ESI                    ; 004af1bd
    MOVSD ES:EDI,ESI                    ; 004af1be
    FLD float ptr [ESP + 0x184]         ; 004af1bf
    FMUL ST0                            ; 004af1c6
    FLD float ptr [ESP + 0x180]         ; 004af1c8
    FMUL ST0                            ; 004af1cf
    FADDP                               ; 004af1d1
    FLD float ptr [ESP + 0x188]         ; 004af1d3
    FMUL ST0                            ; 004af1da
    FADDP                               ; 004af1dc
    FSQRT                               ; 004af1de
    FDIVR double ptr [0x005c1d45]       ; 004af1e0 | DAT_005c1d45
    FLD float ptr [ESP + 0x180]         ; 004af1e6
    FXCH                                ; 004af1ed
    FSTP float ptr [ESP + 0x260]        ; 004af1ef
    FMUL float ptr [ESP + 0x260]        ; 004af1f6
    FLD float ptr [ESP + 0x184]         ; 004af1fd
    FMUL float ptr [ESP + 0x260]        ; 004af204
    FLD float ptr [ESP + 0x188]         ; 004af20b
    FMUL float ptr [ESP + 0x260]        ; 004af212
    LEA EDI,[ESP + 0xfc]                ; 004af219
    LEA ESI,[ESP + 0x228]               ; 004af220
    FXCH ST2                            ; 004af227
    FSTP float ptr [ESP + 0x228]        ; 004af229
    FSTP float ptr [ESP + 0x22c]        ; 004af230
    FSTP float ptr [ESP + 0x230]        ; 004af237
    MOVSD ES:EDI,ESI                    ; 004af23e
    MOVSD ES:EDI,ESI                    ; 004af23f
    MOVSD ES:EDI,ESI                    ; 004af240
    LEA EAX,[ESP + 0x20]                ; 004af241
    LEA ESI,[ESP + 0xfc]                ; 004af245
    CMP EAX,ESI                         ; 004af24c
    JZ 0x004af271                       ; 004af24e
        ;   XREF to: 004af271 (CONDITIONAL_JUMP)  ; LAB_004af271
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004af250
    MOV dword ptr [ESP + 0x20],EAX      ; 004af257
    MOV EAX,dword ptr [ESP + 0x100]     ; 004af25b
    MOV dword ptr [ESP + 0x24],EAX      ; 004af262
    MOV EAX,dword ptr [ESP + 0x104]     ; 004af266
    MOV dword ptr [ESP + 0x28],EAX      ; 004af26d
    MOV EAX,[0x00603b28]                ; 004af271 | g_CDemonSetPtr
        ;   Label: LAB_004af271
    ADD EAX,0x14d138                    ; 004af276
    PUSH EAX                            ; 004af27b | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [ESP + 0x280]     ; 004af27c
    PUSH ESI                            ; 004af283
    LEA ESI,[ESP + 0x164]               ; 004af284
    LEA EDI,[ESP + 0x80]                ; 004af28b
    CALL core_actor.cpp_FUN_00408bf0    ; 004af292
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x164]               ; 004af297
    ADD ESP,0x8                         ; 004af29e
    MOVSD ES:EDI,ESI                    ; 004af2a1
    MOVSD ES:EDI,ESI                    ; 004af2a2
    MOVSD ES:EDI,ESI                    ; 004af2a3
    LEA EAX,[ESP + 0x30]                ; 004af2a4
    LEA ESI,[ESP + 0x78]                ; 004af2a8
    CMP EAX,ESI                         ; 004af2ac
    JZ 0x004af2cb                       ; 004af2ae
        ;   XREF to: 004af2cb (CONDITIONAL_JUMP)  ; LAB_004af2cb
    MOV EAX,dword ptr [ESP + 0x78]      ; 004af2b0
    MOV dword ptr [ESP + 0x30],EAX      ; 004af2b4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004af2b8
    MOV dword ptr [ESP + 0x34],EAX      ; 004af2bc
    MOV EAX,dword ptr [ESP + 0x80]      ; 004af2c0
    MOV dword ptr [ESP + 0x38],EAX      ; 004af2c7
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004af2cb
        ;   Label: LAB_004af2cb
    MOV EDI,0x65                        ; 004af2d1
    MOV dword ptr [ESP + 0x3c],EAX      ; 004af2d6
    MOV dword ptr [ESP + 0x44],EDI      ; 004af2da
    MOV EAX,0x3e19999a                  ; 004af2de
    MOV dword ptr [ESP + 0x48],EBX      ; 004af2e3
    MOV dword ptr [ESP + 0x40],EAX      ; 004af2e7
    PUSH EBX                            ; 004af2eb
    MOV EAX,dword ptr [EBX + 0x154]     ; 004af2ec
    CALL dword ptr [EAX + 0x94]         ; 004af2f2
    ADD ESP,0x4                         ; 004af2f8
    MOV dword ptr [ESP + 0x4c],EAX      ; 004af2fb
    LEA EAX,[ESP + 0x14]                ; 004af2ff
    MOV ESI,dword ptr [ESP + 0x27c]     ; 004af303
    PUSH EAX                            ; 004af30a
    MOV EDX,dword ptr [ESP + 0x280]     ; 004af30b
    MOV ESI,dword ptr [ESI + 0x154]     ; 004af312
    PUSH EDX                            ; 004af318
    CALL dword ptr [ESI + 0x108]        ; 004af319
    ADD ESP,0x8                         ; 004af31f
    MOV EAX,dword ptr [ESP + 0x27c]     ; 004af322
    MOV ECX,dword ptr [EAX + 0x27a0]    ; 004af329
    PUSH ECX                            ; 004af32f
    PUSH 0x4                            ; 004af330
    MOV EAX,[0x00603b28]                ; 004af332 | g_CDemonSetPtr
    PUSH 0x0                            ; 004af337
    ADD EAX,0x14d138                    ; 004af339
    PUSH EAX                            ; 004af33e | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x005fed24]      ; 004af33f | g_CGorePtr
    PUSH ESI                            ; 004af345
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 004af346
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 004af34b
    JMP 0x004aeabc                      ; 004af34e
        ;   XREF to: 004aeabc (UNCONDITIONAL_JUMP)  ; LAB_004aeabc
    PUSH EDI                            ; 004af353
        ;   Label: LAB_004af353
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0 ; 004af354
        ;   XREF to: 004cc5d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004cc5d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004af359
    TEST EAX,EAX                        ; 004af35c
    JZ 0x004aeabc                       ; 004af35e
        ;   XREF to: 004aeabc (CONDITIONAL_JUMP)  ; LAB_004aeabc
    MOV EAX,[0x00603b28]                ; 004af364 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004af369
    PUSH EAX                            ; 004af36e | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 004af36f
    CALL core_glass.cpp_FUN_004cc040    ; 004af370
        ;   XREF to: 004cc040 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004cc040()
    ADD ESP,0x8                         ; 004af375
    JMP 0x004af3d5                      ; 004af378
        ;   XREF to: 004af3d5 (UNCONDITIONAL_JUMP)  ; LAB_004af3d5
    PUSH EAX                            ; 004af37a
        ;   Label: LAB_004af37a
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0 ; 004af37b
        ;   XREF to: 0056edc0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0056edc0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 004af380
    PUSH EBX                            ; 004af383
    PUSH ESI                            ; 004af384
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0 ; 004af385
        ;   XREF to: 0056ede0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004af38a
    TEST EAX,EAX                        ; 004af38d
    JZ 0x004af3be                       ; 004af38f
        ;   XREF to: 004af3be (CONDITIONAL_JUMP)  ; LAB_004af3be
    PUSH EBX                            ; 004af391
    MOV EAX,dword ptr [EBX + 0x154]     ; 004af392
    CALL dword ptr [EAX + 0xec]         ; 004af398
    MOV dword ptr [ESP + 0x284],EAX     ; 004af39e
    FLD float ptr [ESP + 0x284]         ; 004af3a5
    ADD ESP,0x4                         ; 004af3ac
    SUB ESP,0x4                         ; 004af3af
    FSTP float ptr [ESP]                ; 004af3b2
    PUSH ESI                            ; 004af3b5
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20 ; 004af3b6
        ;   XREF to: 0056ee20 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0056ee20(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004af3bb
    MOV ECX,dword ptr [ESP + 0x268]     ; 004af3be
        ;   Label: LAB_004af3be
    PUSH ECX                            ; 004af3c5
    MOV ESI,dword ptr [0x00603b28]      ; 004af3c6 | g_CDemonSetPtr
    PUSH ESI                            ; 004af3cc | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004af3cd
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004af3d2
    MOV EDI,dword ptr [ESP + 0x278]     ; 004af3d5
        ;   Label: LAB_004af3d5
    INC EDI                             ; 004af3dc
    MOV dword ptr [ESP + 0x278],EDI     ; 004af3dd
    CMP EDI,0x4                         ; 004af3e4
    JL 0x004aea7a                       ; 004af3e7
        ;   XREF to: 004aea7a (CONDITIONAL_JUMP)  ; LAB_004aea7a
    JMP 0x004aeabc                      ; 004af3ed
        ;   XREF to: 004aeabc (UNCONDITIONAL_JUMP)  ; LAB_004aeabc
    PUSH 0x3e4ccccd                     ; 004af3f2
        ;   Label: LAB_004af3f2
    PUSH 0x3dcccccd                     ; 004af3f7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004af3fc
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004af401
    FLD float ptr [ESP + 0x288]         ; 004af408
    ADD ESP,0x8                         ; 004af40f
    SUB ESP,0x4                         ; 004af412
    LEA EAX,[ESP + 0xc4]                ; 004af415
    FSTP float ptr [ESP]                ; 004af41c
    PUSH EAX                            ; 004af41f
    PUSH 0x5c1cbc                       ; 004af420 | = "RIC-CT0A.WAV"
    PUSH EBX                            ; 004af425
    MOV EDX,dword ptr [0x006045f8]      ; 004af426 | DAT_006045f8
    PUSH EDX                            ; 004af42c
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004af42d
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004af432
    JMP 0x004aeabc                      ; 004af435
        ;   XREF to: 004aeabc (UNCONDITIONAL_JUMP)  ; LAB_004aeabc
    PUSH 0x3e4ccccd                     ; 004af43a
        ;   Label: LAB_004af43a
    PUSH 0x3dcccccd                     ; 004af43f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004af444
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004af449
    FLD float ptr [ESP + 0x288]         ; 004af450
    ADD ESP,0x8                         ; 004af457
    SUB ESP,0x4                         ; 004af45a
    LEA EAX,[ESP + 0xc4]                ; 004af45d
    FSTP float ptr [ESP]                ; 004af464
    PUSH EAX                            ; 004af467
    PUSH 0x5c1cd6                       ; 004af468 | = "RIC-CT0C.WAV"
    PUSH EBX                            ; 004af46d
    MOV EDI,dword ptr [0x006045f8]      ; 004af46e | DAT_006045f8
    PUSH EDI                            ; 004af474
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004af475
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004af47a
    JMP 0x004aeabc                      ; 004af47d
        ;   XREF to: 004aeabc (UNCONDITIONAL_JUMP)  ; LAB_004aeabc
    FLD float ptr [ESP + 0x10]          ; 004af482
        ;   Label: LAB_004af482
    FCOMP double ptr [0x005c1d2d]       ; 004af486 | DAT_005c1d2d
    FNSTSW AX                           ; 004af48c
    SAHF                                ; 004af48e
    JNC 0x004af4d9                      ; 004af48f
        ;   XREF to: 004af4d9 (CONDITIONAL_JUMP)  ; LAB_004af4d9
    PUSH 0x3e4ccccd                     ; 004af491
    PUSH 0x3dcccccd                     ; 004af496
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004af49b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004af4a0
    FLD float ptr [ESP + 0x288]         ; 004af4a7
    ADD ESP,0x8                         ; 004af4ae
    SUB ESP,0x4                         ; 004af4b1
    LEA EAX,[ESP + 0xc4]                ; 004af4b4
    FSTP float ptr [ESP]                ; 004af4bb
    PUSH EAX                            ; 004af4be
    PUSH 0x5c1ce3                       ; 004af4bf | = "RIC-WD0B.WAV"
    PUSH EBX                            ; 004af4c4
    MOV ECX,dword ptr [0x006045f8]      ; 004af4c5 | DAT_006045f8
    PUSH ECX                            ; 004af4cb
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004af4cc
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004af4d1
    JMP 0x004aeabc                      ; 004af4d4
        ;   XREF to: 004aeabc (UNCONDITIONAL_JUMP)  ; LAB_004aeabc
    PUSH 0x3e4ccccd                     ; 004af4d9
        ;   Label: LAB_004af4d9
    PUSH 0x3dcccccd                     ; 004af4de
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004af4e3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004af4e8
    FLD float ptr [ESP + 0x288]         ; 004af4ef
    ADD ESP,0x8                         ; 004af4f6
    SUB ESP,0x4                         ; 004af4f9
    LEA EAX,[ESP + 0xc4]                ; 004af4fc
    FSTP float ptr [ESP]                ; 004af503
    PUSH EAX                            ; 004af506
    PUSH 0x5c1cf0                       ; 004af507 | = "RIC-WD0C.WAV"
    PUSH EBX                            ; 004af50c
    MOV EDX,dword ptr [0x006045f8]      ; 004af50d | DAT_006045f8
    PUSH EDX                            ; 004af513
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004af514
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004af519
    JMP 0x004aeabc                      ; 004af51c
        ;   XREF to: 004aeabc (UNCONDITIONAL_JUMP)  ; LAB_004aeabc
    JBE 0x004af482                      ; 004af521
        ;   XREF to: 004af482 (CONDITIONAL_JUMP)  ; LAB_004af482
        ;   Label: LAB_004af521
    CMP EAX,0x8                         ; 004af527
    JZ 0x004af09b                       ; 004af52a
        ;   XREF to: 004af09b (CONDITIONAL_JUMP)  ; LAB_004af09b
    PUSH 0x3e4ccccd                     ; 004af530
        ;   Label: LAB_004af530
    PUSH 0x3dcccccd                     ; 004af535
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004af53a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004af53f
    FLD float ptr [ESP + 0x288]         ; 004af546
    ADD ESP,0x8                         ; 004af54d
    SUB ESP,0x4                         ; 004af550
    LEA EAX,[ESP + 0xc4]                ; 004af553
    FSTP float ptr [ESP]                ; 004af55a
    PUSH EAX                            ; 004af55d
    PUSH 0x5c1cfd                       ; 004af55e | = "RIC-DT.WAV"
    PUSH EBX                            ; 004af563
    MOV ESI,dword ptr [0x006045f8]      ; 004af564 | DAT_006045f8
    PUSH ESI                            ; 004af56a
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70 ; 004af56b
        ;   XREF to: 00560a70 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_00560a70(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004af570
    JMP 0x004aeabc                      ; 004af573
        ;   XREF to: 004aeabc (UNCONDITIONAL_JUMP)  ; LAB_004aeabc

