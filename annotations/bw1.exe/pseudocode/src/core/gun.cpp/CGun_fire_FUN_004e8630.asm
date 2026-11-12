; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gun_cpp_CGun_fire_FUN_004e8630(CGun *this_ptr)
;
; Parameters:
; CGun *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_005e43b0
;   TerminatedCString s_s_45_wav_005e43bd
;   TerminatedCString s_gatbullet_kfm_005e43c4
;   undefined4 DAT_005e43d3
;   undefined4 DAT_005e43db
;   undefined4 DAT_005e43e3
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.ray_origin.x
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_crate.cpp_FUN_00449600
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dmodel.cpp_loadModel_FUN_00468780
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0
;   core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70
;   core_fire.cpp_CFireEffect_createShell_FUN_004b7270
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180
;   core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8630
        ;   Label: core_gun.cpp_CGun_fire_FUN_004e8630
    PUSH ESI                            ; 004e8631
    PUSH EDI                            ; 004e8632
    PUSH EBP                            ; 004e8633
    MOV EBP,ESP                         ; 004e8634
    SUB ESP,0x1c0                       ; 004e8636
    AND ESP,0xfffffff8                  ; 004e863c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e863f
    PUSH EBX                            ; 004e8642
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e8643
    LEA ESI,[ESP + 0x7c]                ; 004e8649
    LEA EDI,[ESP + 0xc4]                ; 004e864d
    CALL dword ptr [EAX + 0xe0]         ; 004e8654
    ADD ESP,0x4                         ; 004e865a
    LEA EAX,[ESP + 0xc0]                ; 004e865d
    LEA ESI,[ESP + 0x78]                ; 004e8664
    PUSH EAX                            ; 004e8668
    MOVSD ES:EDI,ESI                    ; 004e8669
    MOVSD ES:EDI,ESI                    ; 004e866a
    MOVSD ES:EDI,ESI                    ; 004e866b
    PUSH EBX                            ; 004e866c
    LEA ESI,[ESP + 0x14c]               ; 004e866d
    CALL core_actor.cpp_FUN_00408b40    ; 004e8674
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004e8679
    LEA EDI,[ESP + 0xb4]                ; 004e867c
    LEA ESI,[ESP + 0x144]               ; 004e8683
    PUSH EBX                            ; 004e868a
    MOVSD ES:EDI,ESI                    ; 004e868b
    MOVSD ES:EDI,ESI                    ; 004e868c
    MOVSD ES:EDI,ESI                    ; 004e868d
    CALL core_weapon.cpp_CWeapon_fire_FUN_005adde0 ; 004e868e
        ;   XREF to: 005adde0 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_005adde0(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004e8693
    TEST EAX,EAX                        ; 004e8696
    JZ 0x004e8a44                       ; 004e8698
        ;   XREF to: 004e8a44 (CONDITIONAL_JUMP)  ; LAB_004e8a44
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 004e869e
    MOV dword ptr [ESP + 0xd4],EAX      ; 004e86a4
    LEA EAX,[ESP + 0xcc]                ; 004e86ab
    LEA ESI,[ESP + 0x12c]               ; 004e86b2
    PUSH EAX                            ; 004e86b9
    LEA EDI,[ESP + 0x13c]               ; 004e86ba
    XOR ECX,ECX                         ; 004e86c1
    PUSH EBX                            ; 004e86c3
    MOV dword ptr [ESP + 0xd4],ECX      ; 004e86c4
    MOV dword ptr [ESP + 0xd8],ECX      ; 004e86cb
    CALL core_actor.cpp_FUN_00408ac0    ; 004e86d2
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 004e86d7
    LEA ESI,[ESP + 0x12c]               ; 004e86da
    FLD float ptr [ESP + 0xb4]          ; 004e86e1
    FLD float ptr [ESP + 0xb8]          ; 004e86e8
    MOVSD ES:EDI,ESI                    ; 004e86ef
    MOVSD ES:EDI,ESI                    ; 004e86f0
    MOVSD ES:EDI,ESI                    ; 004e86f1
    FLD float ptr [ESP + 0xbc]          ; 004e86f2
    LEA EDI,[ESP + 0xfc]                ; 004e86f9
    LEA ESI,[ESP + 0x6c]                ; 004e8700
    FXCH ST2                            ; 004e8704
    FADD float ptr [ESP + 0x138]        ; 004e8706
    FXCH                                ; 004e870d
    FADD float ptr [ESP + 0x13c]        ; 004e870f
    FXCH ST2                            ; 004e8716
    FADD float ptr [ESP + 0x140]        ; 004e8718
    FXCH                                ; 004e871f
    FSTP float ptr [ESP + 0x6c]         ; 004e8721
    FXCH                                ; 004e8725
    FSTP float ptr [ESP + 0x70]         ; 004e8727
    FSTP float ptr [ESP + 0x74]         ; 004e872b
    MOVSD ES:EDI,ESI                    ; 004e872f
    MOVSD ES:EDI,ESI                    ; 004e8730
    MOVSD ES:EDI,ESI                    ; 004e8731
    FLD float ptr [EBX + 0x2e8]         ; 004e8732
    FDIVR double ptr [0x005e43d3]       ; 004e8738 | DAT_005e43d3
    FLD float ptr [ESP + 0x138]         ; 004e873e
    FXCH                                ; 004e8745
    FSTP float ptr [ESP + 0x1a4]        ; 004e8747
    FMUL float ptr [ESP + 0x1a4]        ; 004e874e
    FLD float ptr [ESP + 0x13c]         ; 004e8755
    FMUL float ptr [ESP + 0x1a4]        ; 004e875c
    FLD float ptr [ESP + 0x140]         ; 004e8763
    FMUL float ptr [ESP + 0x1a4]        ; 004e876a
    FLD float ptr [ESP + 0xb4]          ; 004e8771
    FLD float ptr [ESP + 0xb8]          ; 004e8778
    LEA EDI,[ESP + 0x180]               ; 004e877f
    LEA ESI,[ESP + 0xd8]                ; 004e8786
    FXCH ST4                            ; 004e878d
    FSTP float ptr [ESP + 0xd8]         ; 004e878f
    FXCH ST2                            ; 004e8796
    FSTP float ptr [ESP + 0xdc]         ; 004e8798
    FSTP float ptr [ESP + 0xe0]         ; 004e879f
    MOVSD ES:EDI,ESI                    ; 004e87a6
    MOVSD ES:EDI,ESI                    ; 004e87a7
    MOVSD ES:EDI,ESI                    ; 004e87a8
    FLD float ptr [ESP + 0xbc]          ; 004e87a9
    LEA EDI,[ESP + 0x108]               ; 004e87b0
    LEA ESI,[ESP + 0x150]               ; 004e87b7
    FXCH                                ; 004e87be
    FSUB float ptr [ESP + 0x180]        ; 004e87c0
    FXCH ST2                            ; 004e87c7
    FSUB float ptr [ESP + 0x184]        ; 004e87c9
    FXCH                                ; 004e87d0
    FSUB float ptr [ESP + 0x188]        ; 004e87d2
    FXCH ST2                            ; 004e87d9
    FSTP float ptr [ESP + 0x150]        ; 004e87db
    FSTP float ptr [ESP + 0x154]        ; 004e87e2
    FSTP float ptr [ESP + 0x158]        ; 004e87e9
    MOVSD ES:EDI,ESI                    ; 004e87f0
    MOVSD ES:EDI,ESI                    ; 004e87f1
    MOVSD ES:EDI,ESI                    ; 004e87f2
    MOV EDI,dword ptr [0x00622c18]      ; 004e87f3 | g_CDemonSetPtr
    PUSH EDI                            ; 004e87f9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004e87fa
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e87ff
    PUSH 0x1                            ; 004e8802
    MOV EAX,[0x00622c18]                ; 004e8804 | g_CDemonSetPtr
    PUSH EAX                            ; 004e8809 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 004e880a
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004e880f
    PUSH EBX                            ; 004e8812
    MOV EDX,dword ptr [0x00622c18]      ; 004e8813 | g_CDemonSetPtr
    PUSH EDX                            ; 004e8819 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004e881a
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x304]     ; 004e881f
    ADD ESP,0x8                         ; 004e8825
    TEST ECX,ECX                        ; 004e8828
    JNZ 0x004e8a6a                      ; 004e882a
        ;   XREF to: 004e8a6a (CONDITIONAL_JUMP)  ; LAB_004e8a6a
    XOR EAX,EAX                         ; 004e8830
        ;   Label: LAB_004e8830
    MOV dword ptr [ESP + 0x1b0],EAX     ; 004e8832
    LEA EAX,[ESP + 0xfc]                ; 004e8839
        ;   Label: LAB_004e8839
    PUSH EAX                            ; 004e8840
    LEA EAX,[ESP + 0x10c]               ; 004e8841
    PUSH EAX                            ; 004e8848
    MOV EDX,dword ptr [0x00622c18]      ; 004e8849 | g_CDemonSetPtr
    PUSH EDX                            ; 004e884f | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 004e8850
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x1c8],EAX     ; 004e8855
    FLD float ptr [ESP + 0x1c8]         ; 004e885c
    ADD ESP,0xc                         ; 004e8863
    FLDZ                                ; 004e8866
    FXCH                                ; 004e8868
    FSTP double ptr [ESP]               ; 004e886a
    FCOMP double ptr [ESP]              ; 004e886d
    FNSTSW AX                           ; 004e8870
    SAHF                                ; 004e8872
    JBE 0x004e8a7f                      ; 004e8873
        ;   XREF to: 004e8a7f (CONDITIONAL_JUMP)  ; LAB_004e8a7f
    MOV EDI,dword ptr [0x00622c18]      ; 004e8879 | g_CDemonSetPtr
        ;   Label: LAB_004e8879
    PUSH EDI                            ; 004e887f | g_CDemonSetInstance
    LEA ESI,[ESP + 0xb8]                ; 004e8880
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004e8887
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e888c
    LEA EAX,[EBX + 0x3c]                ; 004e888f
    LEA EDI,[ESP + 0x114]               ; 004e8892
    PUSH EAX                            ; 004e8899
    MOVSD ES:EDI,ESI                    ; 004e889a
    MOVSD ES:EDI,ESI                    ; 004e889b
    MOVSD ES:EDI,ESI                    ; 004e889c
    LEA EAX,[ESP + 0x118]               ; 004e889d
    FLD float ptr [ESP + 0x11c]         ; 004e88a4
    PUSH EAX                            ; 004e88ab
    MOV EAX,[0x0061c010]                ; 004e88ac | DAT_0061c010
    FADD float ptr [0x005e43db]         ; 004e88b1 | DAT_005e43db
    PUSH EAX                            ; 004e88b7
    FSTP float ptr [ESP + 0x124]        ; 004e88b8
    CALL core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70 ; 004e88bf
        ;   XREF to: 004b5a70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createMuzzleFlash_FUN_004b5a70(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 004e88c4
    LEA EAX,[ESP + 0xb4]                ; 004e88c7
    PUSH EAX                            ; 004e88ce
    PUSH 0x5e43bd                       ; 004e88cf | = "45.wav"
    PUSH EBX                            ; 004e88d4
    MOV EDX,dword ptr [0x006236b8]      ; 004e88d5 | DAT_006236b8
    PUSH EDX                            ; 004e88db
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 004e88dc
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004e88e1
    MOV EDI,0xc0800000                  ; 004e88e4
    MOV ECX,0x40400000                  ; 004e88e9
    PUSH 0x3ec90fdb                     ; 004e88ee
    MOV dword ptr [EBX + 0x300],0x3f2a7efa ; 004e88f3
    PUSH 0xbec90fdb                     ; 004e88fd
    MOV dword ptr [ESP + 0x194],ECX     ; 004e8902
    MOV dword ptr [ESP + 0x198],ECX     ; 004e8909
    MOV dword ptr [ESP + 0x19c],EDI     ; 004e8910
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004e8917
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004e891c
    FLD float ptr [ESP + 0x1c4]         ; 004e8923
    ADD ESP,0x8                         ; 004e892a
    PUSH 0x3ec90fdb                     ; 004e892d
    PUSH 0xbec90fdb                     ; 004e8932
    FSTP float ptr [ESP + 0x128]        ; 004e8937
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004e893e
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 004e8943
    FLD float ptr [ESP + 0x1c4]         ; 004e894a
    XOR EAX,EAX                         ; 004e8951
    ADD ESP,0x8                         ; 004e8953
    MOV dword ptr [ESP + 0x128],EAX     ; 004e8956
    LEA EAX,[ESP + 0x120]               ; 004e895d
    PUSH EAX                            ; 004e8964
    LEA EAX,[ESP + 0x48]                ; 004e8965
    PUSH EAX                            ; 004e8969
    FSTP float ptr [ESP + 0x12c]        ; 004e896a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 004e8971
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004e8976
    LEA EAX,[ESP + 0x18c]               ; 004e8979
    PUSH EAX                            ; 004e8980
    LEA EAX,[ESP + 0x48]                ; 004e8981
    PUSH EAX                            ; 004e8985
    LEA ESI,[ESP + 0x17c]               ; 004e8986
    LEA EDI,[ESP + 0x1a0]               ; 004e898d
    CALL core_dirmat.cpp_FUN_0045f690   ; 004e8994
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 004e8999
    LEA EAX,[ESP + 0x198]               ; 004e899c
    LEA ESI,[ESP + 0x174]               ; 004e89a3
    PUSH EAX                            ; 004e89aa
    MOVSD ES:EDI,ESI                    ; 004e89ab
    MOVSD ES:EDI,ESI                    ; 004e89ac
    MOVSD ES:EDI,ESI                    ; 004e89ad
    PUSH EBX                            ; 004e89ae
    LEA ESI,[ESP + 0x98]                ; 004e89af
    LEA EDI,[ESP + 0xa4]                ; 004e89b6
    CALL core_actor.cpp_FUN_00408ac0    ; 004e89bd
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x98]                ; 004e89c2
    ADD ESP,0x8                         ; 004e89c9
    MOVSD ES:EDI,ESI                    ; 004e89cc
    MOVSD ES:EDI,ESI                    ; 004e89cd
    MOVSD ES:EDI,ESI                    ; 004e89ce
    LEA EAX,[ESP + 0x9c]                ; 004e89cf
    LEA ESI,[ESP + 0x18c]               ; 004e89d6
    CMP ESI,EAX                         ; 004e89dd
    JZ 0x004e8a0b                       ; 004e89df
        ;   XREF to: 004e8a0b (CONDITIONAL_JUMP)  ; LAB_004e8a0b
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004e89e1
    MOV dword ptr [ESP + 0x18c],EAX     ; 004e89e8
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004e89ef
    MOV dword ptr [ESP + 0x190],EAX     ; 004e89f6
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004e89fd
    MOV dword ptr [ESP + 0x194],EAX     ; 004e8a04
    PUSH 0x5e43c4                       ; 004e8a0b | = "gatbullet.kfm"
        ;   Label: LAB_004e8a0b
    CALL core_dmodel.cpp_loadModel_FUN_00468780 ; 004e8a10
        ;   XREF to: 00468780 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_00468780(char * filename)
    ADD ESP,0x4                         ; 004e8a15
    PUSH EAX                            ; 004e8a18
    LEA EAX,[ESP + 0x190]               ; 004e8a19
    PUSH EAX                            ; 004e8a20
    LEA EAX,[EBX + 0x30]                ; 004e8a21
    PUSH EAX                            ; 004e8a24
    ADD EBX,0x20                        ; 004e8a25
    PUSH EBX                            ; 004e8a28
    MOV EDX,dword ptr [0x0061c010]      ; 004e8a29 | DAT_0061c010
    PUSH EDX                            ; 004e8a2f
    CALL core_fire.cpp_CFireEffect_createShell_FUN_004b7270 ; 004e8a30
        ;   XREF to: 004b7270 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_004b7270(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    MOV EAX,0x1                         ; 004e8a35
    ADD ESP,0x14                        ; 004e8a3a
    MOV ESP,EBP                         ; 004e8a3d
    POP EBP                             ; 004e8a3f
    POP EDI                             ; 004e8a40
    POP ESI                             ; 004e8a41
    POP EBX                             ; 004e8a42
    RET                                 ; 004e8a43
    LEA EAX,[ESP + 0xb4]                ; 004e8a44
        ;   Label: LAB_004e8a44
    PUSH EAX                            ; 004e8a4b
    PUSH 0x5e43b0                       ; 004e8a4c | = "45-dry-!.wav"
    PUSH EBX                            ; 004e8a51
    MOV EDX,dword ptr [0x006236b8]      ; 004e8a52 | DAT_006236b8
    PUSH EDX                            ; 004e8a58
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 004e8a59
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 004e8a5e
    XOR EAX,EAX                         ; 004e8a61
    MOV ESP,EBP                         ; 004e8a63
    POP EBP                             ; 004e8a65
    POP EDI                             ; 004e8a66
    POP ESI                             ; 004e8a67
    POP EBX                             ; 004e8a68
    RET                                 ; 004e8a69
    PUSH ECX                            ; 004e8a6a
        ;   Label: LAB_004e8a6a
    MOV EDI,dword ptr [0x00622c18]      ; 004e8a6b | g_CDemonSetPtr
    PUSH EDI                            ; 004e8a71 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004e8a72
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e8a77
    JMP 0x004e8830                      ; 004e8a7a
        ;   XREF to: 004e8830 (UNCONDITIONAL_JUMP)  ; LAB_004e8830
    FLD1                                ; 004e8a7f
        ;   Label: LAB_004e8a7f
    FCOMP double ptr [ESP]              ; 004e8a81
    FNSTSW AX                           ; 004e8a84
    SAHF                                ; 004e8a86
    JC 0x004e8879                       ; 004e8a87
        ;   XREF to: 004e8879 (CONDITIONAL_JUMP)  ; LAB_004e8879
    MOV ECX,dword ptr [0x007c637c]      ; 004e8a8d | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 004e8a93 | g_CDemonSetPtr
    PUSH ECX                            ; 004e8a98
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004e8a99 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004e8a9f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004e8aa0
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e8aa5
    MOV dword ptr [ESP + 0x1b8],EAX     ; 004e8aa8
    TEST EAX,EAX                        ; 004e8aaf
    JZ 0x004e8ad0                       ; 004e8ab1
        ;   XREF to: 004e8ad0 (CONDITIONAL_JUMP)  ; LAB_004e8ad0
    PUSH EAX                            ; 004e8ab3
    MOV ESI,dword ptr [EAX + 0x154]     ; 004e8ab4
    CALL dword ptr [ESI + 0x10c]        ; 004e8aba
    ADD ESP,0x4                         ; 004e8ac0
    TEST EAX,EAX                        ; 004e8ac3
    JLE 0x004e8ad0                      ; 004e8ac5
        ;   XREF to: 004e8ad0 (CONDITIONAL_JUMP)  ; LAB_004e8ad0
    XOR EDI,EDI                         ; 004e8ac7
    MOV dword ptr [ESP + 0x1b8],EDI     ; 004e8ac9
    MOV EAX,[0x01cd0dfc]                ; 004e8ad0 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_004e8ad0
    PUSH EAX                            ; 004e8ad5
    MOV EAX,[0x00622c18]                ; 004e8ad6 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004e8adb | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004e8ae1
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004e8ae2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x02c8ae44]      ; 004e8ae7 | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 004e8aed
    MOV EDI,EAX                         ; 004e8af0
    MOV EAX,[0x00622c18]                ; 004e8af2 | g_CDemonSetPtr
    PUSH ECX                            ; 004e8af7
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004e8af8 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004e8afe
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004e8aff
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e8b04
    MOV ESI,EAX                         ; 004e8b07
    MOV dword ptr [ESP + 0x1a8],EAX     ; 004e8b09
    MOV EAX,[0x007dc6d8]                ; 004e8b10 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 004e8b15
    MOV EAX,[0x00622c18]                ; 004e8b16 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004e8b1b | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004e8b21
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004e8b22
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x1b4],EAX     ; 004e8b27
    ADD ESP,0x8                         ; 004e8b2e
    MOV ECX,dword ptr [0x01cc4184]      ; 004e8b31 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x00622c18]                ; 004e8b37 | g_CDemonSetPtr
    PUSH ECX                            ; 004e8b3c
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004e8b3d | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 004e8b43
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004e8b44
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e8b49
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 004e8b4c
    TEST ECX,ECX                        ; 004e8b53
    JNZ 0x004e8b8c                      ; 004e8b55
        ;   XREF to: 004e8b8c (CONDITIONAL_JUMP)  ; LAB_004e8b8c
    TEST EDI,EDI                        ; 004e8b57
    JNZ 0x004e8e04                      ; 004e8b59
        ;   XREF to: 004e8e04 (CONDITIONAL_JUMP)  ; LAB_004e8e04
    TEST ESI,ESI                        ; 004e8b5f
    JNZ 0x004e8e2b                      ; 004e8b61
        ;   XREF to: 004e8e2b (CONDITIONAL_JUMP)  ; LAB_004e8e2b
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 004e8b67
    TEST ESI,ESI                        ; 004e8b6e
    JNZ 0x004e8e87                      ; 004e8b70
        ;   XREF to: 004e8e87 (CONDITIONAL_JUMP)  ; LAB_004e8e87
    TEST EAX,EAX                        ; 004e8b76
    JZ 0x004e8ead                       ; 004e8b78
        ;   XREF to: 004e8ead (CONDITIONAL_JUMP)  ; LAB_004e8ead
    PUSH EAX                            ; 004e8b7e
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180 ; 004e8b7f
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004b9180(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004e8b84
    JMP 0x004e8e90                      ; 004e8b87
        ;   XREF to: 004e8e90 (UNCONDITIONAL_JUMP)  ; LAB_004e8e90
    PUSH ECX                            ; 004e8b8c
        ;   Label: LAB_004e8b8c
    MOV EAX,dword ptr [ECX + 0x154]     ; 004e8b8d
    CALL dword ptr [EAX + 0xe0]         ; 004e8b93
    ADD ESP,0x4                         ; 004e8b99
    TEST EAX,EAX                        ; 004e8b9c
    JZ 0x004e8bd3                       ; 004e8b9e
        ;   XREF to: 004e8bd3 (CONDITIONAL_JUMP)  ; LAB_004e8bd3
    CMP dword ptr [ESP + 0x1b0],0x0     ; 004e8ba0
    JNZ 0x004e8879                      ; 004e8ba8
        ;   XREF to: 004e8879 (CONDITIONAL_JUMP)  ; LAB_004e8879
    MOV ESI,dword ptr [EBX + 0x568]     ; 004e8bae
    MOV ECX,dword ptr [0x00622c18]      ; 004e8bb4 | g_CDemonSetPtr
    INC ESI                             ; 004e8bba
    PUSH ECX                            ; 004e8bbb | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x568],ESI     ; 004e8bbc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004e8bc2
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004e8bc7
    XOR EAX,EAX                         ; 004e8bca
    MOV ESP,EBP                         ; 004e8bcc
    POP EBP                             ; 004e8bce
    POP EDI                             ; 004e8bcf
    POP ESI                             ; 004e8bd0
    POP EBX                             ; 004e8bd1
    RET                                 ; 004e8bd2
    LEA EAX,[ESP + 0x8]                 ; 004e8bd3
        ;   Label: LAB_004e8bd3
    PUSH EAX                            ; 004e8bd7
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004e8bd8
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,[0x00622c18]                ; 004e8bdd | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004e8be2
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 004e8be5 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 004e8beb
    PUSH EBX                            ; 004e8bef
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e8bf0
    LEA EDI,[ESP + 0xe8]                ; 004e8bf6
    CALL dword ptr [EAX + 0xec]         ; 004e8bfd
    MOV ECX,0x3ecccccd                  ; 004e8c03
    MOV dword ptr [ESP + 0x1c0],EAX     ; 004e8c08
    MOV ESI,dword ptr [0x00622c18]      ; 004e8c0f | g_CDemonSetPtr
    FLD float ptr [ESP + 0x1c0]         ; 004e8c15
    ADD ESP,0x4                         ; 004e8c1c
    LEA EAX,[ESI + 0x14d11c]            ; 004e8c1f
    MOV dword ptr [ESP + 0x10],ECX      ; 004e8c25
    FSTP float ptr [ESP + 0xc]          ; 004e8c29
    FLD float ptr [EAX]                 ; 004e8c2d | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 004e8c2f | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 004e8c32 | g_CDemonSetInstance.ray_target.z
    FXCH ST2                            ; 004e8c35
    FSUB float ptr [ESI + 0x14d110]     ; 004e8c37 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 004e8c3d
    FSUB float ptr [ESI + 0x14d114]     ; 004e8c3f | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 004e8c45
    FSUB float ptr [ESI + 0x14d118]     ; 004e8c47 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 004e8c4d
    FSTP float ptr [ESP + 0x84]         ; 004e8c4f
    FXCH                                ; 004e8c56
    FSTP float ptr [ESP + 0x88]         ; 004e8c58
    LEA ESI,[ESP + 0x84]                ; 004e8c5f
    FSTP float ptr [ESP + 0x8c]         ; 004e8c66
    MOVSD ES:EDI,ESI                    ; 004e8c6d
    MOVSD ES:EDI,ESI                    ; 004e8c6e
    MOVSD ES:EDI,ESI                    ; 004e8c6f
    FLD float ptr [ESP + 0xe8]          ; 004e8c70
    FMUL ST0                            ; 004e8c77
    FLD float ptr [ESP + 0xe4]          ; 004e8c79
    FMUL ST0                            ; 004e8c80
    FADDP                               ; 004e8c82
    FLD float ptr [ESP + 0xec]          ; 004e8c84
    FMUL ST0                            ; 004e8c8b
    FADDP                               ; 004e8c8d
    FSQRT                               ; 004e8c8f
    FDIVR double ptr [0x005e43e3]       ; 004e8c91 | DAT_005e43e3
    FLD float ptr [ESP + 0xe4]          ; 004e8c97
    FXCH                                ; 004e8c9e
    FSTP float ptr [ESP + 0x1b4]        ; 004e8ca0
    FMUL float ptr [ESP + 0x1b4]        ; 004e8ca7
    FLD float ptr [ESP + 0xe8]          ; 004e8cae
    FMUL float ptr [ESP + 0x1b4]        ; 004e8cb5
    FLD float ptr [ESP + 0xec]          ; 004e8cbc
    FMUL float ptr [ESP + 0x1b4]        ; 004e8cc3
    LEA EDI,[ESP + 0x168]               ; 004e8cca
    LEA ESI,[ESP + 0xa8]                ; 004e8cd1
    FXCH ST2                            ; 004e8cd8
    FSTP float ptr [ESP + 0xa8]         ; 004e8cda
    FSTP float ptr [ESP + 0xac]         ; 004e8ce1
    FSTP float ptr [ESP + 0xb0]         ; 004e8ce8
    MOVSD ES:EDI,ESI                    ; 004e8cef
    MOVSD ES:EDI,ESI                    ; 004e8cf0
    MOVSD ES:EDI,ESI                    ; 004e8cf1
    LEA EAX,[ESP + 0x14]                ; 004e8cf2
    LEA ESI,[ESP + 0x168]               ; 004e8cf6
    CMP EAX,ESI                         ; 004e8cfd
    JZ 0x004e8d22                       ; 004e8cff
        ;   XREF to: 004e8d22 (CONDITIONAL_JUMP)  ; LAB_004e8d22
    MOV EAX,dword ptr [ESP + 0x168]     ; 004e8d01
    MOV dword ptr [ESP + 0x14],EAX      ; 004e8d08
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004e8d0c
    MOV dword ptr [ESP + 0x18],EAX      ; 004e8d13
    MOV EAX,dword ptr [ESP + 0x170]     ; 004e8d17
    MOV dword ptr [ESP + 0x1c],EAX      ; 004e8d1e
    MOV EAX,[0x00622c18]                ; 004e8d22 | g_CDemonSetPtr
        ;   Label: LAB_004e8d22
    ADD EAX,0x14d138                    ; 004e8d27
    PUSH EAX                            ; 004e8d2c | g_CDemonSetInstance.collision_impact_position.x
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 004e8d2d
    PUSH ESI                            ; 004e8d34
    LEA ESI,[ESP + 0x164]               ; 004e8d35
    LEA EDI,[ESP + 0xf8]                ; 004e8d3c
    CALL core_actor.cpp_FUN_00408bb0    ; 004e8d43
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x164]               ; 004e8d48
    ADD ESP,0x8                         ; 004e8d4f
    MOVSD ES:EDI,ESI                    ; 004e8d52
    MOVSD ES:EDI,ESI                    ; 004e8d53
    MOVSD ES:EDI,ESI                    ; 004e8d54
    LEA EAX,[ESP + 0x24]                ; 004e8d55
    LEA ESI,[ESP + 0xf0]                ; 004e8d59
    CMP EAX,ESI                         ; 004e8d60
    JZ 0x004e8d85                       ; 004e8d62
        ;   XREF to: 004e8d85 (CONDITIONAL_JUMP)  ; LAB_004e8d85
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004e8d64
    MOV dword ptr [ESP + 0x24],EAX      ; 004e8d6b
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004e8d6f
    MOV dword ptr [ESP + 0x28],EAX      ; 004e8d76
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004e8d7a
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e8d81
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004e8d85
        ;   Label: LAB_004e8d85
    MOV EDI,0x65                        ; 004e8d8b
    MOV dword ptr [ESP + 0x30],EAX      ; 004e8d90
    MOV dword ptr [ESP + 0x38],EDI      ; 004e8d94
    MOV EAX,0x3e19999a                  ; 004e8d98
    MOV dword ptr [ESP + 0x3c],EBX      ; 004e8d9d
    MOV dword ptr [ESP + 0x34],EAX      ; 004e8da1
    PUSH EBX                            ; 004e8da5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e8da6
    CALL dword ptr [EAX + 0x94]         ; 004e8dac
    ADD ESP,0x4                         ; 004e8db2
    MOV dword ptr [ESP + 0x40],EAX      ; 004e8db5
    LEA EAX,[ESP + 0x8]                 ; 004e8db9
    MOV ESI,dword ptr [ESP + 0x1b8]     ; 004e8dbd
    PUSH EAX                            ; 004e8dc4
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 004e8dc5
    MOV ESI,dword ptr [ESI + 0x154]     ; 004e8dcc
    PUSH EDX                            ; 004e8dd2
    CALL dword ptr [ESI + 0x108]        ; 004e8dd3
    MOV ECX,dword ptr [EBX + 0x2e4]     ; 004e8dd9
    ADD ESP,0x8                         ; 004e8ddf
    TEST ECX,ECX                        ; 004e8de2
    JZ 0x004e8879                       ; 004e8de4
        ;   XREF to: 004e8879 (CONDITIONAL_JUMP)  ; LAB_004e8879
    MOV EAX,[0x00622c18]                ; 004e8dea | g_CDemonSetPtr
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 004e8def | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 004e8df5
    PUSH EAX                            ; 004e8df6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004e8df7
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e8dfc
    JMP 0x004e8e90                      ; 004e8dff
        ;   XREF to: 004e8e90 (UNCONDITIONAL_JUMP)  ; LAB_004e8e90
    PUSH EDI                            ; 004e8e04
        ;   Label: LAB_004e8e04
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40 ; 004e8e05
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004e8e0a
    TEST EAX,EAX                        ; 004e8e0d
    JZ 0x004e8879                       ; 004e8e0f
        ;   XREF to: 004e8879 (CONDITIONAL_JUMP)  ; LAB_004e8879
    MOV EAX,[0x00622c18]                ; 004e8e15 | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 004e8e1a
    PUSH EAX                            ; 004e8e1f | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 004e8e20
    CALL core_glass.cpp_FUN_004e34b0    ; 004e8e21
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004e34b0()
    ADD ESP,0x8                         ; 004e8e26
    JMP 0x004e8e90                      ; 004e8e29
        ;   XREF to: 004e8e90 (UNCONDITIONAL_JUMP)  ; LAB_004e8e90
    PUSH ESI                            ; 004e8e2b
        ;   Label: LAB_004e8e2b
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0 ; 004e8e2c
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_0059bdd0(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 004e8e31
    PUSH EBX                            ; 004e8e34
    PUSH ESI                            ; 004e8e35
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0 ; 004e8e36
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0059bdf0(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e8e3b
    TEST EAX,EAX                        ; 004e8e3e
    JZ 0x004e8e6f                       ; 004e8e40
        ;   XREF to: 004e8e6f (CONDITIONAL_JUMP)  ; LAB_004e8e6f
    PUSH EBX                            ; 004e8e42
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e8e43
    CALL dword ptr [EAX + 0xec]         ; 004e8e49
    MOV dword ptr [ESP + 0x1c0],EAX     ; 004e8e4f
    FLD float ptr [ESP + 0x1c0]         ; 004e8e56
    ADD ESP,0x4                         ; 004e8e5d
    SUB ESP,0x4                         ; 004e8e60
    FSTP float ptr [ESP]                ; 004e8e63
    PUSH ESI                            ; 004e8e66
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30 ; 004e8e67
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 004e8e6c
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 004e8e6f
        ;   Label: LAB_004e8e6f
    PUSH EDI                            ; 004e8e76
    MOV EAX,[0x00622c18]                ; 004e8e77 | g_CDemonSetPtr
    PUSH EAX                            ; 004e8e7c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004e8e7d
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e8e82
    JMP 0x004e8e90                      ; 004e8e85
        ;   XREF to: 004e8e90 (UNCONDITIONAL_JUMP)  ; LAB_004e8e90
    PUSH ESI                            ; 004e8e87
        ;   Label: LAB_004e8e87
    CALL core_crate.cpp_FUN_00449600    ; 004e8e88
        ;   XREF to: 00449600 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_00449600(CCrate * this_ptr)
    ADD ESP,0x4                         ; 004e8e8d
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 004e8e90
        ;   Label: LAB_004e8e90
    INC EDI                             ; 004e8e97
    MOV dword ptr [ESP + 0x1b0],EDI     ; 004e8e98
    CMP EDI,0x4                         ; 004e8e9f
    JL 0x004e8839                       ; 004e8ea2
        ;   XREF to: 004e8839 (CONDITIONAL_JUMP)  ; LAB_004e8839
    JMP 0x004e8879                      ; 004e8ea8
        ;   XREF to: 004e8879 (UNCONDITIONAL_JUMP)  ; LAB_004e8879
    MOV EAX,[0x00622c18]                ; 004e8ead | g_CDemonSetPtr
        ;   Label: LAB_004e8ead
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 004e8eb2 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 004e8eb8
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 004e8eb9 | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 004e8ebf
    LEA ESI,[EAX + 0x14d128]            ; 004e8ec0
    PUSH ESI                            ; 004e8ec6 | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 004e8ec7
    PUSH EAX                            ; 004e8ecc | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x0061c010]      ; 004e8ecd | DAT_0061c010
    PUSH ECX                            ; 004e8ed3
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0 ; 004e8ed4
        ;   XREF to: 004b56a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 004e8ed9
    JMP 0x004e8879                      ; 004e8edc
        ;   XREF to: 004e8879 (UNCONDITIONAL_JUMP)  ; LAB_004e8879

