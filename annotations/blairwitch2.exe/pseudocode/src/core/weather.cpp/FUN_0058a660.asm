; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_FUN_0058a660(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bd570 at 004bd968
;
; Referenced Globals:
;   undefined4 s_noLightningFlash_005ee541+1
;   TerminatedCString s_noLightningFlash_005ee553
;   TerminatedCString s_rain_wav_1_005ee564
;   undefined4 DAT_005ee572
;   undefined4 DAT_005ee57a
;   undefined4 DAT_005ee582
;   undefined4 DAT_005ee58a
;   undefined4 DAT_005ee592
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_0061c068
;   undefined4 g_CGameInstance.field644_0x284
;   undefined4 g_CDemonCameraInstance.field4584_0x11e8
;   undefined4 DAT_02661fb8
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cf60
;   core_actor.cpp_FUN_0040d060
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_fire.cpp_FUN_0049ea20
;   core_sound.cpp_CSound_playSound_FUN_0055ae30
;   core_weather.cpp_CWeather_createThunder_FUN_0058acf0
;   core_weather.cpp_FUN_0058aa30
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058a660
        ;   Label: core_weather.cpp_FUN_0058a660
    PUSH ESI                            ; 0058a661
    PUSH EDI                            ; 0058a662
    PUSH EBP                            ; 0058a663
    MOV EBP,ESP                         ; 0058a664
    SUB ESP,0x30                        ; 0058a666
    AND ESP,0xfffffff8                  ; 0058a669
    MOV EAX,[0x00616494]                ; 0058a66c | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x284]     ; 0058a671 | g_CGameInstance.field644_0x284
    MOV dword ptr [ESP + 0x1c],EAX      ; 0058a677
    MOV dword ptr [ESP + 0x8],EAX       ; 0058a67b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a67f
    CMP dword ptr [EAX + 0x24],0x0      ; 0058a682
    JNZ 0x0058a862                      ; 0058a686
        ;   XREF to: 0058a862 (CONDITIONAL_JUMP)  ; LAB_0058a862
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a68c
        ;   Label: LAB_0058a68c
    CMP dword ptr [EAX],0x0             ; 0058a68f
    JZ 0x0058a90d                       ; 0058a692
        ;   XREF to: 0058a90d (CONDITIONAL_JUMP)  ; LAB_0058a90d
    XOR ESI,ESI                         ; 0058a698
    XOR EBX,EBX                         ; 0058a69a
    MOV dword ptr [ESP + 0x24],ESI      ; 0058a69c
    MOV dword ptr [ESP + 0x28],ESI      ; 0058a6a0
    MOV EAX,dword ptr [ESP + 0x24]      ; 0058a6a4
        ;   Label: LAB_0058a6a4
    XOR DL,DL                           ; 0058a6a8
    MOV byte ptr [EAX + 0x2662c38],DL   ; 0058a6aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a6b0
    FLD float ptr [EAX + 0x4]           ; 0058a6b3
    FMUL float ptr [ESP + 0x8]          ; 0058a6b6
    FSUBR float ptr [EBX + 0x2661fbc]   ; 0058a6ba | DAT_02661fbc | DAT_02661fc8
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058a6c0
    FST float ptr [EBX + 0x2661fbc]     ; 0058a6c4 | DAT_02661fbc | DAT_02661fc8
    FCOMP float ptr [EAX + 0x2662918]   ; 0058a6ca
    FNSTSW AX                           ; 0058a6d0
    SAHF                                ; 0058a6d2
    JNC 0x0058a765                      ; 0058a6d3
        ;   XREF to: 0058a765 (CONDITIONAL_JUMP)  ; LAB_0058a765
    FLD float ptr [EBX + 0x2661fbc]     ; 0058a6d9 | DAT_02661fbc | DAT_02661fc8
    FADD float ptr [0x005ee592]         ; 0058a6df | DAT_005ee592
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a6e5
    FSTP float ptr [EBX + 0x2661fbc]    ; 0058a6e8 | DAT_02661fbc | DAT_02661fc8
    CMP dword ptr [EAX],0x1             ; 0058a6ee
    JNZ 0x0058a765                      ; 0058a6f1
        ;   XREF to: 0058a765 (CONDITIONAL_JUMP)  ; LAB_0058a765
    MOV EAX,dword ptr [ESP + 0x28]      ; 0058a6f3
    LEA EDI,[ESP + 0x10]                ; 0058a6f7
    LEA ESI,[EBX + 0x2661fb8]           ; 0058a6fb
    MOV EAX,dword ptr [EAX + 0x2662918] ; 0058a701
    MOVSD ES:EDI,ESI                    ; 0058a707 | DAT_02661fb8
    MOVSD ES:EDI,ESI                    ; 0058a708 | DAT_02661fbc
    MOVSD ES:EDI,ESI                    ; 0058a709 | DAT_02661fc0
    PUSH 0x0                            ; 0058a70a
    MOV dword ptr [ESP + 0x18],EAX      ; 0058a70c
    LEA EAX,[ESP + 0x14]                ; 0058a710
    PUSH EAX                            ; 0058a714
    MOV ECX,dword ptr [0x00614d30]      ; 0058a715 | DAT_00614d30
    PUSH ECX                            ; 0058a71b
    CALL core_fire.cpp_FUN_0049ea20     ; 0058a71c
        ;   XREF to: 0049ea20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049ea20(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0058a721
    PUSH 0x0                            ; 0058a724
    LEA EAX,[ESP + 0x14]                ; 0058a726
    PUSH EAX                            ; 0058a72a
    MOV ESI,dword ptr [0x00614d30]      ; 0058a72b | DAT_00614d30
    PUSH ESI                            ; 0058a731
    CALL core_fire.cpp_FUN_0049ea20     ; 0058a732
        ;   XREF to: 0049ea20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049ea20(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0058a737
    PUSH 0x0                            ; 0058a73a
    LEA EAX,[ESP + 0x14]                ; 0058a73c
    PUSH EAX                            ; 0058a740
    MOV EDI,dword ptr [0x00614d30]      ; 0058a741 | DAT_00614d30
    PUSH EDI                            ; 0058a747
    CALL core_fire.cpp_FUN_0049ea20     ; 0058a748
        ;   XREF to: 0049ea20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049ea20(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0058a74d
    PUSH 0x0                            ; 0058a750
    LEA EAX,[ESP + 0x14]                ; 0058a752
    PUSH EAX                            ; 0058a756
    MOV EAX,[0x00614d30]                ; 0058a757 | DAT_00614d30
    PUSH EAX                            ; 0058a75c
    CALL core_fire.cpp_FUN_0049ea20     ; 0058a75d
        ;   XREF to: 0049ea20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_0049ea20(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0058a762
    MOV ECX,dword ptr [ESP + 0x24]      ; 0058a765
        ;   Label: LAB_0058a765
    MOV EDX,dword ptr [ESP + 0x28]      ; 0058a769
    ADD EBX,0xc                         ; 0058a76d
    INC ECX                             ; 0058a770
    ADD EDX,0x4                         ; 0058a771
    MOV dword ptr [ESP + 0x24],ECX      ; 0058a774
    MOV dword ptr [ESP + 0x28],EDX      ; 0058a778
    CMP ECX,0xc8                        ; 0058a77c
    JL 0x0058a6a4                       ; 0058a782
        ;   XREF to: 0058a6a4 (CONDITIONAL_JUMP)  ; LAB_0058a6a4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a788
    MOV EDI,dword ptr [EAX]             ; 0058a78b
    CMP EDI,0x1                         ; 0058a78d
    JNZ 0x0058a85b                      ; 0058a790
        ;   XREF to: 0058a85b (CONDITIONAL_JUMP)  ; LAB_0058a85b
    FLD float ptr [EAX + 0x20]          ; 0058a796
    FSUB float ptr [ESP + 0x8]          ; 0058a799
    FST float ptr [EAX + 0x20]          ; 0058a79d
    FLDZ                                ; 0058a7a0
    FCOMPP                              ; 0058a7a2
    FNSTSW AX                           ; 0058a7a4
    SAHF                                ; 0058a7a6
    JA 0x0058a922                       ; 0058a7a7
        ;   XREF to: 0058a922 (CONDITIONAL_JUMP)  ; LAB_0058a922
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a7ad
    FLD float ptr [EAX + 0x2c]          ; 0058a7b0
    FSUB float ptr [ESP + 0x8]          ; 0058a7b3
    FST float ptr [EAX + 0x2c]          ; 0058a7b7
    FLDZ                                ; 0058a7ba
    FCOMPP                              ; 0058a7bc
    FNSTSW AX                           ; 0058a7be
    SAHF                                ; 0058a7c0
    JBE 0x0058a7ff                      ; 0058a7c1
        ;   XREF to: 0058a7ff (CONDITIONAL_JUMP)  ; LAB_0058a7ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a7c3
    PUSH dword ptr [EAX + 0x34]         ; 0058a7c6
    PUSH 0x3dcccccd                     ; 0058a7c9
    CALL core_actor.cpp_FUN_0040cf60    ; 0058a7ce
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x34],EAX      ; 0058a7d3
    FLD float ptr [ESP + 0x34]          ; 0058a7d7
    ADD ESP,0x8                         ; 0058a7db
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a7de
    PUSH 0x5ee553                       ; 0058a7e1 | = "noLightningFlash"
    FSTP float ptr [EAX + 0x2c]         ; 0058a7e6
    MOV EAX,[0x006141f0]                ; 0058a7e9 | DAT_006141f0
    PUSH EAX                            ; 0058a7ee
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0058a7ef
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0058a7f4
    TEST EAX,EAX                        ; 0058a7f7
    JZ 0x0058a95b                       ; 0058a7f9
        ;   XREF to: 0058a95b (CONDITIONAL_JUMP)  ; LAB_0058a95b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a7ff
        ;   Label: LAB_0058a7ff
    FLD float ptr [EAX + 0x34]          ; 0058a802
    FST double ptr [ESP]                ; 0058a805
    FCOMP double ptr [0x005ee582]       ; 0058a808 | DAT_005ee582
    FNSTSW AX                           ; 0058a80e
    SAHF                                ; 0058a810
    JNC 0x0058a9f6                      ; 0058a811
        ;   XREF to: 0058a9f6 (CONDITIONAL_JUMP)  ; LAB_0058a9f6
    FLD double ptr [ESP]                ; 0058a817
    FLDLN2                              ; 0058a81a
    FXCH                                ; 0058a81c
    FYL2X                               ; 0058a81e
    FLD float ptr [ESP + 0x8]           ; 0058a820
    FMUL double ptr [0x005ee58a]        ; 0058a824 | DAT_005ee58a
    FADDP                               ; 0058a82a
    FLD1                                ; 0058a82c
    FLDL2E                              ; 0058a82e
    FMUL ST2                            ; 0058a830
    FST ST2                             ; 0058a832
    FPREM                               ; 0058a834
    F2XM1                               ; 0058a836
    FADDP                               ; 0058a838
    FSCALE                              ; 0058a83a
    FSTP ST1                            ; 0058a83c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a83e
    FSTP float ptr [EAX + 0x34]         ; 0058a841
    MOV ESI,dword ptr [0x02662d00]      ; 0058a844 | DAT_02662d00
        ;   Label: LAB_0058a844
    PUSH ESI                            ; 0058a84a
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0058a84b
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0058a850
    TEST EAX,EAX                        ; 0058a853
    JZ 0x0058aa05                       ; 0058a855
        ;   XREF to: 0058aa05 (CONDITIONAL_JUMP)  ; LAB_0058aa05
    MOV ESP,EBP                         ; 0058a85b
        ;   Label: LAB_0058a85b
    POP EBP                             ; 0058a85d
    POP EDI                             ; 0058a85e
    POP ESI                             ; 0058a85f
    POP EBX                             ; 0058a860
    RET                                 ; 0058a861
    FLD float ptr [EAX + 0x28]          ; 0058a862
        ;   Label: LAB_0058a862
    FSUB float ptr [ESP + 0x1c]         ; 0058a865
    FST float ptr [EAX + 0x28]          ; 0058a869
    FLDZ                                ; 0058a86c
    FCOMPP                              ; 0058a86e
    FNSTSW AX                           ; 0058a870
    SAHF                                ; 0058a872
    JA 0x0058a8e4                       ; 0058a873
        ;   XREF to: 0058a8e4 (CONDITIONAL_JUMP)  ; LAB_0058a8e4
    PUSH 0x5ee542                       ; 0058a875 | s_noLightningFlash_005ee541+1
    MOV ECX,dword ptr [0x006141f0]      ; 0058a87a | DAT_006141f0
    PUSH ECX                            ; 0058a880
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0058a881
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0058a886
    TEST EAX,EAX                        ; 0058a889
    JNZ 0x0058a8e4                      ; 0058a88b
        ;   XREF to: 0058a8e4 (CONDITIONAL_JUMP)  ; LAB_0058a8e4
    MOV EAX,[0x01fc8a20]                ; 0058a88d | g_CDemonCameraInstance.field4584_0x11e8
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058a892
    FILD dword ptr [ESP + 0x2c]         ; 0058a896
    FMUL double ptr [0x005ee572]        ; 0058a89a | DAT_005ee572
    FSUB float ptr [ESP + 0x1c]         ; 0058a8a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a8a4
    FST float ptr [ESP + 0x20]          ; 0058a8a7
    FCOMP float ptr [EAX + 0x30]        ; 0058a8ab
    FNSTSW AX                           ; 0058a8ae
    SAHF                                ; 0058a8b0
    JNC 0x0058a8ce                      ; 0058a8b1
        ;   XREF to: 0058a8ce (CONDITIONAL_JUMP)  ; LAB_0058a8ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a8b3
    MOV EAX,dword ptr [EAX + 0x30]      ; 0058a8b6
    MOV dword ptr [ESP + 0x20],EAX      ; 0058a8b9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a8bd
    MOV dword ptr [EAX + 0x24],0x0      ; 0058a8c0
    MOV dword ptr [EAX + 0x28],0x0      ; 0058a8c7
    PUSH dword ptr [ESP + 0x20]         ; 0058a8ce
        ;   Label: LAB_0058a8ce
    PUSH 0x1fc7838                      ; 0058a8d2
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80 ; 0058a8d7
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0058a8dc
    JMP 0x0058a68c                      ; 0058a8df
        ;   XREF to: 0058a68c (UNCONDITIONAL_JUMP)  ; LAB_0058a68c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a8e4
        ;   Label: LAB_0058a8e4
    PUSH dword ptr [EAX + 0x30]         ; 0058a8e7
    PUSH 0x1fc7838                      ; 0058a8ea
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80 ; 0058a8ef
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0058a8f4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a8f7
    MOV dword ptr [EAX + 0x24],0x0      ; 0058a8fa
    MOV dword ptr [EAX + 0x28],0x0      ; 0058a901
    JMP 0x0058a68c                      ; 0058a908
        ;   XREF to: 0058a68c (UNCONDITIONAL_JUMP)  ; LAB_0058a68c
    MOV EAX,[0x02662d00]                ; 0058a90d | DAT_02662d00
        ;   Label: LAB_0058a90d
    PUSH EAX                            ; 0058a912
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0058a913
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0058a918
    MOV ESP,EBP                         ; 0058a91b
    POP EBP                             ; 0058a91d
    POP EDI                             ; 0058a91e
    POP ESI                             ; 0058a91f
    POP EBX                             ; 0058a920
    RET                                 ; 0058a921
    PUSH 0x3ecccccd                     ; 0058a922
        ;   Label: LAB_0058a922
    CALL core_actor.cpp_FUN_0040d060    ; 0058a927
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0058a92c
    TEST EAX,EAX                        ; 0058a92f
    JZ 0x0058a94a                       ; 0058a931
        ;   XREF to: 0058a94a (CONDITIONAL_JUMP)  ; LAB_0058a94a
    PUSH EDI                            ; 0058a933
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058a934
    PUSH 0x3dcccccd                     ; 0058a937
    PUSH EBX                            ; 0058a93c
    CALL core_weather.cpp_FUN_0058aa30  ; 0058a93d
        ;   XREF to: 0058aa30 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_FUN_0058aa30(CWeather * this_ptr, float flash_timer, int play_sound)
    ADD ESP,0xc                         ; 0058a942
    JMP 0x0058a7ff                      ; 0058a945
        ;   XREF to: 0058a7ff (UNCONDITIONAL_JUMP)  ; LAB_0058a7ff
    MOV ECX,dword ptr [EBP + 0x14]      ; 0058a94a
        ;   Label: LAB_0058a94a
    PUSH ECX                            ; 0058a94d
    CALL core_weather.cpp_CWeather_createThunder_FUN_0058acf0 ; 0058a94e
        ;   XREF to: 0058acf0 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createThunder_FUN_0058acf0(CWeather * this_ptr)
    ADD ESP,0x4                         ; 0058a953
    JMP 0x0058a7ff                      ; 0058a956
        ;   XREF to: 0058a7ff (UNCONDITIONAL_JUMP)  ; LAB_0058a7ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a95b
        ;   Label: LAB_0058a95b
    MOV dword ptr [EAX + 0x24],EDI      ; 0058a95e
    MOV EAX,[0x01fc8a20]                ; 0058a961 | g_CDemonCameraInstance.field4584_0x11e8
    MOV dword ptr [ESP + 0x2c],EAX      ; 0058a966
    FILD dword ptr [ESP + 0x2c]         ; 0058a96a
    FMUL double ptr [0x005ee572]        ; 0058a96e | DAT_005ee572
    PUSH 0x3e99999a                     ; 0058a974
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058a979
    FSTP float ptr [ESP + 0x10]         ; 0058a97c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0058a980
    PUSH 0x3dcccccd                     ; 0058a984
    MOV dword ptr [EBX + 0x30],EAX      ; 0058a989
    CALL core_actor.cpp_FUN_0040cf60    ; 0058a98c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x34],EAX      ; 0058a991
    FLD float ptr [ESP + 0x34]          ; 0058a995
    ADD ESP,0x8                         ; 0058a999
    FADD float ptr [ESP + 0xc]          ; 0058a99c
    FST float ptr [ESP + 0xc]           ; 0058a9a0
    FLD1                                ; 0058a9a4
    FCOMPP                              ; 0058a9a6
    FNSTSW AX                           ; 0058a9a8
    SAHF                                ; 0058a9aa
    JNC 0x0058a9b5                      ; 0058a9ab
        ;   XREF to: 0058a9b5 (CONDITIONAL_JUMP)  ; LAB_0058a9b5
    MOV dword ptr [ESP + 0xc],0x3f800000 ; 0058a9ad
    FLD float ptr [ESP + 0xc]           ; 0058a9b5
        ;   Label: LAB_0058a9b5
    FMUL double ptr [0x005ee57a]        ; 0058a9b9 | DAT_005ee57a
    SUB ESP,0x4                         ; 0058a9bf
    FSTP float ptr [ESP]                ; 0058a9c2
    PUSH 0x3c23d70a                     ; 0058a9c5
    CALL core_actor.cpp_FUN_0040cf60    ; 0058a9ca
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cf60()
    MOV dword ptr [ESP + 0x34],EAX      ; 0058a9cf
    FLD float ptr [ESP + 0x34]          ; 0058a9d3
    ADD ESP,0x8                         ; 0058a9d7
    PUSH dword ptr [ESP + 0xc]          ; 0058a9da
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a9de
    PUSH 0x1fc7838                      ; 0058a9e1
    FSTP float ptr [EAX + 0x28]         ; 0058a9e6
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80 ; 0058a9e9
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0058a9ee
    JMP 0x0058a7ff                      ; 0058a9f1
        ;   XREF to: 0058a7ff (UNCONDITIONAL_JUMP)  ; LAB_0058a7ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058a9f6
        ;   Label: LAB_0058a9f6
    MOV dword ptr [EAX + 0x34],0x41700000 ; 0058a9f9
    JMP 0x0058a844                      ; 0058aa00
        ;   XREF to: 0058a844 (UNCONDITIONAL_JUMP)  ; LAB_0058a844
    PUSH 0x5ee564                       ; 0058aa05 | = "rain.wav @ .1"
        ;   Label: LAB_0058aa05
    MOV EDI,dword ptr [EBP + 0x14]      ; 0058aa0a
    PUSH EDI                            ; 0058aa0d
    MOV EAX,[0x0061c068]                ; 0058aa0e | DAT_0061c068
    PUSH EAX                            ; 0058aa13
    CALL core_sound.cpp_CSound_playSound_FUN_0055ae30 ; 0058aa14
        ;   XREF to: 0055ae30 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0055ae30(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0058aa19
    MOV [0x02662d00],EAX                ; 0058aa1c | DAT_02662d00
    MOV ESP,EBP                         ; 0058aa21
    POP EBP                             ; 0058aa23
    POP EDI                             ; 0058aa24
    POP ESI                             ; 0058aa25
    POP EBX                             ; 0058aa26
    RET                                 ; 0058aa27

