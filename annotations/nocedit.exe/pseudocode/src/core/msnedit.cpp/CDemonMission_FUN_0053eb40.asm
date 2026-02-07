; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053eb40(CDemonMission *this_ptr,char *param_2)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; Local Variables:
; undefined4       Stack[-0x148]:4  local_148
; undefined1       Stack[-0x144]:1  local_144
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_pasteActorProperty_FUN_0053af50 at 0053afe4
;   core_script.cpp_CScript_FUN_00565d00 at 00565e63
;
; Referenced Globals:
;   TerminatedCString s_Can_t_start_sound_output_0063d024
;   TerminatedCString s_Playing_s_0063d060
;   TerminatedCString s_Failed_to_play_s_0063d06b
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CSound* g_CSoundPtr = 03f6af64
;   CEditorTools g_CEditorToolsInstance
;   CKeys g_CKeysInstance
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;   core_sound.cpp_CSound_shutdown_FUN_005b2f70
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_isSoundBusy_FUN_005ab540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053eb40
        ;   Label: core_msnedit.cpp_CDemonMission_FUN_0053eb40
    PUSH ESI                            ; 0053eb41
    PUSH EDI                            ; 0053eb42
    PUSH EBP                            ; 0053eb43
    MOV EBP,ESP                         ; 0053eb44
    SUB ESP,0x138                       ; 0053eb46
    AND ESP,0xfffffff8                  ; 0053eb4c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0053eb4f
    MOV EDX,dword ptr [0x00681ef8]      ; 0053eb52 | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 0053eb58 | g_CSoundInstance
    CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70 ; 0053eb59
        ;   XREF to: 005b2f70 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_005b2f70(CSound * this_ptr)
    ADD ESP,0x4                         ; 0053eb5e
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 0053eb61
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540 ; 0053eb66
        ;   XREF to: 005ab540 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005ab540()
    TEST EAX,EAX                        ; 0053eb6b
    JZ 0x0053ec46                       ; 0053eb6d
        ;   XREF to: 0053ec46 (CONDITIONAL_JUMP)  ; LAB_0053ec46
    PUSH EDI                            ; 0053eb73
    PUSH 0x0                            ; 0053eb74
    MOV EBX,dword ptr [0x00681ef8]      ; 0053eb76 | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 0053eb7c | g_CSoundInstance
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 0053eb7d
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0053eb82
    MOV ESI,EAX                         ; 0053eb85
    MOV EBX,EAX                         ; 0053eb87
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053eb89
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH ESI                            ; 0053eb8e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0053eb8f
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0053eb94
    TEST EAX,EAX                        ; 0053eb97
    JZ 0x0053ec5c                       ; 0053eb99
        ;   XREF to: 0053ec5c (CONDITIONAL_JUMP)  ; LAB_0053ec5c
    PUSH EDI                            ; 0053eb9f
    PUSH 0x63d060                       ; 0053eba0 | = "Playing %s"
    LEA EAX,[ESP + 0xc]                 ; 0053eba5
    PUSH EAX                            ; 0053eba9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0053ebaa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0053ebaf
    LEA EAX,[ESP + 0x4]                 ; 0053ebb2
    PUSH EAX                            ; 0053ebb6
    MOV EDI,dword ptr [0x00678a60]      ; 0053ebb7 | g_CEditorToolsPtr
    PUSH EDI                            ; 0053ebbd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 0053ebbe
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0053ebc3
    PUSH 0x2                            ; 0053ebc6
        ;   Label: LAB_0053ebc6
    PUSH EBX                            ; 0053ebc8
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 ; 0053ebc9
        ;   XREF to: 005a9720 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0x138],EAX     ; 0053ebce
    MOV dword ptr [ESP + 0x13c],EDX     ; 0053ebd5
    FLD double ptr [ESP + 0x138]        ; 0053ebdc
    ADD ESP,0x8                         ; 0053ebe3
    FST float ptr [ESP]                 ; 0053ebe6
    FLDZ                                ; 0053ebe9
    FCOMPP                              ; 0053ebeb
    FNSTSW AX                           ; 0053ebed
    SAHF                                ; 0053ebef
    JA 0x0053ec1c                       ; 0053ebf0
        ;   XREF to: 0053ec1c (CONDITIONAL_JUMP)  ; LAB_0053ec1c
    PUSH 0x3f800000                     ; 0053ebf2
    MOV EAX,[0x00678a60]                ; 0053ebf7 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH dword ptr [ESP + 0x4]          ; 0053ebfc
    PUSH EAX                            ; 0053ec00 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 0053ec01
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 0053ec06
    MOV EAX,[0x0067cf44]                ; 0053ec09 | g_CKeysPtr
    PUSH 0x1                            ; 0053ec0e
    MOV EDX,dword ptr [EAX]             ; 0053ec10 | g_CKeysInstance
    PUSH EAX                            ; 0053ec12 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0053ec13
    ADD ESP,0x8                         ; 0053ec15
    TEST EAX,EAX                        ; 0053ec18
    JZ 0x0053ebc6                       ; 0053ec1a
        ;   XREF to: 0053ebc6 (CONDITIONAL_JUMP)  ; LAB_0053ebc6
    MOV EDX,dword ptr [0x00678a60]      ; 0053ec1c | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_0053ec1c
    PUSH EDX                            ; 0053ec22 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 0053ec23
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0053ec28
    MOV ECX,dword ptr [0x00681ef8]      ; 0053ec2b | g_CSoundInstance | g_CSoundPtr
        ;   Label: LAB_0053ec2b
    PUSH ECX                            ; 0053ec31 | g_CSoundInstance
    CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70 ; 0053ec32
        ;   XREF to: 005b2f70 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_005b2f70(CSound * this_ptr)
    ADD ESP,0x4                         ; 0053ec37
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0053ec3a
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ESP,EBP                         ; 0053ec3f
    POP EBP                             ; 0053ec41
    POP EDI                             ; 0053ec42
    POP ESI                             ; 0053ec43
    POP EBX                             ; 0053ec44
    RET                                 ; 0053ec45
    PUSH 0x63d024                       ; 0053ec46 | = "Can't start sound output.  (Maybe mut..."
        ;   Label: LAB_0053ec46
    MOV ECX,dword ptr [0x00678a60]      ; 0053ec4b | g_CEditorToolsPtr
    PUSH ECX                            ; 0053ec51 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053ec52
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0053ec57
    JMP 0x0053ec2b                      ; 0053ec5a
        ;   XREF to: 0053ec2b (UNCONDITIONAL_JUMP)  ; LAB_0053ec2b
    PUSH EDI                            ; 0053ec5c
        ;   Label: LAB_0053ec5c
    PUSH 0x63d06b                       ; 0053ec5d | = "Failed to play \"%s\""
    MOV ESI,dword ptr [0x00678a60]      ; 0053ec62 | g_CEditorToolsPtr
    PUSH ESI                            ; 0053ec68 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0053ec69
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0053ec6e
    JMP 0x0053ec2b                      ; 0053ec71
        ;   XREF to: 0053ec2b (UNCONDITIONAL_JUMP)  ; LAB_0053ec2b

