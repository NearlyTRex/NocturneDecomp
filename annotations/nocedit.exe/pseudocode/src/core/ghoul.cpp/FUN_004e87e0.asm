; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ghoul_cpp_FUN_004e87e0(void)
;
; Local Variables:
; undefined1       Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_go_berzerk_0062de82
;   TerminatedCString s_ghoul_die_wav_1_6_0062de8e
;   TerminatedCString s_guul_flinch_d_0062dea5
;   TerminatedCString s_ghoul_mad_wav_0062deb3
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_FUN_0042b8e0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_ghoul.cpp_FUN_004e8520
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e87e0
        ;   Label: core_ghoul.cpp_FUN_004e87e0
    PUSH ESI                            ; 004e87e1
    PUSH EDI                            ; 004e87e2
    PUSH EBP                            ; 004e87e3
    MOV EBP,ESP                         ; 004e87e4
    SUB ESP,0x68                        ; 004e87e6
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e87e9
    MOV EDI,dword ptr [EBP + 0x18]      ; 004e87ec
    MOV EDX,dword ptr [EBX + 0xbf0c]    ; 004e87ef
    PUSH EDX                            ; 004e87f5
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004e87f6
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV ECX,dword ptr [EBX + 0xbf1c]    ; 004e87fb
    ADD ESP,0x4                         ; 004e8801
    TEST ECX,ECX                        ; 004e8804
    JNZ 0x004e89ba                      ; 004e8806
        ;   XREF to: 004e89ba (CONDITIONAL_JUMP)  ; LAB_004e89ba
    CMP dword ptr [EDI + 0x30],0x6c     ; 004e880c
        ;   Label: LAB_004e880c
    JNZ 0x004e881c                      ; 004e8810
        ;   XREF to: 004e881c (CONDITIONAL_JUMP)  ; LAB_004e881c
    MOV dword ptr [EBX + 0xbf18],0x40800000 ; 004e8812
    PUSH EDI                            ; 004e881c
        ;   Label: LAB_004e881c
    PUSH EBX                            ; 004e881d
    CALL core_ghoul.cpp_FUN_004e8520    ; 004e881e
        ;   XREF to: 004e8520 (UNCONDITIONAL_CALL)  ; void core_ghoul.cpp_FUN_004e8520()
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 004e8823
    ADD ESP,0x8                         ; 004e8829
    TEST EDX,EDX                        ; 004e882c
    JZ 0x004e885c                       ; 004e882e
        ;   XREF to: 004e885c (CONDITIONAL_JUMP)  ; LAB_004e885c
    MOV EAX,EDX                         ; 004e8830
    PUSH EAX                            ; 004e8832
    MOV EDX,dword ptr [EDX + 0x154]     ; 004e8833
    CALL dword ptr [EDX + 0x108]        ; 004e8839
    ADD ESP,0x4                         ; 004e883f
    CMP EAX,EBX                         ; 004e8842
    JNZ 0x004e885c                      ; 004e8844
        ;   XREF to: 004e885c (CONDITIONAL_JUMP)  ; LAB_004e885c
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 004e8846
    PUSH EAX                            ; 004e884c
    MOV EDX,dword ptr [EAX + 0x154]     ; 004e884d
    CALL dword ptr [EDX + 0x104]        ; 004e8853
    ADD ESP,0x4                         ; 004e8859
    FLD float ptr [EDI + 0x4]           ; 004e885c
        ;   Label: LAB_004e885c
    FSUBR float ptr [EBX + 0x243c]      ; 004e885f
    MOV EAX,dword ptr [EBX + 0xbf08]    ; 004e8865
    FSTP float ptr [EBX + 0x243c]       ; 004e886b
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e8871
    TEST ECX,ECX                        ; 004e8878
    JZ 0x004e8a2e                       ; 004e887a
        ;   XREF to: 004e8a2e (CONDITIONAL_JUMP)  ; LAB_004e8a2e
    FLD float ptr [EBX + 0x243c]        ; 004e8880
        ;   Label: LAB_004e8880
    FLDZ                                ; 004e8886
    LEA EDX,[EBX + 0x158]               ; 004e8888
    FCOMPP                              ; 004e888e
    FNSTSW AX                           ; 004e8890
    SAHF                                ; 004e8892
    JC 0x004e8a9a                       ; 004e8893
        ;   XREF to: 004e8a9a (CONDITIONAL_JUMP)  ; LAB_004e8a9a
    MOV EAX,dword ptr [EBX + 0xbeac]    ; 004e8899
    MOV dword ptr [EBX + 0x243c],0x0    ; 004e889f
    TEST EAX,EAX                        ; 004e88a9
    JNZ 0x004e8a39                      ; 004e88ab
        ;   XREF to: 004e8a39 (CONDITIONAL_JUMP)  ; LAB_004e8a39
    PUSH EDX                            ; 004e88b1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e88b2
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e88b7
    ADD ESP,0x4                         ; 004e88ba
    CMP EAX,0xa                         ; 004e88bd
    JZ 0x004e89a9                       ; 004e88c0
        ;   XREF to: 004e89a9 (CONDITIONAL_JUMP)  ; LAB_004e89a9
    CMP EAX,0x9                         ; 004e88c6
    JZ 0x004e89a9                       ; 004e88c9
        ;   XREF to: 004e89a9 (CONDITIONAL_JUMP)  ; LAB_004e89a9
    MOV EAX,dword ptr [EBX + 0xbf08]    ; 004e88cf
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004e88d5
    TEST EDX,EDX                        ; 004e88dc
    JZ 0x004e8a53                       ; 004e88de
        ;   XREF to: 004e8a53 (CONDITIONAL_JUMP)  ; LAB_004e8a53
    DEC dword ptr [EBX + 0xbed8]        ; 004e88e4
    MOV EAX,dword ptr [EBX + 0x2df4]    ; 004e88ea
        ;   Label: LAB_004e88ea
    MOV ESI,0x6                         ; 004e88f0
    TEST EAX,EAX                        ; 004e88f5
    JLE 0x004e8a7b                      ; 004e88f7
        ;   XREF to: 004e8a7b (CONDITIONAL_JUMP)  ; LAB_004e8a7b
    MOV EDX,dword ptr [EBX + 0x2df4]    ; 004e88fd
    XOR EAX,EAX                         ; 004e8903
    TEST EDX,EDX                        ; 004e8905
    JLE 0x004e8922                      ; 004e8907
        ;   XREF to: 004e8922 (CONDITIONAL_JUMP)  ; LAB_004e8922
    MOV EDX,EBX                         ; 004e8909
    MOV ECX,dword ptr [EDX + 0x2df8]    ; 004e890b
        ;   Label: LAB_004e890b
    CMP ECX,dword ptr [EBX + 0xbf04]    ; 004e8911
    JNZ 0x004e8a5e                      ; 004e8917
        ;   XREF to: 004e8a5e (CONDITIONAL_JUMP)  ; LAB_004e8a5e
    MOV ESI,0x8                         ; 004e891d
        ;   Label: LAB_004e891d
    PUSH 0x1                            ; 004e8922
        ;   Label: LAB_004e8922
    PUSH ESI                            ; 004e8924
    LEA EAX,[EBX + 0x158]               ; 004e8925
    PUSH EAX                            ; 004e892b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e892c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e8931
    MOV ESI,dword ptr [EBX + 0xbf14]    ; 004e8934
    PUSH ESI                            ; 004e893a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e893b
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004e8940
    TEST EAX,EAX                        ; 004e8943
    JNZ 0x004e895f                      ; 004e8945
        ;   XREF to: 004e895f (CONDITIONAL_JUMP)  ; LAB_004e895f
    PUSH 0x62de8e                       ; 004e8947 | = "ghoul-die-!-?.wav @1.6"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e894c
    PUSH EBX                            ; 004e8952
    CALL dword ptr [EAX + 0x24]         ; 004e8953
    ADD ESP,0x8                         ; 004e8956
    MOV dword ptr [EBX + 0xbf14],EAX    ; 004e8959
    PUSH 0x41200000                     ; 004e895f
        ;   Label: LAB_004e895f
    PUSH 0x40800000                     ; 004e8964
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e8969
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    PUSH EDI                            ; 004e89a9
        ;   Label: LAB_004e89a9
    PUSH EBX                            ; 004e89aa
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004e89ab
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e89b0
    MOV ESP,EBP                         ; 004e89b3
    POP EBP                             ; 004e89b5
    POP EDI                             ; 004e89b6
    POP ESI                             ; 004e89b7
    POP EBX                             ; 004e89b8
    RET                                 ; 004e89b9
    LEA EAX,[EBX + 0x158]               ; 004e89ba
        ;   Label: LAB_004e89ba
    PUSH EAX                            ; 004e89c0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e89c1
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e89c6
    ADD ESP,0x4                         ; 004e89c9
    TEST EAX,EAX                        ; 004e89cc
    JNZ 0x004e880c                      ; 004e89ce
        ;   XREF to: 004e880c (CONDITIONAL_JUMP)  ; LAB_004e880c
    MOV dword ptr [EBX + 0xbf20],0x41f00000 ; 004e89d4
    MOV dword ptr [EBX + 0xbf1c],EAX    ; 004e89de
    LEA EAX,[EBX + 0xbf2c]              ; 004e89e4
    MOV dword ptr [EBX + 0xbf24],0x1    ; 004e89ea
    LEA EDX,[EBX + 0x20]                ; 004e89f4
    MOV dword ptr [EBX + 0xbf28],0x3f800000 ; 004e89f7
    CMP EAX,EDX                         ; 004e8a01
    JZ 0x004e8a15                       ; 004e8a03
        ;   XREF to: 004e8a15 (CONDITIONAL_JUMP)  ; LAB_004e8a15
    MOV ECX,dword ptr [EDX]             ; 004e8a05
    MOV dword ptr [EAX],ECX             ; 004e8a07
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e8a09
    MOV dword ptr [EAX + 0x4],ECX       ; 004e8a0c
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e8a0f
    MOV dword ptr [EAX + 0x8],ECX       ; 004e8a12
    PUSH 0x62de82                       ; 004e8a15 | = "go berzerk\n"
        ;   Label: LAB_004e8a15
    MOV ESI,dword ptr [0x0066e8e0]      ; 004e8a1a | g_CConsolePtr
    PUSH ESI                            ; 004e8a20 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004e8a21
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004e8a26
    JMP 0x004e880c                      ; 004e8a29
        ;   XREF to: 004e880c (UNCONDITIONAL_JUMP)  ; LAB_004e880c
    MOV dword ptr [EBX + 0x243c],ECX    ; 004e8a2e
        ;   Label: LAB_004e8a2e
    JMP 0x004e8880                      ; 004e8a34
        ;   XREF to: 004e8880 (UNCONDITIONAL_JUMP)  ; LAB_004e8880
    PUSH EBX                            ; 004e8a39
        ;   Label: LAB_004e8a39
    CALL core_charactr.cpp_CCharacter_FUN_0042b8e0 ; 004e8a3a
        ;   XREF to: 0042b8e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b8e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e8a3f
    PUSH EDI                            ; 004e8a42
    PUSH EBX                            ; 004e8a43
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004e8a44
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e8a49
    MOV ESP,EBP                         ; 004e8a4c
    POP EBP                             ; 004e8a4e
    POP EDI                             ; 004e8a4f
    POP ESI                             ; 004e8a50
    POP EBX                             ; 004e8a51
    RET                                 ; 004e8a52
    MOV dword ptr [EBX + 0xbed8],EDX    ; 004e8a53
        ;   Label: LAB_004e8a53
    JMP 0x004e88ea                      ; 004e8a59
        ;   XREF to: 004e88ea (UNCONDITIONAL_JUMP)  ; LAB_004e88ea
    JZ 0x004e891d                       ; 004e8a5e
        ;   XREF to: 004e891d (CONDITIONAL_JUMP)  ; LAB_004e891d
        ;   Label: LAB_004e8a5e
    INC EAX                             ; 004e8a64
    MOV ECX,dword ptr [EBX + 0x2df4]    ; 004e8a65
    ADD EDX,0x38                        ; 004e8a6b
    CMP EAX,ECX                         ; 004e8a6e
    JL 0x004e890b                       ; 004e8a70
        ;   XREF to: 004e890b (CONDITIONAL_JUMP)  ; LAB_004e890b
    JMP 0x004e8922                      ; 004e8a76
        ;   XREF to: 004e8922 (UNCONDITIONAL_JUMP)  ; LAB_004e8922
    PUSH 0x3f000000                     ; 004e8a7b
        ;   Label: LAB_004e8a7b
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e8a80
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e8a85
    TEST EAX,EAX                        ; 004e8a88
    JZ 0x004e8922                       ; 004e8a8a
        ;   XREF to: 004e8922 (CONDITIONAL_JUMP)  ; LAB_004e8922
    MOV ESI,0x7                         ; 004e8a90
    JMP 0x004e8922                      ; 004e8a95
        ;   XREF to: 004e8922 (UNCONDITIONAL_JUMP)  ; LAB_004e8922
    PUSH EDX                            ; 004e8a9a
        ;   Label: LAB_004e8a9a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e8a9b
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV ECX,dword ptr [EAX + 0x24]      ; 004e8aa0
    ADD ESP,0x4                         ; 004e8aa3
    MOV EDX,ECX                         ; 004e8aa6
    XOR EAX,EAX                         ; 004e8aa8
    CMP ECX,0x2                         ; 004e8aaa
    JNZ 0x004e8ab4                      ; 004e8aad
        ;   XREF to: 004e8ab4 (CONDITIONAL_JUMP)  ; LAB_004e8ab4
    MOV EAX,0x1                         ; 004e8aaf
    CMP EDX,0xc                         ; 004e8ab4
        ;   Label: LAB_004e8ab4
    JNZ 0x004e8abe                      ; 004e8ab7
        ;   XREF to: 004e8abe (CONDITIONAL_JUMP)  ; LAB_004e8abe
    MOV EAX,0x1                         ; 004e8ab9
    CMP EDX,0xb                         ; 004e8abe
        ;   Label: LAB_004e8abe
    JNZ 0x004e8ac8                      ; 004e8ac1
        ;   XREF to: 004e8ac8 (CONDITIONAL_JUMP)  ; LAB_004e8ac8
    MOV EAX,0x1                         ; 004e8ac3
    TEST EDX,EDX                        ; 004e8ac8
        ;   Label: LAB_004e8ac8
    JNZ 0x004e8b38                      ; 004e8aca
        ;   XREF to: 004e8b38 (CONDITIONAL_JUMP)  ; LAB_004e8b38
    PUSH 0x1                            ; 004e8acc
        ;   Label: LAB_004e8acc
    PUSH 0x3f000000                     ; 004e8ace
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e8ad3
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e8ad8
    TEST EAX,EAX                        ; 004e8adb
    SETZ AL                             ; 004e8add
    AND EAX,0xff                        ; 004e8ae0
    ADD EAX,0x3                         ; 004e8ae5
    PUSH EAX                            ; 004e8ae8
    LEA EAX,[EBX + 0x158]               ; 004e8ae9
    PUSH EAX                            ; 004e8aef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e8af0
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e8af5
    MOV ESI,dword ptr [EBX + 0xbf10]    ; 004e8af8
        ;   Label: LAB_004e8af8
    PUSH ESI                            ; 004e8afe
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e8aff
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004e8b04
    TEST EAX,EAX                        ; 004e8b07
    JNZ 0x004e89a9                      ; 004e8b09
        ;   XREF to: 004e89a9 (CONDITIONAL_JUMP)  ; LAB_004e89a9
    PUSH 0x62deb3                       ; 004e8b0f | = "ghoul-mad-!-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004e8b14
    PUSH EBX                            ; 004e8b1a
    CALL dword ptr [EAX + 0x24]         ; 004e8b1b
    ADD ESP,0x8                         ; 004e8b1e
    MOV dword ptr [EBX + 0xbf10],EAX    ; 004e8b21
    PUSH EDI                            ; 004e8b27
    PUSH EBX                            ; 004e8b28
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004e8b29
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e8b2e
    MOV ESP,EBP                         ; 004e8b31
    POP EBP                             ; 004e8b33
    POP EDI                             ; 004e8b34
    POP ESI                             ; 004e8b35
    POP EBX                             ; 004e8b36
    RET                                 ; 004e8b37
    TEST EAX,EAX                        ; 004e8b38
        ;   Label: LAB_004e8b38
    JNZ 0x004e8acc                      ; 004e8b3a
        ;   XREF to: 004e8acc (CONDITIONAL_JUMP)  ; LAB_004e8acc
    PUSH 0x3e800000                     ; 004e8b3c
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004e8b41
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004e8b46
    TEST EAX,EAX                        ; 004e8b49
    JNZ 0x004e8acc                      ; 004e8b4b
        ;   XREF to: 004e8acc (CONDITIONAL_JUMP)  ; LAB_004e8acc
    PUSH 0x2                            ; 004e8b51
    PUSH 0x1                            ; 004e8b53
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004e8b55
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004e8b5a
    PUSH EAX                            ; 004e8b5d
    PUSH 0x62dea5                       ; 004e8b5e | = "guul flinch%d"
    LEA EAX,[EBP + -0x68]               ; 004e8b63
    PUSH EAX                            ; 004e8b66
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004e8b67
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004e8b6c
    PUSH 0x1                            ; 004e8b6f
    LEA EAX,[EBP + -0x68]               ; 004e8b71
    PUSH EAX                            ; 004e8b74
    LEA EAX,[EBX + 0x158]               ; 004e8b75
    PUSH EAX                            ; 004e8b7b
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 004e8b7c
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e8b81
    PUSH EAX                            ; 004e8b84
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 ; 004e8b85
        ;   XREF to: 0052d460 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460(CMotionList * this_ptr)
    MOV dword ptr [EBX + 0xbed0],0x3f800000 ; 004e8b8a
    ADD ESP,0xc                         ; 004e8b94
    MOV dword ptr [EBX + 0xbed4],EAX    ; 004e8b97
    JMP 0x004e8af8                      ; 004e8b9d
        ;   XREF to: 004e8af8 (UNCONDITIONAL_JUMP)  ; LAB_004e8af8

