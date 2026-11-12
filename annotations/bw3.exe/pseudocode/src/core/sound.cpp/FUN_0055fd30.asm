; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_0055fd30(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004ba69f
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf998
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8b0b
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;   undefined4 g_CDemonSetInstance.player_on_train
;   undefined4 DAT_02cf568c
;   undefined4 DAT_02cf5690
;   undefined4 DAT_02cf5694
;   undefined4 DAT_02cf5698
;   undefined4 DAT_02cf569c
;   undefined4 DAT_02cf56a0
;   undefined4 DAT_02cf56a4
;   undefined4 DAT_02cf56a8
;   ... and 11 more
;
; Called Functions:
;   core_event.cpp_CEventList_restartSfxEntries_FUN_004953d0
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;   core_sound.cpp_updateListeners_FUN_0055e8b0
;   sound_sndmain.cpp_enableSfxChannel_FUN_00556db0
;   sound_sndmain.cpp_enableSoundSystem_FUN_00558050
;   sound_sndmain.cpp_FUN_00557100
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30
;   sound_sndmain.cpp_isSoundBusy_FUN_005586c0
;   sound_sndmain.cpp_popSfxOptions_FUN_00556050
;   sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860
;   sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055fd30
        ;   Label: core_sound.cpp_FUN_0055fd30
    SUB ESP,0x1c                        ; 0055fd31
    PUSH 0x0                            ; 0055fd34
    MOV ESI,0x501502f9                  ; 0055fd36
    PUSH 0x0                            ; 0055fd3b
    XOR EDX,EDX                         ; 0055fd3d
    PUSH 0x0                            ; 0055fd3f
    MOV dword ptr [0x02cf5698],EDX      ; 0055fd41 | DAT_02cf5698
    MOV dword ptr [0x02cf569c],EDX      ; 0055fd47 | DAT_02cf569c
    MOV dword ptr [0x02cf56a0],EDX      ; 0055fd4d | DAT_02cf56a0
    MOV dword ptr [0x02cf568c],ESI      ; 0055fd53 | DAT_02cf568c
    MOV dword ptr [0x02cf5690],ESI      ; 0055fd59 | DAT_02cf5690
    MOV dword ptr [0x02cf5694],ESI      ; 0055fd5f | DAT_02cf5694
    CALL sound_sndmain.cpp_FUN_00557100 ; 0055fd65
        ;   XREF to: 00557100 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557100()
    ADD ESP,0xc                         ; 0055fd6a
    CALL core_sound.cpp_updateListeners_FUN_0055e8b0 ; 0055fd6d
        ;   XREF to: 0055e8b0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_updateListeners_FUN_0055e8b0()
    PUSH dword ptr [0x02cf56ac]         ; 0055fd72 | DAT_02cf56ac
    PUSH dword ptr [0x02cf56a8]         ; 0055fd78 | DAT_02cf56a8
    XOR EAX,EAX                         ; 0055fd7e
    PUSH dword ptr [0x02cf56a4]         ; 0055fd80 | DAT_02cf56a4
    MOV [0x02cf569c],EAX                ; 0055fd86 | DAT_02cf569c
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860 ; 0055fd8b
        ;   XREF to: 00558860 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_00558860(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 0055fd90
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_00558050 ; 0055fd93
        ;   XREF to: 00558050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_00558050()
    CALL sound_sndmain.cpp_isSoundBusy_FUN_005586c0 ; 0055fd98
        ;   XREF to: 005586c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_005586c0()
    TEST EAX,EAX                        ; 0055fd9d
    JNZ 0x0055fda6                      ; 0055fd9f
        ;   XREF to: 0055fda6 (CONDITIONAL_JUMP)  ; LAB_0055fda6
    ADD ESP,0x1c                        ; 0055fda1
    POP ESI                             ; 0055fda4
    RET                                 ; 0055fda5
    PUSH EDI                            ; 0055fda6
        ;   Label: LAB_0055fda6
    PUSH EBX                            ; 0055fda7
    MOV EDX,0x3f800000                  ; 0055fda8
    XOR EBX,EBX                         ; 0055fdad
    MOV dword ptr [0x02cf5ec8],EDX      ; 0055fdaf | DAT_02cf5ec8
    PUSH EBX                            ; 0055fdb5
    MOV dword ptr [0x02cf5ecc],EDX      ; 0055fdb6 | DAT_02cf5ecc
    MOV dword ptr [0x02cf5ed0],EBX      ; 0055fdbc | DAT_02cf5ed0
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30 ; 0055fdc2
        ;   XREF to: 00556e30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
    ADD ESP,0x4                         ; 0055fdc7
    TEST EAX,EAX                        ; 0055fdca
    JZ 0x0055fecf                       ; 0055fdcc
        ;   XREF to: 0055fecf (CONDITIONAL_JUMP)  ; LAB_0055fecf
    PUSH 0x1                            ; 0055fdd2
    PUSH 0x3                            ; 0055fdd4
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 0055fdd6
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0055fddb
    PUSH EBX                            ; 0055fdde
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 0055fddf
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0x24],EAX      ; 0055fde4
    FLD float ptr [ESP + 0x24]          ; 0055fde8
    ADD ESP,0x4                         ; 0055fdec
    FMUL float ptr [0x02cf5ec8]         ; 0055fdef | DAT_02cf5ec8
    SUB ESP,0x4                         ; 0055fdf5
    FSTP float ptr [ESP]                ; 0055fdf8
    PUSH 0x3                            ; 0055fdfb
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90 ; 0055fdfd
        ;   XREF to: 00556c90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00556c90(int channel_index, float volume)
    ADD ESP,0x8                         ; 0055fe02
        ;   Label: LAB_0055fe02
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0 ; 0055fe05
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00555fd0()
    PUSH 0x3                            ; 0055fe0a
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90 ; 0055fe0c
        ;   XREF to: 00555e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00555e90(int channel_index)
    ADD ESP,0x4                         ; 0055fe11
    PUSH 0x2cf5e98                      ; 0055fe14 | DAT_02cf5e98
    MOV ESI,dword ptr [0x00603b28]      ; 0055fe19 | g_CDemonSetPtr
    PUSH ESI                            ; 0055fe1f | g_CDemonSetInstance
    MOV EDI,dword ptr [ESP + 0x34]      ; 0055fe20
    PUSH EDI                            ; 0055fe24
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 0055fe25
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0055fe2a
    MOV [0x02cf5ec0],EAX                ; 0055fe2d | DAT_02cf5ec0
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00556050 ; 0055fe32
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00556050()
    MOV EAX,[0x00603b28]                ; 0055fe37 | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15acb8],0x0  ; 0055fe3c | g_CDemonSetInstance.player_on_train
    JZ 0x0055feae                       ; 0055fe43
        ;   XREF to: 0055feae (CONDITIONAL_JUMP)  ; LAB_0055feae
    FLD float ptr [EAX + 0x15ac70]      ; 0055fe45 | g_CDemonSetInstance.active_fog.scroll.x
    FLD float ptr [EAX + 0x15ac74]      ; 0055fe4b | g_CDemonSetInstance.active_fog.scroll.y
    FLD float ptr [EAX + 0x15ac78]      ; 0055fe51 | g_CDemonSetInstance.active_fog.scroll.z
    LEA EDI,[ESP + 0x8]                 ; 0055fe57
    LEA ESI,[ESP + 0x14]                ; 0055fe5b
    FXCH ST2                            ; 0055fe5f
    FCHS                                ; 0055fe61
    FXCH                                ; 0055fe63
    FCHS                                ; 0055fe65
    FXCH ST2                            ; 0055fe67
    FCHS                                ; 0055fe69
    LEA EAX,[ESP + 0x8]                 ; 0055fe6b
    FXCH                                ; 0055fe6f
    FSTP float ptr [ESP + 0x14]         ; 0055fe71
    FXCH                                ; 0055fe75
    FSTP float ptr [ESP + 0x18]         ; 0055fe77
    FSTP float ptr [ESP + 0x1c]         ; 0055fe7b
    MOVSD ES:EDI,ESI                    ; 0055fe7f
    MOVSD ES:EDI,ESI                    ; 0055fe80
    MOVSD ES:EDI,ESI                    ; 0055fe81
    CMP EAX,0x2cf5f74                   ; 0055fe82
    JZ 0x0055fea4                       ; 0055fe87
        ;   XREF to: 0055fea4 (CONDITIONAL_JUMP)  ; LAB_0055fea4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055fe89
    MOV [0x02cf5f74],EAX                ; 0055fe8d | DAT_02cf5f74
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055fe92
    MOV [0x02cf5f78],EAX                ; 0055fe96 | DAT_02cf5f78
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055fe9b
    MOV [0x02cf5f7c],EAX                ; 0055fe9f | DAT_02cf5f7c
    MOV dword ptr [0x02cf5f84],0xffffffff ; 0055fea4 | DAT_02cf5f84
        ;   Label: LAB_0055fea4
    MOV EDX,dword ptr [0x005fba60]      ; 0055feae | DAT_005fba60
        ;   Label: LAB_0055feae
    PUSH EDX                            ; 0055feb4
    CALL core_event.cpp_CEventList_restartSfxEntries_FUN_004953d0 ; 0055feb5
        ;   XREF to: 004953d0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_restartSfxEntries_FUN_004953d0(CEventList * this_ptr)
    MOV ECX,0x1                         ; 0055feba
    ADD ESP,0x4                         ; 0055febf
    MOV dword ptr [0x02cf5ec4],ECX      ; 0055fec2 | DAT_02cf5ec4
    POP EBX                             ; 0055fec8
    POP EDI                             ; 0055fec9
    ADD ESP,0x1c                        ; 0055feca
    POP ESI                             ; 0055fecd
    RET                                 ; 0055fece
    PUSH EBX                            ; 0055fecf
        ;   Label: LAB_0055fecf
    PUSH 0x3                            ; 0055fed0
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00556db0 ; 0055fed2
        ;   XREF to: 00556db0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00556db0(int channel_index, int enable_state)
    JMP 0x0055fe02                      ; 0055fed7
        ;   XREF to: 0055fe02 (UNCONDITIONAL_JUMP)  ; LAB_0055fe02

