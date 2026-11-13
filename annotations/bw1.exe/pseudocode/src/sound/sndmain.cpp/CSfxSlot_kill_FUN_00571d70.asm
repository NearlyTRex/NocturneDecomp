; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00570460 at 00570718
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 at 00571213
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_00571420 at 00571565
;   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_00571f10 at 00571f89
;   sound_sndmain.cpp_enableSfxChannel_FUN_00573c50 at 00573ca7
;   sound_sndmain.cpp_flushSoundChanges_FUN_00575db0 at 00575f64
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_0056fa10 at 0056fa9b
;   sound_sndmain.cpp_killAllSfx_FUN_00573b00 at 00573b13
;   sound_sndmain.cpp_killSfxByName_FUN_00574310 at 00574353
;   sound_sndmain.cpp_killSfx_FUN_00573a80 at 00573a95
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f395c
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005f3971
;   TerminatedCString s_NULLsamplePtr_005f3991
;   TerminatedCString s_Killing_sfx_s_005f39a1
;   TerminatedCString s_sound_sndmain_cpp_005f39b1
;   TerminatedCString s_SfxSlot_kill_ref_count_o_005f39c6
;   TerminatedCString s_sound_sndmain_cpp_005f39f0
;   TerminatedCString s_refCount_for_streaming_S_005f3a05
;   TerminatedCString s_sound_sndmain_cpp_005f3a27
;   TerminatedCString s_streaming_sample_sfx_ind_005f3a3c
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c80650
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0056dfd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571d70
        ;   Label: sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
    PUSH ESI                            ; 00571d71
    PUSH EBP                            ; 00571d72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00571d73
    CMP dword ptr [0x02c807ec],0x0      ; 00571d77 | DAT_02c807ec
    JLE 0x00571eb2                      ; 00571d7e
        ;   XREF to: 00571eb2 (CONDITIONAL_JUMP)  ; LAB_00571eb2
    CMP dword ptr [EBX + 0x108],0x0     ; 00571d84
        ;   Label: LAB_00571d84
    JZ 0x00571daf                       ; 00571d8b
        ;   XREF to: 00571daf (CONDITIONAL_JUMP)  ; LAB_00571daf
    MOV EBP,dword ptr [EBX + 0x68]      ; 00571d8d
    MOV EDX,0x5f3991                    ; 00571d90 | = "[NULLsamplePtr]"
    TEST EBP,EBP                        ; 00571d95
    JZ 0x00571d9b                       ; 00571d97
        ;   XREF to: 00571d9b (CONDITIONAL_JUMP)  ; LAB_00571d9b
    MOV EDX,EBP                         ; 00571d99
    PUSH EDX                            ; 00571d9b | = "[NULLsamplePtr]"
        ;   Label: LAB_00571d9b
    PUSH 0x5f39a1                       ; 00571d9c | = "Killing sfx %s\n"
    MOV EAX,[0x00611100]                ; 00571da1 | g_CConsolePtr
    PUSH EAX                            ; 00571da6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00571da7
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00571dac
    CMP dword ptr [EBX + 0x60],0x0      ; 00571daf
        ;   Label: LAB_00571daf
    JZ 0x00571dd0                       ; 00571db3
        ;   XREF to: 00571dd0 (CONDITIONAL_JUMP)  ; LAB_00571dd0
    MOV ECX,dword ptr [0x02c80650]      ; 00571db5 | DAT_02c80650
    TEST ECX,ECX                        ; 00571dbb
    JZ 0x00571dc9                       ; 00571dbd
        ;   XREF to: 00571dc9 (CONDITIONAL_JUMP)  ; LAB_00571dc9
    PUSH EBX                            ; 00571dbf
    MOV EAX,dword ptr [ECX]             ; 00571dc0
    PUSH ECX                            ; 00571dc2
    CALL dword ptr [EAX + 0x50]         ; 00571dc3
    ADD ESP,0x8                         ; 00571dc6
    MOV dword ptr [EBX + 0x60],0x0      ; 00571dc9
        ;   Label: LAB_00571dc9
    MOV dword ptr [EBX + 0x108],0x0     ; 00571dd0
        ;   Label: LAB_00571dd0
    MOV ESI,dword ptr [EBX + 0x68]      ; 00571dda
    MOV dword ptr [EBX + 0x64],0x0      ; 00571ddd
    TEST ESI,ESI                        ; 00571de4
    JZ 0x00571ea4                       ; 00571de6
        ;   XREF to: 00571ea4 (CONDITIONAL_JUMP)  ; LAB_00571ea4
    CMP dword ptr [ESI + 0x154],0x1     ; 00571dec
    JL 0x00571eda                       ; 00571df3
        ;   XREF to: 00571eda (CONDITIONAL_JUMP)  ; LAB_00571eda
    MOV EDX,dword ptr [EBX + 0x68]      ; 00571df9
        ;   Label: LAB_00571df9
    DEC dword ptr [EDX + 0x154]         ; 00571dfc
    MOV ESI,dword ptr [EBX + 0x68]      ; 00571e02
    MOV dword ptr [EBX + 0x68],0x0      ; 00571e05
    CMP dword ptr [ESI + 0x160],0x0     ; 00571e0c
    JL 0x00571e90                       ; 00571e13
        ;   XREF to: 00571e90 (CONDITIONAL_JUMP)  ; LAB_00571e90
    CMP dword ptr [ESI + 0x154],0x0     ; 00571e19
    JZ 0x00571e45                       ; 00571e20
        ;   XREF to: 00571e45 (CONDITIONAL_JUMP)  ; LAB_00571e45
    PUSH ESI                            ; 00571e22
    MOV EAX,0x5f39f0                    ; 00571e23 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0xcd1                       ; 00571e28
    PUSH 0x5f3a05                       ; 00571e2d | = "refCount for streaming Sfx %s > 1"
    MOV [0x01d1d400],EAX                ; 00571e32 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00571e37 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00571e3d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00571e42
    MOV EDX,EBX                         ; 00571e45
        ;   Label: LAB_00571e45
    SUB EDX,0x2c745ec                   ; 00571e47
    MOV ECX,0x11c                       ; 00571e4d
    MOV EAX,EDX                         ; 00571e52
    SAR EDX,0x1f                        ; 00571e54
    IDIV ECX                            ; 00571e57
    CMP EAX,dword ptr [ESI + 0x160]     ; 00571e59
    JZ 0x00571e87                       ; 00571e5f
        ;   XREF to: 00571e87 (CONDITIONAL_JUMP)  ; LAB_00571e87
    PUSH EDI                            ; 00571e61
    PUSH ESI                            ; 00571e62
    MOV EDI,0x5f3a27                    ; 00571e63 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0xcd2                       ; 00571e68
    PUSH 0x5f3a3c                       ; 00571e6d | = "streaming sample sfx index mismatch o..."
    MOV dword ptr [0x01d1d400],EDI      ; 00571e72 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00571e78 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00571e7e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00571e83
    POP EDI                             ; 00571e86
    PUSH ESI                            ; 00571e87
        ;   Label: LAB_00571e87
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 00571e88
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00571e8d
    PUSH 0x0                            ; 00571e90
        ;   Label: LAB_00571e90
    CALL sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0056dfd0 ; 00571e92
        ;   XREF to: 0056dfd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_0056dfd0(int requested_bytes)
    ADD ESP,0x4                         ; 00571e97
    MOV dword ptr [ESI + 0x160],0xffffffff ; 00571e9a
    MOV dword ptr [EBX + 0x118],0x0     ; 00571ea4
        ;   Label: LAB_00571ea4
    POP EBP                             ; 00571eae
    POP ESI                             ; 00571eaf
    POP EBX                             ; 00571eb0
    RET                                 ; 00571eb1
    MOV ECX,0x5f395c                    ; 00571eb2 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00571eb2
    MOV ESI,0xca3                       ; 00571eb7
    PUSH 0x5f3971                       ; 00571ebc | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 00571ec1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00571ec7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00571ecd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00571ed2
    JMP 0x00571d84                      ; 00571ed5
        ;   XREF to: 00571d84 (UNCONDITIONAL_JUMP)  ; LAB_00571d84
    MOV EBP,0x5f39b1                    ; 00571eda | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00571eda
    MOV EAX,0xcc2                       ; 00571edf
    PUSH 0x5f39c6                       ; 00571ee4 | = "SfxSlot::kill - ref count out of bala..."
    MOV dword ptr [0x01d1d400],EBP      ; 00571ee9 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00571eef | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00571ef4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00571ef9
    JMP 0x00571df9                      ; 00571efc
        ;   XREF to: 00571df9 (UNCONDITIONAL_JUMP)  ; LAB_00571df9

