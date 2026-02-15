; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot *slot)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   slot
;
; XREF[10]:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a69e7
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 at 005a73d4
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 at 005a7704
;   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0 at 005a8045
;   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 at 005a9e77
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 at 005a5d90
;   sound_sndmain.cpp_killAllSfx_FUN_005a9cc0 at 005a9cd3
;   sound_sndmain.cpp_killSfxByName_FUN_005aa2f0 at 005aa333
;   sound_sndmain.cpp_killSfx_FUN_005a9c40 at 005a9c55
;   sound_sndmain.cpp_startSfx_FUN_005a8e90 at 005a9524
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_006503a3
;   TerminatedCString s_SfxSlot_kill_must_be_loc_006503b8
;   TerminatedCString s_NULLsamplePtr_006503d8
;   TerminatedCString s_Killing_sfx_s_006503e8
;   TerminatedCString s_sound_sndmain_cpp_006503f8
;   TerminatedCString s_SfxSlot_kill_ref_count_o_0065040d
;   TerminatedCString s_sound_sndmain_cpp_00650437
;   TerminatedCString s_refCount_for_streaming_S_0065044c
;   TerminatedCString s_sound_sndmain_cpp_0065046e
;   TerminatedCString s_streaming_sample_sfx_ind_00650483
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSfxSlot[64] g_SfxSlots
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7e60
        ;   Label: sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
    PUSH ESI                            ; 005a7e61
    PUSH EBP                            ; 005a7e62
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a7e63
    CMP dword ptr [0x03f6940c],0x0      ; 005a7e67 | g_SoundLockCount
    JLE 0x005a7f8e                      ; 005a7e6e
        ;   XREF to: 005a7f8e (CONDITIONAL_JUMP)  ; LAB_005a7f8e
    CMP dword ptr [EBX + 0x118],0x0     ; 005a7e74
        ;   Label: LAB_005a7e74
    JZ 0x005a7e9f                       ; 005a7e7b
        ;   XREF to: 005a7e9f (CONDITIONAL_JUMP)  ; LAB_005a7e9f
    MOV EBP,dword ptr [EBX + 0x78]      ; 005a7e7d
    MOV EDX,0x6503d8                    ; 005a7e80 | = "[NULLsamplePtr]"
    TEST EBP,EBP                        ; 005a7e85
    JZ 0x005a7e8b                       ; 005a7e87
        ;   XREF to: 005a7e8b (CONDITIONAL_JUMP)  ; LAB_005a7e8b
    MOV EDX,EBP                         ; 005a7e89
    PUSH EDX                            ; 005a7e8b | = "[NULLsamplePtr]"
        ;   Label: LAB_005a7e8b
    PUSH 0x6503e8                       ; 005a7e8c | = "Killing sfx %s\n"
    MOV EAX,[0x0066e8e0]                ; 005a7e91 | g_CConsoleInstance | g_CConsolePtr
    PUSH EAX                            ; 005a7e96 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005a7e97
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005a7e9c
    CMP dword ptr [EBX + 0x70],0x0      ; 005a7e9f
        ;   Label: LAB_005a7e9f
    JZ 0x005a7ec0                       ; 005a7ea3
        ;   XREF to: 005a7ec0 (CONDITIONAL_JUMP)  ; LAB_005a7ec0
    MOV ECX,dword ptr [0x03f69268]      ; 005a7ea5 | g_CSoundDevicePtr
    TEST ECX,ECX                        ; 005a7eab
    JZ 0x005a7eb9                       ; 005a7ead
        ;   XREF to: 005a7eb9 (CONDITIONAL_JUMP)  ; LAB_005a7eb9
    PUSH EBX                            ; 005a7eaf
    MOV EAX,dword ptr [ECX]             ; 005a7eb0
    PUSH ECX                            ; 005a7eb2
    CALL dword ptr [EAX + 0x4c]         ; 005a7eb3
    ADD ESP,0x8                         ; 005a7eb6
    MOV dword ptr [EBX + 0x70],0x0      ; 005a7eb9
        ;   Label: LAB_005a7eb9
    MOV dword ptr [EBX + 0x118],0x0     ; 005a7ec0
        ;   Label: LAB_005a7ec0
    MOV ESI,dword ptr [EBX + 0x78]      ; 005a7eca
    MOV dword ptr [EBX + 0x74],0x0      ; 005a7ecd
    TEST ESI,ESI                        ; 005a7ed4
    JZ 0x005a7f8a                       ; 005a7ed6
        ;   XREF to: 005a7f8a (CONDITIONAL_JUMP)  ; LAB_005a7f8a
    CMP dword ptr [ESI + 0x154],0x1     ; 005a7edc
    JL 0x005a7fb6                       ; 005a7ee3
        ;   XREF to: 005a7fb6 (CONDITIONAL_JUMP)  ; LAB_005a7fb6
    MOV EDX,dword ptr [EBX + 0x78]      ; 005a7ee9
        ;   Label: LAB_005a7ee9
    DEC dword ptr [EDX + 0x154]         ; 005a7eec
    MOV ESI,dword ptr [EBX + 0x78]      ; 005a7ef2
    MOV dword ptr [EBX + 0x78],0x0      ; 005a7ef5
    CMP dword ptr [ESI + 0x15c],0x0     ; 005a7efc
    JL 0x005a7f80                       ; 005a7f03
        ;   XREF to: 005a7f80 (CONDITIONAL_JUMP)  ; LAB_005a7f80
    CMP dword ptr [ESI + 0x154],0x0     ; 005a7f09
    JZ 0x005a7f35                       ; 005a7f10
        ;   XREF to: 005a7f35 (CONDITIONAL_JUMP)  ; LAB_005a7f35
    PUSH ESI                            ; 005a7f12
    MOV EAX,0x650437                    ; 005a7f13 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0xb50                       ; 005a7f18
    PUSH 0x65044c                       ; 005a7f1d | = "refCount for streaming Sfx %s > 1"
    MOV [0x02f0ca48],EAX                ; 005a7f22 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a7f27 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a7f2d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a7f32
    MOV EDX,EBX                         ; 005a7f35
        ;   Label: LAB_005a7f35
    SUB EDX,0x3f5daa4                   ; 005a7f37 | g_SfxSlots
    MOV EBX,0x128                       ; 005a7f3d
    MOV EAX,EDX                         ; 005a7f42
    SAR EDX,0x1f                        ; 005a7f44
    IDIV EBX                            ; 005a7f47
    CMP EAX,dword ptr [ESI + 0x15c]     ; 005a7f49
    JZ 0x005a7f77                       ; 005a7f4f
        ;   XREF to: 005a7f77 (CONDITIONAL_JUMP)  ; LAB_005a7f77
    PUSH EDI                            ; 005a7f51
    PUSH ESI                            ; 005a7f52
    MOV EBX,0x65046e                    ; 005a7f53 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xb51                       ; 005a7f58
    PUSH 0x650483                       ; 005a7f5d | = "streaming sample sfx index mismatch o..."
    MOV dword ptr [0x02f0ca48],EBX      ; 005a7f62 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a7f68 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a7f6e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a7f73
    POP EDI                             ; 005a7f76
    PUSH ESI                            ; 005a7f77
        ;   Label: LAB_005a7f77
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 ; 005a7f78
        ;   XREF to: 005a62c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a7f7d
    PUSH 0x0                            ; 005a7f80
        ;   Label: LAB_005a7f80
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450 ; 005a7f82
        ;   XREF to: 005a4450 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_005a4450(int requested_bytes)
    ADD ESP,0x4                         ; 005a7f87
    POP EBP                             ; 005a7f8a
        ;   Label: LAB_005a7f8a
    POP ESI                             ; 005a7f8b
    POP EBX                             ; 005a7f8c
    RET                                 ; 005a7f8d
    MOV ECX,0x6503a3                    ; 005a7f8e | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a7f8e
    MOV ESI,0xb22                       ; 005a7f93
    PUSH 0x6503b8                       ; 005a7f98 | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a7f9d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a7fa3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a7fa9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a7fae
    JMP 0x005a7e74                      ; 005a7fb1
        ;   XREF to: 005a7e74 (UNCONDITIONAL_JUMP)  ; LAB_005a7e74
    MOV EBP,0x6503f8                    ; 005a7fb6 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a7fb6
    MOV EAX,0xb41                       ; 005a7fbb
    PUSH 0x65040d                       ; 005a7fc0 | = "SfxSlot::kill - ref count out of bala..."
    MOV dword ptr [0x02f0ca48],EBP      ; 005a7fc5 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005a7fcb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a7fd0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a7fd5
    JMP 0x005a7ee9                      ; 005a7fd8
        ;   XREF to: 005a7ee9 (UNCONDITIONAL_JUMP)  ; LAB_005a7ee9

