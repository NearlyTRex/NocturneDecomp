; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_FUN_0055a1d0(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004bd570 at 004bda81
;   core_game.cpp_CGame_runGameSession_FUN_004b6170 at 004b6c1e
;   core_game.cpp_FUN_004b82e0 at 004b844f
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;   undefined4 g_CDemonSetInstance.player_on_train
;   undefined4 DAT_0264b29c
;   undefined4 DAT_0264b2a0
;   undefined4 DAT_0264b2a4
;   undefined4 DAT_0264b2a8
;   undefined4 DAT_0264b2ac
;   undefined4 DAT_0264b2b0
;   undefined4 DAT_0264b2b4
;   undefined4 DAT_0264b2b8
;   undefined4 DAT_0264b2bc
;   ... and 8 more
;
; Called Functions:
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0
;   core_sound.cpp_updateListeners_FUN_00558d50
;   sound_sndmain.cpp_enableSfxChannel_FUN_00551220
;   sound_sndmain.cpp_enableSoundSystem_FUN_005524b0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00551190
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0
;   sound_sndmain.cpp_isSoundBusy_FUN_00552b20
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570
;   sound_sndmain.cpp_setNextSfxChannel_FUN_00550310
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00551100
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055a1d0
        ;   Label: core_sound.cpp_FUN_0055a1d0
    PUSH EBP                            ; 0055a1d1
    SUB ESP,0x1c                        ; 0055a1d2
    PUSH 0x0                            ; 0055a1d5
    MOV ESI,0x501502f9                  ; 0055a1d7
    PUSH 0x0                            ; 0055a1dc
    XOR EDX,EDX                         ; 0055a1de
    PUSH 0x0                            ; 0055a1e0
    MOV dword ptr [0x0264b2a8],EDX      ; 0055a1e2 | DAT_0264b2a8
    MOV dword ptr [0x0264b2ac],EDX      ; 0055a1e8 | DAT_0264b2ac
    MOV dword ptr [0x0264b2b0],EDX      ; 0055a1ee | DAT_0264b2b0
    MOV dword ptr [0x0264b29c],ESI      ; 0055a1f4 | DAT_0264b29c
    MOV dword ptr [0x0264b2a0],ESI      ; 0055a1fa | DAT_0264b2a0
    MOV dword ptr [0x0264b2a4],ESI      ; 0055a200 | DAT_0264b2a4
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570 ; 0055a206
        ;   XREF to: 00551570 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerVelocity_FUN_00551570(float velocity_x, float velocity_y, float velocity_z)
    ADD ESP,0xc                         ; 0055a20b
    CALL core_sound.cpp_updateListeners_FUN_00558d50 ; 0055a20e
        ;   XREF to: 00558d50 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_updateListeners_FUN_00558d50()
    PUSH dword ptr [0x0264b2bc]         ; 0055a213 | DAT_0264b2bc
    PUSH dword ptr [0x0264b2b8]         ; 0055a219 | DAT_0264b2b8
    XOR EAX,EAX                         ; 0055a21f
    PUSH dword ptr [0x0264b2b4]         ; 0055a221 | DAT_0264b2b4
    MOV [0x0264b2ac],EAX                ; 0055a227 | DAT_0264b2ac
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0 ; 0055a22c
        ;   XREF to: 00552cc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0(float orient_right_x, float orient_right_y, float orient_right_z)
    ADD ESP,0xc                         ; 0055a231
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005524b0 ; 0055a234
        ;   XREF to: 005524b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005524b0()
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00552b20 ; 0055a239
        ;   XREF to: 00552b20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundBusy_FUN_00552b20()
    TEST EAX,EAX                        ; 0055a23e
    JNZ 0x0055a248                      ; 0055a240
        ;   XREF to: 0055a248 (CONDITIONAL_JUMP)  ; LAB_0055a248
    ADD ESP,0x1c                        ; 0055a242
    POP EBP                             ; 0055a245
    POP ESI                             ; 0055a246
    RET                                 ; 0055a247
    PUSH EBX                            ; 0055a248
        ;   Label: LAB_0055a248
    MOV EDX,0x3f800000                  ; 0055a249
    XOR EBX,EBX                         ; 0055a24e
    MOV dword ptr [0x0264bad8],EDX      ; 0055a250 | DAT_0264bad8
    PUSH EBX                            ; 0055a256
    MOV dword ptr [0x0264badc],EDX      ; 0055a257 | DAT_0264badc
    MOV dword ptr [0x0264bae0],EBX      ; 0055a25d | DAT_0264bae0
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0 ; 0055a263
        ;   XREF to: 005512a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005512a0(int channel_index)
    ADD ESP,0x4                         ; 0055a268
    TEST EAX,EAX                        ; 0055a26b
    JZ 0x0055a353                       ; 0055a26d
        ;   XREF to: 0055a353 (CONDITIONAL_JUMP)  ; LAB_0055a353
    PUSH 0x1                            ; 0055a273
    PUSH 0x3                            ; 0055a275
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00551220 ; 0055a277
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00551220(int channel_index, int enable_state)
    ADD ESP,0x8                         ; 0055a27c
    PUSH EBX                            ; 0055a27f
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00551190 ; 0055a280
        ;   XREF to: 00551190 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00551190(int channel_index)
    MOV dword ptr [ESP + 0x20],EAX      ; 0055a285
    FLD float ptr [ESP + 0x20]          ; 0055a289
    ADD ESP,0x4                         ; 0055a28d
    FMUL float ptr [0x0264bad8]         ; 0055a290 | DAT_0264bad8
    SUB ESP,0x4                         ; 0055a296
    FSTP float ptr [ESP]                ; 0055a299
    PUSH 0x3                            ; 0055a29c
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 ; 0055a29e
        ;   XREF to: 00551100 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setSfxChannelVol_FUN_00551100(int channel_index, float volume)
    ADD ESP,0x8                         ; 0055a2a3
        ;   Label: LAB_0055a2a3
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0055a2a6
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x3                            ; 0055a2ab
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_00550310 ; 0055a2ad
        ;   XREF to: 00550310 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxChannel_FUN_00550310(int channel_index)
    ADD ESP,0x4                         ; 0055a2b2
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0055a2b5
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV EAX,[0x0061b5a8]                ; 0055a2ba | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15acb8],0x0  ; 0055a2bf | g_CDemonSetInstance.player_on_train
    JZ 0x0055a333                       ; 0055a2c6
        ;   XREF to: 0055a333 (CONDITIONAL_JUMP)  ; LAB_0055a333
    PUSH EDI                            ; 0055a2c8
    FLD float ptr [EAX + 0x15ac70]      ; 0055a2c9 | g_CDemonSetInstance.active_fog.scroll.x
    FLD float ptr [EAX + 0x15ac74]      ; 0055a2cf | g_CDemonSetInstance.active_fog.scroll.y
    FLD float ptr [EAX + 0x15ac78]      ; 0055a2d5 | g_CDemonSetInstance.active_fog.scroll.z
    LEA EDI,[ESP + 0x8]                 ; 0055a2db
    LEA ESI,[ESP + 0x14]                ; 0055a2df
    FXCH ST2                            ; 0055a2e3
    FCHS                                ; 0055a2e5
    FXCH                                ; 0055a2e7
    FCHS                                ; 0055a2e9
    FXCH ST2                            ; 0055a2eb
    FCHS                                ; 0055a2ed
    LEA EAX,[ESP + 0x8]                 ; 0055a2ef
    FXCH                                ; 0055a2f3
    FSTP float ptr [ESP + 0x14]         ; 0055a2f5
    FXCH                                ; 0055a2f9
    FSTP float ptr [ESP + 0x18]         ; 0055a2fb
    FSTP float ptr [ESP + 0x1c]         ; 0055a2ff
    MOVSD ES:EDI,ESI                    ; 0055a303
    MOVSD ES:EDI,ESI                    ; 0055a304
    MOVSD ES:EDI,ESI                    ; 0055a305
    CMP EAX,0x264bb84                   ; 0055a306
    JZ 0x0055a328                       ; 0055a30b
        ;   XREF to: 0055a328 (CONDITIONAL_JUMP)  ; LAB_0055a328
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055a30d
    MOV [0x0264bb84],EAX                ; 0055a311 | DAT_0264bb84
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055a316
    MOV [0x0264bb88],EAX                ; 0055a31a | DAT_0264bb88
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055a31f
    MOV [0x0264bb8c],EAX                ; 0055a323 | DAT_0264bb8c
    MOV dword ptr [0x0264bb94],0xffffffff ; 0055a328 | DAT_0264bb94
        ;   Label: LAB_0055a328
    POP EDI                             ; 0055a332
    MOV EBP,dword ptr [0x006141f0]      ; 0055a333 | DAT_006141f0
        ;   Label: LAB_0055a333
    PUSH EBP                            ; 0055a339
    CALL core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0 ; 0055a33a
        ;   XREF to: 00491be0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_restartSfxEntries_FUN_00491be0(CEventList * this_ptr)
    MOV EAX,0x1                         ; 0055a33f
    ADD ESP,0x4                         ; 0055a344
    MOV [0x0264bad4],EAX                ; 0055a347 | DAT_0264bad4
    POP EBX                             ; 0055a34c
    ADD ESP,0x1c                        ; 0055a34d
    POP EBP                             ; 0055a350
    POP ESI                             ; 0055a351
    RET                                 ; 0055a352
    PUSH EBX                            ; 0055a353
        ;   Label: LAB_0055a353
    PUSH 0x3                            ; 0055a354
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00551220 ; 0055a356
        ;   XREF to: 00551220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_enableSfxChannel_FUN_00551220(int channel_index, int enable_state)
    JMP 0x0055a2a3                      ; 0055a35b
        ;   XREF to: 0055a2a3 (UNCONDITIONAL_JUMP)  ; LAB_0055a2a3

