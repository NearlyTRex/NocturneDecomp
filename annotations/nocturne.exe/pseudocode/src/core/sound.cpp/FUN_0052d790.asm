; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_sound_cpp_FUN_0052d790(void)
;
;
; Referenced Globals:
;   TerminatedCString s_ext_00594af7
;   TerminatedCString s_int_00594afb
;   TerminatedCString s_ext_00594aff
;   TerminatedCString s_int_00594b03
;   TerminatedCString s_trainext_wav_00594b07
;   TerminatedCString s_railnoiz_wav_00594b14
;   TerminatedCString s_s_g_00594b37
;   float FLOAT_00594b42 = 20
;   double DOUBLE_00594b46 = 1.5
;   double DOUBLE_00594b5e = 510
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   void* PTR_s_int_005bed60 = 00594af1
;   void* PTR_s_x_005bed64 = 00594af5
;   undefined4 DAT_005bed68
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdlib.c_rand_FUN_0056488c
;   crt_string.c__stricmp_FUN_00564520
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0
;   sound_sndmain.cpp_setNextSfxFlags_FUN_00526240
;   sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d790
        ;   Label: core_sound.cpp_FUN_0052d790
    PUSH ESI                            ; 0052d791
    PUSH EDI                            ; 0052d792
    PUSH EBP                            ; 0052d793
    MOV EBP,ESP                         ; 0052d794
    SUB ESP,0x110                       ; 0052d796
    AND ESP,0xfffffff8                  ; 0052d79c
    MOV EAX,[0x005b9354]                ; 0052d79f | DAT_005b9354
    FLD float ptr [EAX + 0x264]         ; 0052d7a4
    MOV EDX,dword ptr [EAX + 0x240]     ; 0052d7aa
    FSTP float ptr [ESP + 0x108]        ; 0052d7b0
    TEST EDX,EDX                        ; 0052d7b7
    JNZ 0x0052da3c                      ; 0052d7b9
        ;   XREF to: 0052da3c (CONDITIONAL_JUMP)  ; LAB_0052da3c
    MOV EAX,[0x005be368]                ; 0052d7bf | DAT_005be368
    MOV ECX,dword ptr [0x02dc9d54]      ; 0052d7c4 | DAT_02dc9d54
    CMP ECX,dword ptr [EAX + 0x15aabc]  ; 0052d7ca
    JZ 0x0052d8ae                       ; 0052d7d0
        ;   XREF to: 0052d8ae (CONDITIONAL_JUMP)  ; LAB_0052d8ae
    PUSH EAX                            ; 0052d7d6
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0052d7d7
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052d7dc
    MOV EBX,dword ptr [0x005be368]      ; 0052d7df | DAT_005be368
    PUSH EBX                            ; 0052d7e5
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0 ; 0052d7e6
        ;   XREF to: 005117e0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0(CDemonSet * this_ptr)
    MOV EAX,[0x02dc945c]                ; 0052d7eb | DAT_02dc945c
    ADD ESP,0x4                         ; 0052d7f0
    MOV EDI,0x41a00000                  ; 0052d7f3
    MOV dword ptr [ESP + 0xd0],EAX      ; 0052d7f8
    MOV EAX,[0x02dc9460]                ; 0052d7ff | DAT_02dc9460
    XOR ESI,ESI                         ; 0052d804
    MOV dword ptr [ESP + 0xd4],EAX      ; 0052d806
    MOV EAX,[0x02dc9464]                ; 0052d80d | DAT_02dc9464
    MOV EDX,dword ptr [0x005be368]      ; 0052d812 | DAT_005be368
    MOV dword ptr [ESP + 0xd8],EAX      ; 0052d818
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0052d81f
    MOV dword ptr [ESP + 0xe8],ESI      ; 0052d826
    MOV dword ptr [ESP + 0xdc],EAX      ; 0052d82d
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0052d834
    MOV dword ptr [ESP + 0xec],EDI      ; 0052d83b
    MOV dword ptr [ESP + 0xe4],EAX      ; 0052d842
    LEA EAX,[ESP + 0xdc]                ; 0052d849
    MOV dword ptr [ESP + 0xf0],ESI      ; 0052d850
    PUSH EAX                            ; 0052d857
    LEA EAX,[ESP + 0xd4]                ; 0052d858
    FLD float ptr [ESP + 0xd8]          ; 0052d85f
    PUSH EAX                            ; 0052d866
    FADD float ptr [0x00594b42]         ; 0052d867 | FLOAT_00594b42
    PUSH EDX                            ; 0052d86d
    FSTP float ptr [ESP + 0xec]         ; 0052d86e
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30 ; 0052d875
        ;   XREF to: 0050fa30 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0050fa30(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0052d87a
    TEST EAX,EAX                        ; 0052d87d
    JZ 0x0052da56                       ; 0052d87f
        ;   XREF to: 0052da56 (CONDITIONAL_JUMP)  ; LAB_0052da56
    MOV dword ptr [0x005bed60],0x594afb ; 0052d885 | PTR_s_int_005bed60 | = "int"
    MOV ESI,dword ptr [0x005be368]      ; 0052d88f | DAT_005be368
        ;   Label: LAB_0052d88f
    PUSH ESI                            ; 0052d895
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 0052d896
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00511750(CDemonSet * this_ptr)
    MOV EAX,[0x005be368]                ; 0052d89b | DAT_005be368
    MOV EAX,dword ptr [EAX + 0x15aabc]  ; 0052d8a0
    ADD ESP,0x4                         ; 0052d8a6
    MOV [0x02dc9d54],EAX                ; 0052d8a9 | DAT_02dc9d54
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0052d8ae
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
        ;   Label: LAB_0052d8ae
    PUSH 0x1                            ; 0052d8b3
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_00526240 ; 0052d8b5
        ;   XREF to: 00526240 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_00526240(uint flags)
    ADD ESP,0x4                         ; 0052d8ba
    PUSH 0x3                            ; 0052d8bd
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0 ; 0052d8bf
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0(int channel_index)
    ADD ESP,0x4                         ; 0052d8c4
    PUSH 0x594b03                       ; 0052d8c7 | = "int"
    MOV EDX,dword ptr [0x005bed60]      ; 0052d8cc | PTR_s_int_005bed60
    PUSH EDX                            ; 0052d8d2
    CALL crt_string.c__stricmp_FUN_00564520 ; 0052d8d3
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052d8d8
    TEST EAX,EAX                        ; 0052d8db
    JNZ 0x0052da65                      ; 0052d8dd
        ;   XREF to: 0052da65 (CONDITIONAL_JUMP)  ; LAB_0052da65
    MOV ESI,dword ptr [0x02dc9d5c]      ; 0052d8e3 | DAT_02dc9d5c
    PUSH ESI                            ; 0052d8e9
    MOV EDI,0x3ecccccd                  ; 0052d8ea
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052d8ef
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0052d8f4
    MOV dword ptr [ESP],EDI             ; 0052d8f7
    MOV EAX,[0x02dc9d58]                ; 0052d8fa | DAT_02dc9d58
        ;   Label: LAB_0052d8fa
    PUSH EAX                            ; 0052d8ff
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0052d900
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0052d905
    TEST EAX,EAX                        ; 0052d908
    JZ 0x0052dab3                       ; 0052d90a
        ;   XREF to: 0052dab3 (CONDITIONAL_JUMP)  ; LAB_0052dab3
    MOV EDX,dword ptr [0x005bed60]      ; 0052d910 | PTR_s_int_005bed60
    PUSH EDX                            ; 0052d916
    MOV ECX,dword ptr [0x005bed64]      ; 0052d917 | PTR_s_x_005bed64
    PUSH ECX                            ; 0052d91d
    CALL crt_string.c__stricmp_FUN_00564520 ; 0052d91e
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 0052d923
    TEST EAX,EAX                        ; 0052d926
    JNZ 0x0052daeb                      ; 0052d928
        ;   XREF to: 0052daeb (CONDITIONAL_JUMP)  ; LAB_0052daeb
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052d92e
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
        ;   Label: LAB_0052d92e
    MOV EBX,0x2dc9ca4                   ; 0052d933
    MOV EAX,[0x005bed60]                ; 0052d938 | PTR_s_int_005bed60
    XOR ESI,ESI                         ; 0052d93d
    MOV [0x005bed64],EAX                ; 0052d93f | PTR_s_x_005bed64
    MOV dword ptr [0x02dc9d44],ESI      ; 0052d944 | DAT_02dc9d44
    MOV dword ptr [0x02dc9d48],ESI      ; 0052d94a | DAT_02dc9d48
    MOV EAX,0x41f00000                  ; 0052d950
    MOV dword ptr [ESP + 0x104],ESI     ; 0052d955
    MOV [0x02dc9d4c],EAX                ; 0052d95c | DAT_02dc9d4c
    MOV EDI,ESI                         ; 0052d961
        ;   Label: LAB_0052d961
    SHL EDI,0x4                         ; 0052d963
    MOV ECX,dword ptr [EDI + 0x2dc9cb0] ; 0052d966
    PUSH ECX                            ; 0052d96c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0052d96d
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0052d972
    TEST EAX,EAX                        ; 0052d975
    JZ 0x0052db0e                       ; 0052d977
        ;   XREF to: 0052db0e (CONDITIONAL_JUMP)  ; LAB_0052db0e
    FLD float ptr [ESP + 0x108]         ; 0052d97d
    FLD float ptr [0x02dc9d44]          ; 0052d984 | DAT_02dc9d44
    FMUL ST1                            ; 0052d98a
    FLD float ptr [0x02dc9d48]          ; 0052d98c | DAT_02dc9d48
    FMUL ST2                            ; 0052d992
    FLD float ptr [0x02dc9d4c]          ; 0052d994 | DAT_02dc9d4c
    FMULP ST3                           ; 0052d99a
    FXCH                                ; 0052d99c
    FSTP float ptr [ESP + 0xf4]         ; 0052d99e
    FSTP float ptr [ESP + 0xf8]         ; 0052d9a5
    FSTP float ptr [ESP + 0xfc]         ; 0052d9ac
    FLD float ptr [EBX]                 ; 0052d9b3
    FADD float ptr [ESP + 0xf4]         ; 0052d9b5
    FLD float ptr [EBX + 0x4]           ; 0052d9bc
    FXCH                                ; 0052d9bf
    FSTP float ptr [EBX]                ; 0052d9c1
    FADD float ptr [ESP + 0xf8]         ; 0052d9c3
    FLD float ptr [EBX + 0x8]           ; 0052d9ca
    FXCH                                ; 0052d9cd
    FSTP float ptr [EBX + 0x4]          ; 0052d9cf
    FADD float ptr [ESP + 0xfc]         ; 0052d9d2
    FSTP float ptr [EBX + 0x8]          ; 0052d9d9
    FLD float ptr [EDI + 0x2dc9cac]     ; 0052d9dc
    FABS                                ; 0052d9e2
    FCOMP double ptr [0x00594b5e]       ; 0052d9e4 | DOUBLE_00594b5e
    FNSTSW AX                           ; 0052d9ea
    SAHF                                ; 0052d9ec
    JBE 0x0052d9fe                      ; 0052d9ed
        ;   XREF to: 0052d9fe (CONDITIONAL_JUMP)  ; LAB_0052d9fe
    MOV EAX,dword ptr [EDI + 0x2dc9cb0] ; 0052d9ef
    PUSH EAX                            ; 0052d9f5
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052d9f6
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0052d9fb
    INC ESI                             ; 0052d9fe
        ;   Label: LAB_0052d9fe
    ADD EBX,0x10                        ; 0052d9ff
    CMP ESI,0xa                         ; 0052da02
    JL 0x0052d961                       ; 0052da05
        ;   XREF to: 0052d961 (CONDITIONAL_JUMP)  ; LAB_0052d961
    FLD float ptr [0x02dc9d50]          ; 0052da0b | DAT_02dc9d50
    FSUB float ptr [ESP + 0x108]        ; 0052da11
    FST float ptr [0x02dc9d50]          ; 0052da18 | DAT_02dc9d50
    FLDZ                                ; 0052da1e
    FCOMPP                              ; 0052da20
    FNSTSW AX                           ; 0052da22
    SAHF                                ; 0052da24
    JC 0x0052da35                       ; 0052da25
        ;   XREF to: 0052da35 (CONDITIONAL_JUMP)  ; LAB_0052da35
    CMP dword ptr [ESP + 0x104],0x0     ; 0052da27
    JNZ 0x0052dc48                      ; 0052da2f
        ;   XREF to: 0052dc48 (CONDITIONAL_JUMP)  ; LAB_0052dc48
    MOV ESP,EBP                         ; 0052da35
        ;   Label: LAB_0052da35
    POP EBP                             ; 0052da37
    POP EDI                             ; 0052da38
    POP ESI                             ; 0052da39
    POP EBX                             ; 0052da3a
    RET                                 ; 0052da3b
    MOV EAX,0x594af7                    ; 0052da3c | = "ext"
        ;   Label: LAB_0052da3c
    MOV EDI,0xffffffff                  ; 0052da41
    MOV [0x005bed60],EAX                ; 0052da46 | PTR_s_int_005bed60
    MOV dword ptr [0x02dc9d54],EDI      ; 0052da4b | DAT_02dc9d54
    JMP 0x0052d8ae                      ; 0052da51
        ;   XREF to: 0052d8ae (UNCONDITIONAL_JUMP)  ; LAB_0052d8ae
    MOV dword ptr [0x005bed60],0x594aff ; 0052da56 | PTR_s_int_005bed60 | = "ext"
        ;   Label: LAB_0052da56
    JMP 0x0052d88f                      ; 0052da60
        ;   XREF to: 0052d88f (UNCONDITIONAL_JUMP)  ; LAB_0052d88f
    MOV EBX,dword ptr [0x02dc9d5c]      ; 0052da65 | DAT_02dc9d5c
        ;   Label: LAB_0052da65
    MOV ECX,0x3f333333                  ; 0052da6b
    PUSH EBX                            ; 0052da70
    MOV dword ptr [ESP + 0x4],ECX       ; 0052da71
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0052da75
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0052da7a
    TEST EAX,EAX                        ; 0052da7d
    JNZ 0x0052d8fa                      ; 0052da7f
        ;   XREF to: 0052d8fa (CONDITIONAL_JUMP)  ; LAB_0052d8fa
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0052da85
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x3ecccccd                     ; 0052da8a
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0 ; 0052da8f
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0(float volume)
    ADD ESP,0x4                         ; 0052da94
    PUSH 0x594b07                       ; 0052da97 | = "trainext.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 0052da9c
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
    ADD ESP,0x4                         ; 0052daa1
    MOV [0x02dc9d5c],EAX                ; 0052daa4 | DAT_02dc9d5c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052daa9
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    JMP 0x0052d8fa                      ; 0052daae
        ;   XREF to: 0052d8fa (UNCONDITIONAL_JUMP)  ; LAB_0052d8fa
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0052dab3
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
        ;   Label: LAB_0052dab3
    FLD float ptr [ESP]                 ; 0052dab8
    FMUL double ptr [0x00594b46]        ; 0052dabb | DOUBLE_00594b46
    SUB ESP,0x4                         ; 0052dac1
    FSTP float ptr [ESP]                ; 0052dac4
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0 ; 0052dac7
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0(float volume)
    ADD ESP,0x4                         ; 0052dacc
    PUSH 0x594b14                       ; 0052dacf | = "railnoiz.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 0052dad4
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005265a0(char * filename)
    ADD ESP,0x4                         ; 0052dad9
    MOV [0x02dc9d58],EAX                ; 0052dadc | DAT_02dc9d58
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052dae1
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    JMP 0x0052d92e                      ; 0052dae6
        ;   XREF to: 0052d92e (UNCONDITIONAL_JUMP)  ; LAB_0052d92e
    FLD float ptr [ESP]                 ; 0052daeb
        ;   Label: LAB_0052daeb
    FMUL double ptr [0x00594b46]        ; 0052daee | DOUBLE_00594b46
    SUB ESP,0x4                         ; 0052daf4
    MOV EBX,dword ptr [0x02dc9d58]      ; 0052daf7 | DAT_02dc9d58
    FSTP float ptr [ESP]                ; 0052dafd
    PUSH EBX                            ; 0052db00
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005270d0 ; 0052db01
        ;   XREF to: 005270d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_005270d0(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 0052db06
    JMP 0x0052d92e                      ; 0052db09
        ;   XREF to: 0052d92e (UNCONDITIONAL_JUMP)  ; LAB_0052d92e
    MOV dword ptr [ESP + 0x104],EBX     ; 0052db0e
        ;   Label: LAB_0052db0e
    JMP 0x0052d9fe                      ; 0052db15
        ;   XREF to: 0052d9fe (UNCONDITIONAL_JUMP)  ; LAB_0052d9fe
    PUSH 0x40000000                     ; 0052db4b
        ;   Label: LAB_0052db4b
    MOV EAX,dword ptr [ESP + 0x108]     ; 0052db50
    PUSH 0xc0400000                     ; 0052db57
    MOV dword ptr [EAX],0x0             ; 0052db5c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0052db62
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x114],EAX     ; 0052db67
    FLD float ptr [ESP + 0x114]         ; 0052db6e
    ADD ESP,0x8                         ; 0052db75
    FMUL float ptr [ESP + 0x100]        ; 0052db78
    MOV EAX,dword ptr [ESP + 0x104]     ; 0052db7f
    FADD float ptr [0x02dc9464]         ; 0052db86 | DAT_02dc9464
    MOV dword ptr [EAX + 0x4],0x0       ; 0052db8c
    FSTP float ptr [EAX + 0x8]          ; 0052db93
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0052db96
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x3                            ; 0052db9b
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0 ; 0052db9d
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0(int channel_index)
    ADD ESP,0x4                         ; 0052dba2
    PUSH 0x2dc9d44                      ; 0052dba5 | DAT_02dc9d44
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090 ; 0052dbaa
        ;   XREF to: 00526090 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 0052dbaf
    FLD float ptr [ESP + 0x4]           ; 0052dbb2
    SUB ESP,0x8                         ; 0052dbb6
    LEA EAX,[ESP + 0x10]                ; 0052dbb9
    FSTP double ptr [ESP]               ; 0052dbbd
    PUSH EAX                            ; 0052dbc0
    PUSH 0x594b37                       ; 0052dbc1 | = "%s @ %g"
    LEA EAX,[ESP + 0x7c]                ; 0052dbc6
    PUSH EAX                            ; 0052dbca
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052dbcb
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 0052dbd0
    MOV EDX,dword ptr [ESP + 0x104]     ; 0052dbd3
    PUSH EDX                            ; 0052dbda
    LEA EAX,[ESP + 0x70]                ; 0052dbdb
    PUSH EAX                            ; 0052dbdf
    PUSH 0x0                            ; 0052dbe0
    MOV ECX,dword ptr [0x005bed68]      ; 0052dbe2 | DAT_005bed68
    PUSH ECX                            ; 0052dbe8
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90 ; 0052dbe9
        ;   XREF to: 0052ea90 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 0052dbee
    MOV EDX,dword ptr [ESP + 0x104]     ; 0052dbf1
    MOV dword ptr [EDX + 0xc],EAX       ; 0052dbf8
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052dbfb
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV ESP,EBP                         ; 0052dc00
    POP EBP                             ; 0052dc02
    POP EDI                             ; 0052dc03
    POP ESI                             ; 0052dc04
    POP EBX                             ; 0052dc05
    RET                                 ; 0052dc06
    PUSH 0x40a00000                     ; 0052dc48
        ;   Label: LAB_0052dc48
    PUSH 0x3f800000                     ; 0052dc4d
    LEA EDI,[ESP + 0x10]                ; 0052dc52
    MOV EBX,0x3f800000                  ; 0052dc56
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0052dc5b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x114],EAX     ; 0052dc60
    MOV ECX,0x41a00000                  ; 0052dc67
    FLD float ptr [ESP + 0x114]         ; 0052dc6c
    ADD ESP,0x8                         ; 0052dc73
    MOV ESI,0x5bef88                    ; 0052dc76
    MOV dword ptr [ESP + 0x100],ECX     ; 0052dc7b
    MOV ECX,0x19                        ; 0052dc82
    FSTP float ptr [0x02dc9d50]         ; 0052dc87 | DAT_02dc9d50
    MOV dword ptr [ESP + 0x4],EBX       ; 0052dc8d
    MOVSD.REP ES:EDI,ESI                ; 0052dc91
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0052dc93
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV EDX,EAX                         ; 0052dc98
    MOV EBX,0x5                         ; 0052dc9a
    SAR EDX,0x1f                        ; 0052dc9f
    IDIV EBX                            ; 0052dca2
    CMP EDX,0x4                         ; 0052dca4
    JA 0x0052db4b                       ; 0052dca7
        ;   XREF to: 0052db4b (CONDITIONAL_JUMP)  ; LAB_0052db4b
    JMP dword ptr [EDX*0x4 + 0x52d77c]  ; 0052dcad

