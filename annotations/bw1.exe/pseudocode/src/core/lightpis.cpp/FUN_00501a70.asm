; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightpis_cpp_FUN_00501a70(CWeapon *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CGhoul_005e6f70
;   TerminatedCString s_CTVBat_005e6f77
;   TerminatedCString s_CBatCreature_005e6f7e
;   TerminatedCString s_CWerewolf_005e6f8b
;   TerminatedCString s_CSvetlana_005e6f95
;   TerminatedCString s_CTrigger_CGlass_005e6faa
;   TerminatedCString s_shotgun_noammo_wav_005e6fc2
;   TerminatedCString s_s_in_volume_005e6fd5
;   TerminatedCString s_ecre_wav_005e6fe3
;   undefined4 DAT_005e6fee
;   undefined4 DAT_005e6ff2
;   undefined4 DAT_005e6ffa
;   undefined4 DAT_00603170
;   undefined4 DAT_00603178
;   CConsole* g_CConsolePtr = 007db5f0
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040c550
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0
;   core_lightpis.cpp_FUN_005016d0
;   core_lightpis.cpp_FUN_005017f0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060
;   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0
;   core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501a70
        ;   Label: core_lightpis.cpp_FUN_00501a70
    PUSH ESI                            ; 00501a71
    PUSH EDI                            ; 00501a72
    PUSH EBP                            ; 00501a73
    MOV EBP,ESP                         ; 00501a74
    SUB ESP,0x208                       ; 00501a76
    AND ESP,0xfffffff8                  ; 00501a7c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00501a7f
    PUSH EDX                            ; 00501a82
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 00501a83
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00501a88
    TEST EAX,EAX                        ; 00501a8b
    JZ 0x00501aac                       ; 00501a8d
        ;   XREF to: 00501aac (CONDITIONAL_JUMP)  ; LAB_00501aac
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501a8f
    FLD float ptr [EAX + 0x580]         ; 00501a92
    FCOMP float ptr [0x00603170]        ; 00501a98 | DAT_00603170
    FNSTSW AX                           ; 00501a9e
    SAHF                                ; 00501aa0
    JNC 0x00501ad6                      ; 00501aa1
        ;   XREF to: 00501ad6 (CONDITIONAL_JUMP)  ; LAB_00501ad6
    XOR EAX,EAX                         ; 00501aa3
        ;   Label: LAB_00501aa3
    MOV ESP,EBP                         ; 00501aa5
    POP EBP                             ; 00501aa7
    POP EDI                             ; 00501aa8
    POP ESI                             ; 00501aa9
    POP EBX                             ; 00501aaa
    RET                                 ; 00501aab
    MOV EAX,[0x01d06ab4]                ; 00501aac | DAT_01d06ab4
        ;   Label: LAB_00501aac
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00501ab1
    ADD EAX,0x20                        ; 00501ab8
    PUSH EAX                            ; 00501abb
    PUSH 0x5e6fc2                       ; 00501abc | = "shotgun-noammo.wav"
    MOV ECX,dword ptr [EBP + 0x14]      ; 00501ac1
    PUSH ECX                            ; 00501ac4
    MOV EBX,dword ptr [0x006236b8]      ; 00501ac5 | DAT_006236b8
    PUSH EBX                            ; 00501acb
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 00501acc
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00501ad1
    JMP 0x00501aa3                      ; 00501ad4
        ;   XREF to: 00501aa3 (UNCONDITIONAL_JUMP)  ; LAB_00501aa3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501ad6
        ;   Label: LAB_00501ad6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00501ad9
    FLD float ptr [EAX + 0x2e8]         ; 00501adc
    MOV dword ptr [EAX + 0x580],0x0     ; 00501ae2
    PUSH ESI                            ; 00501aec
    FSTP float ptr [EAX + 0x594]        ; 00501aed
    MOV EAX,dword ptr [EAX + 0x154]     ; 00501af3
    LEA ESI,[ESP + 0x10c]               ; 00501af9
    LEA EDI,[ESP + 0x160]               ; 00501b00
    CALL dword ptr [EAX + 0xe0]         ; 00501b07
    LEA ESI,[ESP + 0x10c]               ; 00501b0d
    ADD ESP,0x4                         ; 00501b14
    LEA EAX,[ESP + 0x15c]               ; 00501b17
    MOVSD ES:EDI,ESI                    ; 00501b1e
    MOVSD ES:EDI,ESI                    ; 00501b1f
    MOVSD ES:EDI,ESI                    ; 00501b20
    PUSH EAX                            ; 00501b21
    FLD float ptr [ESP + 0x168]         ; 00501b22
    MOV EDI,dword ptr [EBP + 0x14]      ; 00501b29
    LEA ESI,[ESP + 0xe8]                ; 00501b2c
    FADD float ptr [0x005e6fee]         ; 00501b33 | DAT_005e6fee
    PUSH EDI                            ; 00501b39
    FSTP float ptr [ESP + 0x16c]        ; 00501b3a
    CALL core_actor.cpp_FUN_00408b40    ; 00501b41
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x17c]               ; 00501b46
    ADD ESP,0x8                         ; 00501b4d
    LEA ESI,[ESP + 0xe4]                ; 00501b50
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501b57
    MOVSD ES:EDI,ESI                    ; 00501b5a
    MOVSD ES:EDI,ESI                    ; 00501b5b
    MOVSD ES:EDI,ESI                    ; 00501b5c
    MOV EAX,dword ptr [EAX + 0x2e8]     ; 00501b5d
    MOV dword ptr [ESP + 0x1e0],EAX     ; 00501b63
    XOR EAX,EAX                         ; 00501b6a
    MOV dword ptr [ESP + 0x180],EAX     ; 00501b6c
    MOV dword ptr [ESP + 0x184],EAX     ; 00501b73
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 00501b7a
    MOV dword ptr [ESP + 0x188],EAX     ; 00501b81
    LEA EAX,[ESP + 0x180]               ; 00501b88
    PUSH EAX                            ; 00501b8f
    MOV ECX,dword ptr [EBP + 0x14]      ; 00501b90
    PUSH ECX                            ; 00501b93
    LEA ESI,[ESP + 0x1a0]               ; 00501b94
    LEA EDI,[ESP + 0x128]               ; 00501b9b
    CALL core_actor.cpp_FUN_00408ac0    ; 00501ba2
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 00501ba7
    LEA ESI,[ESP + 0x198]               ; 00501baa
    FLD float ptr [ESP + 0x174]         ; 00501bb1
    FLD float ptr [ESP + 0x178]         ; 00501bb8
    MOVSD ES:EDI,ESI                    ; 00501bbf
    MOVSD ES:EDI,ESI                    ; 00501bc0
    MOVSD ES:EDI,ESI                    ; 00501bc1
    FLD float ptr [ESP + 0x17c]         ; 00501bc2
    LEA EDI,[ESP + 0x1a4]               ; 00501bc9
    LEA ESI,[ESP + 0x138]               ; 00501bd0
    FXCH ST2                            ; 00501bd7
    FADD float ptr [ESP + 0x120]        ; 00501bd9
    FXCH                                ; 00501be0
    FADD float ptr [ESP + 0x124]        ; 00501be2
    FXCH ST2                            ; 00501be9
    FADD float ptr [ESP + 0x128]        ; 00501beb
    FXCH                                ; 00501bf2
    FSTP float ptr [ESP + 0x138]        ; 00501bf4
    FXCH                                ; 00501bfb
    FSTP float ptr [ESP + 0x13c]        ; 00501bfd
    FSTP float ptr [ESP + 0x140]        ; 00501c04
    MOVSD ES:EDI,ESI                    ; 00501c0b
    MOVSD ES:EDI,ESI                    ; 00501c0c
    MOVSD ES:EDI,ESI                    ; 00501c0d
    MOV EBX,dword ptr [0x00622c18]      ; 00501c0e | g_CDemonSetPtr
    LEA EDI,[ESP + 0xfc]                ; 00501c14
    LEA ESI,[ESP + 0x174]               ; 00501c1b
    PUSH EBX                            ; 00501c22 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00501c23
    MOVSD ES:EDI,ESI                    ; 00501c24
    MOVSD ES:EDI,ESI                    ; 00501c25
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00501c26
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00501c2b
    PUSH 0xff                           ; 00501c2e
    PUSH 0xff                           ; 00501c33
    PUSH 0xff                           ; 00501c38
    PUSH 0x1                            ; 00501c3d
    MOV ESI,dword ptr [0x00622c18]      ; 00501c3f | g_CDemonSetPtr
    PUSH ESI                            ; 00501c45 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310 ; 00501c46
        ;   XREF to: 00559310 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00559310(CDemonSet * this_ptr, int laser_type, int color_r, int color_g, ...)
    ADD ESP,0x14                        ; 00501c4b
    MOV EDI,dword ptr [0x00622c18]      ; 00501c4e | g_CDemonSetPtr
    PUSH EDI                            ; 00501c54 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00559210 ; 00501c55
        ;   XREF to: 00559210 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00559210(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00501c5a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501c5d
    PUSH EAX                            ; 00501c60
    MOV EDX,dword ptr [0x00622c18]      ; 00501c61 | g_CDemonSetPtr
    PUSH EDX                            ; 00501c67 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00501c68
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00501c6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501c70
    MOV ECX,dword ptr [EAX + 0x304]     ; 00501c73
    TEST ECX,ECX                        ; 00501c79
    JNZ 0x00501d9b                      ; 00501c7b
        ;   XREF to: 00501d9b (CONDITIONAL_JUMP)  ; LAB_00501d9b
    MOV EDI,dword ptr [0x00622c18]      ; 00501c81 | g_CDemonSetPtr
        ;   Label: LAB_00501c81
    PUSH EDI                            ; 00501c87 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0 ; 00501c88
        ;   XREF to: 00558eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00501c8d
    XOR EDI,EDI                         ; 00501c90
    LEA EAX,[ESP + 0x1a4]               ; 00501c92
        ;   Label: LAB_00501c92
    PUSH EAX                            ; 00501c99
    LEA EAX,[ESP + 0x100]               ; 00501c9a
    PUSH EAX                            ; 00501ca1
    MOV EAX,[0x00622c18]                ; 00501ca2 | g_CDemonSetPtr
    PUSH EAX                            ; 00501ca7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00501ca8
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x210],EAX     ; 00501cad
    FLD float ptr [ESP + 0x210]         ; 00501cb4
    ADD ESP,0xc                         ; 00501cbb
    FLDZ                                ; 00501cbe
    FXCH                                ; 00501cc0
    FST float ptr [ESP + 0x8]           ; 00501cc2
    FSTP double ptr [ESP]               ; 00501cc6
    FCOMP double ptr [ESP]              ; 00501cc9
    FNSTSW AX                           ; 00501ccc
    SAHF                                ; 00501cce
    JBE 0x00501db0                      ; 00501ccf
        ;   XREF to: 00501db0 (CONDITIONAL_JUMP)  ; LAB_00501db0
    MOV ESI,dword ptr [0x00622c18]      ; 00501cd5 | g_CDemonSetPtr
        ;   Label: LAB_00501cd5
    PUSH ESI                            ; 00501cdb | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060 ; 00501cdc
        ;   XREF to: 00559060 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00501ce1
    MOV EDI,dword ptr [EBP + 0x14]      ; 00501ce4
    PUSH EDI                            ; 00501ce7
    CALL core_lightpis.cpp_FUN_005017f0 ; 00501ce8
        ;   XREF to: 005017f0 (UNCONDITIONAL_CALL)  ; undefined core_lightpis.cpp_FUN_005017f0()
    ADD ESP,0x4                         ; 00501ced
    XOR EAX,EAX                         ; 00501cf0
    MOV dword ptr [ESP + 0x1f4],EAX     ; 00501cf2
    LEA EAX,[ESP + 0x84]                ; 00501cf9
    XOR EDX,EDX                         ; 00501d00
    ADD EAX,0xc                         ; 00501d02
    MOV dword ptr [ESP + 0x1f0],EDX     ; 00501d05
    MOV dword ptr [ESP + 0x1ec],EAX     ; 00501d0c
    MOV EAX,[0x00622c18]                ; 00501d13 | g_CDemonSetPtr
        ;   Label: LAB_00501d13
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 00501d18
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 00501d1f | g_CDemonSetInstance.field1372328_0x14f0a8
    JGE 0x00502412                      ; 00501d25
        ;   XREF to: 00502412 (CONDITIONAL_JUMP)  ; LAB_00502412
    ADD EAX,dword ptr [ESP + 0x1f0]     ; 00501d2b
    MOV EAX,dword ptr [EAX + 0x14f0ac]  ; 00501d32 | g_CDemonSetInstance.field1372332_0x14f0ac
    MOV dword ptr [ESP + 0x1e4],EAX     ; 00501d38
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 00501d3f
    MOV EAX,dword ptr [EAX + 0x154]     ; 00501d46
    PUSH ECX                            ; 00501d4c
    CALL dword ptr [EAX + 0xe0]         ; 00501d4d
    ADD ESP,0x4                         ; 00501d53
    TEST EAX,EAX                        ; 00501d56
    JZ 0x00501f4c                       ; 00501d58
        ;   XREF to: 00501f4c (CONDITIONAL_JUMP)  ; LAB_00501f4c
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 00501d5e
        ;   Label: LAB_00501d5e
    PUSH ECX                            ; 00501d65
    CALL core_lightpis.cpp_FUN_005016d0 ; 00501d66
        ;   XREF to: 005016d0 (UNCONDITIONAL_CALL)  ; undefined core_lightpis.cpp_FUN_005016d0()
    ADD ESP,0x4                         ; 00501d6b
    TEST EAX,EAX                        ; 00501d6e
    JNZ 0x00501f69                      ; 00501d70
        ;   XREF to: 00501f69 (CONDITIONAL_JUMP)  ; LAB_00501f69
    MOV ESI,dword ptr [ESP + 0x1f4]     ; 00501d76
        ;   Label: LAB_00501d76
    MOV EBX,dword ptr [ESP + 0x1f0]     ; 00501d7d
    INC ESI                             ; 00501d84
    ADD EBX,0x4                         ; 00501d85
    MOV dword ptr [ESP + 0x1f4],ESI     ; 00501d88
    MOV dword ptr [ESP + 0x1f0],EBX     ; 00501d8f
    JMP 0x00501d13                      ; 00501d96
        ;   XREF to: 00501d13 (UNCONDITIONAL_JUMP)  ; LAB_00501d13
    PUSH ECX                            ; 00501d9b
        ;   Label: LAB_00501d9b
    MOV ESI,dword ptr [0x00622c18]      ; 00501d9c | g_CDemonSetPtr
    PUSH ESI                            ; 00501da2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00501da3
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00501da8
    JMP 0x00501c81                      ; 00501dab
        ;   XREF to: 00501c81 (UNCONDITIONAL_JUMP)  ; LAB_00501c81
    FLD1                                ; 00501db0
        ;   Label: LAB_00501db0
    FCOMP double ptr [ESP]              ; 00501db2
    FNSTSW AX                           ; 00501db5
    SAHF                                ; 00501db7
    JC 0x00501cd5                       ; 00501db8
        ;   XREF to: 00501cd5 (CONDITIONAL_JUMP)  ; LAB_00501cd5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501dbe
    FLD float ptr [EAX + 0x2e8]         ; 00501dc1
    FMUL float ptr [ESP + 0x8]          ; 00501dc7
    MOV EDX,dword ptr [0x007c637c]      ; 00501dcb | g_CCharacterClassInfo.name_hash
    FSTP float ptr [EAX + 0x594]        ; 00501dd1
    MOV EAX,[0x00622c18]                ; 00501dd7 | g_CDemonSetPtr
    PUSH EDX                            ; 00501ddc
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 00501ddd | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ECX                            ; 00501de3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00501de4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00501de9
    MOV dword ptr [ESP + 0x1f8],EAX     ; 00501dec
    TEST EAX,EAX                        ; 00501df3
    JZ 0x00501e14                       ; 00501df5
        ;   XREF to: 00501e14 (CONDITIONAL_JUMP)  ; LAB_00501e14
    PUSH EAX                            ; 00501df7
    MOV EDX,dword ptr [EAX + 0x154]     ; 00501df8
    CALL dword ptr [EDX + 0x10c]        ; 00501dfe
    ADD ESP,0x4                         ; 00501e04
    TEST EAX,EAX                        ; 00501e07
    JLE 0x00501e14                      ; 00501e09
        ;   XREF to: 00501e14 (CONDITIONAL_JUMP)  ; LAB_00501e14
    XOR EBX,EBX                         ; 00501e0b
    MOV dword ptr [ESP + 0x1f8],EBX     ; 00501e0d
    MOV ESI,dword ptr [0x01cd0dfc]      ; 00501e14 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00501e14
    MOV EAX,[0x00622c18]                ; 00501e1a | g_CDemonSetPtr
    PUSH ESI                            ; 00501e1f
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00501e20 | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 00501e26
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00501e27
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ECX,dword ptr [0x02c8ae44]      ; 00501e2c | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 00501e32
    MOV ESI,EAX                         ; 00501e35
    MOV EAX,[0x00622c18]                ; 00501e37 | g_CDemonSetPtr
    PUSH ECX                            ; 00501e3c
    MOV EBX,dword ptr [EAX + 0x14d144]  ; 00501e3d | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EBX                            ; 00501e43
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00501e44
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00501e49
    MOV EBX,EAX                         ; 00501e4c
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00501e4e
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 00501e55
    TEST EAX,EAX                        ; 00501e5c
    JZ 0x00501ebd                       ; 00501e5e
        ;   XREF to: 00501ebd (CONDITIONAL_JUMP)  ; LAB_00501ebd
    MOV EDX,dword ptr [ESP + 0x1f8]     ; 00501e60
    MOV EAX,dword ptr [EAX + 0x154]     ; 00501e67
    PUSH EDX                            ; 00501e6d
    CALL dword ptr [EAX + 0xe0]         ; 00501e6e
    ADD ESP,0x4                         ; 00501e74
    TEST EAX,EAX                        ; 00501e77
    JZ 0x00501cd5                       ; 00501e79
        ;   XREF to: 00501cd5 (CONDITIONAL_JUMP)  ; LAB_00501cd5
    TEST EDI,EDI                        ; 00501e7f
    JNZ 0x00501cd5                      ; 00501e81
        ;   XREF to: 00501cd5 (CONDITIONAL_JUMP)  ; LAB_00501cd5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501e87
    MOV ECX,dword ptr [0x00622c18]      ; 00501e8a | g_CDemonSetPtr
    FLD float ptr [0x00603170]          ; 00501e90 | DAT_00603170
    PUSH ECX                            ; 00501e96 | g_CDemonSetInstance
    FSTP float ptr [EAX + 0x580]        ; 00501e97
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060 ; 00501e9d
        ;   XREF to: 00559060 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00501ea2
    MOV EBX,dword ptr [0x00622c18]      ; 00501ea5 | g_CDemonSetPtr
    PUSH EBX                            ; 00501eab | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00501eac
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00501eb1
    XOR EAX,EAX                         ; 00501eb4
    MOV ESP,EBP                         ; 00501eb6
    POP EBP                             ; 00501eb8
    POP EDI                             ; 00501eb9
    POP ESI                             ; 00501eba
    POP EBX                             ; 00501ebb
    RET                                 ; 00501ebc
    TEST ESI,ESI                        ; 00501ebd
        ;   Label: LAB_00501ebd
    JNZ 0x00501f2e                      ; 00501ebf
        ;   XREF to: 00501f2e (CONDITIONAL_JUMP)  ; LAB_00501f2e
    TEST EBX,EBX                        ; 00501ec1
    JZ 0x00501f3d                       ; 00501ec3
        ;   XREF to: 00501f3d (CONDITIONAL_JUMP)  ; LAB_00501f3d
    PUSH EBX                            ; 00501ec5
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0 ; 00501ec6
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00501ecb
    MOV EDX,dword ptr [EBP + 0x14]      ; 00501ece
    PUSH EDX                            ; 00501ed1
    PUSH EBX                            ; 00501ed2
    CALL core_trigger.cpp_FUN_0059bdf0  ; 00501ed3
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00501ed8
    TEST EAX,EAX                        ; 00501edb
    JZ 0x00501f12                       ; 00501edd
        ;   XREF to: 00501f12 (CONDITIONAL_JUMP)  ; LAB_00501f12
    MOV ECX,dword ptr [EBP + 0x14]      ; 00501edf
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501ee2
    PUSH ECX                            ; 00501ee5
    MOV EAX,dword ptr [EAX + 0x154]     ; 00501ee6
    CALL dword ptr [EAX + 0xec]         ; 00501eec
    MOV dword ptr [ESP + 0x208],EAX     ; 00501ef2
    FLD float ptr [ESP + 0x208]         ; 00501ef9
    ADD ESP,0x4                         ; 00501f00
    SUB ESP,0x4                         ; 00501f03
    FSTP float ptr [ESP]                ; 00501f06
    PUSH EBX                            ; 00501f09
    CALL core_trigger.cpp_FUN_0059be30  ; 00501f0a
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00501f0f
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 00501f12
        ;   Label: LAB_00501f12
    PUSH EBX                            ; 00501f19
    MOV ESI,dword ptr [0x00622c18]      ; 00501f1a | g_CDemonSetPtr
    PUSH ESI                            ; 00501f20 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00501f21
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00501f26
    JMP 0x00501cd5                      ; 00501f29
        ;   XREF to: 00501cd5 (UNCONDITIONAL_JUMP)  ; LAB_00501cd5
    PUSH ESI                            ; 00501f2e
        ;   Label: LAB_00501f2e
    MOV EAX,[0x00622c18]                ; 00501f2f | g_CDemonSetPtr
    PUSH EAX                            ; 00501f34 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00501f35
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00501f3a
    INC EDI                             ; 00501f3d
        ;   Label: LAB_00501f3d
    CMP EDI,0x1                         ; 00501f3e
    JL 0x00501c92                       ; 00501f41
        ;   XREF to: 00501c92 (CONDITIONAL_JUMP)  ; LAB_00501c92
    JMP 0x00501cd5                      ; 00501f47
        ;   XREF to: 00501cd5 (UNCONDITIONAL_JUMP)  ; LAB_00501cd5
    PUSH 0x5e6f70                       ; 00501f4c | = "CGhoul"
        ;   Label: LAB_00501f4c
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 00501f51
    PUSH EBX                            ; 00501f58
    CALL core_actor.cpp_FUN_0040c550    ; 00501f59
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00501f5e
    TEST EAX,EAX                        ; 00501f61
    JZ 0x005022b2                       ; 00501f63
        ;   XREF to: 005022b2 (CONDITIONAL_JUMP)  ; LAB_005022b2
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 00501f69
        ;   Label: LAB_00501f69
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 00501f70
    PUSH EBX                            ; 00501f77
    MOV EAX,dword ptr [EAX + 0x154]     ; 00501f78
    LEA ESI,[ESP + 0xd0]                ; 00501f7e
    CALL dword ptr [EAX + 0x1c]         ; 00501f85
    ADD ESP,0x4                         ; 00501f88
    LEA EAX,[ESP + 0xc0]                ; 00501f8b
    PUSH EAX                            ; 00501f92
    LEA EAX,[ESP + 0xb8]                ; 00501f93
    PUSH EAX                            ; 00501f9a
    LEA EAX,[EBX + 0x30]                ; 00501f9b
    PUSH EAX                            ; 00501f9e
    ADD EBX,0x20                        ; 00501f9f
    LEA EDI,[ESP + 0xc0]                ; 00501fa2
    PUSH EBX                            ; 00501fa9
    MOV ECX,0x6                         ; 00501faa
    LEA ESI,[ESP + 0xdc]                ; 00501faf
    PUSH 0x1ccc3e4                      ; 00501fb6
    MOVSD.REP ES:EDI,ESI                ; 00501fbb
    CALL core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0 ; 00501fbd
        ;   XREF to: 00452de0 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452de0(CDemonCamera * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * bbox_min, ...)
    ADD ESP,0x14                        ; 00501fc2
    TEST EAX,EAX                        ; 00501fc5
    JZ 0x00501d76                       ; 00501fc7
        ;   XREF to: 00501d76 (CONDITIONAL_JUMP)  ; LAB_00501d76
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 00501fcd
    PUSH ESI                            ; 00501fd4
    PUSH 0x5e6fd5                       ; 00501fd5 | = "%s in volume\n"
    MOV EDI,dword ptr [0x00611100]      ; 00501fda | g_CConsolePtr
    PUSH EDI                            ; 00501fe0 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00501fe1
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EDX,dword ptr [0x01d06ab4]      ; 00501fe6 | DAT_01d06ab4
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 00501fec
    LEA ESI,[ESP + 0x15c]               ; 00501ff3
    LEA EAX,[EDX + 0x20]                ; 00501ffa
    LEA EDI,[ESP + 0x1d4]               ; 00501ffd
    ADD ESP,0xc                         ; 00502004
    FLD float ptr [EAX]                 ; 00502007
    FLD float ptr [EAX + 0x4]           ; 00502009
    FLD float ptr [EAX + 0x8]           ; 0050200c
    FXCH ST2                            ; 0050200f
    FSUB float ptr [EBX]                ; 00502011
    FXCH                                ; 00502013
    FSUB float ptr [EBX + 0x4]          ; 00502015
    FXCH ST2                            ; 00502018
    FSUB float ptr [EBX + 0x8]          ; 0050201a
    FXCH                                ; 0050201d
    FSTP float ptr [ESP + 0x150]        ; 0050201f
    FXCH                                ; 00502026
    FSTP float ptr [ESP + 0x154]        ; 00502028
    FSTP float ptr [ESP + 0x158]        ; 0050202f
    MOVSD ES:EDI,ESI                    ; 00502036
    MOVSD ES:EDI,ESI                    ; 00502037
    MOVSD ES:EDI,ESI                    ; 00502038
    FLD float ptr [ESP + 0x1cc]         ; 00502039
    FMUL ST0                            ; 00502040
    FLD float ptr [ESP + 0x1c8]         ; 00502042
    FMUL ST0                            ; 00502049
    FADDP                               ; 0050204b
    FLD float ptr [ESP + 0x1d0]         ; 0050204d
    FMUL ST0                            ; 00502054
    FADDP                               ; 00502056
    FSQRT                               ; 00502058
    FCOMP double ptr [0x005e6ffa]       ; 0050205a | DAT_005e6ffa
    FNSTSW AX                           ; 00502060
    SAHF                                ; 00502062
    JC 0x0050230f                       ; 00502063
        ;   XREF to: 0050230f (CONDITIONAL_JUMP)  ; LAB_0050230f
    LEA EAX,[ESP + 0xfc]                ; 00502069
        ;   Label: LAB_00502069
    MOV ESI,dword ptr [0x00622c18]      ; 00502070 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x200],EAX     ; 00502076
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0050207d
    PUSH ESI                            ; 00502084 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x200],EAX     ; 00502085
    CALL core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0 ; 0050208c
        ;   XREF to: 00558eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00558eb0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00502091
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 00502094
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 0050209b
    PUSH EDI                            ; 005020a2
    MOV EAX,dword ptr [EAX + 0x154]     ; 005020a3
    LEA ESI,[ESP + 0xa0]                ; 005020a9
    CALL dword ptr [EAX + 0x1c]         ; 005020b0
    MOV ECX,0x6                         ; 005020b3
    LEA EDI,[ESP + 0x88]                ; 005020b8
    ADD ESP,0x4                         ; 005020bf
    LEA EAX,[ESP + 0xf0]                ; 005020c2
    LEA ESI,[ESP + 0x9c]                ; 005020c9
    PUSH EAX                            ; 005020d0
    MOVSD.REP ES:EDI,ESI                ; 005020d1
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 005020d3
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    LEA EDI,[ESP + 0x1c0]               ; 005020d8
    ADD ESP,0x4                         ; 005020df
    LEA ESI,[ESP + 0xf0]                ; 005020e2
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 005020e9
    FLD float ptr [ESP + 0x84]          ; 005020f0
    FADD float ptr [EAX]                ; 005020f7
    FLD float ptr [ESP + 0x88]          ; 005020f9
    FXCH                                ; 00502100
    FSTP float ptr [ESP + 0xf0]         ; 00502102
    FADD float ptr [EAX + 0x4]          ; 00502109
    FLD float ptr [ESP + 0x8c]          ; 0050210c
    FXCH                                ; 00502113
    FSTP float ptr [ESP + 0xf4]         ; 00502115
    FADD float ptr [EAX + 0x8]          ; 0050211c
    LEA EAX,[ESP + 0x144]               ; 0050211f
    FSTP float ptr [ESP + 0xf8]         ; 00502126
    PUSH EAX                            ; 0050212d
    MOVSD ES:EDI,ESI                    ; 0050212e
    MOVSD ES:EDI,ESI                    ; 0050212f
    MOVSD ES:EDI,ESI                    ; 00502130
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 00502131
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    ADD ESP,0x4                         ; 00502136
    FLD float ptr [0x005e6ff2]          ; 00502139 | DAT_005e6ff2
    FLD float ptr [ESP + 0x1bc]         ; 0050213f
    FMUL ST1                            ; 00502146
    FLD float ptr [ESP + 0x1c0]         ; 00502148
    FMUL ST2                            ; 0050214f
    FLD float ptr [ESP + 0x1c4]         ; 00502151
    FMULP ST3                           ; 00502158
    LEA EDI,[ESP + 0x1b0]               ; 0050215a
    LEA EAX,[ESP + 0x1b0]               ; 00502161
    LEA ESI,[ESP + 0x144]               ; 00502168
    PUSH EAX                            ; 0050216f
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 00502170
    FXCH                                ; 00502177
    FSTP float ptr [ESP + 0x148]        ; 00502179
    FSTP float ptr [ESP + 0x14c]        ; 00502180
    FSTP float ptr [ESP + 0x150]        ; 00502187
    MOVSD ES:EDI,ESI                    ; 0050218e
    MOVSD ES:EDI,ESI                    ; 0050218f
    MOVSD ES:EDI,ESI                    ; 00502190
    PUSH EAX                            ; 00502191
    LEA ESI,[ESP + 0x170]               ; 00502192
    LEA EDI,[ESP + 0x1dc]               ; 00502199
    CALL core_actor.cpp_FUN_00408b40    ; 005021a0
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x170]               ; 005021a5
    ADD ESP,0x8                         ; 005021ac
    MOVSD ES:EDI,ESI                    ; 005021af
    MOVSD ES:EDI,ESI                    ; 005021b0
    MOVSD ES:EDI,ESI                    ; 005021b1
    XOR EBX,EBX                         ; 005021b2
    XOR ESI,ESI                         ; 005021b4
    XOR EDI,EDI                         ; 005021b6
    LEA EAX,[ESP + 0x1d4]               ; 005021b8
        ;   Label: LAB_005021b8
    PUSH EAX                            ; 005021bf
    MOV EDX,dword ptr [ESP + 0x204]     ; 005021c0
    PUSH EDX                            ; 005021c7
    MOV ECX,dword ptr [0x00622c18]      ; 005021c8 | g_CDemonSetPtr
    PUSH ECX                            ; 005021ce | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 005021cf
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV EAX,[0x00622c18]                ; 005021d4 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005021d9 | g_CDemonSetInstance.field1364292_0x14d144
    ADD ESP,0xc                         ; 005021df
    CMP EDI,EDX                         ; 005021e2
    JNZ 0x005023db                      ; 005021e4
        ;   XREF to: 005023db (CONDITIONAL_JUMP)  ; LAB_005023db
    MOV EBX,dword ptr [0x00622c18]      ; 005021ea | g_CDemonSetPtr
        ;   Label: LAB_005021ea
    PUSH EBX                            ; 005021f0 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060 ; 005021f1
        ;   XREF to: 00559060 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00559060(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005021f6
    TEST ESI,ESI                        ; 005021f9
    JZ 0x00501d76                       ; 005021fb
        ;   XREF to: 00501d76 (CONDITIONAL_JUMP)  ; LAB_00501d76
    LEA EAX,[ESP + 0x48]                ; 00502201
    PUSH EAX                            ; 00502205
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00502206
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0050220b
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0050220e
    PUSH ESI                            ; 00502215
    CALL core_lightpis.cpp_FUN_005016d0 ; 00502216
        ;   XREF to: 005016d0 (UNCONDITIONAL_CALL)  ; undefined core_lightpis.cpp_FUN_005016d0()
    ADD ESP,0x4                         ; 0050221b
    TEST EAX,EAX                        ; 0050221e
    JZ 0x00502405                       ; 00502220
        ;   XREF to: 00502405 (CONDITIONAL_JUMP)  ; LAB_00502405
    MOV EDX,dword ptr [EBP + 0x14]      ; 00502226
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502229
    PUSH EDX                            ; 0050222c
    MOV EAX,dword ptr [EAX + 0x154]     ; 0050222d
    CALL dword ptr [EAX + 0xec]         ; 00502233
    MOV dword ptr [ESP + 0x208],EAX     ; 00502239
    FLD float ptr [ESP + 0x208]         ; 00502240
    ADD ESP,0x4                         ; 00502247
    FSTP float ptr [ESP + 0x4c]         ; 0050224a
    MOV ECX,0x6c                        ; 0050224e
        ;   Label: LAB_0050224e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502253
    MOV EDX,dword ptr [EBP + 0x14]      ; 00502256
    XOR EBX,EBX                         ; 00502259
    MOV dword ptr [ESP + 0x78],ECX      ; 0050225b
    MOV dword ptr [ESP + 0x50],EBX      ; 0050225f
    MOV dword ptr [ESP + 0x5c],EBX      ; 00502263
    MOV dword ptr [ESP + 0x58],EBX      ; 00502267
    MOV dword ptr [ESP + 0x54],EBX      ; 0050226b
    MOV dword ptr [ESP + 0x7c],EAX      ; 0050226f
    PUSH EDX                            ; 00502273
    MOV EAX,dword ptr [EAX + 0x154]     ; 00502274
    CALL dword ptr [EAX + 0x94]         ; 0050227a
    ADD ESP,0x4                         ; 00502280
    MOV dword ptr [ESP + 0x80],EAX      ; 00502283
    LEA EAX,[ESP + 0x48]                ; 0050228a
    MOV EDX,dword ptr [ESP + 0x1e4]     ; 0050228e
    PUSH EAX                            ; 00502295
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 00502296
    MOV EDX,dword ptr [EDX + 0x154]     ; 0050229d
    PUSH ECX                            ; 005022a3
    CALL dword ptr [EDX + 0x108]        ; 005022a4
    ADD ESP,0x8                         ; 005022aa
    JMP 0x00501d76                      ; 005022ad
        ;   XREF to: 00501d76 (UNCONDITIONAL_JUMP)  ; LAB_00501d76
    PUSH 0x5e6f77                       ; 005022b2 | = "CTVBat"
        ;   Label: LAB_005022b2
    PUSH EBX                            ; 005022b7
    CALL core_actor.cpp_FUN_0040c550    ; 005022b8
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005022bd
    TEST EAX,EAX                        ; 005022c0
    JNZ 0x00501f69                      ; 005022c2
        ;   XREF to: 00501f69 (CONDITIONAL_JUMP)  ; LAB_00501f69
    PUSH 0x5e6f7e                       ; 005022c8 | = "CBatCreature"
    PUSH EBX                            ; 005022cd
    CALL core_actor.cpp_FUN_0040c550    ; 005022ce
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005022d3
    TEST EAX,EAX                        ; 005022d6
    JNZ 0x00501f69                      ; 005022d8
        ;   XREF to: 00501f69 (CONDITIONAL_JUMP)  ; LAB_00501f69
    PUSH 0x5e6f8b                       ; 005022de | = "CWerewolf"
    PUSH EBX                            ; 005022e3
    CALL core_actor.cpp_FUN_0040c550    ; 005022e4
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005022e9
    TEST EAX,EAX                        ; 005022ec
    JNZ 0x00501f69                      ; 005022ee
        ;   XREF to: 00501f69 (CONDITIONAL_JUMP)  ; LAB_00501f69
    PUSH 0x5e6f95                       ; 005022f4 | = "CSvetlana"
    PUSH EBX                            ; 005022f9
    CALL core_actor.cpp_FUN_0040c550    ; 005022fa
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005022ff
    TEST EAX,EAX                        ; 00502302
    JNZ 0x00501f69                      ; 00502304
        ;   XREF to: 00501f69 (CONDITIONAL_JUMP)  ; LAB_00501f69
    JMP 0x00501d5e                      ; 0050230a
        ;   XREF to: 00501d5e (UNCONDITIONAL_JUMP)  ; LAB_00501d5e
    PUSH EBX                            ; 0050230f
        ;   Label: LAB_0050230f
    PUSH EDX                            ; 00502310
    LEA ESI,[ESP + 0x11c]               ; 00502311
    LEA EDI,[ESP + 0x194]               ; 00502318
    CALL core_actor.cpp_FUN_00408bb0    ; 0050231f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x11c]               ; 00502324
    ADD ESP,0x8                         ; 0050232b
    XOR EAX,EAX                         ; 0050232e
    MOVSD ES:EDI,ESI                    ; 00502330
    MOVSD ES:EDI,ESI                    ; 00502331
    MOVSD ES:EDI,ESI                    ; 00502332
    MOV dword ptr [ESP + 0x190],EAX     ; 00502333
    LEA EAX,[ESP + 0x18c]               ; 0050233a
    PUSH EAX                            ; 00502341
    LEA ESI,[ESP + 0x130]               ; 00502342
    CALL core_vecdir.cpp_FUN_005a7520   ; 00502349
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    ADD ESP,0x4                         ; 0050234e
    LEA EAX,[ESP + 0xc]                 ; 00502351
    PUSH EAX                            ; 00502355
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00502356
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0050235b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050235e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502361
    PUSH EDX                            ; 00502364
    MOV EAX,dword ptr [EAX + 0x154]     ; 00502365
    CALL dword ptr [EAX + 0xec]         ; 0050236b
    MOV dword ptr [ESP + 0x208],EAX     ; 00502371
    MOV ECX,0x6c                        ; 00502378
    FLD float ptr [ESP + 0x208]         ; 0050237d
    ADD ESP,0x4                         ; 00502384
    LEA EAX,[ESP + 0xc]                 ; 00502387
    MOV EDX,dword ptr [ESP + 0x1e4]     ; 0050238b
    PUSH EAX                            ; 00502392
    MOV EBX,dword ptr [ESP + 0x1e8]     ; 00502393
    MOV dword ptr [ESP + 0x40],ECX      ; 0050239a
    PUSH EBX                            ; 0050239e
    FSTP float ptr [ESP + 0x18]         ; 0050239f
    MOV EDX,dword ptr [EDX + 0x154]     ; 005023a3
    CALL dword ptr [EDX + 0x108]        ; 005023a9
    ADD ESP,0x8                         ; 005023af
    JMP 0x00502069                      ; 005023b2
        ;   XREF to: 00502069 (UNCONDITIONAL_JUMP)  ; LAB_00502069
    MOV EAX,[0x00622c18]                ; 005023b7 | g_CDemonSetPtr
        ;   Label: LAB_005023b7
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 005023bc | g_CDemonSetInstance.field1364292_0x14d144
    PUSH ECX                            ; 005023c2
    PUSH EAX                            ; 005023c3 | g_CDemonSetInstance
    INC EBX                             ; 005023c4
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005023c5
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005023ca
    CMP EBX,0x3                         ; 005023cd
    JL 0x005021b8                       ; 005023d0
        ;   XREF to: 005021b8 (CONDITIONAL_JUMP)  ; LAB_005021b8
    JMP 0x005021ea                      ; 005023d6
        ;   XREF to: 005021ea (UNCONDITIONAL_JUMP)  ; LAB_005021ea
    CMP EDX,dword ptr [ESP + 0x1fc]     ; 005023db
        ;   Label: LAB_005023db
    JNZ 0x005023ee                      ; 005023e2
        ;   XREF to: 005023ee (CONDITIONAL_JUMP)  ; LAB_005023ee
    MOV ESI,0x1                         ; 005023e4
    JMP 0x005021ea                      ; 005023e9
        ;   XREF to: 005021ea (UNCONDITIONAL_JUMP)  ; LAB_005021ea
    PUSH 0x5e6faa                       ; 005023ee | = "CTrigger || CGlass"
        ;   Label: LAB_005023ee
    PUSH EDX                            ; 005023f3
    CALL core_actor.cpp_FUN_0040c550    ; 005023f4
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005023f9
    TEST EAX,EAX                        ; 005023fc
    JNZ 0x005023b7                      ; 005023fe
        ;   XREF to: 005023b7 (CONDITIONAL_JUMP)  ; LAB_005023b7
    JMP 0x005021ea                      ; 00502400
        ;   XREF to: 005021ea (UNCONDITIONAL_JUMP)  ; LAB_005021ea
    MOV dword ptr [ESP + 0x4c],0x3dcccccd ; 00502405
        ;   Label: LAB_00502405
    JMP 0x0050224e                      ; 0050240d
        ;   XREF to: 0050224e (UNCONDITIONAL_JUMP)  ; LAB_0050224e
    PUSH EAX                            ; 00502412 | g_CDemonSetInstance
        ;   Label: LAB_00502412
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00502413
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00502418
    LEA EAX,[ESP + 0x174]               ; 0050241b
    PUSH EAX                            ; 00502422
    PUSH 0x5e6fe3                       ; 00502423 | = "ecre.wav"
    MOV EBX,dword ptr [EBP + 0x14]      ; 00502428
    PUSH EBX                            ; 0050242b
    MOV ESI,dword ptr [0x006236b8]      ; 0050242c | DAT_006236b8
    PUSH ESI                            ; 00502432
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 00502433
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00502438
    MOV EDI,dword ptr [EBX + 0x57c]     ; 0050243b
    PUSH dword ptr [0x00603178]         ; 00502441 | DAT_00603178
    PUSH EDI                            ; 00502447
    CALL sound_sndmain.cpp_FUN_00573950 ; 00502448
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    FLD float ptr [0x00603170]          ; 0050244d | DAT_00603170
    MOV dword ptr [EBX + 0x578],0x1     ; 00502453
    MOV EAX,0x1                         ; 0050245d
    MOV dword ptr [EBX + 0x588],0x1     ; 00502462
    ADD ESP,0x8                         ; 0050246c
    FSTP float ptr [EBX + 0x300]        ; 0050246f
    MOV ESP,EBP                         ; 00502475
    POP EBP                             ; 00502477
    POP EDI                             ; 00502478
    POP ESI                             ; 00502479
    POP EBX                             ; 0050247a
    RET                                 ; 0050247b

