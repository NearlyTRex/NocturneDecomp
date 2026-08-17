; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uint sfx_handle,float volume)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
; float            Stack[0x8]:4   volume
;
; XREF[7]:
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 00426b55
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b64c
;   core_lightgun.cpp_CLightGun_fire_FUN_004c71a0 at 004c793f
;   core_lightgun.cpp_CLightGun_process_FUN_004c79a0 at 004c7a91
;   core_manpuz.cpp_updateGemHumChannel_FUN_004caef0 at 004caf89
;   core_sound.cpp_CSound_FUN_0052dff0 at 0052e0d3
;   core_sound.cpp_processTrainSounds_FUN_0052d790 at 0052db01
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005270d0
        ;   Label: sound_sndmain.cpp_setSfxVolume_FUN_005270d0
    PUSH 0x1                            ; 005270d1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005270d3
    PUSH EDX                            ; 005270d7
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 005270d8
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    MOV EBX,EAX                         ; 005270dd
    ADD ESP,0x8                         ; 005270df
    TEST EAX,EAX                        ; 005270e2
    JNZ 0x005270e8                      ; 005270e4
        ;   XREF to: 005270e8 (CONDITIONAL_JUMP)  ; LAB_005270e8
    POP EBX                             ; 005270e6
    RET                                 ; 005270e7
    PUSH EDI                            ; 005270e8
        ;   Label: LAB_005270e8
    PUSH ESI                            ; 005270e9
    PUSH 0x0                            ; 005270ea
    MOV EAX,dword ptr [ESP + 0x18]      ; 005270ec
    PUSH EBX                            ; 005270f0
    MOV ESI,0x1                         ; 005270f1
    MOV dword ptr [EBX + 0x44],EAX      ; 005270f6
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830 ; 005270f9
        ;   XREF to: 00524830 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00524830(CSfxSlot * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0x6c]      ; 005270fe
    ADD ESP,0x8                         ; 00527101
    TEST ECX,ECX                        ; 00527104
    JZ 0x00527120                       ; 00527106
        ;   XREF to: 00527120 (CONDITIONAL_JUMP)  ; LAB_00527120
    MOV EDI,dword ptr [0x02dc8318]      ; 00527108 | DAT_02dc8318
    TEST EDI,EDI                        ; 0052710e
    JZ 0x00527120                       ; 00527110
        ;   XREF to: 00527120 (CONDITIONAL_JUMP)  ; LAB_00527120
    PUSH 0x8                            ; 00527112
    PUSH EBX                            ; 00527114
    MOV ESI,dword ptr [EDI]             ; 00527115
    PUSH EDI                            ; 00527117
    CALL dword ptr [ESI + 0x40]         ; 00527118
    ADD ESP,0xc                         ; 0052711b
    MOV ESI,EAX                         ; 0052711e
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00527120
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00527120
    MOV EAX,ESI                         ; 00527125
    POP ESI                             ; 00527127
    POP EDI                             ; 00527128
    POP EBX                             ; 00527129
    RET                                 ; 0052712a

