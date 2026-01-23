; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDirectSoundDevice * sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440(UINT device_id)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; Local Variables:
; undefined1       Stack[-0x138]:1  local_138
;
; XREF[1]:
;   sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0 at 005ab62c
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_create_DirectSound_objec_006522bb
;   TerminatedCString s_Set_cooperative_level_006522d5
;   TerminatedCString s_Create_the_primary_buffe_006522eb
;   TerminatedCString s_Create_the_primary_buffe_00652305
;   GUID DAT_00686d58
;   SDirectSoundDeviceInfo[8] g_DirectSoundDevices
;   undefined4 g_DirectSoundDevices[0].value1
;   IDirectSound* g_DirectSound
;   IDirectSoundBuffer* g_DirectSoundPrimaryBuffer
;   IDirectSound3DListener* g_DirectSound3DListener
;   CDirectSoundDevice g_CDirectSoundDeviceInstance
;   HWND g_MainWindowHandle
;
; Called Functions:
;   crt_dsound.c_DirectSoundCreate
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0440
        ;   Label: sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440
    PUSH ESI                            ; 005b0441
    PUSH EDI                            ; 005b0442
    SUB ESP,0x76c                       ; 005b0443
    MOV EBX,dword ptr [ESP + 0x77c]     ; 005b0449
    PUSH 0x3f6ad30                      ; 005b0450 | g_CDirectSoundDeviceInstance
    CALL sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270 ; 005b0455
        ;   XREF to: 005ae270 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270(CDirectSoundDevice * this_ptr)
    ADD ESP,0x4                         ; 005b045a
    TEST EAX,EAX                        ; 005b045d
    JNZ 0x005b046b                      ; 005b045f
        ;   XREF to: 005b046b (CONDITIONAL_JUMP)  ; LAB_005b046b
    ADD ESP,0x76c                       ; 005b0461
        ;   Label: LAB_005b0461
    POP EDI                             ; 005b0467
    POP ESI                             ; 005b0468
    POP EBX                             ; 005b0469
    RET                                 ; 005b046a
    LEA EAX,[ESP + 0x640]               ; 005b046b
        ;   Label: LAB_005b046b
    PUSH EAX                            ; 005b0472
    PUSH EBX                            ; 005b0473
    CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390 ; 005b0474
        ;   XREF to: 005b0390 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390(UINT device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 005b0479
    TEST EAX,EAX                        ; 005b047c
    JZ 0x005b0461                       ; 005b047e
        ;   XREF to: 005b0461 (CONDITIONAL_JUMP)  ; LAB_005b0461
    LEA EAX,[EBX*0x8 + 0x0]             ; 005b0480
    ADD EAX,EBX                         ; 005b0487
    SHL EAX,0x3                         ; 005b0489
    SUB EAX,EBX                         ; 005b048c
    SHL EAX,0x2                         ; 005b048e
    MOV EDX,dword ptr [EAX + 0x3f69c60] ; 005b0491 | g_DirectSoundDevices
    XOR ECX,ECX                         ; 005b0497
    TEST EDX,EDX                        ; 005b0499
    JNZ 0x005b04a5                      ; 005b049b
        ;   XREF to: 005b04a5 (CONDITIONAL_JUMP)  ; LAB_005b04a5
    ADD EAX,0x3f69c60                   ; 005b049d | g_DirectSoundDevices
    LEA ECX,[EAX + 0x4]                 ; 005b04a2
    PUSH 0x0                            ; 005b04a5
        ;   Label: LAB_005b04a5
    PUSH 0x3f6a9b0                      ; 005b04a7 | g_DirectSound
    PUSH ECX                            ; 005b04ac
    CALL crt_dsound.c_DirectSoundCreate ; 005b04ad
        ;   XREF to: 00610f40 (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundCreate(LPGUID lpGuid, LPDIRECTSOUND * ppDS, LPUNKNOWN pUnkOuter)
    TEST EAX,EAX                        ; 005b04b2
    JZ 0x005b0503                       ; 005b04b4
        ;   XREF to: 005b0503 (CONDITIONAL_JUMP)  ; LAB_005b0503
    PUSH EAX                            ; 005b04b6
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005b04b7
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005b04bc
    PUSH EAX                            ; 005b04bf
    PUSH 0x6522bb                       ; 005b04c0 | = "create DirectSound object"
    PUSH 0x651a6c                       ; 005b04c5 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 005b04ca
    PUSH EAX                            ; 005b04d1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b04d2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b04d7
    LEA EAX,[ESP + 0x190]               ; 005b04da
    PUSH EAX                            ; 005b04e1
        ;   Label: LAB_005b04e1
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b04e2
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b04e7
    PUSH 0x3f6ad30                      ; 005b04ea | g_CDirectSoundDeviceInstance
    CALL sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270 ; 005b04ef
        ;   XREF to: 005ae270 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270(CDirectSoundDevice * this_ptr)
    ADD ESP,0x4                         ; 005b04f4
    XOR EAX,EAX                         ; 005b04f7
    ADD ESP,0x76c                       ; 005b04f9
    POP EDI                             ; 005b04ff
    POP ESI                             ; 005b0500
    POP EBX                             ; 005b0501
    RET                                 ; 005b0502
    PUSH 0x2                            ; 005b0503
        ;   Label: LAB_005b0503
    MOV ECX,dword ptr [0x03f98468]      ; 005b0505 | g_MainWindowHandle
    MOV EAX,[0x03f6a9b0]                ; 005b050b | g_DirectSound
    PUSH ECX                            ; 005b0510
    MOV EDX,dword ptr [EAX]             ; 005b0511
    PUSH EAX                            ; 005b0513
    CALL dword ptr [EDX + 0x18]         ; 005b0514
    TEST EAX,EAX                        ; 005b0517
    JNZ 0x005b05ac                      ; 005b0519
        ;   XREF to: 005b05ac (CONDITIONAL_JUMP)  ; LAB_005b05ac
    PUSH 0x14                           ; 005b051f
    PUSH EAX                            ; 005b0521
    LEA EAX,[ESP + 0x760]               ; 005b0522
    PUSH EAX                            ; 005b0529
    CALL crt_memory.c_memset_FUN_005fde40 ; 005b052a
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b052f
    MOV ESI,0x14                        ; 005b0532
    MOV EDI,0x11                        ; 005b0537
    PUSH 0x0                            ; 005b053c
    LEA EDX,[ESP + 0x75c]               ; 005b053e
    MOV EAX,[0x03f6a9b0]                ; 005b0545 | g_DirectSound
    PUSH 0x3f6a9b4                      ; 005b054a | g_DirectSoundPrimaryBuffer
    MOV dword ptr [ESP + 0x760],ESI     ; 005b054f
    MOV dword ptr [ESP + 0x764],EDI     ; 005b0556
    PUSH EDX                            ; 005b055d
    MOV ECX,dword ptr [EAX]             ; 005b055e
    PUSH EAX                            ; 005b0560
    CALL dword ptr [ECX + 0xc]          ; 005b0561
    TEST EAX,EAX                        ; 005b0564
    JNZ 0x005b05dc                      ; 005b0566
        ;   XREF to: 005b05dc (CONDITIONAL_JUMP)  ; LAB_005b05dc
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590 ; 005b0568
        ;   XREF to: 005ab590 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005ab590()
        ;   Label: LAB_005b0568
    TEST EAX,EAX                        ; 005b056d
    JZ 0x005b059d                       ; 005b056f
        ;   XREF to: 005b059d (CONDITIONAL_JUMP)  ; LAB_005b059d
    LEA EAX,[EBX*0x8 + 0x0]             ; 005b0571
    ADD EAX,EBX                         ; 005b0578
    SHL EAX,0x3                         ; 005b057a
    SUB EAX,EBX                         ; 005b057d
    CMP dword ptr [EAX*0x4 + 0x3f69d78],0x0 ; 005b057f | g_DirectSoundDevices[0].value1
    JZ 0x005b059d                       ; 005b0587
        ;   XREF to: 005b059d (CONDITIONAL_JUMP)  ; LAB_005b059d
    PUSH 0x3f6a9bc                      ; 005b0589 | g_DirectSound3DListener
    MOV EAX,[0x03f6a9b4]                ; 005b058e | g_DirectSoundPrimaryBuffer
    PUSH 0x686d58                       ; 005b0593 | DAT_00686d58
    MOV EDX,dword ptr [EAX]             ; 005b0598
    PUSH EAX                            ; 005b059a
    CALL dword ptr [EDX]                ; 005b059b
    MOV EAX,0x3f6ad30                   ; 005b059d | g_CDirectSoundDeviceInstance
        ;   Label: LAB_005b059d
    ADD ESP,0x76c                       ; 005b05a2
    POP EDI                             ; 005b05a8
    POP ESI                             ; 005b05a9
    POP EBX                             ; 005b05aa
    RET                                 ; 005b05ab
    PUSH EAX                            ; 005b05ac
        ;   Label: LAB_005b05ac
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005b05ad
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005b05b2
    PUSH EAX                            ; 005b05b5
    PUSH 0x6522d5                       ; 005b05b6 | = "Set cooperative level"
    PUSH 0x651a6c                       ; 005b05bb | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 005b05c0
    PUSH EAX                            ; 005b05c7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b05c8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b05cd
    LEA EAX,[ESP + 0x4b0]               ; 005b05d0
    JMP 0x005b04e1                      ; 005b05d7
        ;   XREF to: 005b04e1 (UNCONDITIONAL_JUMP)  ; LAB_005b04e1
    PUSH EAX                            ; 005b05dc
        ;   Label: LAB_005b05dc
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005b05dd
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005b05e2
    PUSH EAX                            ; 005b05e5
    PUSH 0x6522eb                       ; 005b05e6 | = "Create the primary buffer"
    PUSH 0x651a6c                       ; 005b05eb | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005b05f0
    PUSH EAX                            ; 005b05f4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b05f5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b05fa
    MOV EAX,ESP                         ; 005b05fd
    PUSH EAX                            ; 005b05ff
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0600
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b0605
    PUSH 0x0                            ; 005b0608
    MOV AH,byte ptr [ESP + 0x760]       ; 005b060a
    PUSH 0x3f6a9b4                      ; 005b0611 | g_DirectSoundPrimaryBuffer
    LEA EDX,[ESP + 0x760]               ; 005b0616
    AND AH,0xef                         ; 005b061d
    PUSH EDX                            ; 005b0620
    MOV byte ptr [ESP + 0x768],AH       ; 005b0621
    MOV EAX,[0x03f6a9b0]                ; 005b0628 | g_DirectSound
    PUSH EAX                            ; 005b062d
    MOV ECX,dword ptr [EAX]             ; 005b062e
    CALL dword ptr [ECX + 0xc]          ; 005b0630
    TEST EAX,EAX                        ; 005b0633
    JZ 0x005b0568                       ; 005b0635
        ;   XREF to: 005b0568 (CONDITIONAL_JUMP)  ; LAB_005b0568
    PUSH EAX                            ; 005b063b
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005b063c
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005b0641
    PUSH EAX                            ; 005b0644
    PUSH 0x652305                       ; 005b0645 | = "Create the primary buffer"
    PUSH 0x651a6c                       ; 005b064a | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 005b064f
    PUSH EAX                            ; 005b0656
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b0657
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b065c
    LEA EAX,[ESP + 0x320]               ; 005b065f
    JMP 0x005b04e1                      ; 005b0666
        ;   XREF to: 005b04e1 (UNCONDITIONAL_JUMP)  ; LAB_005b04e1

