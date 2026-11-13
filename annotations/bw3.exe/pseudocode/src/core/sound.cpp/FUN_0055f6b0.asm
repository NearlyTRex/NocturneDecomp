; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_sound_cpp_FUN_0055f6b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005d52c3
;   undefined4 DAT_005d52c7
;   undefined4 DAT_005d52df
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   void* PTR_DAT_006045f0 = 005d5272
;   void* PTR_DAT_006045f4 = 005d5276
;   undefined4 DAT_006045f8
;   undefined4 DAT_02cf5694
;   undefined4 DAT_02cf5f74
;   undefined4 DAT_02cf5f78
;   undefined4 DAT_02cf5f7c
;   undefined4 DAT_02cf5f80
;   undefined4 DAT_02cf5f84
;   undefined4 DAT_02cf5f88
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_0053ec70
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00
;   crt_stdlib.c_rand_FUN_005a35cc
;   crt_string.c__stricmp_FUN_005a3260
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_sndmain.cpp_FUN_00555d90
;   sound_sndmain.cpp_FUN_00555df0
;   sound_sndmain.cpp_FUN_00556240
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_FUN_00556ab0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   sound_sndmain.cpp_popSfxOptions_FUN_00556050
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f6b0
        ;   Label: core_sound.cpp_FUN_0055f6b0
    PUSH ESI                            ; 0055f6b1
    PUSH EDI                            ; 0055f6b2
    PUSH EBP                            ; 0055f6b3
    MOV EBP,ESP                         ; 0055f6b4
    SUB ESP,0x124                       ; 0055f6b6
    AND ESP,0xfffffff8                  ; 0055f6bc
    MOV EAX,[0x005fe9dc]                ; 0055f6bf | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 0055f6c4
    MOV EDX,dword ptr [EAX + 0x264]     ; 0055f6ca
    FSTP float ptr [ESP + 0x114]        ; 0055f6d0
    TEST EDX,EDX                        ; 0055f6d7
    JNZ 0x0055f984                      ; 0055f6d9
        ;   XREF to: 0055f984 (CONDITIONAL_JUMP)  ; LAB_0055f984
    MOV EAX,[0x00603b28]                ; 0055f6df | g_CDemonSetPtr
    MOV ECX,dword ptr [0x02cf5f84]      ; 0055f6e4 | DAT_02cf5f84
    CMP ECX,dword ptr [EAX + 0x15aeb8]  ; 0055f6ea
    JZ 0x0055f7ae                       ; 0055f6f0
        ;   XREF to: 0055f7ae (CONDITIONAL_JUMP)  ; LAB_0055f7ae
    PUSH EAX                            ; 0055f6f6
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0055f6f7
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0055f6fc
    MOV EBX,dword ptr [0x00603b28]      ; 0055f6ff | g_CDemonSetPtr
    PUSH EBX                            ; 0055f705
    LEA EDI,[ESP + 0xe0]                ; 0055f706
    MOV ESI,0x2cf568c                   ; 0055f70d
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_0053ec70 ; 0055f712
        ;   XREF to: 0053ec70 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_0053ec70(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0055f717
    MOVSD ES:EDI,ESI                    ; 0055f71a
    MOVSD ES:EDI,ESI                    ; 0055f71b
    MOVSD ES:EDI,ESI                    ; 0055f71c
    FLD float ptr [ESP + 0xe0]          ; 0055f71d
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0055f724
    LEA EDI,[ESP + 0xe8]                ; 0055f72b
    LEA ESI,[ESP + 0xd0]                ; 0055f732
    MOV dword ptr [ESP + 0xd0],EAX      ; 0055f739
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0055f740
    FADD float ptr [0x005d52c3]         ; 0055f747 | DAT_005d52c3
    MOV dword ptr [ESP + 0xd8],EAX      ; 0055f74d
    LEA EAX,[ESP + 0xe8]                ; 0055f754
    FSTP float ptr [ESP + 0xd4]         ; 0055f75b
    PUSH EAX                            ; 0055f762
    LEA EAX,[ESP + 0xe0]                ; 0055f763
    MOVSD ES:EDI,ESI                    ; 0055f76a
    MOVSD ES:EDI,ESI                    ; 0055f76b
    MOVSD ES:EDI,ESI                    ; 0055f76c
    PUSH EAX                            ; 0055f76d
    MOV ESI,dword ptr [0x00603b28]      ; 0055f76e | g_CDemonSetPtr
    PUSH ESI                            ; 0055f774
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0 ; 0055f775
        ;   XREF to: 0053cbf0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0055f77a
    TEST EAX,EAX                        ; 0055f77d
    JZ 0x0055f99f                       ; 0055f77f
        ;   XREF to: 0055f99f (CONDITIONAL_JUMP)  ; LAB_0055f99f
    MOV dword ptr [0x006045f0],0x5d527c ; 0055f785 | PTR_DAT_006045f0
    MOV EDX,dword ptr [0x00603b28]      ; 0055f78f | g_CDemonSetPtr
        ;   Label: LAB_0055f78f
    PUSH EDX                            ; 0055f795
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0055f796
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    MOV EAX,[0x00603b28]                ; 0055f79b | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 0055f7a0
    ADD ESP,0x4                         ; 0055f7a6
    MOV [0x02cf5f84],EAX                ; 0055f7a9 | DAT_02cf5f84
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0055f7ae
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
        ;   Label: LAB_0055f7ae
    PUSH 0x1                            ; 0055f7b3
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_00555f00 ; 0055f7b5
        ;   XREF to: 00555f00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_00555f00(uint flags)
    ADD ESP,0x4                         ; 0055f7ba
    PUSH 0x3                            ; 0055f7bd
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 0055f7bf
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 0055f7c4
    PUSH 0x5d5284                       ; 0055f7c7
    MOV ESI,dword ptr [0x006045f0]      ; 0055f7cc | PTR_DAT_006045f0
    PUSH ESI                            ; 0055f7d2
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0055f7d3
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055f7d8
    TEST EAX,EAX                        ; 0055f7db
    JNZ 0x0055f9ae                      ; 0055f7dd
        ;   XREF to: 0055f9ae (CONDITIONAL_JUMP)  ; LAB_0055f9ae
    MOV EDX,dword ptr [0x02cf5f8c]      ; 0055f7e3 | DAT_02cf5f8c
    PUSH EDX                            ; 0055f7e9
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0055f7ea
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV ECX,0x3ecccccd                  ; 0055f7ef
    ADD ESP,0x4                         ; 0055f7f4
    MOV dword ptr [ESP],ECX             ; 0055f7f7
    MOV EBX,dword ptr [0x02cf5f88]      ; 0055f7fa | DAT_02cf5f88
        ;   Label: LAB_0055f7fa
    PUSH EBX                            ; 0055f800
    CALL sound_sndmain.cpp_FUN_00556700 ; 0055f801
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f806
    TEST EAX,EAX                        ; 0055f809
    JZ 0x0055f9fb                       ; 0055f80b
        ;   XREF to: 0055f9fb (CONDITIONAL_JUMP)  ; LAB_0055f9fb
    MOV ESI,dword ptr [0x006045f0]      ; 0055f811 | PTR_DAT_006045f0
    PUSH ESI                            ; 0055f817
    MOV EDI,dword ptr [0x006045f4]      ; 0055f818 | PTR_DAT_006045f4
    PUSH EDI                            ; 0055f81e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0055f81f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0055f824
    TEST EAX,EAX                        ; 0055f827
    JNZ 0x0055fa33                      ; 0055f829
        ;   XREF to: 0055fa33 (CONDITIONAL_JUMP)  ; LAB_0055fa33
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0055f82f
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
        ;   Label: LAB_0055f82f
    MOV EBX,0x41f00000                  ; 0055f834
    MOV EAX,[0x006045f0]                ; 0055f839 | PTR_DAT_006045f0
    XOR EDX,EDX                         ; 0055f83e
    MOV [0x006045f4],EAX                ; 0055f840 | PTR_DAT_006045f4
    MOV dword ptr [0x02cf5f74],EDX      ; 0055f845 | DAT_02cf5f74
    MOV dword ptr [0x02cf5f78],EDX      ; 0055f84b | DAT_02cf5f78
    MOV dword ptr [0x02cf5f7c],EBX      ; 0055f851 | DAT_02cf5f7c
    MOV dword ptr [ESP + 0x110],EDX     ; 0055f857
    MOV dword ptr [ESP + 0x11c],EDX     ; 0055f85e
    MOV EBX,0x2cf5ed4                   ; 0055f865
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0055f86a
        ;   Label: LAB_0055f86a
    SHL EAX,0x4                         ; 0055f871
    MOV EDX,dword ptr [EAX + 0x2cf5ee0] ; 0055f874
    PUSH EDX                            ; 0055f87a
    MOV dword ptr [ESP + 0x11c],EAX     ; 0055f87b
    CALL sound_sndmain.cpp_FUN_00556700 ; 0055f882
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f887
    TEST EAX,EAX                        ; 0055f88a
    JZ 0x0055fa55                       ; 0055f88c
        ;   XREF to: 0055fa55 (CONDITIONAL_JUMP)  ; LAB_0055fa55
    FLD float ptr [ESP + 0x114]         ; 0055f892
    FLD float ptr [0x02cf5f74]          ; 0055f899 | DAT_02cf5f74
    FMUL ST1                            ; 0055f89f
    FLD float ptr [0x02cf5f78]          ; 0055f8a1 | DAT_02cf5f78
    FMUL ST2                            ; 0055f8a7
    FLD float ptr [0x02cf5f7c]          ; 0055f8a9 | DAT_02cf5f7c
    FMULP ST3                           ; 0055f8af
    LEA EDI,[ESP + 0x100]               ; 0055f8b1
    LEA ESI,[ESP + 0xf4]                ; 0055f8b8
    FXCH                                ; 0055f8bf
    FSTP float ptr [ESP + 0xf4]         ; 0055f8c1
    FSTP float ptr [ESP + 0xf8]         ; 0055f8c8
    FSTP float ptr [ESP + 0xfc]         ; 0055f8cf
    MOVSD ES:EDI,ESI                    ; 0055f8d6
    MOVSD ES:EDI,ESI                    ; 0055f8d7
    MOVSD ES:EDI,ESI                    ; 0055f8d8
    MOV EAX,dword ptr [ESP + 0x118]     ; 0055f8d9
    FLD float ptr [EBX]                 ; 0055f8e0
    FLD float ptr [EBX + 0x4]           ; 0055f8e2
    FLD float ptr [EBX + 0x8]           ; 0055f8e5
    FXCH ST2                            ; 0055f8e8
    FADD float ptr [ESP + 0x100]        ; 0055f8ea
    FXCH                                ; 0055f8f1
    FADD float ptr [ESP + 0x104]        ; 0055f8f3
    FXCH ST2                            ; 0055f8fa
    FADD float ptr [ESP + 0x108]        ; 0055f8fc
    FXCH                                ; 0055f903
    FSTP float ptr [EBX]                ; 0055f905
    FXCH                                ; 0055f907
    FSTP float ptr [EBX + 0x4]          ; 0055f909
    FSTP float ptr [EBX + 0x8]          ; 0055f90c
    FLD float ptr [EAX + 0x2cf5edc]     ; 0055f90f
    FABS                                ; 0055f915
    FCOMP double ptr [0x005d52df]       ; 0055f917 | DAT_005d52df
    FNSTSW AX                           ; 0055f91d
    SAHF                                ; 0055f91f
    JBE 0x0055f938                      ; 0055f920
        ;   XREF to: 0055f938 (CONDITIONAL_JUMP)  ; LAB_0055f938
    MOV EAX,dword ptr [ESP + 0x118]     ; 0055f922
    MOV ECX,dword ptr [EAX + 0x2cf5ee0] ; 0055f929
    PUSH ECX                            ; 0055f92f
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0055f930
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f935
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0055f938
        ;   Label: LAB_0055f938
    INC ESI                             ; 0055f93f
    ADD EBX,0x10                        ; 0055f940
    MOV dword ptr [ESP + 0x11c],ESI     ; 0055f943
    CMP ESI,0xa                         ; 0055f94a
    JL 0x0055f86a                       ; 0055f94d
        ;   XREF to: 0055f86a (CONDITIONAL_JUMP)  ; LAB_0055f86a
    FLD float ptr [0x02cf5f80]          ; 0055f953 | DAT_02cf5f80
    FSUB float ptr [ESP + 0x114]        ; 0055f959
    FST float ptr [0x02cf5f80]          ; 0055f960 | DAT_02cf5f80
    FLDZ                                ; 0055f966
    FCOMPP                              ; 0055f968
    FNSTSW AX                           ; 0055f96a
    SAHF                                ; 0055f96c
    JC 0x0055f97d                       ; 0055f96d
        ;   XREF to: 0055f97d (CONDITIONAL_JUMP)  ; LAB_0055f97d
    CMP dword ptr [ESP + 0x110],0x0     ; 0055f96f
    JNZ 0x0055fb90                      ; 0055f977
        ;   XREF to: 0055fb90 (CONDITIONAL_JUMP)  ; LAB_0055fb90
    MOV ESP,EBP                         ; 0055f97d
        ;   Label: LAB_0055f97d
    POP EBP                             ; 0055f97f
    POP EDI                             ; 0055f980
    POP ESI                             ; 0055f981
    POP EBX                             ; 0055f982
    RET                                 ; 0055f983
    MOV EBX,0x5d5278                    ; 0055f984
        ;   Label: LAB_0055f984
    MOV ECX,0xffffffff                  ; 0055f989
    MOV dword ptr [0x006045f0],EBX      ; 0055f98e | PTR_DAT_006045f0
    MOV dword ptr [0x02cf5f84],ECX      ; 0055f994 | DAT_02cf5f84
    JMP 0x0055f7ae                      ; 0055f99a
        ;   XREF to: 0055f7ae (UNCONDITIONAL_JUMP)  ; LAB_0055f7ae
    MOV dword ptr [0x006045f0],0x5d5280 ; 0055f99f | PTR_DAT_006045f0
        ;   Label: LAB_0055f99f
    JMP 0x0055f78f                      ; 0055f9a9
        ;   XREF to: 0055f78f (UNCONDITIONAL_JUMP)  ; LAB_0055f78f
    MOV EAX,[0x02cf5f8c]                ; 0055f9ae | DAT_02cf5f8c
        ;   Label: LAB_0055f9ae
    PUSH EAX                            ; 0055f9b3
    MOV EDI,0x3f333333                  ; 0055f9b4
    CALL sound_sndmain.cpp_FUN_00556700 ; 0055f9b9
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    MOV dword ptr [ESP + 0x4],EDI       ; 0055f9be
    ADD ESP,0x4                         ; 0055f9c2
    TEST EAX,EAX                        ; 0055f9c5
    JNZ 0x0055f7fa                      ; 0055f9c7
        ;   XREF to: 0055f7fa (CONDITIONAL_JUMP)  ; LAB_0055f7fa
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0055f9cd
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH 0x3ecccccd                     ; 0055f9d2
    CALL sound_sndmain.cpp_FUN_00555df0 ; 0055f9d7
        ;   XREF to: 00555df0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555df0(float volume)
    ADD ESP,0x4                         ; 0055f9dc
    PUSH 0x5d5288                       ; 0055f9df
    CALL sound_sndmain.cpp_FUN_00556240 ; 0055f9e4
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556240()
    ADD ESP,0x4                         ; 0055f9e9
    MOV [0x02cf5f8c],EAX                ; 0055f9ec | DAT_02cf5f8c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0055f9f1
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    JMP 0x0055f7fa                      ; 0055f9f6
        ;   XREF to: 0055f7fa (UNCONDITIONAL_JUMP)  ; LAB_0055f7fa
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0055f9fb
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
        ;   Label: LAB_0055f9fb
    FLD float ptr [ESP]                 ; 0055fa00
    FMUL double ptr [0x005d52c7]        ; 0055fa03 | DAT_005d52c7
    SUB ESP,0x4                         ; 0055fa09
    FSTP float ptr [ESP]                ; 0055fa0c
    CALL sound_sndmain.cpp_FUN_00555df0 ; 0055fa0f
        ;   XREF to: 00555df0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555df0(float volume)
    ADD ESP,0x4                         ; 0055fa14
    PUSH 0x5d5295                       ; 0055fa17
    CALL sound_sndmain.cpp_FUN_00556240 ; 0055fa1c
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556240()
    ADD ESP,0x4                         ; 0055fa21
    MOV [0x02cf5f88],EAX                ; 0055fa24 | DAT_02cf5f88
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0055fa29
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    JMP 0x0055f82f                      ; 0055fa2e
        ;   XREF to: 0055f82f (UNCONDITIONAL_JUMP)  ; LAB_0055f82f
    FLD float ptr [ESP]                 ; 0055fa33
        ;   Label: LAB_0055fa33
    FMUL double ptr [0x005d52c7]        ; 0055fa36 | DAT_005d52c7
    SUB ESP,0x4                         ; 0055fa3c
    MOV EAX,[0x02cf5f88]                ; 0055fa3f | DAT_02cf5f88
    FSTP float ptr [ESP]                ; 0055fa44
    PUSH EAX                            ; 0055fa47
    CALL sound_sndmain.cpp_FUN_00556ab0 ; 0055fa48
        ;   XREF to: 00556ab0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556ab0()
    ADD ESP,0x8                         ; 0055fa4d
    JMP 0x0055f82f                      ; 0055fa50
        ;   XREF to: 0055f82f (UNCONDITIONAL_JUMP)  ; LAB_0055f82f
    MOV dword ptr [ESP + 0x110],EBX     ; 0055fa55
        ;   Label: LAB_0055fa55
    JMP 0x0055f938                      ; 0055fa5c
        ;   XREF to: 0055f938 (UNCONDITIONAL_JUMP)  ; LAB_0055f938
    PUSH 0x40000000                     ; 0055fa93
        ;   Label: LAB_0055fa93
    MOV EAX,dword ptr [ESP + 0x114]     ; 0055fa98
    PUSH 0xc0400000                     ; 0055fa9f
    MOV dword ptr [EAX],0x0             ; 0055faa4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0055faaa
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x128],EAX     ; 0055faaf
    FLD float ptr [ESP + 0x128]         ; 0055fab6
    ADD ESP,0x8                         ; 0055fabd
    FMUL float ptr [ESP + 0x10c]        ; 0055fac0
    MOV EAX,dword ptr [ESP + 0x110]     ; 0055fac7
    FADD float ptr [0x02cf5694]         ; 0055face | DAT_02cf5694
    MOV dword ptr [EAX + 0x4],0x0       ; 0055fad4
    FSTP float ptr [EAX + 0x8]          ; 0055fadb
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0055fade
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH 0x3                            ; 0055fae3
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 0055fae5
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 0055faea
    PUSH 0x2cf5f74                      ; 0055faed
    CALL sound_sndmain.cpp_FUN_00555d90 ; 0055faf2
        ;   XREF to: 00555d90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555d90(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 0055faf7
    FLD float ptr [ESP + 0x4]           ; 0055fafa
    SUB ESP,0x8                         ; 0055fafe
    LEA EAX,[ESP + 0x74]                ; 0055fb01
    FSTP double ptr [ESP]               ; 0055fb05
    PUSH EAX                            ; 0055fb08
    PUSH 0x5d52b8                       ; 0055fb09
    LEA EAX,[ESP + 0x18]                ; 0055fb0e
    PUSH EAX                            ; 0055fb12
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055fb13
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0055fb18
    MOV EAX,dword ptr [ESP + 0x110]     ; 0055fb1b
    PUSH EAX                            ; 0055fb22
    LEA EAX,[ESP + 0xc]                 ; 0055fb23
    PUSH EAX                            ; 0055fb27
    PUSH 0x0                            ; 0055fb28
    MOV EDX,dword ptr [0x006045f8]      ; 0055fb2a | DAT_006045f8
    PUSH EDX                            ; 0055fb30
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00 ; 0055fb31
        ;   XREF to: 00560a00 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0055fb36
    MOV EDX,dword ptr [ESP + 0x110]     ; 0055fb39
    MOV dword ptr [EDX + 0xc],EAX       ; 0055fb40
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0055fb43
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    MOV ESP,EBP                         ; 0055fb48
    POP EBP                             ; 0055fb4a
    POP EDI                             ; 0055fb4b
    POP ESI                             ; 0055fb4c
    POP EBX                             ; 0055fb4d
    RET                                 ; 0055fb4e
    PUSH 0x40a00000                     ; 0055fb90
        ;   Label: LAB_0055fb90
    PUSH 0x3f800000                     ; 0055fb95
    LEA EDI,[ESP + 0x74]                ; 0055fb9a
    MOV ESI,0x604818                    ; 0055fb9e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0055fba3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x128],EAX     ; 0055fba8
    MOV ECX,0x19                        ; 0055fbaf
    FLD float ptr [ESP + 0x128]         ; 0055fbb4
    ADD ESP,0x8                         ; 0055fbbb
    MOV EDX,0x41a00000                  ; 0055fbbe
    MOVSD.REP ES:EDI,ESI                ; 0055fbc3
    FSTP float ptr [0x02cf5f80]         ; 0055fbc5 | DAT_02cf5f80
    MOV ECX,0x3f800000                  ; 0055fbcb
    MOV dword ptr [ESP + 0x10c],EDX     ; 0055fbd0
    MOV dword ptr [ESP + 0x4],ECX       ; 0055fbd7
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0055fbdb
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV EDX,EAX                         ; 0055fbe0
    MOV EBX,0x5                         ; 0055fbe2
    SAR EDX,0x1f                        ; 0055fbe7
    IDIV EBX                            ; 0055fbea
    CMP EDX,0x4                         ; 0055fbec
    JA 0x0055fa93                       ; 0055fbef
        ;   XREF to: 0055fa93 (CONDITIONAL_JUMP)  ; LAB_0055fa93
    JMP dword ptr [EDX*0x4 + 0x55f694]  ; 0055fbf5

