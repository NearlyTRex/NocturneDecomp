; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processHotkeys_FUN_0049f930(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049de0a
;
; Referenced Globals:
;   byte[56] BYTE_ARRAY_00582a32
;   TerminatedCString s_quicksavedgame_noc_00582a6a
;   TerminatedCString s_Quick_Save_00582a7d
;   TerminatedCString s_rb_00582a88
;   TerminatedCString s_quicksavedgame_noc_00582a8b
;   TerminatedCString s_save_00582a9e
;   TerminatedCString s_Restore_quick_saved_game_00582aa3
;   TerminatedCString s_quicksavedgame_noc_00582abd
;   undefined4 s_quicksavedgame_noc_00582abd+1
;   undefined4 s_quicksavedgame_noc_00582abd+2
;   undefined4 s_quicksavedgame_noc_00582abd+3
;   TerminatedCString s_No_quicked_saved_game_to_00582ad0
;   byte[56] BYTE_ARRAY_00582aee
;   TerminatedCString s_Gamma_f_00582b26
;   TerminatedCString s_Gamma_f_00582b31
;   ... and 20 more
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_0049aa30
;   core_game.cpp_CGame_FUN_004a3b90
;   core_game.cpp_CGame_promptLoadGame_FUN_004a6570
;   core_script.cpp_CScript_FUN_00504d60
;   core_set.cpp_CDemonSet_FUN_005090f0
;   core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0
;   core_set.cpp_CDemonSet_setGamma_FUN_0050e400
;   core_setdir.cpp_CDemonSet_FUN_005125a0
;   core_sound.cpp_CSound_init_FUN_0052ddf0
;   core_sound.cpp_CSound_shutdown_FUN_0052df90
;   crt_env.c_getenv_FUN_00566e10
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f930
        ;   Label: core_game.cpp_CGame_processHotkeys_FUN_0049f930
    PUSH ESI                            ; 0049f931
    PUSH EDI                            ; 0049f932
    PUSH EBP                            ; 0049f933
    MOV EBP,ESP                         ; 0049f934
    SUB ESP,0x20c                       ; 0049f936
    AND ESP,0xfffffff8                  ; 0049f93c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049f93f
    CMP dword ptr [0x01c78420],0x0      ; 0049f942 | DAT_01c78420
    JNZ 0x0049fd9f                      ; 0049f949
        ;   XREF to: 0049fd9f (CONDITIONAL_JUMP)  ; LAB_0049fd9f
    CMP dword ptr [EBX + 0xcc],0x0      ; 0049f94f
    JZ 0x0049fda6                       ; 0049f956
        ;   XREF to: 0049fda6 (CONDITIONAL_JUMP)  ; LAB_0049fda6
    CMP dword ptr [EBX + 0x210],0x0     ; 0049f95c
        ;   Label: LAB_0049f95c
    JZ 0x0049f9cb                       ; 0049f963
        ;   XREF to: 0049f9cb (CONDITIONAL_JUMP)  ; LAB_0049f9cb
    PUSH 0x1d                           ; 0049f965
    MOV EAX,[0x005bac64]                ; 0049f967 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049f96c | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049f96d | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049f96f
    ADD ESP,0x8                         ; 0049f971
    TEST EAX,EAX                        ; 0049f974
    JZ 0x0049f9cb                       ; 0049f976
        ;   XREF to: 0049f9cb (CONDITIONAL_JUMP)  ; LAB_0049f9cb
    PUSH 0x15                           ; 0049f978
    MOV EAX,[0x005bac64]                ; 0049f97a | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049f97f | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049f980 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049f982
    ADD ESP,0x8                         ; 0049f985
    TEST EAX,EAX                        ; 0049f988
    JZ 0x0049f9cb                       ; 0049f98a
        ;   XREF to: 0049f9cb (CONDITIONAL_JUMP)  ; LAB_0049f9cb
    MOV EAX,0x1                         ; 0049f98c
    MOV ECX,dword ptr [EBX + 0x1fc]     ; 0049f991
    SUB EAX,ECX                         ; 0049f997
    MOV dword ptr [EBX + 0x1fc],EAX     ; 0049f999
    JZ 0x0049fea1                       ; 0049f99f
        ;   XREF to: 0049fea1 (CONDITIONAL_JUMP)  ; LAB_0049fea1
    MOV ECX,dword ptr [0x005bed68]      ; 0049f9a5 | g_CSound_PTR_005bed68
    XOR EDX,EDX                         ; 0049f9ab
    PUSH ECX                            ; 0049f9ad
    MOV dword ptr [0x01bd1d94],EDX      ; 0049f9ae | DAT_01bd1d94
    CALL core_sound.cpp_CSound_shutdown_FUN_0052df90 ; 0049f9b4
        ;   XREF to: 0052df90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0052df90(CSound * this_ptr)
    ADD ESP,0x4                         ; 0049f9b9
    MOV ESI,dword ptr [0x005b9284]      ; 0049f9bc | g_CForceFeedback_PTR_005b9284
    PUSH ESI                            ; 0049f9c2
    CALL engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0 ; 0049f9c3
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; void engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0(CForceFeedback * this_ptr)
    ADD ESP,0x4                         ; 0049f9c8
        ;   Label: LAB_0049f9c8
    CMP dword ptr [EBX + 0x210],0x0     ; 0049f9cb
        ;   Label: LAB_0049f9cb
    JZ 0x0049fec0                       ; 0049f9d2
        ;   XREF to: 0049fec0 (CONDITIONAL_JUMP)  ; LAB_0049fec0
    PUSH 0x1d                           ; 0049f9d8
        ;   Label: LAB_0049f9d8
    MOV EAX,[0x005bac64]                ; 0049f9da | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049f9df | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049f9e0 | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049f9e2
    ADD ESP,0x8                         ; 0049f9e4
    TEST EAX,EAX                        ; 0049f9e7
    JZ 0x0049fa12                       ; 0049f9e9
        ;   XREF to: 0049fa12 (CONDITIONAL_JUMP)  ; LAB_0049fa12
    PUSH 0x2c                           ; 0049f9eb
    MOV EAX,[0x005bac64]                ; 0049f9ed | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049f9f2 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049f9f3 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049f9f5
    ADD ESP,0x8                         ; 0049f9f8
    TEST EAX,EAX                        ; 0049f9fb
    JZ 0x0049fa12                       ; 0049f9fd
        ;   XREF to: 0049fa12 (CONDITIONAL_JUMP)  ; LAB_0049fa12
    MOV EAX,0x1                         ; 0049f9ff
    MOV EDX,dword ptr [EBX + 0x1e4]     ; 0049fa04
    SUB EAX,EDX                         ; 0049fa0a
    MOV dword ptr [EBX + 0x1e4],EAX     ; 0049fa0c
    PUSH 0x38                           ; 0049fa12
        ;   Label: LAB_0049fa12
    MOV EAX,[0x005bac64]                ; 0049fa14 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fa19 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fa1a | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fa1c
    ADD ESP,0x8                         ; 0049fa1e
    TEST EAX,EAX                        ; 0049fa21
    JZ 0x0049fa4d                       ; 0049fa23
        ;   XREF to: 0049fa4d (CONDITIONAL_JUMP)  ; LAB_0049fa4d
    PUSH 0x32                           ; 0049fa25
    MOV EAX,[0x005bac64]                ; 0049fa27 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fa2c | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fa2d | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fa2f
    ADD ESP,0x8                         ; 0049fa32
    TEST EAX,EAX                        ; 0049fa35
    JZ 0x0049fa4d                       ; 0049fa37
        ;   XREF to: 0049fa4d (CONDITIONAL_JUMP)  ; LAB_0049fa4d
    CMP dword ptr [0x01cd4318],0x0      ; 0049fa39 | DAT_01cd4318
    SETZ AL                             ; 0049fa40
    AND EAX,0xff                        ; 0049fa43
    MOV [0x01cd4318],EAX                ; 0049fa48 | DAT_01cd4318
    CMP dword ptr [EBX + 0x1dc],0x0     ; 0049fa4d
        ;   Label: LAB_0049fa4d
    JZ 0x0049fee3                       ; 0049fa54
        ;   XREF to: 0049fee3 (CONDITIONAL_JUMP)  ; LAB_0049fee3
    PUSH 0x1d                           ; 0049fa5a
        ;   Label: LAB_0049fa5a
    MOV EAX,[0x005bac64]                ; 0049fa5c | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fa61 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fa62 | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fa64
    ADD ESP,0x8                         ; 0049fa66
    TEST EAX,EAX                        ; 0049fa69
    JZ 0x0049faa6                       ; 0049fa6b
        ;   XREF to: 0049faa6 (CONDITIONAL_JUMP)  ; LAB_0049faa6
    PUSH 0x32                           ; 0049fa6d
    MOV EAX,[0x005bac64]                ; 0049fa6f | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fa74 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fa75 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fa77
    ADD ESP,0x8                         ; 0049fa7a
    TEST EAX,EAX                        ; 0049fa7d
    JZ 0x0049faa6                       ; 0049fa7f
        ;   XREF to: 0049faa6 (CONDITIONAL_JUMP)  ; LAB_0049faa6
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0 ; 0049fa81
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_00526ca0()
        ;   Label: LAB_0049fa81
    TEST EAX,EAX                        ; 0049fa86
    JZ 0x0049ff00                       ; 0049fa88
        ;   XREF to: 0049ff00 (CONDITIONAL_JUMP)  ; LAB_0049ff00
    PUSH 0x0                            ; 0049fa8e
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0 ; 0049fa90
        ;   XREF to: 00526cb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0(int enable)
    ADD ESP,0x4                         ; 0049fa95
    MOV EAX,[0x005bed68]                ; 0049fa98 | g_CSound_PTR_005bed68
    PUSH EAX                            ; 0049fa9d
    CALL core_sound.cpp_CSound_init_FUN_0052ddf0 ; 0049fa9e
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_init_FUN_0052ddf0(CSound * this_ptr)
    ADD ESP,0x4                         ; 0049faa3
        ;   Label: LAB_0049faa3
    CMP dword ptr [EBX + 0x210],0x0     ; 0049faa6
        ;   Label: LAB_0049faa6
    JZ 0x0049fb0f                       ; 0049faad
        ;   XREF to: 0049fb0f (CONDITIONAL_JUMP)  ; LAB_0049fb0f
    PUSH 0x1d                           ; 0049faaf
    MOV EAX,[0x005bac64]                ; 0049fab1 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fab6 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fab7 | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fab9
    ADD ESP,0x8                         ; 0049fabb
    TEST EAX,EAX                        ; 0049fabe
    JZ 0x0049fb0f                       ; 0049fac0
        ;   XREF to: 0049fb0f (CONDITIONAL_JUMP)  ; LAB_0049fb0f
    PUSH 0x11                           ; 0049fac2
    MOV EAX,[0x005bac64]                ; 0049fac4 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fac9 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049faca | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049facc
    ADD ESP,0x8                         ; 0049facf
    TEST EAX,EAX                        ; 0049fad2
    JZ 0x0049fb0f                       ; 0049fad4
        ;   XREF to: 0049fb0f (CONDITIONAL_JUMP)  ; LAB_0049fb0f
    MOV ECX,dword ptr [0x005b7620]      ; 0049fad6 | g_WindowHeight
    CMP ECX,0x1e0                       ; 0049fadc
    JL 0x0049fb0f                       ; 0049fae2
        ;   XREF to: 0049fb0f (CONDITIONAL_JUMP)  ; LAB_0049fb0f
    MOV EAX,0x1                         ; 0049fae4
    MOV ESI,dword ptr [EBX + 0x278]     ; 0049fae9
    SUB EAX,ESI                         ; 0049faef
    MOV dword ptr [EBX + 0x278],EAX     ; 0049faf1
    JNZ 0x0049ff1b                      ; 0049faf7
        ;   XREF to: 0049ff1b (CONDITIONAL_JUMP)  ; LAB_0049ff1b
    PUSH ECX                            ; 0049fafd
    PUSH EAX                            ; 0049fafe
    PUSH EAX                            ; 0049faff
    MOV ECX,dword ptr [0x005be368]      ; 0049fb00 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0049fb06 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_FUN_005090f0 ; 0049fb07
        ;   XREF to: 005090f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_005090f0(CDemonSet * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
        ;   Label: LAB_0049fb07
    ADD ESP,0x10                        ; 0049fb0c
    CMP dword ptr [EBX + 0x210],0x0     ; 0049fb0f
        ;   Label: LAB_0049fb0f
    JZ 0x0049fb25                       ; 0049fb16
        ;   XREF to: 0049fb25 (CONDITIONAL_JUMP)  ; LAB_0049fb25
    CMP dword ptr [0x01c78ac8],0x0      ; 0049fb18 | DAT_01c78ac8
    JZ 0x0049ff2f                       ; 0049fb1f
        ;   XREF to: 0049ff2f (CONDITIONAL_JUMP)  ; LAB_0049ff2f
    PUSH 0x1d                           ; 0049fb25
        ;   Label: LAB_0049fb25
    MOV EAX,[0x005bac64]                ; 0049fb27 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fb2c | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fb2d | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fb2f
    ADD ESP,0x8                         ; 0049fb31
    TEST EAX,EAX                        ; 0049fb34
    JZ 0x0049fb5a                       ; 0049fb36
        ;   XREF to: 0049fb5a (CONDITIONAL_JUMP)  ; LAB_0049fb5a
    PUSH 0x1f                           ; 0049fb38
    MOV EAX,[0x005bac64]                ; 0049fb3a | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fb3f | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fb40 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fb42
    ADD ESP,0x8                         ; 0049fb45
    TEST EAX,EAX                        ; 0049fb48
    JZ 0x0049fb5a                       ; 0049fb4a
        ;   XREF to: 0049fb5a (CONDITIONAL_JUMP)  ; LAB_0049fb5a
    MOV ECX,dword ptr [EBX + 0x228]     ; 0049fb4c
    TEST ECX,ECX                        ; 0049fb52
    JZ 0x0049ff88                       ; 0049fb54
        ;   XREF to: 0049ff88 (CONDITIONAL_JUMP)  ; LAB_0049ff88
    PUSH 0x3c                           ; 0049fb5a
        ;   Label: LAB_0049fb5a
    MOV EAX,[0x005bac64]                ; 0049fb5c | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fb61 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fb62 | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fb64
    ADD ESP,0x8                         ; 0049fb66
    TEST EAX,EAX                        ; 0049fb69
    JZ 0x0049fb7b                       ; 0049fb6b
        ;   XREF to: 0049fb7b (CONDITIONAL_JUMP)  ; LAB_0049fb7b
    MOV ESI,dword ptr [EBX + 0x228]     ; 0049fb6d
    TEST ESI,ESI                        ; 0049fb73
    JZ 0x0049ff97                       ; 0049fb75
        ;   XREF to: 0049ff97 (CONDITIONAL_JUMP)  ; LAB_0049ff97
    PUSH 0x3d                           ; 0049fb7b
        ;   Label: LAB_0049fb7b
    MOV EAX,[0x005bac64]                ; 0049fb7d | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fb82 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fb83 | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fb85
    ADD ESP,0x8                         ; 0049fb87
    TEST EAX,EAX                        ; 0049fb8a
    JZ 0x0049fb97                       ; 0049fb8c
        ;   XREF to: 0049fb97 (CONDITIONAL_JUMP)  ; LAB_0049fb97
    PUSH EBX                            ; 0049fb8e
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004a6570 ; 0049fb8f
        ;   XREF to: 004a6570 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004a6570(CGame * this_ptr)
    ADD ESP,0x4                         ; 0049fb94
    PUSH 0x40                           ; 0049fb97
        ;   Label: LAB_0049fb97
    MOV EAX,[0x005bac64]                ; 0049fb99 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fb9e | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fb9f | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fba1
    ADD ESP,0x8                         ; 0049fba3
    TEST EAX,EAX                        ; 0049fba6
    JZ 0x0049fbb7                       ; 0049fba8
        ;   XREF to: 0049fbb7 (CONDITIONAL_JUMP)  ; LAB_0049fbb7
    CMP dword ptr [EBX + 0x228],0x0     ; 0049fbaa
    JZ 0x0049ffa6                       ; 0049fbb1
        ;   XREF to: 0049ffa6 (CONDITIONAL_JUMP)  ; LAB_0049ffa6
    CMP dword ptr [EBX + 0x1dc],0x0     ; 0049fbb7
        ;   Label: LAB_0049fbb7
    JZ 0x0049ffd5                       ; 0049fbbe
        ;   XREF to: 0049ffd5 (CONDITIONAL_JUMP)  ; LAB_0049ffd5
    PUSH 0x3b                           ; 0049fbc4
        ;   Label: LAB_0049fbc4
    MOV EAX,[0x005bac64]                ; 0049fbc6 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fbcb | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fbcc | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fbce
    ADD ESP,0x8                         ; 0049fbd1
    TEST EAX,EAX                        ; 0049fbd4
    JZ 0x0049fbed                       ; 0049fbd6
        ;   XREF to: 0049fbed (CONDITIONAL_JUMP)  ; LAB_0049fbed
    CMP dword ptr [EBX + 0xac8],0x0     ; 0049fbd8
    SETZ AL                             ; 0049fbdf
    AND EAX,0xff                        ; 0049fbe2
    MOV dword ptr [EBX + 0xac8],EAX     ; 0049fbe7
    CMP dword ptr [EBX + 0x210],0x0     ; 0049fbed
        ;   Label: LAB_0049fbed
    JZ 0x004a008a                       ; 0049fbf4
        ;   XREF to: 004a008a (CONDITIONAL_JUMP)  ; LAB_004a008a
    PUSH 0xf                            ; 0049fbfa
        ;   Label: LAB_0049fbfa
    MOV EAX,[0x005bac64]                ; 0049fbfc | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fc01 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fc02 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fc04
    ADD ESP,0x8                         ; 0049fc07
    TEST EAX,EAX                        ; 0049fc0a
    JZ 0x0049fc23                       ; 0049fc0c
        ;   XREF to: 0049fc23 (CONDITIONAL_JUMP)  ; LAB_0049fc23
    CMP dword ptr [EBX + 0x280],0x0     ; 0049fc0e
    SETZ AL                             ; 0049fc15
    AND EAX,0xff                        ; 0049fc18
    MOV dword ptr [EBX + 0x280],EAX     ; 0049fc1d
    CMP dword ptr [EBX + 0x1fc],0x0     ; 0049fc23
        ;   Label: LAB_0049fc23
    JZ 0x004a00ad                       ; 0049fc2a
        ;   XREF to: 004a00ad (CONDITIONAL_JUMP)  ; LAB_004a00ad
    PUSH 0x57                           ; 0049fc30
        ;   Label: LAB_0049fc30
    MOV EAX,[0x005bac64]                ; 0049fc32 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fc37 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fc38 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fc3a
    ADD ESP,0x8                         ; 0049fc3d
    TEST EAX,EAX                        ; 0049fc40
    JZ 0x0049fcb5                       ; 0049fc42
        ;   XREF to: 0049fcb5 (CONDITIONAL_JUMP)  ; LAB_0049fcb5
    MOV ESI,dword ptr [EBX + 0x224]     ; 0049fc44
    SUB ESI,0x400                       ; 0049fc4a
    MOV dword ptr [EBX + 0x224],ESI     ; 0049fc50
    CMP ESI,0x8000                      ; 0049fc56
    JGE 0x0049fc68                      ; 0049fc5c
        ;   XREF to: 0049fc68 (CONDITIONAL_JUMP)  ; LAB_0049fc68
    MOV dword ptr [EBX + 0x224],0x8000  ; 0049fc5e
    FILD dword ptr [EBX + 0x224]        ; 0049fc68
        ;   Label: LAB_0049fc68
    FMUL double ptr [0x00582b42]        ; 0049fc6e | DOUBLE_00582b42
    SUB ESP,0x8                         ; 0049fc74
    FSTP double ptr [ESP]               ; 0049fc77
    PUSH 0x582b26                       ; 0049fc7a | = "Gamma : %f"
    LEA EAX,[ESP + 0x10]                ; 0049fc7f
    PUSH EAX                            ; 0049fc83
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049fc84
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0049fc89
    LEA EAX,[ESP + 0x4]                 ; 0049fc8c
    PUSH 0x3f800000                     ; 0049fc90
    PUSH EAX                            ; 0049fc95
    PUSH EBX                            ; 0049fc96
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 0049fc97
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0049fc9c
    MOV EAX,dword ptr [EBX + 0x224]     ; 0049fc9f
    PUSH EAX                            ; 0049fca5
    MOV EDX,dword ptr [0x005be368]      ; 0049fca6 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 0049fcac
    CALL core_set.cpp_CDemonSet_setGamma_FUN_0050e400 ; 0049fcad
        ;   XREF to: 0050e400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_0050e400(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 0049fcb2
    PUSH 0x58                           ; 0049fcb5
        ;   Label: LAB_0049fcb5
    MOV EAX,[0x005bac64]                ; 0049fcb7 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fcbc | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fcbd | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fcbf
    ADD ESP,0x8                         ; 0049fcc2
    TEST EAX,EAX                        ; 0049fcc5
    JZ 0x0049fd3f                       ; 0049fcc7
        ;   XREF to: 0049fd3f (CONDITIONAL_JUMP)  ; LAB_0049fd3f
    MOV ECX,dword ptr [EBX + 0x224]     ; 0049fcc9
    ADD ECX,0x400                       ; 0049fccf
    MOV dword ptr [EBX + 0x224],ECX     ; 0049fcd5
    CMP ECX,0x10000                     ; 0049fcdb
    JLE 0x0049fced                      ; 0049fce1
        ;   XREF to: 0049fced (CONDITIONAL_JUMP)  ; LAB_0049fced
    MOV dword ptr [EBX + 0x224],0x10000 ; 0049fce3
    FILD dword ptr [EBX + 0x224]        ; 0049fced
        ;   Label: LAB_0049fced
    FMUL double ptr [0x00582b42]        ; 0049fcf3 | DOUBLE_00582b42
    SUB ESP,0x8                         ; 0049fcf9
    FSTP double ptr [ESP]               ; 0049fcfc
    PUSH 0x582b31                       ; 0049fcff | = "Gamma : %f"
    LEA EAX,[ESP + 0x110]               ; 0049fd04
    PUSH EAX                            ; 0049fd0b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0049fd0c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0049fd11
    LEA EAX,[ESP + 0x104]               ; 0049fd14
    PUSH 0x3f800000                     ; 0049fd1b
    PUSH EAX                            ; 0049fd20
    PUSH EBX                            ; 0049fd21
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 0049fd22
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0049fd27
    MOV EDI,dword ptr [EBX + 0x224]     ; 0049fd2a
    PUSH EDI                            ; 0049fd30
    MOV EAX,[0x005be368]                ; 0049fd31 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0049fd36
    CALL core_set.cpp_CDemonSet_setGamma_FUN_0050e400 ; 0049fd37
        ;   XREF to: 0050e400 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_0050e400(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 0049fd3c
    CMP dword ptr [EBX + 0x210],0x0     ; 0049fd3f
        ;   Label: LAB_0049fd3f
    JZ 0x0049fd92                       ; 0049fd46
        ;   XREF to: 0049fd92 (CONDITIONAL_JUMP)  ; LAB_0049fd92
    PUSH 0x1d                           ; 0049fd48
    MOV EAX,[0x005bac64]                ; 0049fd4a | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fd4f | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fd50 | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fd52
    ADD ESP,0x8                         ; 0049fd54
    TEST EAX,EAX                        ; 0049fd57
    JZ 0x0049fd92                       ; 0049fd59
        ;   XREF to: 0049fd92 (CONDITIONAL_JUMP)  ; LAB_0049fd92
    PUSH 0x23                           ; 0049fd5b
    MOV EAX,[0x005bac64]                ; 0049fd5d | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fd62 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fd63 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fd65
    ADD ESP,0x8                         ; 0049fd68
    TEST EAX,EAX                        ; 0049fd6b
    JZ 0x0049fd92                       ; 0049fd6d
        ;   XREF to: 0049fd92 (CONDITIONAL_JUMP)  ; LAB_0049fd92
    MOV EAX,[0x005be368]                ; 0049fd6f | g_CDemonSet_PTR_005be368
    MOV EAX,dword ptr [EAX + 0x15aab8]  ; 0049fd74 | g_CDemonSet_01e57284.camera_enabled_flag
    TEST EAX,EAX                        ; 0049fd7a
    SETZ AL                             ; 0049fd7c
    MOV EDI,EAX                         ; 0049fd7f
    MOV EAX,[0x005be368]                ; 0049fd81 | g_CDemonSet_PTR_005be368
    AND EDI,0xff                        ; 0049fd86
    MOV dword ptr [EAX + 0x15aab8],EDI  ; 0049fd8c | g_CDemonSet_01e57284.camera_enabled_flag
    CMP dword ptr [EBX + 0x210],0x0     ; 0049fd92
        ;   Label: LAB_0049fd92
    JNZ 0x004a019b                      ; 0049fd99
        ;   XREF to: 004a019b (CONDITIONAL_JUMP)  ; LAB_004a019b
    MOV ESP,EBP                         ; 0049fd9f
        ;   Label: LAB_0049fd9f
    POP EBP                             ; 0049fda1
    POP EDI                             ; 0049fda2
    POP ESI                             ; 0049fda3
    POP EBX                             ; 0049fda4
    RET                                 ; 0049fda5
    CMP dword ptr [EBX + 0x210],0x0     ; 0049fda6
        ;   Label: LAB_0049fda6
    JZ 0x0049fe11                       ; 0049fdad
        ;   XREF to: 0049fe11 (CONDITIONAL_JUMP)  ; LAB_0049fe11
    PUSH 0x1d                           ; 0049fdaf
    MOV EAX,[0x005bac64]                ; 0049fdb1 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fdb6 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fdb7 | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fdb9
    ADD ESP,0x8                         ; 0049fdbb
    TEST EAX,EAX                        ; 0049fdbe
    JZ 0x0049fe11                       ; 0049fdc0
        ;   XREF to: 0049fe11 (CONDITIONAL_JUMP)  ; LAB_0049fe11
    PUSH 0x12                           ; 0049fdc2
    MOV EAX,[0x005bac64]                ; 0049fdc4 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fdc9 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fdca | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fdcc
    ADD ESP,0x8                         ; 0049fdcf
    TEST EAX,EAX                        ; 0049fdd2
    JZ 0x0049fe11                       ; 0049fdd4
        ;   XREF to: 0049fe11 (CONDITIONAL_JUMP)  ; LAB_0049fe11
    MOV EAX,0x1                         ; 0049fdd6
    MOV EDI,dword ptr [EBX + 0x274]     ; 0049fddb
    SUB EAX,EDI                         ; 0049fde1
    MOV dword ptr [EBX + 0x274],EAX     ; 0049fde3
    JZ 0x0049fe11                       ; 0049fde9
        ;   XREF to: 0049fe11 (CONDITIONAL_JUMP)  ; LAB_0049fe11
    MOV EAX,[0x005be220]                ; 0049fdeb | DAT_005be220
    PUSH 0x1                            ; 0049fdf0
    MOV EDX,dword ptr [EAX + 0xc]       ; 0049fdf2 | g_CScript_01e56da0.focus_actor
    PUSH EDX                            ; 0049fdf5
    MOV ECX,dword ptr [0x005be368]      ; 0049fdf6 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 0049fdfc | g_CDemonSet_01e57284
    CALL core_setdir.cpp_CDemonSet_FUN_005125a0 ; 0049fdfd
        ;   XREF to: 005125a0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_005125a0(CDemonSet * this_ptr, CDemonActor * param_2, int param_3)
    MOV EAX,[0x005be220]                ; 0049fe02 | DAT_005be220
    ADD ESP,0xc                         ; 0049fe07
    MOV dword ptr [EAX + 0x10],0x0      ; 0049fe0a | g_CScript_01e56da0.focus_actor_changed
    MOV ESI,dword ptr [EBX + 0x274]     ; 0049fe11
        ;   Label: LAB_0049fe11
    TEST ESI,ESI                        ; 0049fe17
    JNZ 0x0049f95c                      ; 0049fe19
        ;   XREF to: 0049f95c (CONDITIONAL_JUMP)  ; LAB_0049f95c
    PUSH 0x2e                           ; 0049fe1f
    MOV EAX,[0x005bac64]                ; 0049fe21 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fe26 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fe27 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049fe29
    ADD ESP,0x8                         ; 0049fe2c
    TEST EAX,EAX                        ; 0049fe2f
    JZ 0x0049f95c                       ; 0049fe31
        ;   XREF to: 0049f95c (CONDITIONAL_JUMP)  ; LAB_0049f95c
    PUSH 0x2a                           ; 0049fe37
    MOV EAX,[0x005bac64]                ; 0049fe39 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049fe3e | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049fe3f | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049fe41
    ADD ESP,0x8                         ; 0049fe43
    TEST EAX,EAX                        ; 0049fe46
    JZ 0x0049fe83                       ; 0049fe48
        ;   XREF to: 0049fe83 (CONDITIONAL_JUMP)  ; LAB_0049fe83
    MOV ECX,dword ptr [EBX + 0x270]     ; 0049fe4a
    DEC ECX                             ; 0049fe50
    MOV dword ptr [EBX + 0x270],ECX     ; 0049fe51
    TEST ECX,ECX                        ; 0049fe57
    JGE 0x0049fe69                      ; 0049fe59
        ;   XREF to: 0049fe69 (CONDITIONAL_JUMP)  ; LAB_0049fe69
    MOV EAX,[0x005be368]                ; 0049fe5b | g_CDemonSet_PTR_005be368
    MOV EAX,dword ptr [EAX]             ; 0049fe60 | g_CDemonSet_01e57284
    DEC EAX                             ; 0049fe62
    MOV dword ptr [EBX + 0x270],EAX     ; 0049fe63
    MOV EDI,dword ptr [EBX + 0x270]     ; 0049fe69
        ;   Label: LAB_0049fe69
    PUSH EDI                            ; 0049fe6f
    MOV EAX,[0x005be368]                ; 0049fe70 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0049fe75 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 ; 0049fe76
        ;   XREF to: 005088f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_005088f0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 0049fe7b
    JMP 0x0049f95c                      ; 0049fe7e
        ;   XREF to: 0049f95c (UNCONDITIONAL_JUMP)  ; LAB_0049f95c
    MOV EDI,dword ptr [EBX + 0x270]     ; 0049fe83
        ;   Label: LAB_0049fe83
    INC EDI                             ; 0049fe89
    MOV EAX,[0x005be368]                ; 0049fe8a | g_CDemonSet_PTR_005be368
    MOV dword ptr [EBX + 0x270],EDI     ; 0049fe8f
    CMP EDI,dword ptr [EAX]             ; 0049fe95 | g_CDemonSet_01e57284
    JL 0x0049fe69                       ; 0049fe97
        ;   XREF to: 0049fe69 (CONDITIONAL_JUMP)  ; LAB_0049fe69
    MOV dword ptr [EBX + 0x270],ESI     ; 0049fe99
    JMP 0x0049fe69                      ; 0049fe9f
        ;   XREF to: 0049fe69 (UNCONDITIONAL_JUMP)  ; LAB_0049fe69
    MOV EDI,dword ptr [0x005bed68]      ; 0049fea1 | g_CSound_PTR_005bed68
        ;   Label: LAB_0049fea1
    PUSH EDI                            ; 0049fea7
    CALL core_sound.cpp_CSound_init_FUN_0052ddf0 ; 0049fea8
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_init_FUN_0052ddf0(CSound * this_ptr)
    ADD ESP,0x4                         ; 0049fead
    MOV EAX,[0x005b9284]                ; 0049feb0 | g_CForceFeedback_PTR_005b9284
    PUSH EAX                            ; 0049feb5
    CALL engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0 ; 0049feb6
        ;   XREF to: 004940d0 (UNCONDITIONAL_CALL)  ; void engine_force.cpp_CForceFeedback_processEvent_FUN_004940d0(CForceFeedback * this_ptr)
    JMP 0x0049f9c8                      ; 0049febb
        ;   XREF to: 0049f9c8 (UNCONDITIONAL_JUMP)  ; LAB_0049f9c8
    PUSH 0x582a32                       ; 0049fec0 | BYTE_ARRAY_00582a32
        ;   Label: LAB_0049fec0
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 0049fec5
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    ADD ESP,0x4                         ; 0049feca
    PUSH EAX                            ; 0049fecd
    CALL crt_env.c_getenv_FUN_00566e10  ; 0049fece
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_00566e10(char * name)
    ADD ESP,0x4                         ; 0049fed3
    TEST EAX,EAX                        ; 0049fed6
    JNZ 0x0049f9d8                      ; 0049fed8
        ;   XREF to: 0049f9d8 (CONDITIONAL_JUMP)  ; LAB_0049f9d8
    JMP 0x0049fa12                      ; 0049fede
        ;   XREF to: 0049fa12 (UNCONDITIONAL_JUMP)  ; LAB_0049fa12
    PUSH 0x3f                           ; 0049fee3
        ;   Label: LAB_0049fee3
    MOV EAX,[0x005bac64]                ; 0049fee5 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049feea | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049feeb | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049feed
    ADD ESP,0x8                         ; 0049fef0
    TEST EAX,EAX                        ; 0049fef3
    JNZ 0x0049fa81                      ; 0049fef5
        ;   XREF to: 0049fa81 (CONDITIONAL_JUMP)  ; LAB_0049fa81
    JMP 0x0049fa5a                      ; 0049fefb
        ;   XREF to: 0049fa5a (UNCONDITIONAL_JUMP)  ; LAB_0049fa5a
    MOV EDI,dword ptr [0x005bed68]      ; 0049ff00 | g_CSound_PTR_005bed68
        ;   Label: LAB_0049ff00
    PUSH EDI                            ; 0049ff06
    CALL core_sound.cpp_CSound_shutdown_FUN_0052df90 ; 0049ff07
        ;   XREF to: 0052df90 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0052df90(CSound * this_ptr)
    ADD ESP,0x4                         ; 0049ff0c
    PUSH 0x1                            ; 0049ff0f
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0 ; 0049ff11
        ;   XREF to: 00526cb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0(int enable)
    JMP 0x0049faa3                      ; 0049ff16
        ;   XREF to: 0049faa3 (UNCONDITIONAL_JUMP)  ; LAB_0049faa3
    PUSH 0xf0                           ; 0049ff1b
        ;   Label: LAB_0049ff1b
    PUSH 0x1                            ; 0049ff20
    PUSH 0x1                            ; 0049ff22
    MOV EAX,[0x005be368]                ; 0049ff24 | g_CDemonSet_PTR_005be368
    PUSH EAX                            ; 0049ff29 | g_CDemonSet_01e57284
    JMP 0x0049fb07                      ; 0049ff2a
        ;   XREF to: 0049fb07 (UNCONDITIONAL_JUMP)  ; LAB_0049fb07
    PUSH 0x1d                           ; 0049ff2f
        ;   Label: LAB_0049ff2f
    MOV EAX,[0x005bac64]                ; 0049ff31 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049ff36 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049ff37 | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049ff39
    ADD ESP,0x8                         ; 0049ff3b
    TEST EAX,EAX                        ; 0049ff3e
    JZ 0x0049fb25                       ; 0049ff40
        ;   XREF to: 0049fb25 (CONDITIONAL_JUMP)  ; LAB_0049fb25
    PUSH 0x2f                           ; 0049ff46
    MOV EAX,[0x005bac64]                ; 0049ff48 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049ff4d | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049ff4e | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 0049ff50
    ADD ESP,0x8                         ; 0049ff53
    TEST EAX,EAX                        ; 0049ff56
    JZ 0x0049fb25                       ; 0049ff58
        ;   XREF to: 0049fb25 (CONDITIONAL_JUMP)  ; LAB_0049fb25
    CMP dword ptr [0x005b7620],0x1e0    ; 0049ff5e | g_WindowHeight
    JL 0x0049fb25                       ; 0049ff68
        ;   XREF to: 0049fb25 (CONDITIONAL_JUMP)  ; LAB_0049fb25
    CMP dword ptr [EBX + 0x1e8],0x0     ; 0049ff6e
    SETZ AL                             ; 0049ff75
    AND EAX,0xff                        ; 0049ff78
    MOV dword ptr [EBX + 0x1e8],EAX     ; 0049ff7d
    JMP 0x0049fb25                      ; 0049ff83
        ;   XREF to: 0049fb25 (UNCONDITIONAL_JUMP)  ; LAB_0049fb25
    PUSH ECX                            ; 0049ff88
        ;   Label: LAB_0049ff88
    PUSH EBX                            ; 0049ff89
    CALL core_game.cpp_CGame_FUN_004a3b90 ; 0049ff8a
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_FUN_004a3b90(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 0049ff8f
    JMP 0x0049fb5a                      ; 0049ff92
        ;   XREF to: 0049fb5a (UNCONDITIONAL_JUMP)  ; LAB_0049fb5a
    PUSH ESI                            ; 0049ff97
        ;   Label: LAB_0049ff97
    PUSH EBX                            ; 0049ff98
    CALL core_game.cpp_CGame_FUN_004a3b90 ; 0049ff99
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_FUN_004a3b90(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 0049ff9e
    JMP 0x0049fb7b                      ; 0049ffa1
        ;   XREF to: 0049fb7b (UNCONDITIONAL_JUMP)  ; LAB_0049fb7b
    PUSH 0x582a6a                       ; 0049ffa6 | = "quicksavedgame.noc"
        ;   Label: LAB_0049ffa6
    PUSH EBX                            ; 0049ffab
    CALL core_game.cpp_CGame_FUN_004a3b90 ; 0049ffac
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_FUN_004a3b90(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 0049ffb1
    PUSH 0x40000000                     ; 0049ffb4
    PUSH 0x582a7d                       ; 0049ffb9 | = "Quick Save"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 0049ffbe
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 0049ffc3
    PUSH EAX                            ; 0049ffc6
    PUSH EBX                            ; 0049ffc7
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 0049ffc8
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 0049ffcd
    JMP 0x0049fbb7                      ; 0049ffd0
        ;   XREF to: 0049fbb7 (UNCONDITIONAL_JUMP)  ; LAB_0049fbb7
    PUSH 0x43                           ; 0049ffd5
        ;   Label: LAB_0049ffd5
    MOV EAX,[0x005bac64]                ; 0049ffd7 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 0049ffdc | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 0049ffdd | g_CKeys_01cc30e4
    CALL dword ptr [EDI]                ; 0049ffdf
    ADD ESP,0x8                         ; 0049ffe1
    TEST EAX,EAX                        ; 0049ffe4
    JZ 0x0049fbc4                       ; 0049ffe6
        ;   XREF to: 0049fbc4 (CONDITIONAL_JUMP)  ; LAB_0049fbc4
    PUSH 0x582a88                       ; 0049ffec | = "rb"
    PUSH 0x582a8b                       ; 0049fff1 | = "quicksavedgame.noc"
    PUSH 0x582a9e                       ; 0049fff6 | = "save"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0049fffb
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004a0000
    TEST EAX,EAX                        ; 004a0003
    JZ 0x004a0069                       ; 004a0005
        ;   XREF to: 004a0069 (CONDITIONAL_JUMP)  ; LAB_004a0069
    PUSH EAX                            ; 004a0007
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004a0008
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004a000d
    PUSH 0x582aa3                       ; 004a0010 | = "Restore quick saved game?"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a0015
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a001a
    PUSH EAX                            ; 004a001d
    MOV EDX,dword ptr [0x005b6d50]      ; 004a001e | g_CEditorTools_PTR_005b6d50
    PUSH EDX                            ; 004a0024
    CALL shape_edittool.cpp_FUN_00470230 ; 004a0025
        ;   XREF to: 00470230 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00470230()
    ADD ESP,0x8                         ; 004a002a
    TEST EAX,EAX                        ; 004a002d
    JZ 0x0049fbc4                       ; 004a002f
        ;   XREF to: 0049fbc4 (CONDITIONAL_JUMP)  ; LAB_0049fbc4
    MOV ESI,0x582abd                    ; 004a0035 | = "quicksavedgame.noc"
    LEA EDI,[EBX + 0x9c8]               ; 004a003a
    MOV dword ptr [EBX + 0x9c4],0x1     ; 004a0040
    PUSH EDI                            ; 004a004a
    MOV AL,byte ptr [ESI]               ; 004a004b | = "quicksavedgame.noc" | s_quicksavedgame_noc_00582abd+2
        ;   Label: LAB_004a004b
    MOV byte ptr [EDI],AL               ; 004a004d
    CMP AL,0x0                          ; 004a004f
    JZ 0x004a0063                       ; 004a0051
        ;   XREF to: 004a0063 (CONDITIONAL_JUMP)  ; LAB_004a0063
    MOV AL,byte ptr [ESI + 0x1]         ; 004a0053 | s_quicksavedgame_noc_00582abd+1 | s_quicksavedgame_noc_00582abd+3
    ADD ESI,0x2                         ; 004a0056
    MOV byte ptr [EDI + 0x1],AL         ; 004a0059
    ADD EDI,0x2                         ; 004a005c
    CMP AL,0x0                          ; 004a005f
    JNZ 0x004a004b                      ; 004a0061
        ;   XREF to: 004a004b (CONDITIONAL_JUMP)  ; LAB_004a004b
    POP EDI                             ; 004a0063
        ;   Label: LAB_004a0063
    JMP 0x0049fbc4                      ; 004a0064
        ;   XREF to: 0049fbc4 (UNCONDITIONAL_JUMP)  ; LAB_0049fbc4
    PUSH 0x40000000                     ; 004a0069
        ;   Label: LAB_004a0069
    PUSH 0x582ad0                       ; 004a006e | = "No quicked saved game to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004a0073
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004a0078
    PUSH EAX                            ; 004a007b
    PUSH EBX                            ; 004a007c
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 004a007d
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_0049aa30(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004a0082
    JMP 0x0049fbc4                      ; 004a0085
        ;   XREF to: 0049fbc4 (UNCONDITIONAL_JUMP)  ; LAB_0049fbc4
    PUSH 0x582aee                       ; 004a008a | BYTE_ARRAY_00582aee
        ;   Label: LAB_004a008a
    CALL support_newmsg.cpp_decryptMessage_FUN_004ee3f0 ; 004a008f
        ;   XREF to: 004ee3f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_decryptMessage_FUN_004ee3f0(char * encrypted_msg)
    ADD ESP,0x4                         ; 004a0094
    PUSH EAX                            ; 004a0097
    CALL crt_env.c_getenv_FUN_00566e10  ; 004a0098
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_00566e10(char * name)
    ADD ESP,0x4                         ; 004a009d
    TEST EAX,EAX                        ; 004a00a0
    JNZ 0x0049fbfa                      ; 004a00a2
        ;   XREF to: 0049fbfa (CONDITIONAL_JUMP)  ; LAB_0049fbfa
    JMP 0x0049fc23                      ; 004a00a8
        ;   XREF to: 0049fc23 (UNCONDITIONAL_JUMP)  ; LAB_0049fc23
    MOV EAX,[0x005be220]                ; 004a00ad | DAT_005be220
        ;   Label: LAB_004a00ad
    CMP dword ptr [EAX + 0x18],0x2      ; 004a00b2 | g_CScript_01e56da0.script_state
    JZ 0x004a010c                       ; 004a00b6
        ;   XREF to: 004a010c (CONDITIONAL_JUMP)  ; LAB_004a010c
    PUSH 0x3f                           ; 004a00b8
    MOV EAX,[0x005bac64]                ; 004a00ba | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a00bf | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 004a00c0 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 004a00c2
    ADD ESP,0x8                         ; 004a00c5
    TEST EAX,EAX                        ; 004a00c8
    JZ 0x004a010c                       ; 004a00ca
        ;   XREF to: 004a010c (CONDITIONAL_JUMP)  ; LAB_004a010c
    PUSH 0xf0                           ; 004a00cc
    PUSH 0x0                            ; 004a00d1
    PUSH 0x0                            ; 004a00d3
    MOV ECX,dword ptr [0x005be368]      ; 004a00d5 | g_CDemonSet_PTR_005be368
    PUSH ECX                            ; 004a00db | g_CDemonSet_01e57284
    MOV dword ptr [EBX + 0x278],0x1     ; 004a00dc
    CALL core_set.cpp_CDemonSet_FUN_005090f0 ; 004a00e6
        ;   XREF to: 005090f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_005090f0(CDemonSet * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    MOV EAX,[0x005be220]                ; 004a00eb | DAT_005be220
    MOV dword ptr [EBX + 0x1dc],0x1     ; 004a00f0
    MOV ESI,dword ptr [EAX + 0x18]      ; 004a00fa | g_CScript_01e56da0.script_state
    ADD ESP,0x10                        ; 004a00fd
    CMP ESI,0x1                         ; 004a0100
    JNZ 0x004a0170                      ; 004a0103
        ;   XREF to: 004a0170 (CONDITIONAL_JUMP)  ; LAB_004a0170
    MOV dword ptr [EAX + 0x18],0x0      ; 004a0105 | g_CScript_01e56da0.script_state
    CMP dword ptr [EBX + 0x1dc],0x0     ; 004a010c
        ;   Label: LAB_004a010c
    JZ 0x0049fc30                       ; 004a0113
        ;   XREF to: 0049fc30 (CONDITIONAL_JUMP)  ; LAB_0049fc30
    MOV EAX,[0x005be220]                ; 004a0119 | DAT_005be220
    CMP dword ptr [EAX + 0x18],0x2      ; 004a011e | g_CScript_01e56da0.script_state
    JZ 0x004a0179                       ; 004a0122
        ;   XREF to: 004a0179 (CONDITIONAL_JUMP)  ; LAB_004a0179
    PUSH 0x3f                           ; 004a0124
        ;   Label: LAB_004a0124
    MOV EAX,[0x005bac64]                ; 004a0126 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a012b | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 004a012c | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 004a012e
    ADD ESP,0x8                         ; 004a0131
    TEST EAX,EAX                        ; 004a0134
    JZ 0x004a0144                       ; 004a0136
        ;   XREF to: 004a0144 (CONDITIONAL_JUMP)  ; LAB_004a0144
    MOV EAX,[0x005be220]                ; 004a0138 | DAT_005be220
    MOV dword ptr [EAX + 0x18],0x0      ; 004a013d | g_CScript_01e56da0.script_state
    PUSH 0x43                           ; 004a0144
        ;   Label: LAB_004a0144
    MOV EAX,[0x005bac64]                ; 004a0146 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a014b | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 004a014c | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 004a014e
    ADD ESP,0x8                         ; 004a0151
    TEST EAX,EAX                        ; 004a0154
    JZ 0x0049fc30                       ; 004a0156
        ;   XREF to: 0049fc30 (CONDITIONAL_JUMP)  ; LAB_0049fc30
    MOV ECX,dword ptr [0x005be220]      ; 004a015c | DAT_005be220
    PUSH ECX                            ; 004a0162
    CALL core_script.cpp_CScript_FUN_00504d60 ; 004a0163
        ;   XREF to: 00504d60 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_FUN_00504d60(CScript * this_ptr)
    ADD ESP,0x4                         ; 004a0168
    JMP 0x0049fc30                      ; 004a016b
        ;   XREF to: 0049fc30 (UNCONDITIONAL_JUMP)  ; LAB_0049fc30
    MOV dword ptr [EAX + 0x18],0x1      ; 004a0170 | g_CScript_01e56da0.script_state
        ;   Label: LAB_004a0170
    JMP 0x004a010c                      ; 004a0177
        ;   XREF to: 004a010c (UNCONDITIONAL_JUMP)  ; LAB_004a010c
    PUSH 0x44                           ; 004a0179
        ;   Label: LAB_004a0179
    MOV EAX,[0x005bac64]                ; 004a017b | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a0180 | g_CKeys_01cc30e4
    MOV EDI,dword ptr [EAX]             ; 004a0181 | g_CKeys_01cc30e4
    CALL dword ptr [EDI + 0x4]          ; 004a0183
    ADD ESP,0x8                         ; 004a0186
    TEST EAX,EAX                        ; 004a0189
    JZ 0x004a0124                       ; 004a018b
        ;   XREF to: 004a0124 (CONDITIONAL_JUMP)  ; LAB_004a0124
    MOV EAX,[0x005be220]                ; 004a018d | DAT_005be220
    MOV dword ptr [EAX + 0x18],0x1      ; 004a0192 | g_CScript_01e56da0.script_state
    JMP 0x004a0124                      ; 004a0199
        ;   XREF to: 004a0124 (UNCONDITIONAL_JUMP)  ; LAB_004a0124
    PUSH 0x38                           ; 004a019b
        ;   Label: LAB_004a019b
    MOV EAX,[0x005bac64]                ; 004a019d | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a01a2 | g_CKeys_01cc30e4
    MOV EBX,dword ptr [EAX]             ; 004a01a3 | g_CKeys_01cc30e4
    CALL dword ptr [EBX]                ; 004a01a5
    ADD ESP,0x8                         ; 004a01a7
    TEST EAX,EAX                        ; 004a01aa
    JZ 0x0049fd9f                       ; 004a01ac
        ;   XREF to: 0049fd9f (CONDITIONAL_JUMP)  ; LAB_0049fd9f
    PUSH 0x1e                           ; 004a01b2
    MOV EAX,[0x005bac64]                ; 004a01b4 | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004a01b9 | g_CKeys_01cc30e4
    MOV EBX,dword ptr [EAX]             ; 004a01ba | g_CKeys_01cc30e4
    CALL dword ptr [EBX + 0x4]          ; 004a01bc
    ADD ESP,0x8                         ; 004a01bf
    TEST EAX,EAX                        ; 004a01c2
    JZ 0x0049fd9f                       ; 004a01c4
        ;   XREF to: 0049fd9f (CONDITIONAL_JUMP)  ; LAB_0049fd9f
    PUSH 0x2a                           ; 004a01ca
    MOV EAX,[0x005bac64]                ; 004a01cc | g_CKeys_PTR_005bac64
    MOV EBX,0x3ca3d70a                  ; 004a01d1
    PUSH EAX                            ; 004a01d6 | g_CKeys_01cc30e4
    MOV dword ptr [ESP + 0x210],EBX     ; 004a01d7
    MOV EBX,dword ptr [EAX]             ; 004a01de | g_CKeys_01cc30e4
    CALL dword ptr [EBX]                ; 004a01e0
    ADD ESP,0x8                         ; 004a01e2
    TEST EAX,EAX                        ; 004a01e5
    JNZ 0x004a0245                      ; 004a01e7
        ;   XREF to: 004a0245 (CONDITIONAL_JUMP)  ; LAB_004a0245
    MOV EAX,[0x01fb96f0]                ; 004a01e9 | g_CDemonCamera_01fb8508.corona_blend_factor
        ;   Label: LAB_004a01e9
    MOV dword ptr [ESP + 0x204],EAX     ; 004a01ee
    FILD dword ptr [ESP + 0x204]        ; 004a01f5
    FMUL double ptr [0x00582b4a]        ; 004a01fc | DOUBLE_00582b4a
    FADD float ptr [ESP + 0x208]        ; 004a0202
    FST float ptr [ESP]                 ; 004a0209
    FLDZ                                ; 004a020c
    FCOMPP                              ; 004a020e
    FNSTSW AX                           ; 004a0210
    SAHF                                ; 004a0212
    JBE 0x004a021a                      ; 004a0213
        ;   XREF to: 004a021a (CONDITIONAL_JUMP)  ; LAB_004a021a
    XOR EDI,EDI                         ; 004a0215
    MOV dword ptr [ESP],EDI             ; 004a0217
    FLD float ptr [ESP]                 ; 004a021a
        ;   Label: LAB_004a021a
    FLD1                                ; 004a021d
    FCOMPP                              ; 004a021f
    FNSTSW AX                           ; 004a0221
    SAHF                                ; 004a0223
    JC 0x004a0252                       ; 004a0224
        ;   XREF to: 004a0252 (CONDITIONAL_JUMP)  ; LAB_004a0252
    XOR EBX,EBX                         ; 004a0226
        ;   Label: LAB_004a0226
    MOV EAX,[0x005be368]                ; 004a0228 | g_CDemonSet_PTR_005be368 | g_CDemonSet_01e57284
        ;   Label: LAB_004a0228
    CMP EBX,dword ptr [EAX]             ; 004a022d | g_CDemonSet_01e57284
    JGE 0x0049fd9f                      ; 004a022f
        ;   XREF to: 0049fd9f (CONDITIONAL_JUMP)  ; LAB_0049fd9f
    PUSH dword ptr [ESP]                ; 004a0235
    PUSH EBX                            ; 004a0238
    PUSH EAX                            ; 004a0239 | g_CDemonSet_01e57284
    CALL core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0 ; 004a023a
        ;   XREF to: 0050e4c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_0050e4c0(CDemonSet * this_ptr, int index, float value)
    INC EBX                             ; 004a023f
    ADD ESP,0xc                         ; 004a0240
    JMP 0x004a0228                      ; 004a0243
        ;   XREF to: 004a0228 (UNCONDITIONAL_JUMP)  ; LAB_004a0228
    MOV dword ptr [ESP + 0x208],0xbca3d70a ; 004a0245
        ;   Label: LAB_004a0245
    JMP 0x004a01e9                      ; 004a0250
        ;   XREF to: 004a01e9 (UNCONDITIONAL_JUMP)  ; LAB_004a01e9
    MOV dword ptr [ESP],0x3f800000      ; 004a0252
        ;   Label: LAB_004a0252
    JMP 0x004a0226                      ; 004a0259
        ;   XREF to: 004a0226 (UNCONDITIONAL_JUMP)  ; LAB_004a0226

