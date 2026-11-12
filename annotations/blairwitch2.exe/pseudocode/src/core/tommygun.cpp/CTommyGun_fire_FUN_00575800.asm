; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tommygun_cpp_CTommyGun_fire_FUN_00575800(CTommyGun *this_ptr)
;
; Parameters:
; CTommyGun *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_s_45_dry_wav_2_0_005ecc73
;   TerminatedCString s_bullet_kfm_005ecc85
;   undefined4 DAT_005ecc90
;   undefined4 DAT_005ecc94
;   undefined4 DAT_005ecc9c
;   undefined4 DAT_005ecca4
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CCrateClassInfo.name_hash
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGlassClassInfo.name_hash
;   undefined4 g_CHeroClassInfo.name_hash
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

    PUSH EBX                            ; 00575800
        ;   Label: core_tommygun.cpp_CTommyGun_fire_FUN_00575800
    PUSH ESI                            ; 00575801
    PUSH EDI                            ; 00575802
    PUSH EBP                            ; 00575803
    MOV EBP,ESP                         ; 00575804
    SUB ESP,0x1c0                       ; 00575806
    AND ESP,0xfffffff8                  ; 0057580c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057580f
    FLD float ptr [EBX + 0x45c]         ; 00575812
    FLDZ                                ; 00575818
    MOV dword ptr [EBX + 0x6d4],0x2     ; 0057581a
    FCOMPP                              ; 00575824
    FNSTSW AX                           ; 00575826
    SAHF                                ; 00575828
    JNC 0x00575834                      ; 00575829
        ;   XREF to: 00575834 (CONDITIONAL_JUMP)  ; LAB_00575834
    XOR EAX,EAX                         ; 0057582b
    MOV ESP,EBP                         ; 0057582d
    POP EBP                             ; 0057582f
    POP EDI                             ; 00575830
    POP ESI                             ; 00575831
    POP EBX                             ; 00575832
    RET                                 ; 00575833
    FLD float ptr [EBX + 0x45c]         ; 00575834
        ;   Label: LAB_00575834
    LEA ESI,[ESP + 0xfc]                ; 0057583a
    LEA EDI,[ESP + 0x168]               ; 00575841
    PUSH EBX                            ; 00575848
    FADD float ptr [0x005ecc90]         ; 00575849 | DAT_005ecc90
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057584f
    FSTP float ptr [EBX + 0x45c]        ; 00575855
    CALL dword ptr [EAX + 0xe8]         ; 0057585b
    ADD ESP,0x4                         ; 00575861
    LEA EAX,[ESP + 0x168]               ; 00575864
    LEA ESI,[ESP + 0xfc]                ; 0057586b
    PUSH EAX                            ; 00575872
    MOVSD ES:EDI,ESI                    ; 00575873
    MOVSD ES:EDI,ESI                    ; 00575874
    MOVSD ES:EDI,ESI                    ; 00575875
    PUSH EBX                            ; 00575876
    LEA ESI,[ESP + 0x110]               ; 00575877
    CALL core_actor.cpp_FUN_00408d70    ; 0057587e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00575883
    LEA EDI,[ESP + 0x114]               ; 00575886
    LEA ESI,[ESP + 0x108]               ; 0057588d
    PUSH EBX                            ; 00575894
    MOVSD ES:EDI,ESI                    ; 00575895
    MOVSD ES:EDI,ESI                    ; 00575896
    MOVSD ES:EDI,ESI                    ; 00575897
    CALL core_weapon.cpp_CWeapon_fire_FUN_0058a290 ; 00575898
        ;   XREF to: 0058a290 (UNCONDITIONAL_CALL)  ; int core_weapon.cpp_CWeapon_fire_FUN_0058a290(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0057589d
    TEST EAX,EAX                        ; 005758a0
    JZ 0x00575c47                       ; 005758a2
        ;   XREF to: 00575c47 (CONDITIONAL_JUMP)  ; LAB_00575c47
    MOV EAX,dword ptr [EBX + 0x444]     ; 005758a8
    MOV dword ptr [ESP + 0xb0],EAX      ; 005758ae
    LEA EAX,[ESP + 0xa8]                ; 005758b5
    LEA ESI,[ESP + 0xe4]                ; 005758bc
    PUSH EAX                            ; 005758c3
    LEA EDI,[ESP + 0x184]               ; 005758c4
    XOR ECX,ECX                         ; 005758cb
    PUSH EBX                            ; 005758cd
    MOV dword ptr [ESP + 0xb0],ECX      ; 005758ce
    MOV dword ptr [ESP + 0xb4],ECX      ; 005758d5
    CALL core_actor.cpp_FUN_00408cf0    ; 005758dc
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    ADD ESP,0x8                         ; 005758e1
    LEA ESI,[ESP + 0xe4]                ; 005758e4
    FLD float ptr [ESP + 0x114]         ; 005758eb
    FLD float ptr [ESP + 0x118]         ; 005758f2
    MOVSD ES:EDI,ESI                    ; 005758f9
    MOVSD ES:EDI,ESI                    ; 005758fa
    MOVSD ES:EDI,ESI                    ; 005758fb
    FLD float ptr [ESP + 0x11c]         ; 005758fc
    LEA EDI,[ESP + 0xcc]                ; 00575903
    LEA ESI,[ESP + 0x174]               ; 0057590a
    FXCH ST2                            ; 00575911
    FADD float ptr [ESP + 0x180]        ; 00575913
    FXCH                                ; 0057591a
    FADD float ptr [ESP + 0x184]        ; 0057591c
    FXCH ST2                            ; 00575923
    FADD float ptr [ESP + 0x188]        ; 00575925
    FXCH                                ; 0057592c
    FSTP float ptr [ESP + 0x174]        ; 0057592e
    FXCH                                ; 00575935
    FSTP float ptr [ESP + 0x178]        ; 00575937
    FSTP float ptr [ESP + 0x17c]        ; 0057593e
    MOVSD ES:EDI,ESI                    ; 00575945
    MOVSD ES:EDI,ESI                    ; 00575946
    MOVSD ES:EDI,ESI                    ; 00575947
    FLD float ptr [EBX + 0x444]         ; 00575948
    FDIVR double ptr [0x005ecc94]       ; 0057594e | DAT_005ecc94
    FLD float ptr [ESP + 0x180]         ; 00575954
    FXCH                                ; 0057595b
    FSTP float ptr [ESP + 0x1a4]        ; 0057595d
    FMUL float ptr [ESP + 0x1a4]        ; 00575964
    FLD float ptr [ESP + 0x184]         ; 0057596b
    FMUL float ptr [ESP + 0x1a4]        ; 00575972
    FLD float ptr [ESP + 0x188]         ; 00575979
    FMUL float ptr [ESP + 0x1a4]        ; 00575980
    FLD float ptr [ESP + 0x114]         ; 00575987
    FLD float ptr [ESP + 0x118]         ; 0057598e
    LEA EDI,[ESP + 0xc0]                ; 00575995
    LEA ESI,[ESP + 0xb4]                ; 0057599c
    FXCH ST4                            ; 005759a3
    FSTP float ptr [ESP + 0xb4]         ; 005759a5
    FXCH ST2                            ; 005759ac
    FSTP float ptr [ESP + 0xb8]         ; 005759ae
    FSTP float ptr [ESP + 0xbc]         ; 005759b5
    MOVSD ES:EDI,ESI                    ; 005759bc
    MOVSD ES:EDI,ESI                    ; 005759bd
    MOVSD ES:EDI,ESI                    ; 005759be
    FLD float ptr [ESP + 0x11c]         ; 005759bf
    LEA EDI,[ESP + 0x84]                ; 005759c6
    LEA ESI,[ESP + 0x12c]               ; 005759cd
    FXCH                                ; 005759d4
    FSUB float ptr [ESP + 0xc0]         ; 005759d6
    FXCH ST2                            ; 005759dd
    FSUB float ptr [ESP + 0xc4]         ; 005759df
    FXCH                                ; 005759e6
    FSUB float ptr [ESP + 0xc8]         ; 005759e8
    FXCH ST2                            ; 005759ef
    FSTP float ptr [ESP + 0x12c]        ; 005759f1
    FSTP float ptr [ESP + 0x130]        ; 005759f8
    FSTP float ptr [ESP + 0x134]        ; 005759ff
    MOVSD ES:EDI,ESI                    ; 00575a06
    MOVSD ES:EDI,ESI                    ; 00575a07
    MOVSD ES:EDI,ESI                    ; 00575a08
    MOV EDI,dword ptr [0x0061b5a8]      ; 00575a09 | g_CDemonSetPtr
    PUSH EDI                            ; 00575a0f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00575a10
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00575a15
    PUSH 0x1                            ; 00575a18
    MOV EAX,[0x0061b5a8]                ; 00575a1a | g_CDemonSetPtr
    PUSH EAX                            ; 00575a1f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 00575a20
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 00575a25
    PUSH EBX                            ; 00575a28
    MOV EDX,dword ptr [0x0061b5a8]      ; 00575a29 | g_CDemonSetPtr
    PUSH EDX                            ; 00575a2f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00575a30
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV ECX,dword ptr [EBX + 0x460]     ; 00575a35
    ADD ESP,0x8                         ; 00575a3b
    TEST ECX,ECX                        ; 00575a3e
    JNZ 0x00575c81                      ; 00575a40
        ;   XREF to: 00575c81 (CONDITIONAL_JUMP)  ; LAB_00575c81
    XOR EAX,EAX                         ; 00575a46
        ;   Label: LAB_00575a46
    MOV dword ptr [ESP + 0x1b0],EAX     ; 00575a48
    LEA EAX,[ESP + 0xcc]                ; 00575a4f
        ;   Label: LAB_00575a4f
    PUSH EAX                            ; 00575a56
    LEA EAX,[ESP + 0x88]                ; 00575a57
    PUSH EAX                            ; 00575a5e
    MOV EDX,dword ptr [0x0061b5a8]      ; 00575a5f | g_CDemonSetPtr
    PUSH EDX                            ; 00575a65 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00535ee0 ; 00575a66
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x1c8],EAX     ; 00575a6b
    FLD float ptr [ESP + 0x1c8]         ; 00575a72
    ADD ESP,0xc                         ; 00575a79
    FLDZ                                ; 00575a7c
    FXCH                                ; 00575a7e
    FSTP double ptr [ESP]               ; 00575a80
    FCOMP double ptr [ESP]              ; 00575a83
    FNSTSW AX                           ; 00575a86
    SAHF                                ; 00575a88
    JBE 0x00575c96                      ; 00575a89
        ;   XREF to: 00575c96 (CONDITIONAL_JUMP)  ; LAB_00575c96
    MOV ECX,dword ptr [0x0061b5a8]      ; 00575a8f | g_CDemonSetPtr
        ;   Label: LAB_00575a8f
    PUSH ECX                            ; 00575a95 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00575a96
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    MOV ESI,dword ptr [EBX + 0x6d0]     ; 00575a9b
    ADD ESP,0x4                         ; 00575aa1
    TEST ESI,ESI                        ; 00575aa4
    JZ 0x00575c3b                       ; 00575aa6
        ;   XREF to: 00575c3b (CONDITIONAL_JUMP)  ; LAB_00575c3b
    LEA EDI,[ESP + 0x9c]                ; 00575aac
    LEA ESI,[ESP + 0x114]               ; 00575ab3
    LEA EAX,[EBX + 0x3c]                ; 00575aba
    MOVSD ES:EDI,ESI                    ; 00575abd
    MOVSD ES:EDI,ESI                    ; 00575abe
    MOVSD ES:EDI,ESI                    ; 00575abf
    PUSH EAX                            ; 00575ac0
    FLD float ptr [ESP + 0xa4]          ; 00575ac1
    LEA EAX,[ESP + 0xa0]                ; 00575ac8
    MOV EDI,dword ptr [0x00614d30]      ; 00575acf | DAT_00614d30
    PUSH EAX                            ; 00575ad5
    FADD float ptr [0x005ecc9c]         ; 00575ad6 | DAT_005ecc9c
    PUSH EDI                            ; 00575adc
    FSTP float ptr [ESP + 0xac]         ; 00575add
    CALL core_fire.cpp_FUN_0049d120     ; 00575ae4
        ;   XREF to: 0049d120 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049d120(CFireEffect * this_ptr, CVector3f * position, CMatrix3x3f * rotation_matrix)
    ADD ESP,0xc                         ; 00575ae9
    MOV EAX,0x40a00000                  ; 00575aec
    MOV EDX,0x40c00000                  ; 00575af1
    PUSH 0x3ec90fdb                     ; 00575af6
    MOV ECX,0xc0c00000                  ; 00575afb
    PUSH 0xbec90fdb                     ; 00575b00
    MOV dword ptr [ESP + 0xe0],EAX      ; 00575b05
    MOV dword ptr [ESP + 0xe4],EDX      ; 00575b0c
    MOV dword ptr [ESP + 0xe8],ECX      ; 00575b13
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00575b1a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00575b1f
    FLD float ptr [ESP + 0x1c4]         ; 00575b26
    ADD ESP,0x8                         ; 00575b2d
    PUSH 0x3ec90fdb                     ; 00575b30
    PUSH 0xbec90fdb                     ; 00575b35
    FSTP float ptr [ESP + 0xf8]         ; 00575b3a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00575b41
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x1c4],EAX     ; 00575b46
    FLD float ptr [ESP + 0x1c4]         ; 00575b4d
    ADD ESP,0x8                         ; 00575b54
    LEA EAX,[ESP + 0xf0]                ; 00575b57
    PUSH EAX                            ; 00575b5e
    LEA EAX,[ESP + 0x48]                ; 00575b5f
    XOR ESI,ESI                         ; 00575b63
    PUSH EAX                            ; 00575b65
    FSTP float ptr [ESP + 0xfc]         ; 00575b66
    MOV dword ptr [ESP + 0x100],ESI     ; 00575b6d
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 00575b74
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00575b79
    LEA EAX,[ESP + 0xd8]                ; 00575b7c
    PUSH EAX                            ; 00575b83
    LEA EAX,[ESP + 0x48]                ; 00575b84
    PUSH EAX                            ; 00575b88
    LEA ESI,[ESP + 0x1a0]               ; 00575b89
    LEA EDI,[ESP + 0x14c]               ; 00575b90
    CALL core_dirmat.cpp_FUN_00449530   ; 00575b97
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 00575b9c
    LEA EAX,[ESP + 0x144]               ; 00575b9f
    LEA ESI,[ESP + 0x198]               ; 00575ba6
    PUSH EAX                            ; 00575bad
    MOVSD ES:EDI,ESI                    ; 00575bae
    MOVSD ES:EDI,ESI                    ; 00575baf
    MOVSD ES:EDI,ESI                    ; 00575bb0
    PUSH EBX                            ; 00575bb1
    LEA ESI,[ESP + 0x164]               ; 00575bb2
    LEA EDI,[ESP + 0x194]               ; 00575bb9
    CALL core_actor.cpp_FUN_00408cf0    ; 00575bc0
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x164]               ; 00575bc5
    ADD ESP,0x8                         ; 00575bcc
    MOVSD ES:EDI,ESI                    ; 00575bcf
    MOVSD ES:EDI,ESI                    ; 00575bd0
    MOVSD ES:EDI,ESI                    ; 00575bd1
    LEA EAX,[ESP + 0x18c]               ; 00575bd2
    LEA ESI,[ESP + 0xd8]                ; 00575bd9
    CMP ESI,EAX                         ; 00575be0
    JZ 0x00575c0e                       ; 00575be2
        ;   XREF to: 00575c0e (CONDITIONAL_JUMP)  ; LAB_00575c0e
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00575be4
    MOV dword ptr [ESP + 0xd8],EAX      ; 00575beb
    MOV EAX,dword ptr [ESP + 0x190]     ; 00575bf2
    MOV dword ptr [ESP + 0xdc],EAX      ; 00575bf9
    MOV EAX,dword ptr [ESP + 0x194]     ; 00575c00
    MOV dword ptr [ESP + 0xe0],EAX      ; 00575c07
    PUSH 0x5ecc85                       ; 00575c0e | = "bullet.kfm"
        ;   Label: LAB_00575c0e
    CALL core_dmodel.cpp_loadModel_FUN_0044fba0 ; 00575c13
        ;   XREF to: 0044fba0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_loadModel_FUN_0044fba0(char * filename)
    ADD ESP,0x4                         ; 00575c18
    PUSH EAX                            ; 00575c1b
    LEA EAX,[ESP + 0xdc]                ; 00575c1c
    PUSH EAX                            ; 00575c23
    LEA EAX,[EBX + 0x30]                ; 00575c24
    PUSH EAX                            ; 00575c27
    ADD EBX,0x20                        ; 00575c28
    PUSH EBX                            ; 00575c2b
    MOV EDI,dword ptr [0x00614d30]      ; 00575c2c | DAT_00614d30
    PUSH EDI                            ; 00575c32
    CALL core_fire.cpp_CFireEffect_createShell_FUN_0049e970 ; 00575c33
        ;   XREF to: 0049e970 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createShell_FUN_0049e970(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, CVector3f * velocity, ...)
    ADD ESP,0x14                        ; 00575c38
    MOV EAX,0x1                         ; 00575c3b
        ;   Label: LAB_00575c3b
    MOV ESP,EBP                         ; 00575c40
    POP EBP                             ; 00575c42
    POP EDI                             ; 00575c43
    POP ESI                             ; 00575c44
    POP EBX                             ; 00575c45
    RET                                 ; 00575c46
    PUSH 0x5ecc73                       ; 00575c47 | = "45-dry-!.wav @2.0"
        ;   Label: LAB_00575c47
    MOV dword ptr [EBX + 0x6d4],EAX     ; 00575c4c
    PUSH EBX                            ; 00575c52
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00575c53
    CALL dword ptr [EAX + 0x34]         ; 00575c59
    ADD ESP,0x8                         ; 00575c5c
    MOV EDX,dword ptr [EBX + 0x6d8]     ; 00575c5f
    PUSH EDX                            ; 00575c65
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00575c66
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00575c6b
    MOV dword ptr [EBX + 0x6d8],0x0     ; 00575c6e
    XOR EAX,EAX                         ; 00575c78
    MOV ESP,EBP                         ; 00575c7a
    POP EBP                             ; 00575c7c
    POP EDI                             ; 00575c7d
    POP ESI                             ; 00575c7e
    POP EBX                             ; 00575c7f
    RET                                 ; 00575c80
    PUSH ECX                            ; 00575c81
        ;   Label: LAB_00575c81
    MOV EDI,dword ptr [0x0061b5a8]      ; 00575c82 | g_CDemonSetPtr
    PUSH EDI                            ; 00575c88 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00575c89
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00575c8e
    JMP 0x00575a46                      ; 00575c91
        ;   XREF to: 00575a46 (UNCONDITIONAL_JUMP)  ; LAB_00575a46
    FLD1                                ; 00575c96
        ;   Label: LAB_00575c96
    FCOMP double ptr [ESP]              ; 00575c98
    FNSTSW AX                           ; 00575c9b
    SAHF                                ; 00575c9d
    JC 0x00575a8f                       ; 00575c9e
        ;   XREF to: 00575a8f (CONDITIONAL_JUMP)  ; LAB_00575a8f
    MOV ECX,dword ptr [0x007bdc94]      ; 00575ca4 | g_CCharacterClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 00575caa | g_CDemonSetPtr
    PUSH ECX                            ; 00575caf
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00575cb0 | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00575cb6
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00575cb7
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00575cbc
    MOV dword ptr [ESP + 0x1b8],EAX     ; 00575cbf
    TEST EAX,EAX                        ; 00575cc6
    JZ 0x00575ce7                       ; 00575cc8
        ;   XREF to: 00575ce7 (CONDITIONAL_JUMP)  ; LAB_00575ce7
    PUSH EAX                            ; 00575cca
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00575ccb
    CALL dword ptr [ESI + 0x114]        ; 00575cd1
    ADD ESP,0x4                         ; 00575cd7
    TEST EAX,EAX                        ; 00575cda
    JLE 0x00575ce7                      ; 00575cdc
        ;   XREF to: 00575ce7 (CONDITIONAL_JUMP)  ; LAB_00575ce7
    XOR EDI,EDI                         ; 00575cde
    MOV dword ptr [ESP + 0x1b8],EDI     ; 00575ce0
    MOV EAX,[0x01cb8280]                ; 00575ce7 | g_CGlassClassInfo.name_hash
        ;   Label: LAB_00575ce7
    PUSH EAX                            ; 00575cec
    MOV EAX,[0x0061b5a8]                ; 00575ced | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00575cf2 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00575cf8
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00575cf9
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ECX,dword ptr [0x02653628]      ; 00575cfe | g_CTriggerClassInfo.name_hash
    ADD ESP,0x8                         ; 00575d04
    MOV EDI,EAX                         ; 00575d07
    MOV EAX,[0x0061b5a8]                ; 00575d09 | g_CDemonSetPtr
    PUSH ECX                            ; 00575d0e
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 00575d0f | g_CDemonSetInstance.collision_actor
    PUSH ESI                            ; 00575d15
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00575d16
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00575d1b
    MOV ESI,EAX                         ; 00575d1e
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00575d20
    MOV EAX,[0x007c2670]                ; 00575d27 | g_CCrateClassInfo.name_hash
    PUSH EAX                            ; 00575d2c
    MOV EAX,[0x0061b5a8]                ; 00575d2d | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00575d32 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00575d38
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00575d39
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x1b4],EAX     ; 00575d3e
    ADD ESP,0x8                         ; 00575d45
    MOV ECX,dword ptr [0x01cab6f8]      ; 00575d48 | g_CFlameCanClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 00575d4e | g_CDemonSetPtr
    PUSH ECX                            ; 00575d53
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00575d54 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 00575d5a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00575d5b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00575d60
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 00575d63
    TEST ECX,ECX                        ; 00575d6a
    JNZ 0x00575da3                      ; 00575d6c
        ;   XREF to: 00575da3 (CONDITIONAL_JUMP)  ; LAB_00575da3
    TEST EDI,EDI                        ; 00575d6e
    JNZ 0x00576019                      ; 00575d70
        ;   XREF to: 00576019 (CONDITIONAL_JUMP)  ; LAB_00576019
    TEST ESI,ESI                        ; 00575d76
    JNZ 0x00576040                      ; 00575d78
        ;   XREF to: 00576040 (CONDITIONAL_JUMP)  ; LAB_00576040
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 00575d7e
    TEST ESI,ESI                        ; 00575d85
    JNZ 0x0057609c                      ; 00575d87
        ;   XREF to: 0057609c (CONDITIONAL_JUMP)  ; LAB_0057609c
    TEST EAX,EAX                        ; 00575d8d
    JZ 0x005760c2                       ; 00575d8f
        ;   XREF to: 005760c2 (CONDITIONAL_JUMP)  ; LAB_005760c2
    PUSH EAX                            ; 00575d95
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0 ; 00575d96
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 00575d9b
    JMP 0x005760a5                      ; 00575d9e
        ;   XREF to: 005760a5 (UNCONDITIONAL_JUMP)  ; LAB_005760a5
    PUSH ECX                            ; 00575da3
        ;   Label: LAB_00575da3
    MOV EAX,dword ptr [ECX + 0x2b0]     ; 00575da4
    CALL dword ptr [EAX + 0xe8]         ; 00575daa
    ADD ESP,0x4                         ; 00575db0
    TEST EAX,EAX                        ; 00575db3
    JZ 0x00575e03                       ; 00575db5
        ;   XREF to: 00575e03 (CONDITIONAL_JUMP)  ; LAB_00575e03
    MOV ECX,dword ptr [0x01cedf50]      ; 00575db7 | g_CHeroClassInfo.name_hash
    PUSH ECX                            ; 00575dbd
    MOV ESI,dword ptr [EBX + 0x460]     ; 00575dbe
    PUSH ESI                            ; 00575dc4
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00575dc5
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 00575dca
    TEST EAX,EAX                        ; 00575dcd
    JZ 0x00575e03                       ; 00575dcf
        ;   XREF to: 00575e03 (CONDITIONAL_JUMP)  ; LAB_00575e03
    CMP dword ptr [ESP + 0x1b0],0x0     ; 00575dd1
    JNZ 0x00575a8f                      ; 00575dd9
        ;   XREF to: 00575a8f (CONDITIONAL_JUMP)  ; LAB_00575a8f
    MOV EDX,dword ptr [EBX + 0x6c4]     ; 00575ddf
    MOV EAX,[0x0061b5a8]                ; 00575de5 | g_CDemonSetPtr
    INC EDX                             ; 00575dea
    PUSH EAX                            ; 00575deb | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x6c4],EDX     ; 00575dec
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00575df2
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00575df7
    XOR EAX,EAX                         ; 00575dfa
    MOV ESP,EBP                         ; 00575dfc
    POP EBP                             ; 00575dfe
    POP EDI                             ; 00575dff
    POP ESI                             ; 00575e00
    POP EBX                             ; 00575e01
    RET                                 ; 00575e02
    LEA EAX,[ESP + 0x8]                 ; 00575e03
        ;   Label: LAB_00575e03
    PUSH EAX                            ; 00575e07
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 00575e08
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV EAX,[0x0061b5a8]                ; 00575e0d | g_CDemonSetPtr
    ADD ESP,0x4                         ; 00575e12
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 00575e15 | g_CDemonSetInstance.collision_part_index
    MOV dword ptr [ESP + 0x8],EAX       ; 00575e1b
    PUSH EBX                            ; 00575e1f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00575e20
    MOV EDI,0x3ecccccd                  ; 00575e26
    CALL dword ptr [EAX + 0xf4]         ; 00575e2b
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00575e31
    MOV ESI,dword ptr [0x0061b5a8]      ; 00575e38 | g_CDemonSetPtr
    FLD float ptr [ESP + 0x1c0]         ; 00575e3e
    ADD ESP,0x4                         ; 00575e45
    LEA EAX,[ESI + 0x14d11c]            ; 00575e48
    MOV dword ptr [ESP + 0x10],EDI      ; 00575e4e
    FSTP float ptr [ESP + 0xc]          ; 00575e52
    FLD float ptr [EAX]                 ; 00575e56 | g_CDemonSetInstance.ray_target.x
    FLD float ptr [EAX + 0x4]           ; 00575e58 | g_CDemonSetInstance.ray_target.y
    FLD float ptr [EAX + 0x8]           ; 00575e5b | g_CDemonSetInstance.ray_target.z
    LEA EDI,[ESP + 0x138]               ; 00575e5e
    FXCH ST2                            ; 00575e65
    FSUB float ptr [ESI + 0x14d110]     ; 00575e67 | g_CDemonSetInstance.ray_origin.x
    FXCH                                ; 00575e6d
    FSUB float ptr [ESI + 0x14d114]     ; 00575e6f | g_CDemonSetInstance.ray_origin.y
    FXCH ST2                            ; 00575e75
    FSUB float ptr [ESI + 0x14d118]     ; 00575e77 | g_CDemonSetInstance.ray_origin.z
    FXCH                                ; 00575e7d
    FSTP float ptr [ESP + 0x90]         ; 00575e7f
    FXCH                                ; 00575e86
    FSTP float ptr [ESP + 0x94]         ; 00575e88
    LEA ESI,[ESP + 0x90]                ; 00575e8f
    FSTP float ptr [ESP + 0x98]         ; 00575e96
    MOVSD ES:EDI,ESI                    ; 00575e9d
    MOVSD ES:EDI,ESI                    ; 00575e9e
    MOVSD ES:EDI,ESI                    ; 00575e9f
    FLD float ptr [ESP + 0x13c]         ; 00575ea0
    FMUL ST0                            ; 00575ea7
    FLD float ptr [ESP + 0x138]         ; 00575ea9
    FMUL ST0                            ; 00575eb0
    FADDP                               ; 00575eb2
    FLD float ptr [ESP + 0x140]         ; 00575eb4
    FMUL ST0                            ; 00575ebb
    FADDP                               ; 00575ebd
    FSQRT                               ; 00575ebf
    FDIVR double ptr [0x005ecca4]       ; 00575ec1 | DAT_005ecca4
    FLD float ptr [ESP + 0x138]         ; 00575ec7
    FXCH                                ; 00575ece
    FSTP float ptr [ESP + 0x1b4]        ; 00575ed0
    FMUL float ptr [ESP + 0x1b4]        ; 00575ed7
    FLD float ptr [ESP + 0x13c]         ; 00575ede
    FMUL float ptr [ESP + 0x1b4]        ; 00575ee5
    FLD float ptr [ESP + 0x140]         ; 00575eec
    FMUL float ptr [ESP + 0x1b4]        ; 00575ef3
    LEA EDI,[ESP + 0x78]                ; 00575efa
    LEA ESI,[ESP + 0x150]               ; 00575efe
    FXCH ST2                            ; 00575f05
    FSTP float ptr [ESP + 0x150]        ; 00575f07
    FSTP float ptr [ESP + 0x154]        ; 00575f0e
    FSTP float ptr [ESP + 0x158]        ; 00575f15
    MOVSD ES:EDI,ESI                    ; 00575f1c
    MOVSD ES:EDI,ESI                    ; 00575f1d
    MOVSD ES:EDI,ESI                    ; 00575f1e
    LEA EAX,[ESP + 0x78]                ; 00575f1f
    LEA ESI,[ESP + 0x14]                ; 00575f23
    CMP ESI,EAX                         ; 00575f27
    JZ 0x00575f46                       ; 00575f29
        ;   XREF to: 00575f46 (CONDITIONAL_JUMP)  ; LAB_00575f46
    MOV EAX,dword ptr [ESP + 0x78]      ; 00575f2b
    MOV dword ptr [ESP + 0x14],EAX      ; 00575f2f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00575f33
    MOV dword ptr [ESP + 0x18],EAX      ; 00575f37
    MOV EAX,dword ptr [ESP + 0x80]      ; 00575f3b
    MOV dword ptr [ESP + 0x1c],EAX      ; 00575f42
    MOV EAX,[0x0061b5a8]                ; 00575f46 | g_CDemonSetPtr
        ;   Label: LAB_00575f46
    ADD EAX,0x14d138                    ; 00575f4b
    PUSH EAX                            ; 00575f50 | g_CDemonSetInstance.collision_impact_position.x
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 00575f51
    PUSH EAX                            ; 00575f58
    LEA ESI,[ESP + 0x128]               ; 00575f59
    LEA EDI,[ESP + 0x74]                ; 00575f60
    CALL core_actor.cpp_FUN_00408de0    ; 00575f64
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x128]               ; 00575f69
    ADD ESP,0x8                         ; 00575f70
    MOVSD ES:EDI,ESI                    ; 00575f73
    MOVSD ES:EDI,ESI                    ; 00575f74
    MOVSD ES:EDI,ESI                    ; 00575f75
    LEA EAX,[ESP + 0x24]                ; 00575f76
    LEA ESI,[ESP + 0x6c]                ; 00575f7a
    CMP EAX,ESI                         ; 00575f7e
    JZ 0x00575f9a                       ; 00575f80
        ;   XREF to: 00575f9a (CONDITIONAL_JUMP)  ; LAB_00575f9a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00575f82
    MOV dword ptr [ESP + 0x24],EAX      ; 00575f86
    MOV EAX,dword ptr [ESP + 0x70]      ; 00575f8a
    MOV dword ptr [ESP + 0x28],EAX      ; 00575f8e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00575f92
    MOV dword ptr [ESP + 0x2c],EAX      ; 00575f96
    MOV EDX,0x65                        ; 00575f9a
        ;   Label: LAB_00575f9a
    MOV EAX,dword ptr [EBX + 0x6c8]     ; 00575f9f
    MOV ECX,0x3e19999a                  ; 00575fa5
    MOV dword ptr [ESP + 0x30],EAX      ; 00575faa
    MOV dword ptr [ESP + 0x38],EDX      ; 00575fae
    MOV dword ptr [ESP + 0x34],ECX      ; 00575fb2
    MOV dword ptr [ESP + 0x3c],EBX      ; 00575fb6
    PUSH EBX                            ; 00575fba
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00575fbb
    CALL dword ptr [EAX + 0x9c]         ; 00575fc1
    ADD ESP,0x4                         ; 00575fc7
    MOV dword ptr [ESP + 0x40],EAX      ; 00575fca
    LEA EAX,[ESP + 0x8]                 ; 00575fce
    MOV ESI,dword ptr [ESP + 0x1b8]     ; 00575fd2
    PUSH EAX                            ; 00575fd9
    MOV EDI,dword ptr [ESP + 0x1bc]     ; 00575fda
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 00575fe1
    PUSH EDI                            ; 00575fe7
    CALL dword ptr [ESI + 0x110]        ; 00575fe8
    MOV EAX,dword ptr [EBX + 0x440]     ; 00575fee
    ADD ESP,0x8                         ; 00575ff4
    TEST EAX,EAX                        ; 00575ff7
    JZ 0x00575a8f                       ; 00575ff9
        ;   XREF to: 00575a8f (CONDITIONAL_JUMP)  ; LAB_00575a8f
    MOV EAX,[0x0061b5a8]                ; 00575fff | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 00576004 | g_CDemonSetInstance.collision_actor
    PUSH EDX                            ; 0057600a
    PUSH EAX                            ; 0057600b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 0057600c
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00576011
    JMP 0x005760a5                      ; 00576014
        ;   XREF to: 005760a5 (UNCONDITIONAL_JUMP)  ; LAB_005760a5
    PUSH EDI                            ; 00576019
        ;   Label: LAB_00576019
    CALL core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0 ; 0057601a
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_CGlass_checkBreakableCondition_FUN_004c72d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0057601f
    TEST EAX,EAX                        ; 00576022
    JZ 0x00575a8f                       ; 00576024
        ;   XREF to: 00575a8f (CONDITIONAL_JUMP)  ; LAB_00575a8f
    MOV EAX,[0x0061b5a8]                ; 0057602a | g_CDemonSetPtr
    ADD EAX,0x14d138                    ; 0057602f
    PUSH EAX                            ; 00576034 | g_CDemonSetInstance.collision_impact_position.x
    PUSH EDI                            ; 00576035
    CALL core_glass.cpp_FUN_004c6d40    ; 00576036
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 0057603b
    JMP 0x005760a5                      ; 0057603e
        ;   XREF to: 005760a5 (UNCONDITIONAL_JUMP)  ; LAB_005760a5
    PUSH ESI                            ; 00576040
        ;   Label: LAB_00576040
    CALL core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550 ; 00576041
        ;   XREF to: 00578550 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_onProjectileHit_FUN_00578550(CTrigger * this_ptr)
    ADD ESP,0x4                         ; 00576046
    PUSH EBX                            ; 00576049
    PUSH ESI                            ; 0057604a
    CALL core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 ; 0057604b
        ;   XREF to: 00578570 (UNCONDITIONAL_CALL)  ; int core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570(CTrigger * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00576050
    TEST EAX,EAX                        ; 00576053
    JZ 0x00576084                       ; 00576055
        ;   XREF to: 00576084 (CONDITIONAL_JUMP)  ; LAB_00576084
    PUSH EBX                            ; 00576057
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00576058
    CALL dword ptr [EAX + 0xf4]         ; 0057605e
    MOV dword ptr [ESP + 0x1c0],EAX     ; 00576064
    FLD float ptr [ESP + 0x1c0]         ; 0057606b
    ADD ESP,0x4                         ; 00576072
    SUB ESP,0x4                         ; 00576075
    FSTP float ptr [ESP]                ; 00576078
    PUSH ESI                            ; 0057607b
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 0057607c
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 00576081
    MOV EDI,dword ptr [ESP + 0x1a8]     ; 00576084
        ;   Label: LAB_00576084
    PUSH EDI                            ; 0057608b
    MOV EAX,[0x0061b5a8]                ; 0057608c | g_CDemonSetPtr
    PUSH EAX                            ; 00576091 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 00576092
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00576097
    JMP 0x005760a5                      ; 0057609a
        ;   XREF to: 005760a5 (UNCONDITIONAL_JUMP)  ; LAB_005760a5
    PUSH ESI                            ; 0057609c
        ;   Label: LAB_0057609c
    CALL core_crate.cpp_FUN_0043a350    ; 0057609d
        ;   XREF to: 0043a350 (UNCONDITIONAL_CALL)  ; void core_crate.cpp_FUN_0043a350(CCrate * this_ptr)
    ADD ESP,0x4                         ; 005760a2
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 005760a5
        ;   Label: LAB_005760a5
    INC ECX                             ; 005760ac
    MOV dword ptr [ESP + 0x1b0],ECX     ; 005760ad
    CMP ECX,0x4                         ; 005760b4
    JL 0x00575a4f                       ; 005760b7
        ;   XREF to: 00575a4f (CONDITIONAL_JUMP)  ; LAB_00575a4f
    JMP 0x00575a8f                      ; 005760bd
        ;   XREF to: 00575a8f (UNCONDITIONAL_JUMP)  ; LAB_00575a8f
    MOV EAX,[0x0061b5a8]                ; 005760c2 | g_CDemonSetPtr
        ;   Label: LAB_005760c2
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 005760c7 | g_CDemonSetInstance.collision_actor
    PUSH EDI                            ; 005760cd
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 005760ce | g_CDemonSetInstance.ground_type
    PUSH EDX                            ; 005760d4
    LEA ESI,[EAX + 0x14d128]            ; 005760d5
    PUSH ESI                            ; 005760db | g_CDemonSetInstance.collision_normal.x
    ADD EAX,0x14d138                    ; 005760dc
    PUSH EAX                            ; 005760e1 | g_CDemonSetInstance.collision_impact_position.x
    MOV ECX,dword ptr [0x00614d30]      ; 005760e2 | DAT_00614d30
    PUSH ECX                            ; 005760e8
    CALL core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50 ; 005760e9
        ;   XREF to: 0049cd50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createBulletImpact_FUN_0049cd50(CFireEffect * this_ptr, CVector3f * impact_pos, CVector3f * surface_normal, int ground_type, ...)
    ADD ESP,0x14                        ; 005760ee
    JMP 0x00575a8f                      ; 005760f1
        ;   XREF to: 00575a8f (UNCONDITIONAL_JUMP)  ; LAB_00575a8f

