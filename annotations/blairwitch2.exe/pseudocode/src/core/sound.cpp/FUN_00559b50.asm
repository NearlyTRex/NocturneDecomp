; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_sound_cpp_FUN_00559b50(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005ea870
;   undefined4 DAT_005ea874
;   undefined4 DAT_005ea88c
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   void* PTR_DAT_0061c060 = 005ea81f
;   void* PTR_DAT_0061c064 = 005ea823
;   undefined4 DAT_0061c068
;   undefined4 DAT_0264b2a4
;   undefined4 DAT_0264bb84
;   undefined4 DAT_0264bb88
;   undefined4 DAT_0264bb8c
;   undefined4 DAT_0264bb90
;   undefined4 DAT_0264bb94
;   undefined4 DAT_0264bb98
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00537e90
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10
;   core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80
;   crt_stdlib.c_rand_FUN_005b849c
;   crt_string.c__stricmp_FUN_005b8130
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxChannel_FUN_00550310
;   sound_sndmain.cpp_setNextSfxFlags_FUN_00550380
;   sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559b50
        ;   Label: core_sound.cpp_FUN_00559b50
    PUSH ESI                            ; 00559b51
    PUSH EDI                            ; 00559b52
    PUSH EBP                            ; 00559b53
    MOV EBP,ESP                         ; 00559b54
    SUB ESP,0x124                       ; 00559b56
    AND ESP,0xfffffff8                  ; 00559b5c
    MOV EAX,[0x00616494]                ; 00559b5f | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 00559b64
    MOV EDX,dword ptr [EAX + 0x25c]     ; 00559b6a
    FSTP float ptr [ESP + 0x114]        ; 00559b70
    TEST EDX,EDX                        ; 00559b77
    JNZ 0x00559e24                      ; 00559b79
        ;   XREF to: 00559e24 (CONDITIONAL_JUMP)  ; LAB_00559e24
    MOV EAX,[0x0061b5a8]                ; 00559b7f | g_CDemonSetPtr
    MOV ECX,dword ptr [0x0264bb94]      ; 00559b84 | DAT_0264bb94
    CMP ECX,dword ptr [EAX + 0x15aeb8]  ; 00559b8a
    JZ 0x00559c4e                       ; 00559b90
        ;   XREF to: 00559c4e (CONDITIONAL_JUMP)  ; LAB_00559c4e
    PUSH EAX                            ; 00559b96
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00559b97
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00559b9c
    MOV EBX,dword ptr [0x0061b5a8]      ; 00559b9f | g_CDemonSetPtr
    PUSH EBX                            ; 00559ba5
    LEA EDI,[ESP + 0xe0]                ; 00559ba6
    MOV ESI,0x264b29c                   ; 00559bad
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00537e90 ; 00559bb2
        ;   XREF to: 00537e90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00537e90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00559bb7
    MOVSD ES:EDI,ESI                    ; 00559bba
    MOVSD ES:EDI,ESI                    ; 00559bbb
    MOVSD ES:EDI,ESI                    ; 00559bbc
    FLD float ptr [ESP + 0xe0]          ; 00559bbd
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00559bc4
    LEA EDI,[ESP + 0xe8]                ; 00559bcb
    LEA ESI,[ESP + 0xd0]                ; 00559bd2
    MOV dword ptr [ESP + 0xd0],EAX      ; 00559bd9
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00559be0
    FADD float ptr [0x005ea870]         ; 00559be7 | DAT_005ea870
    MOV dword ptr [ESP + 0xd8],EAX      ; 00559bed
    LEA EAX,[ESP + 0xe8]                ; 00559bf4
    FSTP float ptr [ESP + 0xd4]         ; 00559bfb
    PUSH EAX                            ; 00559c02
    LEA EAX,[ESP + 0xe0]                ; 00559c03
    MOVSD ES:EDI,ESI                    ; 00559c0a
    MOVSD ES:EDI,ESI                    ; 00559c0b
    MOVSD ES:EDI,ESI                    ; 00559c0c
    PUSH EAX                            ; 00559c0d
    MOV ESI,dword ptr [0x0061b5a8]      ; 00559c0e | g_CDemonSetPtr
    PUSH ESI                            ; 00559c14
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10 ; 00559c15
        ;   XREF to: 00535e10 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00559c1a
    TEST EAX,EAX                        ; 00559c1d
    JZ 0x00559e3f                       ; 00559c1f
        ;   XREF to: 00559e3f (CONDITIONAL_JUMP)  ; LAB_00559e3f
    MOV dword ptr [0x0061c060],0x5ea829 ; 00559c25 | PTR_DAT_0061c060
    MOV EDX,dword ptr [0x0061b5a8]      ; 00559c2f | g_CDemonSetPtr
        ;   Label: LAB_00559c2f
    PUSH EDX                            ; 00559c35
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 00559c36
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    MOV EAX,[0x0061b5a8]                ; 00559c3b | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 00559c40
    ADD ESP,0x4                         ; 00559c46
    MOV [0x0264bb94],EAX                ; 00559c49 | DAT_0264bb94
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00559c4e
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
        ;   Label: LAB_00559c4e
    PUSH 0x1                            ; 00559c53
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_00550380 ; 00559c55
        ;   XREF to: 00550380 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlags_FUN_00550380(uint flags)
    ADD ESP,0x4                         ; 00559c5a
    PUSH 0x3                            ; 00559c5d
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00550310 ; 00559c5f
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00550310(int channel_index)
    ADD ESP,0x4                         ; 00559c64
    PUSH 0x5ea831                       ; 00559c67
    MOV ESI,dword ptr [0x0061c060]      ; 00559c6c | PTR_DAT_0061c060
    PUSH ESI                            ; 00559c72
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00559c73
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00559c78
    TEST EAX,EAX                        ; 00559c7b
    JNZ 0x00559e4e                      ; 00559c7d
        ;   XREF to: 00559e4e (CONDITIONAL_JUMP)  ; LAB_00559e4e
    MOV EDX,dword ptr [0x0264bb9c]      ; 00559c83 | DAT_0264bb9c
    PUSH EDX                            ; 00559c89
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00559c8a
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    MOV ECX,0x3ecccccd                  ; 00559c8f
    ADD ESP,0x4                         ; 00559c94
    MOV dword ptr [ESP],ECX             ; 00559c97
    MOV EBX,dword ptr [0x0264bb98]      ; 00559c9a | DAT_0264bb98
        ;   Label: LAB_00559c9a
    PUSH EBX                            ; 00559ca0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 00559ca1
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00559ca6
    TEST EAX,EAX                        ; 00559ca9
    JZ 0x00559e9b                       ; 00559cab
        ;   XREF to: 00559e9b (CONDITIONAL_JUMP)  ; LAB_00559e9b
    MOV ESI,dword ptr [0x0061c060]      ; 00559cb1 | PTR_DAT_0061c060
    PUSH ESI                            ; 00559cb7
    MOV EDI,dword ptr [0x0061c064]      ; 00559cb8 | PTR_DAT_0061c064
    PUSH EDI                            ; 00559cbe
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00559cbf
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00559cc4
    TEST EAX,EAX                        ; 00559cc7
    JNZ 0x00559ed3                      ; 00559cc9
        ;   XREF to: 00559ed3 (CONDITIONAL_JUMP)  ; LAB_00559ed3
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 00559ccf
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
        ;   Label: LAB_00559ccf
    MOV EBX,0x41f00000                  ; 00559cd4
    MOV EAX,[0x0061c060]                ; 00559cd9 | PTR_DAT_0061c060
    XOR EDX,EDX                         ; 00559cde
    MOV [0x0061c064],EAX                ; 00559ce0 | PTR_DAT_0061c064
    MOV dword ptr [0x0264bb84],EDX      ; 00559ce5 | DAT_0264bb84
    MOV dword ptr [0x0264bb88],EDX      ; 00559ceb | DAT_0264bb88
    MOV dword ptr [0x0264bb8c],EBX      ; 00559cf1 | DAT_0264bb8c
    MOV dword ptr [ESP + 0x110],EDX     ; 00559cf7
    MOV dword ptr [ESP + 0x11c],EDX     ; 00559cfe
    MOV EBX,0x264bae4                   ; 00559d05
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00559d0a
        ;   Label: LAB_00559d0a
    SHL EAX,0x4                         ; 00559d11
    MOV EDX,dword ptr [EAX + 0x264baf0] ; 00559d14
    PUSH EDX                            ; 00559d1a
    MOV dword ptr [ESP + 0x11c],EAX     ; 00559d1b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 00559d22
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00559d27
    TEST EAX,EAX                        ; 00559d2a
    JZ 0x00559ef5                       ; 00559d2c
        ;   XREF to: 00559ef5 (CONDITIONAL_JUMP)  ; LAB_00559ef5
    FLD float ptr [ESP + 0x114]         ; 00559d32
    FLD float ptr [0x0264bb84]          ; 00559d39 | DAT_0264bb84
    FMUL ST1                            ; 00559d3f
    FLD float ptr [0x0264bb88]          ; 00559d41 | DAT_0264bb88
    FMUL ST2                            ; 00559d47
    FLD float ptr [0x0264bb8c]          ; 00559d49 | DAT_0264bb8c
    FMULP ST3                           ; 00559d4f
    LEA EDI,[ESP + 0x100]               ; 00559d51
    LEA ESI,[ESP + 0xf4]                ; 00559d58
    FXCH                                ; 00559d5f
    FSTP float ptr [ESP + 0xf4]         ; 00559d61
    FSTP float ptr [ESP + 0xf8]         ; 00559d68
    FSTP float ptr [ESP + 0xfc]         ; 00559d6f
    MOVSD ES:EDI,ESI                    ; 00559d76
    MOVSD ES:EDI,ESI                    ; 00559d77
    MOVSD ES:EDI,ESI                    ; 00559d78
    MOV EAX,dword ptr [ESP + 0x118]     ; 00559d79
    FLD float ptr [EBX]                 ; 00559d80
    FLD float ptr [EBX + 0x4]           ; 00559d82
    FLD float ptr [EBX + 0x8]           ; 00559d85
    FXCH ST2                            ; 00559d88
    FADD float ptr [ESP + 0x100]        ; 00559d8a
    FXCH                                ; 00559d91
    FADD float ptr [ESP + 0x104]        ; 00559d93
    FXCH ST2                            ; 00559d9a
    FADD float ptr [ESP + 0x108]        ; 00559d9c
    FXCH                                ; 00559da3
    FSTP float ptr [EBX]                ; 00559da5
    FXCH                                ; 00559da7
    FSTP float ptr [EBX + 0x4]          ; 00559da9
    FSTP float ptr [EBX + 0x8]          ; 00559dac
    FLD float ptr [EAX + 0x264baec]     ; 00559daf
    FABS                                ; 00559db5
    FCOMP double ptr [0x005ea88c]       ; 00559db7 | DAT_005ea88c
    FNSTSW AX                           ; 00559dbd
    SAHF                                ; 00559dbf
    JBE 0x00559dd8                      ; 00559dc0
        ;   XREF to: 00559dd8 (CONDITIONAL_JUMP)  ; LAB_00559dd8
    MOV EAX,dword ptr [ESP + 0x118]     ; 00559dc2
    MOV ECX,dword ptr [EAX + 0x264baf0] ; 00559dc9
    PUSH ECX                            ; 00559dcf
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00559dd0
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00559dd5
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00559dd8
        ;   Label: LAB_00559dd8
    INC ESI                             ; 00559ddf
    ADD EBX,0x10                        ; 00559de0
    MOV dword ptr [ESP + 0x11c],ESI     ; 00559de3
    CMP ESI,0xa                         ; 00559dea
    JL 0x00559d0a                       ; 00559ded
        ;   XREF to: 00559d0a (CONDITIONAL_JUMP)  ; LAB_00559d0a
    FLD float ptr [0x0264bb90]          ; 00559df3 | DAT_0264bb90
    FSUB float ptr [ESP + 0x114]        ; 00559df9
    FST float ptr [0x0264bb90]          ; 00559e00 | DAT_0264bb90
    FLDZ                                ; 00559e06
    FCOMPP                              ; 00559e08
    FNSTSW AX                           ; 00559e0a
    SAHF                                ; 00559e0c
    JC 0x00559e1d                       ; 00559e0d
        ;   XREF to: 00559e1d (CONDITIONAL_JUMP)  ; LAB_00559e1d
    CMP dword ptr [ESP + 0x110],0x0     ; 00559e0f
    JNZ 0x0055a030                      ; 00559e17
        ;   XREF to: 0055a030 (CONDITIONAL_JUMP)  ; LAB_0055a030
    MOV ESP,EBP                         ; 00559e1d
        ;   Label: LAB_00559e1d
    POP EBP                             ; 00559e1f
    POP EDI                             ; 00559e20
    POP ESI                             ; 00559e21
    POP EBX                             ; 00559e22
    RET                                 ; 00559e23
    MOV EBX,0x5ea825                    ; 00559e24
        ;   Label: LAB_00559e24
    MOV ECX,0xffffffff                  ; 00559e29
    MOV dword ptr [0x0061c060],EBX      ; 00559e2e | PTR_DAT_0061c060
    MOV dword ptr [0x0264bb94],ECX      ; 00559e34 | DAT_0264bb94
    JMP 0x00559c4e                      ; 00559e3a
        ;   XREF to: 00559c4e (UNCONDITIONAL_JUMP)  ; LAB_00559c4e
    MOV dword ptr [0x0061c060],0x5ea82d ; 00559e3f | PTR_DAT_0061c060
        ;   Label: LAB_00559e3f
    JMP 0x00559c2f                      ; 00559e49
        ;   XREF to: 00559c2f (UNCONDITIONAL_JUMP)  ; LAB_00559c2f
    MOV EAX,[0x0264bb9c]                ; 00559e4e | DAT_0264bb9c
        ;   Label: LAB_00559e4e
    PUSH EAX                            ; 00559e53
    MOV EDI,0x3f333333                  ; 00559e54
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 00559e59
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    MOV dword ptr [ESP + 0x4],EDI       ; 00559e5e
    ADD ESP,0x4                         ; 00559e62
    TEST EAX,EAX                        ; 00559e65
    JNZ 0x00559c9a                      ; 00559e67
        ;   XREF to: 00559c9a (CONDITIONAL_JUMP)  ; LAB_00559c9a
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00559e6d
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x3ecccccd                     ; 00559e72
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 00559e77
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 00559e7c
    PUSH 0x5ea835                       ; 00559e7f
    CALL sound_sndmain.cpp_startSfx_FUN_005506b0 ; 00559e84
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005506b0(char * filename)
    ADD ESP,0x4                         ; 00559e89
    MOV [0x0264bb9c],EAX                ; 00559e8c | DAT_0264bb9c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 00559e91
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    JMP 0x00559c9a                      ; 00559e96
        ;   XREF to: 00559c9a (UNCONDITIONAL_JUMP)  ; LAB_00559c9a
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00559e9b
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
        ;   Label: LAB_00559e9b
    FLD float ptr [ESP]                 ; 00559ea0
    FMUL double ptr [0x005ea874]        ; 00559ea3 | DAT_005ea874
    SUB ESP,0x4                         ; 00559ea9
    FSTP float ptr [ESP]                ; 00559eac
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 00559eaf
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 00559eb4
    PUSH 0x5ea842                       ; 00559eb7
    CALL sound_sndmain.cpp_startSfx_FUN_005506b0 ; 00559ebc
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005506b0(char * filename)
    ADD ESP,0x4                         ; 00559ec1
    MOV [0x0264bb98],EAX                ; 00559ec4 | DAT_0264bb98
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 00559ec9
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    JMP 0x00559ccf                      ; 00559ece
        ;   XREF to: 00559ccf (UNCONDITIONAL_JUMP)  ; LAB_00559ccf
    FLD float ptr [ESP]                 ; 00559ed3
        ;   Label: LAB_00559ed3
    FMUL double ptr [0x005ea874]        ; 00559ed6 | DAT_005ea874
    SUB ESP,0x4                         ; 00559edc
    MOV EAX,[0x0264bb98]                ; 00559edf | DAT_0264bb98
    FSTP float ptr [ESP]                ; 00559ee4
    PUSH EAX                            ; 00559ee7
    CALL sound_sndmain.cpp_setSfxVolume_FUN_00550f20 ; 00559ee8
        ;   XREF to: 00550f20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_00550f20(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 00559eed
    JMP 0x00559ccf                      ; 00559ef0
        ;   XREF to: 00559ccf (UNCONDITIONAL_JUMP)  ; LAB_00559ccf
    MOV dword ptr [ESP + 0x110],EBX     ; 00559ef5
        ;   Label: LAB_00559ef5
    JMP 0x00559dd8                      ; 00559efc
        ;   XREF to: 00559dd8 (UNCONDITIONAL_JUMP)  ; LAB_00559dd8
    PUSH 0x40000000                     ; 00559f33
        ;   Label: LAB_00559f33
    MOV EAX,dword ptr [ESP + 0x114]     ; 00559f38
    PUSH 0xc0400000                     ; 00559f3f
    MOV dword ptr [EAX],0x0             ; 00559f44
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00559f4a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x128],EAX     ; 00559f4f
    FLD float ptr [ESP + 0x128]         ; 00559f56
    ADD ESP,0x8                         ; 00559f5d
    FMUL float ptr [ESP + 0x10c]        ; 00559f60
    MOV EAX,dword ptr [ESP + 0x110]     ; 00559f67
    FADD float ptr [0x0264b2a4]         ; 00559f6e | DAT_0264b2a4
    MOV dword ptr [EAX + 0x4],0x0       ; 00559f74
    FSTP float ptr [EAX + 0x8]          ; 00559f7b
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00559f7e
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x3                            ; 00559f83
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00550310 ; 00559f85
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00550310(int channel_index)
    ADD ESP,0x4                         ; 00559f8a
    PUSH 0x264bb84                      ; 00559f8d
    CALL sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210 ; 00559f92
        ;   XREF to: 00550210 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210(CVector3f * velocity_source_ptr)
    ADD ESP,0x4                         ; 00559f97
    FLD float ptr [ESP + 0x4]           ; 00559f9a
    SUB ESP,0x8                         ; 00559f9e
    LEA EAX,[ESP + 0x74]                ; 00559fa1
    FSTP double ptr [ESP]               ; 00559fa5
    PUSH EAX                            ; 00559fa8
    PUSH 0x5ea865                       ; 00559fa9
    LEA EAX,[ESP + 0x18]                ; 00559fae
    PUSH EAX                            ; 00559fb2
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00559fb3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x14                        ; 00559fb8
    MOV EAX,dword ptr [ESP + 0x110]     ; 00559fbb
    PUSH EAX                            ; 00559fc2
    LEA EAX,[ESP + 0xc]                 ; 00559fc3
    PUSH EAX                            ; 00559fc7
    PUSH 0x0                            ; 00559fc8
    MOV EDX,dword ptr [0x0061c068]      ; 00559fca | DAT_0061c068
    PUSH EDX                            ; 00559fd0
    CALL core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80 ; 00559fd1
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker)
    ADD ESP,0x10                        ; 00559fd6
    MOV EDX,dword ptr [ESP + 0x110]     ; 00559fd9
    MOV dword ptr [EDX + 0xc],EAX       ; 00559fe0
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 00559fe3
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV ESP,EBP                         ; 00559fe8
    POP EBP                             ; 00559fea
    POP EDI                             ; 00559feb
    POP ESI                             ; 00559fec
    POP EBX                             ; 00559fed
    RET                                 ; 00559fee
    PUSH 0x40a00000                     ; 0055a030
        ;   Label: LAB_0055a030
    PUSH 0x3f800000                     ; 0055a035
    LEA EDI,[ESP + 0x74]                ; 0055a03a
    MOV ESI,0x61c288                    ; 0055a03e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0055a043
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x128],EAX     ; 0055a048
    MOV ECX,0x19                        ; 0055a04f
    FLD float ptr [ESP + 0x128]         ; 0055a054
    ADD ESP,0x8                         ; 0055a05b
    MOV EDX,0x41a00000                  ; 0055a05e
    MOVSD.REP ES:EDI,ESI                ; 0055a063
    FSTP float ptr [0x0264bb90]         ; 0055a065 | DAT_0264bb90
    MOV ECX,0x3f800000                  ; 0055a06b
    MOV dword ptr [ESP + 0x10c],EDX     ; 0055a070
    MOV dword ptr [ESP + 0x4],ECX       ; 0055a077
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0055a07b
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 0055a080
    MOV EBX,0x5                         ; 0055a082
    SAR EDX,0x1f                        ; 0055a087
    IDIV EBX                            ; 0055a08a
    CMP EDX,0x4                         ; 0055a08c
    JA 0x00559f33                       ; 0055a08f
        ;   XREF to: 00559f33 (CONDITIONAL_JUMP)  ; LAB_00559f33
    JMP dword ptr [EDX*0x4 + 0x559b34]  ; 0055a095

