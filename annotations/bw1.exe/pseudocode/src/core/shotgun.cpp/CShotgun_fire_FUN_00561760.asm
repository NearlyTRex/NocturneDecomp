; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shotgun_cpp_CShotgun_fire_FUN_00561760(CShotgun *this_ptr)
;
; Parameters:
; CShotgun *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shotgun_noammo_wav_005f19a4
;   TerminatedCString s_shotgun_wav_005f19b7
;   undefined4 DAT_005f19c3
;   undefined4 DAT_005f19c7
;   undefined4 DAT_005f19cf
;   undefined4 DAT_005f19d7
;   undefined4 DAT_005f19df
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_crate.cpp_FUN_00449600
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
;   core_glass.cpp_FUN_004e34b0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561760
        ;   Label: core_shotgun.cpp_CShotgun_fire_FUN_00561760
    PUSH ESI                            ; 00561761
    PUSH EDI                            ; 00561762
    PUSH EBP                            ; 00561763
    MOV EBP,ESP                         ; 00561764
    SUB ESP,0x180                       ; 00561766
    AND ESP,0xfffffff8                  ; 0056176c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056176f
    PUSH EBX                            ; 00561772
    MOV EAX,dword ptr [EBX + 0x154]     ; 00561773
    LEA ESI,[ESP + 0x130]               ; 00561779
    LEA EDI,[ESP + 0x124]               ; 00561780
    CALL dword ptr [EAX + 0xe0]         ; 00561787
    ADD ESP,0x4                         ; 0056178d
    LEA EAX,[ESP + 0x120]               ; 00561790
    LEA ESI,[ESP + 0x12c]               ; 00561797
    PUSH EAX                            ; 0056179e
    MOVSD ES:EDI,ESI                    ; 0056179f
    MOVSD ES:EDI,ESI                    ; 005617a0
    MOVSD ES:EDI,ESI                    ; 005617a1
    PUSH EBX                            ; 005617a2
    LEA ESI,[ESP + 0x98]                ; 005617a3
    CALL core_actor.cpp_FUN_00408b40    ; 005617aa
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005617af
    LEA EDI,[ESP + 0xa8]                ; 005617b2
    LEA ESI,[ESP + 0x90]                ; 005617b9
    PUSH EBX                            ; 005617c0
    MOVSD ES:EDI,ESI                    ; 005617c1
    MOVSD ES:EDI,ESI                    ; 005617c2
    MOVSD ES:EDI,ESI                    ; 005617c3
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 005617c4
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005617c9
    TEST EAX,EAX                        ; 005617cc
    JZ 0x00561b0b                       ; 005617ce
        ;   XREF to: 00561b0b (CONDITIONAL_JUMP)  ; LAB_00561b0b
    FLD float ptr [EBX + 0x578]         ; 005617d4
    FMUL float ptr [0x005f19c3]         ; 005617da | DAT_005f19c3
    FMUL double ptr [0x005f19c7]        ; 005617e0 | DAT_005f19c7
    FPTAN                               ; 005617e6
    FSTP ST0                            ; 005617e8
    PUSH 0xf                            ; 005617ea
    FMUL float ptr [EBX + 0x2e8]        ; 005617ec
    PUSH 0xa                            ; 005617f2
    FSTP float ptr [ESP + 0x154]        ; 005617f4
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 005617fb
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00561800
    XOR ECX,ECX                         ; 00561803
    MOV dword ptr [ESP + 0x15c],EAX     ; 00561805
    MOV dword ptr [ESP + 0x150],ECX     ; 0056180c
    TEST EAX,EAX                        ; 00561813
    JLE 0x00561a8a                      ; 00561815
        ;   XREF to: 00561a8a (CONDITIONAL_JUMP)  ; LAB_00561a8a
    PUSH 0x40c90fdb                     ; 0056181b
        ;   Label: LAB_0056181b
    PUSH 0x0                            ; 00561820
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00561822
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x184],EAX     ; 00561827
    FLD float ptr [ESP + 0x184]         ; 0056182e
    ADD ESP,0x8                         ; 00561835
    PUSH dword ptr [ESP + 0x14c]        ; 00561838
    PUSH 0x0                            ; 0056183f
    FSTP float ptr [ESP + 0x160]        ; 00561841
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00561848
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x184],EAX     ; 0056184d
    FLD float ptr [ESP + 0x184]         ; 00561854
    ADD ESP,0x8                         ; 0056185b
    FLD float ptr [ESP + 0x158]         ; 0056185e
    FLD ST0                             ; 00561865
    FCOS                                ; 00561867
    FXCH                                ; 00561869
    FSIN                                ; 0056186b
    FXCH                                ; 0056186d
    FMUL ST2                            ; 0056186f
    FXCH                                ; 00561871
    FMULP ST2                           ; 00561873
    FSTP float ptr [ESP + 0x108]        ; 00561875
    FSTP float ptr [ESP + 0x10c]        ; 0056187c
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 00561883
    MOV dword ptr [ESP + 0x110],EAX     ; 00561889
    LEA EAX,[ESP + 0x108]               ; 00561890
    PUSH EAX                            ; 00561897
    PUSH EBX                            ; 00561898
    LEA ESI,[ESP + 0xa4]                ; 00561899
    LEA EDI,[ESP + 0x68]                ; 005618a0
    CALL core_actor.cpp_FUN_00408ac0    ; 005618a4
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xa4]                ; 005618a9
    ADD ESP,0x8                         ; 005618b0
    MOVSD ES:EDI,ESI                    ; 005618b3
    MOVSD ES:EDI,ESI                    ; 005618b4
    MOVSD ES:EDI,ESI                    ; 005618b5
    LEA EAX,[ESP + 0x60]                ; 005618b6
    LEA ESI,[ESP + 0x108]               ; 005618ba
    CMP ESI,EAX                         ; 005618c1
    JZ 0x005618e6                       ; 005618c3
        ;   XREF to: 005618e6 (CONDITIONAL_JUMP)  ; LAB_005618e6
    MOV EAX,dword ptr [ESP + 0x60]      ; 005618c5
    MOV dword ptr [ESP + 0x108],EAX     ; 005618c9
    MOV EAX,dword ptr [ESP + 0x64]      ; 005618d0
    MOV dword ptr [ESP + 0x10c],EAX     ; 005618d4
    MOV EAX,dword ptr [ESP + 0x68]      ; 005618db
    MOV dword ptr [ESP + 0x110],EAX     ; 005618df
    FLD float ptr [ESP + 0xa8]          ; 005618e6
        ;   Label: LAB_005618e6
    FLD float ptr [ESP + 0xac]          ; 005618ed
    FLD float ptr [ESP + 0xb0]          ; 005618f4
    LEA EDI,[ESP + 0xcc]                ; 005618fb
    LEA ESI,[ESP + 0x6c]                ; 00561902
    FXCH ST2                            ; 00561906
    FADD float ptr [ESP + 0x108]        ; 00561908
    FXCH                                ; 0056190f
    FADD float ptr [ESP + 0x10c]        ; 00561911
    FXCH ST2                            ; 00561918
    FADD float ptr [ESP + 0x110]        ; 0056191a
    FXCH                                ; 00561921
    FSTP float ptr [ESP + 0x6c]         ; 00561923
    FXCH                                ; 00561927
    FSTP float ptr [ESP + 0x70]         ; 00561929
    FSTP float ptr [ESP + 0x74]         ; 0056192d
    MOVSD ES:EDI,ESI                    ; 00561931
    MOVSD ES:EDI,ESI                    ; 00561932
    MOVSD ES:EDI,ESI                    ; 00561933
    FLD float ptr [EBX + 0x2e8]         ; 00561934
    FDIVR double ptr [0x005f19d7]       ; 0056193a | DAT_005f19d7
    FLD float ptr [ESP + 0x108]         ; 00561940
    FXCH                                ; 00561947
    FSTP float ptr [ESP + 0x154]        ; 00561949
    FMUL float ptr [ESP + 0x154]        ; 00561950
    FLD float ptr [ESP + 0x10c]         ; 00561957
    FMUL float ptr [ESP + 0x154]        ; 0056195e
    FLD float ptr [ESP + 0x110]         ; 00561965
    FMUL float ptr [ESP + 0x154]        ; 0056196c
    FLD float ptr [ESP + 0xa8]          ; 00561973
    FLD float ptr [ESP + 0xac]          ; 0056197a
    LEA EDI,[ESP + 0x48]                ; 00561981
    LEA ESI,[ESP + 0xf0]                ; 00561985
    FXCH ST4                            ; 0056198c
    FSTP float ptr [ESP + 0xf0]         ; 0056198e
    FXCH ST2                            ; 00561995
    FSTP float ptr [ESP + 0xf4]         ; 00561997
    FSTP float ptr [ESP + 0xf8]         ; 0056199e
    MOVSD ES:EDI,ESI                    ; 005619a5
    MOVSD ES:EDI,ESI                    ; 005619a6
    MOVSD ES:EDI,ESI                    ; 005619a7
    FLD float ptr [ESP + 0xb0]          ; 005619a8
    LEA EDI,[ESP + 0x78]                ; 005619af
    LEA ESI,[ESP + 0x114]               ; 005619b3
    FXCH                                ; 005619ba
    FSUB float ptr [ESP + 0x48]         ; 005619bc
    FXCH ST2                            ; 005619c0
    FSUB float ptr [ESP + 0x4c]         ; 005619c2
    FXCH                                ; 005619c6
    FSUB float ptr [ESP + 0x50]         ; 005619c8
    FXCH ST2                            ; 005619cc
    FSTP float ptr [ESP + 0x114]        ; 005619ce
    FSTP float ptr [ESP + 0x118]        ; 005619d5
    FSTP float ptr [ESP + 0x11c]        ; 005619dc
    MOVSD ES:EDI,ESI                    ; 005619e3
    MOVSD ES:EDI,ESI                    ; 005619e4
    MOVSD ES:EDI,ESI                    ; 005619e5
    MOV ESI,dword ptr [0x00622c18]      ; 005619e6 | g_CDemonSetPtr
    PUSH ESI                            ; 005619ec | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005619ed
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005619f2
    PUSH 0x1                            ; 005619f5
    MOV EDI,dword ptr [0x00622c18]      ; 005619f7 | g_CDemonSetPtr
    PUSH EDI                            ; 005619fd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 005619fe
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00561a03
    PUSH EBX                            ; 00561a06
    MOV EAX,[0x00622c18]                ; 00561a07 | g_CDemonSetPtr
    PUSH EAX                            ; 00561a0c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00561a0d
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EDX,dword ptr [EBX + 0x304]     ; 00561a12
    ADD ESP,0x8                         ; 00561a18
    TEST EDX,EDX                        ; 00561a1b
    JNZ 0x00561b31                      ; 00561a1d
        ;   XREF to: 00561b31 (CONDITIONAL_JUMP)  ; LAB_00561b31
    XOR EDI,EDI                         ; 00561a23
        ;   Label: LAB_00561a23
    MOV dword ptr [ESP + 0x170],EDI     ; 00561a25
    LEA EAX,[ESP + 0xcc]                ; 00561a2c
        ;   Label: LAB_00561a2c
    PUSH EAX                            ; 00561a33
    LEA EAX,[ESP + 0x7c]                ; 00561a34
    PUSH EAX                            ; 00561a38
    MOV EAX,[0x00622c18]                ; 00561a39 | g_CDemonSetPtr
    PUSH EAX                            ; 00561a3e | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 00561a3f
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x188],EAX     ; 00561a44
    FLD float ptr [ESP + 0x188]         ; 00561a4b
    ADD ESP,0xc                         ; 00561a52
    FLDZ                                ; 00561a55
    FXCH                                ; 00561a57
    FST float ptr [ESP + 0x8]           ; 00561a59
    FSTP double ptr [ESP]               ; 00561a5d
    FCOMP double ptr [ESP]              ; 00561a60
    FNSTSW AX                           ; 00561a63
    SAHF                                ; 00561a65
    JBE 0x00561b46                      ; 00561a66
        ;   XREF to: 00561b46 (CONDITIONAL_JUMP)  ; LAB_00561b46
    MOV ESI,dword ptr [ESP + 0x150]     ; 00561a6c
        ;   Label: LAB_00561a6c
    INC ESI                             ; 00561a73
    MOV EDI,dword ptr [ESP + 0x15c]     ; 00561a74
    MOV dword ptr [ESP + 0x150],ESI     ; 00561a7b
    CMP ESI,EDI                         ; 00561a82
    JL 0x0056181b                       ; 00561a84
        ;   XREF to: 0056181b (CONDITIONAL_JUMP)  ; LAB_0056181b
    MOV EAX,[0x00622c18]                ; 00561a8a | g_CDemonSetPtr
        ;   Label: LAB_00561a8a
    PUSH EAX                            ; 00561a8f | g_CDemonSetInstance
    LEA EDI,[ESP + 0xe8]                ; 00561a90
    LEA ESI,[ESP + 0xac]                ; 00561a97
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00561a9e
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00561aa3
    LEA EAX,[EBX + 0x3c]                ; 00561aa6
    MOV EDX,dword ptr [0x0061c010]      ; 00561aa9 | DAT_0061c010
    PUSH EAX                            ; 00561aaf
    MOVSD ES:EDI,ESI                    ; 00561ab0
    MOVSD ES:EDI,ESI                    ; 00561ab1
    MOVSD ES:EDI,ESI                    ; 00561ab2
    LEA EAX,[ESP + 0xe8]                ; 00561ab3
    FLD float ptr [ESP + 0xec]          ; 00561aba
    PUSH EAX                            ; 00561ac1
    FADD float ptr [0x005f19cf]         ; 00561ac2 | DAT_005f19cf
    PUSH EDX                            ; 00561ac8
    FSTP float ptr [ESP + 0xf4]         ; 00561ac9
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70 ; 00561ad0
        ;   XREF to: 004b5a70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00561ad5
    LEA EAX,[ESP + 0xa8]                ; 00561ad8
    PUSH EAX                            ; 00561adf
    PUSH 0x5f19b7                       ; 00561ae0 | = "shotgun.wav"
    PUSH EBX                            ; 00561ae5
    MOV ECX,dword ptr [0x006236b8]      ; 00561ae6 | DAT_006236b8
    PUSH ECX                            ; 00561aec
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 00561aed
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    MOV EAX,0x1                         ; 00561af2
    ADD ESP,0x10                        ; 00561af7
    MOV dword ptr [EBX + 0x300],0x3f2a7efa ; 00561afa
    MOV ESP,EBP                         ; 00561b04
    POP EBP                             ; 00561b06
    POP EDI                             ; 00561b07
    POP ESI                             ; 00561b08
    POP EBX                             ; 00561b09
    RET                                 ; 00561b0a
    LEA EAX,[ESP + 0xa8]                ; 00561b0b
        ;   Label: LAB_00561b0b
    PUSH EAX                            ; 00561b12
    PUSH 0x5f19a4                       ; 00561b13 | = "shotgun-noammo.wav"
    PUSH EBX                            ; 00561b18
    MOV EDX,dword ptr [0x006236b8]      ; 00561b19 | DAT_006236b8
    PUSH EDX                            ; 00561b1f
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 00561b20
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00561b25
    XOR EAX,EAX                         ; 00561b28
    MOV ESP,EBP                         ; 00561b2a
    POP EBP                             ; 00561b2c
    POP EDI                             ; 00561b2d
    POP ESI                             ; 00561b2e
    POP EBX                             ; 00561b2f
    RET                                 ; 00561b30
    PUSH EDX                            ; 00561b31
        ;   Label: LAB_00561b31
    MOV ESI,dword ptr [0x00622c18]      ; 00561b32 | g_CDemonSetPtr
    PUSH ESI                            ; 00561b38 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00561b39
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00561b3e
    JMP 0x00561a23                      ; 00561b41
        ;   XREF to: 00561a23 (UNCONDITIONAL_JUMP)  ; LAB_00561a23
    FLD1                                ; 00561b46
        ;   Label: LAB_00561b46
    FCOMP double ptr [ESP]              ; 00561b48
    FNSTSW AX                           ; 00561b4b
    SAHF                                ; 00561b4d
    JC 0x00561a6c                       ; 00561b4e
        ;   XREF to: 00561a6c (CONDITIONAL_JUMP)  ; LAB_00561a6c
    MOV EDX,dword ptr [0x007c637c]      ; 00561b54 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 00561b5a | g_CDemonSetPtr
    PUSH EDX                            ; 00561b5f
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 00561b60 | g_CDemonSetInstance.collision_actor
    PUSH ECX                            ; 00561b66
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00561b67
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00561b6c
    MOV dword ptr [ESP + 0x178],EAX     ; 00561b6f
    TEST EAX,EAX                        ; 00561b76
    JZ 0x00561b97                       ; 00561b78
        ;   XREF to: 00561b97 (CONDITIONAL_JUMP)  ; LAB_00561b97
    PUSH EAX                            ; 00561b7a
    MOV ESI,dword ptr [EAX + 0x154]     ; 00561b7b
    CALL dword ptr [ESI + 0x10c]        ; 00561b81
    ADD ESP,0x4                         ; 00561b87
    TEST EAX,EAX                        ; 00561b8a
    JLE 0x00561b97                      ; 00561b8c
        ;   XREF to: 00561b97 (CONDITIONAL_JUMP)  ; LAB_00561b97
    XOR ESI,ESI                         ; 00561b8e
    MOV dword ptr [ESP + 0x178],ESI     ; 00561b90
    MOV EDI,dword ptr [0x01cd0dfc]      ; 00561b97 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00561b97
    MOV EAX,[0x00622c18]                ; 00561b9d | g_CDemonSetPtr
    PUSH EDI                            ; 00561ba2
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00561ba3 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00561ba9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00561baa
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ECX,dword ptr [0x02c8ae44]      ; 00561baf | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 00561bb5
    MOV EDI,EAX                         ; 00561bb8
    MOV EAX,[0x00622c18]                ; 00561bba | g_CDemonSetPtr
    PUSH ECX                            ; 00561bbf
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00561bc0 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00561bc6
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00561bc7
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 00561bcc
    MOV ESI,EAX                         ; 00561bcf
    MOV dword ptr [ESP + 0x160],EAX     ; 00561bd1
    MOV EAX,[0x007dc6d8]                ; 00561bd8 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 00561bdd
    MOV EAX,[0x00622c18]                ; 00561bde | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00561be3 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00561be9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00561bea
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x174],EAX     ; 00561bef
    ADD ESP,0x8                         ; 00561bf6
    MOV ECX,dword ptr [0x01cc4184]      ; 00561bf9 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 00561bff | g_CDemonSetPtr
    PUSH ECX                            ; 00561c04
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00561c05 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00561c0b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00561c0c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [ESP + 0x16c],EAX     ; 00561c11
    ADD ESP,0x8                         ; 00561c18
    MOV EAX,dword ptr [EBX + 0x154]     ; 00561c1b
    PUSH EBX                            ; 00561c21
    CALL dword ptr [EAX + 0xec]         ; 00561c22
    MOV dword ptr [ESP + 0x180],EAX     ; 00561c28
    FLD float ptr [ESP + 0x180]         ; 00561c2f
    ADD ESP,0x4                         ; 00561c36
    FLD1                                ; 00561c39
    FSUB float ptr [ESP + 0x8]          ; 00561c3b
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00561c3f
    FMULP                               ; 00561c46
    MOV dword ptr [ESP + 0x17c],EAX     ; 00561c48
    FILD dword ptr [ESP + 0x17c]        ; 00561c4f
    FDIVP                               ; 00561c56
    MOV ECX,dword ptr [ESP + 0x178]     ; 00561c58
    FSTP float ptr [ESP + 0x168]        ; 00561c5f
    TEST ECX,ECX                        ; 00561c66
    JNZ 0x00561cbd                      ; 00561c68
        ;   XREF to: 00561cbd (CONDITIONAL_JUMP)  ; LAB_00561cbd
    TEST EDI,EDI                        ; 00561c6a
    JNZ 0x00561ed8                      ; 00561c6c
        ;   XREF to: 00561ed8 (CONDITIONAL_JUMP)  ; LAB_00561ed8
    TEST ESI,ESI                        ; 00561c72
    JZ 0x00561eff                       ; 00561c74
        ;   XREF to: 00561eff (CONDITIONAL_JUMP)  ; LAB_00561eff
    PUSH ESI                            ; 00561c7a
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0 ; 00561c7b
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00561c80
    PUSH EBX                            ; 00561c83
    PUSH ESI                            ; 00561c84
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0 ; 00561c85
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00561c8a
    TEST EAX,EAX                        ; 00561c8d
    JZ 0x00561ca1                       ; 00561c8f
        ;   XREF to: 00561ca1 (CONDITIONAL_JUMP)  ; LAB_00561ca1
    PUSH dword ptr [ESP + 0x168]        ; 00561c91
    PUSH ESI                            ; 00561c98
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30 ; 00561c99
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00561c9e
    MOV EDX,dword ptr [ESP + 0x160]     ; 00561ca1
        ;   Label: LAB_00561ca1
    PUSH EDX                            ; 00561ca8
    MOV ECX,dword ptr [0x00622c18]      ; 00561ca9 | g_CDemonSetPtr
    PUSH ECX                            ; 00561caf | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00561cb0
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00561cb5
    JMP 0x00561f29                      ; 00561cb8
        ;   XREF to: 00561f29 (UNCONDITIONAL_JUMP)  ; LAB_00561f29
    PUSH ECX                            ; 00561cbd
        ;   Label: LAB_00561cbd
    MOV EAX,dword ptr [ECX + 0x154]     ; 00561cbe
    CALL dword ptr [EAX + 0xe0]         ; 00561cc4
    ADD ESP,0x4                         ; 00561cca
    TEST EAX,EAX                        ; 00561ccd
    JNZ 0x00561a6c                      ; 00561ccf
        ;   XREF to: 00561a6c (CONDITIONAL_JUMP)  ; LAB_00561a6c
    LEA EAX,[ESP + 0xc]                 ; 00561cd5
    PUSH EAX                            ; 00561cd9
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00561cda
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV ESI,dword ptr [0x00622c18]      ; 00561cdf | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00561ce5
    MOV EAX,dword ptr [ESI + 0x14d148]  ; 00561ce8 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0xc],EAX       ; 00561cee
    MOV EAX,dword ptr [ESP + 0x168]     ; 00561cf2
    MOV EDI,0x3ecccccd                  ; 00561cf9
    MOV dword ptr [ESP + 0x10],EAX      ; 00561cfe
    LEA EAX,[ESI + 0x14d11c]            ; 00561d02
    MOV dword ptr [ESP + 0x14],EDI      ; 00561d08
    LEA EDI,[ESP + 0xd8]                ; 00561d0c
    FLD float ptr [EAX]                 ; 00561d13 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 00561d15 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 00561d18 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 00561d1b
    FSUB float ptr [ESI + 0x14d110]     ; 00561d1d | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 00561d23
    FSUB float ptr [ESI + 0x14d114]     ; 00561d25 | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 00561d2b
    FSUB float ptr [ESI + 0x14d118]     ; 00561d2d | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 00561d33
    FSTP float ptr [ESP + 0x84]         ; 00561d35
    FXCH                                ; 00561d3c
    FSTP float ptr [ESP + 0x88]         ; 00561d3e
    LEA ESI,[ESP + 0x84]                ; 00561d45
    FSTP float ptr [ESP + 0x8c]         ; 00561d4c
    MOVSD ES:EDI,ESI                    ; 00561d53
    MOVSD ES:EDI,ESI                    ; 00561d54
    MOVSD ES:EDI,ESI                    ; 00561d55
    FLD float ptr [ESP + 0xdc]          ; 00561d56
    FMUL ST0                            ; 00561d5d
    FLD float ptr [ESP + 0xd8]          ; 00561d5f
    FMUL ST0                            ; 00561d66
    FADDP                               ; 00561d68
    FLD float ptr [ESP + 0xe0]          ; 00561d6a
    FMUL ST0                            ; 00561d71
    FADDP                               ; 00561d73
    FSQRT                               ; 00561d75
    FDIVR double ptr [0x005f19df]       ; 00561d77 | DAT_005f19df
    FLD float ptr [ESP + 0xd8]          ; 00561d7d
    FXCH                                ; 00561d84
    FSTP float ptr [ESP + 0x174]        ; 00561d86
    FMUL float ptr [ESP + 0x174]        ; 00561d8d
    FLD float ptr [ESP + 0xdc]          ; 00561d94
    FMUL float ptr [ESP + 0x174]        ; 00561d9b
    FLD float ptr [ESP + 0xe0]          ; 00561da2
    FMUL float ptr [ESP + 0x174]        ; 00561da9
    LEA EDI,[ESP + 0x54]                ; 00561db0
    LEA ESI,[ESP + 0xfc]                ; 00561db4
    FXCH ST2                            ; 00561dbb
    FSTP float ptr [ESP + 0xfc]         ; 00561dbd
    FSTP float ptr [ESP + 0x100]        ; 00561dc4
    FSTP float ptr [ESP + 0x104]        ; 00561dcb
    MOVSD ES:EDI,ESI                    ; 00561dd2
    MOVSD ES:EDI,ESI                    ; 00561dd3
    MOVSD ES:EDI,ESI                    ; 00561dd4
    LEA EAX,[ESP + 0x54]                ; 00561dd5
    LEA ESI,[ESP + 0x18]                ; 00561dd9
    CMP ESI,EAX                         ; 00561ddd
    JZ 0x00561df9                       ; 00561ddf
        ;   XREF to: 00561df9 (CONDITIONAL_JUMP)  ; LAB_00561df9
    MOV EAX,dword ptr [ESP + 0x54]      ; 00561de1
    MOV dword ptr [ESP + 0x18],EAX      ; 00561de5
    MOV EAX,dword ptr [ESP + 0x58]      ; 00561de9
    MOV dword ptr [ESP + 0x1c],EAX      ; 00561ded
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00561df1
    MOV dword ptr [ESP + 0x20],EAX      ; 00561df5
    MOV EAX,[0x00622c18]                ; 00561df9 | g_CDemonSetPtr
        ;   Label: LAB_00561df9
    ADD EAX,0x14d138                    ; 00561dfe
    PUSH EAX                            ; 00561e03 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00561e04
    PUSH EAX                            ; 00561e0b
    LEA ESI,[ESP + 0xc8]                ; 00561e0c
    LEA EDI,[ESP + 0xbc]                ; 00561e13
    CALL core_actor.cpp_FUN_00408bb0    ; 00561e1a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xc8]                ; 00561e1f
    ADD ESP,0x8                         ; 00561e26
    MOVSD ES:EDI,ESI                    ; 00561e29
    MOVSD ES:EDI,ESI                    ; 00561e2a
    MOVSD ES:EDI,ESI                    ; 00561e2b
    LEA EAX,[ESP + 0xb4]                ; 00561e2c
    LEA ESI,[ESP + 0x28]                ; 00561e33
    CMP ESI,EAX                         ; 00561e37
    JZ 0x00561e5c                       ; 00561e39
        ;   XREF to: 00561e5c (CONDITIONAL_JUMP)  ; LAB_00561e5c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00561e3b
    MOV dword ptr [ESP + 0x28],EAX      ; 00561e42
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00561e46
    MOV dword ptr [ESP + 0x2c],EAX      ; 00561e4d
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00561e51
    MOV dword ptr [ESP + 0x30],EAX      ; 00561e58
    MOV EDX,0x65                        ; 00561e5c
        ;   Label: LAB_00561e5c
    MOV EAX,dword ptr [EBX + 0x56c]     ; 00561e61
    MOV ECX,0x3e19999a                  ; 00561e67
    MOV dword ptr [ESP + 0x34],EAX      ; 00561e6c
    MOV dword ptr [ESP + 0x3c],EDX      ; 00561e70
    MOV dword ptr [ESP + 0x38],ECX      ; 00561e74
    MOV dword ptr [ESP + 0x40],EBX      ; 00561e78
    PUSH EBX                            ; 00561e7c
    MOV EAX,dword ptr [EBX + 0x154]     ; 00561e7d
    CALL dword ptr [EAX + 0x94]         ; 00561e83
    ADD ESP,0x4                         ; 00561e89
    MOV dword ptr [ESP + 0x44],EAX      ; 00561e8c
    LEA EAX,[ESP + 0xc]                 ; 00561e90
    MOV ESI,dword ptr [ESP + 0x178]     ; 00561e94
    PUSH EAX                            ; 00561e9b
    MOV EDI,dword ptr [ESP + 0x17c]     ; 00561e9c
    MOV ESI,dword ptr [ESI + 0x154]     ; 00561ea3
    PUSH EDI                            ; 00561ea9
    CALL dword ptr [ESI + 0x108]        ; 00561eaa
    MOV EAX,dword ptr [EBX + 0x2e4]     ; 00561eb0
    ADD ESP,0x8                         ; 00561eb6
    TEST EAX,EAX                        ; 00561eb9
    JZ 0x00561a6c                       ; 00561ebb
        ;   XREF to: 00561a6c (CONDITIONAL_JUMP)  ; LAB_00561a6c
    MOV EAX,[0x00622c18]                ; 00561ec1 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00561ec6 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00561ecc
    PUSH EAX                            ; 00561ecd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00561ece
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00561ed3
    JMP 0x00561f29                      ; 00561ed6
        ;   XREF to: 00561f29 (UNCONDITIONAL_JUMP)  ; LAB_00561f29
    PUSH EDI                            ; 00561ed8
        ;   Label: LAB_00561ed8
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 00561ed9
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 00561ede
    TEST EAX,EAX                        ; 00561ee1
    JZ 0x00561a6c                       ; 00561ee3
        ;   XREF to: 00561a6c (CONDITIONAL_JUMP)  ; LAB_00561a6c
    MOV EAX,[0x00622c18]                ; 00561ee9 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 00561eee
    PUSH EAX                            ; 00561ef3 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 00561ef4
    CALL core_glass.cpp_FUN_004e34b0    ; 00561ef5
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 00561efa
    JMP 0x00561f29                      ; 00561efd
        ;   XREF to: 00561f29 (UNCONDITIONAL_JUMP)  ; LAB_00561f29
    MOV ESI,dword ptr [ESP + 0x16c]     ; 00561eff
        ;   Label: LAB_00561eff
    TEST ESI,ESI                        ; 00561f06
    JNZ 0x00561f20                      ; 00561f08
        ;   XREF to: 00561f20 (CONDITIONAL_JUMP)  ; LAB_00561f20
    MOV EDI,dword ptr [ESP + 0x164]     ; 00561f0a
    TEST EDI,EDI                        ; 00561f11
    JZ 0x00561f46                       ; 00561f13
        ;   XREF to: 00561f46 (CONDITIONAL_JUMP)  ; LAB_00561f46
    PUSH EDI                            ; 00561f15
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 00561f16
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 00561f1b
    JMP 0x00561f29                      ; 00561f1e
        ;   XREF to: 00561f29 (UNCONDITIONAL_JUMP)  ; LAB_00561f29
    PUSH ESI                            ; 00561f20
        ;   Label: LAB_00561f20
    CALL core_crate.cpp_FUN_00449600    ; 00561f21
        ;   XREF to: 00449600 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_00449600(CCrate * this_ptr)
    ADD ESP,0x4                         ; 00561f26
    MOV ECX,dword ptr [ESP + 0x170]     ; 00561f29
        ;   Label: LAB_00561f29
    INC ECX                             ; 00561f30
    MOV dword ptr [ESP + 0x170],ECX     ; 00561f31
    CMP ECX,0x4                         ; 00561f38
    JL 0x00561a2c                       ; 00561f3b
        ;   XREF to: 00561a2c (CONDITIONAL_JUMP)  ; LAB_00561a2c
    JMP 0x00561a6c                      ; 00561f41
        ;   XREF to: 00561a6c (UNCONDITIONAL_JUMP)  ; LAB_00561a6c
    MOV EAX,[0x00622c18]                ; 00561f46 | g_CDemonSetPtr
        ;   Label: LAB_00561f46
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00561f4b | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00561f51
    MOV ECX,dword ptr [EAX + 0x14d134]  ; 00561f52 | g_CDemonSetInstance.ground_type
    PUSH ECX                            ; 00561f58
    LEA ESI,[EAX + 0x14d128]            ; 00561f59
    PUSH ESI                            ; 00561f5f | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 00561f60
    PUSH EAX                            ; 00561f65 | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [0x0061c010]      ; 00561f66 | DAT_0061c010
    PUSH ESI                            ; 00561f6c
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0 ; 00561f6d
        ;   XREF to: 004b56a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 00561f72
    JMP 0x00561a6c                      ; 00561f75
        ;   XREF to: 00561a6c (UNCONDITIONAL_JUMP)  ; LAB_00561a6c

