; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004d1a80(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfa6d
;
; Referenced Globals:
;   TerminatedCString s_GoToMap_005e1a0c
;   TerminatedCString s_GoToCompass_005e1a14
;   TerminatedCString s_UseSPS_005e1a20
;   TerminatedCString s_SPOOKHOUSE_005e1a27
;   TerminatedCString s_quicksavedgame_noc_005e1a32
;   TerminatedCString s_Quick_Save_005e1a45
;   undefined4 DAT_005e1a50
;   TerminatedCString s_quicksavedgame_noc_005e1a53
;   undefined4 DAT_005e1a66
;   TerminatedCString s_Restore_quick_saved_game_005e1a6b
;   TerminatedCString s_quicksavedgame_noc_005e1a85
;   undefined4 s_quicksavedgame_noc_005e1a85+1
;   undefined4 s_quicksavedgame_noc_005e1a85+2
;   undefined4 s_quicksavedgame_noc_005e1a85+3
;   TerminatedCString s_No_quicked_saved_game_to_005e1a98
;   ... and 27 more
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_game.cpp_CGame_displayMessage_FUN_004cc190
;   core_game.cpp_CGame_promptLoadGame_FUN_004d85f0
;   core_game.cpp_FUN_004d6420
;   core_script.cpp_CScript_resetDialogState_FUN_0054ae10
;   core_set.cpp_CDemonSet_reinitCamera_FUN_0054fbf0
;   core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0
;   core_set.cpp_CDemonSet_setGamma_FUN_00555830
;   core_setdir.cpp_FUN_00559f80
;   core_sound.cpp_CSound_shutdown_FUN_0057cdb0
;   core_sound.cpp_FUN_0057cc00
;   crt_env.c_getenv_FUN_005c3050
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_unknown.c_sprintf_FUN_005bfb40
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d1a80
        ;   Label: core_game.cpp_CGame_processHotkeys_FUN_004d1a80
    PUSH ESI                            ; 004d1a81
    PUSH EDI                            ; 004d1a82
    PUSH EBP                            ; 004d1a83
    MOV EBP,ESP                         ; 004d1a84
    SUB ESP,0x20c                       ; 004d1a86
    AND ESP,0xfffffff8                  ; 004d1a8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d1a8f
    CMP dword ptr [0x01cd01f8],0x0      ; 004d1a92 | DAT_01cd01f8
    JNZ 0x004d1f13                      ; 004d1a99
        ;   XREF to: 004d1f13 (CONDITIONAL_JUMP)  ; LAB_004d1f13
    CMP dword ptr [EBX + 0xe0],0x0      ; 004d1a9f
    JZ 0x004d1f1a                       ; 004d1aa6
        ;   XREF to: 004d1f1a (CONDITIONAL_JUMP)  ; LAB_004d1f1a
    CMP dword ptr [EBX + 0x22c],0x0     ; 004d1aac
        ;   Label: LAB_004d1aac
    JZ 0x004d1b0c                       ; 004d1ab3
        ;   XREF to: 004d1b0c (CONDITIONAL_JUMP)  ; LAB_004d1b0c
    PUSH 0x1d                           ; 004d1ab5
    MOV EAX,[0x0061f2a4]                ; 004d1ab7 | DAT_0061f2a4
    PUSH EAX                            ; 004d1abc | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1abd | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1abf
    ADD ESP,0x8                         ; 004d1ac1
    TEST EAX,EAX                        ; 004d1ac4
    JZ 0x004d1b0c                       ; 004d1ac6
        ;   XREF to: 004d1b0c (CONDITIONAL_JUMP)  ; LAB_004d1b0c
    PUSH 0x15                           ; 004d1ac8
    MOV EAX,[0x0061f2a4]                ; 004d1aca | DAT_0061f2a4
    PUSH EAX                            ; 004d1acf | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1ad0 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1ad2
    ADD ESP,0x8                         ; 004d1ad5
    TEST EAX,EAX                        ; 004d1ad8
    JZ 0x004d1b0c                       ; 004d1ada
        ;   XREF to: 004d1b0c (CONDITIONAL_JUMP)  ; LAB_004d1b0c
    MOV EAX,0x1                         ; 004d1adc
    MOV ESI,dword ptr [EBX + 0x218]     ; 004d1ae1
    SUB EAX,ESI                         ; 004d1ae7
    MOV dword ptr [EBX + 0x218],EAX     ; 004d1ae9
    JZ 0x004d211f                       ; 004d1aef
        ;   XREF to: 004d211f (CONDITIONAL_JUMP)  ; LAB_004d211f
    MOV ECX,dword ptr [0x006236b8]      ; 004d1af5 | DAT_006236b8
    XOR EDX,EDX                         ; 004d1afb
    PUSH ECX                            ; 004d1afd
    MOV dword ptr [0x01c43544],EDX      ; 004d1afe | DAT_01c43544
    CALL core_sound.cpp_CSound_shutdown_FUN_0057cdb0 ; 004d1b04
        ;   XREF to: 0057cdb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0057cdb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d1b09
        ;   Label: LAB_004d1b09
    CMP dword ptr [EBX + 0x22c],0x0     ; 004d1b0c
        ;   Label: LAB_004d1b0c
    JZ 0x004d212f                       ; 004d1b13
        ;   XREF to: 004d212f (CONDITIONAL_JUMP)  ; LAB_004d212f
    PUSH 0x1d                           ; 004d1b19
        ;   Label: LAB_004d1b19
    MOV EAX,[0x0061f2a4]                ; 004d1b1b | DAT_0061f2a4
    PUSH EAX                            ; 004d1b20 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1b21 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1b23
    ADD ESP,0x8                         ; 004d1b25
    TEST EAX,EAX                        ; 004d1b28
    JZ 0x004d1b53                       ; 004d1b2a
        ;   XREF to: 004d1b53 (CONDITIONAL_JUMP)  ; LAB_004d1b53
    PUSH 0x2c                           ; 004d1b2c
    MOV EAX,[0x0061f2a4]                ; 004d1b2e | DAT_0061f2a4
    PUSH EAX                            ; 004d1b33 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1b34 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1b36
    ADD ESP,0x8                         ; 004d1b39
    TEST EAX,EAX                        ; 004d1b3c
    JZ 0x004d1b53                       ; 004d1b3e
        ;   XREF to: 004d1b53 (CONDITIONAL_JUMP)  ; LAB_004d1b53
    MOV EAX,0x1                         ; 004d1b40
    MOV EDI,dword ptr [EBX + 0x200]     ; 004d1b45
    SUB EAX,EDI                         ; 004d1b4b
    MOV dword ptr [EBX + 0x200],EAX     ; 004d1b4d
    PUSH 0x38                           ; 004d1b53
        ;   Label: LAB_004d1b53
    MOV EAX,[0x0061f2a4]                ; 004d1b55 | DAT_0061f2a4
    PUSH EAX                            ; 004d1b5a | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1b5b | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1b5d
    ADD ESP,0x8                         ; 004d1b5f
    TEST EAX,EAX                        ; 004d1b62
    JZ 0x004d1b8e                       ; 004d1b64
        ;   XREF to: 004d1b8e (CONDITIONAL_JUMP)  ; LAB_004d1b8e
    PUSH 0x32                           ; 004d1b66
    MOV EAX,[0x0061f2a4]                ; 004d1b68 | DAT_0061f2a4
    PUSH EAX                            ; 004d1b6d | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1b6e | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1b70
    ADD ESP,0x8                         ; 004d1b73
    TEST EAX,EAX                        ; 004d1b76
    JZ 0x004d1b8e                       ; 004d1b78
        ;   XREF to: 004d1b8e (CONDITIONAL_JUMP)  ; LAB_004d1b8e
    CMP dword ptr [0x01d39d34],0x0      ; 004d1b7a | DAT_01d39d34
    SETZ AL                             ; 004d1b81
    AND EAX,0xff                        ; 004d1b84
    MOV [0x01d39d34],EAX                ; 004d1b89 | DAT_01d39d34
    CMP dword ptr [EBX + 0x1f8],0x0     ; 004d1b8e
        ;   Label: LAB_004d1b8e
    JZ 0x004d2149                       ; 004d1b95
        ;   XREF to: 004d2149 (CONDITIONAL_JUMP)  ; LAB_004d2149
    PUSH 0x1d                           ; 004d1b9b
        ;   Label: LAB_004d1b9b
    MOV EAX,[0x0061f2a4]                ; 004d1b9d | DAT_0061f2a4
    PUSH EAX                            ; 004d1ba2 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1ba3 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1ba5
    ADD ESP,0x8                         ; 004d1ba7
    TEST EAX,EAX                        ; 004d1baa
    JZ 0x004d1be8                       ; 004d1bac
        ;   XREF to: 004d1be8 (CONDITIONAL_JUMP)  ; LAB_004d1be8
    PUSH 0x32                           ; 004d1bae
    MOV EAX,[0x0061f2a4]                ; 004d1bb0 | DAT_0061f2a4
    PUSH EAX                            ; 004d1bb5 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1bb6 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1bb8
    ADD ESP,0x8                         ; 004d1bbb
    TEST EAX,EAX                        ; 004d1bbe
    JZ 0x004d1be8                       ; 004d1bc0
        ;   XREF to: 004d1be8 (CONDITIONAL_JUMP)  ; LAB_004d1be8
    CALL sound_sndmain.cpp_isSoundMuted_FUN_005735f0 ; 004d1bc2
        ;   XREF to: 005735f0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundMuted_FUN_005735f0()
        ;   Label: LAB_004d1bc2
    TEST EAX,EAX                        ; 004d1bc7
    JZ 0x004d2166                       ; 004d1bc9
        ;   XREF to: 004d2166 (CONDITIONAL_JUMP)  ; LAB_004d2166
    PUSH 0x0                            ; 004d1bcf
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00573600 ; 004d1bd1
        ;   XREF to: 00573600 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00573600(int muted)
    ADD ESP,0x4                         ; 004d1bd6
    MOV EDI,dword ptr [0x006236b8]      ; 004d1bd9 | DAT_006236b8
    PUSH EDI                            ; 004d1bdf
    CALL core_sound.cpp_FUN_0057cc00    ; 004d1be0
        ;   XREF to: 0057cc00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057cc00(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d1be5
        ;   Label: LAB_004d1be5
    CMP dword ptr [EBX + 0x22c],0x0     ; 004d1be8
        ;   Label: LAB_004d1be8
    JZ 0x004d1c51                       ; 004d1bef
        ;   XREF to: 004d1c51 (CONDITIONAL_JUMP)  ; LAB_004d1c51
    PUSH 0x1d                           ; 004d1bf1
    MOV EAX,[0x0061f2a4]                ; 004d1bf3 | DAT_0061f2a4
    PUSH EAX                            ; 004d1bf8 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1bf9 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1bfb
    ADD ESP,0x8                         ; 004d1bfd
    TEST EAX,EAX                        ; 004d1c00
    JZ 0x004d1c51                       ; 004d1c02
        ;   XREF to: 004d1c51 (CONDITIONAL_JUMP)  ; LAB_004d1c51
    PUSH 0x11                           ; 004d1c04
    MOV EAX,[0x0061f2a4]                ; 004d1c06 | DAT_0061f2a4
    PUSH EAX                            ; 004d1c0b | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1c0c | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1c0e
    ADD ESP,0x8                         ; 004d1c11
    TEST EAX,EAX                        ; 004d1c14
    JZ 0x004d1c51                       ; 004d1c16
        ;   XREF to: 004d1c51 (CONDITIONAL_JUMP)  ; LAB_004d1c51
    MOV EDX,dword ptr [0x0061b49c]      ; 004d1c18 | DAT_0061b49c
    CMP EDX,0x1e0                       ; 004d1c1e
    JL 0x004d1c51                       ; 004d1c24
        ;   XREF to: 004d1c51 (CONDITIONAL_JUMP)  ; LAB_004d1c51
    MOV EAX,0x1                         ; 004d1c26
    MOV ECX,dword ptr [EBX + 0x2a8]     ; 004d1c2b
    SUB EAX,ECX                         ; 004d1c31
    MOV dword ptr [EBX + 0x2a8],EAX     ; 004d1c33
    JNZ 0x004d2181                      ; 004d1c39
        ;   XREF to: 004d2181 (CONDITIONAL_JUMP)  ; LAB_004d2181
    PUSH EDX                            ; 004d1c3f
    PUSH EAX                            ; 004d1c40
    PUSH EAX                            ; 004d1c41
    MOV EDX,dword ptr [0x00622c18]      ; 004d1c42 | g_CDemonSetPtr
    PUSH EDX                            ; 004d1c48 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_reinitCamera_FUN_0054fbf0 ; 004d1c49
        ;   XREF to: 0054fbf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_reinitCamera_FUN_0054fbf0(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
        ;   Label: LAB_004d1c49
    ADD ESP,0x10                        ; 004d1c4e
    CMP dword ptr [EBX + 0x22c],0x0     ; 004d1c51
        ;   Label: LAB_004d1c51
    JZ 0x004d1c67                       ; 004d1c58
        ;   XREF to: 004d1c67 (CONDITIONAL_JUMP)  ; LAB_004d1c67
    CMP dword ptr [0x01cd0c38],0x0      ; 004d1c5a | DAT_01cd0c38
    JZ 0x004d2196                       ; 004d1c61
        ;   XREF to: 004d2196 (CONDITIONAL_JUMP)  ; LAB_004d2196
    PUSH 0x1d                           ; 004d1c67
        ;   Label: LAB_004d1c67
    MOV EAX,[0x0061f2a4]                ; 004d1c69 | DAT_0061f2a4
    PUSH EAX                            ; 004d1c6e | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1c6f | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1c71
    ADD ESP,0x8                         ; 004d1c73
    TEST EAX,EAX                        ; 004d1c76
    JZ 0x004d1c9c                       ; 004d1c78
        ;   XREF to: 004d1c9c (CONDITIONAL_JUMP)  ; LAB_004d1c9c
    PUSH 0x1f                           ; 004d1c7a
    MOV EAX,[0x0061f2a4]                ; 004d1c7c | DAT_0061f2a4
    PUSH EAX                            ; 004d1c81 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1c82 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1c84
    ADD ESP,0x8                         ; 004d1c87
    TEST EAX,EAX                        ; 004d1c8a
    JZ 0x004d1c9c                       ; 004d1c8c
        ;   XREF to: 004d1c9c (CONDITIONAL_JUMP)  ; LAB_004d1c9c
    MOV ECX,dword ptr [EBX + 0x244]     ; 004d1c8e
    TEST ECX,ECX                        ; 004d1c94
    JZ 0x004d21ef                       ; 004d1c96
        ;   XREF to: 004d21ef (CONDITIONAL_JUMP)  ; LAB_004d21ef
    PUSH 0x1d                           ; 004d1c9c
        ;   Label: LAB_004d1c9c
    MOV EAX,[0x0061f2a4]                ; 004d1c9e | DAT_0061f2a4
    PUSH EAX                            ; 004d1ca3 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1ca4 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1ca6
    ADD ESP,0x8                         ; 004d1ca8
    TEST EAX,EAX                        ; 004d1cab
    JZ 0x004d1cce                       ; 004d1cad
        ;   XREF to: 004d1cce (CONDITIONAL_JUMP)  ; LAB_004d1cce
    PUSH 0x7                            ; 004d1caf
    MOV EAX,[0x0061f2a4]                ; 004d1cb1 | DAT_0061f2a4
    PUSH EAX                            ; 004d1cb6 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1cb7 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1cb9
    ADD ESP,0x8                         ; 004d1cbc
    TEST EAX,EAX                        ; 004d1cbf
    JZ 0x004d1cce                       ; 004d1cc1
        ;   XREF to: 004d1cce (CONDITIONAL_JUMP)  ; LAB_004d1cce
    PUSH 0x0                            ; 004d1cc3
    PUSH EBX                            ; 004d1cc5
    CALL core_game.cpp_FUN_004d6420     ; 004d1cc6
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6420(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004d1ccb
    PUSH 0x3c                           ; 004d1cce
        ;   Label: LAB_004d1cce
    MOV EAX,[0x0061f2a4]                ; 004d1cd0 | DAT_0061f2a4
    PUSH EAX                            ; 004d1cd5 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1cd6 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1cd8
    ADD ESP,0x8                         ; 004d1cda
    TEST EAX,EAX                        ; 004d1cdd
    JZ 0x004d1cef                       ; 004d1cdf
        ;   XREF to: 004d1cef (CONDITIONAL_JUMP)  ; LAB_004d1cef
    MOV ESI,dword ptr [EBX + 0x244]     ; 004d1ce1
    TEST ESI,ESI                        ; 004d1ce7
    JZ 0x004d21fe                       ; 004d1ce9
        ;   XREF to: 004d21fe (CONDITIONAL_JUMP)  ; LAB_004d21fe
    PUSH 0x3d                           ; 004d1cef
        ;   Label: LAB_004d1cef
    MOV EAX,[0x0061f2a4]                ; 004d1cf1 | DAT_0061f2a4
    PUSH EAX                            ; 004d1cf6 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1cf7 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1cf9
    ADD ESP,0x8                         ; 004d1cfb
    TEST EAX,EAX                        ; 004d1cfe
    JZ 0x004d1d0b                       ; 004d1d00
        ;   XREF to: 004d1d0b (CONDITIONAL_JUMP)  ; LAB_004d1d0b
    PUSH EBX                            ; 004d1d02
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004d85f0 ; 004d1d03
        ;   XREF to: 004d85f0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004d85f0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d1d08
    PUSH 0x40                           ; 004d1d0b
        ;   Label: LAB_004d1d0b
    MOV EAX,[0x0061f2a4]                ; 004d1d0d | DAT_0061f2a4
    PUSH EAX                            ; 004d1d12 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1d13 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1d15
    ADD ESP,0x8                         ; 004d1d17
    TEST EAX,EAX                        ; 004d1d1a
    JZ 0x004d1d2b                       ; 004d1d1c
        ;   XREF to: 004d1d2b (CONDITIONAL_JUMP)  ; LAB_004d1d2b
    CMP dword ptr [EBX + 0x244],0x0     ; 004d1d1e
    JZ 0x004d220d                       ; 004d1d25
        ;   XREF to: 004d220d (CONDITIONAL_JUMP)  ; LAB_004d220d
    CMP dword ptr [EBX + 0x1f8],0x0     ; 004d1d2b
        ;   Label: LAB_004d1d2b
    JZ 0x004d223c                       ; 004d1d32
        ;   XREF to: 004d223c (CONDITIONAL_JUMP)  ; LAB_004d223c
    PUSH 0x3b                           ; 004d1d38
        ;   Label: LAB_004d1d38
    MOV EAX,[0x0061f2a4]                ; 004d1d3a | DAT_0061f2a4
    PUSH EAX                            ; 004d1d3f | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1d40 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1d42
    ADD ESP,0x8                         ; 004d1d45
    TEST EAX,EAX                        ; 004d1d48
    JZ 0x004d1d61                       ; 004d1d4a
        ;   XREF to: 004d1d61 (CONDITIONAL_JUMP)  ; LAB_004d1d61
    CMP dword ptr [EBX + 0xafc],0x0     ; 004d1d4c
    SETZ AL                             ; 004d1d53
    AND EAX,0xff                        ; 004d1d56
    MOV dword ptr [EBX + 0xafc],EAX     ; 004d1d5b
    CMP dword ptr [EBX + 0x22c],0x0     ; 004d1d61
        ;   Label: LAB_004d1d61
    JZ 0x004d22f1                       ; 004d1d68
        ;   XREF to: 004d22f1 (CONDITIONAL_JUMP)  ; LAB_004d22f1
    PUSH 0xe                            ; 004d1d6e
        ;   Label: LAB_004d1d6e
    MOV EAX,[0x0061f2a4]                ; 004d1d70 | DAT_0061f2a4
    PUSH EAX                            ; 004d1d75 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1d76 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1d78
    ADD ESP,0x8                         ; 004d1d7b
    TEST EAX,EAX                        ; 004d1d7e
    JZ 0x004d1d97                       ; 004d1d80
        ;   XREF to: 004d1d97 (CONDITIONAL_JUMP)  ; LAB_004d1d97
    CMP dword ptr [EBX + 0x2b0],0x0     ; 004d1d82
    SETZ AL                             ; 004d1d89
    AND EAX,0xff                        ; 004d1d8c
    MOV dword ptr [EBX + 0x2b0],EAX     ; 004d1d91
    CMP dword ptr [EBX + 0x218],0x0     ; 004d1d97
        ;   Label: LAB_004d1d97
    JZ 0x004d230b                       ; 004d1d9e
        ;   XREF to: 004d230b (CONDITIONAL_JUMP)  ; LAB_004d230b
    PUSH 0x57                           ; 004d1da4
        ;   Label: LAB_004d1da4
    MOV EAX,[0x0061f2a4]                ; 004d1da6 | DAT_0061f2a4
    PUSH EAX                            ; 004d1dab | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1dac | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1dae
    ADD ESP,0x8                         ; 004d1db1
    TEST EAX,EAX                        ; 004d1db4
    JZ 0x004d1e29                       ; 004d1db6
        ;   XREF to: 004d1e29 (CONDITIONAL_JUMP)  ; LAB_004d1e29
    MOV ESI,dword ptr [EBX + 0x240]     ; 004d1db8
    SUB ESI,0x400                       ; 004d1dbe
    MOV dword ptr [EBX + 0x240],ESI     ; 004d1dc4
    CMP ESI,0x8000                      ; 004d1dca
    JGE 0x004d1ddc                      ; 004d1dd0
        ;   XREF to: 004d1ddc (CONDITIONAL_JUMP)  ; LAB_004d1ddc
    MOV dword ptr [EBX + 0x240],0x8000  ; 004d1dd2
    FILD dword ptr [EBX + 0x240]        ; 004d1ddc
        ;   Label: LAB_004d1ddc
    FMUL double ptr [0x005e1adc]        ; 004d1de2 | DAT_005e1adc
    SUB ESP,0x8                         ; 004d1de8
    FSTP double ptr [ESP]               ; 004d1deb
    PUSH 0x5e1ac1                       ; 004d1dee | = "Gamma : %f"
    LEA EAX,[ESP + 0x10]                ; 004d1df3
    PUSH EAX                            ; 004d1df7
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004d1df8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d1dfd
    LEA EAX,[ESP + 0x4]                 ; 004d1e00
    PUSH 0x3f800000                     ; 004d1e04
    PUSH EAX                            ; 004d1e09
    PUSH EBX                            ; 004d1e0a
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d1e0b
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d1e10
    MOV EAX,dword ptr [EBX + 0x240]     ; 004d1e13
    PUSH EAX                            ; 004d1e19
    MOV EDX,dword ptr [0x00622c18]      ; 004d1e1a | g_CDemonSetPtr
    PUSH EDX                            ; 004d1e20
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00555830 ; 004d1e21
        ;   XREF to: 00555830 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_00555830(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004d1e26
    PUSH 0x58                           ; 004d1e29
        ;   Label: LAB_004d1e29
    MOV EAX,[0x0061f2a4]                ; 004d1e2b | DAT_0061f2a4
    PUSH EAX                            ; 004d1e30 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1e31 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1e33
    ADD ESP,0x8                         ; 004d1e36
    TEST EAX,EAX                        ; 004d1e39
    JZ 0x004d1eb3                       ; 004d1e3b
        ;   XREF to: 004d1eb3 (CONDITIONAL_JUMP)  ; LAB_004d1eb3
    MOV ECX,dword ptr [EBX + 0x240]     ; 004d1e3d
    ADD ECX,0x400                       ; 004d1e43
    MOV dword ptr [EBX + 0x240],ECX     ; 004d1e49
    CMP ECX,0x10000                     ; 004d1e4f
    JLE 0x004d1e61                      ; 004d1e55
        ;   XREF to: 004d1e61 (CONDITIONAL_JUMP)  ; LAB_004d1e61
    MOV dword ptr [EBX + 0x240],0x10000 ; 004d1e57
    FILD dword ptr [EBX + 0x240]        ; 004d1e61
        ;   Label: LAB_004d1e61
    FMUL double ptr [0x005e1adc]        ; 004d1e67 | DAT_005e1adc
    SUB ESP,0x8                         ; 004d1e6d
    FSTP double ptr [ESP]               ; 004d1e70
    PUSH 0x5e1acc                       ; 004d1e73 | = "Gamma : %f"
    LEA EAX,[ESP + 0x110]               ; 004d1e78
    PUSH EAX                            ; 004d1e7f
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004d1e80
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d1e85
    LEA EAX,[ESP + 0x104]               ; 004d1e88
    PUSH 0x3f800000                     ; 004d1e8f
    PUSH EAX                            ; 004d1e94
    PUSH EBX                            ; 004d1e95
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d1e96
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d1e9b
    MOV EDI,dword ptr [EBX + 0x240]     ; 004d1e9e
    PUSH EDI                            ; 004d1ea4
    MOV EAX,[0x00622c18]                ; 004d1ea5 | g_CDemonSetPtr
    PUSH EAX                            ; 004d1eaa
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00555830 ; 004d1eab
        ;   XREF to: 00555830 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_00555830(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004d1eb0
    CMP dword ptr [EBX + 0x22c],0x0     ; 004d1eb3
        ;   Label: LAB_004d1eb3
    JZ 0x004d1f06                       ; 004d1eba
        ;   XREF to: 004d1f06 (CONDITIONAL_JUMP)  ; LAB_004d1f06
    PUSH 0x1d                           ; 004d1ebc
    MOV EAX,[0x0061f2a4]                ; 004d1ebe | DAT_0061f2a4
    PUSH EAX                            ; 004d1ec3 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1ec4 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1ec6
    ADD ESP,0x8                         ; 004d1ec8
    TEST EAX,EAX                        ; 004d1ecb
    JZ 0x004d1f06                       ; 004d1ecd
        ;   XREF to: 004d1f06 (CONDITIONAL_JUMP)  ; LAB_004d1f06
    PUSH 0x23                           ; 004d1ecf
    MOV EAX,[0x0061f2a4]                ; 004d1ed1 | DAT_0061f2a4
    PUSH EAX                            ; 004d1ed6 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1ed7 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1ed9
    ADD ESP,0x8                         ; 004d1edc
    TEST EAX,EAX                        ; 004d1edf
    JZ 0x004d1f06                       ; 004d1ee1
        ;   XREF to: 004d1f06 (CONDITIONAL_JUMP)  ; LAB_004d1f06
    MOV EAX,[0x00622c18]                ; 004d1ee3 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aeb4]  ; 004d1ee8 | g_CDemonSetInstance.camera_enabled_flag
    TEST EAX,EAX                        ; 004d1eee
    SETZ AL                             ; 004d1ef0
    MOV EDI,EAX                         ; 004d1ef3
    MOV EAX,[0x00622c18]                ; 004d1ef5 | g_CDemonSetPtr
    AND EDI,0xff                        ; 004d1efa
    MOV dword ptr [EAX + 0x15aeb4],EDI  ; 004d1f00 | g_CDemonSetInstance.camera_enabled_flag
    CMP dword ptr [EBX + 0x22c],0x0     ; 004d1f06
        ;   Label: LAB_004d1f06
    JNZ 0x004d23f9                      ; 004d1f0d
        ;   XREF to: 004d23f9 (CONDITIONAL_JUMP)  ; LAB_004d23f9
    MOV ESP,EBP                         ; 004d1f13
        ;   Label: LAB_004d1f13
    POP EBP                             ; 004d1f15
    POP EDI                             ; 004d1f16
    POP ESI                             ; 004d1f17
    POP EBX                             ; 004d1f18
    RET                                 ; 004d1f19
    MOV ESI,dword ptr [EBX + 0x5c]      ; 004d1f1a
        ;   Label: LAB_004d1f1a
    MOV EAX,[0x0061f2a4]                ; 004d1f1d | DAT_0061f2a4
    PUSH ESI                            ; 004d1f22
    MOV EDI,dword ptr [EAX]             ; 004d1f23 | DAT_01d1bca0
    PUSH EAX                            ; 004d1f25 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1f26
    ADD ESP,0x8                         ; 004d1f29
    TEST EAX,EAX                        ; 004d1f2c
    JZ 0x004d1f44                       ; 004d1f2e
        ;   XREF to: 004d1f44 (CONDITIONAL_JUMP)  ; LAB_004d1f44
    PUSH 0x5e1a0c                       ; 004d1f30 | = "GoToMap"
    MOV EDI,dword ptr [0x0061b4d0]      ; 004d1f35 | DAT_0061b4d0
    PUSH EDI                            ; 004d1f3b
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004d1f3c
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004d1f41
    MOV EDX,dword ptr [EBX + 0x60]      ; 004d1f44
        ;   Label: LAB_004d1f44
    MOV EAX,[0x0061f2a4]                ; 004d1f47 | DAT_0061f2a4
    PUSH EDX                            ; 004d1f4c
    MOV EDI,dword ptr [EAX]             ; 004d1f4d | DAT_01d1bca0
    PUSH EAX                            ; 004d1f4f | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1f50
    ADD ESP,0x8                         ; 004d1f53
    TEST EAX,EAX                        ; 004d1f56
    JZ 0x004d1f6e                       ; 004d1f58
        ;   XREF to: 004d1f6e (CONDITIONAL_JUMP)  ; LAB_004d1f6e
    PUSH 0x5e1a14                       ; 004d1f5a | = "GoToCompass"
    MOV ECX,dword ptr [0x0061b4d0]      ; 004d1f5f | DAT_0061b4d0
    PUSH ECX                            ; 004d1f65
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004d1f66
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004d1f6b
    MOV ESI,dword ptr [EBX + 0x64]      ; 004d1f6e
        ;   Label: LAB_004d1f6e
    MOV EAX,[0x0061f2a4]                ; 004d1f71 | DAT_0061f2a4
    PUSH ESI                            ; 004d1f76
    MOV EDI,dword ptr [EAX]             ; 004d1f77 | DAT_01d1bca0
    PUSH EAX                            ; 004d1f79 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1f7a
    ADD ESP,0x8                         ; 004d1f7d
    TEST EAX,EAX                        ; 004d1f80
    JZ 0x004d1f9b                       ; 004d1f82
        ;   XREF to: 004d1f9b (CONDITIONAL_JUMP)  ; LAB_004d1f9b
    PUSH 0x1d                           ; 004d1f84
    MOV EAX,[0x0061f2a4]                ; 004d1f86 | DAT_0061f2a4
    PUSH EAX                            ; 004d1f8b | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1f8c | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1f8e
    ADD ESP,0x8                         ; 004d1f90
    TEST EAX,EAX                        ; 004d1f93
    JZ 0x004d20bb                       ; 004d1f95
        ;   XREF to: 004d20bb (CONDITIONAL_JUMP)  ; LAB_004d20bb
    MOV EDX,dword ptr [EBX + 0x58]      ; 004d1f9b
        ;   Label: LAB_004d1f9b
    MOV EAX,[0x0061f2a4]                ; 004d1f9e | DAT_0061f2a4
    PUSH EDX                            ; 004d1fa3
    MOV EDI,dword ptr [EAX]             ; 004d1fa4 | DAT_01d1bca0
    PUSH EAX                            ; 004d1fa6 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1fa7
    ADD ESP,0x8                         ; 004d1faa
    TEST EAX,EAX                        ; 004d1fad
    JZ 0x004d1fc8                       ; 004d1faf
        ;   XREF to: 004d1fc8 (CONDITIONAL_JUMP)  ; LAB_004d1fc8
    MOV EAX,[0x0061d418]                ; 004d1fb1 | g_CFieldNotesPtr
    MOV ECX,dword ptr [EAX + 0x40]      ; 004d1fb6 | g_CFieldNotesInstance.field64_0x40
    TEST ECX,ECX                        ; 004d1fb9
    JZ 0x004d20d4                       ; 004d1fbb
        ;   XREF to: 004d20d4 (CONDITIONAL_JUMP)  ; LAB_004d20d4
    MOV dword ptr [EAX + 0x40],0x0      ; 004d1fc1 | g_CFieldNotesInstance.field64_0x40
        ;   Label: LAB_004d1fc1
    MOV EAX,[0x0061d418]                ; 004d1fc8 | g_CFieldNotesPtr
        ;   Label: LAB_004d1fc8
    CMP byte ptr [EAX],0x0              ; 004d1fcd | g_CFieldNotesInstance
    JNZ 0x004d1fd9                      ; 004d1fd0
        ;   XREF to: 004d1fd9 (CONDITIONAL_JUMP)  ; LAB_004d1fd9
    MOV dword ptr [EAX + 0x40],0x0      ; 004d1fd2 | g_CFieldNotesInstance.field64_0x40
    CMP dword ptr [EBX + 0x22c],0x0     ; 004d1fd9
        ;   Label: LAB_004d1fd9
    JZ 0x004d2044                       ; 004d1fe0
        ;   XREF to: 004d2044 (CONDITIONAL_JUMP)  ; LAB_004d2044
    PUSH 0x1d                           ; 004d1fe2
    MOV EAX,[0x0061f2a4]                ; 004d1fe4 | DAT_0061f2a4
    PUSH EAX                            ; 004d1fe9 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1fea | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d1fec
    ADD ESP,0x8                         ; 004d1fee
    TEST EAX,EAX                        ; 004d1ff1
    JZ 0x004d2044                       ; 004d1ff3
        ;   XREF to: 004d2044 (CONDITIONAL_JUMP)  ; LAB_004d2044
    PUSH 0x12                           ; 004d1ff5
    MOV EAX,[0x0061f2a4]                ; 004d1ff7 | DAT_0061f2a4
    PUSH EAX                            ; 004d1ffc | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d1ffd | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d1fff
    ADD ESP,0x8                         ; 004d2002
    TEST EAX,EAX                        ; 004d2005
    JZ 0x004d2044                       ; 004d2007
        ;   XREF to: 004d2044 (CONDITIONAL_JUMP)  ; LAB_004d2044
    MOV EAX,0x1                         ; 004d2009
    MOV EDX,dword ptr [EBX + 0x2a4]     ; 004d200e
    SUB EAX,EDX                         ; 004d2014
    MOV dword ptr [EBX + 0x2a4],EAX     ; 004d2016
    JZ 0x004d2044                       ; 004d201c
        ;   XREF to: 004d2044 (CONDITIONAL_JUMP)  ; LAB_004d2044
    MOV EAX,[0x00622ad0]                ; 004d201e | g_CScriptPtr
    PUSH 0x1                            ; 004d2023
    MOV ESI,dword ptr [EAX + 0xc]       ; 004d2025 | g_CScriptInstance.focus_actor
    PUSH ESI                            ; 004d2028
    MOV EDI,dword ptr [0x00622c18]      ; 004d2029 | g_CDemonSetPtr
    PUSH EDI                            ; 004d202f | g_CDemonSetInstance
    CALL core_setdir.cpp_FUN_00559f80   ; 004d2030
        ;   XREF to: 00559f80 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00559f80()
    MOV EAX,[0x00622ad0]                ; 004d2035 | g_CScriptPtr
    ADD ESP,0xc                         ; 004d203a
    MOV dword ptr [EAX + 0x10],0x0      ; 004d203d | g_CScriptInstance.focus_actor_changed
    CMP dword ptr [EBX + 0x2a4],0x0     ; 004d2044
        ;   Label: LAB_004d2044
    JNZ 0x004d1aac                      ; 004d204b
        ;   XREF to: 004d1aac (CONDITIONAL_JUMP)  ; LAB_004d1aac
    PUSH 0x2e                           ; 004d2051
    MOV EAX,[0x0061f2a4]                ; 004d2053 | DAT_0061f2a4
    PUSH EAX                            ; 004d2058 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d2059 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d205b
    ADD ESP,0x8                         ; 004d205e
    TEST EAX,EAX                        ; 004d2061
    JZ 0x004d1aac                       ; 004d2063
        ;   XREF to: 004d1aac (CONDITIONAL_JUMP)  ; LAB_004d1aac
    PUSH 0x2a                           ; 004d2069
    MOV EAX,[0x0061f2a4]                ; 004d206b | DAT_0061f2a4
    PUSH EAX                            ; 004d2070 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d2071 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d2073
    ADD ESP,0x8                         ; 004d2075
    TEST EAX,EAX                        ; 004d2078
    JNZ 0x004d20fe                      ; 004d207a
        ;   XREF to: 004d20fe (CONDITIONAL_JUMP)  ; LAB_004d20fe
    MOV EDX,dword ptr [EBX + 0x2a0]     ; 004d2080
    INC EDX                             ; 004d2086
    MOV EAX,[0x00622c18]                ; 004d2087 | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x2a0],EDX     ; 004d208c
    CMP EDX,dword ptr [EAX]             ; 004d2092 | g_CDemonSetInstance
    JL 0x004d20a0                       ; 004d2094
        ;   XREF to: 004d20a0 (CONDITIONAL_JUMP)  ; LAB_004d20a0
    MOV dword ptr [EBX + 0x2a0],0x0     ; 004d2096
    MOV EAX,dword ptr [EBX + 0x2a0]     ; 004d20a0
        ;   Label: LAB_004d20a0
    PUSH EAX                            ; 004d20a6
    MOV EDX,dword ptr [0x00622c18]      ; 004d20a7 | g_CDemonSetPtr
    PUSH EDX                            ; 004d20ad | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 004d20ae
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004d20b3
    JMP 0x004d1aac                      ; 004d20b6
        ;   XREF to: 004d1aac (UNCONDITIONAL_JUMP)  ; LAB_004d1aac
    PUSH 0x5e1a20                       ; 004d20bb | = "UseSPS"
        ;   Label: LAB_004d20bb
    MOV EDI,dword ptr [0x0061b4d0]      ; 004d20c0 | DAT_0061b4d0
    PUSH EDI                            ; 004d20c6
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004d20c7
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004d20cc
    JMP 0x004d1f9b                      ; 004d20cf
        ;   XREF to: 004d1f9b (UNCONDITIONAL_JUMP)  ; LAB_004d1f9b
    MOV dword ptr [EAX + 0x40],0x1      ; 004d20d4 | g_CFieldNotesInstance.field64_0x40
        ;   Label: LAB_004d20d4
    CMP dword ptr [EBX + 0x244],0x0     ; 004d20db
    JZ 0x004d20e7                       ; 004d20e2
        ;   XREF to: 004d20e7 (CONDITIONAL_JUMP)  ; LAB_004d20e7
    MOV dword ptr [EAX + 0x40],ECX      ; 004d20e4 | g_CFieldNotesInstance.field64_0x40
    CMP dword ptr [0x007c3978],0x0      ; 004d20e7 | DAT_007c3978
        ;   Label: LAB_004d20e7
    JZ 0x004d1fc8                       ; 004d20ee
        ;   XREF to: 004d1fc8 (CONDITIONAL_JUMP)  ; LAB_004d1fc8
    MOV EAX,[0x0061d418]                ; 004d20f4 | g_CFieldNotesPtr
    JMP 0x004d1fc1                      ; 004d20f9
        ;   XREF to: 004d1fc1 (UNCONDITIONAL_JUMP)  ; LAB_004d1fc1
    MOV ESI,dword ptr [EBX + 0x2a0]     ; 004d20fe
        ;   Label: LAB_004d20fe
    DEC ESI                             ; 004d2104
    MOV dword ptr [EBX + 0x2a0],ESI     ; 004d2105
    TEST ESI,ESI                        ; 004d210b
    JGE 0x004d20a0                      ; 004d210d
        ;   XREF to: 004d20a0 (CONDITIONAL_JUMP)  ; LAB_004d20a0
    MOV EAX,[0x00622c18]                ; 004d210f | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX]             ; 004d2114 | g_CDemonSetInstance
    DEC EAX                             ; 004d2116
    MOV dword ptr [EBX + 0x2a0],EAX     ; 004d2117
    JMP 0x004d20a0                      ; 004d211d
        ;   XREF to: 004d20a0 (UNCONDITIONAL_JUMP)  ; LAB_004d20a0
    MOV EAX,[0x006236b8]                ; 004d211f | DAT_006236b8
        ;   Label: LAB_004d211f
    PUSH EAX                            ; 004d2124
    CALL core_sound.cpp_FUN_0057cc00    ; 004d2125
        ;   XREF to: 0057cc00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_FUN_0057cc00(CSound * this_ptr)
    JMP 0x004d1b09                      ; 004d212a
        ;   XREF to: 004d1b09 (UNCONDITIONAL_JUMP)  ; LAB_004d1b09
    PUSH 0x5e1a27                       ; 004d212f | = "SPOOKHOUSE"
        ;   Label: LAB_004d212f
    CALL crt_env.c_getenv_FUN_005c3050  ; 004d2134
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 004d2139
    TEST EAX,EAX                        ; 004d213c
    JNZ 0x004d1b19                      ; 004d213e
        ;   XREF to: 004d1b19 (CONDITIONAL_JUMP)  ; LAB_004d1b19
    JMP 0x004d1b53                      ; 004d2144
        ;   XREF to: 004d1b53 (UNCONDITIONAL_JUMP)  ; LAB_004d1b53
    PUSH 0x3f                           ; 004d2149
        ;   Label: LAB_004d2149
    MOV EAX,[0x0061f2a4]                ; 004d214b | DAT_0061f2a4
    PUSH EAX                            ; 004d2150 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d2151 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d2153
    ADD ESP,0x8                         ; 004d2156
    TEST EAX,EAX                        ; 004d2159
    JNZ 0x004d1bc2                      ; 004d215b
        ;   XREF to: 004d1bc2 (CONDITIONAL_JUMP)  ; LAB_004d1bc2
    JMP 0x004d1b9b                      ; 004d2161
        ;   XREF to: 004d1b9b (UNCONDITIONAL_JUMP)  ; LAB_004d1b9b
    MOV ESI,dword ptr [0x006236b8]      ; 004d2166 | DAT_006236b8
        ;   Label: LAB_004d2166
    PUSH ESI                            ; 004d216c
    CALL core_sound.cpp_CSound_shutdown_FUN_0057cdb0 ; 004d216d
        ;   XREF to: 0057cdb0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_0057cdb0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004d2172
    PUSH 0x1                            ; 004d2175
    CALL sound_sndmain.cpp_setSoundMuted_FUN_00573600 ; 004d2177
        ;   XREF to: 00573600 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundMuted_FUN_00573600(int muted)
    JMP 0x004d1be5                      ; 004d217c
        ;   XREF to: 004d1be5 (UNCONDITIONAL_JUMP)  ; LAB_004d1be5
    PUSH 0xf0                           ; 004d2181
        ;   Label: LAB_004d2181
    PUSH 0x1                            ; 004d2186
    PUSH 0x1                            ; 004d2188
    MOV EDI,dword ptr [0x00622c18]      ; 004d218a | g_CDemonSetPtr
    PUSH EDI                            ; 004d2190 | g_CDemonSetInstance
    JMP 0x004d1c49                      ; 004d2191
        ;   XREF to: 004d1c49 (UNCONDITIONAL_JUMP)  ; LAB_004d1c49
    PUSH 0x1d                           ; 004d2196
        ;   Label: LAB_004d2196
    MOV EAX,[0x0061f2a4]                ; 004d2198 | DAT_0061f2a4
    PUSH EAX                            ; 004d219d | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d219e | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d21a0
    ADD ESP,0x8                         ; 004d21a2
    TEST EAX,EAX                        ; 004d21a5
    JZ 0x004d1c67                       ; 004d21a7
        ;   XREF to: 004d1c67 (CONDITIONAL_JUMP)  ; LAB_004d1c67
    PUSH 0x2f                           ; 004d21ad
    MOV EAX,[0x0061f2a4]                ; 004d21af | DAT_0061f2a4
    PUSH EAX                            ; 004d21b4 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d21b5 | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d21b7
    ADD ESP,0x8                         ; 004d21ba
    TEST EAX,EAX                        ; 004d21bd
    JZ 0x004d1c67                       ; 004d21bf
        ;   XREF to: 004d1c67 (CONDITIONAL_JUMP)  ; LAB_004d1c67
    CMP dword ptr [0x0061b49c],0x1e0    ; 004d21c5 | DAT_0061b49c
    JL 0x004d1c67                       ; 004d21cf
        ;   XREF to: 004d1c67 (CONDITIONAL_JUMP)  ; LAB_004d1c67
    CMP dword ptr [EBX + 0x204],0x0     ; 004d21d5
    SETZ AL                             ; 004d21dc
    AND EAX,0xff                        ; 004d21df
    MOV dword ptr [EBX + 0x204],EAX     ; 004d21e4
    JMP 0x004d1c67                      ; 004d21ea
        ;   XREF to: 004d1c67 (UNCONDITIONAL_JUMP)  ; LAB_004d1c67
    PUSH ECX                            ; 004d21ef
        ;   Label: LAB_004d21ef
    PUSH EBX                            ; 004d21f0
    CALL core_game.cpp_FUN_004d6420     ; 004d21f1
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6420(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004d21f6
    JMP 0x004d1c9c                      ; 004d21f9
        ;   XREF to: 004d1c9c (UNCONDITIONAL_JUMP)  ; LAB_004d1c9c
    PUSH ESI                            ; 004d21fe
        ;   Label: LAB_004d21fe
    PUSH EBX                            ; 004d21ff
    CALL core_game.cpp_FUN_004d6420     ; 004d2200
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6420(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004d2205
    JMP 0x004d1cef                      ; 004d2208
        ;   XREF to: 004d1cef (UNCONDITIONAL_JUMP)  ; LAB_004d1cef
    PUSH 0x5e1a32                       ; 004d220d | = "quicksavedgame.noc"
        ;   Label: LAB_004d220d
    PUSH EBX                            ; 004d2212
    CALL core_game.cpp_FUN_004d6420     ; 004d2213
        ;   XREF to: 004d6420 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004d6420(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004d2218
    PUSH 0x40000000                     ; 004d221b
    PUSH 0x5e1a45                       ; 004d2220 | = "Quick Save"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d2225
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d222a
    PUSH EAX                            ; 004d222d
    PUSH EBX                            ; 004d222e
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d222f
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d2234
    JMP 0x004d1d2b                      ; 004d2237
        ;   XREF to: 004d1d2b (UNCONDITIONAL_JUMP)  ; LAB_004d1d2b
    PUSH 0x43                           ; 004d223c
        ;   Label: LAB_004d223c
    MOV EAX,[0x0061f2a4]                ; 004d223e | DAT_0061f2a4
    PUSH EAX                            ; 004d2243 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d2244 | DAT_01d1bca0
    CALL dword ptr [EDI]                ; 004d2246
    ADD ESP,0x8                         ; 004d2248
    TEST EAX,EAX                        ; 004d224b
    JZ 0x004d1d38                       ; 004d224d
        ;   XREF to: 004d1d38 (CONDITIONAL_JUMP)  ; LAB_004d1d38
    PUSH 0x5e1a50                       ; 004d2253 | DAT_005e1a50
    PUSH 0x5e1a53                       ; 004d2258 | = "quicksavedgame.noc"
    PUSH 0x5e1a66                       ; 004d225d | DAT_005e1a66
    CALL engine_dosio.cpp_FUN_00479180  ; 004d2262
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004d2267
    TEST EAX,EAX                        ; 004d226a
    JZ 0x004d22d0                       ; 004d226c
        ;   XREF to: 004d22d0 (CONDITIONAL_JUMP)  ; LAB_004d22d0
    PUSH EAX                            ; 004d226e
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d226f
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d2274
    PUSH 0x5e1a6b                       ; 004d2277 | = "Restore quick saved game?"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d227c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d2281
    PUSH EAX                            ; 004d2284
    MOV EDX,dword ptr [0x0061abc0]      ; 004d2285 | g_CEditorToolsPtr
    PUSH EDX                            ; 004d228b
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20 ; 004d228c
        ;   XREF to: 00494d20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004d2291
    TEST EAX,EAX                        ; 004d2294
    JZ 0x004d1d38                       ; 004d2296
        ;   XREF to: 004d1d38 (CONDITIONAL_JUMP)  ; LAB_004d1d38
    MOV ESI,0x5e1a85                    ; 004d229c | = "quicksavedgame.noc"
    LEA EDI,[EBX + 0x9fc]               ; 004d22a1
    MOV dword ptr [EBX + 0x9f8],0x1     ; 004d22a7
    PUSH EDI                            ; 004d22b1
    MOV AL,byte ptr [ESI]               ; 004d22b2 | = "quicksavedgame.noc" | s_quicksavedgame_noc_005e1a85+2
        ;   Label: LAB_004d22b2
    MOV byte ptr [EDI],AL               ; 004d22b4
    CMP AL,0x0                          ; 004d22b6
    JZ 0x004d22ca                       ; 004d22b8
        ;   XREF to: 004d22ca (CONDITIONAL_JUMP)  ; LAB_004d22ca
    MOV AL,byte ptr [ESI + 0x1]         ; 004d22ba | s_quicksavedgame_noc_005e1a85+1 | s_quicksavedgame_noc_005e1a85+3
    ADD ESI,0x2                         ; 004d22bd
    MOV byte ptr [EDI + 0x1],AL         ; 004d22c0
    ADD EDI,0x2                         ; 004d22c3
    CMP AL,0x0                          ; 004d22c6
    JNZ 0x004d22b2                      ; 004d22c8
        ;   XREF to: 004d22b2 (CONDITIONAL_JUMP)  ; LAB_004d22b2
    POP EDI                             ; 004d22ca
        ;   Label: LAB_004d22ca
    JMP 0x004d1d38                      ; 004d22cb
        ;   XREF to: 004d1d38 (UNCONDITIONAL_JUMP)  ; LAB_004d1d38
    PUSH 0x40000000                     ; 004d22d0
        ;   Label: LAB_004d22d0
    PUSH 0x5e1a98                       ; 004d22d5 | = "No quicked saved game to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d22da
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d22df
    PUSH EAX                            ; 004d22e2
    PUSH EBX                            ; 004d22e3
    CALL core_game.cpp_CGame_displayMessage_FUN_004cc190 ; 004d22e4
        ;   XREF to: 004cc190 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004cc190(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004d22e9
    JMP 0x004d1d38                      ; 004d22ec
        ;   XREF to: 004d1d38 (UNCONDITIONAL_JUMP)  ; LAB_004d1d38
    PUSH 0x5e1ab6                       ; 004d22f1 | = "SPOOKHOUSE"
        ;   Label: LAB_004d22f1
    CALL crt_env.c_getenv_FUN_005c3050  ; 004d22f6
        ;   XREF to: 005c3050 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005c3050(char * name)
    ADD ESP,0x4                         ; 004d22fb
    TEST EAX,EAX                        ; 004d22fe
    JNZ 0x004d1d6e                      ; 004d2300
        ;   XREF to: 004d1d6e (CONDITIONAL_JUMP)  ; LAB_004d1d6e
    JMP 0x004d1d97                      ; 004d2306
        ;   XREF to: 004d1d97 (UNCONDITIONAL_JUMP)  ; LAB_004d1d97
    MOV EAX,[0x00622ad0]                ; 004d230b | g_CScriptPtr
        ;   Label: LAB_004d230b
    CMP dword ptr [EAX + 0x1c],0x2      ; 004d2310 | g_CScriptInstance.script_state
    JZ 0x004d236a                       ; 004d2314
        ;   XREF to: 004d236a (CONDITIONAL_JUMP)  ; LAB_004d236a
    PUSH 0x3f                           ; 004d2316
    MOV EAX,[0x0061f2a4]                ; 004d2318 | DAT_0061f2a4
    PUSH EAX                            ; 004d231d | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d231e | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d2320
    ADD ESP,0x8                         ; 004d2323
    TEST EAX,EAX                        ; 004d2326
    JZ 0x004d236a                       ; 004d2328
        ;   XREF to: 004d236a (CONDITIONAL_JUMP)  ; LAB_004d236a
    PUSH 0xf0                           ; 004d232a
    PUSH 0x0                            ; 004d232f
    PUSH 0x0                            ; 004d2331
    MOV ECX,dword ptr [0x00622c18]      ; 004d2333 | g_CDemonSetPtr
    PUSH ECX                            ; 004d2339 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x2a8],0x1     ; 004d233a
    CALL core_set.cpp_CDemonSet_reinitCamera_FUN_0054fbf0 ; 004d2344
        ;   XREF to: 0054fbf0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_reinitCamera_FUN_0054fbf0(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
    MOV EAX,[0x00622ad0]                ; 004d2349 | g_CScriptPtr
    MOV dword ptr [EBX + 0x1f8],0x1     ; 004d234e
    MOV ESI,dword ptr [EAX + 0x1c]      ; 004d2358 | g_CScriptInstance.script_state
    ADD ESP,0x10                        ; 004d235b
    CMP ESI,0x1                         ; 004d235e
    JNZ 0x004d23ce                      ; 004d2361
        ;   XREF to: 004d23ce (CONDITIONAL_JUMP)  ; LAB_004d23ce
    MOV dword ptr [EAX + 0x1c],0x0      ; 004d2363 | g_CScriptInstance.script_state
    CMP dword ptr [EBX + 0x1f8],0x0     ; 004d236a
        ;   Label: LAB_004d236a
    JZ 0x004d1da4                       ; 004d2371
        ;   XREF to: 004d1da4 (CONDITIONAL_JUMP)  ; LAB_004d1da4
    MOV EAX,[0x00622ad0]                ; 004d2377 | g_CScriptPtr
    CMP dword ptr [EAX + 0x1c],0x2      ; 004d237c | g_CScriptInstance.script_state
    JZ 0x004d23d7                       ; 004d2380
        ;   XREF to: 004d23d7 (CONDITIONAL_JUMP)  ; LAB_004d23d7
    PUSH 0x3f                           ; 004d2382
        ;   Label: LAB_004d2382
    MOV EAX,[0x0061f2a4]                ; 004d2384 | DAT_0061f2a4
    PUSH EAX                            ; 004d2389 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d238a | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d238c
    ADD ESP,0x8                         ; 004d238f
    TEST EAX,EAX                        ; 004d2392
    JZ 0x004d23a2                       ; 004d2394
        ;   XREF to: 004d23a2 (CONDITIONAL_JUMP)  ; LAB_004d23a2
    MOV EAX,[0x00622ad0]                ; 004d2396 | g_CScriptPtr
    MOV dword ptr [EAX + 0x1c],0x0      ; 004d239b | g_CScriptInstance.script_state
    PUSH 0x43                           ; 004d23a2
        ;   Label: LAB_004d23a2
    MOV EAX,[0x0061f2a4]                ; 004d23a4 | DAT_0061f2a4
    PUSH EAX                            ; 004d23a9 | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d23aa | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d23ac
    ADD ESP,0x8                         ; 004d23af
    TEST EAX,EAX                        ; 004d23b2
    JZ 0x004d1da4                       ; 004d23b4
        ;   XREF to: 004d1da4 (CONDITIONAL_JUMP)  ; LAB_004d1da4
    MOV ECX,dword ptr [0x00622ad0]      ; 004d23ba | g_CScriptPtr
    PUSH ECX                            ; 004d23c0
    CALL core_script.cpp_CScript_resetDialogState_FUN_0054ae10 ; 004d23c1
        ;   XREF to: 0054ae10 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_resetDialogState_FUN_0054ae10(CScript * this_ptr)
    ADD ESP,0x4                         ; 004d23c6
    JMP 0x004d1da4                      ; 004d23c9
        ;   XREF to: 004d1da4 (UNCONDITIONAL_JUMP)  ; LAB_004d1da4
    MOV dword ptr [EAX + 0x1c],0x1      ; 004d23ce | g_CScriptInstance.script_state
        ;   Label: LAB_004d23ce
    JMP 0x004d236a                      ; 004d23d5
        ;   XREF to: 004d236a (UNCONDITIONAL_JUMP)  ; LAB_004d236a
    PUSH 0x44                           ; 004d23d7
        ;   Label: LAB_004d23d7
    MOV EAX,[0x0061f2a4]                ; 004d23d9 | DAT_0061f2a4
    PUSH EAX                            ; 004d23de | DAT_01d1bca0
    MOV EDI,dword ptr [EAX]             ; 004d23df | DAT_01d1bca0
    CALL dword ptr [EDI + 0x4]          ; 004d23e1
    ADD ESP,0x8                         ; 004d23e4
    TEST EAX,EAX                        ; 004d23e7
    JZ 0x004d2382                       ; 004d23e9
        ;   XREF to: 004d2382 (CONDITIONAL_JUMP)  ; LAB_004d2382
    MOV EAX,[0x00622ad0]                ; 004d23eb | g_CScriptPtr
    MOV dword ptr [EAX + 0x1c],0x1      ; 004d23f0 | g_CScriptInstance.script_state
    JMP 0x004d2382                      ; 004d23f7
        ;   XREF to: 004d2382 (UNCONDITIONAL_JUMP)  ; LAB_004d2382
    PUSH 0x38                           ; 004d23f9
        ;   Label: LAB_004d23f9
    MOV EAX,[0x0061f2a4]                ; 004d23fb | DAT_0061f2a4
    PUSH EAX                            ; 004d2400 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 004d2401 | DAT_01d1bca0
    CALL dword ptr [EBX]                ; 004d2403
    ADD ESP,0x8                         ; 004d2405
    TEST EAX,EAX                        ; 004d2408
    JZ 0x004d1f13                       ; 004d240a
        ;   XREF to: 004d1f13 (CONDITIONAL_JUMP)  ; LAB_004d1f13
    PUSH 0x1e                           ; 004d2410
    MOV EAX,[0x0061f2a4]                ; 004d2412 | DAT_0061f2a4
    PUSH EAX                            ; 004d2417 | DAT_01d1bca0
    MOV EBX,dword ptr [EAX]             ; 004d2418 | DAT_01d1bca0
    CALL dword ptr [EBX + 0x4]          ; 004d241a
    ADD ESP,0x8                         ; 004d241d
    TEST EAX,EAX                        ; 004d2420
    JZ 0x004d1f13                       ; 004d2422
        ;   XREF to: 004d1f13 (CONDITIONAL_JUMP)  ; LAB_004d1f13
    PUSH 0x2a                           ; 004d2428
    MOV EAX,[0x0061f2a4]                ; 004d242a | DAT_0061f2a4
    MOV EBX,0x3ca3d70a                  ; 004d242f
    PUSH EAX                            ; 004d2434 | DAT_01d1bca0
    MOV dword ptr [ESP + 0x20c],EBX     ; 004d2435
    MOV EBX,dword ptr [EAX]             ; 004d243c | DAT_01d1bca0
    CALL dword ptr [EBX]                ; 004d243e
    ADD ESP,0x8                         ; 004d2440
    TEST EAX,EAX                        ; 004d2443
    JNZ 0x004d24a3                      ; 004d2445
        ;   XREF to: 004d24a3 (CONDITIONAL_JUMP)  ; LAB_004d24a3
    MOV EAX,[0x01fe49d4]                ; 004d2447 | g_CDemonCameraInstance.corona_blend_factor
        ;   Label: LAB_004d2447
    MOV dword ptr [ESP + 0x208],EAX     ; 004d244c
    FILD dword ptr [ESP + 0x208]        ; 004d2453
    FMUL double ptr [0x005e1ae4]        ; 004d245a | DAT_005e1ae4
    FADD float ptr [ESP + 0x204]        ; 004d2460
    FST float ptr [ESP]                 ; 004d2467
    FLDZ                                ; 004d246a
    FCOMPP                              ; 004d246c
    FNSTSW AX                           ; 004d246e
    SAHF                                ; 004d2470
    JBE 0x004d2478                      ; 004d2471
        ;   XREF to: 004d2478 (CONDITIONAL_JUMP)  ; LAB_004d2478
    XOR EDI,EDI                         ; 004d2473
    MOV dword ptr [ESP],EDI             ; 004d2475
    FLD float ptr [ESP]                 ; 004d2478
        ;   Label: LAB_004d2478
    FLD1                                ; 004d247b
    FCOMPP                              ; 004d247d
    FNSTSW AX                           ; 004d247f
    SAHF                                ; 004d2481
    JC 0x004d24b0                       ; 004d2482
        ;   XREF to: 004d24b0 (CONDITIONAL_JUMP)  ; LAB_004d24b0
    XOR EBX,EBX                         ; 004d2484
        ;   Label: LAB_004d2484
    MOV EAX,[0x00622c18]                ; 004d2486 | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004d2486
    CMP EBX,dword ptr [EAX]             ; 004d248b | g_CDemonSetInstance
    JGE 0x004d1f13                      ; 004d248d
        ;   XREF to: 004d1f13 (CONDITIONAL_JUMP)  ; LAB_004d1f13
    PUSH dword ptr [ESP]                ; 004d2493
    PUSH EBX                            ; 004d2496
    PUSH EAX                            ; 004d2497 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0 ; 004d2498
        ;   XREF to: 005558f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_005558f0(CDemonSet * this_ptr, int index, float value)
    INC EBX                             ; 004d249d
    ADD ESP,0xc                         ; 004d249e
    JMP 0x004d2486                      ; 004d24a1
        ;   XREF to: 004d2486 (UNCONDITIONAL_JUMP)  ; LAB_004d2486
    MOV dword ptr [ESP + 0x204],0xbca3d70a ; 004d24a3
        ;   Label: LAB_004d24a3
    JMP 0x004d2447                      ; 004d24ae
        ;   XREF to: 004d2447 (UNCONDITIONAL_JUMP)  ; LAB_004d2447
    MOV dword ptr [ESP],0x3f800000      ; 004d24b0
        ;   Label: LAB_004d24b0
    JMP 0x004d2484                      ; 004d24b7
        ;   XREF to: 004d2484 (UNCONDITIONAL_JUMP)  ; LAB_004d2484

