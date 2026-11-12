; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gun_cpp_CGun_fire_FUN_004cbdc0(CGun *this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_005d97c0
;   TerminatedCString s_s_45_wav_005d97cd
;   TerminatedCString s_gatbullet_kfm_005d97d4
;   undefined4 DAT_005d97e6
;   undefined4 DAT_005d97ee
;   undefined4 DAT_005d97f6
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_crate.cpp_FUN_0043a350
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_dmodel.cpp_loadModel_FUN_0044fba0
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50
;   core_fire.cpp_CFireEffect_createShell_FUN_0049e970
;   core_fire.cpp_FUN_0049d120
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbdc0
        ;   Label: core_gun.cpp_CGun_fire_FUN_004cbdc0
    PUSH ESI                            ; 004cbdc1
    PUSH EDI                            ; 004cbdc2
    PUSH EBP                            ; 004cbdc3
    MOV EBP,ESP                         ; 004cbdc4
    SUB ESP,0x1c0                       ; 004cbdc6
    AND ESP,0xfffffff8                  ; 004cbdcc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cbdcf
    PUSH EBX                            ; 004cbdd2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cbdd3
    LEA ESI,[ESP + 0x13c]               ; 004cbdd9
    LEA EDI,[ESP + 0xb8]                ; 004cbde0
    CALL dword ptr [EAX + 0xe8]         ; 004cbde7
    ADD ESP,0x4                         ; 004cbded
    LEA EAX,[ESP + 0xb4]                ; 004cbdf0
    LEA ESI,[ESP + 0x138]               ; 004cbdf7
    PUSH EAX                            ; 004cbdfe
    MOVSD ES:EDI,ESI                    ; 004cbdff
    MOVSD ES:EDI,ESI                    ; 004cbe00
    MOVSD ES:EDI,ESI                    ; 004cbe01
    PUSH EBX                            ; 004cbe02
    LEA ESI,[ESP + 0x80]                ; 004cbe03
    CALL core_actor.cpp_FUN_00408d70    ; 004cbe0a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004cbe0f
    LEA EDI,[ESP + 0xa8]                ; 004cbe12
    LEA ESI,[ESP + 0x78]                ; 004cbe19
    PUSH EBX                            ; 004cbe1d
    MOVSD ES:EDI,ESI                    ; 004cbe1e
    MOVSD ES:EDI,ESI                    ; 004cbe1f
    MOVSD ES:EDI,ESI                    ; 004cbe20
    CALL core_weapon.cpp_CWeapon_fire_FUN_0058a290 ; 004cbe21
        ;   XREF to: 0058a290 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0058a290(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004cbe26
    TEST EAX,EAX                        ; 004cbe29
    JZ 0x004cc1dd                       ; 004cbe2b
        ;   XREF to: 004cc1dd (CONDITIONAL_JUMP)  ; LAB_004cc1dd
    MOV EAX,dword ptr [EBX + 0x444]     ; 004cbe31
    MOV dword ptr [ESP + 0xd4],EAX      ; 004cbe37
    LEA EAX,[ESP + 0xcc]                ; 004cbe3e
    LEA ESI,[ESP + 0x15c]               ; 004cbe45
    PUSH EAX                            ; 004cbe4c
    LEA EDI,[ESP + 0x124]               ; 004cbe4d
    XOR ECX,ECX                         ; 004cbe54
    PUSH EBX                            ; 004cbe56
    MOV dword ptr [ESP + 0xd4],ECX      ; 004cbe57
    MOV dword ptr [ESP + 0xd8],ECX      ; 004cbe5e
    CALL core_actor.cpp_FUN_00408cf0    ; 004cbe65
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 004cbe6a
    LEA ESI,[ESP + 0x15c]               ; 004cbe6d
    FLD float ptr [ESP + 0xa8]          ; 004cbe74
    FLD float ptr [ESP + 0xac]          ; 004cbe7b
    MOVSD ES:EDI,ESI                    ; 004cbe82
    MOVSD ES:EDI,ESI                    ; 004cbe83
    MOVSD ES:EDI,ESI                    ; 004cbe84
    FLD float ptr [ESP + 0xb0]          ; 004cbe85
    LEA EDI,[ESP + 0xf0]                ; 004cbe8c
    LEA ESI,[ESP + 0xfc]                ; 004cbe93
    FXCH ST2                            ; 004cbe9a
    FADD float ptr [ESP + 0x120]        ; 004cbe9c
    FXCH                                ; 004cbea3
    FADD float ptr [ESP + 0x124]        ; 004cbea5
    FXCH ST2                            ; 004cbeac
    FADD float ptr [ESP + 0x128]        ; 004cbeae
    FXCH                                ; 004cbeb5
    FSTP float ptr [ESP + 0xfc]         ; 004cbeb7
    FXCH                                ; 004cbebe
    FSTP float ptr [ESP + 0x100]        ; 004cbec0
    FSTP float ptr [ESP + 0x104]        ; 004cbec7
    MOVSD ES:EDI,ESI                    ; 004cbece
    MOVSD ES:EDI,ESI                    ; 004cbecf
    MOVSD ES:EDI,ESI                    ; 004cbed0
    FLD float ptr [EBX + 0x444]         ; 004cbed1
    FDIVR double ptr [0x005d97e6]       ; 004cbed7 | DAT_005d97e6
    FLD float ptr [ESP + 0x120]         ; 004cbedd
    FXCH                                ; 004cbee4
    FSTP float ptr [ESP + 0x1a8]        ; 004cbee6
    FMUL float ptr [ESP + 0x1a8]        ; 004cbeed
    FLD float ptr [ESP + 0x124]         ; 004cbef4
    FMUL float ptr [ESP + 0x1a8]        ; 004cbefb
    FLD float ptr [ESP + 0x128]         ; 004cbf02
    FMUL float ptr [ESP + 0x1a8]        ; 004cbf09
    FLD float ptr [ESP + 0xa8]          ; 004cbf10
    FLD float ptr [ESP + 0xac]          ; 004cbf17
    LEA EDI,[ESP + 0x114]               ; 004cbf1e
    LEA ESI,[ESP + 0x180]               ; 004cbf25
    FXCH ST4                            ; 004cbf2c
    FSTP float ptr [ESP + 0x180]        ; 004cbf2e
    FXCH ST2                            ; 004cbf35
    FSTP float ptr [ESP + 0x184]        ; 004cbf37
    FSTP float ptr [ESP + 0x188]        ; 004cbf3e
    MOVSD ES:EDI,ESI                    ; 004cbf45
    MOVSD ES:EDI,ESI                    ; 004cbf46
    MOVSD ES:EDI,ESI                    ; 004cbf47
    FLD float ptr [ESP + 0xb0]          ; 004cbf48
    LEA EDI,[ESP + 0x9c]                ; 004cbf4f
    LEA ESI,[ESP + 0x198]               ; 004cbf56
    FXCH                                ; 004cbf5d
    FSUB float ptr [ESP + 0x114]        ; 004cbf5f
    FXCH ST2                            ; 004cbf66
    FSUB float ptr [ESP + 0x118]        ; 004cbf68
    FXCH                                ; 004cbf6f
    FSUB float ptr [ESP + 0x11c]        ; 004cbf71
    FXCH ST2                            ; 004cbf78
    FSTP float ptr [ESP + 0x198]        ; 004cbf7a
    FSTP float ptr [ESP + 0x19c]        ; 004cbf81
    FSTP float ptr [ESP + 0x1a0]        ; 004cbf88
    MOVSD ES:EDI,ESI                    ; 004cbf8f
    MOVSD ES:EDI,ESI                    ; 004cbf90
    MOVSD ES:EDI,ESI                    ; 004cbf91
    MOV EDI,dword ptr [0x0061b5a8]      ; 004cbf92 | g_CDemonSetPtr
    PUSH EDI                            ; 004cbf98 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004cbf99
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004cbf9e
    PUSH 0x1                            ; 004cbfa1
    MOV EAX,[0x0061b5a8]                ; 004cbfa3 | g_CDemonSetPtr
    PUSH EAX                            ; 004cbfa8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 004cbfa9
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004cbfae
    PUSH EBX                            ; 004cbfb1
    MOV EDX,dword ptr [0x0061b5a8]      ; 004cbfb2 | g_CDemonSetPtr
    PUSH EDX                            ; 004cbfb8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004cbfb9
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x460]     ; 004cbfbe
    ADD ESP,0x8                         ; 004cbfc4
    TEST ECX,ECX                        ; 004cbfc7
    JNZ 0x004cc203                      ; 004cbfc9
        ;   XREF to: 004cc203 (CONDITIONAL_JUMP)  ; LAB_004cc203
    XOR EAX,EAX                         ; 004cbfcf
        ;   Label: LAB_004cbfcf
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004cbfd1
    LEA EAX,[ESP + 0xf0]                ; 004cbfd8
        ;   Label: LAB_004cbfd8
    PUSH EAX                            ; 004cbfdf
    LEA EAX,[ESP + 0xa0]                ; 004cbfe0
    PUSH EAX                            ; 004cbfe7
    MOV EDX,dword ptr [0x0061b5a8]      ; 004cbfe8 | g_CDemonSetPtr
    PUSH EDX                            ; 004cbfee | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 004cbfef
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x1c8],EAX     ; 004cbff4
    FLD float ptr [ESP + 0x1c8]         ; 004cbffb
    ADD ESP,0xc                         ; 004cc002
    FLDZ                                ; 004cc005
    FXCH                                ; 004cc007
    FSTP double ptr [ESP]               ; 004cc009
    FCOMP double ptr [ESP]              ; 004cc00c
    FNSTSW AX                           ; 004cc00f
    SAHF                                ; 004cc011
    JBE 0x004cc218                      ; 004cc012
        ;   XREF to: 004cc218 (CONDITIONAL_JUMP)  ; LAB_004cc218
    MOV EDI,dword ptr [0x0061b5a8]      ; 004cc018 | g_CDemonSetPtr
        ;   Label: LAB_004cc018
    PUSH EDI                            ; 004cc01e | g_CDemonSetInstance
    LEA ESI,[ESP + 0xac]                ; 004cc01f
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004cc026
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004cc02b
    LEA EAX,[EBX + 0x3c]                ; 004cc02e
    LEA EDI,[ESP + 0x108]               ; 004cc031
    PUSH EAX                            ; 004cc038
    MOVSD ES:EDI,ESI                    ; 004cc039
    MOVSD ES:EDI,ESI                    ; 004cc03a
    MOVSD ES:EDI,ESI                    ; 004cc03b
    LEA EAX,[ESP + 0x10c]               ; 004cc03c
    FLD float ptr [ESP + 0x110]         ; 004cc043
    PUSH EAX                            ; 004cc04a
    MOV EAX,[0x00614d30]                ; 004cc04b | DAT_00614d30
    FADD float ptr [0x005d97ee]         ; 004cc050 | DAT_005d97ee
    PUSH EAX                            ; 004cc056
    FSTP float ptr [ESP + 0x118]        ; 004cc057
    CALL core_fire.cpp_FUN_0049d120     ; 004cc05e
        ;   XREF to: 0049d120 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d120(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004cc063
    LEA EAX,[ESP + 0xa8]                ; 004cc066
    PUSH EAX                            ; 004cc06d
    PUSH 0x5d97cd                       ; 004cc06e | = "45.wav"
    PUSH EBX                            ; 004cc073
    MOV EDX,dword ptr [0x0061c068]      ; 004cc074 | DAT_0061c068
    PUSH EDX                            ; 004cc07a
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 004cc07b
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004cc080
    MOV EDI,0xc0800000                  ; 004cc083
    MOV ECX,0x40400000                  ; 004cc088
    PUSH 0x3ec90fdb                     ; 004cc08d
    MOV dword ptr [EBX + 0x45c],0x3eaa7efa ; 004cc092
    PUSH 0xbec90fdb                     ; 004cc09c
    MOV dword ptr [ESP + 0x14c],ECX     ; 004cc0a1
    MOV dword ptr [ESP + 0x150],ECX     ; 004cc0a8
    MOV dword ptr [ESP + 0x154],EDI     ; 004cc0af
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004cc0b6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004cc0bb
    FLD float ptr [ESP + 0x1c4]         ; 004cc0c2
    ADD ESP,0x8                         ; 004cc0c9
    PUSH 0x3ec90fdb                     ; 004cc0cc
    PUSH 0xbec90fdb                     ; 004cc0d1
    FSTP float ptr [ESP + 0x134]        ; 004cc0d6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004cc0dd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004cc0e2
    FLD float ptr [ESP + 0x1c4]         ; 004cc0e9
    XOR EAX,EAX                         ; 004cc0f0
    ADD ESP,0x8                         ; 004cc0f2
    MOV dword ptr [ESP + 0x134],EAX     ; 004cc0f5
    LEA EAX,[ESP + 0x12c]               ; 004cc0fc
    PUSH EAX                            ; 004cc103
    LEA EAX,[ESP + 0x48]                ; 004cc104
    PUSH EAX                            ; 004cc108
    FSTP float ptr [ESP + 0x138]        ; 004cc109
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004cc110
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004cc115
    LEA EAX,[ESP + 0x144]               ; 004cc118
    PUSH EAX                            ; 004cc11f
    LEA EAX,[ESP + 0x48]                ; 004cc120
    PUSH EAX                            ; 004cc124
    LEA ESI,[ESP + 0x74]                ; 004cc125
    LEA EDI,[ESP + 0xe0]                ; 004cc129
    CALL core_dirmat.cpp_FUN_00449530   ; 004cc130
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 004cc135
    LEA EAX,[ESP + 0xd8]                ; 004cc138
    LEA ESI,[ESP + 0x6c]                ; 004cc13f
    PUSH EAX                            ; 004cc143
    MOVSD ES:EDI,ESI                    ; 004cc144
    MOVSD ES:EDI,ESI                    ; 004cc145
    MOVSD ES:EDI,ESI                    ; 004cc146
    PUSH EBX                            ; 004cc147
    LEA ESI,[ESP + 0x17c]               ; 004cc148
    LEA EDI,[ESP + 0x8c]                ; 004cc14f
    CALL core_actor.cpp_FUN_00408cf0    ; 004cc156
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x17c]               ; 004cc15b
    ADD ESP,0x8                         ; 004cc162
    MOVSD ES:EDI,ESI                    ; 004cc165
    MOVSD ES:EDI,ESI                    ; 004cc166
    MOVSD ES:EDI,ESI                    ; 004cc167
    LEA EAX,[ESP + 0x84]                ; 004cc168
    LEA ESI,[ESP + 0x144]               ; 004cc16f
    CMP ESI,EAX                         ; 004cc176
    JZ 0x004cc1a4                       ; 004cc178
        ;   XREF to: 004cc1a4 (CONDITIONAL_JUMP)  ; LAB_004cc1a4
    MOV EAX,dword ptr [ESP + 0x84]      ; 004cc17a
    MOV dword ptr [ESP + 0x144],EAX     ; 004cc181
    MOV EAX,dword ptr [ESP + 0x88]      ; 004cc188
    MOV dword ptr [ESP + 0x148],EAX     ; 004cc18f
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004cc196
    MOV dword ptr [ESP + 0x14c],EAX     ; 004cc19d
    PUSH 0x5d97d4                       ; 004cc1a4 | = "gatbullet.kfm"
        ;   Label: LAB_004cc1a4
    CALL core_dmodel.cpp_loadModel_FUN_0044fba0 ; 004cc1a9
        ;   XREF to: 0044fba0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_0044fba0(char * filename)
    ADD ESP,0x4                         ; 004cc1ae
    PUSH EAX                            ; 004cc1b1
    LEA EAX,[ESP + 0x148]               ; 004cc1b2
    PUSH EAX                            ; 004cc1b9
    LEA EAX,[EBX + 0x30]                ; 004cc1ba
    PUSH EAX                            ; 004cc1bd
    ADD EBX,0x20                        ; 004cc1be
    PUSH EBX                            ; 004cc1c1
    MOV EDX,dword ptr [0x00614d30]      ; 004cc1c2 | DAT_00614d30
    PUSH EDX                            ; 004cc1c8
    CALL core_fire.cpp_CFireEffect_createShell_FUN_0049e970 ; 004cc1c9
        ;   XREF to: 0049e970 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_0049e970(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    MOV EAX,0x1                         ; 004cc1ce
    ADD ESP,0x14                        ; 004cc1d3
    MOV ESP,EBP                         ; 004cc1d6
    POP EBP                             ; 004cc1d8
    POP EDI                             ; 004cc1d9
    POP ESI                             ; 004cc1da
    POP EBX                             ; 004cc1db
    RET                                 ; 004cc1dc
    LEA EAX,[ESP + 0xa8]                ; 004cc1dd
        ;   Label: LAB_004cc1dd
    PUSH EAX                            ; 004cc1e4
    PUSH 0x5d97c0                       ; 004cc1e5 | = "45-dry-!.wav"
    PUSH EBX                            ; 004cc1ea
    MOV EDX,dword ptr [0x0061c068]      ; 004cc1eb | DAT_0061c068
    PUSH EDX                            ; 004cc1f1
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 004cc1f2
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004cc1f7
    XOR EAX,EAX                         ; 004cc1fa
    MOV ESP,EBP                         ; 004cc1fc
    POP EBP                             ; 004cc1fe
    POP EDI                             ; 004cc1ff
    POP ESI                             ; 004cc200
    POP EBX                             ; 004cc201
    RET                                 ; 004cc202
    PUSH ECX                            ; 004cc203
        ;   Label: LAB_004cc203
    MOV EDI,dword ptr [0x0061b5a8]      ; 004cc204 | g_CDemonSetPtr
    PUSH EDI                            ; 004cc20a | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004cc20b
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cc210
    JMP 0x004cbfcf                      ; 004cc213
        ;   XREF to: 004cbfcf (UNCONDITIONAL_JUMP)  ; LAB_004cbfcf
    FLD1                                ; 004cc218
        ;   Label: LAB_004cc218
    FCOMP double ptr [ESP]              ; 004cc21a
    FNSTSW AX                           ; 004cc21d
    SAHF                                ; 004cc21f
    JC 0x004cc018                       ; 004cc220
        ;   XREF to: 004cc018 (CONDITIONAL_JUMP)  ; LAB_004cc018
    MOV ECX,dword ptr [0x007bdc94]      ; 004cc226 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 004cc22c | g_CDemonSetPtr
    PUSH ECX                            ; 004cc231
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004cc232 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004cc238
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004cc239
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004cc23e
    MOV dword ptr [ESP + 0x1b8],EAX     ; 004cc241
    TEST EAX,EAX                        ; 004cc248
    JZ 0x004cc269                       ; 004cc24a
        ;   XREF to: 004cc269 (CONDITIONAL_JUMP)  ; LAB_004cc269
    PUSH EAX                            ; 004cc24c
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004cc24d
    CALL dword ptr [ESI + 0x114]        ; 004cc253
    ADD ESP,0x4                         ; 004cc259
    TEST EAX,EAX                        ; 004cc25c
    JLE 0x004cc269                      ; 004cc25e
        ;   XREF to: 004cc269 (CONDITIONAL_JUMP)  ; LAB_004cc269
    XOR EDI,EDI                         ; 004cc260
    MOV dword ptr [ESP + 0x1b8],EDI     ; 004cc262
    MOV EAX,[0x01cb8280]                ; 004cc269 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_004cc269
    PUSH EAX                            ; 004cc26e
    MOV EAX,[0x0061b5a8]                ; 004cc26f | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004cc274 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004cc27a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004cc27b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x02653628]      ; 004cc280 | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 004cc286
    MOV EDI,EAX                         ; 004cc289
    MOV EAX,[0x0061b5a8]                ; 004cc28b | g_CDemonSetPtr
    PUSH ECX                            ; 004cc290
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004cc291 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004cc297
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004cc298
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004cc29d
    MOV ESI,EAX                         ; 004cc2a0
    MOV dword ptr [ESP + 0x1a4],EAX     ; 004cc2a2
    MOV EAX,[0x007c2670]                ; 004cc2a9 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 004cc2ae
    MOV EAX,[0x0061b5a8]                ; 004cc2af | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004cc2b4 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004cc2ba
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004cc2bb
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x1b4],EAX     ; 004cc2c0
    ADD ESP,0x8                         ; 004cc2c7
    MOV ECX,dword ptr [0x01cab6f8]      ; 004cc2ca | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 004cc2d0 | g_CDemonSetPtr
    PUSH ECX                            ; 004cc2d5
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004cc2d6 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004cc2dc
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004cc2dd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004cc2e2
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 004cc2e5
    TEST ECX,ECX                        ; 004cc2ec
    JNZ 0x004cc325                      ; 004cc2ee
        ;   XREF to: 004cc325 (CONDITIONAL_JUMP)  ; LAB_004cc325
    TEST EDI,EDI                        ; 004cc2f0
    JNZ 0x004cc59a                      ; 004cc2f2
        ;   XREF to: 004cc59a (CONDITIONAL_JUMP)  ; LAB_004cc59a
    TEST ESI,ESI                        ; 004cc2f8
    JNZ 0x004cc5c1                      ; 004cc2fa
        ;   XREF to: 004cc5c1 (CONDITIONAL_JUMP)  ; LAB_004cc5c1
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 004cc300
    TEST ESI,ESI                        ; 004cc307
    JNZ 0x004cc61d                      ; 004cc309
        ;   XREF to: 004cc61d (CONDITIONAL_JUMP)  ; LAB_004cc61d
    TEST EAX,EAX                        ; 004cc30f
    JZ 0x004cc643                       ; 004cc311
        ;   XREF to: 004cc643 (CONDITIONAL_JUMP)  ; LAB_004cc643
    PUSH EAX                            ; 004cc317
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0 ; 004cc318
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004cc31d
    JMP 0x004cc626                      ; 004cc320
        ;   XREF to: 004cc626 (UNCONDITIONAL_JUMP)  ; LAB_004cc626
    PUSH ECX                            ; 004cc325
        ;   Label: LAB_004cc325
    MOV EAX,dword ptr [ECX + 0x2b0]     ; 004cc326
    CALL dword ptr [EAX + 0xe8]         ; 004cc32c
    ADD ESP,0x4                         ; 004cc332
    TEST EAX,EAX                        ; 004cc335
    JZ 0x004cc36c                       ; 004cc337
        ;   XREF to: 004cc36c (CONDITIONAL_JUMP)  ; LAB_004cc36c
    CMP dword ptr [ESP + 0x1b0],0x0     ; 004cc339
    JNZ 0x004cc018                      ; 004cc341
        ;   XREF to: 004cc018 (CONDITIONAL_JUMP)  ; LAB_004cc018
    MOV ESI,dword ptr [EBX + 0x6c4]     ; 004cc347
    MOV ECX,dword ptr [0x0061b5a8]      ; 004cc34d | g_CDemonSetPtr
    INC ESI                             ; 004cc353
    PUSH ECX                            ; 004cc354 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x6c4],ESI     ; 004cc355
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004cc35b
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004cc360
    XOR EAX,EAX                         ; 004cc363
    MOV ESP,EBP                         ; 004cc365
    POP EBP                             ; 004cc367
    POP EDI                             ; 004cc368
    POP ESI                             ; 004cc369
    POP EBX                             ; 004cc36a
    RET                                 ; 004cc36b
    LEA EAX,[ESP + 0x8]                 ; 004cc36c
        ;   Label: LAB_004cc36c
    PUSH EAX                            ; 004cc370
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004cc371
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,[0x0061b5a8]                ; 004cc376 | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004cc37b
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 004cc37e | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 004cc384
    PUSH EBX                            ; 004cc388
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cc389
    LEA EDI,[ESP + 0xe8]                ; 004cc38f
    CALL dword ptr [EAX + 0xf4]         ; 004cc396
    MOV ECX,0x3ecccccd                  ; 004cc39c
    MOV dword ptr [ESP + 0x1c0],EAX     ; 004cc3a1
    MOV ESI,dword ptr [0x0061b5a8]      ; 004cc3a8 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x1c0]         ; 004cc3ae
    ADD ESP,0x4                         ; 004cc3b5
    LEA EAX,[ESI + 0x14d11c]            ; 004cc3b8
    MOV dword ptr [ESP + 0x10],ECX      ; 004cc3be
    FSTP float ptr [ESP + 0xc]          ; 004cc3c2
    FLD float ptr [EAX]                 ; 004cc3c6 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 004cc3c8 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 004cc3cb | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 004cc3ce
    FSUB float ptr [ESI + 0x14d110]     ; 004cc3d0 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 004cc3d6
    FSUB float ptr [ESI + 0x14d114]     ; 004cc3d8 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 004cc3de
    FSUB float ptr [ESI + 0x14d118]     ; 004cc3e0 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 004cc3e6
    FSTP float ptr [ESP + 0x90]         ; 004cc3e8
    FXCH                                ; 004cc3ef
    FSTP float ptr [ESP + 0x94]         ; 004cc3f1
    LEA ESI,[ESP + 0x90]                ; 004cc3f8
    FSTP float ptr [ESP + 0x98]         ; 004cc3ff
    MOVSD ES:EDI,ESI                    ; 004cc406
    MOVSD ES:EDI,ESI                    ; 004cc407
    MOVSD ES:EDI,ESI                    ; 004cc408
    FLD float ptr [ESP + 0xe8]          ; 004cc409
    FMUL ST0                            ; 004cc410
    FLD float ptr [ESP + 0xe4]          ; 004cc412
    FMUL ST0                            ; 004cc419
    FADDP                               ; 004cc41b
    FLD float ptr [ESP + 0xec]          ; 004cc41d
    FMUL ST0                            ; 004cc424
    FADDP                               ; 004cc426
    FSQRT                               ; 004cc428
    FDIVR double ptr [0x005d97f6]       ; 004cc42a | DAT_005d97f6
    FLD float ptr [ESP + 0xe4]          ; 004cc430
    FXCH                                ; 004cc437
    FSTP float ptr [ESP + 0x1b4]        ; 004cc439
    FMUL float ptr [ESP + 0x1b4]        ; 004cc440
    FLD float ptr [ESP + 0xe8]          ; 004cc447
    FMUL float ptr [ESP + 0x1b4]        ; 004cc44e
    FLD float ptr [ESP + 0xec]          ; 004cc455
    FMUL float ptr [ESP + 0x1b4]        ; 004cc45c
    LEA EDI,[ESP + 0xc0]                ; 004cc463
    LEA ESI,[ESP + 0x168]               ; 004cc46a
    FXCH ST2                            ; 004cc471
    FSTP float ptr [ESP + 0x168]        ; 004cc473
    FSTP float ptr [ESP + 0x16c]        ; 004cc47a
    FSTP float ptr [ESP + 0x170]        ; 004cc481
    MOVSD ES:EDI,ESI                    ; 004cc488
    MOVSD ES:EDI,ESI                    ; 004cc489
    MOVSD ES:EDI,ESI                    ; 004cc48a
    LEA EAX,[ESP + 0x14]                ; 004cc48b
    LEA ESI,[ESP + 0xc0]                ; 004cc48f
    CMP EAX,ESI                         ; 004cc496
    JZ 0x004cc4bb                       ; 004cc498
        ;   XREF to: 004cc4bb (CONDITIONAL_JUMP)  ; LAB_004cc4bb
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004cc49a
    MOV dword ptr [ESP + 0x14],EAX      ; 004cc4a1
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004cc4a5
    MOV dword ptr [ESP + 0x18],EAX      ; 004cc4ac
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004cc4b0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004cc4b7
    MOV EAX,[0x0061b5a8]                ; 004cc4bb | g_CDemonSetPtr
        ;   Label: LAB_004cc4bb
    ADD EAX,0x14d138                    ; 004cc4c0
    PUSH EAX                            ; 004cc4c5 | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 004cc4c6
    PUSH ESI                            ; 004cc4cd
    LEA ESI,[ESP + 0x158]               ; 004cc4ce
    LEA EDI,[ESP + 0x194]               ; 004cc4d5
    CALL core_actor.cpp_FUN_00408de0    ; 004cc4dc
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x158]               ; 004cc4e1
    ADD ESP,0x8                         ; 004cc4e8
    MOVSD ES:EDI,ESI                    ; 004cc4eb
    MOVSD ES:EDI,ESI                    ; 004cc4ec
    MOVSD ES:EDI,ESI                    ; 004cc4ed
    LEA EAX,[ESP + 0x18c]               ; 004cc4ee
    LEA ESI,[ESP + 0x24]                ; 004cc4f5
    CMP ESI,EAX                         ; 004cc4f9
    JZ 0x004cc51e                       ; 004cc4fb
        ;   XREF to: 004cc51e (CONDITIONAL_JUMP)  ; LAB_004cc51e
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004cc4fd
    MOV dword ptr [ESP + 0x24],EAX      ; 004cc504
    MOV EAX,dword ptr [ESP + 0x190]     ; 004cc508
    MOV dword ptr [ESP + 0x28],EAX      ; 004cc50f
    MOV EAX,dword ptr [ESP + 0x194]     ; 004cc513
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cc51a
    MOV EAX,dword ptr [EBX + 0x6c8]     ; 004cc51e
        ;   Label: LAB_004cc51e
    MOV EDI,0x65                        ; 004cc524
    MOV dword ptr [ESP + 0x30],EAX      ; 004cc529
    MOV dword ptr [ESP + 0x38],EDI      ; 004cc52d
    XOR EAX,EAX                         ; 004cc531
    MOV dword ptr [ESP + 0x3c],EBX      ; 004cc533
    MOV dword ptr [ESP + 0x34],EAX      ; 004cc537
    PUSH EBX                            ; 004cc53b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cc53c
    CALL dword ptr [EAX + 0x9c]         ; 004cc542
    ADD ESP,0x4                         ; 004cc548
    MOV dword ptr [ESP + 0x40],EAX      ; 004cc54b
    LEA EAX,[ESP + 0x8]                 ; 004cc54f
    MOV ESI,dword ptr [ESP + 0x1b8]     ; 004cc553
    PUSH EAX                            ; 004cc55a
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 004cc55b
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 004cc562
    PUSH EDX                            ; 004cc568
    CALL dword ptr [ESI + 0x110]        ; 004cc569
    MOV ECX,dword ptr [EBX + 0x440]     ; 004cc56f
    ADD ESP,0x8                         ; 004cc575
    TEST ECX,ECX                        ; 004cc578
    JZ 0x004cc018                       ; 004cc57a
        ;   XREF to: 004cc018 (CONDITIONAL_JUMP)  ; LAB_004cc018
    MOV EAX,[0x0061b5a8]                ; 004cc580 | g_CDemonSetPtr
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004cc585 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004cc58b
    PUSH EAX                            ; 004cc58c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004cc58d
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cc592
    JMP 0x004cc626                      ; 004cc595
        ;   XREF to: 004cc626 (UNCONDITIONAL_JUMP)  ; LAB_004cc626
    PUSH EDI                            ; 004cc59a
        ;   Label: LAB_004cc59a
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0 ; 004cc59b
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004cc5a0
    TEST EAX,EAX                        ; 004cc5a3
    JZ 0x004cc018                       ; 004cc5a5
        ;   XREF to: 004cc018 (CONDITIONAL_JUMP)  ; LAB_004cc018
    MOV EAX,[0x0061b5a8]                ; 004cc5ab | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004cc5b0
    PUSH EAX                            ; 004cc5b5 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 004cc5b6
    CALL core_glass.cpp_FUN_004c6d40    ; 004cc5b7
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 004cc5bc
    JMP 0x004cc626                      ; 004cc5bf
        ;   XREF to: 004cc626 (UNCONDITIONAL_JUMP)  ; LAB_004cc626
    PUSH ESI                            ; 004cc5c1
        ;   Label: LAB_004cc5c1
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550 ; 004cc5c2
        ;   XREF to: 00578550 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 004cc5c7
    PUSH EBX                            ; 004cc5ca
    PUSH ESI                            ; 004cc5cb
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 ; 004cc5cc
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cc5d1
    TEST EAX,EAX                        ; 004cc5d4
    JZ 0x004cc605                       ; 004cc5d6
        ;   XREF to: 004cc605 (CONDITIONAL_JUMP)  ; LAB_004cc605
    PUSH EBX                            ; 004cc5d8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cc5d9
    CALL dword ptr [EAX + 0xf4]         ; 004cc5df
    MOV dword ptr [ESP + 0x1c0],EAX     ; 004cc5e5
    FLD float ptr [ESP + 0x1c0]         ; 004cc5ec
    ADD ESP,0x4                         ; 004cc5f3
    SUB ESP,0x4                         ; 004cc5f6
    FSTP float ptr [ESP]                ; 004cc5f9
    PUSH ESI                            ; 004cc5fc
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 004cc5fd
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004cc602
    MOV EDI,dword ptr [ESP + 0x1a4]     ; 004cc605
        ;   Label: LAB_004cc605
    PUSH EDI                            ; 004cc60c
    MOV EAX,[0x0061b5a8]                ; 004cc60d | g_CDemonSetPtr
    PUSH EAX                            ; 004cc612 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004cc613
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cc618
    JMP 0x004cc626                      ; 004cc61b
        ;   XREF to: 004cc626 (UNCONDITIONAL_JUMP)  ; LAB_004cc626
    PUSH ESI                            ; 004cc61d
        ;   Label: LAB_004cc61d
    CALL core_crate.cpp_FUN_0043a350    ; 004cc61e
        ;   XREF to: 0043a350 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_0043a350(CCrate * this_ptr)
    ADD ESP,0x4                         ; 004cc623
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 004cc626
        ;   Label: LAB_004cc626
    INC EDI                             ; 004cc62d
    MOV dword ptr [ESP + 0x1b0],EDI     ; 004cc62e
    CMP EDI,0x4                         ; 004cc635
    JL 0x004cbfd8                       ; 004cc638
        ;   XREF to: 004cbfd8 (CONDITIONAL_JUMP)  ; LAB_004cbfd8
    JMP 0x004cc018                      ; 004cc63e
        ;   XREF to: 004cc018 (UNCONDITIONAL_JUMP)  ; LAB_004cc018
    MOV EAX,[0x0061b5a8]                ; 004cc643 | g_CDemonSetPtr
        ;   Label: LAB_004cc643
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004cc648 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004cc64e
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 004cc64f | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 004cc655
    LEA ESI,[EAX + 0x14d128]            ; 004cc656
    PUSH ESI                            ; 004cc65c | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 004cc65d
    PUSH EAX                            ; 004cc662 | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x00614d30]      ; 004cc663 | DAT_00614d30
    PUSH ECX                            ; 004cc669
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50 ; 004cc66a
        ;   XREF to: 0049cd50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 004cc66f
    JMP 0x004cc018                      ; 004cc672
        ;   XREF to: 004cc018 (UNCONDITIONAL_JUMP)  ; LAB_004cc018

