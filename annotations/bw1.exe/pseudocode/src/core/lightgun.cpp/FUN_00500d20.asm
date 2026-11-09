; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lightgun_cpp_FUN_00500d20(CWeapon *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00603010
;   undefined4 DAT_00603018
;   undefined4 DAT_0060301c
;   undefined4 DAT_00603020
;   undefined4 DAT_00603024
;   CFilterCache* g_CFilterCachePtr = 0152c72c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062604c
;   undefined4 g_CDemonLightInstance.field7376_0x1cd0
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_dfilter.cpp_FUN_0045d7c0
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   core_inv.cpp_FUN_004fa470
;   core_lightgun.cpp_FUN_00500090
;   core_set.cpp_FUN_005518e0
;   core_weapon.cpp_CWeapon_process_FUN_005ad770
;   core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580
;   sound_sndmain.cpp_FUN_005727e0
;   sound_sndmain.cpp_FUN_005728e0
;   sound_sndmain.cpp_FUN_00572900
;   sound_sndmain.cpp_FUN_00572ac0
;   sound_sndmain.cpp_FUN_00572b40
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_FUN_00573950
;   sound_sndmain.cpp_FUN_00573980
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00500d20
        ;   Label: core_lightgun.cpp_FUN_00500d20
    PUSH EDI                            ; 00500d21
    PUSH EBP                            ; 00500d22
    SUB ESP,0xc                         ; 00500d23
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00500d26
    PUSH dword ptr [ESP + 0x20]         ; 00500d2a
    PUSH EBX                            ; 00500d2e
    CALL core_weapon.cpp_CWeapon_process_FUN_005ad770 ; 00500d2f
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ad770(CWeapon * this_ptr, float delta_time)
    MOV EAX,[0x01d06ab4]                ; 00500d34 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00500d39
    ADD ESP,0x8                         ; 00500d40
    ADD EAX,0x1fae8                     ; 00500d43
    PUSH dword ptr [0x00603010]         ; 00500d48 | DAT_00603010
    PUSH EAX                            ; 00500d4e
    CALL core_inv.cpp_FUN_004fa470      ; 00500d4f
        ;   XREF to: 004fa470 (UNCONDITIONAL_CALL)  ; float core_inv.cpp_FUN_004fa470(CInventory * this_ptr, float max_charge)
    MOV dword ptr [ESP + 0x10],EAX      ; 00500d54
    FLD float ptr [ESP + 0x10]          ; 00500d58
    FDIVR float ptr [0x00603010]        ; 00500d5c | DAT_00603010
    ADD ESP,0x8                         ; 00500d62
    FMUL float ptr [ESP + 0x20]         ; 00500d65
    FADD float ptr [EBX + 0x580]        ; 00500d69
    FST float ptr [EBX + 0x580]         ; 00500d6f
    FCOMP float ptr [0x00603010]        ; 00500d75 | DAT_00603010
    FNSTSW AX                           ; 00500d7b
    SAHF                                ; 00500d7d
    JA 0x00500e9e                       ; 00500d7e
        ;   XREF to: 00500e9e (CONDITIONAL_JUMP)  ; LAB_00500e9e
    FLD float ptr [EBX + 0x580]         ; 00500d84
        ;   Label: LAB_00500d84
    FDIV float ptr [0x00603010]         ; 00500d8a | DAT_00603010
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 00500d90
    FSTP float ptr [EBX + 0x584]        ; 00500d96
    CMP EDX,0x2                         ; 00500d9c
    JNZ 0x00500eae                      ; 00500d9f
        ;   XREF to: 00500eae (CONDITIONAL_JUMP)  ; LAB_00500eae
    PUSH ESI                            ; 00500da5
    FLD float ptr [0x00603018]          ; 00500da6 | DAT_00603018
    FLD float ptr [0x0060301c]          ; 00500dac | DAT_0060301c
    FSUB ST0,ST1                        ; 00500db2
    FMUL float ptr [EBX + 0x584]        ; 00500db4
    FLD float ptr [0x00603020]          ; 00500dba | DAT_00603020
    FLD float ptr [0x00603024]          ; 00500dc0 | DAT_00603024
    FSUB ST0,ST1                        ; 00500dc6
    MOV ECX,dword ptr [EBX + 0x57c]     ; 00500dc8
    FMUL float ptr [EBX + 0x584]        ; 00500dce
    PUSH ECX                            ; 00500dd4
    FXCH ST2                            ; 00500dd5
    FADDP ST3,ST0                       ; 00500dd7
    FADDP                               ; 00500dd9
    FXCH                                ; 00500ddb
    FSTP float ptr [ESP + 0xc]          ; 00500ddd
    FSTP float ptr [ESP + 0x8]          ; 00500de1
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00500de5
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00500dea
    TEST EAX,EAX                        ; 00500ded
    JZ 0x00500ece                       ; 00500def
        ;   XREF to: 00500ece (CONDITIONAL_JUMP)  ; LAB_00500ece
    MOV ESI,dword ptr [EBX + 0x57c]     ; 00500df5
    PUSH dword ptr [ESP + 0x8]          ; 00500dfb
    PUSH ESI                            ; 00500dff
    CALL sound_sndmain.cpp_FUN_00573950 ; 00500e00
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    ADD ESP,0x8                         ; 00500e05
    MOV EDI,dword ptr [EBX + 0x57c]     ; 00500e08
    PUSH dword ptr [ESP + 0x4]          ; 00500e0e
    PUSH EDI                            ; 00500e12
    CALL sound_sndmain.cpp_FUN_00573980 ; 00500e13
        ;   XREF to: 00573980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00573980(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 00500e18
    PUSH EBX                            ; 00500e1b
        ;   Label: LAB_00500e1b
    CALL core_lightgun.cpp_FUN_00500090 ; 00500e1c
        ;   XREF to: 00500090 (UNCONDITIONAL_CALL)  ; undefined core_lightgun.cpp_FUN_00500090()
    MOV EBP,dword ptr [EBX + 0x578]     ; 00500e21
    ADD ESP,0x4                         ; 00500e27
    TEST EBP,EBP                        ; 00500e2a
    JZ 0x00500e78                       ; 00500e2c
        ;   XREF to: 00500e78 (CONDITIONAL_JUMP)  ; LAB_00500e78
    PUSH 0x0                            ; 00500e2e
    PUSH 0x5e6ee9                       ; 00500e30
    MOV EDX,dword ptr [0x00611358]      ; 00500e35 | g_CFilterCachePtr
    MOV EAX,0x1                         ; 00500e3b
    PUSH EDX                            ; 00500e40
    MOV [0x01cce0b4],EAX                ; 00500e41 | g_CDemonLightInstance.field7376_0x1cd0
    CALL core_dfilter.cpp_FUN_0045d7c0  ; 00500e46
        ;   XREF to: 0045d7c0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_FUN_0045d7c0()
    ADD ESP,0xc                         ; 00500e4b
    PUSH 0x0                            ; 00500e4e
    PUSH 0x0                            ; 00500e50
    PUSH 0x0                            ; 00500e52
    PUSH EAX                            ; 00500e54
    PUSH 0x1ccc3e4                      ; 00500e55
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 00500e5a
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 00500e5f
    PUSH 0x0                            ; 00500e62
    MOV ECX,dword ptr [0x0062604c]      ; 00500e64 | DAT_0062604c
    PUSH 0x3dcccccd                     ; 00500e6a
    PUSH ECX                            ; 00500e6f
    CALL core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580 ; 00500e70
        ;   XREF to: 005ae580 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580(CWeather * this_ptr, float flash_timer, int play_sound)
    ADD ESP,0xc                         ; 00500e75
    PUSH 0x1ccc3e4                      ; 00500e78
        ;   Label: LAB_00500e78
    MOV ESI,dword ptr [0x00622c18]      ; 00500e7d | g_CDemonSetPtr
    PUSH ESI                            ; 00500e83
    CALL core_set.cpp_FUN_005518e0      ; 00500e84
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005518e0(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 00500e89
    MOV dword ptr [EBX + 0x578],0x0     ; 00500e8c
    POP ESI                             ; 00500e96
    ADD ESP,0xc                         ; 00500e97
    POP EBP                             ; 00500e9a
    POP EDI                             ; 00500e9b
    POP EBX                             ; 00500e9c
    RET                                 ; 00500e9d
    MOV EAX,[0x00603010]                ; 00500e9e | DAT_00603010
        ;   Label: LAB_00500e9e
    MOV dword ptr [EBX + 0x580],EAX     ; 00500ea3
    JMP 0x00500d84                      ; 00500ea9
        ;   XREF to: 00500d84 (UNCONDITIONAL_JUMP)  ; LAB_00500d84
    MOV EDI,dword ptr [EBX + 0x57c]     ; 00500eae
        ;   Label: LAB_00500eae
    PUSH EDI                            ; 00500eb4
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00500eb5
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00500eba
    MOV dword ptr [EBX + 0x578],0x0     ; 00500ebd
    ADD ESP,0xc                         ; 00500ec7
    POP EBP                             ; 00500eca
    POP EDI                             ; 00500ecb
    POP EBX                             ; 00500ecc
    RET                                 ; 00500ecd
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 00500ece
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
        ;   Label: LAB_00500ece
    LEA EAX,[EBX + 0x20]                ; 00500ed3
    PUSH EAX                            ; 00500ed6
    CALL sound_sndmain.cpp_FUN_005727e0 ; 00500ed7
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005727e0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 00500edc
    PUSH dword ptr [ESP + 0x8]          ; 00500edf
    CALL sound_sndmain.cpp_FUN_005728e0 ; 00500ee3
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 00500ee8
    PUSH dword ptr [ESP + 0x4]          ; 00500eeb
    CALL sound_sndmain.cpp_FUN_00572900 ; 00500eef
        ;   XREF to: 00572900 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572900(float base_frequency)
    ADD ESP,0x4                         ; 00500ef4
    PUSH 0x5e6eda                       ; 00500ef7
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 00500efc
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 00500f01
    MOV dword ptr [EBX + 0x57c],EAX     ; 00500f04
    CALL sound_sndmain.cpp_FUN_00572b40 ; 00500f0a
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    JMP 0x00500e1b                      ; 00500f0f
        ;   XREF to: 00500e1b (UNCONDITIONAL_JUMP)  ; LAB_00500e1b

