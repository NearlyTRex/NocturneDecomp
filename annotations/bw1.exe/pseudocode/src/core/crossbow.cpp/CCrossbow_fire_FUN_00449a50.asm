; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_crossbow_cpp_CCrossbow_fire_FUN_00449a50(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_bow_wav_005d7389
;   undefined4 DAT_005d739a
;   undefined4 DAT_005d73a2
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   undefined4 g_CDemonSetInstance.ray_origin.y
;   undefined4 g_CDemonSetInstance.ray_origin.z
;   undefined4 g_CDemonSetInstance.ray_target.x
;   undefined4 g_CDemonSetInstance.ray_target.y
;   undefined4 g_CDemonSetInstance.ray_target.z
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_fire.cpp_CFireEffect_createStake_FUN_004b5bc0
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
;   core_glass.cpp_FUN_004e34b0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_FUN_00557300
;   core_sound.cpp_CSound_playActorSound_FUN_0057d8a0
;   core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0
;   core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449a50
        ;   Label: core_crossbow.cpp_CCrossbow_fire_FUN_00449a50
    PUSH ESI                            ; 00449a51
    PUSH EDI                            ; 00449a52
    PUSH EBP                            ; 00449a53
    MOV EBP,ESP                         ; 00449a54
    SUB ESP,0x144                       ; 00449a56
    AND ESP,0xfffffff8                  ; 00449a5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00449a5f
    PUSH EBX                            ; 00449a62
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449a63
    LEA ESI,[ESP + 0xa0]                ; 00449a69
    LEA EDI,[ESP + 0xac]                ; 00449a70
    CALL dword ptr [EAX + 0xe0]         ; 00449a77
    ADD ESP,0x4                         ; 00449a7d
    LEA EAX,[ESP + 0xa8]                ; 00449a80
    LEA ESI,[ESP + 0x9c]                ; 00449a87
    PUSH EAX                            ; 00449a8e
    MOVSD ES:EDI,ESI                    ; 00449a8f
    MOVSD ES:EDI,ESI                    ; 00449a90
    MOVSD ES:EDI,ESI                    ; 00449a91
    PUSH EBX                            ; 00449a92
    LEA ESI,[ESP + 0xe0]                ; 00449a93
    CALL core_actor.cpp_FUN_00408b40    ; 00449a9a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00449a9f
    LEA EDI,[ESP + 0x48]                ; 00449aa2
    LEA ESI,[ESP + 0xd8]                ; 00449aa6
    PUSH EBX                            ; 00449aad
    MOVSD ES:EDI,ESI                    ; 00449aae
    MOVSD ES:EDI,ESI                    ; 00449aaf
    MOVSD ES:EDI,ESI                    ; 00449ab0
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 00449ab1
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00449ab6
    TEST EAX,EAX                        ; 00449ab9
    JNZ 0x00449ac4                      ; 00449abb
        ;   XREF to: 00449ac4 (CONDITIONAL_JUMP)  ; LAB_00449ac4
    MOV ESP,EBP                         ; 00449abd
    POP EBP                             ; 00449abf
    POP EDI                             ; 00449ac0
    POP ESI                             ; 00449ac1
    POP EBX                             ; 00449ac2
    RET                                 ; 00449ac3
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 00449ac4
        ;   Label: LAB_00449ac4
    MOV dword ptr [ESP + 0x98],EAX      ; 00449aca
    LEA EAX,[ESP + 0x90]                ; 00449ad1
    LEA ESI,[ESP + 0xcc]                ; 00449ad8
    PUSH EAX                            ; 00449adf
    LEA EDI,[ESP + 0x100]               ; 00449ae0
    XOR EDX,EDX                         ; 00449ae7
    PUSH EBX                            ; 00449ae9
    MOV dword ptr [ESP + 0x98],EDX      ; 00449aea
    MOV dword ptr [ESP + 0x9c],EDX      ; 00449af1
    CALL core_actor.cpp_FUN_00408ac0    ; 00449af8
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00449afd
    LEA ESI,[ESP + 0xcc]                ; 00449b00
    FLD float ptr [ESP + 0x48]          ; 00449b07
    FLD float ptr [ESP + 0x4c]          ; 00449b0b
    MOVSD ES:EDI,ESI                    ; 00449b0f
    MOVSD ES:EDI,ESI                    ; 00449b10
    MOVSD ES:EDI,ESI                    ; 00449b11
    FLD float ptr [ESP + 0x50]          ; 00449b12
    LEA EDI,[ESP + 0xe4]                ; 00449b16
    LEA ESI,[ESP + 0x120]               ; 00449b1d
    FXCH ST2                            ; 00449b24
    FADD float ptr [ESP + 0xfc]         ; 00449b26
    FXCH                                ; 00449b2d
    FADD float ptr [ESP + 0x100]        ; 00449b2f
    FXCH ST2                            ; 00449b36
    FADD float ptr [ESP + 0x104]        ; 00449b38
    FXCH                                ; 00449b3f
    FSTP float ptr [ESP + 0x120]        ; 00449b41
    FXCH                                ; 00449b48
    FSTP float ptr [ESP + 0x124]        ; 00449b4a
    FSTP float ptr [ESP + 0x128]        ; 00449b51
    MOVSD ES:EDI,ESI                    ; 00449b58
    MOVSD ES:EDI,ESI                    ; 00449b59
    MOVSD ES:EDI,ESI                    ; 00449b5a
    FLD float ptr [EBX + 0x2e8]         ; 00449b5b
    FDIVR double ptr [0x005d739a]       ; 00449b61 | DAT_005d739a
    FLD float ptr [ESP + 0xfc]          ; 00449b67
    FXCH                                ; 00449b6e
    FSTP float ptr [ESP + 0x130]        ; 00449b70
    FMUL float ptr [ESP + 0x130]        ; 00449b77
    FLD float ptr [ESP + 0x100]         ; 00449b7e
    FMUL float ptr [ESP + 0x130]        ; 00449b85
    FLD float ptr [ESP + 0x104]         ; 00449b8c
    FMUL float ptr [ESP + 0x130]        ; 00449b93
    FLD float ptr [ESP + 0x48]          ; 00449b9a
    FLD float ptr [ESP + 0x4c]          ; 00449b9e
    LEA EDI,[ESP + 0x108]               ; 00449ba2
    LEA ESI,[ESP + 0x6c]                ; 00449ba9
    FXCH ST4                            ; 00449bad
    FSTP float ptr [ESP + 0x6c]         ; 00449baf
    FXCH ST2                            ; 00449bb3
    FSTP float ptr [ESP + 0x70]         ; 00449bb5
    FSTP float ptr [ESP + 0x74]         ; 00449bb9
    MOVSD ES:EDI,ESI                    ; 00449bbd
    MOVSD ES:EDI,ESI                    ; 00449bbe
    MOVSD ES:EDI,ESI                    ; 00449bbf
    FLD float ptr [ESP + 0x50]          ; 00449bc0
    LEA EDI,[ESP + 0x114]               ; 00449bc4
    LEA ESI,[ESP + 0x54]                ; 00449bcb
    FXCH                                ; 00449bcf
    FSUB float ptr [ESP + 0x108]        ; 00449bd1
    FXCH ST2                            ; 00449bd8
    FSUB float ptr [ESP + 0x10c]        ; 00449bda
    FXCH                                ; 00449be1
    FSUB float ptr [ESP + 0x110]        ; 00449be3
    FXCH ST2                            ; 00449bea
    FSTP float ptr [ESP + 0x54]         ; 00449bec
    FSTP float ptr [ESP + 0x58]         ; 00449bf0
    FSTP float ptr [ESP + 0x5c]         ; 00449bf4
    MOVSD ES:EDI,ESI                    ; 00449bf8
    MOVSD ES:EDI,ESI                    ; 00449bf9
    MOVSD ES:EDI,ESI                    ; 00449bfa
    MOV ESI,dword ptr [0x00622c18]      ; 00449bfb | g_CDemonSetPtr
    PUSH ESI                            ; 00449c01 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00449c02
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00449c07
    PUSH 0x1                            ; 00449c0a
    MOV EDI,dword ptr [0x00622c18]      ; 00449c0c | g_CDemonSetPtr
    PUSH EDI                            ; 00449c12 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 00449c13
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00449c18
    PUSH EBX                            ; 00449c1b
    MOV EAX,[0x00622c18]                ; 00449c1c | g_CDemonSetPtr
    PUSH EAX                            ; 00449c21 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00449c22
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDX,dword ptr [EBX + 0x304]     ; 00449c27
    ADD ESP,0x8                         ; 00449c2d
    TEST EDX,EDX                        ; 00449c30
    JNZ 0x00449cc9                      ; 00449c32
        ;   XREF to: 00449cc9 (CONDITIONAL_JUMP)  ; LAB_00449cc9
    XOR EDI,EDI                         ; 00449c38
        ;   Label: LAB_00449c38
    MOV dword ptr [ESP + 0x12c],EDI     ; 00449c3a
    LEA EAX,[ESP + 0xe4]                ; 00449c41
        ;   Label: LAB_00449c41
    PUSH EAX                            ; 00449c48
    LEA EAX,[ESP + 0x118]               ; 00449c49
    PUSH EAX                            ; 00449c50
    MOV EAX,[0x00622c18]                ; 00449c51 | g_CDemonSetPtr
    PUSH EAX                            ; 00449c56 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00449c57
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x14c],EAX     ; 00449c5c
    FLD float ptr [ESP + 0x14c]         ; 00449c63
    ADD ESP,0xc                         ; 00449c6a
    FLDZ                                ; 00449c6d
    FXCH                                ; 00449c6f
    FST float ptr [ESP + 0x8]           ; 00449c71
    FSTP double ptr [ESP]               ; 00449c75
    FCOMP double ptr [ESP]              ; 00449c78
    FNSTSW AX                           ; 00449c7b
    SAHF                                ; 00449c7d
    JBE 0x00449cde                      ; 00449c7e
        ;   XREF to: 00449cde (CONDITIONAL_JUMP)  ; LAB_00449cde
    MOV EDI,dword ptr [0x00622c18]      ; 00449c80 | g_CDemonSetPtr
        ;   Label: LAB_00449c80
    PUSH EDI                            ; 00449c86 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00449c87
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00449c8c
    FLD float ptr [ESP + 0x8]           ; 00449c8f
    FLD1                                ; 00449c93
    FCOMPP                              ; 00449c95
    FNSTSW AX                           ; 00449c97
    SAHF                                ; 00449c99
    LEA EAX,[ESP + 0x48]                ; 00449c9a
    PUSH EAX                            ; 00449c9e
    PUSH 0x5d7389                       ; 00449c9f | = "bow-!.wav"
    PUSH EBX                            ; 00449ca4
    MOV EAX,[0x006236b8]                ; 00449ca5 | DAT_006236b8
    PUSH EAX                            ; 00449caa
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 00449cab
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 00449cb0
    ADD ESP,0x10                        ; 00449cb5
    MOV dword ptr [EBX + 0x300],0x3f2a7efa ; 00449cb8
    MOV ESP,EBP                         ; 00449cc2
    POP EBP                             ; 00449cc4
    POP EDI                             ; 00449cc5
    POP ESI                             ; 00449cc6
    POP EBX                             ; 00449cc7
    RET                                 ; 00449cc8
    PUSH EDX                            ; 00449cc9
        ;   Label: LAB_00449cc9
    MOV ESI,dword ptr [0x00622c18]      ; 00449cca | g_CDemonSetPtr
    PUSH ESI                            ; 00449cd0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00449cd1
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00449cd6
    JMP 0x00449c38                      ; 00449cd9
        ;   XREF to: 00449c38 (UNCONDITIONAL_JUMP)  ; LAB_00449c38
    FLD1                                ; 00449cde
        ;   Label: LAB_00449cde
    FCOMP double ptr [ESP]              ; 00449ce0
    FNSTSW AX                           ; 00449ce3
    SAHF                                ; 00449ce5
    JC 0x00449c80                       ; 00449ce6
        ;   XREF to: 00449c80 (CONDITIONAL_JUMP)  ; LAB_00449c80
    MOV EDX,dword ptr [0x007c637c]      ; 00449ce8 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 00449cee | g_CDemonSetPtr
    PUSH EDX                            ; 00449cf3
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 00449cf4 | g_CDemonSetInstance.collision_actor
    PUSH ECX                            ; 00449cfa
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00449cfb
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00449d00
    MOV dword ptr [ESP + 0x13c],EAX     ; 00449d03
    TEST EAX,EAX                        ; 00449d0a
    JZ 0x00449d2b                       ; 00449d0c
        ;   XREF to: 00449d2b (CONDITIONAL_JUMP)  ; LAB_00449d2b
    PUSH EAX                            ; 00449d0e
    MOV ESI,dword ptr [EAX + 0x154]     ; 00449d0f
    CALL dword ptr [ESI + 0x10c]        ; 00449d15
    ADD ESP,0x4                         ; 00449d1b
    TEST EAX,EAX                        ; 00449d1e
    JLE 0x00449d2b                      ; 00449d20
        ;   XREF to: 00449d2b (CONDITIONAL_JUMP)  ; LAB_00449d2b
    XOR ESI,ESI                         ; 00449d22
    MOV dword ptr [ESP + 0x13c],ESI     ; 00449d24
    MOV EDI,dword ptr [0x01cd0dfc]      ; 00449d2b | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00449d2b
    MOV EAX,[0x00622c18]                ; 00449d31 | g_CDemonSetPtr
    PUSH EDI                            ; 00449d36
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00449d37 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00449d3d
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00449d3e
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x02c8ae44]      ; 00449d43 | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 00449d49
    MOV EDI,EAX                         ; 00449d4c
    MOV EAX,[0x00622c18]                ; 00449d4e | g_CDemonSetPtr
    PUSH ECX                            ; 00449d53
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00449d54 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00449d5a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00449d5b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00449d60
    MOV ESI,EAX                         ; 00449d63
    MOV dword ptr [ESP + 0x134],EAX     ; 00449d65
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00449d6c
    TEST EAX,EAX                        ; 00449d73
    JNZ 0x00449de7                      ; 00449d75
        ;   XREF to: 00449de7 (CONDITIONAL_JUMP)  ; LAB_00449de7
    TEST EDI,EDI                        ; 00449d77
    JNZ 0x0044a04b                      ; 00449d79
        ;   XREF to: 0044a04b (CONDITIONAL_JUMP)  ; LAB_0044a04b
    TEST ESI,ESI                        ; 00449d7f
    JZ 0x0044a08d                       ; 00449d81
        ;   XREF to: 0044a08d (CONDITIONAL_JUMP)  ; LAB_0044a08d
    PUSH ESI                            ; 00449d87
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0 ; 00449d88
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00449d8d
    PUSH EBX                            ; 00449d90
    PUSH ESI                            ; 00449d91
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0 ; 00449d92
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00449d97
    TEST EAX,EAX                        ; 00449d9a
    JZ 0x00449dcb                       ; 00449d9c
        ;   XREF to: 00449dcb (CONDITIONAL_JUMP)  ; LAB_00449dcb
    PUSH EBX                            ; 00449d9e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449d9f
    CALL dword ptr [EAX + 0xec]         ; 00449da5
    MOV dword ptr [ESP + 0x144],EAX     ; 00449dab
    FLD float ptr [ESP + 0x144]         ; 00449db2
    ADD ESP,0x4                         ; 00449db9
    SUB ESP,0x4                         ; 00449dbc
    FSTP float ptr [ESP]                ; 00449dbf
    PUSH ESI                            ; 00449dc2
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30 ; 00449dc3
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00449dc8
    MOV ESI,dword ptr [ESP + 0x134]     ; 00449dcb
        ;   Label: LAB_00449dcb
    PUSH ESI                            ; 00449dd2
    MOV EDI,dword ptr [0x00622c18]      ; 00449dd3 | g_CDemonSetPtr
    PUSH EDI                            ; 00449dd9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00449dda
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00449ddf
    JMP 0x0044a070                      ; 00449de2
        ;   XREF to: 0044a070 (UNCONDITIONAL_JUMP)  ; LAB_0044a070
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00449de7
        ;   Label: LAB_00449de7
    MOV EAX,dword ptr [EAX + 0x154]     ; 00449dee
    PUSH EDX                            ; 00449df4
    CALL dword ptr [EAX + 0xe0]         ; 00449df5
    ADD ESP,0x4                         ; 00449dfb
    TEST EAX,EAX                        ; 00449dfe
    JZ 0x00449e35                       ; 00449e00
        ;   XREF to: 00449e35 (CONDITIONAL_JUMP)  ; LAB_00449e35
    CMP dword ptr [ESP + 0x12c],0x0     ; 00449e02
    JNZ 0x00449c80                      ; 00449e0a
        ;   XREF to: 00449c80 (CONDITIONAL_JUMP)  ; LAB_00449c80
    MOV ESI,dword ptr [EBX + 0x568]     ; 00449e10
    MOV ECX,dword ptr [0x00622c18]      ; 00449e16 | g_CDemonSetPtr
    INC ESI                             ; 00449e1c
    PUSH ECX                            ; 00449e1d | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],ESI     ; 00449e1e
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00449e24
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00449e29
    XOR EAX,EAX                         ; 00449e2c
    MOV ESP,EBP                         ; 00449e2e
    POP EBP                             ; 00449e30
    POP EDI                             ; 00449e31
    POP ESI                             ; 00449e32
    POP EBX                             ; 00449e33
    RET                                 ; 00449e34
    LEA EAX,[ESP + 0xc]                 ; 00449e35
        ;   Label: LAB_00449e35
    PUSH EAX                            ; 00449e39
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00449e3a
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,[0x00622c18]                ; 00449e3f | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00449e44
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 00449e47 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0xc],EAX       ; 00449e4d
    PUSH EBX                            ; 00449e51
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449e52
    LEA EDI,[ESP + 0xb8]                ; 00449e58
    CALL dword ptr [EAX + 0xec]         ; 00449e5f
    MOV ECX,0x3ecccccd                  ; 00449e65
    MOV dword ptr [ESP + 0x144],EAX     ; 00449e6a
    MOV ESI,dword ptr [0x00622c18]      ; 00449e71 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x144]         ; 00449e77
    ADD ESP,0x4                         ; 00449e7e
    LEA EAX,[ESI + 0x14d11c]            ; 00449e81
    MOV dword ptr [ESP + 0x14],ECX      ; 00449e87
    FSTP float ptr [ESP + 0x10]         ; 00449e8b
    FLD float ptr [EAX]                 ; 00449e8f | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 00449e91 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 00449e94 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 00449e97
    FSUB float ptr [ESI + 0x14d110]     ; 00449e99 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 00449e9f
    FSUB float ptr [ESI + 0x14d114]     ; 00449ea1 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 00449ea7
    FSUB float ptr [ESI + 0x14d118]     ; 00449ea9 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 00449eaf
    FSTP float ptr [ESP + 0xc0]         ; 00449eb1
    FXCH                                ; 00449eb8
    FSTP float ptr [ESP + 0xc4]         ; 00449eba
    LEA ESI,[ESP + 0xc0]                ; 00449ec1
    FSTP float ptr [ESP + 0xc8]         ; 00449ec8
    MOVSD ES:EDI,ESI                    ; 00449ecf
    MOVSD ES:EDI,ESI                    ; 00449ed0
    MOVSD ES:EDI,ESI                    ; 00449ed1
    FLD float ptr [ESP + 0xb8]          ; 00449ed2
    FMUL ST0                            ; 00449ed9
    FLD float ptr [ESP + 0xb4]          ; 00449edb
    FMUL ST0                            ; 00449ee2
    FADDP                               ; 00449ee4
    FLD float ptr [ESP + 0xbc]          ; 00449ee6
    FMUL ST0                            ; 00449eed
    FADDP                               ; 00449eef
    FSQRT                               ; 00449ef1
    FDIVR double ptr [0x005d73a2]       ; 00449ef3 | DAT_005d73a2
    FLD float ptr [ESP + 0xb4]          ; 00449ef9
    FXCH                                ; 00449f00
    FSTP float ptr [ESP + 0x138]        ; 00449f02
    FMUL float ptr [ESP + 0x138]        ; 00449f09
    FLD float ptr [ESP + 0xb8]          ; 00449f10
    FMUL float ptr [ESP + 0x138]        ; 00449f17
    FLD float ptr [ESP + 0xbc]          ; 00449f1e
    FMUL float ptr [ESP + 0x138]        ; 00449f25
    LEA EDI,[ESP + 0xf0]                ; 00449f2c
    LEA ESI,[ESP + 0x78]                ; 00449f33
    FXCH ST2                            ; 00449f37
    FSTP float ptr [ESP + 0x78]         ; 00449f39
    FSTP float ptr [ESP + 0x7c]         ; 00449f3d
    FSTP float ptr [ESP + 0x80]         ; 00449f41
    MOVSD ES:EDI,ESI                    ; 00449f48
    MOVSD ES:EDI,ESI                    ; 00449f49
    MOVSD ES:EDI,ESI                    ; 00449f4a
    LEA EAX,[ESP + 0x18]                ; 00449f4b
    LEA ESI,[ESP + 0xf0]                ; 00449f4f
    CMP EAX,ESI                         ; 00449f56
    JZ 0x00449f7b                       ; 00449f58
        ;   XREF to: 00449f7b (CONDITIONAL_JUMP)  ; LAB_00449f7b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00449f5a
    MOV dword ptr [ESP + 0x18],EAX      ; 00449f61
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00449f65
    MOV dword ptr [ESP + 0x1c],EAX      ; 00449f6c
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00449f70
    MOV dword ptr [ESP + 0x20],EAX      ; 00449f77
    MOV EAX,[0x00622c18]                ; 00449f7b | g_CDemonSetPtr
        ;   Label: LAB_00449f7b
    ADD EAX,0x14d138                    ; 00449f80
    PUSH EAX                            ; 00449f85 | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [ESP + 0x140]     ; 00449f86
    PUSH ESI                            ; 00449f8d
    LEA ESI,[ESP + 0x8c]                ; 00449f8e
    LEA EDI,[ESP + 0x68]                ; 00449f95
    CALL core_actor.cpp_FUN_00408bb0    ; 00449f99
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x8c]                ; 00449f9e
    ADD ESP,0x8                         ; 00449fa5
    MOVSD ES:EDI,ESI                    ; 00449fa8
    MOVSD ES:EDI,ESI                    ; 00449fa9
    MOVSD ES:EDI,ESI                    ; 00449faa
    LEA EAX,[ESP + 0x28]                ; 00449fab
    LEA ESI,[ESP + 0x60]                ; 00449faf
    CMP EAX,ESI                         ; 00449fb3
    JZ 0x00449fcf                       ; 00449fb5
        ;   XREF to: 00449fcf (CONDITIONAL_JUMP)  ; LAB_00449fcf
    MOV EAX,dword ptr [ESP + 0x60]      ; 00449fb7
    MOV dword ptr [ESP + 0x28],EAX      ; 00449fbb
    MOV EAX,dword ptr [ESP + 0x64]      ; 00449fbf
    MOV dword ptr [ESP + 0x2c],EAX      ; 00449fc3
    MOV EAX,dword ptr [ESP + 0x68]      ; 00449fc7
    MOV dword ptr [ESP + 0x30],EAX      ; 00449fcb
    MOV EAX,dword ptr [EBX + 0x56c]     ; 00449fcf
        ;   Label: LAB_00449fcf
    MOV EDI,0x68                        ; 00449fd5
    MOV dword ptr [ESP + 0x34],EAX      ; 00449fda
    MOV dword ptr [ESP + 0x3c],EDI      ; 00449fde
    MOV EAX,0x3e19999a                  ; 00449fe2
    MOV dword ptr [ESP + 0x40],EBX      ; 00449fe7
    MOV dword ptr [ESP + 0x38],EAX      ; 00449feb
    PUSH EBX                            ; 00449fef
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449ff0
    CALL dword ptr [EAX + 0x94]         ; 00449ff6
    ADD ESP,0x4                         ; 00449ffc
    MOV dword ptr [ESP + 0x44],EAX      ; 00449fff
    LEA EAX,[ESP + 0xc]                 ; 0044a003
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0044a007
    PUSH EAX                            ; 0044a00e
    MOV EDX,dword ptr [ESP + 0x140]     ; 0044a00f
    MOV ESI,dword ptr [ESI + 0x154]     ; 0044a016
    PUSH EDX                            ; 0044a01c
    CALL dword ptr [ESI + 0x108]        ; 0044a01d
    MOV ECX,dword ptr [EBX + 0x2e4]     ; 0044a023
    ADD ESP,0x8                         ; 0044a029
    TEST ECX,ECX                        ; 0044a02c
    JZ 0x00449c80                       ; 0044a02e
        ;   XREF to: 00449c80 (CONDITIONAL_JUMP)  ; LAB_00449c80
    MOV EAX,[0x00622c18]                ; 0044a034 | g_CDemonSetPtr
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 0044a039 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 0044a03f
    PUSH EAX                            ; 0044a040 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0044a041
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0044a046
    JMP 0x0044a070                      ; 0044a049
        ;   XREF to: 0044a070 (UNCONDITIONAL_JUMP)  ; LAB_0044a070
    PUSH EDI                            ; 0044a04b
        ;   Label: LAB_0044a04b
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 0044a04c
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0044a051
    TEST EAX,EAX                        ; 0044a054
    JZ 0x00449c80                       ; 0044a056
        ;   XREF to: 00449c80 (CONDITIONAL_JUMP)  ; LAB_00449c80
    MOV EAX,[0x00622c18]                ; 0044a05c | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0044a061
    PUSH EAX                            ; 0044a066 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 0044a067
    CALL core_glass.cpp_FUN_004e34b0    ; 0044a068
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 0044a06d
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0044a070
        ;   Label: LAB_0044a070
    INC EDI                             ; 0044a077
    MOV dword ptr [ESP + 0x12c],EDI     ; 0044a078
    CMP EDI,0x4                         ; 0044a07f
    JL 0x00449c41                       ; 0044a082
        ;   XREF to: 00449c41 (CONDITIONAL_JUMP)  ; LAB_00449c41
    JMP 0x00449c80                      ; 0044a088
        ;   XREF to: 00449c80 (UNCONDITIONAL_JUMP)  ; LAB_00449c80
    MOV EAX,[0x00622c18]                ; 0044a08d | g_CDemonSetPtr
        ;   Label: LAB_0044a08d
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 0044a092 | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 0044a098
    LEA ESI,[EAX + 0x14d128]            ; 0044a099
    PUSH ESI                            ; 0044a09f | g_CDemonSetInstance.collision_normal.x
    LEA ESI,[EBX + 0x30]                ; 0044a0a0
    PUSH ESI                            ; 0044a0a3
    ADD EAX,0x14d138                    ; 0044a0a4
    PUSH EAX                            ; 0044a0a9 | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x0061c010]      ; 0044a0aa | DAT_0061c010
    PUSH ECX                            ; 0044a0b0
    CALL core_fire.cpp_CFireEffect_createStake_FUN_004b5bc0 ; 0044a0b1
        ;   XREF to: 004b5bc0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createStake_FUN_004b5bc0(CFireEffect * this_ptr, CVector3f * impact_position, CVector3f * orientation_angles, CVector3f * surface_normal, ...)
    ADD ESP,0x14                        ; 0044a0b6
    JMP 0x00449c80                      ; 0044a0b9
        ;   XREF to: 00449c80 (UNCONDITIONAL_JUMP)  ; LAB_00449c80

