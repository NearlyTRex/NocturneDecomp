; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_process_FUN_004ed890(CHostage *this_ptr,float delta_time)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004ed850 = 004ed8b4
;   undefined1* switchdataD_004ed868 = 004ee69d
;   undefined1* switchdataD_004ed878 = 004ee2f9
;   TerminatedCString s_s_escaping_from_s_005e4d24
;   TerminatedCString s_s_confused_while_walking_005e4d39
;   TerminatedCString s_s_rescued_entering_follo_005e4d63
;   TerminatedCString s_s_was_led_close_enough_g_005e4d85
;   TerminatedCString s_s_left_behind_005e4dab
;   TerminatedCString s_s_was_left_behind_but_no_005e4dbc
;   TerminatedCString s_s_doesn_t_know_next_wayp_005e4deb
;   TerminatedCString s_s_reached_waypoint_s_005e4e20
;   TerminatedCString s_s_rescued_and_taken_home_005e4e39
;   TerminatedCString s_s_got_confused_going_hom_005e4e55
;   TerminatedCString s_Bip01_L_Forearm_005e4e7c
;   TerminatedCString s_deputeFireShotgun_005e4e8c
;   ... and 26 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   ... and 26 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed890
        ;   Label: core_hostage.cpp_CHostage_process_FUN_004ed890
    PUSH ESI                            ; 004ed891
    PUSH EDI                            ; 004ed892
    PUSH EBP                            ; 004ed893
    MOV EBP,ESP                         ; 004ed894
    SUB ESP,0x284                       ; 004ed896
    AND ESP,0xfffffff8                  ; 004ed89c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ed89f
    MOV EAX,dword ptr [EBX + 0x1fe6c]   ; 004ed8a2
    CMP EAX,0x5                         ; 004ed8a8
    JA 0x004ed8c8                       ; 004ed8ab
        ;   XREF to: 004ed8c8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4ed850]  ; 004ed8ad | caseD_4 | caseD_2 | caseD_5
        ;   Label: switchD
    MOV dword ptr [EBX + 0x2ff8],0x42480000 ; 004ed8b4
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x2ff4],0x41a00000 ; 004ed8be
    FLD float ptr [EBX + 0x2538]        ; 004ed8c8
        ;   Label: default
    FLDZ                                ; 004ed8ce
    FCOMPP                              ; 004ed8d0
    FNSTSW AX                           ; 004ed8d2
    SAHF                                ; 004ed8d4
    JC 0x004ed8eb                       ; 004ed8d5
        ;   XREF to: 004ed8eb (CONDITIONAL_JUMP)  ; LAB_004ed8eb
    MOV dword ptr [EBX + 0x2ff8],0x47c34f80 ; 004ed8d7
    MOV dword ptr [EBX + 0x2ff4],0x47c34f80 ; 004ed8e1
    PUSH dword ptr [EBP + 0x18]         ; 004ed8eb
        ;   Label: LAB_004ed8eb
    PUSH EBX                            ; 004ed8ee
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004ed8ef
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ed8f4
    TEST EAX,EAX                        ; 004ed8f7
    JZ 0x004edfe7                       ; 004ed8f9
        ;   XREF to: 004edfe7 (CONDITIONAL_JUMP)  ; LAB_004edfe7
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ed8ff
    MOV dword ptr [ESP + 0x24],EAX      ; 004ed902
    LEA EAX,[EBX + 0x249c]              ; 004ed906
    MOV dword ptr [EAX + 0x8],0x0       ; 004ed90c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ed913
    MOV dword ptr [EAX + 0x4],EDX       ; 004ed916
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ed919
    MOV dword ptr [EAX],EDX             ; 004ed91c
    LEA EAX,[EBX + 0x158]               ; 004ed91e
    MOV dword ptr [ESP + 0x268],EAX     ; 004ed924
    FLD float ptr [ESP + 0x24]          ; 004ed92b
        ;   Label: LAB_004ed92b
    FLDZ                                ; 004ed92f
    FCOMPP                              ; 004ed931
    FNSTSW AX                           ; 004ed933
    SAHF                                ; 004ed935
    JNC 0x004edc18                      ; 004ed936
        ;   XREF to: 004edc18 (CONDITIONAL_JUMP)  ; LAB_004edc18
    LEA EAX,[ESP + 0x24]                ; 004ed93c
    PUSH EAX                            ; 004ed940
    MOV ESI,dword ptr [ESP + 0x26c]     ; 004ed941
    PUSH ESI                            ; 004ed948
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004ed949
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004ed94e
    MOV ESI,EAX                         ; 004ed951
    CMP EAX,0xb                         ; 004ed953
    JNC 0x004edbfe                      ; 004ed956
        ;   XREF to: 004edbfe (CONDITIONAL_JUMP)  ; LAB_004edbfe
    CMP EAX,0x6                         ; 004ed95c
    JZ 0x004ed99f                       ; 004ed95f
        ;   XREF to: 004ed99f (CONDITIONAL_JUMP)  ; LAB_004ed99f
    PUSH ESI                            ; 004ed961
    PUSH EBX                            ; 004ed962
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004ed963
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004ed968
    JMP 0x004ed92b                      ; 004ed96b
        ;   XREF to: 004ed92b (UNCONDITIONAL_JUMP)  ; LAB_004ed92b
    MOV dword ptr [EBX + 0x2ff8],0x42960000 ; 004ed96d
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x2ff4],0x42200000 ; 004ed977
    JMP 0x004ed8c8                      ; 004ed981
        ;   XREF to: 004ed8c8 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x2ff8],0x47c34f80 ; 004ed986
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x2ff4],0x47c34f80 ; 004ed990
    JMP 0x004ed8c8                      ; 004ed99a
        ;   XREF to: 004ed8c8 (UNCONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBX + 0x26fc]    ; 004ed99f
        ;   Label: LAB_004ed99f
    TEST EDX,EDX                        ; 004ed9a5
    JZ 0x004ed92b                       ; 004ed9a7
        ;   XREF to: 004ed92b (CONDITIONAL_JUMP)  ; LAB_004ed92b
    PUSH EDX                            ; 004ed9a9
    PUSH EBX                            ; 004ed9aa
    PUSH 0x5e4d24                       ; 004ed9ab | = "%s escaping from %s\n"
    MOV ESI,dword ptr [0x00611100]      ; 004ed9b0 | g_CConsolePtr
    PUSH ESI                            ; 004ed9b6 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004ed9b7
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x10                        ; 004ed9bc
    LEA EAX,[ESP + 0x28]                ; 004ed9bf
    PUSH EAX                            ; 004ed9c3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004ed9c4
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004ed9c9
    PUSH 0x41700000                     ; 004ed9cc
    PUSH 0x41200000                     ; 004ed9d1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004ed9d6
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x288],EAX     ; 004ed9db
    FLD float ptr [ESP + 0x288]         ; 004ed9e2
    ADD ESP,0x8                         ; 004ed9e9
    LEA ESI,[ESP + 0x28]                ; 004ed9ec
    MOV dword ptr [ESP + 0x5c],EBX      ; 004ed9f0
    MOV dword ptr [ESP + 0x60],EBX      ; 004ed9f4
    PUSH ESI                            ; 004ed9f8
    FSTP float ptr [ESP + 0x30]         ; 004ed9f9
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 004ed9fd
    PUSH EAX                            ; 004eda03
    MOV EDX,dword ptr [EAX + 0x154]     ; 004eda04
    CALL dword ptr [EDX + 0x108]        ; 004eda0a
    ADD ESP,0x8                         ; 004eda10
    JMP 0x004ed92b                      ; 004eda13
        ;   XREF to: 004ed92b (UNCONDITIONAL_JUMP)  ; LAB_004ed92b
    XOR EAX,EAX                         ; 004eda18
        ;   Label: LAB_004eda18
    MOV EDI,0x7149f2ca                  ; 004eda1a
    MOV dword ptr [ESP + 0x26c],EAX     ; 004eda1f
    MOV dword ptr [ESP + 0xa0],EAX      ; 004eda26
    MOV dword ptr [ESP + 0xa4],EAX      ; 004eda2d
    LEA EAX,[ESP + 0xa0]                ; 004eda34
    MOV ESI,0x3fc00000                  ; 004eda3b
    PUSH EAX                            ; 004eda40
    MOV dword ptr [ESP + 0x274],EDI     ; 004eda41
    MOV dword ptr [ESP + 0xac],ESI      ; 004eda48
    PUSH EBX                            ; 004eda4f
    LEA ESI,[ESP + 0x9c]                ; 004eda50
    LEA EDI,[ESP + 0x1b0]               ; 004eda57
    CALL core_actor.cpp_FUN_00408b40    ; 004eda5e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x9c]                ; 004eda63
    ADD ESP,0x8                         ; 004eda6a
    MOVSD ES:EDI,ESI                    ; 004eda6d
    MOVSD ES:EDI,ESI                    ; 004eda6e
    MOVSD ES:EDI,ESI                    ; 004eda6f
    XOR EDI,EDI                         ; 004eda70
    MOV dword ptr [ESP + 0x27c],EDI     ; 004eda72
    MOV dword ptr [ESP + 0x278],EDI     ; 004eda79
    MOV EAX,[0x00622c18]                ; 004eda80 | g_CDemonSetPtr
        ;   Label: LAB_004eda80
    MOV EDX,dword ptr [ESP + 0x27c]     ; 004eda85
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004eda8c | g_CDemonSetInstance.actor_count
    JGE 0x004edb98                      ; 004eda92
        ;   XREF to: 004edb98 (CONDITIONAL_JUMP)  ; LAB_004edb98
    MOV ESI,dword ptr [ESP + 0x278]     ; 004eda98
    MOV ECX,dword ptr [0x01b68928]      ; 004eda9f | g_CDoorClassInfo.name_hash
    ADD EAX,ESI                         ; 004edaa5
    PUSH ECX                            ; 004edaa7
    MOV EDI,dword ptr [EAX + 0x14d168]  ; 004edaa8 | g_CDemonSetInstance.actors[0]
    PUSH EDI                            ; 004edaae
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004edaaf
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EDX,EAX                         ; 004edab4
    ADD ESP,0x8                         ; 004edab6
    TEST EAX,EAX                        ; 004edab9
    JNZ 0x004edadf                      ; 004edabb
        ;   XREF to: 004edadf (CONDITIONAL_JUMP)  ; LAB_004edadf
    MOV ECX,dword ptr [ESP + 0x27c]     ; 004edabd
        ;   Label: LAB_004edabd
    MOV EDX,dword ptr [ESP + 0x278]     ; 004edac4
    INC ECX                             ; 004edacb
    ADD EDX,0x4                         ; 004edacc
    MOV dword ptr [ESP + 0x27c],ECX     ; 004edacf
    MOV dword ptr [ESP + 0x278],EDX     ; 004edad6
    JMP 0x004eda80                      ; 004edadd
        ;   XREF to: 004eda80 (UNCONDITIONAL_JUMP)  ; LAB_004eda80
    FLD float ptr [EAX + 0x20]          ; 004edadf
        ;   Label: LAB_004edadf
    FLD float ptr [EAX + 0x24]          ; 004edae2
    FLD float ptr [EAX + 0x28]          ; 004edae5
    LEA EDI,[ESP + 0x208]               ; 004edae8
    LEA ESI,[ESP + 0x178]               ; 004edaef
    FXCH ST2                            ; 004edaf6
    FSUB float ptr [ESP + 0x1a8]        ; 004edaf8
    FXCH                                ; 004edaff
    FSUB float ptr [ESP + 0x1ac]        ; 004edb01
    FXCH ST2                            ; 004edb08
    FSUB float ptr [ESP + 0x1b0]        ; 004edb0a
    FXCH                                ; 004edb11
    FSTP float ptr [ESP + 0x178]        ; 004edb13
    FXCH                                ; 004edb1a
    FSTP float ptr [ESP + 0x17c]        ; 004edb1c
    FSTP float ptr [ESP + 0x180]        ; 004edb23
    MOVSD ES:EDI,ESI                    ; 004edb2a
    MOVSD ES:EDI,ESI                    ; 004edb2b
    MOVSD ES:EDI,ESI                    ; 004edb2c
    ADD EAX,0x20                        ; 004edb2d
    FLD float ptr [ESP + 0x20c]         ; 004edb30
    FABS                                ; 004edb37
    FCOMP double ptr [0x005e4eff]       ; 004edb39 | DAT_005e4eff
    FNSTSW AX                           ; 004edb3f
    SAHF                                ; 004edb41
    JA 0x004edabd                       ; 004edb42
        ;   XREF to: 004edabd (CONDITIONAL_JUMP)  ; LAB_004edabd
    FLD float ptr [ESP + 0x208]         ; 004edb48
    FMUL ST0                            ; 004edb4f
    FLD float ptr [ESP + 0x210]         ; 004edb51
    FMUL ST0                            ; 004edb58
    XOR EAX,EAX                         ; 004edb5a
    FADDP                               ; 004edb5c
    MOV dword ptr [ESP + 0x20c],EAX     ; 004edb5e
    FSQRT                               ; 004edb65
    FST float ptr [ESP + 0x274]         ; 004edb67
    FCOMP float ptr [ESP + 0x270]       ; 004edb6e
    FNSTSW AX                           ; 004edb75
    SAHF                                ; 004edb77
    JNC 0x004edabd                      ; 004edb78
        ;   XREF to: 004edabd (CONDITIONAL_JUMP)  ; LAB_004edabd
    MOV EAX,dword ptr [ESP + 0x274]     ; 004edb7e
    MOV dword ptr [ESP + 0x26c],EDX     ; 004edb85
    MOV dword ptr [ESP + 0x270],EAX     ; 004edb8c
    JMP 0x004edabd                      ; 004edb93
        ;   XREF to: 004edabd (UNCONDITIONAL_JUMP)  ; LAB_004edabd
    MOV EAX,dword ptr [ESP + 0x26c]     ; 004edb98
        ;   Label: LAB_004edb98
    TEST EAX,EAX                        ; 004edb9f
    JZ 0x004ed92b                       ; 004edba1
        ;   XREF to: 004ed92b (CONDITIONAL_JUMP)  ; LAB_004ed92b
    PUSH 0x3dcccccd                     ; 004edba7
    PUSH EAX                            ; 004edbac
    CALL core_door.cpp_CDoor_setSwingRange_FUN_00478820 ; 004edbad
        ;   XREF to: 00478820 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_setSwingRange_FUN_00478820(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 004edbb2
    JMP 0x004ed92b                      ; 004edbb5
        ;   XREF to: 004ed92b (UNCONDITIONAL_JUMP)  ; LAB_004ed92b
    MOV ESI,dword ptr [EBX + 0x2628]    ; 004edbba
        ;   Label: LAB_004edbba
    TEST ESI,ESI                        ; 004edbc0
    JZ 0x004ed92b                       ; 004edbc2
        ;   XREF to: 004ed92b (CONDITIONAL_JUMP)  ; LAB_004ed92b
    PUSH 0x0                            ; 004edbc8
    PUSH 0x1                            ; 004edbca
    MOV EAX,dword ptr [EBX + 0x154]     ; 004edbcc
    PUSH EBX                            ; 004edbd2
    CALL dword ptr [EAX + 0x128]        ; 004edbd3
    ADD ESP,0xc                         ; 004edbd9
    MOV EAX,[0x01d06ab4]                ; 004edbdc | DAT_01d06ab4
    PUSH 0x1                            ; 004edbe1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004edbe3
    PUSH ESI                            ; 004edbea
    ADD EAX,0x1fae8                     ; 004edbeb
    PUSH EAX                            ; 004edbf0
    CALL core_inv.cpp_FUN_004f7690      ; 004edbf1
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004edbf6
    JMP 0x004ed92b                      ; 004edbf9
        ;   XREF to: 004ed92b (UNCONDITIONAL_JUMP)  ; LAB_004ed92b
    JBE 0x004eda18                      ; 004edbfe
        ;   XREF to: 004eda18 (CONDITIONAL_JUMP)  ; LAB_004eda18
        ;   Label: LAB_004edbfe
    CMP EAX,0xc                         ; 004edc04
    JZ 0x004edbba                       ; 004edc07
        ;   XREF to: 004edbba (CONDITIONAL_JUMP)  ; LAB_004edbba
    PUSH ESI                            ; 004edc09
    PUSH EBX                            ; 004edc0a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 004edc0b
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004edc10
    JMP 0x004ed92b                      ; 004edc13
        ;   XREF to: 004ed92b (UNCONDITIONAL_JUMP)  ; LAB_004ed92b
    PUSH dword ptr [EBP + 0x18]         ; 004edc18
        ;   Label: LAB_004edc18
    FLD float ptr [EBX + 0x24a4]        ; 004edc1b
    PUSH EBX                            ; 004edc21
    FSTP float ptr [EBX + 0x2524]       ; 004edc22
    CALL core_charactr.cpp_FUN_00435320 ; 004edc28
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004edc2d
    PUSH 0xa                            ; 004edc30
    MOV ESI,dword ptr [ESP + 0x26c]     ; 004edc32
    XOR EDX,EDX                         ; 004edc39
    PUSH ESI                            ; 004edc3b
    MOV dword ptr [ESP + 0x264],EDX     ; 004edc3c
    MOV dword ptr [ESP + 0x268],EDX     ; 004edc43
    CALL core_motion.cpp_FUN_00524a40   ; 004edc4a
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x288],EAX     ; 004edc4f
    FLD float ptr [ESP + 0x288]         ; 004edc56
    FLDZ                                ; 004edc5d
    ADD ESP,0x8                         ; 004edc5f
    FCOMPP                              ; 004edc62
    FNSTSW AX                           ; 004edc64
    SAHF                                ; 004edc66
    JNC 0x004edc7c                      ; 004edc67
        ;   XREF to: 004edc7c (CONDITIONAL_JUMP)  ; LAB_004edc7c
    MOV EDI,0x1                         ; 004edc69
    MOV dword ptr [ESP + 0x25c],EDI     ; 004edc6e
    MOV dword ptr [ESP + 0x260],EDI     ; 004edc75
    FLD float ptr [EBX + 0x2538]        ; 004edc7c
        ;   Label: LAB_004edc7c
    FLDZ                                ; 004edc82
    FCOMPP                              ; 004edc84
    FNSTSW AX                           ; 004edc86
    SAHF                                ; 004edc88
    JC 0x004edfee                       ; 004edc89
        ;   XREF to: 004edfee (CONDITIONAL_JUMP)  ; LAB_004edfee
    PUSH 0x5                            ; 004edc8f
    LEA EAX,[EBX + 0x158]               ; 004edc91
    PUSH EAX                            ; 004edc97
    CALL core_motion.cpp_FUN_00524a40   ; 004edc98
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x288],EAX     ; 004edc9d
    FLD float ptr [ESP + 0x288]         ; 004edca4
    FLDZ                                ; 004edcab
    ADD ESP,0x8                         ; 004edcad
    FCOMPP                              ; 004edcb0
    FNSTSW AX                           ; 004edcb2
    SAHF                                ; 004edcb4
    JC 0x004edcf2                       ; 004edcb5
        ;   XREF to: 004edcf2 (CONDITIONAL_JUMP)  ; LAB_004edcf2
    PUSH 0x8                            ; 004edcb7
    LEA EAX,[EBX + 0x158]               ; 004edcb9
    PUSH EAX                            ; 004edcbf
    CALL core_motion.cpp_FUN_00524a40   ; 004edcc0
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x288],EAX     ; 004edcc5
    FLD float ptr [ESP + 0x288]         ; 004edccc
    FLDZ                                ; 004edcd3
    ADD ESP,0x8                         ; 004edcd5
    FCOMPP                              ; 004edcd8
    FNSTSW AX                           ; 004edcda
    SAHF                                ; 004edcdc
    JC 0x004edcf2                       ; 004edcdd
        ;   XREF to: 004edcf2 (CONDITIONAL_JUMP)  ; LAB_004edcf2
    PUSH 0x1                            ; 004edcdf
    PUSH 0x6                            ; 004edce1
    LEA EAX,[EBX + 0x158]               ; 004edce3
    PUSH EAX                            ; 004edce9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004edcea
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004edcef
    MOV dword ptr [ESP + 0x260],0x1     ; 004edcf2
        ;   Label: LAB_004edcf2
    FLD float ptr [EBX + 0x2538]        ; 004edcfd
        ;   Label: default
    FLDZ                                ; 004edd03
    FCOMPP                              ; 004edd05
    FNSTSW AX                           ; 004edd07
    SAHF                                ; 004edd09
    JNC 0x004ede08                      ; 004edd0a
        ;   XREF to: 004ede08 (CONDITIONAL_JUMP)  ; LAB_004ede08
    CMP dword ptr [EBX + 0x1fe68],0x1   ; 004edd10
    JNZ 0x004ede08                      ; 004edd17
        ;   XREF to: 004ede08 (CONDITIONAL_JUMP)  ; LAB_004ede08
    FLD float ptr [EBP + 0x18]          ; 004edd1d
    FMUL float ptr [0x005e4edb]         ; 004edd20 | DAT_005e4edb
    SUB ESP,0x4                         ; 004edd26
    FSTP float ptr [ESP]                ; 004edd29
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 004edd2c
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 004edd31
    TEST EAX,EAX                        ; 004edd34
    JZ 0x004ede08                       ; 004edd36
        ;   XREF to: 004ede08 (CONDITIONAL_JUMP)  ; LAB_004ede08
    PUSH 0x0                            ; 004edd3c
    PUSH 0x5e4e7c                       ; 004edd3e | = "Bip01 L Forearm"
    LEA ESI,[EBX + 0x158]               ; 004edd43
    PUSH ESI                            ; 004edd49
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 004edd4a
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004edd4f
    PUSH EAX                            ; 004edd52
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0 ; 004edd53
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_005634f0(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004edd58
    TEST EAX,EAX                        ; 004edd5b
    JL 0x004ede08                       ; 004edd5d
        ;   XREF to: 004ede08 (CONDITIONAL_JUMP)  ; LAB_004ede08
    PUSH EAX                            ; 004edd63
    PUSH ESI                            ; 004edd64
    LEA ESI,[ESP + 0x6c]                ; 004edd65
    LEA EDI,[ESP + 0xe4]                ; 004edd69
    CALL core_skeleton.cpp_FUN_00569040 ; 004edd70
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 004edd75
    LEA EAX,[ESP + 0xdc]                ; 004edd78
    LEA ESI,[ESP + 0x64]                ; 004edd7f
    PUSH EAX                            ; 004edd83
    MOVSD ES:EDI,ESI                    ; 004edd84
    MOVSD ES:EDI,ESI                    ; 004edd85
    MOVSD ES:EDI,ESI                    ; 004edd86
    PUSH EBX                            ; 004edd87
    LEA ESI,[ESP + 0x1f8]               ; 004edd88
    LEA EDI,[ESP + 0x18c]               ; 004edd8f
    CALL core_actor.cpp_FUN_00408b40    ; 004edd96
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1f8]               ; 004edd9b
    ADD ESP,0x8                         ; 004edda2
    LEA EAX,[ESP + 0x154]               ; 004edda5
    MOVSD ES:EDI,ESI                    ; 004eddac
    MOVSD ES:EDI,ESI                    ; 004eddad
    MOVSD ES:EDI,ESI                    ; 004eddae
    PUSH EAX                            ; 004eddaf
    MOV ESI,0x40400000                  ; 004eddb0
    PUSH EBX                            ; 004eddb5
    XOR EDI,EDI                         ; 004eddb6
    MOV dword ptr [ESP + 0x15c],ESI     ; 004eddb8
    MOV dword ptr [ESP + 0x160],EDI     ; 004eddbf
    LEA ESI,[ESP + 0x78]                ; 004eddc6
    MOV dword ptr [ESP + 0x164],EDI     ; 004eddca
    CALL core_actor.cpp_FUN_00408ac0    ; 004eddd1
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x8                         ; 004eddd6
    PUSH 0x0                            ; 004eddd9
    LEA EAX,[ESP + 0x1c4]               ; 004edddb
    PUSH EAX                            ; 004edde2
    LEA EAX,[ESP + 0x18c]               ; 004edde3
    LEA EDI,[ESP + 0x1c8]               ; 004eddea
    PUSH EAX                            ; 004eddf1
    MOV EDX,dword ptr [0x0061dca4]      ; 004eddf2 | g_CGorePtr
    LEA ESI,[ESP + 0x7c]                ; 004eddf8
    PUSH EDX                            ; 004eddfc
    MOVSD ES:EDI,ESI                    ; 004eddfd
    MOVSD ES:EDI,ESI                    ; 004eddfe
    MOVSD ES:EDI,ESI                    ; 004eddff
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004e5f40 ; 004ede00
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004e5f40(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 004ede05
    PUSH EBX                            ; 004ede08
        ;   Label: LAB_004ede08
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 004ede09
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004ede0e
    CMP dword ptr [ESP + 0x25c],0x0     ; 004ede11
    JZ 0x004eeaf8                       ; 004ede19
        ;   XREF to: 004eeaf8 (CONDITIONAL_JUMP)  ; LAB_004eeaf8
    LEA EAX,[EBX + 0x250c]              ; 004ede1f
    PUSH EAX                            ; 004ede25
    PUSH EBX                            ; 004ede26
    LEA ESI,[ESP + 0x168]               ; 004ede27
    LEA EDI,[ESP + 0x108]               ; 004ede2e
    CALL core_actor.cpp_FUN_00408ac0    ; 004ede35
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x168]               ; 004ede3a
    ADD ESP,0x8                         ; 004ede41
    LEA EAX,[EBX + 0x20]                ; 004ede44
    MOVSD ES:EDI,ESI                    ; 004ede47
    MOVSD ES:EDI,ESI                    ; 004ede48
    MOVSD ES:EDI,ESI                    ; 004ede49
    FLD float ptr [EAX]                 ; 004ede4a
    FLD float ptr [EAX + 0x4]           ; 004ede4c
    FLD float ptr [EAX + 0x8]           ; 004ede4f
    FXCH ST2                            ; 004ede52
    FADD float ptr [ESP + 0x100]        ; 004ede54
    FXCH                                ; 004ede5b
    FADD float ptr [ESP + 0x104]        ; 004ede5d
    FXCH ST2                            ; 004ede64
    FADD float ptr [ESP + 0x108]        ; 004ede66
    FXCH                                ; 004ede6d
    FSTP float ptr [EAX]                ; 004ede6f
    FXCH                                ; 004ede71
    FSTP float ptr [EAX + 0x4]          ; 004ede73
    FSTP float ptr [EAX + 0x8]          ; 004ede76
    MOV dword ptr [EBX + 0x2fe0],0x0    ; 004ede79
        ;   Label: LAB_004ede79
    LEA ESI,[EBX + 0x158]               ; 004ede83
        ;   Label: LAB_004ede83
    PUSH ESI                            ; 004ede89
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004ede8a
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    MOV EDI,dword ptr [EBX + 0x1fe68]   ; 004ede8f
    ADD ESP,0x4                         ; 004ede95
    CMP EDI,0x1                         ; 004ede98
    JNZ 0x004edf42                      ; 004ede9b
        ;   XREF to: 004edf42 (CONDITIONAL_JUMP)  ; LAB_004edf42
    MOV ECX,dword ptr [0x02c99770]      ; 004edea1 | g_CWeaponClassInfo.name_hash
    MOV EAX,0x3f000000                  ; 004edea7
    PUSH ECX                            ; 004edeac
    MOV EDI,dword ptr [EBX + 0x2628]    ; 004edead
    MOV EDX,0x3f400000                  ; 004edeb3
    PUSH EDI                            ; 004edeb8
    MOV dword ptr [ESP + 0x244],EAX     ; 004edeb9
    MOV dword ptr [ESP + 0x238],EDX     ; 004edec0
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004edec7
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004edecc
    XOR EDI,EDI                         ; 004edecf
    TEST EAX,EAX                        ; 004eded1
    JZ 0x004eed0a                       ; 004eded3
        ;   XREF to: 004eed0a (CONDITIONAL_JUMP)  ; LAB_004eed0a
    PUSH 0x10                           ; 004eded9
    PUSH ESI                            ; 004ededb
    CALL core_motion.cpp_FUN_00524a40   ; 004ededc
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x288],EAX     ; 004edee1
    FLD float ptr [ESP + 0x288]         ; 004edee8
    FLDZ                                ; 004edeef
    ADD ESP,0x8                         ; 004edef1
    FCOMPP                              ; 004edef4
    FNSTSW AX                           ; 004edef6
    SAHF                                ; 004edef8
    JC 0x004eed0a                       ; 004edef9
        ;   XREF to: 004eed0a (CONDITIONAL_JUMP)  ; LAB_004eed0a
    FLD float ptr [EBP + 0x18]          ; 004edeff
        ;   Label: LAB_004edeff
    FDIV float ptr [ESP + 0x23c]        ; 004edf02
    FADD float ptr [EBX + 0x1fe94]      ; 004edf09
    FSTP float ptr [EBX + 0x1fe94]      ; 004edf0f
        ;   Label: LAB_004edf0f
    FLDZ                                ; 004edf15
    FLD float ptr [EBX + 0x1fe94]       ; 004edf17
    FSTP double ptr [ESP + 0x8]         ; 004edf1d
    FCOMP double ptr [ESP + 0x8]        ; 004edf21
    FNSTSW AX                           ; 004edf25
    SAHF                                ; 004edf27
    JC 0x004eed27                       ; 004edf28
        ;   XREF to: 004eed27 (CONDITIONAL_JUMP)  ; LAB_004eed27
    MOV dword ptr [EBX + 0x1fe90],0x0   ; 004edf2e
    MOV dword ptr [EBX + 0x1fe94],0x0   ; 004edf38
    MOV EDX,dword ptr [ESP + 0x260]     ; 004edf42
        ;   Label: LAB_004edf42
    PUSH EDX                            ; 004edf49
    PUSH dword ptr [EBP + 0x18]         ; 004edf4a
    PUSH EBX                            ; 004edf4d
    CALL core_charactr.cpp_FUN_00432f10 ; 004edf4e
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432f10()
    ADD ESP,0xc                         ; 004edf53
    PUSH dword ptr [EBP + 0x18]         ; 004edf56
    PUSH EBX                            ; 004edf59
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 004edf5a
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    FLD float ptr [EBX + 0x1fe90]       ; 004edf5f
    FLD1                                ; 004edf65
    ADD ESP,0x8                         ; 004edf67
    FCOMPP                              ; 004edf6a
    FNSTSW AX                           ; 004edf6c
    SAHF                                ; 004edf6e
    JA 0x004edfda                       ; 004edf6f
        ;   XREF to: 004edfda (CONDITIONAL_JUMP)  ; LAB_004edfda
    MOV ECX,dword ptr [0x02c99770]      ; 004edf71 | g_CWeaponClassInfo.name_hash
    PUSH ECX                            ; 004edf77
    MOV ESI,dword ptr [EBX + 0x2628]    ; 004edf78
    PUSH ESI                            ; 004edf7e
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004edf7f
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV ESI,EAX                         ; 004edf84
    ADD ESP,0x8                         ; 004edf86
    TEST EAX,EAX                        ; 004edf89
    JZ 0x004edfda                       ; 004edf8b
        ;   XREF to: 004edfda (CONDITIONAL_JUMP)  ; LAB_004edfda
    MOV EDI,dword ptr [EAX + 0x56c]     ; 004edf8d
    MOV dword ptr [EAX + 0x56c],0x6     ; 004edf93
    PUSH ESI                            ; 004edf9d
    MOV EAX,dword ptr [EAX + 0x154]     ; 004edf9e
    CALL dword ptr [EAX + 0xe4]         ; 004edfa4
    ADD ESP,0x4                         ; 004edfaa
    PUSH 0x1                            ; 004edfad
    PUSH 0xc                            ; 004edfaf
    LEA EAX,[EBX + 0x158]               ; 004edfb1
    PUSH EAX                            ; 004edfb7
    MOV dword ptr [ESI + 0x56c],EDI     ; 004edfb8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004edfbe
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV dword ptr [EBX + 0x1fe94],0x0   ; 004edfc3
    ADD ESP,0xc                         ; 004edfcd
    MOV dword ptr [EBX + 0x1fe90],0x0   ; 004edfd0
    CMP dword ptr [EBX + 0x1fe68],0x1   ; 004edfda
        ;   Label: LAB_004edfda
    JZ 0x004eee27                       ; 004edfe1
        ;   XREF to: 004eee27 (CONDITIONAL_JUMP)  ; LAB_004eee27
    MOV ESP,EBP                         ; 004edfe7
        ;   Label: LAB_004edfe7
    POP EBP                             ; 004edfe9
    POP EDI                             ; 004edfea
    POP ESI                             ; 004edfeb
    POP EBX                             ; 004edfec
    RET                                 ; 004edfed
    MOV EDX,dword ptr [EBX + 0x26fc]    ; 004edfee
        ;   Label: LAB_004edfee
    TEST EDX,EDX                        ; 004edff4
    JZ 0x004ee1e1                       ; 004edff6
        ;   XREF to: 004ee1e1 (CONDITIONAL_JUMP)  ; LAB_004ee1e1
    LEA EAX,[EDX + 0x20]                ; 004edffc
    PUSH EAX                            ; 004edfff
    PUSH EBX                            ; 004ee000
    LEA ESI,[ESP + 0xb4]                ; 004ee001
    LEA EDI,[ESP + 0x1e0]               ; 004ee008
    CALL core_actor.cpp_FUN_00408bb0    ; 004ee00f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0xb4]                ; 004ee014
    ADD ESP,0x8                         ; 004ee01b
    LEA EAX,[ESP + 0x1d8]               ; 004ee01e
    MOVSD ES:EDI,ESI                    ; 004ee025
    MOVSD ES:EDI,ESI                    ; 004ee026
    MOVSD ES:EDI,ESI                    ; 004ee027
    PUSH EAX                            ; 004ee028
    LEA ESI,[ESP + 0xbc]                ; 004ee029
    LEA EDI,[ESP + 0x200]               ; 004ee030
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004ee037
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xbc]                ; 004ee03c
    ADD ESP,0x4                         ; 004ee043
    MOVSD ES:EDI,ESI                    ; 004ee046
    MOVSD ES:EDI,ESI                    ; 004ee047
    MOVSD ES:EDI,ESI                    ; 004ee048
    PUSH dword ptr [ESP + 0x200]        ; 004ee049
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004ee050
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x284],EAX     ; 004ee055
    FLD float ptr [ESP + 0x284]         ; 004ee05c
    ADD ESP,0x4                         ; 004ee063
    FST float ptr [ESP + 0x264]         ; 004ee066
    FCOMP float ptr [0x005e4ecf]        ; 004ee06d | DAT_005e4ecf
    FNSTSW AX                           ; 004ee073
    SAHF                                ; 004ee075
    JNC 0x004ee08c                      ; 004ee076
        ;   XREF to: 004ee08c (CONDITIONAL_JUMP)  ; LAB_004ee08c
    FLD float ptr [ESP + 0x264]         ; 004ee078
    FADD float ptr [0x005e4ebf]         ; 004ee07f | DAT_005e4ebf
    FSTP float ptr [ESP + 0x264]        ; 004ee085
    FLD float ptr [ESP + 0x264]         ; 004ee08c
        ;   Label: LAB_004ee08c
    FCOMP float ptr [0x005e4ed3]        ; 004ee093 | DAT_005e4ed3
    FNSTSW AX                           ; 004ee099
    SAHF                                ; 004ee09b
    JBE 0x004ee0b2                      ; 004ee09c
        ;   XREF to: 004ee0b2 (CONDITIONAL_JUMP)  ; LAB_004ee0b2
    FLD float ptr [ESP + 0x264]         ; 004ee09e
    FADD float ptr [0x005e4ed7]         ; 004ee0a5 | DAT_005e4ed7
    FSTP float ptr [ESP + 0x264]        ; 004ee0ab
    FLD float ptr [EBP + 0x18]          ; 004ee0b2
        ;   Label: LAB_004ee0b2
    FMUL float ptr [0x005e4ebf]         ; 004ee0b5 | DAT_005e4ebf
    FLD float ptr [ESP + 0x264]         ; 004ee0bb
    FXCH                                ; 004ee0c2
    FST float ptr [ESP + 0x248]         ; 004ee0c4
    FCHS                                ; 004ee0cb
    FSTP float ptr [ESP + 0x240]        ; 004ee0cd
    FCOMP float ptr [ESP + 0x240]       ; 004ee0d4
    FNSTSW AX                           ; 004ee0db
    SAHF                                ; 004ee0dd
    JNC 0x004ee0ee                      ; 004ee0de
        ;   XREF to: 004ee0ee (CONDITIONAL_JUMP)  ; LAB_004ee0ee
    MOV EAX,dword ptr [ESP + 0x240]     ; 004ee0e0
    MOV dword ptr [ESP + 0x264],EAX     ; 004ee0e7
    FLD float ptr [ESP + 0x264]         ; 004ee0ee
        ;   Label: LAB_004ee0ee
    FCOMP float ptr [ESP + 0x248]       ; 004ee0f5
    FNSTSW AX                           ; 004ee0fc
    SAHF                                ; 004ee0fe
    JBE 0x004ee10f                      ; 004ee0ff
        ;   XREF to: 004ee10f (CONDITIONAL_JUMP)  ; LAB_004ee10f
    MOV EAX,dword ptr [ESP + 0x248]     ; 004ee101
    MOV dword ptr [ESP + 0x264],EAX     ; 004ee108
    FLD float ptr [EBX + 0x34]          ; 004ee10f
        ;   Label: LAB_004ee10f
    FADD float ptr [ESP + 0x264]        ; 004ee112
    PUSH EBX                            ; 004ee119
    FSTP float ptr [EBX + 0x34]         ; 004ee11a
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 004ee11d
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ee122
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 004ee125
    MOV dword ptr [ESP + 0x21c],EAX     ; 004ee12b
    MOV EAX,dword ptr [EAX + 0x154]     ; 004ee132
    PUSH 0x0                            ; 004ee138
    MOV dword ptr [ESP + 0x284],EAX     ; 004ee13a
    LEA EAX,[EBX + 0x158]               ; 004ee141
    PUSH EAX                            ; 004ee147
    LEA ESI,[ESP + 0x1ec]               ; 004ee148
    CALL core_skeleton.cpp_FUN_00569130 ; 004ee14f
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 004ee154
    LEA EAX,[ESP + 0x88]                ; 004ee157
    PUSH EAX                            ; 004ee15e
    LEA EDI,[ESP + 0x8c]                ; 004ee15f
    LEA ESI,[ESP + 0x1e8]               ; 004ee166
    PUSH EBX                            ; 004ee16d
    MOV ECX,dword ptr [ESP + 0x224]     ; 004ee16e
    MOV EAX,dword ptr [ESP + 0x288]     ; 004ee175
    PUSH ECX                            ; 004ee17c
    MOVSD ES:EDI,ESI                    ; 004ee17d
    MOVSD ES:EDI,ESI                    ; 004ee17e
    MOVSD ES:EDI,ESI                    ; 004ee17f
    CALL dword ptr [EAX + 0x110]        ; 004ee180
    ADD ESP,0xc                         ; 004ee186
    TEST EAX,EAX                        ; 004ee189
    JZ 0x004ee1d9                       ; 004ee18b
        ;   XREF to: 004ee1d9 (CONDITIONAL_JUMP)  ; LAB_004ee1d9
    CMP dword ptr [EBX + 0x26fc],0x0    ; 004ee18d
    JNZ 0x004ee1a9                      ; 004ee194
        ;   XREF to: 004ee1a9 (CONDITIONAL_JUMP)  ; LAB_004ee1a9
    PUSH 0x1                            ; 004ee196
        ;   Label: LAB_004ee196
    PUSH 0x0                            ; 004ee198
    LEA EAX,[EBX + 0x158]               ; 004ee19a
    PUSH EAX                            ; 004ee1a0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee1a1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee1a6
    MOV EDI,0x1                         ; 004ee1a9
        ;   Label: LAB_004ee1a9
    LEA EAX,[EBX + 0x249c]              ; 004ee1ae
    MOV dword ptr [ESP + 0x25c],EDI     ; 004ee1b4
    MOV dword ptr [EAX + 0x8],0x0       ; 004ee1bb
    MOV dword ptr [ESP + 0x260],EDI     ; 004ee1c2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ee1c9
    MOV dword ptr [EAX + 0x4],EDX       ; 004ee1cc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ee1cf
    MOV dword ptr [EAX],EDX             ; 004ee1d2
    JMP 0x004edcfd                      ; 004ee1d4
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV dword ptr [EBX + 0x26fc],EAX    ; 004ee1d9
        ;   Label: LAB_004ee1d9
    JMP 0x004ee196                      ; 004ee1df
        ;   XREF to: 004ee196 (UNCONDITIONAL_JUMP)  ; LAB_004ee196
    PUSH 0x3                            ; 004ee1e1
        ;   Label: LAB_004ee1e1
    LEA ESI,[EBX + 0x158]               ; 004ee1e3
    PUSH ESI                            ; 004ee1e9
    CALL core_motion.cpp_FUN_00524a40   ; 004ee1ea
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x288],EAX     ; 004ee1ef
    FLD float ptr [ESP + 0x288]         ; 004ee1f6
    FLDZ                                ; 004ee1fd
    ADD ESP,0x8                         ; 004ee1ff
    FCOMPP                              ; 004ee202
    FNSTSW AX                           ; 004ee204
    SAHF                                ; 004ee206
    JC 0x004edcf2                       ; 004ee207
        ;   XREF to: 004edcf2 (CONDITIONAL_JUMP)  ; LAB_004edcf2
    PUSH 0x5                            ; 004ee20d
    PUSH ESI                            ; 004ee20f
    CALL core_motion.cpp_FUN_00524a40   ; 004ee210
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x288],EAX     ; 004ee215
    FLD float ptr [ESP + 0x288]         ; 004ee21c
    FLDZ                                ; 004ee223
    ADD ESP,0x8                         ; 004ee225
    FCOMPP                              ; 004ee228
    FNSTSW AX                           ; 004ee22a
    SAHF                                ; 004ee22c
    JC 0x004edcf2                       ; 004ee22d
        ;   XREF to: 004edcf2 (CONDITIONAL_JUMP)  ; LAB_004edcf2
    PUSH 0x8                            ; 004ee233
    PUSH ESI                            ; 004ee235
    CALL core_motion.cpp_FUN_00524a40   ; 004ee236
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x288],EAX     ; 004ee23b
    FLD float ptr [ESP + 0x288]         ; 004ee242
    FLDZ                                ; 004ee249
    ADD ESP,0x8                         ; 004ee24b
    FCOMPP                              ; 004ee24e
    FNSTSW AX                           ; 004ee250
    SAHF                                ; 004ee252
    JC 0x004edcf2                       ; 004ee253
        ;   XREF to: 004edcf2 (CONDITIONAL_JUMP)  ; LAB_004edcf2
    PUSH dword ptr [EBP + 0x18]         ; 004ee259
    PUSH EBX                            ; 004ee25c
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 004ee25d
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ee262
    TEST EAX,EAX                        ; 004ee265
    JZ 0x004eeae2                       ; 004ee267
        ;   XREF to: 004eeae2 (CONDITIONAL_JUMP)  ; LAB_004eeae2
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004ee26d
    CMP EAX,0x2                         ; 004ee273
    JNC 0x004ee2f0                      ; 004ee276
        ;   XREF to: 004ee2f0 (CONDITIONAL_JUMP)  ; LAB_004ee2f0
    CMP EAX,0x1                         ; 004ee278
    JNZ 0x004ee2d8                      ; 004ee27b
        ;   XREF to: 004ee2d8 (CONDITIONAL_JUMP)  ; LAB_004ee2d8
    PUSH EAX                            ; 004ee27d
    PUSH EAX                            ; 004ee27e
    LEA EAX,[EBX + 0x158]               ; 004ee27f
    PUSH EAX                            ; 004ee285
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee286
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee28b
    JMP 0x004edcfd                      ; 004ee28e
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004ee293
        ;   Label: LAB_004ee293
    PUSH 0x0                            ; 004ee295
    LEA EAX,[EBX + 0x158]               ; 004ee297
    PUSH EAX                            ; 004ee29d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee29e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee2a3
    PUSH EBX                            ; 004ee2a6
    MOV EAX,0x5e4d39                    ; 004ee2a7 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004ee2ac | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x00611100]                ; 004ee2ad | g_CConsolePtr
    PUSH EAX                            ; 004ee2b2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004ee2b3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004ee2b8
    JMP 0x004edcfd                      ; 004ee2bb
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004ee2c0
        ;   Label: LAB_004ee2c0
    PUSH 0x2                            ; 004ee2c2
    LEA EAX,[EBX + 0x158]               ; 004ee2c4
    PUSH EAX                            ; 004ee2ca
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee2cb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee2d0
    JMP 0x004edcfd                      ; 004ee2d3
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004ee2d8
        ;   Label: LAB_004ee2d8
    PUSH 0x0                            ; 004ee2da
    LEA EAX,[EBX + 0x158]               ; 004ee2dc
    PUSH EAX                            ; 004ee2e2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee2e3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee2e8
    JMP 0x004edcfd                      ; 004ee2eb
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    JBE 0x004ee2c0                      ; 004ee2f0
        ;   XREF to: 004ee2c0 (CONDITIONAL_JUMP)  ; LAB_004ee2c0
        ;   Label: LAB_004ee2f0
    CMP EAX,0x3                         ; 004ee2f2
    JZ 0x004ee293                       ; 004ee2f5
        ;   XREF to: 004ee293 (CONDITIONAL_JUMP)  ; LAB_004ee293
    JMP 0x004ee2d8                      ; 004ee2f7
        ;   XREF to: 004ee2d8 (UNCONDITIONAL_JUMP)  ; LAB_004ee2d8
    PUSH dword ptr [EBP + 0x18]         ; 004ee2f9
        ;   Label: caseD_0
    PUSH EBX                            ; 004ee2fc
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004eee80 ; 004ee2fd
        ;   XREF to: 004eee80 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004eee80(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ee302
    TEST EAX,EAX                        ; 004ee305
    JNZ 0x004edcfd                      ; 004ee307
        ;   XREF to: 004edcfd (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,[0x01d06ab4]                ; 004ee30d | DAT_01d06ab4
    LEA EDI,[ESP + 0x148]               ; 004ee312
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ee319
    LEA ESI,[ESP + 0x190]               ; 004ee320
    LEA EDX,[EBX + 0x20]                ; 004ee327
    FLD float ptr [EAX + 0x20]          ; 004ee32a
    FLD float ptr [EAX + 0x24]          ; 004ee32d
    FLD float ptr [EAX + 0x28]          ; 004ee330
    FXCH ST2                            ; 004ee333
    FSUB float ptr [EDX]                ; 004ee335
    FXCH                                ; 004ee337
    FSUB float ptr [EDX + 0x4]          ; 004ee339
    FXCH ST2                            ; 004ee33c
    FSUB float ptr [EDX + 0x8]          ; 004ee33e
    FXCH                                ; 004ee341
    FSTP float ptr [ESP + 0x190]        ; 004ee343
    FXCH                                ; 004ee34a
    FSTP float ptr [ESP + 0x194]        ; 004ee34c
    FSTP float ptr [ESP + 0x198]        ; 004ee353
    MOVSD ES:EDI,ESI                    ; 004ee35a
    MOVSD ES:EDI,ESI                    ; 004ee35b
    MOVSD ES:EDI,ESI                    ; 004ee35c
    LEA EDI,[ESP + 0xf4]                ; 004ee35d
    LEA ESI,[ESP + 0x148]               ; 004ee364
    MOVSD ES:EDI,ESI                    ; 004ee36b
    MOVSD ES:EDI,ESI                    ; 004ee36c
    MOVSD ES:EDI,ESI                    ; 004ee36d
    LEA EDI,[ESP + 0xd0]                ; 004ee36e
    LEA ESI,[ESP + 0xf4]                ; 004ee375
    MOVSD ES:EDI,ESI                    ; 004ee37c
    MOVSD ES:EDI,ESI                    ; 004ee37d
    MOVSD ES:EDI,ESI                    ; 004ee37e
    FLD float ptr [EBX + 0x1fab8]       ; 004ee37f
    FLDZ                                ; 004ee385
    FCOMPP                              ; 004ee387
    FNSTSW AX                           ; 004ee389
    SAHF                                ; 004ee38b
    JNC 0x004ee3ce                      ; 004ee38c
        ;   XREF to: 004ee3ce (CONDITIONAL_JUMP)  ; LAB_004ee3ce
    FLD float ptr [ESP + 0xd4]          ; 004ee38e
    FMUL ST0                            ; 004ee395
    FLD float ptr [ESP + 0xd0]          ; 004ee397
    FMUL ST0                            ; 004ee39e
    FADDP                               ; 004ee3a0
    FLD float ptr [ESP + 0xd8]          ; 004ee3a2
    FMUL ST0                            ; 004ee3a9
    FADDP                               ; 004ee3ab
    LEA EAX,[ESP + 0x258]               ; 004ee3ad
    FSTP float ptr [ESP + 0x258]        ; 004ee3b4
    FLD float ptr [EAX]                 ; 004ee3bb
    FSQRT                               ; 004ee3bd
    FCOMP float ptr [EBX + 0x1fab8]     ; 004ee3bf
    FNSTSW AX                           ; 004ee3c5
    SAHF                                ; 004ee3c7
    JNC 0x004ee2d8                      ; 004ee3c8
        ;   XREF to: 004ee2d8 (CONDITIONAL_JUMP)  ; LAB_004ee2d8
    LEA EAX,[EBX + 0x1fabc]             ; 004ee3ce
        ;   Label: LAB_004ee3ce
    PUSH EAX                            ; 004ee3d4
    MOV ECX,dword ptr [0x0061b4d0]      ; 004ee3d5 | DAT_0061b4d0
    PUSH ECX                            ; 004ee3db
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004ee3dc
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004ee3e1
    TEST EAX,EAX                        ; 004ee3e4
    JZ 0x004ee2d8                       ; 004ee3e6
        ;   XREF to: 004ee2d8 (CONDITIONAL_JUMP)  ; LAB_004ee2d8
    PUSH EBX                            ; 004ee3ec
    PUSH 0x5e4d63                       ; 004ee3ed | = "%s rescued, entering follow mode\n"
    MOV ESI,dword ptr [0x00611100]      ; 004ee3f2 | g_CConsolePtr
    PUSH ESI                            ; 004ee3f8 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fe6c],0x1   ; 004ee3f9
    CALL engine_console.cpp_FUN_00445430 ; 004ee403
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004ee408
    LEA EAX,[EBX + 0x1fb40]             ; 004ee40b
    PUSH EAX                            ; 004ee411
    MOV EDI,dword ptr [0x0061b4d0]      ; 004ee412 | DAT_0061b4d0
    PUSH EDI                            ; 004ee418
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ee419
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ee41e
    JMP 0x004edcfd                      ; 004ee421
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0x1fe70]   ; 004ee426
        ;   Label: caseD_1
    TEST EDI,EDI                        ; 004ee42c
    JNZ 0x004ee480                      ; 004ee42e
        ;   XREF to: 004ee480 (CONDITIONAL_JUMP)  ; LAB_004ee480
    CMP dword ptr [EBX + 0x1fe78],0x0   ; 004ee430
        ;   Label: LAB_004ee430
    JZ 0x004ee4bb                       ; 004ee437
        ;   XREF to: 004ee4bb (CONDITIONAL_JUMP)  ; LAB_004ee4bb
    PUSH EBX                            ; 004ee43d
    PUSH 0x5e4d85                       ; 004ee43e | = "%s was led close enough, going home!\n"
    MOV EAX,[0x00611100]                ; 004ee443 | g_CConsolePtr
    PUSH EAX                            ; 004ee448 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fe6c],0x3   ; 004ee449
    CALL engine_console.cpp_FUN_00445430 ; 004ee453
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004ee458
    LEA EAX,[EBX + 0x1fcd0]             ; 004ee45b
    PUSH EAX                            ; 004ee461
    MOV EDX,dword ptr [0x0061b4d0]      ; 004ee462 | DAT_0061b4d0
    PUSH EDX                            ; 004ee468
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ee469
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ee46e
    MOV dword ptr [EBX + 0x2fd0],0x0    ; 004ee471
    JMP 0x004edcfd                      ; 004ee47b
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EDX,[EBX + 0x20]                ; 004ee480
        ;   Label: LAB_004ee480
    FLD float ptr [EDX]                 ; 004ee483
    FSUB float ptr [EDI + 0x20]         ; 004ee485
    FMUL ST0                            ; 004ee488
    FLD float ptr [EDX + 0x8]           ; 004ee48a
    FSUB float ptr [EDI + 0x28]         ; 004ee48d
    FMUL ST0                            ; 004ee490
    FADDP                               ; 004ee492
    FSQRT                               ; 004ee494
    FCOMP double ptr [0x005e4ec7]       ; 004ee496 | DAT_005e4ec7
    FNSTSW AX                           ; 004ee49c
    SAHF                                ; 004ee49e
    JNC 0x004ee430                      ; 004ee49f
        ;   XREF to: 004ee430 (CONDITIONAL_JUMP)  ; LAB_004ee430
    PUSH 0x0                            ; 004ee4a1
    PUSH EDI                            ; 004ee4a3
    LEA EAX,[EBX + 0x20]                ; 004ee4a4
    PUSH EAX                            ; 004ee4a7
    CALL core_waypoint.cpp_FUN_005abb80 ; 004ee4a8
        ;   XREF to: 005abb80 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_005abb80()
    ADD ESP,0xc                         ; 004ee4ad
    MOV dword ptr [EBX + 0x1fe78],EAX   ; 004ee4b0
    JMP 0x004ee430                      ; 004ee4b6
        ;   XREF to: 004ee430 (UNCONDITIONAL_JUMP)  ; LAB_004ee430
    PUSH dword ptr [EBP + 0x18]         ; 004ee4bb
        ;   Label: LAB_004ee4bb
    PUSH EBX                            ; 004ee4be
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004eee80 ; 004ee4bf
        ;   XREF to: 004eee80 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004eee80(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ee4c4
    TEST EAX,EAX                        ; 004ee4c7
    JNZ 0x004edcfd                      ; 004ee4c9
        ;   XREF to: 004edcfd (CONDITIONAL_JUMP)  ; caseD_5
    PUSH dword ptr [EBP + 0x18]         ; 004ee4cf
    PUSH EBX                            ; 004ee4d2
    CALL core_charactr.cpp_FUN_00434c60 ; 004ee4d3
        ;   XREF to: 00434c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434c60()
    ADD ESP,0x8                         ; 004ee4d8
    TEST EAX,EAX                        ; 004ee4db
    JNZ 0x004ee534                      ; 004ee4dd
        ;   XREF to: 004ee534 (CONDITIONAL_JUMP)  ; LAB_004ee534
    LEA EAX,[EBX + 0x1fe64]             ; 004ee4df
    PUSH EAX                            ; 004ee4e5
    MOV EAX,[0x01d06ab4]                ; 004ee4e6 | DAT_01d06ab4
    PUSH 0x41200000                     ; 004ee4eb
    MOV ECX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ee4f0
    PUSH 0x40a00000                     ; 004ee4f7
    PUSH ECX                            ; 004ee4fc
    PUSH EBX                            ; 004ee4fd
    CALL core_charactr.cpp_FUN_00431cc0 ; 004ee4fe
        ;   XREF to: 00431cc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431cc0()
    ADD ESP,0x14                        ; 004ee503
    MOV EAX,dword ptr [EBX + 0x1fe64]   ; 004ee506
        ;   Label: LAB_004ee506
    LEA EDX,[EBX + 0x158]               ; 004ee50c
    CMP EAX,0x2                         ; 004ee512
    JNC 0x004ee59f                      ; 004ee515
        ;   XREF to: 004ee59f (CONDITIONAL_JUMP)  ; LAB_004ee59f
    CMP EAX,0x1                         ; 004ee51b
    JNZ 0x004ee2d8                      ; 004ee51e
        ;   XREF to: 004ee2d8 (CONDITIONAL_JUMP)  ; LAB_004ee2d8
    PUSH EAX                            ; 004ee524
    PUSH EAX                            ; 004ee525
    PUSH EDX                            ; 004ee526
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee527
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee52c
    JMP 0x004edcfd                      ; 004ee52f
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV dword ptr [EBX + 0x1fe64],EAX   ; 004ee534
        ;   Label: LAB_004ee534
    JMP 0x004ee506                      ; 004ee53a
        ;   XREF to: 004ee506 (UNCONDITIONAL_JUMP)  ; LAB_004ee506
    PUSH 0x1                            ; 004ee53c
        ;   Label: LAB_004ee53c
    PUSH 0x0                            ; 004ee53e
    PUSH EDX                            ; 004ee540
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee541
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee546
    PUSH EBX                            ; 004ee549
    PUSH 0x5e4dab                       ; 004ee54a | = "%s left behind!\n"
    MOV ESI,dword ptr [0x00611100]      ; 004ee54f | g_CConsolePtr
    PUSH ESI                            ; 004ee555 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fe6c],0x2   ; 004ee556
    CALL engine_console.cpp_FUN_00445430 ; 004ee560
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004ee565
    LEA EAX,[EBX + 0x1fba4]             ; 004ee568
    PUSH EAX                            ; 004ee56e
    MOV EDI,dword ptr [0x0061b4d0]      ; 004ee56f | DAT_0061b4d0
    PUSH EDI                            ; 004ee575
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ee576
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ee57b
    MOV dword ptr [EBX + 0x2fd0],0x0    ; 004ee57e
    JMP 0x004edcfd                      ; 004ee588
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004ee58d
        ;   Label: LAB_004ee58d
    PUSH 0x2                            ; 004ee58f
    PUSH EDX                            ; 004ee591
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee592
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee597
    JMP 0x004edcfd                      ; 004ee59a
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    JBE 0x004ee58d                      ; 004ee59f
        ;   XREF to: 004ee58d (CONDITIONAL_JUMP)  ; LAB_004ee58d
        ;   Label: LAB_004ee59f
    CMP EAX,0x3                         ; 004ee5a1
    JZ 0x004ee53c                       ; 004ee5a4
        ;   XREF to: 004ee53c (CONDITIONAL_JUMP)  ; LAB_004ee53c
    JMP 0x004ee2d8                      ; 004ee5a6
        ;   XREF to: 004ee2d8 (UNCONDITIONAL_JUMP)  ; LAB_004ee2d8
    PUSH dword ptr [EBP + 0x18]         ; 004ee5ab
        ;   Label: caseD_2
    PUSH EBX                            ; 004ee5ae
    CALL core_hostage.cpp_CHostage_processGrabberFlee_FUN_004eee80 ; 004ee5af
        ;   XREF to: 004eee80 (UNCONDITIONAL_CALL)  ; int core_hostage.cpp_CHostage_processGrabberFlee_FUN_004eee80(CHostage * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004ee5b4
    TEST EAX,EAX                        ; 004ee5b7
    JNZ 0x004edcfd                      ; 004ee5b9
        ;   XREF to: 004edcfd (CONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBX + 0x1fe64]             ; 004ee5bf
    PUSH EAX                            ; 004ee5c5
    MOV EAX,[0x01d06ab4]                ; 004ee5c6 | DAT_01d06ab4
    PUSH 0x41200000                     ; 004ee5cb
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004ee5d0
    PUSH 0x40800000                     ; 004ee5d7
    PUSH EDX                            ; 004ee5dc
    PUSH EBX                            ; 004ee5dd
    XOR EDI,EDI                         ; 004ee5de
    CALL core_charactr.cpp_FUN_00431cc0 ; 004ee5e0
        ;   XREF to: 00431cc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431cc0()
    MOV EAX,dword ptr [EBX + 0x1fe64]   ; 004ee5e5
    ADD ESP,0x14                        ; 004ee5eb
    CMP EAX,0x1                         ; 004ee5ee
    JNC 0x004ee648                      ; 004ee5f1
        ;   XREF to: 004ee648 (CONDITIONAL_JUMP)  ; LAB_004ee648
    TEST EAX,EAX                        ; 004ee5f3
    JNZ 0x004ee64f                      ; 004ee5f5
        ;   XREF to: 004ee64f (CONDITIONAL_JUMP)  ; LAB_004ee64f
    PUSH 0x1                            ; 004ee5f7
    PUSH EDI                            ; 004ee5f9
    PUSH ESI                            ; 004ee5fa
        ;   Label: LAB_004ee5fa
    MOV dword ptr [EBX + 0x1fe6c],0x1   ; 004ee5fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee605
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee60a
    PUSH EBX                            ; 004ee60d
        ;   Label: LAB_004ee60d
    PUSH 0x5e4dbc                       ; 004ee60e | = "%s was left behind, but now can follo..."
    MOV ECX,dword ptr [0x00611100]      ; 004ee613 | g_CConsolePtr
    PUSH ECX                            ; 004ee619 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004ee61a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004ee61f
    LEA EAX,[EBX + 0x1fc08]             ; 004ee622
    PUSH EAX                            ; 004ee628
    MOV ESI,dword ptr [0x0061b4d0]      ; 004ee629 | DAT_0061b4d0
    PUSH ESI                            ; 004ee62f
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ee630
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ee635
    JMP 0x004edcfd                      ; 004ee638
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004ee63d
        ;   Label: LAB_004ee63d
    PUSH 0x1                            ; 004ee63f
    JMP 0x004ee5fa                      ; 004ee641
        ;   XREF to: 004ee5fa (UNCONDITIONAL_JUMP)  ; LAB_004ee5fa
    PUSH 0x1                            ; 004ee643
        ;   Label: LAB_004ee643
    PUSH EAX                            ; 004ee645
    JMP 0x004ee5fa                      ; 004ee646
        ;   XREF to: 004ee5fa (UNCONDITIONAL_JUMP)  ; LAB_004ee5fa
    JBE 0x004ee63d                      ; 004ee648
        ;   XREF to: 004ee63d (CONDITIONAL_JUMP)  ; LAB_004ee63d
        ;   Label: LAB_004ee648
    CMP EAX,0x2                         ; 004ee64a
    JZ 0x004ee643                       ; 004ee64d
        ;   XREF to: 004ee643 (CONDITIONAL_JUMP)  ; LAB_004ee643
    PUSH 0x1                            ; 004ee64f
        ;   Label: LAB_004ee64f
    PUSH 0x0                            ; 004ee651
    LEA EAX,[EBX + 0x158]               ; 004ee653
    PUSH EAX                            ; 004ee659
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee65a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee65f
    TEST EDI,EDI                        ; 004ee662
    JNZ 0x004ee60d                      ; 004ee664
        ;   XREF to: 004ee60d (CONDITIONAL_JUMP)  ; LAB_004ee60d
    JMP 0x004edcfd                      ; 004ee666
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0x1fe78]   ; 004ee66b
        ;   Label: caseD_3
    TEST EDI,EDI                        ; 004ee671
    JNZ 0x004ee7b4                      ; 004ee673
        ;   XREF to: 004ee7b4 (CONDITIONAL_JUMP)  ; LAB_004ee7b4
    PUSH EBX                            ; 004ee679
    PUSH 0x5e4deb                       ; 004ee67a | = "%s doesn't know next waypoint going h..."
    MOV EDI,dword ptr [0x00611100]      ; 004ee67f | g_CConsolePtr
    PUSH EDI                            ; 004ee685 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fe6c],0x2   ; 004ee686
    CALL engine_console.cpp_FUN_00445430 ; 004ee690
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004ee695
    JMP 0x004edcfd                      ; 004ee698
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0x1fe78]   ; 004ee69d
        ;   Label: caseD_0
    PUSH EDI                            ; 004ee6a3
    PUSH EBX                            ; 004ee6a4
    PUSH 0x5e4e20                       ; 004ee6a5 | = "%s reached waypoint %s!\n"
    MOV EAX,[0x00611100]                ; 004ee6aa | g_CConsolePtr
    PUSH EAX                            ; 004ee6af | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004ee6b0
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,dword ptr [EBX + 0x1fe78]   ; 004ee6b5
    MOV EDX,dword ptr [EBX + 0x1fe70]   ; 004ee6bb
    ADD ESP,0x10                        ; 004ee6c1
    CMP EAX,EDX                         ; 004ee6c4
    JNZ 0x004ee6f6                      ; 004ee6c6
        ;   XREF to: 004ee6f6 (CONDITIONAL_JUMP)  ; LAB_004ee6f6
    PUSH EBX                            ; 004ee6c8
    PUSH 0x5e4e39                       ; 004ee6c9 | = "%s rescued and taken home!\n"
    MOV ESI,dword ptr [0x00611100]      ; 004ee6ce | g_CConsolePtr
    PUSH ESI                            ; 004ee6d4 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fe6c],0x4   ; 004ee6d5
    CALL engine_console.cpp_FUN_00445430 ; 004ee6df
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004ee6e4
    MOV dword ptr [EBX + 0x1fe78],0x0   ; 004ee6e7
    JMP 0x004edcfd                      ; 004ee6f1
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x0                            ; 004ee6f6
        ;   Label: LAB_004ee6f6
    PUSH EDX                            ; 004ee6f8
    LEA EAX,[EBX + 0x20]                ; 004ee6f9
    PUSH EAX                            ; 004ee6fc
    CALL core_waypoint.cpp_FUN_005abb80 ; 004ee6fd
        ;   XREF to: 005abb80 (UNCONDITIONAL_CALL)  ; undefined core_waypoint.cpp_FUN_005abb80()
    ADD ESP,0xc                         ; 004ee702
    MOV dword ptr [EBX + 0x1fe78],EAX   ; 004ee705
    JMP 0x004edcfd                      ; 004ee70b
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004ee710
        ;   Label: caseD_3
    PUSH 0x0                            ; 004ee712
    PUSH ESI                            ; 004ee714
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee715
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee71a
    PUSH EBX                            ; 004ee71d
    PUSH 0x5e4e55                       ; 004ee71e | = "%s got confused going home.  Help me!\n"
    MOV EDX,dword ptr [0x00611100]      ; 004ee723 | g_CConsolePtr
    PUSH EDX                            ; 004ee729 | g_CConsoleInstance
    MOV dword ptr [EBX + 0x1fe6c],0x2   ; 004ee72a
    CALL engine_console.cpp_FUN_00445430 ; 004ee734
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004ee739
    PUSH 0x1                            ; 004ee73c
    PUSH 0x0                            ; 004ee73e
    PUSH ESI                            ; 004ee740
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee741
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee746
    LEA EAX,[EBX + 0x1fd34]             ; 004ee749
    PUSH EAX                            ; 004ee74f
    MOV ECX,dword ptr [0x0061b4d0]      ; 004ee750 | DAT_0061b4d0
    PUSH ECX                            ; 004ee756
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004ee757
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004ee75c
    PUSH 0x1                            ; 004ee75f
    LEA EAX,[EBX + 0x1fb20]             ; 004ee761
    PUSH EAX                            ; 004ee767
    MOV ESI,dword ptr [0x0061b4d0]      ; 004ee768 | DAT_0061b4d0
    PUSH ESI                            ; 004ee76e
    CALL core_event.cpp_FUN_004a9870    ; 004ee76f
        ;   XREF to: 004a9870 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9870()
    MOV dword ptr [EBX + 0x1fe6c],0x4   ; 004ee774
    ADD ESP,0xc                         ; 004ee77e
    MOV dword ptr [EBX + 0x1fe78],0x0   ; 004ee781
    JMP 0x004edcfd                      ; 004ee78b
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004ee790
        ;   Label: caseD_1
    PUSH 0x1                            ; 004ee792
    PUSH ESI                            ; 004ee794
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee795
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee79a
    JMP 0x004edcfd                      ; 004ee79d
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 004ee7a2
        ;   Label: caseD_2
    PUSH 0x2                            ; 004ee7a4
    PUSH ESI                            ; 004ee7a6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004ee7a7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004ee7ac
    JMP 0x004edcfd                      ; 004ee7af
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    LEA EAX,[EBX + 0x1fe64]             ; 004ee7b4
        ;   Label: LAB_004ee7b4
    PUSH EAX                            ; 004ee7ba
    PUSH 0xbf800000                     ; 004ee7bb
    PUSH 0x3f800000                     ; 004ee7c0
    PUSH EDI                            ; 004ee7c5
    PUSH EBX                            ; 004ee7c6
    CALL core_charactr.cpp_FUN_00431cc0 ; 004ee7c7
        ;   XREF to: 00431cc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431cc0()
    MOV EAX,dword ptr [EBX + 0x1fe64]   ; 004ee7cc
    ADD ESP,0x14                        ; 004ee7d2
    CMP EAX,0x3                         ; 004ee7d5
    JA 0x004edcfd                       ; 004ee7d8
        ;   XREF to: 004edcfd (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4ed868]  ; 004ee7de | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,0x1                         ; 004ee7e5
        ;   Label: caseD_4
    MOV ESI,dword ptr [EBX + 0x1fe74]   ; 004ee7ea
    MOV dword ptr [ESP + 0x25c],ECX     ; 004ee7f0
    TEST ESI,ESI                        ; 004ee7f7
    JZ 0x004edcfd                       ; 004ee7f9
        ;   XREF to: 004edcfd (CONDITIONAL_JUMP)  ; caseD_5
    FLD float ptr [EBX + 0x2524]        ; 004ee7ff
    FLD float ptr [EBP + 0x18]          ; 004ee805
    FMUL double ptr [0x005e4e9f]        ; 004ee808 | DAT_005e4e9f
    FSTP double ptr [ESP]               ; 004ee80e
    FCOMP double ptr [ESP]              ; 004ee811
    FNSTSW AX                           ; 004ee814
    SAHF                                ; 004ee816
    JNC 0x004ee822                      ; 004ee817
        ;   XREF to: 004ee822 (CONDITIONAL_JUMP)  ; LAB_004ee822
    FLD double ptr [ESP]                ; 004ee819
    FSTP float ptr [EBX + 0x2524]       ; 004ee81c
    MOV EAX,dword ptr [EBX + 0x1fe74]   ; 004ee822
        ;   Label: LAB_004ee822
    ADD EAX,0x20                        ; 004ee828
    PUSH EAX                            ; 004ee82b
    PUSH EBX                            ; 004ee82c
    LEA ESI,[ESP + 0x174]               ; 004ee82d
    LEA EDI,[ESP + 0x120]               ; 004ee834
    CALL core_actor.cpp_FUN_00408bb0    ; 004ee83b
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x174]               ; 004ee840
    LEA EAX,[ESP + 0x120]               ; 004ee847
    ADD ESP,0x8                         ; 004ee84e
    LEA EDX,[EBX + 0x250c]              ; 004ee851
    MOVSD ES:EDI,ESI                    ; 004ee857
    MOVSD ES:EDI,ESI                    ; 004ee858
    MOVSD ES:EDI,ESI                    ; 004ee859
    CMP EDX,EAX                         ; 004ee85a
    JZ 0x004ee87b                       ; 004ee85c
        ;   XREF to: 004ee87b (CONDITIONAL_JUMP)  ; LAB_004ee87b
    MOV EAX,dword ptr [ESP + 0x118]     ; 004ee85e
    MOV dword ptr [EDX],EAX             ; 004ee865
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004ee867
    MOV dword ptr [EDX + 0x4],EAX       ; 004ee86e
    MOV EAX,dword ptr [ESP + 0x120]     ; 004ee871
    MOV dword ptr [EDX + 0x8],EAX       ; 004ee878
    LEA EDI,[ESP + 0x7c]                ; 004ee87b
        ;   Label: LAB_004ee87b
    LEA ESI,[EBX + 0x250c]              ; 004ee87f
    MOVSD ES:EDI,ESI                    ; 004ee885
    MOVSD ES:EDI,ESI                    ; 004ee886
    MOVSD ES:EDI,ESI                    ; 004ee887
    FLD float ptr [ESP + 0x7c]          ; 004ee888
    FMUL ST0                            ; 004ee88c
    FLD float ptr [ESP + 0x84]          ; 004ee88e
    FMUL ST0                            ; 004ee895
    FADDP                               ; 004ee897
    FSQRT                               ; 004ee899
    XOR EDI,EDI                         ; 004ee89b
    MOV dword ptr [ESP + 0x80],EDI      ; 004ee89d
    FSTP float ptr [ESP + 0x254]        ; 004ee8a4
    MOV EAX,dword ptr [ESP + 0x254]     ; 004ee8ab
    FLD float ptr [ESP + 0x254]         ; 004ee8b2
    MOV dword ptr [ESP + 0x20],EAX      ; 004ee8b9
    FCOMP float ptr [EBX + 0x2524]      ; 004ee8bd
    FNSTSW AX                           ; 004ee8c3
    SAHF                                ; 004ee8c5
    JBE 0x004ee90b                      ; 004ee8c6
        ;   XREF to: 004ee90b (CONDITIONAL_JUMP)  ; LAB_004ee90b
    FLD float ptr [EBX + 0x2524]        ; 004ee8c8
    FDIV float ptr [ESP + 0x254]        ; 004ee8ce
    LEA EAX,[EBX + 0x250c]              ; 004ee8d5
    FLD float ptr [EAX]                 ; 004ee8db
    FXCH                                ; 004ee8dd
    FSTP float ptr [ESP + 0x250]        ; 004ee8df
    FMUL float ptr [ESP + 0x250]        ; 004ee8e6
    FLD float ptr [EAX + 0x4]           ; 004ee8ed
    FMUL float ptr [ESP + 0x250]        ; 004ee8f0
    FLD float ptr [EAX + 0x8]           ; 004ee8f7
    FMUL float ptr [ESP + 0x250]        ; 004ee8fa
    FXCH ST2                            ; 004ee901
    FSTP float ptr [EAX]                ; 004ee903
    FSTP float ptr [EAX + 0x4]          ; 004ee905
    FSTP float ptr [EAX + 0x8]          ; 004ee908
    LEA EAX,[EBX + 0x250c]              ; 004ee90b
        ;   Label: LAB_004ee90b
    PUSH EAX                            ; 004ee911
    LEA ESI,[ESP + 0x1b8]               ; 004ee912
    LEA EDI,[ESP + 0x140]               ; 004ee919
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004ee920
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 004ee925
    LEA ESI,[ESP + 0x1b4]               ; 004ee928
    FLD float ptr [ESP + 0x20]          ; 004ee92f
    FMUL double ptr [0x005e4ea7]        ; 004ee933 | DAT_005e4ea7
    MOVSD ES:EDI,ESI                    ; 004ee939
    MOVSD ES:EDI,ESI                    ; 004ee93a
    MOVSD ES:EDI,ESI                    ; 004ee93b
    FLD1                                ; 004ee93c
    MOV EAX,dword ptr [ESP + 0x140]     ; 004ee93e
    FXCH                                ; 004ee945
    MOV dword ptr [EBX + 0x2508],EAX    ; 004ee947
    FSTP double ptr [ESP + 0x10]        ; 004ee94d
    FCOMP double ptr [ESP + 0x10]       ; 004ee951
    FNSTSW AX                           ; 004ee955
    SAHF                                ; 004ee957
    JBE 0x004ee9b8                      ; 004ee958
        ;   XREF to: 004ee9b8 (CONDITIONAL_JUMP)  ; LAB_004ee9b8
    MOV EAX,dword ptr [EBX + 0x1fe74]   ; 004ee95a
    FLD float ptr [EAX + 0x34]          ; 004ee960
    FSUB float ptr [EBX + 0x34]         ; 004ee963
    SUB ESP,0x4                         ; 004ee966
    FSTP float ptr [ESP]                ; 004ee969
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004ee96c
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x284],EAX     ; 004ee971
    FLD float ptr [ESP + 0x284]         ; 004ee978
    ADD ESP,0x4                         ; 004ee97f
    FSUB float ptr [EBX + 0x2508]       ; 004ee982
    SUB ESP,0x4                         ; 004ee988
    FSTP float ptr [ESP]                ; 004ee98b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004ee98e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x284],EAX     ; 004ee993
    FLD float ptr [ESP + 0x284]         ; 004ee99a
    ADD ESP,0x4                         ; 004ee9a1
    FLD1                                ; 004ee9a4
    FSUB double ptr [ESP + 0x10]        ; 004ee9a6
    FMULP                               ; 004ee9aa
    FADD float ptr [EBX + 0x2508]       ; 004ee9ac
    FSTP float ptr [EBX + 0x2508]       ; 004ee9b2
    PUSH dword ptr [EBX + 0x2508]       ; 004ee9b8
        ;   Label: LAB_004ee9b8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004ee9be
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x284],EAX     ; 004ee9c3
    FLD float ptr [ESP + 0x284]         ; 004ee9ca
    ADD ESP,0x4                         ; 004ee9d1
    FSTP float ptr [EBX + 0x2508]       ; 004ee9d4
    FLD float ptr [ESP + 0x20]          ; 004ee9da
    FCOMP double ptr [0x005e4eaf]       ; 004ee9de | DAT_005e4eaf
    FNSTSW AX                           ; 004ee9e4
    SAHF                                ; 004ee9e6
    JNC 0x004eea5f                      ; 004ee9e7
        ;   XREF to: 004eea5f (CONDITIONAL_JUMP)  ; LAB_004eea5f
    FLD float ptr [EBX + 0x2508]        ; 004ee9e9
    FABS                                ; 004ee9ef
    FCOMP double ptr [0x005e4eb7]       ; 004ee9f1 | DAT_005e4eb7
    FNSTSW AX                           ; 004ee9f7
    SAHF                                ; 004ee9f9
    JNC 0x004eea5f                      ; 004ee9fa
        ;   XREF to: 004eea5f (CONDITIONAL_JUMP)  ; LAB_004eea5f
    MOV EAX,dword ptr [EBX + 0x1fe68]   ; 004ee9fc
    TEST EAX,EAX                        ; 004eea02
    JNZ 0x004eeac1                      ; 004eea04
        ;   XREF to: 004eeac1 (CONDITIONAL_JUMP)  ; LAB_004eeac1
    PUSH 0x1                            ; 004eea0a
        ;   Label: LAB_004eea0a
    PUSH 0x0                            ; 004eea0c
    LEA EAX,[EBX + 0x158]               ; 004eea0e
    PUSH EAX                            ; 004eea14
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004eea15
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004eea1a
    MOV dword ptr [EBX + 0x1fe6c],0x5   ; 004eea1d
    LEA EAX,[EBX + 0x1fd34]             ; 004eea27
        ;   Label: LAB_004eea27
    PUSH EAX                            ; 004eea2d
    MOV ECX,dword ptr [0x0061b4d0]      ; 004eea2e | DAT_0061b4d0
    PUSH ECX                            ; 004eea34
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 004eea35
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004eea3a
    PUSH 0x1                            ; 004eea3d
    LEA EAX,[EBX + 0x1fb20]             ; 004eea3f
    PUSH EAX                            ; 004eea45
    MOV ESI,dword ptr [0x0061b4d0]      ; 004eea46 | DAT_0061b4d0
    PUSH ESI                            ; 004eea4c
    CALL core_event.cpp_FUN_004a9870    ; 004eea4d
        ;   XREF to: 004a9870 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9870()
    ADD ESP,0xc                         ; 004eea52
    MOV dword ptr [EBX + 0x1fe74],0x0   ; 004eea55
    FLD float ptr [EBP + 0x18]          ; 004eea5f
        ;   Label: LAB_004eea5f
    FMUL float ptr [0x005e4ebf]         ; 004eea62 | DAT_005e4ebf
    FLD float ptr [EBX + 0x2508]        ; 004eea68
    FXCH                                ; 004eea6e
    FST float ptr [ESP + 0x24c]         ; 004eea70
    FCHS                                ; 004eea77
    FSTP float ptr [ESP + 0x244]        ; 004eea79
    FCOMP float ptr [ESP + 0x244]       ; 004eea80
    FNSTSW AX                           ; 004eea87
    SAHF                                ; 004eea89
    JNC 0x004eea99                      ; 004eea8a
        ;   XREF to: 004eea99 (CONDITIONAL_JUMP)  ; LAB_004eea99
    MOV EAX,dword ptr [ESP + 0x244]     ; 004eea8c
    MOV dword ptr [EBX + 0x2508],EAX    ; 004eea93
    FLD float ptr [EBX + 0x2508]        ; 004eea99
        ;   Label: LAB_004eea99
    FCOMP float ptr [ESP + 0x24c]       ; 004eea9f
    FNSTSW AX                           ; 004eeaa6
    SAHF                                ; 004eeaa8
    JBE 0x004edcfd                      ; 004eeaa9
        ;   XREF to: 004edcfd (CONDITIONAL_JUMP)  ; caseD_5
    MOV EAX,dword ptr [ESP + 0x24c]     ; 004eeaaf
    MOV dword ptr [EBX + 0x2508],EAX    ; 004eeab6
    JMP 0x004edcfd                      ; 004eeabc
        ;   XREF to: 004edcfd (UNCONDITIONAL_JUMP)  ; caseD_5
    CMP EAX,0x4                         ; 004eeac1
        ;   Label: LAB_004eeac1
    JZ 0x004eea0a                       ; 004eeac4
        ;   XREF to: 004eea0a (CONDITIONAL_JUMP)  ; LAB_004eea0a
    PUSH 0x1                            ; 004eeaca
    PUSH 0xa                            ; 004eeacc
    LEA EAX,[EBX + 0x158]               ; 004eeace
    PUSH EAX                            ; 004eead4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004eead5
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004eeada
    JMP 0x004eea27                      ; 004eeadd
        ;   XREF to: 004eea27 (UNCONDITIONAL_JUMP)  ; LAB_004eea27
    MOV EAX,dword ptr [EBX + 0x1fe6c]   ; 004eeae2
        ;   Label: LAB_004eeae2
    CMP EAX,0x5                         ; 004eeae8
    JA 0x004edcfd                       ; 004eeaeb
        ;   XREF to: 004edcfd (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x4ed878]  ; 004eeaf1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x158]               ; 004eeaf8
        ;   Label: LAB_004eeaf8
    PUSH EAX                            ; 004eeafe
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004eeaff
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004eeb04
    ADD ESP,0x4                         ; 004eeb07
    CMP EAX,0x8                         ; 004eeb0a
    JZ 0x004eeca9                       ; 004eeb0d
        ;   XREF to: 004eeca9 (CONDITIONAL_JUMP)  ; LAB_004eeca9
    TEST EAX,EAX                        ; 004eeb13
    JZ 0x004eeca9                       ; 004eeb15
        ;   XREF to: 004eeca9 (CONDITIONAL_JUMP)  ; LAB_004eeca9
    CMP EAX,0xd                         ; 004eeb1b
    JZ 0x004eeca9                       ; 004eeb1e
        ;   XREF to: 004eeca9 (CONDITIONAL_JUMP)  ; LAB_004eeca9
    CMP EAX,0xa                         ; 004eeb24
    JZ 0x004eeca9                       ; 004eeb27
        ;   XREF to: 004eeca9 (CONDITIONAL_JUMP)  ; LAB_004eeca9
    PUSH dword ptr [EBP + 0x18]         ; 004eeb2d
        ;   Label: LAB_004eeb2d
    PUSH EBX                            ; 004eeb30
    LEA ESI,[EBX + 0x2518]              ; 004eeb31
    CALL core_charactr.cpp_FUN_0042d700 ; 004eeb37
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    ADD ESP,0x8                         ; 004eeb3c
    FLD float ptr [ESI]                 ; 004eeb3f
    FMUL float ptr [EBP + 0x18]         ; 004eeb41
    FLD float ptr [ESI + 0x4]           ; 004eeb44
    FMUL float ptr [EBP + 0x18]         ; 004eeb47
    FLD float ptr [ESI + 0x8]           ; 004eeb4a
    FMUL float ptr [EBP + 0x18]         ; 004eeb4d
    LEA EDI,[ESP + 0x124]               ; 004eeb50
    LEA ESI,[ESP + 0x130]               ; 004eeb57
    FXCH ST2                            ; 004eeb5e
    FSTP float ptr [ESP + 0x130]        ; 004eeb60
    FSTP float ptr [ESP + 0x134]        ; 004eeb67
    FSTP float ptr [ESP + 0x138]        ; 004eeb6e
    MOVSD ES:EDI,ESI                    ; 004eeb75
    MOVSD ES:EDI,ESI                    ; 004eeb76
    MOVSD ES:EDI,ESI                    ; 004eeb77
    LEA EDX,[EBX + 0x250c]              ; 004eeb78
    FLD float ptr [ESP + 0x124]         ; 004eeb7e
    FLD float ptr [ESP + 0x128]         ; 004eeb85
    FLD float ptr [ESP + 0x12c]         ; 004eeb8c
    LEA EDI,[ESP + 0x10c]               ; 004eeb93
    LEA ESI,[ESP + 0x1cc]               ; 004eeb9a
    FXCH ST2                            ; 004eeba1
    FADD float ptr [EDX]                ; 004eeba3
    FXCH                                ; 004eeba5
    FADD float ptr [EDX + 0x4]          ; 004eeba7
    FXCH ST2                            ; 004eebaa
    FADD float ptr [EDX + 0x8]          ; 004eebac
    FXCH                                ; 004eebaf
    FSTP float ptr [ESP + 0x1cc]        ; 004eebb1
    FXCH                                ; 004eebb8
    FSTP float ptr [ESP + 0x1d0]        ; 004eebba
    FSTP float ptr [ESP + 0x1d4]        ; 004eebc1
    MOVSD ES:EDI,ESI                    ; 004eebc8
    MOVSD ES:EDI,ESI                    ; 004eebc9
    MOVSD ES:EDI,ESI                    ; 004eebca
    LEA EAX,[EBX + 0x249c]              ; 004eebcb
    FLD float ptr [ESP + 0x10c]         ; 004eebd1
    FLD float ptr [ESP + 0x110]         ; 004eebd8
    FLD float ptr [ESP + 0x114]         ; 004eebdf
    LEA EDI,[ESP + 0x19c]               ; 004eebe6
    LEA ESI,[ESP + 0xe8]                ; 004eebed
    FXCH ST2                            ; 004eebf4
    FADD float ptr [EAX]                ; 004eebf6
    FXCH                                ; 004eebf8
    FADD float ptr [EAX + 0x4]          ; 004eebfa
    FXCH ST2                            ; 004eebfd
    FADD float ptr [EAX + 0x8]          ; 004eebff
    FXCH                                ; 004eec02
    FSTP float ptr [ESP + 0xe8]         ; 004eec04
    FXCH                                ; 004eec0b
    FSTP float ptr [ESP + 0xec]         ; 004eec0d
    FSTP float ptr [ESP + 0xf0]         ; 004eec14
    MOVSD ES:EDI,ESI                    ; 004eec1b
    MOVSD ES:EDI,ESI                    ; 004eec1c
    MOVSD ES:EDI,ESI                    ; 004eec1d
    MOV dword ptr [EDX + 0x8],0x0       ; 004eec1e
    MOV ECX,dword ptr [EDX + 0x8]       ; 004eec25
    MOV dword ptr [EDX + 0x4],ECX       ; 004eec28
    MOV ECX,dword ptr [EDX + 0x4]       ; 004eec2b
    MOV dword ptr [EDX],ECX             ; 004eec2e
    MOV dword ptr [EAX + 0x8],0x0       ; 004eec30
    MOV EDX,dword ptr [EAX + 0x8]       ; 004eec37
    MOV dword ptr [EAX + 0x4],EDX       ; 004eec3a
    MOV EDX,dword ptr [EAX + 0x4]       ; 004eec3d
    MOV dword ptr [EAX],EDX             ; 004eec40
    LEA EAX,[ESP + 0x19c]               ; 004eec42
    PUSH EAX                            ; 004eec49
    LEA EDI,[ESP + 0xc8]                ; 004eec4a
    LEA ESI,[EBX + 0x20]                ; 004eec51
    PUSH EBX                            ; 004eec54
    MOVSD ES:EDI,ESI                    ; 004eec55
    MOVSD ES:EDI,ESI                    ; 004eec56
    MOVSD ES:EDI,ESI                    ; 004eec57
    CALL core_charactr.cpp_FUN_0042d750 ; 004eec58
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004eec5d
    FLD float ptr [EBX + 0x2fe0]        ; 004eec60
    FADD float ptr [EBP + 0x18]         ; 004eec66
    FSTP float ptr [EBX + 0x2fe0]       ; 004eec69
    FLD float ptr [ESP + 0x1a0]         ; 004eec6f
    FMUL ST0                            ; 004eec76
    FLD float ptr [ESP + 0x19c]         ; 004eec78
    FMUL ST0                            ; 004eec7f
    FADDP                               ; 004eec81
    FLD float ptr [ESP + 0x1a4]         ; 004eec83
    FMUL ST0                            ; 004eec8a
    FADDP                               ; 004eec8c
    FSQRT                               ; 004eec8e
    FLD float ptr [EBP + 0x18]          ; 004eec90
    FST double ptr [ESP + 0x18]         ; 004eec93
    FMUL double ptr [0x005e4edf]        ; 004eec97 | DAT_005e4edf
    FCOMPP                              ; 004eec9d
    FNSTSW AX                           ; 004eec9f
    SAHF                                ; 004eeca1
    JBE 0x004eecc2                      ; 004eeca2
        ;   XREF to: 004eecc2 (CONDITIONAL_JUMP)  ; LAB_004eecc2
    JMP 0x004ede79                      ; 004eeca4
        ;   XREF to: 004ede79 (UNCONDITIONAL_JUMP)  ; LAB_004ede79
    MOV ESI,dword ptr [EBX + 0xdc]      ; 004eeca9
        ;   Label: LAB_004eeca9
    TEST ESI,ESI                        ; 004eecaf
    JNZ 0x004eeb2d                      ; 004eecb1
        ;   XREF to: 004eeb2d (CONDITIONAL_JUMP)  ; LAB_004eeb2d
    MOV dword ptr [EBX + 0x2fe0],ESI    ; 004eecb7
    JMP 0x004ede83                      ; 004eecbd
        ;   XREF to: 004ede83 (UNCONDITIONAL_JUMP)  ; LAB_004ede83
    LEA EAX,[EBX + 0x20]                ; 004eecc2
        ;   Label: LAB_004eecc2
    FLD float ptr [EAX]                 ; 004eecc5
    FSUB float ptr [ESP + 0xc4]         ; 004eecc7
    FMUL ST0                            ; 004eecce
    FLD float ptr [EAX + 0x4]           ; 004eecd0
    FSUB float ptr [ESP + 0xc8]         ; 004eecd3
    FMUL ST0                            ; 004eecda
    FLD float ptr [EAX + 0x8]           ; 004eecdc
    FXCH                                ; 004eecdf
    FADDP ST2,ST0                       ; 004eece1
    FSUB float ptr [ESP + 0xcc]         ; 004eece3
    FMUL ST0                            ; 004eecea
    FADDP                               ; 004eecec
    FSQRT                               ; 004eecee
    FLD double ptr [ESP + 0x18]         ; 004eecf0
    FMUL double ptr [0x005e4ee7]        ; 004eecf4 | DAT_005e4ee7
    FCOMPP                              ; 004eecfa
    FNSTSW AX                           ; 004eecfc
    SAHF                                ; 004eecfe
    JC 0x004ede79                       ; 004eecff
        ;   XREF to: 004ede79 (CONDITIONAL_JUMP)  ; LAB_004ede79
    JMP 0x004ede83                      ; 004eed05
        ;   XREF to: 004ede83 (UNCONDITIONAL_JUMP)  ; LAB_004ede83
    TEST EDI,EDI                        ; 004eed0a
        ;   Label: LAB_004eed0a
    JNZ 0x004edeff                      ; 004eed0c
        ;   XREF to: 004edeff (CONDITIONAL_JUMP)  ; LAB_004edeff
    FLD float ptr [EBP + 0x18]          ; 004eed12
    FDIV float ptr [ESP + 0x23c]        ; 004eed15
    FSUBR float ptr [EBX + 0x1fe94]     ; 004eed1c
    JMP 0x004edf0f                      ; 004eed22
        ;   XREF to: 004edf0f (UNCONDITIONAL_JUMP)  ; LAB_004edf0f
    FLD1                                ; 004eed27
        ;   Label: LAB_004eed27
    FCOMP double ptr [ESP + 0x8]        ; 004eed29
    FNSTSW AX                           ; 004eed2d
    SAHF                                ; 004eed2f
    JNC 0x004eed3c                      ; 004eed30
        ;   XREF to: 004eed3c (CONDITIONAL_JUMP)  ; LAB_004eed3c
    MOV dword ptr [EBX + 0x1fe94],0x3f800000 ; 004eed32
    FLD float ptr [EBX + 0x1fe90]       ; 004eed3c
        ;   Label: LAB_004eed3c
    FMUL double ptr [0x005e4eef]        ; 004eed42 | DAT_005e4eef
    SUB ESP,0x4                         ; 004eed48
    FADD double ptr [0x005e4ef7]        ; 004eed4b | DAT_005e4ef7
    MOV EAX,[0x01d06b8c]                ; 004eed51 | DAT_01d06b8c
    FSTP float ptr [ESP]                ; 004eed56
    PUSH EAX                            ; 004eed59
    LEA ESI,[EBX + 0x158]               ; 004eed5a
    PUSH ESI                            ; 004eed60
    CALL core_motion.cpp_FUN_00525110   ; 004eed61
        ;   XREF to: 00525110 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00525110()
    MOV dword ptr [ESP + 0x28c],EAX     ; 004eed66
    FLD float ptr [ESP + 0x28c]         ; 004eed6d
    ADD ESP,0xc                         ; 004eed74
    PUSH 0x567360                       ; 004eed77
    MOV EDX,dword ptr [EBX + 0x1fe7c]   ; 004eed7c
    PUSH EDX                            ; 004eed82
    MOV ECX,dword ptr [0x01d06b8c]      ; 004eed83 | DAT_01d06b8c
    PUSH dword ptr [EBX + 0x1fe94]      ; 004eed89
    FSTP float ptr [ESP + 0x238]        ; 004eed8f
    PUSH dword ptr [ESP + 0x238]        ; 004eed96
    PUSH ECX                            ; 004eed9d
    PUSH ESI                            ; 004eed9e
    CALL core_skeleton.cpp_FUN_00568100 ; 004eed9f
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    ADD ESP,0x18                        ; 004eeda4
    PUSH 0x567360                       ; 004eeda7
    MOV EDI,dword ptr [EBX + 0x1fe80]   ; 004eedac
    PUSH EDI                            ; 004eedb2
    PUSH dword ptr [EBX + 0x1fe94]      ; 004eedb3
    MOV EAX,[0x01d06b8c]                ; 004eedb9 | DAT_01d06b8c
    PUSH dword ptr [ESP + 0x238]        ; 004eedbe
    PUSH EAX                            ; 004eedc5
    PUSH ESI                            ; 004eedc6
    CALL core_skeleton.cpp_FUN_00568100 ; 004eedc7
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    FLD float ptr [EBX + 0x1fe94]       ; 004eedcc
    FLD1                                ; 004eedd2
    ADD ESP,0x18                        ; 004eedd4
    FCOMPP                              ; 004eedd7
    FNSTSW AX                           ; 004eedd9
    SAHF                                ; 004eeddb
    JA 0x004edf42                       ; 004eeddc
        ;   XREF to: 004edf42 (CONDITIONAL_JUMP)  ; LAB_004edf42
    FLD float ptr [EBX + 0x1fe90]       ; 004eede2
    FLDZ                                ; 004eede8
    FCOMPP                              ; 004eedea
    FNSTSW AX                           ; 004eedec
    SAHF                                ; 004eedee
    JNC 0x004edf42                      ; 004eedef
        ;   XREF to: 004edf42 (CONDITIONAL_JUMP)  ; LAB_004edf42
    FLD float ptr [EBP + 0x18]          ; 004eedf5
    FDIV float ptr [ESP + 0x230]        ; 004eedf8
    FADD float ptr [EBX + 0x1fe90]      ; 004eedff
    FST float ptr [EBX + 0x1fe90]       ; 004eee05
    FLD1                                ; 004eee0b
    FCOMPP                              ; 004eee0d
    FNSTSW AX                           ; 004eee0f
    SAHF                                ; 004eee11
    JNC 0x004edf42                      ; 004eee12
        ;   XREF to: 004edf42 (CONDITIONAL_JUMP)  ; LAB_004edf42
    MOV dword ptr [EBX + 0x1fe90],0x3f800000 ; 004eee18
    JMP 0x004edf42                      ; 004eee22
        ;   XREF to: 004edf42 (UNCONDITIONAL_JUMP)  ; LAB_004edf42
    MOV EAX,[0x02c99770]                ; 004eee27 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004eee27
    PUSH EAX                            ; 004eee2c
    MOV EDX,dword ptr [EBX + 0x2628]    ; 004eee2d
    PUSH EDX                            ; 004eee33
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004eee34
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004eee39
    TEST EAX,EAX                        ; 004eee3c
    JZ 0x004edfe7                       ; 004eee3e
        ;   XREF to: 004edfe7 (CONDITIONAL_JUMP)  ; LAB_004edfe7
    PUSH 0x5e4e8c                       ; 004eee44 | = "deputeFireShotgun"
    MOV ECX,dword ptr [0x0061b4d0]      ; 004eee49 | DAT_0061b4d0
    PUSH ECX                            ; 004eee4f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 004eee50
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004eee55
    TEST EAX,EAX                        ; 004eee58
    JZ 0x004edfe7                       ; 004eee5a
        ;   XREF to: 004edfe7 (CONDITIONAL_JUMP)  ; LAB_004edfe7
    MOV dword ptr [EBX + 0x1fe90],0x3c23d70a ; 004eee60
    MOV ESP,EBP                         ; 004eee6a
    POP EBP                             ; 004eee6c
    POP EDI                             ; 004eee6d
    POP ESI                             ; 004eee6e
    POP EBX                             ; 004eee6f
    RET                                 ; 004eee70

