; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDirectSoundDevice * __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_00557910(UINT device_id)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; Local Variables:
; undefined        Stack[-0x138]:1  local_138
;
; XREF[1]:
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90 at 00552c0c
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_create_DirectSound_objec_005ea4a9
;   TerminatedCString s_Set_cooperative_level_005ea4c3
;   TerminatedCString s_Create_the_primary_buffe_005ea4d9
;   TerminatedCString s_Create_the_primary_buffe_005ea4f3
;   undefined4 DAT_00621060
;   undefined4 DAT_0264a5c4
;   undefined4 DAT_0264a5c8
;   undefined4 DAT_0264a5d0
;   undefined4 DAT_02664628
;
; Called Functions:
;   crt_dsound.c_DirectSoundCreate
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_CDirectSoundDevice_close_FUN_00555060
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_00557860
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_FUN_005549c0
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00552b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557910
        ;   Label: sound_snddx.cpp_getDirectSoundDevice_FUN_00557910
    PUSH ESI                            ; 00557911
    PUSH EDI                            ; 00557912
    SUB ESP,0x76c                       ; 00557913
    MOV EBX,dword ptr [ESP + 0x77c]     ; 00557919
    PUSH 0x264b06c                      ; 00557920
    CALL sound_snddx.cpp_CDirectSoundDevice_close_FUN_00555060 ; 00557925
        ;   XREF to: 00555060 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_CDirectSoundDevice_close_FUN_00555060(CDirectSoundDevice * this_ptr)
    ADD ESP,0x4                         ; 0055792a
    TEST EAX,EAX                        ; 0055792d
    JNZ 0x0055793b                      ; 0055792f
        ;   XREF to: 0055793b (CONDITIONAL_JUMP)  ; LAB_0055793b
    ADD ESP,0x76c                       ; 00557931
        ;   Label: LAB_00557931
    POP EDI                             ; 00557937
    POP ESI                             ; 00557938
    POP EBX                             ; 00557939
    RET                                 ; 0055793a
    LEA EAX,[ESP + 0x640]               ; 0055793b
        ;   Label: LAB_0055793b
    PUSH EAX                            ; 00557942
    PUSH EBX                            ; 00557943
    CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_00557860 ; 00557944
        ;   XREF to: 00557860 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_enumerateDirectSoundDevice_FUN_00557860(UINT device_id, SSoundDeviceInfo * device_info)
    ADD ESP,0x8                         ; 00557949
    TEST EAX,EAX                        ; 0055794c
    JZ 0x00557931                       ; 0055794e
        ;   XREF to: 00557931 (CONDITIONAL_JUMP)  ; LAB_00557931
    LEA EAX,[EBX*0x8 + 0x0]             ; 00557950
    ADD EAX,EBX                         ; 00557957
    SHL EAX,0x3                         ; 00557959
    SUB EAX,EBX                         ; 0055795c
    SHL EAX,0x2                         ; 0055795e
    MOV EDX,dword ptr [EAX + 0x2649874] ; 00557961
    XOR ECX,ECX                         ; 00557967
    TEST EDX,EDX                        ; 00557969
    JNZ 0x00557975                      ; 0055796b
        ;   XREF to: 00557975 (CONDITIONAL_JUMP)  ; LAB_00557975
    ADD EAX,0x2649874                   ; 0055796d
    LEA ECX,[EAX + 0x4]                 ; 00557972
    PUSH 0x0                            ; 00557975
        ;   Label: LAB_00557975
    PUSH 0x264a5c4                      ; 00557977 | DAT_0264a5c4
    PUSH ECX                            ; 0055797c
    CALL crt_dsound.c_DirectSoundCreate ; 0055797d
        ;   XREF to: 005c7550 (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundCreate(LPGUID lp_guid, LPDIRECTSOUND * pp_ds, LPUNKNOWN p_unk_outer)
    TEST EAX,EAX                        ; 00557982
    JZ 0x005579d3                       ; 00557984
        ;   XREF to: 005579d3 (CONDITIONAL_JUMP)  ; LAB_005579d3
    PUSH EAX                            ; 00557986
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557987
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 0055798c
    PUSH EAX                            ; 0055798f
    PUSH 0x5ea4a9                       ; 00557990 | = "create DirectSound object"
    PUSH 0x5e9a3b                       ; 00557995 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055799a
    PUSH EAX                            ; 005579a1
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005579a2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 005579a7
    LEA EAX,[ESP + 0x190]               ; 005579aa
    PUSH EAX                            ; 005579b1
        ;   Label: LAB_005579b1
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005579b2
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 005579b7
    PUSH 0x264b06c                      ; 005579ba
    CALL sound_snddx.cpp_CDirectSoundDevice_close_FUN_00555060 ; 005579bf
        ;   XREF to: 00555060 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_CDirectSoundDevice_close_FUN_00555060(CDirectSoundDevice * this_ptr)
    ADD ESP,0x4                         ; 005579c4
    XOR EAX,EAX                         ; 005579c7
    ADD ESP,0x76c                       ; 005579c9
    POP EDI                             ; 005579cf
    POP ESI                             ; 005579d0
    POP EBX                             ; 005579d1
    RET                                 ; 005579d2
    PUSH 0x2                            ; 005579d3
        ;   Label: LAB_005579d3
    MOV ECX,dword ptr [0x02664628]      ; 005579d5 | DAT_02664628
    MOV EAX,[0x0264a5c4]                ; 005579db | DAT_0264a5c4
    PUSH ECX                            ; 005579e0
    MOV EDX,dword ptr [EAX]             ; 005579e1
    PUSH EAX                            ; 005579e3
    CALL dword ptr [EDX + 0x18]         ; 005579e4
    TEST EAX,EAX                        ; 005579e7
    JNZ 0x00557a7d                      ; 005579e9
        ;   XREF to: 00557a7d (CONDITIONAL_JUMP)  ; LAB_00557a7d
    PUSH 0x14                           ; 005579ef
    PUSH EAX                            ; 005579f1
    LEA EAX,[ESP + 0x760]               ; 005579f2
    PUSH EAX                            ; 005579f9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005579fa
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005579ff
    MOV ESI,0x14                        ; 00557a02
    MOV EDI,0x11                        ; 00557a07
    PUSH 0x0                            ; 00557a0c
    LEA EDX,[ESP + 0x75c]               ; 00557a0e
    MOV EAX,[0x0264a5c4]                ; 00557a15 | DAT_0264a5c4
    PUSH 0x264a5c8                      ; 00557a1a | DAT_0264a5c8
    MOV dword ptr [ESP + 0x760],ESI     ; 00557a1f
    MOV dword ptr [ESP + 0x764],EDI     ; 00557a26
    PUSH EDX                            ; 00557a2d
    MOV ECX,dword ptr [EAX]             ; 00557a2e
    PUSH EAX                            ; 00557a30
    CALL dword ptr [ECX + 0xc]          ; 00557a31
    TEST EAX,EAX                        ; 00557a34
    JNZ 0x00557aad                      ; 00557a36
        ;   XREF to: 00557aad (CONDITIONAL_JUMP)  ; LAB_00557aad
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00552b40 ; 00557a38
        ;   XREF to: 00552b40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isHardwareMixingEnabled_FUN_00552b40()
        ;   Label: LAB_00557a38
    CMP EAX,0x2                         ; 00557a3d
    JL 0x00557a6e                       ; 00557a40
        ;   XREF to: 00557a6e (CONDITIONAL_JUMP)  ; LAB_00557a6e
    LEA EAX,[EBX*0x8 + 0x0]             ; 00557a42
    ADD EAX,EBX                         ; 00557a49
    SHL EAX,0x3                         ; 00557a4b
    SUB EAX,EBX                         ; 00557a4e
    CMP dword ptr [EAX*0x4 + 0x264998c],0x2 ; 00557a50
    JL 0x00557a6e                       ; 00557a58
        ;   XREF to: 00557a6e (CONDITIONAL_JUMP)  ; LAB_00557a6e
    PUSH 0x264a5d0                      ; 00557a5a | DAT_0264a5d0
    MOV EAX,[0x0264a5c8]                ; 00557a5f | DAT_0264a5c8
    PUSH 0x621060                       ; 00557a64 | DAT_00621060
    MOV EDX,dword ptr [EAX]             ; 00557a69
    PUSH EAX                            ; 00557a6b
    CALL dword ptr [EDX]                ; 00557a6c
    MOV EAX,0x264b06c                   ; 00557a6e
        ;   Label: LAB_00557a6e
    ADD ESP,0x76c                       ; 00557a73
    POP EDI                             ; 00557a79
    POP ESI                             ; 00557a7a
    POP EBX                             ; 00557a7b
    RET                                 ; 00557a7c
    PUSH EAX                            ; 00557a7d
        ;   Label: LAB_00557a7d
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557a7e
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00557a83
    PUSH EAX                            ; 00557a86
    PUSH 0x5ea4c3                       ; 00557a87 | = "Set cooperative level"
    PUSH 0x5e9a3b                       ; 00557a8c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 00557a91
    PUSH EAX                            ; 00557a98
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00557a99
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00557a9e
    LEA EAX,[ESP + 0x4b0]               ; 00557aa1
    JMP 0x005579b1                      ; 00557aa8
        ;   XREF to: 005579b1 (UNCONDITIONAL_JUMP)  ; LAB_005579b1
    PUSH EAX                            ; 00557aad
        ;   Label: LAB_00557aad
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557aae
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00557ab3
    PUSH EAX                            ; 00557ab6
    PUSH 0x5ea4d9                       ; 00557ab7 | = "Create the primary buffer"
    PUSH 0x5e9a3b                       ; 00557abc | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00557ac1
    PUSH EAX                            ; 00557ac5
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00557ac6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00557acb
    MOV EAX,ESP                         ; 00557ace
    PUSH EAX                            ; 00557ad0
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00557ad1
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00557ad6
    PUSH 0x0                            ; 00557ad9
    MOV AH,byte ptr [ESP + 0x760]       ; 00557adb
    PUSH 0x264a5c8                      ; 00557ae2 | DAT_0264a5c8
    LEA EDX,[ESP + 0x760]               ; 00557ae7
    AND AH,0xef                         ; 00557aee
    PUSH EDX                            ; 00557af1
    MOV byte ptr [ESP + 0x768],AH       ; 00557af2
    MOV EAX,[0x0264a5c4]                ; 00557af9 | DAT_0264a5c4
    PUSH EAX                            ; 00557afe
    MOV ECX,dword ptr [EAX]             ; 00557aff
    CALL dword ptr [ECX + 0xc]          ; 00557b01
    TEST EAX,EAX                        ; 00557b04
    JZ 0x00557a38                       ; 00557b06
        ;   XREF to: 00557a38 (CONDITIONAL_JUMP)  ; LAB_00557a38
    PUSH EAX                            ; 00557b0c
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557b0d
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00557b12
    PUSH EAX                            ; 00557b15
    PUSH 0x5ea4f3                       ; 00557b16 | = "Create the primary buffer"
    PUSH 0x5e9a3b                       ; 00557b1b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 00557b20
    PUSH EAX                            ; 00557b27
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00557b28
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00557b2d
    LEA EAX,[ESP + 0x320]               ; 00557b30
    JMP 0x005579b1                      ; 00557b37
        ;   XREF to: 005579b1 (UNCONDITIONAL_JUMP)  ; LAB_005579b1

