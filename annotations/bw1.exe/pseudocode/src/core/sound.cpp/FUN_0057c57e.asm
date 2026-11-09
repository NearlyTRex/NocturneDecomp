; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_sound_cpp_FUN_0057c57e(void)
;
;
; Referenced Globals:
;   TerminatedCString s_s_g_005f5a5f
;   undefined4 DAT_005f5a6a
;   undefined4 DAT_005f5a6e
;   undefined4 DAT_005f5a86
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   void* PTR_DAT_006236b0 = 005f5a19
;   void* PTR_DAT_006236b4 = 005f5a1d
;   undefined4 DAT_006236b8
;   undefined4 DAT_02c82a74
;   undefined4 DAT_02c83354
;   undefined4 DAT_02c83358
;   undefined4 DAT_02c8335c
;   undefined4 DAT_02c83360
;   undefined4 DAT_02c83364
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0
;   crt_stdlib.c_rand_FUN_005c084c
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_unknown.c_FUN_005bfb40
;   sound_sndmain.cpp_FUN_00572880
;   sound_sndmain.cpp_FUN_005728e0
;   sound_sndmain.cpp_FUN_00572980
;   sound_sndmain.cpp_FUN_005729f0
;   sound_sndmain.cpp_FUN_00572ac0
;   sound_sndmain.cpp_FUN_00572b40
;   sound_sndmain.cpp_FUN_005735a0
;   ... and 3 more
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0057c57e
        ;   Label: core_sound.cpp_FUN_0057c57e
    PUSH EBX                            ; 0057c580
    PUSH ESI                            ; 0057c581
    PUSH EDI                            ; 0057c582
    PUSH EBP                            ; 0057c583
    MOV EBP,ESP                         ; 0057c584
    SUB ESP,0x124                       ; 0057c586
    AND ESP,0xfffffff8                  ; 0057c58c
    MOV EAX,[0x0061d95c]                ; 0057c58f | g_CGamePtr
    FLD float ptr [EAX + 0x294]         ; 0057c594
    MOV EDX,dword ptr [EAX + 0x25c]     ; 0057c59a
    FSTP float ptr [ESP + 0x114]        ; 0057c5a0
    TEST EDX,EDX                        ; 0057c5a7
    JNZ 0x0057c854                      ; 0057c5a9
        ;   XREF to: 0057c854 (CONDITIONAL_JUMP)  ; LAB_0057c854
    MOV EAX,[0x00622c18]                ; 0057c5af | g_CDemonSetPtr
    MOV ECX,dword ptr [0x02c83364]      ; 0057c5b4 | DAT_02c83364
    CMP ECX,dword ptr [EAX + 0x15aeb8]  ; 0057c5ba
    JZ 0x0057c67e                       ; 0057c5c0
        ;   XREF to: 0057c67e (CONDITIONAL_JUMP)  ; LAB_0057c67e
    PUSH EAX                            ; 0057c5c6
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0057c5c7
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057c5cc
    MOV EBX,dword ptr [0x00622c18]      ; 0057c5cf | g_CDemonSetPtr
    PUSH EBX                            ; 0057c5d5
    LEA EDI,[ESP + 0xe0]                ; 0057c5d6
    MOV ESI,0x2c82a6c                   ; 0057c5dd
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0 ; 0057c5e2
        ;   XREF to: 005592b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005592b0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057c5e7
    MOVSD ES:EDI,ESI                    ; 0057c5ea
    MOVSD ES:EDI,ESI                    ; 0057c5eb
    MOVSD ES:EDI,ESI                    ; 0057c5ec
    FLD float ptr [ESP + 0xe0]          ; 0057c5ed
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0057c5f4
    LEA EDI,[ESP + 0xe8]                ; 0057c5fb
    LEA ESI,[ESP + 0xd0]                ; 0057c602
    MOV dword ptr [ESP + 0xd0],EAX      ; 0057c609
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0057c610
    FADD float ptr [0x005f5a6a]         ; 0057c617 | DAT_005f5a6a
    MOV dword ptr [ESP + 0xd8],EAX      ; 0057c61d
    LEA EAX,[ESP + 0xe8]                ; 0057c624
    FSTP float ptr [ESP + 0xd4]         ; 0057c62b
    PUSH EAX                            ; 0057c632
    LEA EAX,[ESP + 0xe0]                ; 0057c633
    MOVSD ES:EDI,ESI                    ; 0057c63a
    MOVSD ES:EDI,ESI                    ; 0057c63b
    MOVSD ES:EDI,ESI                    ; 0057c63c
    PUSH EAX                            ; 0057c63d
    MOV ESI,dword ptr [0x00622c18]      ; 0057c63e | g_CDemonSetPtr
    PUSH ESI                            ; 0057c644
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 0057c645
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0057c64a
    TEST EAX,EAX                        ; 0057c64d
    JZ 0x0057c86f                       ; 0057c64f
        ;   XREF to: 0057c86f (CONDITIONAL_JUMP)  ; LAB_0057c86f
    MOV dword ptr [0x006236b0],0x5f5a23 ; 0057c655 | PTR_DAT_006236b0
    MOV EDX,dword ptr [0x00622c18]      ; 0057c65f | g_CDemonSetPtr
        ;   Label: LAB_0057c65f
    PUSH EDX                            ; 0057c665
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0057c666
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV EAX,[0x00622c18]                ; 0057c66b | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 0057c670
    ADD ESP,0x4                         ; 0057c676
    MOV [0x02c83364],EAX                ; 0057c679 | DAT_02c83364
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 0057c67e
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
        ;   Label: LAB_0057c67e
    PUSH 0x1                            ; 0057c683
    CALL sound_sndmain.cpp_FUN_005729f0 ; 0057c685
        ;   XREF to: 005729f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005729f0(uint flags)
    ADD ESP,0x4                         ; 0057c68a
    PUSH 0x3                            ; 0057c68d
    CALL sound_sndmain.cpp_FUN_00572980 ; 0057c68f
        ;   XREF to: 00572980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572980(int channel_index)
    ADD ESP,0x4                         ; 0057c694
    PUSH 0x5f5a2b                       ; 0057c697
    MOV ESI,dword ptr [0x006236b0]      ; 0057c69c | PTR_DAT_006236b0
    PUSH ESI                            ; 0057c6a2
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0057c6a3
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057c6a8
    TEST EAX,EAX                        ; 0057c6ab
    JNZ 0x0057c87e                      ; 0057c6ad
        ;   XREF to: 0057c87e (CONDITIONAL_JUMP)  ; LAB_0057c87e
    MOV EDX,dword ptr [0x02c8336c]      ; 0057c6b3 | DAT_02c8336c
    PUSH EDX                            ; 0057c6b9
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0057c6ba
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV ECX,0x3ecccccd                  ; 0057c6bf
    ADD ESP,0x4                         ; 0057c6c4
    MOV dword ptr [ESP],ECX             ; 0057c6c7
    MOV EBX,dword ptr [0x02c83368]      ; 0057c6ca | DAT_02c83368
        ;   Label: LAB_0057c6ca
    PUSH EBX                            ; 0057c6d0
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0057c6d1
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057c6d6
    TEST EAX,EAX                        ; 0057c6d9
    JZ 0x0057c8cb                       ; 0057c6db
        ;   XREF to: 0057c8cb (CONDITIONAL_JUMP)  ; LAB_0057c8cb
    MOV ESI,dword ptr [0x006236b0]      ; 0057c6e1 | PTR_DAT_006236b0
    PUSH ESI                            ; 0057c6e7
    MOV EDI,dword ptr [0x006236b4]      ; 0057c6e8 | PTR_DAT_006236b4
    PUSH EDI                            ; 0057c6ee
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0057c6ef
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057c6f4
    TEST EAX,EAX                        ; 0057c6f7
    JNZ 0x0057c903                      ; 0057c6f9
        ;   XREF to: 0057c903 (CONDITIONAL_JUMP)  ; LAB_0057c903
    CALL sound_sndmain.cpp_FUN_00572b40 ; 0057c6ff
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
        ;   Label: LAB_0057c6ff
    MOV EBX,0x41f00000                  ; 0057c704
    MOV EAX,[0x006236b0]                ; 0057c709 | PTR_DAT_006236b0
    XOR EDX,EDX                         ; 0057c70e
    MOV [0x006236b4],EAX                ; 0057c710 | PTR_DAT_006236b4
    MOV dword ptr [0x02c83354],EDX      ; 0057c715 | DAT_02c83354
    MOV dword ptr [0x02c83358],EDX      ; 0057c71b | DAT_02c83358
    MOV dword ptr [0x02c8335c],EBX      ; 0057c721 | DAT_02c8335c
    MOV dword ptr [ESP + 0x110],EDX     ; 0057c727
    MOV dword ptr [ESP + 0x11c],EDX     ; 0057c72e
    MOV EBX,0x2c832b4                   ; 0057c735
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0057c73a
        ;   Label: LAB_0057c73a
    SHL EAX,0x4                         ; 0057c741
    MOV EDX,dword ptr [EAX + 0x2c832c0] ; 0057c744
    PUSH EDX                            ; 0057c74a
    MOV dword ptr [ESP + 0x11c],EAX     ; 0057c74b
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0057c752
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057c757
    TEST EAX,EAX                        ; 0057c75a
    JZ 0x0057c925                       ; 0057c75c
        ;   XREF to: 0057c925 (CONDITIONAL_JUMP)  ; LAB_0057c925
    FLD float ptr [ESP + 0x114]         ; 0057c762
    FLD float ptr [0x02c83354]          ; 0057c769 | DAT_02c83354
    FMUL ST1                            ; 0057c76f
    FLD float ptr [0x02c83358]          ; 0057c771 | DAT_02c83358
    FMUL ST2                            ; 0057c777
    FLD float ptr [0x02c8335c]          ; 0057c779 | DAT_02c8335c
    FMULP ST3                           ; 0057c77f
    LEA EDI,[ESP + 0x100]               ; 0057c781
    LEA ESI,[ESP + 0xf4]                ; 0057c788
    FXCH                                ; 0057c78f
    FSTP float ptr [ESP + 0xf4]         ; 0057c791
    FSTP float ptr [ESP + 0xf8]         ; 0057c798
    FSTP float ptr [ESP + 0xfc]         ; 0057c79f
    MOVSD ES:EDI,ESI                    ; 0057c7a6
    MOVSD ES:EDI,ESI                    ; 0057c7a7
    MOVSD ES:EDI,ESI                    ; 0057c7a8
    MOV EAX,dword ptr [ESP + 0x118]     ; 0057c7a9
    FLD float ptr [EBX]                 ; 0057c7b0
    FLD float ptr [EBX + 0x4]           ; 0057c7b2
    FLD float ptr [EBX + 0x8]           ; 0057c7b5
    FXCH ST2                            ; 0057c7b8
    FADD float ptr [ESP + 0x100]        ; 0057c7ba
    FXCH                                ; 0057c7c1
    FADD float ptr [ESP + 0x104]        ; 0057c7c3
    FXCH ST2                            ; 0057c7ca
    FADD float ptr [ESP + 0x108]        ; 0057c7cc
    FXCH                                ; 0057c7d3
    FSTP float ptr [EBX]                ; 0057c7d5
    FXCH                                ; 0057c7d7
    FSTP float ptr [EBX + 0x4]          ; 0057c7d9
    FSTP float ptr [EBX + 0x8]          ; 0057c7dc
    FLD float ptr [EAX + 0x2c832bc]     ; 0057c7df
    FABS                                ; 0057c7e5
    FCOMP double ptr [0x005f5a86]       ; 0057c7e7 | DAT_005f5a86
    FNSTSW AX                           ; 0057c7ed
    SAHF                                ; 0057c7ef
    JBE 0x0057c808                      ; 0057c7f0
        ;   XREF to: 0057c808 (CONDITIONAL_JUMP)  ; LAB_0057c808
    MOV EAX,dword ptr [ESP + 0x118]     ; 0057c7f2
    MOV ECX,dword ptr [EAX + 0x2c832c0] ; 0057c7f9
    PUSH ECX                            ; 0057c7ff
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0057c800
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0057c805
    MOV ESI,dword ptr [ESP + 0x11c]     ; 0057c808
        ;   Label: LAB_0057c808
    INC ESI                             ; 0057c80f
    ADD EBX,0x10                        ; 0057c810
    MOV dword ptr [ESP + 0x11c],ESI     ; 0057c813
    CMP ESI,0xa                         ; 0057c81a
    JL 0x0057c73a                       ; 0057c81d
        ;   XREF to: 0057c73a (CONDITIONAL_JUMP)  ; LAB_0057c73a
    FLD float ptr [0x02c83360]          ; 0057c823 | DAT_02c83360
    FSUB float ptr [ESP + 0x114]        ; 0057c829
    FST float ptr [0x02c83360]          ; 0057c830 | DAT_02c83360
    FLDZ                                ; 0057c836
    FCOMPP                              ; 0057c838
    FNSTSW AX                           ; 0057c83a
    SAHF                                ; 0057c83c
    JC 0x0057c84d                       ; 0057c83d
        ;   XREF to: 0057c84d (CONDITIONAL_JUMP)  ; LAB_0057c84d
    CMP dword ptr [ESP + 0x110],0x0     ; 0057c83f
    JNZ 0x0057ca60                      ; 0057c847
        ;   XREF to: 0057ca60 (CONDITIONAL_JUMP)  ; LAB_0057ca60
    MOV ESP,EBP                         ; 0057c84d
        ;   Label: LAB_0057c84d
    POP EBP                             ; 0057c84f
    POP EDI                             ; 0057c850
    POP ESI                             ; 0057c851
    POP EBX                             ; 0057c852
    RET                                 ; 0057c853
    MOV EBX,0x5f5a1f                    ; 0057c854
        ;   Label: LAB_0057c854
    MOV ECX,0xffffffff                  ; 0057c859
    MOV dword ptr [0x006236b0],EBX      ; 0057c85e | PTR_DAT_006236b0
    MOV dword ptr [0x02c83364],ECX      ; 0057c864 | DAT_02c83364
    JMP 0x0057c67e                      ; 0057c86a
        ;   XREF to: 0057c67e (UNCONDITIONAL_JUMP)  ; LAB_0057c67e
    MOV dword ptr [0x006236b0],0x5f5a27 ; 0057c86f | PTR_DAT_006236b0
        ;   Label: LAB_0057c86f
    JMP 0x0057c65f                      ; 0057c879
        ;   XREF to: 0057c65f (UNCONDITIONAL_JUMP)  ; LAB_0057c65f
    MOV EAX,[0x02c8336c]                ; 0057c87e | DAT_02c8336c
        ;   Label: LAB_0057c87e
    PUSH EAX                            ; 0057c883
    MOV EDI,0x3f333333                  ; 0057c884
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0057c889
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    MOV dword ptr [ESP + 0x4],EDI       ; 0057c88e
    ADD ESP,0x4                         ; 0057c892
    TEST EAX,EAX                        ; 0057c895
    JNZ 0x0057c6ca                      ; 0057c897
        ;   XREF to: 0057c6ca (CONDITIONAL_JUMP)  ; LAB_0057c6ca
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 0057c89d
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
    PUSH 0x3ecccccd                     ; 0057c8a2
    CALL sound_sndmain.cpp_FUN_005728e0 ; 0057c8a7
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0057c8ac
    PUSH 0x5f5a2f                       ; 0057c8af
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0057c8b4
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0057c8b9
    MOV [0x02c8336c],EAX                ; 0057c8bc | DAT_02c8336c
    CALL sound_sndmain.cpp_FUN_00572b40 ; 0057c8c1
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    JMP 0x0057c6ca                      ; 0057c8c6
        ;   XREF to: 0057c6ca (UNCONDITIONAL_JUMP)  ; LAB_0057c6ca
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 0057c8cb
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
        ;   Label: LAB_0057c8cb
    FLD float ptr [ESP]                 ; 0057c8d0
    FMUL double ptr [0x005f5a6e]        ; 0057c8d3 | DAT_005f5a6e
    SUB ESP,0x4                         ; 0057c8d9
    FSTP float ptr [ESP]                ; 0057c8dc
    CALL sound_sndmain.cpp_FUN_005728e0 ; 0057c8df
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0057c8e4
    PUSH 0x5f5a3c                       ; 0057c8e7
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0057c8ec
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0057c8f1
    MOV [0x02c83368],EAX                ; 0057c8f4 | DAT_02c83368
    CALL sound_sndmain.cpp_FUN_00572b40 ; 0057c8f9
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    JMP 0x0057c6ff                      ; 0057c8fe
        ;   XREF to: 0057c6ff (UNCONDITIONAL_JUMP)  ; LAB_0057c6ff
    FLD float ptr [ESP]                 ; 0057c903
        ;   Label: LAB_0057c903
    FMUL double ptr [0x005f5a6e]        ; 0057c906 | DAT_005f5a6e
    SUB ESP,0x4                         ; 0057c90c
    MOV EAX,[0x02c83368]                ; 0057c90f | DAT_02c83368
    FSTP float ptr [ESP]                ; 0057c914
    PUSH EAX                            ; 0057c917
    CALL sound_sndmain.cpp_FUN_00573950 ; 0057c918
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    ADD ESP,0x8                         ; 0057c91d
    JMP 0x0057c6ff                      ; 0057c920
        ;   XREF to: 0057c6ff (UNCONDITIONAL_JUMP)  ; LAB_0057c6ff
    MOV dword ptr [ESP + 0x110],EBX     ; 0057c925
        ;   Label: LAB_0057c925
    JMP 0x0057c808                      ; 0057c92c
        ;   XREF to: 0057c808 (UNCONDITIONAL_JUMP)  ; LAB_0057c808
    PUSH 0x40000000                     ; 0057c963
        ;   Label: LAB_0057c963
    MOV EAX,dword ptr [ESP + 0x114]     ; 0057c968
    PUSH 0xc0400000                     ; 0057c96f
    MOV dword ptr [EAX],0x0             ; 0057c974
    CALL core_actor.cpp_FUN_0040cc00    ; 0057c97a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x128],EAX     ; 0057c97f
    FLD float ptr [ESP + 0x128]         ; 0057c986
    ADD ESP,0x8                         ; 0057c98d
    FMUL float ptr [ESP + 0x10c]        ; 0057c990
    MOV EAX,dword ptr [ESP + 0x110]     ; 0057c997
    FADD float ptr [0x02c82a74]         ; 0057c99e | DAT_02c82a74
    MOV dword ptr [EAX + 0x4],0x0       ; 0057c9a4
    FSTP float ptr [EAX + 0x8]          ; 0057c9ab
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 0057c9ae
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
    PUSH 0x3                            ; 0057c9b3
    CALL sound_sndmain.cpp_FUN_00572980 ; 0057c9b5
        ;   XREF to: 00572980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572980(int channel_index)
    ADD ESP,0x4                         ; 0057c9ba
    PUSH 0x2c83354                      ; 0057c9bd | DAT_02c83354
    CALL sound_sndmain.cpp_FUN_00572880 ; 0057c9c2
        ;   XREF to: 00572880 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572880(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 0057c9c7
    FLD float ptr [ESP + 0x4]           ; 0057c9ca
    SUB ESP,0x8                         ; 0057c9ce
    LEA EAX,[ESP + 0x74]                ; 0057c9d1
    FSTP double ptr [ESP]               ; 0057c9d5
    PUSH EAX                            ; 0057c9d8
    PUSH 0x5f5a5f                       ; 0057c9d9 | = "%s @ %g"
    LEA EAX,[ESP + 0x18]                ; 0057c9de
    PUSH EAX                            ; 0057c9e2
    CALL crt_unknown.c_FUN_005bfb40     ; 0057c9e3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x14                        ; 0057c9e8
    MOV EAX,dword ptr [ESP + 0x110]     ; 0057c9eb
    PUSH EAX                            ; 0057c9f2
    LEA EAX,[ESP + 0xc]                 ; 0057c9f3
    PUSH EAX                            ; 0057c9f7
    PUSH 0x0                            ; 0057c9f8
    MOV EDX,dword ptr [0x006236b8]      ; 0057c9fa | DAT_006236b8
    PUSH EDX                            ; 0057ca00
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0 ; 0057ca01
        ;   XREF to: 0057d8d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0057ca06
    MOV EDX,dword ptr [ESP + 0x110]     ; 0057ca09
    MOV dword ptr [EDX + 0xc],EAX       ; 0057ca10
    CALL sound_sndmain.cpp_FUN_00572b40 ; 0057ca13
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    MOV ESP,EBP                         ; 0057ca18
    POP EBP                             ; 0057ca1a
    POP EDI                             ; 0057ca1b
    POP ESI                             ; 0057ca1c
    POP EBX                             ; 0057ca1d
    RET                                 ; 0057ca1e
    PUSH 0x40a00000                     ; 0057ca60
        ;   Label: LAB_0057ca60
    PUSH 0x3f800000                     ; 0057ca65
    LEA EDI,[ESP + 0x74]                ; 0057ca6a
    MOV ESI,0x6238d8                    ; 0057ca6e
    CALL core_actor.cpp_FUN_0040cc00    ; 0057ca73
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x128],EAX     ; 0057ca78
    MOV ECX,0x19                        ; 0057ca7f
    FLD float ptr [ESP + 0x128]         ; 0057ca84
    ADD ESP,0x8                         ; 0057ca8b
    MOV EDX,0x41a00000                  ; 0057ca8e
    MOVSD.REP ES:EDI,ESI                ; 0057ca93
    FSTP float ptr [0x02c83360]         ; 0057ca95 | DAT_02c83360
    MOV ECX,0x3f800000                  ; 0057ca9b
    MOV dword ptr [ESP + 0x10c],EDX     ; 0057caa0
    MOV dword ptr [ESP + 0x4],ECX       ; 0057caa7
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0057caab
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 0057cab0
    MOV EBX,0x5                         ; 0057cab2
    SAR EDX,0x1f                        ; 0057cab7
    IDIV EBX                            ; 0057caba
    CMP EDX,0x4                         ; 0057cabc
    JA 0x0057c963                       ; 0057cabf
        ;   XREF to: 0057c963 (CONDITIONAL_JUMP)  ; LAB_0057c963
    JMP dword ptr [EDX*0x4 + 0x57c564]  ; 0057cac5

