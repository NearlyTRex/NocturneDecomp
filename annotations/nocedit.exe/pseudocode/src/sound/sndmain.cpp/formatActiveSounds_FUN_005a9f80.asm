; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_formatActiveSounds_FUN_005a9f80(char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
;
; Referenced Globals:
;   TerminatedCString s_sfx_slot_d_s_pos_7_1f_7__00650b33
;   CSfxSlot[64] g_SfxSlots
;   undefined4 g_SfxSlots[0].sample
;   undefined4 g_SfxSlots[1].status
;   undefined4 g_SfxSlots[1].options.trigger_time
;   undefined4 g_SfxSlots[1].options.trigger_time+4
;   undefined4 g_SfxSlots[1].playback_state
;   undefined4 g_SfxSlots[1].sample
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9f80
        ;   Label: sound_sndmain.cpp_formatActiveSounds_FUN_005a9f80
    PUSH ESI                            ; 005a9f81
    PUSH EDI                            ; 005a9f82
    PUSH EBP                            ; 005a9f83
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005a9f84
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a9f89
    MOV EBX,0x3f5daa4                   ; 005a9f8d | g_SfxSlots
    XOR ESI,ESI                         ; 005a9f92
    CMP dword ptr [EBX + 0x78],0x0      ; 005a9f94 | g_SfxSlots[0].sample | g_SfxSlots[1].sample
        ;   Label: LAB_005a9f94
    JNZ 0x005a9fb3                      ; 005a9f98
        ;   XREF to: 005a9fb3 (CONDITIONAL_JUMP)  ; LAB_005a9fb3
    INC ESI                             ; 005a9f9a
        ;   Label: LAB_005a9f9a
    ADD EBX,0x128                       ; 005a9f9b | g_SfxSlots[1].status
    CMP ESI,0x40                        ; 005a9fa1
    JL 0x005a9f94                       ; 005a9fa4
        ;   XREF to: 005a9f94 (CONDITIONAL_JUMP)  ; LAB_005a9f94
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9fa6
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV byte ptr [EDI],0x0              ; 005a9fab
    POP EBP                             ; 005a9fae
    POP EDI                             ; 005a9faf
    POP ESI                             ; 005a9fb0
    POP EBX                             ; 005a9fb1
    RET                                 ; 005a9fb2
    CMP dword ptr [EBX + 0x74],0x0      ; 005a9fb3 | g_SfxSlots[1].playback_state
        ;   Label: LAB_005a9fb3
    JZ 0x005a9f9a                       ; 005a9fb7
        ;   XREF to: 005a9f9a (CONDITIONAL_JUMP)  ; LAB_005a9f9a
    PUSH EBX                            ; 005a9fb9 | g_SfxSlots[1].status
    CALL sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0 ; 005a9fba
        ;   XREF to: 005a80e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a9fbf
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a9fc2 | g_SfxSlots[1].sample
    SUB ESP,0x8                         ; 005a9fc5
    FILD dword ptr [EAX + 0x110]        ; 005a9fc8
    FSTP double ptr [ESP]               ; 005a9fce
    MOV EBP,dword ptr [EBX + 0x64]      ; 005a9fd1 | g_SfxSlots[1].options.trigger_time+4
    PUSH EBP                            ; 005a9fd4
    MOV EDX,dword ptr [EBX + 0x60]      ; 005a9fd5 | g_SfxSlots[1].options.trigger_time
    PUSH EDX                            ; 005a9fd8
    PUSH EAX                            ; 005a9fd9
    PUSH ESI                            ; 005a9fda
    PUSH 0x650b33                       ; 005a9fdb | = "sfx slot %d: %s, pos %7.1f/%7.1f\n"
    PUSH EDI                            ; 005a9fe0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a9fe1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 005a9fe6
    ADD EDI,EAX                         ; 005a9fe9
    JMP 0x005a9f9a                      ; 005a9feb
        ;   XREF to: 005a9f9a (UNCONDITIONAL_JUMP)  ; LAB_005a9f9a

