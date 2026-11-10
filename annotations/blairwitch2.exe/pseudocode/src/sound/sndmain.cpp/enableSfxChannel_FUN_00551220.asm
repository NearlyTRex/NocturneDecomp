; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00551220(int channel_index,int enable_state)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
; int              Stack[0x8]:4   enable_state
;
; XREF[6]:
;   core_menu.cpp_FUN_004ed260 at 004edc96
;   core_sound.cpp_CSound_process_FUN_0055a3c0 at 0055a621
;   core_sound.cpp_FUN_0055a1d0 at 0055a277
;   core_sound.cpp_syncChannel3WithChannel0_FUN_0055a16e at 0055a185
;   sound_sndmain.cpp_readIni_FUN_00553680 at 005538f6
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0 at 005523e4
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005e8e33
;   TerminatedCString s_enableSfxChannel_invalid_005e8e48
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0263d038
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551220
        ;   Label: sound_sndmain.cpp_enableSfxChannel_FUN_00551220
    PUSH ESI                            ; 00551221
    MOV ESI,dword ptr [ESP + 0xc]       ; 00551222
    MOV EBX,dword ptr [ESP + 0x10]      ; 00551226
    TEST ESI,ESI                        ; 0055122a
    JL 0x00551233                       ; 0055122c
        ;   XREF to: 00551233 (CONDITIONAL_JUMP)  ; LAB_00551233
    CMP ESI,0x20                        ; 0055122e
    JL 0x00551257                       ; 00551231
        ;   XREF to: 00551257 (CONDITIONAL_JUMP)  ; LAB_00551257
    PUSH ESI                            ; 00551233
        ;   Label: LAB_00551233
    MOV EDX,0x5e8e33                    ; 00551234 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x112e                      ; 00551239
    PUSH 0x5e8e48                       ; 0055123e | = "enableSfxChannel - invalid channel in..."
    MOV dword ptr [0x01d046a0],EDX      ; 00551243 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00551249 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0055124f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00551254
    MOV dword ptr [ESI*0x4 + 0x2648540],EBX ; 00551257
        ;   Label: LAB_00551257
    TEST EBX,EBX                        ; 0055125e
    JNZ 0x00551292                      ; 00551260
        ;   XREF to: 00551292 (CONDITIONAL_JUMP)  ; LAB_00551292
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00551262
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    CMP ESI,dword ptr [EBX + 0x263cf1c] ; 00551267 | DAT_0263d038
        ;   Label: LAB_00551267
    JNZ 0x0055127f                      ; 0055126d
        ;   XREF to: 0055127f (CONDITIONAL_JUMP)  ; LAB_0055127f
    MOV EAX,0x263cf1c                   ; 0055126f
    ADD EAX,EBX                         ; 00551274
    PUSH EAX                            ; 00551276
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 00551277
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0055127c
    ADD EBX,0x11c                       ; 0055127f
        ;   Label: LAB_0055127f
    CMP EBX,0x4700                      ; 00551285
    JNZ 0x00551267                      ; 0055128b
        ;   XREF to: 00551267 (CONDITIONAL_JUMP)  ; LAB_00551267
    CALL sound_sndmain.cpp_FUN_00551440 ; 0055128d
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    POP ESI                             ; 00551292
        ;   Label: LAB_00551292
    POP EBX                             ; 00551293
    RET                                 ; 00551294

