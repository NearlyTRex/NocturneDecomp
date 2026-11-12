; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_processDamage_FUN_004e0870(CGhoul *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_go_berzerk_005e3db8+1
;   TerminatedCString s_ghoul_die_wav_1_6_005e3dc5
;   TerminatedCString s_guul_flinch_d_005e3ddc
;   TerminatedCString s_ghoul_mad_wav_005e3dea
;   undefined4 DAT_005e3e01
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_shatter_FUN_00430c40
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e05b0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_getMotionList_FUN_00524a00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0
;   crt_math.c_round_FUN_005c03a0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0870
        ;   Label: core_ghoul.cpp_CGhoul_processDamage_FUN_004e0870
    PUSH ESI                            ; 004e0871
    PUSH EDI                            ; 004e0872
    PUSH EBP                            ; 004e0873
    MOV EBP,ESP                         ; 004e0874
    SUB ESP,0x68                        ; 004e0876
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e0879
    MOV EDI,dword ptr [EBP + 0x18]      ; 004e087c
    MOV EDX,dword ptr [EBX + 0xc2b8]    ; 004e087f
    PUSH EDX                            ; 004e0885
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004e0886
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0xc2c8]    ; 004e088b
    ADD ESP,0x4                         ; 004e0891
    TEST ECX,ECX                        ; 004e0894
    JNZ 0x004e0a4a                      ; 004e0896
        ;   XREF to: 004e0a4a (CONDITIONAL_JUMP)  ; LAB_004e0a4a
    CMP dword ptr [EDI + 0x30],0x6c     ; 004e089c
        ;   Label: LAB_004e089c
    JNZ 0x004e08ac                      ; 004e08a0
        ;   XREF to: 004e08ac (CONDITIONAL_JUMP)  ; LAB_004e08ac
    MOV dword ptr [EBX + 0xc2c4],0x40800000 ; 004e08a2
    PUSH EDI                            ; 004e08ac
        ;   Label: LAB_004e08ac
    PUSH EBX                            ; 004e08ad
    CALL core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e05b0 ; 004e08ae
        ;   XREF to: 004e05b0 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_CGhoul_processDismemberment_FUN_004e05b0(CGhoul * this_ptr, SDamageInfo * damage_info)
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004e08b3
    ADD ESP,0x8                         ; 004e08b9
    TEST EDX,EDX                        ; 004e08bc
    JZ 0x004e08ec                       ; 004e08be
        ;   XREF to: 004e08ec (CONDITIONAL_JUMP)  ; LAB_004e08ec
    MOV EAX,EDX                         ; 004e08c0
    PUSH EAX                            ; 004e08c2
    MOV EDX,dword ptr [EDX + 0x154]     ; 004e08c3
    CALL dword ptr [EDX + 0xf4]         ; 004e08c9
    ADD ESP,0x4                         ; 004e08cf
    CMP EAX,EBX                         ; 004e08d2
    JNZ 0x004e08ec                      ; 004e08d4
        ;   XREF to: 004e08ec (CONDITIONAL_JUMP)  ; LAB_004e08ec
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004e08d6
    PUSH EAX                            ; 004e08dc
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e08dd
    CALL dword ptr [EDX + 0xf0]         ; 004e08e3
    ADD ESP,0x4                         ; 004e08e9
    FLD float ptr [EDI + 0x4]           ; 004e08ec
        ;   Label: LAB_004e08ec
    FSUBR float ptr [EBX + 0x2538]      ; 004e08ef
    MOV EAX,dword ptr [EBX + 0xc2b4]    ; 004e08f5
    FSTP float ptr [EBX + 0x2538]       ; 004e08fb
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e0901
    TEST ECX,ECX                        ; 004e0908
    JZ 0x004e0abe                       ; 004e090a
        ;   XREF to: 004e0abe (CONDITIONAL_JUMP)  ; LAB_004e0abe
    FLD float ptr [EBX + 0x2538]        ; 004e0910
        ;   Label: LAB_004e0910
    FLDZ                                ; 004e0916
    LEA EDX,[EBX + 0x158]               ; 004e0918
    FCOMPP                              ; 004e091e
    FNSTSW AX                           ; 004e0920
    SAHF                                ; 004e0922
    JC 0x004e0b2a                       ; 004e0923
        ;   XREF to: 004e0b2a (CONDITIONAL_JUMP)  ; LAB_004e0b2a
    MOV EAX,dword ptr [EBX + 0xc258]    ; 004e0929
    MOV dword ptr [EBX + 0x2538],0x0    ; 004e092f
    TEST EAX,EAX                        ; 004e0939
    JNZ 0x004e0ac9                      ; 004e093b
        ;   XREF to: 004e0ac9 (CONDITIONAL_JUMP)  ; LAB_004e0ac9
    PUSH EDX                            ; 004e0941
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004e0942
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e0947
    ADD ESP,0x4                         ; 004e094a
    CMP EAX,0xa                         ; 004e094d
    JZ 0x004e0a39                       ; 004e0950
        ;   XREF to: 004e0a39 (CONDITIONAL_JUMP)  ; LAB_004e0a39
    CMP EAX,0x9                         ; 004e0956
    JZ 0x004e0a39                       ; 004e0959
        ;   XREF to: 004e0a39 (CONDITIONAL_JUMP)  ; LAB_004e0a39
    MOV EAX,dword ptr [EBX + 0xc2b4]    ; 004e095f
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e0965
    TEST EDX,EDX                        ; 004e096c
    JZ 0x004e0ae3                       ; 004e096e
        ;   XREF to: 004e0ae3 (CONDITIONAL_JUMP)  ; LAB_004e0ae3
    DEC dword ptr [EBX + 0xc284]        ; 004e0974
    MOV EAX,dword ptr [EBX + 0x3004]    ; 004e097a
        ;   Label: LAB_004e097a
    MOV ESI,0x6                         ; 004e0980
    TEST EAX,EAX                        ; 004e0985
    JLE 0x004e0b0b                      ; 004e0987
        ;   XREF to: 004e0b0b (CONDITIONAL_JUMP)  ; LAB_004e0b0b
    MOV EDX,dword ptr [EBX + 0x3004]    ; 004e098d
    XOR EAX,EAX                         ; 004e0993
    TEST EDX,EDX                        ; 004e0995
    JLE 0x004e09b2                      ; 004e0997
        ;   XREF to: 004e09b2 (CONDITIONAL_JUMP)  ; LAB_004e09b2
    MOV EDX,EBX                         ; 004e0999
    MOV ECX,dword ptr [EDX + 0x3008]    ; 004e099b
        ;   Label: LAB_004e099b
    CMP ECX,dword ptr [EBX + 0xc2b0]    ; 004e09a1
    JNZ 0x004e0aee                      ; 004e09a7
        ;   XREF to: 004e0aee (CONDITIONAL_JUMP)  ; LAB_004e0aee
    MOV ESI,0x8                         ; 004e09ad
        ;   Label: LAB_004e09ad
    PUSH 0x1                            ; 004e09b2
        ;   Label: LAB_004e09b2
    PUSH ESI                            ; 004e09b4
    LEA EAX,[EBX + 0x158]               ; 004e09b5
    PUSH EAX                            ; 004e09bb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004e09bc
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e09c1
    MOV ESI,dword ptr [EBX + 0xc2c0]    ; 004e09c4
    PUSH ESI                            ; 004e09ca
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004e09cb
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004e09d0
    TEST EAX,EAX                        ; 004e09d3
    JNZ 0x004e09ef                      ; 004e09d5
        ;   XREF to: 004e09ef (CONDITIONAL_JUMP)  ; LAB_004e09ef
    PUSH 0x5e3dc5                       ; 004e09d7 | = "ghoul-die-!-?.wav @1.6"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e09dc
    PUSH EBX                            ; 004e09e2
    CALL dword ptr [EAX + 0x2c]         ; 004e09e3
    ADD ESP,0x8                         ; 004e09e6
    MOV dword ptr [EBX + 0xc2c0],EAX    ; 004e09e9
    PUSH 0x41200000                     ; 004e09ef
        ;   Label: LAB_004e09ef
    PUSH 0x40800000                     ; 004e09f4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004e09f9
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 004e09fe
    FLD float ptr [EBP + -0x4]          ; 004e0a01
    FMUL double ptr [0x005e3e01]        ; 004e0a04 | DAT_005e3e01
    ADD ESP,0x8                         ; 004e0a0a
    MOV dword ptr [EBX + 0xc274],0xa0000 ; 004e0a0d
    PUSH 0x41c80000                     ; 004e0a17
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e0a1c
    PUSH 0x32                           ; 004e0a22
    CALL crt_math.c_round_FUN_005c03a0  ; 004e0a24
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EBX                            ; 004e0a29
    FISTP dword ptr [EBX + 0xc270]      ; 004e0a2a
    CALL dword ptr [EAX + 0xa8]         ; 004e0a30
    ADD ESP,0xc                         ; 004e0a36
    PUSH EDI                            ; 004e0a39
        ;   Label: LAB_004e0a39
    PUSH EBX                            ; 004e0a3a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 004e0a3b
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e0a40
    MOV ESP,EBP                         ; 004e0a43
    POP EBP                             ; 004e0a45
    POP EDI                             ; 004e0a46
    POP ESI                             ; 004e0a47
    POP EBX                             ; 004e0a48
    RET                                 ; 004e0a49
    LEA EAX,[EBX + 0x158]               ; 004e0a4a
        ;   Label: LAB_004e0a4a
    PUSH EAX                            ; 004e0a50
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004e0a51
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e0a56
    ADD ESP,0x4                         ; 004e0a59
    TEST EAX,EAX                        ; 004e0a5c
    JNZ 0x004e089c                      ; 004e0a5e
        ;   XREF to: 004e089c (CONDITIONAL_JUMP)  ; LAB_004e089c
    MOV dword ptr [EBX + 0xc2cc],0x41f00000 ; 004e0a64
    MOV dword ptr [EBX + 0xc2c8],EAX    ; 004e0a6e
    LEA EAX,[EBX + 0xc2d8]              ; 004e0a74
    MOV dword ptr [EBX + 0xc2d0],0x1    ; 004e0a7a
    LEA EDX,[EBX + 0x20]                ; 004e0a84
    MOV dword ptr [EBX + 0xc2d4],0x3f800000 ; 004e0a87
    CMP EAX,EDX                         ; 004e0a91
    JZ 0x004e0aa5                       ; 004e0a93
        ;   XREF to: 004e0aa5 (CONDITIONAL_JUMP)  ; LAB_004e0aa5
    MOV ECX,dword ptr [EDX]             ; 004e0a95
    MOV dword ptr [EAX],ECX             ; 004e0a97
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e0a99
    MOV dword ptr [EAX + 0x4],ECX       ; 004e0a9c
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e0a9f
    MOV dword ptr [EAX + 0x8],ECX       ; 004e0aa2
    PUSH 0x5e3db9                       ; 004e0aa5 | s_go_berzerk_005e3db8+1
        ;   Label: LAB_004e0aa5
    MOV ESI,dword ptr [0x00611100]      ; 004e0aaa | g_CConsolePtr
    PUSH ESI                            ; 004e0ab0 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004e0ab1
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e0ab6
    JMP 0x004e089c                      ; 004e0ab9
        ;   XREF to: 004e089c (UNCONDITIONAL_JUMP)  ; LAB_004e089c
    MOV dword ptr [EBX + 0x2538],ECX    ; 004e0abe
        ;   Label: LAB_004e0abe
    JMP 0x004e0910                      ; 004e0ac4
        ;   XREF to: 004e0910 (UNCONDITIONAL_JUMP)  ; LAB_004e0910
    PUSH EBX                            ; 004e0ac9
        ;   Label: LAB_004e0ac9
    CALL core_charactr.cpp_CCharacter_shatter_FUN_00430c40 ; 004e0aca
        ;   XREF to: 00430c40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_shatter_FUN_00430c40(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e0acf
    PUSH EDI                            ; 004e0ad2
    PUSH EBX                            ; 004e0ad3
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 004e0ad4
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e0ad9
    MOV ESP,EBP                         ; 004e0adc
    POP EBP                             ; 004e0ade
    POP EDI                             ; 004e0adf
    POP ESI                             ; 004e0ae0
    POP EBX                             ; 004e0ae1
    RET                                 ; 004e0ae2
    MOV dword ptr [EBX + 0xc284],EDX    ; 004e0ae3
        ;   Label: LAB_004e0ae3
    JMP 0x004e097a                      ; 004e0ae9
        ;   XREF to: 004e097a (UNCONDITIONAL_JUMP)  ; LAB_004e097a
    JZ 0x004e09ad                       ; 004e0aee
        ;   XREF to: 004e09ad (CONDITIONAL_JUMP)  ; LAB_004e09ad
        ;   Label: LAB_004e0aee
    INC EAX                             ; 004e0af4
    MOV ECX,dword ptr [EBX + 0x3004]    ; 004e0af5
    ADD EDX,0x38                        ; 004e0afb
    CMP EAX,ECX                         ; 004e0afe
    JL 0x004e099b                       ; 004e0b00
        ;   XREF to: 004e099b (CONDITIONAL_JUMP)  ; LAB_004e099b
    JMP 0x004e09b2                      ; 004e0b06
        ;   XREF to: 004e09b2 (UNCONDITIONAL_JUMP)  ; LAB_004e09b2
    PUSH 0x3f000000                     ; 004e0b0b
        ;   Label: LAB_004e0b0b
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004e0b10
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004e0b15
    TEST EAX,EAX                        ; 004e0b18
    JZ 0x004e09b2                       ; 004e0b1a
        ;   XREF to: 004e09b2 (CONDITIONAL_JUMP)  ; LAB_004e09b2
    MOV ESI,0x7                         ; 004e0b20
    JMP 0x004e09b2                      ; 004e0b25
        ;   XREF to: 004e09b2 (UNCONDITIONAL_JUMP)  ; LAB_004e09b2
    PUSH EDX                            ; 004e0b2a
        ;   Label: LAB_004e0b2a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004e0b2b
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV ECX,dword ptr [EAX + 0x24]      ; 004e0b30
    ADD ESP,0x4                         ; 004e0b33
    MOV EDX,ECX                         ; 004e0b36
    XOR EAX,EAX                         ; 004e0b38
    CMP ECX,0x2                         ; 004e0b3a
    JNZ 0x004e0b44                      ; 004e0b3d
        ;   XREF to: 004e0b44 (CONDITIONAL_JUMP)  ; LAB_004e0b44
    MOV EAX,0x1                         ; 004e0b3f
    CMP EDX,0xc                         ; 004e0b44
        ;   Label: LAB_004e0b44
    JNZ 0x004e0b4e                      ; 004e0b47
        ;   XREF to: 004e0b4e (CONDITIONAL_JUMP)  ; LAB_004e0b4e
    MOV EAX,0x1                         ; 004e0b49
    CMP EDX,0xb                         ; 004e0b4e
        ;   Label: LAB_004e0b4e
    JNZ 0x004e0b58                      ; 004e0b51
        ;   XREF to: 004e0b58 (CONDITIONAL_JUMP)  ; LAB_004e0b58
    MOV EAX,0x1                         ; 004e0b53
    TEST EDX,EDX                        ; 004e0b58
        ;   Label: LAB_004e0b58
    JNZ 0x004e0bc8                      ; 004e0b5a
        ;   XREF to: 004e0bc8 (CONDITIONAL_JUMP)  ; LAB_004e0bc8
    PUSH 0x1                            ; 004e0b5c
        ;   Label: LAB_004e0b5c
    PUSH 0x3f000000                     ; 004e0b5e
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004e0b63
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004e0b68
    TEST EAX,EAX                        ; 004e0b6b
    SETZ AL                             ; 004e0b6d
    AND EAX,0xff                        ; 004e0b70
    ADD EAX,0x3                         ; 004e0b75
    PUSH EAX                            ; 004e0b78
    LEA EAX,[EBX + 0x158]               ; 004e0b79
    PUSH EAX                            ; 004e0b7f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004e0b80
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e0b85
    MOV ESI,dword ptr [EBX + 0xc2bc]    ; 004e0b88
        ;   Label: LAB_004e0b88
    PUSH ESI                            ; 004e0b8e
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004e0b8f
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004e0b94
    TEST EAX,EAX                        ; 004e0b97
    JNZ 0x004e0a39                      ; 004e0b99
        ;   XREF to: 004e0a39 (CONDITIONAL_JUMP)  ; LAB_004e0a39
    PUSH 0x5e3dea                       ; 004e0b9f | = "ghoul-mad-!-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e0ba4
    PUSH EBX                            ; 004e0baa
    CALL dword ptr [EAX + 0x2c]         ; 004e0bab
    ADD ESP,0x8                         ; 004e0bae
    MOV dword ptr [EBX + 0xc2bc],EAX    ; 004e0bb1
    PUSH EDI                            ; 004e0bb7
    PUSH EBX                            ; 004e0bb8
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 004e0bb9
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e0bbe
    MOV ESP,EBP                         ; 004e0bc1
    POP EBP                             ; 004e0bc3
    POP EDI                             ; 004e0bc4
    POP ESI                             ; 004e0bc5
    POP EBX                             ; 004e0bc6
    RET                                 ; 004e0bc7
    TEST EAX,EAX                        ; 004e0bc8
        ;   Label: LAB_004e0bc8
    JNZ 0x004e0b5c                      ; 004e0bca
        ;   XREF to: 004e0b5c (CONDITIONAL_JUMP)  ; LAB_004e0b5c
    PUSH 0x3e800000                     ; 004e0bcc
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004e0bd1
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004e0bd6
    TEST EAX,EAX                        ; 004e0bd9
    JNZ 0x004e0b5c                      ; 004e0bdb
        ;   XREF to: 004e0b5c (CONDITIONAL_JUMP)  ; LAB_004e0b5c
    PUSH 0x2                            ; 004e0be1
    PUSH 0x1                            ; 004e0be3
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004e0be5
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 004e0bea
    PUSH EAX                            ; 004e0bed
    PUSH 0x5e3ddc                       ; 004e0bee | = "guul flinch%d"
    LEA EAX,[EBP + -0x68]               ; 004e0bf3
    PUSH EAX                            ; 004e0bf6
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004e0bf7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e0bfc
    PUSH 0x1                            ; 004e0bff
    LEA EAX,[EBP + -0x68]               ; 004e0c01
    PUSH EAX                            ; 004e0c04
    LEA EAX,[EBX + 0x158]               ; 004e0c05
    PUSH EAX                            ; 004e0c0b
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_00524a00 ; 004e0c0c
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e0c11
    PUSH EAX                            ; 004e0c14
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0 ; 004e0c15
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    MOV dword ptr [EBX + 0xc27c],0x3f800000 ; 004e0c1a
    ADD ESP,0xc                         ; 004e0c24
    MOV dword ptr [EBX + 0xc280],EAX    ; 004e0c27
    JMP 0x004e0b88                      ; 004e0c2d
        ;   XREF to: 004e0b88 (UNCONDITIONAL_JUMP)  ; LAB_004e0b88

