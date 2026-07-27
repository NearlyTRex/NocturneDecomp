; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_init_FUN_0052ddf0(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a64e2
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e3fb
;   core_game.cpp_FUN_0049f930 at 0049fa9e
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;   undefined4 DAT_01fb1afc
;   undefined4 DAT_01fb1b00
;   undefined4 DAT_01fb1b04
;   undefined4 DAT_01fb1b44
;   undefined4 DAT_02dc945c
;   undefined4 DAT_02dc9460
;   undefined4 DAT_02dc9464
;   undefined4 DAT_02dc9468
;   undefined4 DAT_02dc946c
;   undefined4 DAT_02dc9470
;   undefined4 DAT_02dc9474
;   undefined4 DAT_02dc9478
;   ... and 11 more
;
; Called Functions:
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0
;   core_sound.cpp_CSound_playSound_FUN_0052ea40
;   core_sound.cpp_updateListeners_FUN_0052c9d0
;   sound_sndmain.cpp_enableSfxChannel_FUN_00527410
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00527380
;   sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490
;   sound_sndmain.cpp_isSoundBusy_FUN_00528490
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
;   sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0
;   sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0
;   sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052ddf0
        ;   Label: core_sound.cpp_CSound_init_FUN_0052ddf0
    SUB ESP,0x10                        ; 0052ddf1
    XOR EDX,EDX                         ; 0052ddf4
    PUSH EDX                            ; 0052ddf6
    PUSH EDX                            ; 0052ddf7
    PUSH EDX                            ; 0052ddf8
    MOV ESI,0x501502f9                  ; 0052ddf9
    PUSH EDX                            ; 0052ddfe
    MOV dword ptr [0x02dc9468],EDX      ; 0052ddff | DAT_02dc9468
    MOV dword ptr [0x02dc946c],EDX      ; 0052de05 | DAT_02dc946c
    PUSH EDX                            ; 0052de0b
    MOV dword ptr [0x02dc9470],EDX      ; 0052de0c | DAT_02dc9470
    MOV dword ptr [0x02dc945c],ESI      ; 0052de12 | DAT_02dc945c
    PUSH EDX                            ; 0052de18
    MOV dword ptr [0x02dc9460],ESI      ; 0052de19 | DAT_02dc9460
    MOV dword ptr [0x02dc9464],ESI      ; 0052de1f | DAT_02dc9464
    CALL sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0 ; 0052de25
        ;   XREF to: 005277b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerVelocity_FUN_005277b0()
    ADD ESP,0x18                        ; 0052de2a
    CALL core_sound.cpp_updateListeners_FUN_0052c9d0 ; 0052de2d
        ;   XREF to: 0052c9d0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_updateListeners_FUN_0052c9d0()
    PUSH dword ptr [0x02dc947c]         ; 0052de32 | DAT_02dc947c
    PUSH dword ptr [0x02dc9478]         ; 0052de38 | DAT_02dc9478
    XOR EAX,EAX                         ; 0052de3e
    PUSH dword ptr [0x02dc9474]         ; 0052de40 | DAT_02dc9474
    MOV [0x02dc946c],EAX                ; 0052de46 | DAT_02dc946c
    CALL sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630 ; 0052de4b
        ;   XREF to: 00528630 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630()
    ADD ESP,0xc                         ; 0052de50
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 ; 0052de53
        ;   XREF to: 00527e40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSoundSystem_FUN_00527e40()
    CALL sound_sndmain.cpp_isSoundBusy_FUN_00528490 ; 0052de58
        ;   XREF to: 00528490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSoundBusy_FUN_00528490()
    TEST EAX,EAX                        ; 0052de5d
    JNZ 0x0052de66                      ; 0052de5f
        ;   XREF to: 0052de66 (CONDITIONAL_JUMP)  ; LAB_0052de66
    ADD ESP,0x10                        ; 0052de61
    POP ESI                             ; 0052de64
    RET                                 ; 0052de65
    PUSH EDI                            ; 0052de66
        ;   Label: LAB_0052de66
    PUSH EBX                            ; 0052de67
    MOV EDX,0x3f800000                  ; 0052de68
    XOR EBX,EBX                         ; 0052de6d
    MOV dword ptr [0x02dc9c98],EDX      ; 0052de6f | DAT_02dc9c98
    PUSH EBX                            ; 0052de75
    MOV dword ptr [0x02dc9c9c],EDX      ; 0052de76 | DAT_02dc9c9c
    MOV dword ptr [0x02dc9ca0],EBX      ; 0052de7c | DAT_02dc9ca0
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490 ; 0052de82
        ;   XREF to: 00527490 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxChannelEnabled_FUN_00527490()
    ADD ESP,0x4                         ; 0052de87
    TEST EAX,EAX                        ; 0052de8a
    JZ 0x0052df7a                       ; 0052de8c
        ;   XREF to: 0052df7a (CONDITIONAL_JUMP)  ; LAB_0052df7a
    PUSH 0x1                            ; 0052de92
    PUSH 0x3                            ; 0052de94
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 0052de96
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    ADD ESP,0x8                         ; 0052de9b
    PUSH EBX                            ; 0052de9e
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00527380 ; 0052de9f
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxChannelVol_FUN_00527380()
    MOV dword ptr [ESP + 0x18],EAX      ; 0052dea4
    FLD float ptr [ESP + 0x18]          ; 0052dea8
    ADD ESP,0x4                         ; 0052deac
    FMUL float ptr [0x02dc9c98]         ; 0052deaf | DAT_02dc9c98
    SUB ESP,0x4                         ; 0052deb5
    FSTP float ptr [ESP]                ; 0052deb8
    PUSH 0x3                            ; 0052debb
    CALL sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0 ; 0052debd
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxChannelVol_FUN_005272e0()
    ADD ESP,0x8                         ; 0052dec2
        ;   Label: LAB_0052dec2
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0052dec5
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
    PUSH 0x3                            ; 0052deca
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0 ; 0052decc
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxChannel_FUN_005261b0()
    ADD ESP,0x4                         ; 0052ded1
    PUSH 0x2dc9c68                      ; 0052ded4 | DAT_02dc9c68
    MOV ESI,dword ptr [0x005be368]      ; 0052ded9 | DAT_005be368
    PUSH ESI                            ; 0052dedf | DAT_01e57284
    MOV EDI,dword ptr [ESP + 0x28]      ; 0052dee0
    PUSH EDI                            ; 0052dee4
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 0052dee5
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playSound_FUN_0052ea40()
    ADD ESP,0xc                         ; 0052deea
    MOV [0x02dc9c90],EAX                ; 0052deed | DAT_02dc9c90
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 0052def2
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV EAX,[0x005be368]                ; 0052def7 | DAT_005be368
    CMP dword ptr [EAX + 0x15a8c0],0x0  ; 0052defc | DAT_01fb1b44
    JZ 0x0052df59                       ; 0052df03
        ;   XREF to: 0052df59 (CONDITIONAL_JUMP)  ; LAB_0052df59
    FLD float ptr [EAX + 0x15a878]      ; 0052df05 | DAT_01fb1afc
    FCHS                                ; 0052df0b
    FSTP float ptr [ESP + 0x8]          ; 0052df0d
    FLD float ptr [EAX + 0x15a87c]      ; 0052df11 | DAT_01fb1b00
    FCHS                                ; 0052df17
    FSTP float ptr [ESP + 0xc]          ; 0052df19
    FLD float ptr [EAX + 0x15a880]      ; 0052df1d | DAT_01fb1b04
    FCHS                                ; 0052df23
    LEA EAX,[ESP + 0x8]                 ; 0052df25
    FSTP float ptr [ESP + 0x10]         ; 0052df29
    CMP EAX,0x2dc9d44                   ; 0052df2d
    JZ 0x0052df4f                       ; 0052df32
        ;   XREF to: 0052df4f (CONDITIONAL_JUMP)  ; LAB_0052df4f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0052df34
    MOV [0x02dc9d44],EAX                ; 0052df38 | DAT_02dc9d44
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052df3d
    MOV [0x02dc9d48],EAX                ; 0052df41 | DAT_02dc9d48
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052df46
    MOV [0x02dc9d4c],EAX                ; 0052df4a | DAT_02dc9d4c
    MOV dword ptr [0x02dc9d54],0xffffffff ; 0052df4f | DAT_02dc9d54
        ;   Label: LAB_0052df4f
    MOV EDX,dword ptr [0x005b7650]      ; 0052df59 | DAT_005b7650
        ;   Label: LAB_0052df59
    PUSH EDX                            ; 0052df5f
    CALL core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0 ; 0052df60
        ;   XREF to: 00480eb0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0()
    MOV ECX,0x1                         ; 0052df65
    ADD ESP,0x4                         ; 0052df6a
    MOV dword ptr [0x02dc9c94],ECX      ; 0052df6d | DAT_02dc9c94
    POP EBX                             ; 0052df73
    POP EDI                             ; 0052df74
    ADD ESP,0x10                        ; 0052df75
    POP ESI                             ; 0052df78
    RET                                 ; 0052df79
    PUSH EBX                            ; 0052df7a
        ;   Label: LAB_0052df7a
    PUSH 0x3                            ; 0052df7b
    CALL sound_sndmain.cpp_enableSfxChannel_FUN_00527410 ; 0052df7d
        ;   XREF to: 00527410 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_enableSfxChannel_FUN_00527410()
    JMP 0x0052dec2                      ; 0052df82
        ;   XREF to: 0052dec2 (UNCONDITIONAL_JUMP)  ; LAB_0052dec2

