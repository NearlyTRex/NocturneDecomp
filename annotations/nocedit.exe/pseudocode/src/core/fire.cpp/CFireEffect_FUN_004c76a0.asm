; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_FUN_004c76a0(CFireEffect * this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x68]:8  local_68
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_gun.cpp_FUN_004f0350 at 004f0b0a
;   core_tommygun.cpp_FUN_005ddb30 at 005de323
;   core_turret.cpp_FUN_005e3750 at 005e3c5e
;
; Referenced Globals:
;   void* switchdataD_004c7644 = 004c7800
;   void* switchdataD_004c766c = 004c7823
;   TerminatedCString s_ric_s_wav_0062a003
;   TerminatedCString s_ric_s_wav_0062a010
;   TerminatedCString s_ric_s_wav_0062a01d
;   TerminatedCString s_ric_s_wav_0062a02a
;   double DOUBLE_0062a03b = 0.200000000000000
;   double DOUBLE_0062a043 = -0.200000000000000
;   double DOUBLE_0062a04b = 0.0578000000000000
;   undefined4 DAT_0067aeb8
;   undefined2 DAT_0067aebc
;   CSound* g_CSoundPtr = 03f6af64
;   int g_SmokeParticleAllocIndex
;   CSmokeParticle[2048] g_SmokeParticlePool
;   int g_BulletHoleActiveCount
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730
;   core_fire.cpp_allocateBulletHole_FUN_004c6c10
;   core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0
;   core_ground.cpp_getGroundTypeCode_FUN_004eece0
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c76a0
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c76a0
    PUSH ESI                            ; 004c76a1
    PUSH EDI                            ; 004c76a2
    PUSH EBP                            ; 004c76a3
    MOV EBP,ESP                         ; 004c76a4
    SUB ESP,0x58                        ; 004c76a6
    AND ESP,0xfffffff8                  ; 004c76a9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c76ac
    MOV EBX,dword ptr [EBP + 0x18]      ; 004c76af
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004c76b2
    FLD float ptr [EAX + 0x4]           ; 004c76b5
    FST double ptr [ESP]                ; 004c76b8
    FCOMP double ptr [0x0062a03b]       ; 004c76bb | DOUBLE_0062a03b
    FNSTSW AX                           ; 004c76c1
    SAHF                                ; 004c76c3
    JNC 0x004c7785                      ; 004c76c4
        ;   XREF to: 004c7785 (CONDITIONAL_JUMP)  ; LAB_004c7785
    FLD double ptr [ESP]                ; 004c76ca
    FCOMP double ptr [0x0062a043]       ; 004c76cd | DOUBLE_0062a043
    FNSTSW AX                           ; 004c76d3
    SAHF                                ; 004c76d5
    JBE 0x004c7785                      ; 004c76d6
        ;   XREF to: 004c7785 (CONDITIONAL_JUMP)  ; LAB_004c7785
    MOV EDX,0x1                         ; 004c76dc
    MOV ECX,dword ptr [EBP + 0x24]      ; 004c76e1
    MOV ESI,0x2d2a1f4                   ; 004c76e4 | g_BulletHolePool
    MOV dword ptr [ESP + 0x54],EDX      ; 004c76e9
    TEST ECX,ECX                        ; 004c76ed
    JZ 0x004c7706                       ; 004c76ef
        ;   XREF to: 004c7706 (CONDITIONAL_JUMP)  ; LAB_004c7706
    PUSH ECX                            ; 004c76f1
    MOV EAX,dword ptr [ECX + 0x154]     ; 004c76f2
    CALL dword ptr [EAX + 0x44]         ; 004c76f8
    ADD ESP,0x4                         ; 004c76fb
    TEST EAX,EAX                        ; 004c76fe
    JZ 0x004c7785                       ; 004c7700
        ;   XREF to: 004c7785 (CONDITIONAL_JUMP)  ; LAB_004c7785
    CMP dword ptr [ESP + 0x54],0x0      ; 004c7706
        ;   Label: LAB_004c7706
    JZ 0x004c7847                       ; 004c770b
        ;   XREF to: 004c7847 (CONDITIONAL_JUMP)  ; LAB_004c7847
    MOV EAX,[0x02d2a1ec]                ; 004c7711 | g_BulletHoleActiveCount
    XOR EDX,EDX                         ; 004c7716
    TEST EAX,EAX                        ; 004c7718
    JLE 0x004c7847                      ; 004c771a
        ;   XREF to: 004c7847 (CONDITIONAL_JUMP)  ; LAB_004c7847
    FLD float ptr [EBX]                 ; 004c7720
        ;   Label: LAB_004c7720
    FSUB float ptr [ESI]                ; 004c7722 | g_BulletHolePool | DAT_02d2a230
    FSTP float ptr [ESP + 0x48]         ; 004c7724
    FLD float ptr [EBX + 0x4]           ; 004c7728
    FSUB float ptr [ESI + 0x4]          ; 004c772b | DAT_02d2a1f8 | DAT_02d2a234
    LEA ECX,[ESP + 0x48]                ; 004c772e
    FSTP float ptr [ESP + 0x4c]         ; 004c7732
    FLD float ptr [EBX + 0x8]           ; 004c7736
    FSUB float ptr [ESI + 0x8]          ; 004c7739 | g_BulletHolePool[0].position.z | DAT_02d2a238
    LEA EAX,[ESP + 0x3c]                ; 004c773c
    FSTP float ptr [ESP + 0x50]         ; 004c7740
    CMP EAX,ECX                         ; 004c7744
    JZ 0x004c7760                       ; 004c7746
        ;   XREF to: 004c7760 (CONDITIONAL_JUMP)  ; LAB_004c7760
    MOV EAX,dword ptr [ESP + 0x48]      ; 004c7748
    MOV dword ptr [ESP + 0x3c],EAX      ; 004c774c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004c7750
    MOV dword ptr [ESP + 0x40],EAX      ; 004c7754
    MOV EAX,dword ptr [ESP + 0x50]      ; 004c7758
    MOV dword ptr [ESP + 0x44],EAX      ; 004c775c
    FLD float ptr [ESP + 0x40]          ; 004c7760
        ;   Label: LAB_004c7760
    FMUL ST0                            ; 004c7764
    FLD float ptr [ESP + 0x3c]          ; 004c7766
    FMUL ST0                            ; 004c776a
    FADDP                               ; 004c776c
    FLD float ptr [ESP + 0x44]          ; 004c776e
    FMUL ST0                            ; 004c7772
    FADDP                               ; 004c7774
    FCOMP double ptr [0x0062a04b]       ; 004c7776 | DOUBLE_0062a04b
    FNSTSW AX                           ; 004c777c
    SAHF                                ; 004c777e
    JNC 0x004c7835                      ; 004c777f
        ;   XREF to: 004c7835 (CONDITIONAL_JUMP)  ; LAB_004c7835
    PUSH 0x3f000000                     ; 004c7785
        ;   Label: LAB_004c7785
    PUSH EBX                            ; 004c778a
    PUSH 0x32758e4                      ; 004c778b | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730 ; 004c7790
        ;   XREF to: 00452730 (UNCONDITIONAL_CALL)  ; int core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00452730(CDemonCamera * this_ptr, CVector3f * position, float radius)
    ADD ESP,0xc                         ; 004c7795
    TEST EAX,EAX                        ; 004c7798
    JZ 0x004c7800                       ; 004c779a
        ;   XREF to: 004c7800 (CONDITIONAL_JUMP)  ; caseD_7
    XOR ESI,ESI                         ; 004c779c
    MOV EDX,dword ptr [0x02d141e8]      ; 004c779e | g_SmokeParticleAllocIndex
        ;   Label: LAB_004c779e
    IMUL EAX,EDX,0x2c                   ; 004c77a4
    LEA ECX,[EDX + 0x1]                 ; 004c77a7
    ADD EAX,0x2d141ec                   ; 004c77aa | g_SmokeParticlePool
    MOV dword ptr [0x02d141e8],ECX      ; 004c77af | g_SmokeParticleAllocIndex
    CMP ECX,0x800                       ; 004c77b5
    JL 0x004c77c5                       ; 004c77bb
        ;   XREF to: 004c77c5 (CONDITIONAL_JUMP)  ; LAB_004c77c5
    XOR ECX,ECX                         ; 004c77bd
    MOV dword ptr [0x02d141e8],ECX      ; 004c77bf | g_SmokeParticleAllocIndex
    PUSH 0xffff                         ; 004c77c5
        ;   Label: LAB_004c77c5
    PUSH 0x0                            ; 004c77ca
    PUSH 0x3e99999a                     ; 004c77cc
    PUSH EBX                            ; 004c77d1
    PUSH EAX                            ; 004c77d2 | g_SmokeParticlePool
    INC ESI                             ; 004c77d3
    CALL core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0 ; 004c77d4
        ;   XREF to: 004bf2f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_init_FUN_004bf2f0(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 004c77d9
    CMP ESI,0x8                         ; 004c77dc
    JL 0x004c779e                       ; 004c77df
        ;   XREF to: 004c779e (CONDITIONAL_JUMP)  ; LAB_004c779e
    MOV ESI,dword ptr [EBP + 0x20]      ; 004c77e1
    CMP ESI,0x9                         ; 004c77e4
    JA 0x004c7800                       ; 004c77e7
        ;   XREF to: 004c7800 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,ESI                         ; 004c77e9
    JMP dword ptr [EAX*0x4 + 0x4c7644]  ; 004c77eb | caseD_7 | caseD_5 | switchdataD_004c7644
        ;   Label: switchD
    MOV ECX,0xc                         ; 004c7800
        ;   Label: caseD_9
    LEA EDI,[ESP + 0x8]                 ; 004c7805
    MOV ESI,0x67aeb8                    ; 004c7809 | DAT_0067aeb8
    MOVSD.REP ES:EDI,ESI                ; 004c780e | DAT_0067aeb8 | DAT_0067aebc
    MOVSW ES:EDI,ESI                    ; 004c7810 | DAT_0067aeb8 | DAT_0067aebc
    MOV EDI,dword ptr [EBP + 0x20]      ; 004c7812
    CMP EDI,0x9                         ; 004c7815
    JA 0x004c7823                       ; 004c7818
        ;   XREF to: 004c7823 (CONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,EDI                         ; 004c781a
    JMP dword ptr [EAX*0x4 + 0x4c766c]  ; 004c781c | caseD_6 | caseD_2 | caseD_5
        ;   Label: switchD
    CMP byte ptr [ESP + 0x8],0x0        ; 004c7823
        ;   Label: caseD_9
    JNZ 0x004c79a0                      ; 004c7828
        ;   XREF to: 004c79a0 (CONDITIONAL_JUMP)  ; LAB_004c79a0
    MOV ESP,EBP                         ; 004c782e
    POP EBP                             ; 004c7830
    POP EDI                             ; 004c7831
    POP ESI                             ; 004c7832
    POP EBX                             ; 004c7833
    RET                                 ; 004c7834
    MOV ECX,dword ptr [0x02d2a1ec]      ; 004c7835 | g_BulletHoleActiveCount
        ;   Label: LAB_004c7835
    INC EDX                             ; 004c783b
    ADD ESI,0x3c                        ; 004c783c
    CMP EDX,ECX                         ; 004c783f
    JL 0x004c7720                       ; 004c7841
        ;   XREF to: 004c7720 (CONDITIONAL_JUMP)  ; LAB_004c7720
    CMP dword ptr [ESP + 0x54],0x0      ; 004c7847
        ;   Label: LAB_004c7847
    JZ 0x004c7785                       ; 004c784c
        ;   XREF to: 004c7785 (CONDITIONAL_JUMP)  ; LAB_004c7785
    CALL core_fire.cpp_allocateBulletHole_FUN_004c6c10 ; 004c7852
        ;   XREF to: 004c6c10 (UNCONDITIONAL_CALL)  ; CBulletHole * core_fire.cpp_allocateBulletHole_FUN_004c6c10()
    MOV EDX,dword ptr [EBP + 0x24]      ; 004c7857
    PUSH EDX                            ; 004c785a
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004c785b
    PUSH ECX                            ; 004c785e
    PUSH EBX                            ; 004c785f
    PUSH EAX                            ; 004c7860
    CALL core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0 ; 004c7861
        ;   XREF to: 004bf7f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_ctor_FUN_004bf7f0(CBulletHole * this_ptr, CVector3f * hit_position, CVector3f * surface_normal, CDemonActor * hit_actor)
    ADD ESP,0x10                        ; 004c7866
    JMP 0x004c7785                      ; 004c7869
        ;   XREF to: 004c7785 (UNCONDITIONAL_JUMP)  ; LAB_004c7785
    XOR ESI,ESI                         ; 004c786e
        ;   Label: caseD_8
    PUSH 0xffff                         ; 004c7870
        ;   Label: LAB_004c7870
    PUSH 0x0                            ; 004c7875
    PUSH 0x10000                        ; 004c7877
    PUSH 0x20000                        ; 004c787c
    PUSH 0x0                            ; 004c7881
    PUSH EBX                            ; 004c7883
    PUSH EDI                            ; 004c7884
    INC ESI                             ; 004c7885
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004c7886
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004c788b
    CMP ESI,0x8                         ; 004c788e
    JL 0x004c7870                       ; 004c7891
        ;   XREF to: 004c7870 (CONDITIONAL_JUMP)  ; LAB_004c7870
    JMP 0x004c7800                      ; 004c7893
        ;   XREF to: 004c7800 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x3e2aaaab                     ; 004c7898
        ;   Label: caseD_8
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004c789d
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004c78a2
    TEST EAX,EAX                        ; 004c78a5
    JZ 0x004c7823                       ; 004c78a7
        ;   XREF to: 004c7823 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x2                            ; 004c78ad
    CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0 ; 004c78af
        ;   XREF to: 004eece0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004eece0(int type)
    ADD ESP,0x4                         ; 004c78b4
    PUSH EAX                            ; 004c78b7
    PUSH 0x62a003                       ; 004c78b8 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 004c78bd
    PUSH EAX                            ; 004c78c1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004c78c2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004c78c7
    CMP byte ptr [ESP + 0x8],0x0        ; 004c78ca
    JNZ 0x004c79a0                      ; 004c78cf
        ;   XREF to: 004c79a0 (CONDITIONAL_JUMP)  ; LAB_004c79a0
    MOV ESP,EBP                         ; 004c78d5
    POP EBP                             ; 004c78d7
    POP EDI                             ; 004c78d8
    POP ESI                             ; 004c78d9
    POP EBX                             ; 004c78da
    RET                                 ; 004c78db
    PUSH 0x3e2aaaab                     ; 004c78dc
        ;   Label: caseD_5
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004c78e1
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004c78e6
    TEST EAX,EAX                        ; 004c78e9
    JZ 0x004c7823                       ; 004c78eb
        ;   XREF to: 004c7823 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x5                            ; 004c78f1
    CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0 ; 004c78f3
        ;   XREF to: 004eece0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004eece0(int type)
    ADD ESP,0x4                         ; 004c78f8
    PUSH EAX                            ; 004c78fb
    PUSH 0x62a010                       ; 004c78fc | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 004c7901
    PUSH EAX                            ; 004c7905
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004c7906
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004c790b
    CMP byte ptr [ESP + 0x8],0x0        ; 004c790e
    JNZ 0x004c79a0                      ; 004c7913
        ;   XREF to: 004c79a0 (CONDITIONAL_JUMP)  ; LAB_004c79a0
    MOV ESP,EBP                         ; 004c7919
    POP EBP                             ; 004c791b
    POP EDI                             ; 004c791c
    POP ESI                             ; 004c791d
    POP EBX                             ; 004c791e
    RET                                 ; 004c791f
    PUSH 0x3e2aaaab                     ; 004c7920
        ;   Label: caseD_7
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004c7925
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004c792a
    TEST EAX,EAX                        ; 004c792d
    JZ 0x004c7823                       ; 004c792f
        ;   XREF to: 004c7823 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x7                            ; 004c7935
    CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0 ; 004c7937
        ;   XREF to: 004eece0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004eece0(int type)
    ADD ESP,0x4                         ; 004c793c
    PUSH EAX                            ; 004c793f
    PUSH 0x62a01d                       ; 004c7940 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 004c7945
    PUSH EAX                            ; 004c7949
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004c794a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004c794f
    CMP byte ptr [ESP + 0x8],0x0        ; 004c7952
    JNZ 0x004c79a0                      ; 004c7957
        ;   XREF to: 004c79a0 (CONDITIONAL_JUMP)  ; LAB_004c79a0
    MOV ESP,EBP                         ; 004c7959
    POP EBP                             ; 004c795b
    POP EDI                             ; 004c795c
    POP ESI                             ; 004c795d
    POP EBX                             ; 004c795e
    RET                                 ; 004c795f
    PUSH 0x3e2aaaab                     ; 004c7960
        ;   Label: caseD_4
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004c7965
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004c796a
    TEST EAX,EAX                        ; 004c796d
    JZ 0x004c7823                       ; 004c796f
        ;   XREF to: 004c7823 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x3                            ; 004c7975
    CALL core_ground.cpp_getGroundTypeCode_FUN_004eece0 ; 004c7977
        ;   XREF to: 004eece0 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeCode_FUN_004eece0(int type)
    ADD ESP,0x4                         ; 004c797c
    PUSH EAX                            ; 004c797f
    PUSH 0x62a02a                       ; 004c7980 | = "ric-%s.wav"
    LEA EAX,[ESP + 0x10]                ; 004c7985
    PUSH EAX                            ; 004c7989
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004c798a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004c798f
    CMP byte ptr [ESP + 0x8],0x0        ; 004c7992
    JNZ 0x004c79a0                      ; 004c7997
        ;   XREF to: 004c79a0 (CONDITIONAL_JUMP)  ; LAB_004c79a0
    MOV ESP,EBP                         ; 004c7999
    POP EBP                             ; 004c799b
    POP EDI                             ; 004c799c
    POP ESI                             ; 004c799d
    POP EBX                             ; 004c799e
    RET                                 ; 004c799f
    PUSH 0x3e2e147b                     ; 004c79a0
        ;   Label: LAB_004c79a0
    PUSH EBX                            ; 004c79a5
    LEA EAX,[ESP + 0x10]                ; 004c79a6
    PUSH EAX                            ; 004c79aa
    PUSH 0x0                            ; 004c79ab
    MOV EAX,[0x00681ef8]                ; 004c79ad | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 004c79b2 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0 ; 004c79b3
        ;   XREF to: 005b3ae0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_005b3ae0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004c79b8
    MOV ESP,EBP                         ; 004c79bb
    POP EBP                             ; 004c79bd
    POP EDI                             ; 004c79be
    POP ESI                             ; 004c79bf
    POP EBX                             ; 004c79c0
    RET                                 ; 004c79c1

