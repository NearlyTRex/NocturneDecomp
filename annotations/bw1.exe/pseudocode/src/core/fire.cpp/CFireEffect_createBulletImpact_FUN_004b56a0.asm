; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createBulletImpact_FUN_004b56a0(CFireEffect *this_ptr,CVector3f *impact_pos,CVector3f *surface_normal,int ground_type,CDemonActor *hit_actor)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_pos
; CVector3f *      Stack[0xc]:4   surface_normal
; int              Stack[0x10]:4   ground_type
; CDemonActor *    Stack[0x14]:4   hit_actor
; Local Variables:
; undefined8       Stack[-0x78]:8  local_78
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e9aa
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e8ed4
;   core_rifle.cpp_CRifle_fire_FUN_00540080 at 005407c6
;   core_shotgun.cpp_CShotgun_fire_FUN_00561760 at 00561f6d
;   core_tommygun.cpp_CTommyGun_fire_FUN_00598420 at 00598d09
;   core_turret.cpp_CTurret_fire_FUN_005a3870 at 005a3e1f
;
; Referenced Globals:
;   undefined1* switchdataD_004b5644 = 004b5810
;   undefined1* switchdataD_004b566c = 004b5833
;   TerminatedCString s_ric_s_wav_005df5b4
;   TerminatedCString s_ric_s_wav_005df5c1
;   TerminatedCString s_ric_s_wav_005df5ce
;   TerminatedCString s_ric_s_wav_005df5db
;   undefined4 DAT_005df5ec
;   undefined4 DAT_005df5f4
;   undefined4 DAT_005df5fc
;   undefined4 DAT_0061cb70
;   undefined2 DAT_0061cb74
;   undefined4 DAT_006236b8
;   undefined4 DAT_01c58a9c
;   undefined4 DAT_01c58aa0
;   undefined4 DAT_01c6eaa0
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00453390
;   core_fire.cpp_allocateBulletHole_FUN_004b4ac0
;   core_fire.cpp_CBulletHole_init_FUN_004ac3e0
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_fire.cpp_CSmokeParticle_init_FUN_004abeb0
;   core_ground.cpp_getGroundTypeCode_FUN_004e7010
;   core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b56a0
        ;   Label: core_fire.cpp_CFireEffect_createBulletImpact_FUN_004b56a0
    PUSH ESI                            ; 004b56a1
    PUSH EDI                            ; 004b56a2
    PUSH EBP                            ; 004b56a3
    MOV EBP,ESP                         ; 004b56a4
    SUB ESP,0x68                        ; 004b56a6
    AND ESP,0xfffffff8                  ; 004b56a9
    MOV EBX,dword ptr [EBP + 0x18]      ; 004b56ac
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b56af
    FLD float ptr [EAX + 0x4]           ; 004b56b2
    FST double ptr [ESP]                ; 004b56b5
    FCOMP double ptr [0x005df5ec]       ; 004b56b8 | DAT_005df5ec
    FNSTSW AX                           ; 004b56be
    SAHF                                ; 004b56c0
    JNC 0x004b57a0                      ; 004b56c1
        ;   XREF to: 004b57a0 (CONDITIONAL_JUMP)  ; LAB_004b57a0
    FLD double ptr [ESP]                ; 004b56c7
    FCOMP double ptr [0x005df5f4]       ; 004b56ca | DAT_005df5f4
    FNSTSW AX                           ; 004b56d0
    SAHF                                ; 004b56d2
    JBE 0x004b57a0                      ; 004b56d3
        ;   XREF to: 004b57a0 (CONDITIONAL_JUMP)  ; LAB_004b57a0
    MOV ECX,0x1                         ; 004b56d9
    MOV EDX,0x1c6eaa8                   ; 004b56de
    MOV ESI,dword ptr [EBP + 0x24]      ; 004b56e3
    MOV dword ptr [ESP + 0x60],ECX      ; 004b56e6
    MOV dword ptr [ESP + 0x64],EDX      ; 004b56ea
    TEST ESI,ESI                        ; 004b56ee
    JZ 0x004b5707                       ; 004b56f0
        ;   XREF to: 004b5707 (CONDITIONAL_JUMP)  ; LAB_004b5707
    PUSH ESI                            ; 004b56f2
    MOV EAX,dword ptr [ESI + 0x154]     ; 004b56f3
    CALL dword ptr [EAX + 0x4c]         ; 004b56f9
    ADD ESP,0x4                         ; 004b56fc
    TEST EAX,EAX                        ; 004b56ff
    JZ 0x004b57a0                       ; 004b5701
        ;   XREF to: 004b57a0 (CONDITIONAL_JUMP)  ; LAB_004b57a0
    CMP dword ptr [ESP + 0x60],0x0      ; 004b5707
        ;   Label: LAB_004b5707
    JZ 0x004b585f                       ; 004b570c
        ;   XREF to: 004b585f (CONDITIONAL_JUMP)  ; LAB_004b585f
    MOV ECX,dword ptr [0x01c6eaa0]      ; 004b5712 | DAT_01c6eaa0
    XOR EDX,EDX                         ; 004b5718
    TEST ECX,ECX                        ; 004b571a
    JLE 0x004b585f                      ; 004b571c
        ;   XREF to: 004b585f (CONDITIONAL_JUMP)  ; LAB_004b585f
    FLD float ptr [EBX]                 ; 004b5722
        ;   Label: LAB_004b5722
    FLD float ptr [EBX + 0x4]           ; 004b5724
    FLD float ptr [EBX + 0x8]           ; 004b5727
    MOV EAX,dword ptr [ESP + 0x64]      ; 004b572a
    LEA EDI,[ESP + 0x48]                ; 004b572e
    LEA ESI,[ESP + 0x3c]                ; 004b5732
    FXCH ST2                            ; 004b5736
    FSUB float ptr [EAX]                ; 004b5738 | DAT_01c6eaa8
    FXCH                                ; 004b573a
    FSUB float ptr [EAX + 0x4]          ; 004b573c | DAT_01c6eaac
    FXCH ST2                            ; 004b573f
    FSUB float ptr [EAX + 0x8]          ; 004b5741
    FXCH ST2                            ; 004b5744
    FSTP float ptr [ESP + 0x40]         ; 004b5746
    FXCH                                ; 004b574a
    FSTP float ptr [ESP + 0x44]         ; 004b574c
    FSTP float ptr [ESP + 0x3c]         ; 004b5750
    MOVSD ES:EDI,ESI                    ; 004b5754
    MOVSD ES:EDI,ESI                    ; 004b5755
    MOVSD ES:EDI,ESI                    ; 004b5756
    LEA EAX,[ESP + 0x54]                ; 004b5757
    LEA ESI,[ESP + 0x48]                ; 004b575b
    CMP EAX,ESI                         ; 004b575f
    JZ 0x004b577b                       ; 004b5761
        ;   XREF to: 004b577b (CONDITIONAL_JUMP)  ; LAB_004b577b
    MOV EAX,dword ptr [ESP + 0x48]      ; 004b5763
    MOV dword ptr [ESP + 0x54],EAX      ; 004b5767
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004b576b
    MOV dword ptr [ESP + 0x58],EAX      ; 004b576f
    MOV EAX,dword ptr [ESP + 0x50]      ; 004b5773
    MOV dword ptr [ESP + 0x5c],EAX      ; 004b5777
    FLD float ptr [ESP + 0x58]          ; 004b577b
        ;   Label: LAB_004b577b
    FMUL ST0                            ; 004b577f
    FLD float ptr [ESP + 0x54]          ; 004b5781
    FMUL ST0                            ; 004b5785
    FADDP                               ; 004b5787
    FLD float ptr [ESP + 0x5c]          ; 004b5789
    FMUL ST0                            ; 004b578d
    FADDP                               ; 004b578f
    FCOMP double ptr [0x005df5fc]       ; 004b5791 | DAT_005df5fc
    FNSTSW AX                           ; 004b5797
    SAHF                                ; 004b5799
    JNC 0x004b5845                      ; 004b579a
        ;   XREF to: 004b5845 (CONDITIONAL_JUMP)  ; LAB_004b5845
    PUSH 0x3f000000                     ; 004b57a0
        ;   Label: LAB_004b57a0
    PUSH EBX                            ; 004b57a5
    PUSH 0x1fe37ec                      ; 004b57a6
    CALL core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00453390 ; 004b57ab
        ;   XREF to: 00453390 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00453390(CDemonCamera * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 004b57b0
    TEST EAX,EAX                        ; 004b57b3
    JZ 0x004b5810                       ; 004b57b5
        ;   XREF to: 004b5810 (CONDITIONAL_JUMP)  ; caseD_9
    XOR ESI,ESI                         ; 004b57b7
    MOV EDI,dword ptr [0x01c58a9c]      ; 004b57b9 | DAT_01c58a9c
        ;   Label: LAB_004b57b9
    IMUL EAX,EDI,0x2c                   ; 004b57bf
    LEA EDX,[EDI + 0x1]                 ; 004b57c2
    ADD EAX,0x1c58aa0                   ; 004b57c5
    MOV dword ptr [0x01c58a9c],EDX      ; 004b57ca | DAT_01c58a9c
    CMP EDX,0x800                       ; 004b57d0
    JL 0x004b57e0                       ; 004b57d6
        ;   XREF to: 004b57e0 (CONDITIONAL_JUMP)  ; LAB_004b57e0
    XOR EDI,EDI                         ; 004b57d8
    MOV dword ptr [0x01c58a9c],EDI      ; 004b57da | DAT_01c58a9c
    PUSH 0xffff                         ; 004b57e0
        ;   Label: LAB_004b57e0
    PUSH 0x0                            ; 004b57e5
    PUSH 0x3e99999a                     ; 004b57e7
    PUSH EBX                            ; 004b57ec
    PUSH EAX                            ; 004b57ed | DAT_01c58aa0
    INC ESI                             ; 004b57ee
    CALL core_fire.cpp_CSmokeParticle_init_FUN_004abeb0 ; 004b57ef
        ;   XREF to: 004abeb0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_init_FUN_004abeb0(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004b57f4
    CMP ESI,0x8                         ; 004b57f7
    JL 0x004b57b9                       ; 004b57fa
        ;   XREF to: 004b57b9 (CONDITIONAL_JUMP)  ; LAB_004b57b9
    MOV EAX,dword ptr [EBP + 0x20]      ; 004b57fc
    CMP EAX,0x9                         ; 004b57ff
    JA 0x004b5810                       ; 004b5802
        ;   XREF to: 004b5810 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x4b5644]  ; 004b5804 | caseD_9 | caseD_8 | switchdataD_004b5644
        ;   Label: switchD
    MOV ECX,0xc                         ; 004b5810
        ;   Label: caseD_0
    LEA EDI,[ESP + 0x8]                 ; 004b5815
    MOV ESI,0x61cb70                    ; 004b5819 | DAT_0061cb70
    MOVSD.REP ES:EDI,ESI                ; 004b581e | DAT_0061cb70 | DAT_0061cb74
    MOVSW ES:EDI,ESI                    ; 004b5820 | DAT_0061cb74
    MOV ECX,dword ptr [EBP + 0x20]      ; 004b5822
    CMP ECX,0x9                         ; 004b5825
    JA 0x004b5833                       ; 004b5828
        ;   XREF to: 004b5833 (CONDITIONAL_JUMP)  ; caseD_9
    MOV EAX,ECX                         ; 004b582a
    JMP dword ptr [EAX*0x4 + 0x4b566c]  ; 004b582c | caseD_9 | caseD_8 | caseD_4
        ;   Label: switchD
    CMP byte ptr [ESP + 0x8],0x0        ; 004b5833
        ;   Label: caseD_0
    JNZ 0x004b59bb                      ; 004b5838
        ;   XREF to: 004b59bb (CONDITIONAL_JUMP)  ; LAB_004b59bb
    MOV ESP,EBP                         ; 004b583e
    POP EBP                             ; 004b5840
    POP EDI                             ; 004b5841
    POP ESI                             ; 004b5842
    POP EBX                             ; 004b5843
    RET                                 ; 004b5844
    MOV ESI,dword ptr [ESP + 0x64]      ; 004b5845
        ;   Label: LAB_004b5845
    MOV EDI,dword ptr [0x01c6eaa0]      ; 004b5849 | DAT_01c6eaa0
    ADD ESI,0x3c                        ; 004b584f
    INC EDX                             ; 004b5852
    MOV dword ptr [ESP + 0x64],ESI      ; 004b5853
    CMP EDX,EDI                         ; 004b5857
    JL 0x004b5722                       ; 004b5859
        ;   XREF to: 004b5722 (CONDITIONAL_JUMP)  ; LAB_004b5722
    CMP dword ptr [ESP + 0x60],0x0      ; 004b585f
        ;   Label: LAB_004b585f
    JZ 0x004b57a0                       ; 004b5864
        ;   XREF to: 004b57a0 (CONDITIONAL_JUMP)  ; LAB_004b57a0
    CALL core_fire.cpp_allocateBulletHole_FUN_004b4ac0 ; 004b586a
        ;   XREF to: 004b4ac0 (UNCONDITIONAL_CALL)  ; CBulletHole * core_fire.cpp_allocateBulletHole_FUN_004b4ac0()
    MOV EDX,dword ptr [EBP + 0x24]      ; 004b586f
    PUSH EDX                            ; 004b5872
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004b5873
    PUSH ECX                            ; 004b5876
    PUSH EBX                            ; 004b5877
    PUSH EAX                            ; 004b5878
    CALL core_fire.cpp_CBulletHole_init_FUN_004ac3e0 ; 004b5879
        ;   XREF to: 004ac3e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_init_FUN_004ac3e0(CBulletHole * this_ptr, CVector3f * hit_position, CVector3f * surface_normal, CDemonActor * hit_actor)
    ADD ESP,0x10                        ; 004b587e
    JMP 0x004b57a0                      ; 004b5881
        ;   XREF to: 004b57a0 (UNCONDITIONAL_JUMP)  ; LAB_004b57a0
    XOR ESI,ESI                         ; 004b5886
        ;   Label: caseD_2
    PUSH 0xffff                         ; 004b5888
        ;   Label: LAB_004b5888
    PUSH 0x0                            ; 004b588d
    PUSH 0x10000                        ; 004b588f
    PUSH 0x20000                        ; 004b5894
    PUSH 0x0                            ; 004b5899
    PUSH EBX                            ; 004b589b
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b589c
    PUSH EDX                            ; 004b589f
    INC ESI                             ; 004b58a0
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 004b58a1
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004b58a6
    CMP ESI,0x8                         ; 004b58a9
    JL 0x004b5888                       ; 004b58ac
        ;   XREF to: 004b5888 (CONDITIONAL_JUMP)  ; LAB_004b5888
    JMP 0x004b5810                      ; 004b58ae
        ;   XREF to: 004b5810 (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x3e2aaaab                     ; 004b58b3
        ;   Label: caseD_2
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004b58b8
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004b58bd
    TEST EAX,EAX                        ; 004b58c0
    JZ 0x004b5833                       ; 004b58c2
        ;   XREF to: 004b5833 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x2                            ; 004b58c8
    CALL core_ground.cpp_getGroundTypeCode_FUN_004e7010 ; 004b58ca
        ;   XREF to: 004e7010 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004e7010(EGroundType type)
    ADD ESP,0x4                         ; 004b58cf
    PUSH EAX                            ; 004b58d2
    PUSH 0x5df5b4                       ; 004b58d3 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 004b58d8
    PUSH EAX                            ; 004b58dc
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004b58dd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b58e2
    CMP byte ptr [ESP + 0x8],0x0        ; 004b58e5
    JNZ 0x004b59bb                      ; 004b58ea
        ;   XREF to: 004b59bb (CONDITIONAL_JUMP)  ; LAB_004b59bb
    MOV ESP,EBP                         ; 004b58f0
    POP EBP                             ; 004b58f2
    POP EDI                             ; 004b58f3
    POP ESI                             ; 004b58f4
    POP EBX                             ; 004b58f5
    RET                                 ; 004b58f6
    PUSH 0x3e2aaaab                     ; 004b58f7
        ;   Label: caseD_5
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004b58fc
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004b5901
    TEST EAX,EAX                        ; 004b5904
    JZ 0x004b5833                       ; 004b5906
        ;   XREF to: 004b5833 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x5                            ; 004b590c
    CALL core_ground.cpp_getGroundTypeCode_FUN_004e7010 ; 004b590e
        ;   XREF to: 004e7010 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004e7010(EGroundType type)
    ADD ESP,0x4                         ; 004b5913
    PUSH EAX                            ; 004b5916
    PUSH 0x5df5c1                       ; 004b5917 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 004b591c
    PUSH EAX                            ; 004b5920
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004b5921
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b5926
    CMP byte ptr [ESP + 0x8],0x0        ; 004b5929
    JNZ 0x004b59bb                      ; 004b592e
        ;   XREF to: 004b59bb (CONDITIONAL_JUMP)  ; LAB_004b59bb
    MOV ESP,EBP                         ; 004b5934
    POP EBP                             ; 004b5936
    POP EDI                             ; 004b5937
    POP ESI                             ; 004b5938
    POP EBX                             ; 004b5939
    RET                                 ; 004b593a
    PUSH 0x3e2aaaab                     ; 004b593b
        ;   Label: caseD_7
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004b5940
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004b5945
    TEST EAX,EAX                        ; 004b5948
    JZ 0x004b5833                       ; 004b594a
        ;   XREF to: 004b5833 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x7                            ; 004b5950
    CALL core_ground.cpp_getGroundTypeCode_FUN_004e7010 ; 004b5952
        ;   XREF to: 004e7010 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004e7010(EGroundType type)
    ADD ESP,0x4                         ; 004b5957
    PUSH EAX                            ; 004b595a
    PUSH 0x5df5ce                       ; 004b595b | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 004b5960
    PUSH EAX                            ; 004b5964
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004b5965
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b596a
    CMP byte ptr [ESP + 0x8],0x0        ; 004b596d
    JNZ 0x004b59bb                      ; 004b5972
        ;   XREF to: 004b59bb (CONDITIONAL_JUMP)  ; LAB_004b59bb
    MOV ESP,EBP                         ; 004b5974
    POP EBP                             ; 004b5976
    POP EDI                             ; 004b5977
    POP ESI                             ; 004b5978
    POP EBX                             ; 004b5979
    RET                                 ; 004b597a
    PUSH 0x3e2aaaab                     ; 004b597b
        ;   Label: caseD_3
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004b5980
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004b5985
    TEST EAX,EAX                        ; 004b5988
    JZ 0x004b5833                       ; 004b598a
        ;   XREF to: 004b5833 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x3                            ; 004b5990
    CALL core_ground.cpp_getGroundTypeCode_FUN_004e7010 ; 004b5992
        ;   XREF to: 004e7010 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004e7010(EGroundType type)
    ADD ESP,0x4                         ; 004b5997
    PUSH EAX                            ; 004b599a
    PUSH 0x5df5db                       ; 004b599b | = "ric-%s.wav"
    LEA EAX,[ESP + 0x10]                ; 004b59a0
    PUSH EAX                            ; 004b59a4
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004b59a5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b59aa
    CMP byte ptr [ESP + 0x8],0x0        ; 004b59ad
    JNZ 0x004b59bb                      ; 004b59b2
        ;   XREF to: 004b59bb (CONDITIONAL_JUMP)  ; LAB_004b59bb
    MOV ESP,EBP                         ; 004b59b4
    POP EBP                             ; 004b59b6
    POP EDI                             ; 004b59b7
    POP ESI                             ; 004b59b8
    POP EBX                             ; 004b59b9
    RET                                 ; 004b59ba
    PUSH 0x3e2e147b                     ; 004b59bb
        ;   Label: LAB_004b59bb
    PUSH EBX                            ; 004b59c0
    LEA EAX,[ESP + 0x10]                ; 004b59c1
    PUSH EAX                            ; 004b59c5
    PUSH 0x0                            ; 004b59c6
    MOV EBX,dword ptr [0x006236b8]      ; 004b59c8 | DAT_006236b8
    PUSH EBX                            ; 004b59ce
    CALL core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940 ; 004b59cf
        ;   XREF to: 0057d940 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorNonPositionalSoundWithDelay_FUN_0057d940(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004b59d4
    MOV ESP,EBP                         ; 004b59d7
    POP EBP                             ; 004b59d9
    POP EDI                             ; 004b59da
    POP ESI                             ; 004b59db
    POP EBX                             ; 004b59dc
    RET                                 ; 004b59dd

