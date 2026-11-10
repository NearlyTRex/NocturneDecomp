; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightpis_cpp_CLightPis_process_FUN_00502480(CLightPis *this_ptr,float delta_time)
;
; Parameters:
; CLightPis *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_00603170
;   undefined4 DAT_00603178
;   undefined4 DAT_0060317c
;   undefined4 DAT_00603180
;   undefined4 DAT_00603184
;   CFilterCache* g_CFilterCachePtr = 0152c72c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062604c
;   undefined4 g_CDemonLightInstance.antialiasing_enabled
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_dfilter.cpp_FUN_0045d7c0
;   core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30
;   core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004fa470
;   core_lightpis.cpp_FUN_005017f0
;   core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0
;   core_weapon.cpp_CWeapon_process_FUN_005ad770
;   core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580
;   sound_sndmain.cpp_FUN_005727e0
;   sound_sndmain.cpp_FUN_005728e0
;   sound_sndmain.cpp_FUN_00572900
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_FUN_00573950
;   sound_sndmain.cpp_FUN_00573980
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502480
        ;   Label: core_lightpis.cpp_CLightPis_process_FUN_00502480
    PUSH EDI                            ; 00502481
    PUSH EBP                            ; 00502482
    SUB ESP,0xc                         ; 00502483
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00502486
    PUSH dword ptr [ESP + 0x20]         ; 0050248a
    PUSH EBX                            ; 0050248e
    CALL core_weapon.cpp_CWeapon_process_FUN_005ad770 ; 0050248f
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ad770(CWeapon * this_ptr, float delta_time)
    MOV EAX,[0x01d06ab4]                ; 00502494 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00502499
    ADD ESP,0x8                         ; 005024a0
    ADD EAX,0x1fae8                     ; 005024a3
    PUSH dword ptr [0x00603170]         ; 005024a8 | DAT_00603170
    PUSH EAX                            ; 005024ae
    CALL core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004fa470 ; 005024af
        ;   XREF to: 004fa470 (UNCONDITIONAL_CALL)  ; float core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004fa470(CInventory * this_ptr, float max_charge)
    MOV dword ptr [ESP + 0x10],EAX      ; 005024b4
    FLD float ptr [ESP + 0x10]          ; 005024b8
    FDIVR float ptr [0x00603170]        ; 005024bc | DAT_00603170
    ADD ESP,0x8                         ; 005024c2
    FMUL float ptr [ESP + 0x20]         ; 005024c5
    FADD float ptr [EBX + 0x580]        ; 005024c9
    FST float ptr [EBX + 0x580]         ; 005024cf
    FCOMP float ptr [0x00603170]        ; 005024d5 | DAT_00603170
    FNSTSW AX                           ; 005024db
    SAHF                                ; 005024dd
    JA 0x005025fe                       ; 005024de
        ;   XREF to: 005025fe (CONDITIONAL_JUMP)  ; LAB_005025fe
    FLD float ptr [EBX + 0x580]         ; 005024e4
        ;   Label: LAB_005024e4
    FDIV float ptr [0x00603170]         ; 005024ea | DAT_00603170
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 005024f0
    FSTP float ptr [EBX + 0x584]        ; 005024f6
    CMP EDX,0x2                         ; 005024fc
    JNZ 0x0050260e                      ; 005024ff
        ;   XREF to: 0050260e (CONDITIONAL_JUMP)  ; LAB_0050260e
    PUSH ESI                            ; 00502505
    FLD float ptr [0x00603178]          ; 00502506 | DAT_00603178
    FLD float ptr [0x0060317c]          ; 0050250c | DAT_0060317c
    FSUB ST0,ST1                        ; 00502512
    FMUL float ptr [EBX + 0x584]        ; 00502514
    FLD float ptr [0x00603180]          ; 0050251a | DAT_00603180
    FLD float ptr [0x00603184]          ; 00502520 | DAT_00603184
    FSUB ST0,ST1                        ; 00502526
    MOV ECX,dword ptr [EBX + 0x57c]     ; 00502528
    FMUL float ptr [EBX + 0x584]        ; 0050252e
    PUSH ECX                            ; 00502534
    FXCH ST2                            ; 00502535
    FADDP ST3,ST0                       ; 00502537
    FADDP                               ; 00502539
    FXCH                                ; 0050253b
    FSTP float ptr [ESP + 0xc]          ; 0050253d
    FSTP float ptr [ESP + 0x8]          ; 00502541
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00502545
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0050254a
    TEST EAX,EAX                        ; 0050254d
    JZ 0x0050262e                       ; 0050254f
        ;   XREF to: 0050262e (CONDITIONAL_JUMP)  ; LAB_0050262e
    MOV ESI,dword ptr [EBX + 0x57c]     ; 00502555
    PUSH dword ptr [ESP + 0x8]          ; 0050255b
    PUSH ESI                            ; 0050255f
    CALL sound_sndmain.cpp_FUN_00573950 ; 00502560
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    ADD ESP,0x8                         ; 00502565
    MOV EDI,dword ptr [EBX + 0x57c]     ; 00502568
    PUSH dword ptr [ESP + 0x4]          ; 0050256e
    PUSH EDI                            ; 00502572
    CALL sound_sndmain.cpp_FUN_00573980 ; 00502573
        ;   XREF to: 00573980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00573980(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 00502578
    PUSH EBX                            ; 0050257b
        ;   Label: LAB_0050257b
    CALL core_lightpis.cpp_FUN_005017f0 ; 0050257c
        ;   XREF to: 005017f0 (UNCONDITIONAL_CALL)  ; undefined core_lightpis.cpp_FUN_005017f0()
    MOV EBP,dword ptr [EBX + 0x578]     ; 00502581
    ADD ESP,0x4                         ; 00502587
    TEST EBP,EBP                        ; 0050258a
    JZ 0x005025d8                       ; 0050258c
        ;   XREF to: 005025d8 (CONDITIONAL_JUMP)  ; LAB_005025d8
    PUSH 0x0                            ; 0050258e
    PUSH 0x5e7011                       ; 00502590
    MOV EDX,dword ptr [0x00611358]      ; 00502595 | g_CFilterCachePtr
    MOV EAX,0x1                         ; 0050259b
    PUSH EDX                            ; 005025a0
    MOV [0x01cce0b4],EAX                ; 005025a1 | g_CDemonLightInstance.antialiasing_enabled
    CALL core_dfilter.cpp_FUN_0045d7c0  ; 005025a6
        ;   XREF to: 0045d7c0 (UNCONDITIONAL_CALL)  ; undefined core_dfilter.cpp_FUN_0045d7c0()
    ADD ESP,0xc                         ; 005025ab
    PUSH 0x0                            ; 005025ae
    PUSH 0x0                            ; 005025b0
    PUSH 0x0                            ; 005025b2
    PUSH EAX                            ; 005025b4
    PUSH 0x1ccc3e4                      ; 005025b5
    CALL core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30 ; 005025ba
        ;   XREF to: 00463e30 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_applyFilter_FUN_00463e30(CDemonLight * this_ptr, CDemonFilter * filter_ptr, int filter_index, int filter_pos_x, ...)
    ADD ESP,0x14                        ; 005025bf
    PUSH 0x0                            ; 005025c2
    MOV ECX,dword ptr [0x0062604c]      ; 005025c4 | DAT_0062604c
    PUSH 0x3dcccccd                     ; 005025ca
    PUSH ECX                            ; 005025cf
    CALL core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580 ; 005025d0
        ;   XREF to: 005ae580 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580(CWeather * this_ptr, float flash_timer, int play_sound)
    ADD ESP,0xc                         ; 005025d5
    PUSH 0x1ccc3e4                      ; 005025d8
        ;   Label: LAB_005025d8
    MOV ESI,dword ptr [0x00622c18]      ; 005025dd | g_CDemonSetPtr
    PUSH ESI                            ; 005025e3
    CALL core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0 ; 005025e4
        ;   XREF to: 005518e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addDynamicLight_FUN_005518e0(CDemonSet * this_ptr, CDemonLight * light)
    ADD ESP,0x8                         ; 005025e9
    MOV dword ptr [EBX + 0x578],0x0     ; 005025ec
    POP ESI                             ; 005025f6
    ADD ESP,0xc                         ; 005025f7
    POP EBP                             ; 005025fa
    POP EDI                             ; 005025fb
    POP EBX                             ; 005025fc
    RET                                 ; 005025fd
    MOV EAX,[0x00603170]                ; 005025fe | DAT_00603170
        ;   Label: LAB_005025fe
    MOV dword ptr [EBX + 0x580],EAX     ; 00502603
    JMP 0x005024e4                      ; 00502609
        ;   XREF to: 005024e4 (UNCONDITIONAL_JUMP)  ; LAB_005024e4
    MOV EDI,dword ptr [EBX + 0x57c]     ; 0050260e
        ;   Label: LAB_0050260e
    PUSH EDI                            ; 00502614
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00502615
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0050261a
    MOV dword ptr [EBX + 0x578],0x0     ; 0050261d
    ADD ESP,0xc                         ; 00502627
    POP EBP                             ; 0050262a
    POP EDI                             ; 0050262b
    POP EBX                             ; 0050262c
    RET                                 ; 0050262d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0050262e
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
        ;   Label: LAB_0050262e
    LEA EAX,[EBX + 0x20]                ; 00502633
    PUSH EAX                            ; 00502636
    CALL sound_sndmain.cpp_FUN_005727e0 ; 00502637
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005727e0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 0050263c
    PUSH dword ptr [ESP + 0x8]          ; 0050263f
    CALL sound_sndmain.cpp_FUN_005728e0 ; 00502643
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 00502648
    PUSH dword ptr [ESP + 0x4]          ; 0050264b
    CALL sound_sndmain.cpp_FUN_00572900 ; 0050264f
        ;   XREF to: 00572900 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572900(float base_frequency)
    ADD ESP,0x4                         ; 00502654
    PUSH 0x5e7002                       ; 00502657
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0050265c
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 00502661
    MOV dword ptr [EBX + 0x57c],EAX     ; 00502664
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0050266a
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    JMP 0x0050257b                      ; 0050266f
        ;   XREF to: 0050257b (UNCONDITIONAL_JUMP)  ; LAB_0050257b

