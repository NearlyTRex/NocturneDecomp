; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_FUN_005bb960(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x268]:1  local_268
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_stranger.cpp_CStranger_process_FUN_005bb830 at 005bb880
;
; Referenced Globals:
;   void* switchdataD_005bb900 = 005bd3db
;   void* switchdataD_005bb918 = 005bd235
;   TerminatedCString s_DebugActionPending_006534b4
;   TerminatedCString s_grabbedBy_s_006534c7
;   TerminatedCString s_pushedObject_s_006534d5
;   TerminatedCString s_ladder_006534e6
;   TerminatedCString s_pickup_006534ee
;   TerminatedCString s_hurt_006534f6
;   TerminatedCString s_door_006534fc
;   TerminatedCString s_sitting_00653502
;   TerminatedCString s_stashinventory_0065350b
;   TerminatedCString s_placeobject_0065351b
;   TerminatedCString s_putdownobject_00653528
;   TerminatedCString s_toss_00653537
;   TerminatedCString s_attackmelee_0065353d
;   ... and 53 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_ammobox.cpp_CAmmoBox_FUN_00411690
;   core_boxactor.cpp_CBoxActor_FUN_00422390
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   ... and 35 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb960
        ;   Label: core_stranger.cpp_CStranger_FUN_005bb960
    PUSH ESI                            ; 005bb961
    PUSH EDI                            ; 005bb962
    PUSH EBP                            ; 005bb963
    MOV EBP,ESP                         ; 005bb964
    SUB ESP,0x2e8                       ; 005bb966
    AND ESP,0xfffffff8                  ; 005bb96c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005bb96f
    PUSH 0x6534b4                       ; 005bb972 | = "DebugActionPending"
    MOV EDX,dword ptr [0x006793d0]      ; 005bb977 | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 005bb97d | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005bb97e
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005bb983
    MOV ECX,dword ptr [EBX + 0x24f8]    ; 005bb986
    MOV dword ptr [ESP + 0x2dc],EAX     ; 005bb98c
    TEST ECX,ECX                        ; 005bb993
    JZ 0x005bbaaa                       ; 005bb995
        ;   XREF to: 005bbaaa (CONDITIONAL_JUMP)  ; LAB_005bbaaa
    FLD float ptr [EBX + 0x1fcb0]       ; 005bb99b
    FCOMP float ptr [0x006535dc]        ; 005bb9a1 | FLOAT_006535dc
    FNSTSW AX                           ; 005bb9a7
    SAHF                                ; 005bb9a9
    JNC 0x005bbaaa                      ; 005bb9aa
        ;   XREF to: 005bbaaa (CONDITIONAL_JUMP)  ; LAB_005bbaaa
    LEA EDX,[ESP + 0x90]                ; 005bb9b0
    PUSH EDX                            ; 005bb9b7
    MOV EAX,ECX                         ; 005bb9b8
    MOV ECX,dword ptr [ECX + 0x154]     ; 005bb9ba
    PUSH EAX                            ; 005bb9c0
    CALL dword ptr [ECX + 0x14]         ; 005bb9c1
    ADD ESP,0x8                         ; 005bb9c4
    LEA EDX,[EBX + 0x1fca4]             ; 005bb9c7
    MOV ESI,EAX                         ; 005bb9cd
    MOV ECX,EDX                         ; 005bb9cf
    CMP EDX,EAX                         ; 005bb9d1
    JZ 0x005bb9e5                       ; 005bb9d3
        ;   XREF to: 005bb9e5 (CONDITIONAL_JUMP)  ; LAB_005bb9e5
    MOV EDI,dword ptr [EAX]             ; 005bb9d5
    MOV dword ptr [EDX],EDI             ; 005bb9d7
    MOV EDI,dword ptr [EAX + 0x4]       ; 005bb9d9
    MOV dword ptr [EDX + 0x4],EDI       ; 005bb9dc
    MOV EDI,dword ptr [EAX + 0x8]       ; 005bb9df
    MOV dword ptr [EDX + 0x8],EDI       ; 005bb9e2
    LEA EAX,[ESI + 0xc]                 ; 005bb9e5
        ;   Label: LAB_005bb9e5
    LEA EDX,[ECX + 0xc]                 ; 005bb9e8
    CMP EDX,EAX                         ; 005bb9eb
    JZ 0x005bb9ff                       ; 005bb9ed
        ;   XREF to: 005bb9ff (CONDITIONAL_JUMP)  ; LAB_005bb9ff
    MOV ECX,dword ptr [EAX]             ; 005bb9ef
    MOV dword ptr [EDX],ECX             ; 005bb9f1
    MOV ECX,dword ptr [EAX + 0x4]       ; 005bb9f3
    MOV dword ptr [EDX + 0x4],ECX       ; 005bb9f6
    MOV ECX,dword ptr [EAX + 0x8]       ; 005bb9f9
    MOV dword ptr [EDX + 0x8],ECX       ; 005bb9fc
    LEA EAX,[EBX + 0x1fca4]             ; 005bb9ff
        ;   Label: LAB_005bb9ff
    LEA EDX,[EBX + 0x1fcb0]             ; 005bba05
    FLD float ptr [EAX]                 ; 005bba0b
    FADD float ptr [EDX]                ; 005bba0d
    FST float ptr [ESP + 0x1f8]         ; 005bba0f
    FLD float ptr [EAX + 0x4]           ; 005bba16
    FADD float ptr [EDX + 0x4]          ; 005bba19
    FXCH                                ; 005bba1c
    FLD float ptr [0x006535e0]          ; 005bba1e | FLOAT_006535e0
    FXCH                                ; 005bba24
    FMUL ST1                            ; 005bba26
    FXCH ST2                            ; 005bba28
    FST float ptr [ESP + 0x1fc]         ; 005bba2a
    FLD float ptr [EAX + 0x8]           ; 005bba31
    FADD float ptr [EDX + 0x8]          ; 005bba34
    FXCH                                ; 005bba37
    FMUL ST2                            ; 005bba39
    FXCH                                ; 005bba3b
    FST float ptr [ESP + 0x200]         ; 005bba3d
    FMULP ST2                           ; 005bba44
    LEA EAX,[ESP + 0x234]               ; 005bba46
    FXCH ST2                            ; 005bba4d
    FSTP float ptr [ESP + 0x234]        ; 005bba4f
    PUSH EAX                            ; 005bba56
    LEA EAX,[ESP + 0x244]               ; 005bba57
    FXCH                                ; 005bba5e
    FSTP float ptr [ESP + 0x23c]        ; 005bba60
    PUSH EAX                            ; 005bba67
    FSTP float ptr [ESP + 0x244]        ; 005bba68
    MOV ESI,dword ptr [EBX + 0x24f8]    ; 005bba6f
    PUSH ESI                            ; 005bba75
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005bba76
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005bba7b
    PUSH EAX                            ; 005bba7e
    LEA EAX,[ESP + 0x1c0]               ; 005bba7f
    PUSH EAX                            ; 005bba86
    PUSH EBX                            ; 005bba87
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005bba88
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    LEA EDX,[EBX + 0x1fc98]             ; 005bba8d
    ADD ESP,0xc                         ; 005bba93
    CMP EDX,EAX                         ; 005bba96
    JZ 0x005bbaaa                       ; 005bba98
        ;   XREF to: 005bbaaa (CONDITIONAL_JUMP)  ; LAB_005bbaaa
    MOV ECX,dword ptr [EAX]             ; 005bba9a
    MOV dword ptr [EDX],ECX             ; 005bba9c
    MOV ECX,dword ptr [EAX + 0x4]       ; 005bba9e
    MOV dword ptr [EDX + 0x4],ECX       ; 005bbaa1
    MOV ECX,dword ptr [EAX + 0x8]       ; 005bbaa4
    MOV dword ptr [EDX + 0x8],ECX       ; 005bbaa7
    PUSH dword ptr [EBP + 0x18]         ; 005bbaaa
        ;   Label: LAB_005bbaaa
    PUSH EBX                            ; 005bbaad
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40 ; 005bbaae
        ;   XREF to: 0042ea40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bbab3
    MOV EDI,dword ptr [0x0067b654]      ; 005bbab6 | g_CGamePtr
    PUSH dword ptr [EBP + 0x18]         ; 005bbabc
    PUSH EDI                            ; 005bbabf | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004e3080 ; 005bbac0
        ;   XREF to: 004e3080 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004e3080(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bbac5
    FLD float ptr [EBX + 0xbe24]        ; 005bbac8
    FSUB float ptr [EBP + 0x18]         ; 005bbace
    FST float ptr [EBX + 0xbe24]        ; 005bbad1
    FLDZ                                ; 005bbad7
    FCOMPP                              ; 005bbad9
    FNSTSW AX                           ; 005bbadb
    SAHF                                ; 005bbadd
    JBE 0x005bbaea                      ; 005bbade
        ;   XREF to: 005bbaea (CONDITIONAL_JUMP)  ; LAB_005bbaea
    MOV dword ptr [EBX + 0xbe24],0x0    ; 005bbae0
    FLD float ptr [EBX + 0x1fc40]       ; 005bbaea
        ;   Label: LAB_005bbaea
    FSUB float ptr [EBP + 0x18]         ; 005bbaf0
    FST float ptr [EBX + 0x1fc40]       ; 005bbaf3
    FLDZ                                ; 005bbaf9
    FCOMPP                              ; 005bbafb
    FNSTSW AX                           ; 005bbafd
    SAHF                                ; 005bbaff
    JBE 0x005bbb0c                      ; 005bbb00
        ;   XREF to: 005bbb0c (CONDITIONAL_JUMP)  ; LAB_005bbb0c
    MOV dword ptr [EBX + 0x1fc40],0x0   ; 005bbb02
    LEA EAX,[EBX + 0x23ac]              ; 005bbb0c
        ;   Label: LAB_005bbb0c
    MOV dword ptr [EAX + 0x8],0x0       ; 005bbb12
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bbb19
    MOV dword ptr [EAX + 0x4],EDX       ; 005bbb1c
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bbb1f
    MOV dword ptr [EAX],EDX             ; 005bbb22
    LEA EAX,[ESP + 0x15c]               ; 005bbb24
    PUSH EAX                            ; 005bbb2b
    PUSH EBX                            ; 005bbb2c
    CALL core_stranger.cpp_CStranger_FUN_005be490 ; 005bbb2d
        ;   XREF to: 005be490 (UNCONDITIONAL_CALL)  ; float * core_stranger.cpp_CStranger_FUN_005be490(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bbb32
    PUSH EAX                            ; 005bbb35
    LEA EAX,[ESP + 0xc4]                ; 005bbb36
    PUSH EAX                            ; 005bbb3d
    PUSH EBX                            ; 005bbb3e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005bbb3f
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005bbb44
    PUSH dword ptr [EBP + 0x18]         ; 005bbb47
    PUSH EBX                            ; 005bbb4a
    CALL core_stranger.cpp_CStranger_FUN_005bdd20 ; 005bbb4b
        ;   XREF to: 005bdd20 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005bdd20(CStranger * this_ptr)
    MOV EAX,0x1                         ; 005bbb50
    ADD ESP,0x8                         ; 005bbb55
    MOV dword ptr [ESP + 0x2d4],EAX     ; 005bbb58
    MOV dword ptr [ESP + 0x270],EAX     ; 005bbb5f
    MOV dword ptr [ESP + 0x2cc],EAX     ; 005bbb66
    MOV EDI,EAX                         ; 005bbb6d
    MOV ESI,EAX                         ; 005bbb6f
    CMP dword ptr [EBX + 0x2598],0x0    ; 005bbb71
    JZ 0x005bbbbd                       ; 005bbb78
        ;   XREF to: 005bbbbd (CONDITIONAL_JUMP)  ; LAB_005bbbbd
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbb7a
    XOR EDX,EDX                         ; 005bbb81
    XOR ESI,EDI                         ; 005bbb83
    MOV dword ptr [ESP + 0x2d4],EDX     ; 005bbb85
    MOV dword ptr [ESP + 0x2cc],ESI     ; 005bbb8c
    MOV dword ptr [ESP + 0x270],EDX     ; 005bbb93
    XOR EDI,EDI                         ; 005bbb9a
    XOR ESI,ESI                         ; 005bbb9c
    TEST EAX,EAX                        ; 005bbb9e
    JZ 0x005bbbbd                       ; 005bbba0
        ;   XREF to: 005bbbbd (CONDITIONAL_JUMP)  ; LAB_005bbbbd
    MOV EDX,dword ptr [EBX + 0x2598]    ; 005bbba2
    PUSH EDX                            ; 005bbba8
    PUSH 0x6534c7                       ; 005bbba9 | = "grabbedBy=%s\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005bbbae | g_ConsolePtr | g_CConsolePtr
    PUSH ECX                            ; 005bbbb4 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbbb5
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005bbbba
    CMP dword ptr [EBX + 0x1fba4],0x0   ; 005bbbbd
        ;   Label: LAB_005bbbbd
    JZ 0x005bbc00                       ; 005bbbc4
        ;   XREF to: 005bbc00 (CONDITIONAL_JUMP)  ; LAB_005bbc00
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbbc6
    XOR EDX,EDX                         ; 005bbbcd
    XOR EDI,EDI                         ; 005bbbcf
    XOR ESI,ESI                         ; 005bbbd1
    MOV dword ptr [ESP + 0x2d4],EDX     ; 005bbbd3
    MOV dword ptr [ESP + 0x2cc],EDX     ; 005bbbda
    TEST EAX,EAX                        ; 005bbbe1
    JZ 0x005bbc00                       ; 005bbbe3
        ;   XREF to: 005bbc00 (CONDITIONAL_JUMP)  ; LAB_005bbc00
    MOV EDX,dword ptr [EBX + 0x1fba4]   ; 005bbbe5
    PUSH EDX                            ; 005bbbeb
    PUSH 0x6534d5                       ; 005bbbec | = "pushedObject=%s\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005bbbf1 | g_ConsolePtr | g_CConsolePtr
    PUSH ECX                            ; 005bbbf7 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbbf8
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005bbbfd
    CMP dword ptr [EBX + 0x1fbac],0x0   ; 005bbc00
        ;   Label: LAB_005bbc00
    JZ 0x005bc56f                       ; 005bbc07
        ;   XREF to: 005bc56f (CONDITIONAL_JUMP)  ; LAB_005bc56f
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbc0d
        ;   Label: LAB_005bbc0d
    XOR ECX,ECX                         ; 005bbc14
    XOR ESI,ESI                         ; 005bbc16
    XOR EDI,EDI                         ; 005bbc18
    MOV dword ptr [ESP + 0x270],ECX     ; 005bbc1a
    MOV dword ptr [ESP + 0x2cc],ECX     ; 005bbc21
    MOV dword ptr [ESP + 0x2d4],ECX     ; 005bbc28
    TEST EAX,EAX                        ; 005bbc2f
    JZ 0x005bbc47                       ; 005bbc31
        ;   XREF to: 005bbc47 (CONDITIONAL_JUMP)  ; LAB_005bbc47
    PUSH 0x6534e6                       ; 005bbc33 | = "ladder\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005bbc38 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005bbc3e | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbc3f
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbc44
    CMP dword ptr [EBX + 0x1fba0],0x0   ; 005bbc47
        ;   Label: LAB_005bbc47
    JZ 0x005bc581                       ; 005bbc4e
        ;   XREF to: 005bc581 (CONDITIONAL_JUMP)  ; LAB_005bc581
    MOV ECX,dword ptr [ESP + 0x2dc]     ; 005bbc54
        ;   Label: LAB_005bbc54
    XOR EDX,EDX                         ; 005bbc5b
    XOR EDI,EDI                         ; 005bbc5d
    XOR ESI,ESI                         ; 005bbc5f
    MOV dword ptr [ESP + 0x2d4],EDX     ; 005bbc61
    TEST ECX,ECX                        ; 005bbc68
    JZ 0x005bbc7f                       ; 005bbc6a
        ;   XREF to: 005bbc7f (CONDITIONAL_JUMP)  ; LAB_005bbc7f
    PUSH 0x6534ee                       ; 005bbc6c | = "pickup\n"
    MOV EAX,[0x0066e8e0]                ; 005bbc71 | g_ConsolePtr | g_CConsolePtr
    PUSH EAX                            ; 005bbc76 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbc77
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbc7c
    PUSH 0x24                           ; 005bbc7f
        ;   Label: LAB_005bbc7f
    LEA EAX,[EBX + 0x158]               ; 005bbc81
    PUSH EAX                            ; 005bbc87
    MOV dword ptr [ESP + 0x2a8],EAX     ; 005bbc88
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bbc8f
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bbc94
    FLD float ptr [ESP + 0x2ec]         ; 005bbc9b
    FLDZ                                ; 005bbca2
    ADD ESP,0x8                         ; 005bbca4
    FCOMPP                              ; 005bbca7
    FNSTSW AX                           ; 005bbca9
    SAHF                                ; 005bbcab
    JNC 0x005bc593                      ; 005bbcac
        ;   XREF to: 005bc593 (CONDITIONAL_JUMP)  ; LAB_005bc593
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbcb2
        ;   Label: LAB_005bbcb2
    XOR EDX,EDX                         ; 005bbcb9
    XOR EDI,EDI                         ; 005bbcbb
    XOR ESI,ESI                         ; 005bbcbd
    MOV dword ptr [ESP + 0x2cc],EDX     ; 005bbcbf
    MOV dword ptr [ESP + 0x2d4],EDX     ; 005bbcc6
    TEST EAX,EAX                        ; 005bbccd
    JZ 0x005bbce5                       ; 005bbccf
        ;   XREF to: 005bbce5 (CONDITIONAL_JUMP)  ; LAB_005bbce5
    PUSH 0x6534f6                       ; 005bbcd1 | = "hurt\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005bbcd6 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005bbcdc | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbcdd
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbce2
    PUSH 0x1c                           ; 005bbce5
        ;   Label: LAB_005bbce5
    LEA EAX,[EBX + 0x158]               ; 005bbce7
    PUSH EAX                            ; 005bbced
    MOV dword ptr [ESP + 0x2a4],EAX     ; 005bbcee
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bbcf5
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bbcfa
    FLD float ptr [ESP + 0x2ec]         ; 005bbd01
    FLDZ                                ; 005bbd08
    ADD ESP,0x8                         ; 005bbd0a
    FCOMPP                              ; 005bbd0d
    FNSTSW AX                           ; 005bbd0f
    SAHF                                ; 005bbd11
    JNC 0x005bc605                      ; 005bbd12
        ;   XREF to: 005bc605 (CONDITIONAL_JUMP)  ; LAB_005bc605
    MOV ECX,dword ptr [ESP + 0x2dc]     ; 005bbd18
        ;   Label: LAB_005bbd18
    XOR EDI,EDI                         ; 005bbd1f
    XOR ESI,ESI                         ; 005bbd21
    MOV dword ptr [ESP + 0x2d4],EDI     ; 005bbd23
    TEST ECX,ECX                        ; 005bbd2a
    JZ 0x005bbd41                       ; 005bbd2c
        ;   XREF to: 005bbd41 (CONDITIONAL_JUMP)  ; LAB_005bbd41
    PUSH 0x6534fc                       ; 005bbd2e | = "door\n"
    MOV EAX,[0x0066e8e0]                ; 005bbd33 | g_ConsolePtr | g_CConsolePtr
    PUSH EAX                            ; 005bbd38 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbd39
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbd3e
    PUSH 0x2e                           ; 005bbd41
        ;   Label: LAB_005bbd41
    LEA EAX,[EBX + 0x158]               ; 005bbd43
    PUSH EAX                            ; 005bbd49
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bbd4a
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bbd4f
    FLD float ptr [ESP + 0x2ec]         ; 005bbd56
    FLDZ                                ; 005bbd5d
    ADD ESP,0x8                         ; 005bbd5f
    FCOMPP                              ; 005bbd62
    FNSTSW AX                           ; 005bbd64
    SAHF                                ; 005bbd66
    JNC 0x005bbda3                      ; 005bbd67
        ;   XREF to: 005bbda3 (CONDITIONAL_JUMP)  ; LAB_005bbda3
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbd69
    XOR EDX,EDX                         ; 005bbd70
    XOR EDI,EDI                         ; 005bbd72
    XOR ESI,ESI                         ; 005bbd74
    MOV dword ptr [ESP + 0x2cc],EDX     ; 005bbd76
    MOV dword ptr [ESP + 0x270],EDX     ; 005bbd7d
    MOV dword ptr [ESP + 0x2d4],EDX     ; 005bbd84
    TEST EAX,EAX                        ; 005bbd8b
    JZ 0x005bbda3                       ; 005bbd8d
        ;   XREF to: 005bbda3 (CONDITIONAL_JUMP)  ; LAB_005bbda3
    PUSH 0x653502                       ; 005bbd8f | = "sitting\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005bbd94 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005bbd9a | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbd9b
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbda0
    CMP dword ptr [EBX + 0x1fc38],0x1   ; 005bbda3
        ;   Label: LAB_005bbda3
    JNZ 0x005bbdcf                      ; 005bbdaa
        ;   XREF to: 005bbdcf (CONDITIONAL_JUMP)  ; LAB_005bbdcf
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbdac
    XOR ESI,ESI                         ; 005bbdb3
    XOR EDI,EDI                         ; 005bbdb5
    TEST EAX,EAX                        ; 005bbdb7
    JZ 0x005bbdcf                       ; 005bbdb9
        ;   XREF to: 005bbdcf (CONDITIONAL_JUMP)  ; LAB_005bbdcf
    PUSH 0x65350b                       ; 005bbdbb | = "stashinventory\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005bbdc0 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005bbdc6 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbdc7
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbdcc
    CMP dword ptr [EBX + 0x1fc38],0x2   ; 005bbdcf
        ;   Label: LAB_005bbdcf
    JNZ 0x005bbdfb                      ; 005bbdd6
        ;   XREF to: 005bbdfb (CONDITIONAL_JUMP)  ; LAB_005bbdfb
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbdd8
    XOR ESI,ESI                         ; 005bbddf
    XOR EDI,EDI                         ; 005bbde1
    TEST EAX,EAX                        ; 005bbde3
    JZ 0x005bbdfb                       ; 005bbde5
        ;   XREF to: 005bbdfb (CONDITIONAL_JUMP)  ; LAB_005bbdfb
    PUSH 0x65351b                       ; 005bbde7 | = "placeobject\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005bbdec | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005bbdf2 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbdf3
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbdf8
    CMP dword ptr [EBX + 0x1fc38],0x6   ; 005bbdfb
        ;   Label: LAB_005bbdfb
    JNZ 0x005bbe27                      ; 005bbe02
        ;   XREF to: 005bbe27 (CONDITIONAL_JUMP)  ; LAB_005bbe27
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbe04
    XOR ESI,ESI                         ; 005bbe0b
    XOR EDI,EDI                         ; 005bbe0d
    TEST EAX,EAX                        ; 005bbe0f
    JZ 0x005bbe27                       ; 005bbe11
        ;   XREF to: 005bbe27 (CONDITIONAL_JUMP)  ; LAB_005bbe27
    PUSH 0x653528                       ; 005bbe13 | = "putdownobject\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005bbe18 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005bbe1e | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbe1f
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbe24
    CMP dword ptr [EBX + 0x1fc38],0x3   ; 005bbe27
        ;   Label: LAB_005bbe27
    JNZ 0x005bbe53                      ; 005bbe2e
        ;   XREF to: 005bbe53 (CONDITIONAL_JUMP)  ; LAB_005bbe53
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbe30
    XOR ESI,ESI                         ; 005bbe37
    XOR EDI,EDI                         ; 005bbe39
    TEST EAX,EAX                        ; 005bbe3b
    JZ 0x005bbe53                       ; 005bbe3d
        ;   XREF to: 005bbe53 (CONDITIONAL_JUMP)  ; LAB_005bbe53
    PUSH 0x653537                       ; 005bbe3f | = "toss\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005bbe44 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005bbe4a | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbe4b
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbe50
    CMP dword ptr [EBX + 0x1fc38],0x7   ; 005bbe53
        ;   Label: LAB_005bbe53
    JNZ 0x005bbe7f                      ; 005bbe5a
        ;   XREF to: 005bbe7f (CONDITIONAL_JUMP)  ; LAB_005bbe7f
    MOV EAX,dword ptr [ESP + 0x2dc]     ; 005bbe5c
    XOR ESI,ESI                         ; 005bbe63
    XOR EDI,EDI                         ; 005bbe65
    TEST EAX,EAX                        ; 005bbe67
    JZ 0x005bbe7f                       ; 005bbe69
        ;   XREF to: 005bbe7f (CONDITIONAL_JUMP)  ; LAB_005bbe7f
    PUSH 0x65353d                       ; 005bbe6b | = "attackmelee\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 005bbe70 | g_ConsolePtr | g_CConsolePtr
    PUSH EDX                            ; 005bbe76 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bbe77
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005bbe7c
    CMP dword ptr [EBX + 0x2598],0x0    ; 005bbe7f
        ;   Label: LAB_005bbe7f
    JNZ 0x005bbeb5                      ; 005bbe86
        ;   XREF to: 005bbeb5 (CONDITIONAL_JUMP)  ; LAB_005bbeb5
    CMP dword ptr [EBX + 0xdc],0x0      ; 005bbe88
    JZ 0x005bbe9c                       ; 005bbe8f
        ;   XREF to: 005bbe9c (CONDITIONAL_JUMP)  ; LAB_005bbe9c
    MOV dword ptr [ESP + 0x270],0x1     ; 005bbe91
    FLD float ptr [EBX + 0x24]          ; 005bbe9c
        ;   Label: LAB_005bbe9c
    FCOMP float ptr [EBX + 0x2414]      ; 005bbe9f
    FNSTSW AX                           ; 005bbea5
    SAHF                                ; 005bbea7
    JZ 0x005bbeb5                       ; 005bbea8
        ;   XREF to: 005bbeb5 (CONDITIONAL_JUMP)  ; LAB_005bbeb5
    MOV dword ptr [ESP + 0x270],0x1     ; 005bbeaa
    FLD float ptr [EBP + 0x18]          ; 005bbeb5
        ;   Label: LAB_005bbeb5
    FMUL double ptr [0x006535e4]        ; 005bbeb8 | DOUBLE_006535e4
    FLD float ptr [EBX + 0x23b4]        ; 005bbebe
    LEA EAX,[EBX + 0x158]               ; 005bbec4
    FSTP float ptr [EBX + 0x2434]       ; 005bbeca
    MOV dword ptr [ESP + 0x28c],EAX     ; 005bbed0
    PUSH EAX                            ; 005bbed7
    FSTP float ptr [EBX + 0x2438]       ; 005bbed8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bbede
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bbee3
    ADD ESP,0x4                         ; 005bbee6
    CMP EAX,0x4                         ; 005bbee9
    JNZ 0x005bc67e                      ; 005bbeec
        ;   XREF to: 005bc67e (CONDITIONAL_JUMP)  ; LAB_005bc67e
    FLD float ptr [EBX + 0x23ac]        ; 005bbef2
        ;   Label: LAB_005bbef2
    FLD ST0                             ; 005bbef8
    FMUL double ptr [0x006535ec]        ; 005bbefa | DOUBLE_006535ec
    FSTP ST1                            ; 005bbf00
    FSTP float ptr [EBX + 0x23ac]       ; 005bbf02
    MOV ECX,dword ptr [EBX + 0x1fbb0]   ; 005bbf08
        ;   Label: LAB_005bbf08
    TEST ECX,ECX                        ; 005bbf0e
    JNZ 0x005bc69f                      ; 005bbf10
        ;   XREF to: 005bc69f (CONDITIONAL_JUMP)  ; LAB_005bc69f
    FLD float ptr [EBP + 0x18]          ; 005bbf16
    FMUL double ptr [0x006535ec]        ; 005bbf19 | DOUBLE_006535ec
    FSUBR float ptr [EBX + 0x1fc44]     ; 005bbf1f
    FST float ptr [EBX + 0x1fc44]       ; 005bbf25
    FLDZ                                ; 005bbf2b
    FCOMPP                              ; 005bbf2d
    FNSTSW AX                           ; 005bbf2f
    SAHF                                ; 005bbf31
    JBE 0x005bbf3a                      ; 005bbf32
        ;   XREF to: 005bbf3a (CONDITIONAL_JUMP)  ; LAB_005bbf3a
    MOV dword ptr [EBX + 0x1fc44],ECX   ; 005bbf34
    MOV EAX,0x1                         ; 005bbf3a
        ;   Label: LAB_005bbf3a
    MOV EDX,dword ptr [EBX + 0x1fbac]   ; 005bbf3f
    MOV dword ptr [ESP + 0x290],EAX     ; 005bbf45
    TEST EDX,EDX                        ; 005bbf4c
    JZ 0x005bc73a                       ; 005bbf4e
        ;   XREF to: 005bc73a (CONDITIONAL_JUMP)  ; LAB_005bc73a
    PUSH 0x2a                           ; 005bbf54
    LEA EAX,[EBX + 0x158]               ; 005bbf56
    PUSH EAX                            ; 005bbf5c
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bbf5d
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bbf62
    FLD float ptr [ESP + 0x2ec]         ; 005bbf69
    FLDZ                                ; 005bbf70
    ADD ESP,0x8                         ; 005bbf72
    FCOMPP                              ; 005bbf75
    FNSTSW AX                           ; 005bbf77
    SAHF                                ; 005bbf79
    JC 0x005bc6d0                       ; 005bbf7a
        ;   XREF to: 005bc6d0 (CONDITIONAL_JUMP)  ; LAB_005bc6d0
    MOV dword ptr [EBX + 0x1fbac],0x0   ; 005bbf80
    FLD float ptr [EBX + 0x1fe64]       ; 005bbf8a
        ;   Label: LAB_005bbf8a
    FLDZ                                ; 005bbf90
    FCOMPP                              ; 005bbf92
    FNSTSW AX                           ; 005bbf94
    SAHF                                ; 005bbf96
    JNC 0x005bc090                      ; 005bbf97
        ;   XREF to: 005bc090 (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBP + 0x18]          ; 005bbf9d
    FCOMP float ptr [EBX + 0x1fe64]     ; 005bbfa0
    FNSTSW AX                           ; 005bbfa6
    SAHF                                ; 005bbfa8
    JNC 0x005bc722                      ; 005bbfa9
        ;   XREF to: 005bc722 (CONDITIONAL_JUMP)  ; LAB_005bc722
    FLD float ptr [EBP + 0x18]          ; 005bbfaf
    FLD ST0                             ; 005bbfb2
    FDIV float ptr [EBX + 0x1fe64]      ; 005bbfb4
    FLD float ptr [EBX + 0x1fe64]       ; 005bbfba
    FSUBRP ST2,ST0                      ; 005bbfc0
    FSTP float ptr [ESP + 0x18]         ; 005bbfc2
    FSTP float ptr [EBX + 0x1fe64]      ; 005bbfc6
    LEA EAX,[EBX + 0x1fe54]             ; 005bbfcc
        ;   Label: LAB_005bbfcc
    FLD float ptr [EAX]                 ; 005bbfd2
    FMUL float ptr [ESP + 0x18]         ; 005bbfd4
    FSTP float ptr [ESP + 0x150]        ; 005bbfd8
    FLD float ptr [EAX + 0x4]           ; 005bbfdf
    FMUL float ptr [ESP + 0x18]         ; 005bbfe2
    FSTP float ptr [ESP + 0x154]        ; 005bbfe6
    FLD float ptr [EAX + 0x8]           ; 005bbfed
    FMUL float ptr [ESP + 0x18]         ; 005bbff0
    FLD float ptr [ESP + 0x18]          ; 005bbff4
    FLD1                                ; 005bbff8
    LEA EDX,[EBX + 0x20]                ; 005bbffa
    FSUBRP                              ; 005bbffd
    FXCH                                ; 005bbfff
    FSTP float ptr [ESP + 0x158]        ; 005bc001
    FLD float ptr [EDX]                 ; 005bc008
    FADD float ptr [ESP + 0x150]        ; 005bc00a
    FLD float ptr [EDX + 0x4]           ; 005bc011
    FXCH                                ; 005bc014
    FSTP float ptr [EDX]                ; 005bc016
    FADD float ptr [ESP + 0x154]        ; 005bc018
    FLD float ptr [EDX + 0x8]           ; 005bc01f
    FXCH                                ; 005bc022
    FSTP float ptr [EDX + 0x4]          ; 005bc024
    FADD float ptr [ESP + 0x158]        ; 005bc027
    FXCH                                ; 005bc02e
    FSTP float ptr [ESP + 0x2b4]        ; 005bc030
    FSTP float ptr [EDX + 0x8]          ; 005bc037
    FLD float ptr [EAX]                 ; 005bc03a
    FMUL float ptr [ESP + 0x2b4]        ; 005bc03c
    FLD float ptr [EAX + 0x4]           ; 005bc043
    FMUL float ptr [ESP + 0x2b4]        ; 005bc046
    FLD float ptr [EAX + 0x8]           ; 005bc04d
    FMUL float ptr [ESP + 0x2b4]        ; 005bc050
    FXCH ST2                            ; 005bc057
    FSTP float ptr [EAX]                ; 005bc059
    FSTP float ptr [EAX + 0x4]          ; 005bc05b
    FSTP float ptr [EAX + 0x8]          ; 005bc05e
    FLD float ptr [EBX + 0x1fe60]       ; 005bc061
    FSUB float ptr [EBX + 0x34]         ; 005bc067
    SUB ESP,0x4                         ; 005bc06a
    FSTP float ptr [ESP]                ; 005bc06d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005bc070
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bc075
    FLD float ptr [ESP + 0x2e8]         ; 005bc07c
    ADD ESP,0x4                         ; 005bc083
    FMUL float ptr [ESP + 0x18]         ; 005bc086
    FSTP float ptr [EBX + 0x2418]       ; 005bc08a
    LEA EAX,[EBX + 0x158]               ; 005bc090
        ;   Label: caseD_6
    PUSH EAX                            ; 005bc096
    MOV dword ptr [ESP + 0x28c],EAX     ; 005bc097
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bc09e
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bc0a3
    ADD ESP,0x4                         ; 005bc0a6
    CMP EAX,0x1b                        ; 005bc0a9
    JNZ 0x005bc103                      ; 005bc0ac
        ;   XREF to: 005bc103 (CONDITIONAL_JUMP)  ; LAB_005bc103
    MOV EDX,dword ptr [0x008223e0]      ; 005bc0ae | g_CAmmoBoxClassInfo.name_hash
    PUSH EDX                            ; 005bc0b4
    MOV ECX,dword ptr [EBX + 0x1fba0]   ; 005bc0b5
    PUSH ECX                            ; 005bc0bb
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005bc0bc
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x288],EAX     ; 005bc0c1
    ADD ESP,0x8                         ; 005bc0c8
    TEST EAX,EAX                        ; 005bc0cb
    JZ 0x005bc103                       ; 005bc0cd
        ;   XREF to: 005bc103 (CONDITIONAL_JUMP)  ; LAB_005bc103
    MOV EDX,dword ptr [ESP + 0x288]     ; 005bc0cf
    PUSH EDX                            ; 005bc0d6
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 005bc0d7
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bc0dc
    FLD float ptr [ESP + 0x2e8]         ; 005bc0e3
    ADD ESP,0x4                         ; 005bc0ea
    SUB ESP,0x4                         ; 005bc0ed
    MOV ECX,dword ptr [ESP + 0x284]     ; 005bc0f0
    FSTP float ptr [ESP]                ; 005bc0f7
    PUSH ECX                            ; 005bc0fa
    CALL core_ammobox.cpp_CAmmoBox_FUN_00411690 ; 005bc0fb
        ;   XREF to: 00411690 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_FUN_00411690(CAmmoBox * this_ptr)
    ADD ESP,0x8                         ; 005bc100
    PUSH EBX                            ; 005bc103
        ;   Label: LAB_005bc103
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 005bc104
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005bc109
    PUSH dword ptr [EBP + 0x18]         ; 005bc10c
    PUSH EBX                            ; 005bc10f
    CALL core_stranger.cpp_CStranger_FUN_005bf800 ; 005bc110
        ;   XREF to: 005bf800 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005bf800(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bc115
    CMP dword ptr [ESP + 0x290],0x0     ; 005bc118
    JZ 0x005bc13a                       ; 005bc120
        ;   XREF to: 005bc13a (CONDITIONAL_JUMP)  ; LAB_005bc13a
    LEA EAX,[EBX + 0x1fc78]             ; 005bc122
    MOV dword ptr [EAX + 0x8],0x0       ; 005bc128
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bc12f
    MOV dword ptr [EAX + 0x4],EDX       ; 005bc132
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bc135
    MOV dword ptr [EAX],EDX             ; 005bc138
    CMP dword ptr [EBX + 0x1fbac],0x0   ; 005bc13a
        ;   Label: LAB_005bc13a
    JZ 0x005bd4ed                       ; 005bc141
        ;   XREF to: 005bd4ed (CONDITIONAL_JUMP)  ; LAB_005bd4ed
    LEA EAX,[EBX + 0x23ac]              ; 005bc147
        ;   Label: LAB_005bc147
    PUSH EAX                            ; 005bc14d
    MOV dword ptr [ESP + 0x278],EAX     ; 005bc14e
    LEA EAX,[ESP + 0x148]               ; 005bc155
    PUSH EAX                            ; 005bc15c
    PUSH EBX                            ; 005bc15d
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 005bc15e
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 005bc163
    LEA EAX,[EBX + 0x20]                ; 005bc165
    FLD float ptr [EDX]                 ; 005bc168
    FADD float ptr [EAX]                ; 005bc16a
    FSTP float ptr [EAX]                ; 005bc16c
    FLD float ptr [EDX + 0x4]           ; 005bc16e
    FADD float ptr [EAX + 0x4]          ; 005bc171
    FSTP float ptr [EAX + 0x4]          ; 005bc174
    FLD float ptr [EDX + 0x8]           ; 005bc177
    FADD float ptr [EAX + 0x8]          ; 005bc17a
    ADD ESP,0xc                         ; 005bc17d
    FSTP float ptr [EAX + 0x8]          ; 005bc180
    MOV EAX,dword ptr [ESP + 0x274]     ; 005bc183
    MOV dword ptr [EAX + 0x8],0x0       ; 005bc18a
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bc191
    MOV dword ptr [EAX + 0x4],EDX       ; 005bc194
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bc197
    MOV dword ptr [EAX],EDX             ; 005bc19a
    MOV dword ptr [EBX + 0x1fc90],0x0   ; 005bc19c
        ;   Label: LAB_005bc19c
    LEA EAX,[EBX + 0x1fc78]             ; 005bc1a6
        ;   Label: LAB_005bc1a6
    MOV dword ptr [EAX + 0x8],0x0       ; 005bc1ac
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bc1b3
    MOV dword ptr [EAX + 0x4],EDX       ; 005bc1b6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bc1b9
    MOV dword ptr [EAX],EDX             ; 005bc1bc
    CMP dword ptr [ESP + 0x2d4],0x0     ; 005bc1be
    JZ 0x005bc278                       ; 005bc1c6
        ;   XREF to: 005bc278 (CONDITIONAL_JUMP)  ; LAB_005bc278
    CMP dword ptr [EBX + 0xbe44],0x0    ; 005bc1cc
    JZ 0x005bc216                       ; 005bc1d3
        ;   XREF to: 005bc216 (CONDITIONAL_JUMP)  ; LAB_005bc216
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005bc1d5
    JZ 0x005bdbe1                       ; 005bc1dc
        ;   XREF to: 005bdbe1 (CONDITIONAL_JUMP)  ; LAB_005bdbe1
    MOV EAX,[0x0067b654]                ; 005bc1e2 | g_CGameInstance | g_CGamePtr
    MOV dword ptr [EBX + 0x1fbd4],0x0   ; 005bc1e7
    CMP dword ptr [EAX + 0x244],0x0     ; 005bc1f1 | g_CGameInstance.auto_save_blocked
    JZ 0x005bc216                       ; 005bc1f8
        ;   XREF to: 005bc216 (CONDITIONAL_JUMP)  ; LAB_005bc216
    PUSH 0x653593                       ; 005bc1fa | = "flashlit.wav"
    MOV dword ptr [EAX + 0x244],0x0     ; 005bc1ff | g_CGameInstance.auto_save_blocked
    PUSH EBX                            ; 005bc209
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bc20a
    CALL dword ptr [EAX + 0x24]         ; 005bc210
    ADD ESP,0x8                         ; 005bc213
    CMP dword ptr [EBX + 0xbe40],0x0    ; 005bc216
        ;   Label: LAB_005bc216
    JZ 0x005bc278                       ; 005bc21d
        ;   XREF to: 005bc278 (CONDITIONAL_JUMP)  ; LAB_005bc278
    LEA EAX,[EBX + 0x1f738]             ; 005bc21f
    MOV EAX,dword ptr [EAX + 0x330]     ; 005bc225
    TEST EAX,EAX                        ; 005bc22b
    JZ 0x005bc278                       ; 005bc22d
        ;   XREF to: 005bc278 (CONDITIONAL_JUMP)  ; LAB_005bc278
    CMP dword ptr [EAX + 0x2f0],0x0     ; 005bc22f
    JZ 0x005bc278                       ; 005bc236
        ;   XREF to: 005bc278 (CONDITIONAL_JUMP)  ; LAB_005bc278
    MOV EAX,[0x0067b654]                ; 005bc238 | g_CGamePtr
    CMP dword ptr [EAX + 0x244],0x0     ; 005bc23d | g_CGameInstance.auto_save_blocked
    SETZ AL                             ; 005bc244
    MOV EDX,EAX                         ; 005bc247
    MOV EAX,[0x0067b654]                ; 005bc249 | g_CGamePtr
    AND EDX,0xff                        ; 005bc24e
    MOV dword ptr [EAX + 0x244],EDX     ; 005bc254 | g_CGameInstance.auto_save_blocked
    JZ 0x005bc266                       ; 005bc25a
        ;   XREF to: 005bc266 (CONDITIONAL_JUMP)  ; LAB_005bc266
    MOV dword ptr [EBX + 0x1fbd4],0x1   ; 005bc25c
    PUSH 0x6535a0                       ; 005bc266 | = "flashlit.wav"
        ;   Label: LAB_005bc266
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bc26b
    PUSH EBX                            ; 005bc271
    CALL dword ptr [EAX + 0x24]         ; 005bc272
    ADD ESP,0x8                         ; 005bc275
    LEA EAX,[EBX + 0x1f738]             ; 005bc278
        ;   Label: LAB_005bc278
    MOV EAX,dword ptr [EAX + 0x330]     ; 005bc27e
    TEST EAX,EAX                        ; 005bc284
    JNZ 0x005bdbf0                      ; 005bc286
        ;   XREF to: 005bdbf0 (CONDITIONAL_JUMP)  ; LAB_005bdbf0
    MOV EAX,[0x0067b654]                ; 005bc28c | g_CGameInstance | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x0     ; 005bc291 | g_CGameInstance.auto_save_blocked
    CMP dword ptr [ESP + 0x2cc],0x0     ; 005bc29b
        ;   Label: LAB_005bc29b
    JZ 0x005bc2b1                       ; 005bc2a3
        ;   XREF to: 005bc2b1 (CONDITIONAL_JUMP)  ; LAB_005bc2b1
    PUSH dword ptr [EBP + 0x18]         ; 005bc2a5
    PUSH EBX                            ; 005bc2a8
    CALL core_stranger.cpp_CStranger_FUN_005c5270 ; 005bc2a9
        ;   XREF to: 005c5270 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c5270(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bc2ae
    MOV EDX,dword ptr [EBX + 0x1fbd4]   ; 005bc2b1
        ;   Label: LAB_005bc2b1
    TEST EDX,EDX                        ; 005bc2b7
    JZ 0x005bdc0e                       ; 005bc2b9
        ;   XREF to: 005bdc0e (CONDITIONAL_JUMP)  ; LAB_005bdc0e
    FLD float ptr [EBP + 0x18]          ; 005bc2bf
    FDIV float ptr [0x0066372c]         ; 005bc2c2 | FLOAT_0066372c
    FADD float ptr [EBX + 0x1fbd8]      ; 005bc2c8
    FST float ptr [EBX + 0x1fbd8]       ; 005bc2ce
    FLD1                                ; 005bc2d4
    FCOMPP                              ; 005bc2d6
    FNSTSW AX                           ; 005bc2d8
    SAHF                                ; 005bc2da
    JNC 0x005bc2e7                      ; 005bc2db
        ;   XREF to: 005bc2e7 (CONDITIONAL_JUMP)  ; LAB_005bc2e7
    MOV dword ptr [EBX + 0x1fbd8],0x3f800000 ; 005bc2dd
    FLD float ptr [EBP + 0x18]          ; 005bc2e7
        ;   Label: LAB_005bc2e7
    FDIV float ptr [0x00663734]         ; 005bc2ea | FLOAT_00663734
    FSUBR float ptr [EBX + 0x1fbf8]     ; 005bc2f0
    MOV dword ptr [EBX + 0x1fbdc],0x0   ; 005bc2f6
    FST float ptr [EBX + 0x1fbf8]       ; 005bc300
    FLDZ                                ; 005bc306
    FCOMPP                              ; 005bc308
    FNSTSW AX                           ; 005bc30a
    SAHF                                ; 005bc30c
    JC 0x005bc319                       ; 005bc30d
        ;   XREF to: 005bc319 (CONDITIONAL_JUMP)  ; LAB_005bc319
    MOV dword ptr [EBX + 0x1fbf8],0x0   ; 005bc30f
    FLD float ptr [EBP + 0x18]          ; 005bc319
        ;   Label: LAB_005bc319
    FDIV float ptr [0x00663734]         ; 005bc31c | FLOAT_00663734
    FSUBR float ptr [EBX + 0x1fc18]     ; 005bc322
    FST float ptr [EBX + 0x1fc18]       ; 005bc328
    FLDZ                                ; 005bc32e
    FCOMPP                              ; 005bc330
    FNSTSW AX                           ; 005bc332
    SAHF                                ; 005bc334
    JC 0x005bc341                       ; 005bc335
        ;   XREF to: 005bc341 (CONDITIONAL_JUMP)  ; LAB_005bc341
    MOV dword ptr [EBX + 0x1fc18],0x0   ; 005bc337
    TEST EDI,EDI                        ; 005bc341
        ;   Label: LAB_005bc341
    JZ 0x005bc34e                       ; 005bc343
        ;   XREF to: 005bc34e (CONDITIONAL_JUMP)  ; LAB_005bc34e
    PUSH EBX                            ; 005bc345
    CALL core_stranger.cpp_CStranger_FUN_005c5b90 ; 005bc346
        ;   XREF to: 005c5b90 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c5b90(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005bc34b
    PUSH EBX                            ; 005bc34e
        ;   Label: LAB_005bc34e
    CALL core_stranger.cpp_CStranger_FUN_005be520 ; 005bc34f
        ;   XREF to: 005be520 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005be520(CStranger * this_ptr)
    MOV ECX,dword ptr [EBX + 0x1f734]   ; 005bc354
    ADD ESP,0x4                         ; 005bc35a
    CMP ECX,0x2                         ; 005bc35d
    JNZ 0x005bc3a1                      ; 005bc360
        ;   XREF to: 005bc3a1 (CONDITIONAL_JUMP)  ; LAB_005bc3a1
    MOV EDI,dword ptr [EBX + 0x1fc2c]   ; 005bc362
    TEST EDI,EDI                        ; 005bc368
    JZ 0x005bc3a1                       ; 005bc36a
        ;   XREF to: 005bc3a1 (CONDITIONAL_JUMP)  ; LAB_005bc3a1
    CMP dword ptr [EDI + 0x2e0],0x0     ; 005bc36c
    JNZ 0x005bc3a1                      ; 005bc373
        ;   XREF to: 005bc3a1 (CONDITIONAL_JUMP)  ; LAB_005bc3a1
    LEA EAX,[EBX + 0x158]               ; 005bc375
    PUSH EAX                            ; 005bc37b
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 005bc37c
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bc381
    PUSH 0x0                            ; 005bc384
    PUSH EBX                            ; 005bc386
    CALL core_stranger.cpp_CStranger_FUN_005c06b0 ; 005bc387
        ;   XREF to: 005c06b0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c06b0(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bc38c
    PUSH EBX                            ; 005bc38f
    CALL core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 ; 005bc390
        ;   XREF to: 005c4370 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005bc395
    PUSH EBX                            ; 005bc398
    CALL core_stranger.cpp_CStranger_FUN_005be520 ; 005bc399
        ;   XREF to: 005be520 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005be520(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005bc39e
    PUSH ESI                            ; 005bc3a1
        ;   Label: LAB_005bc3a1
    PUSH dword ptr [EBP + 0x18]         ; 005bc3a2
    PUSH EBX                            ; 005bc3a5
    CALL core_stranger.cpp_CStranger_FUN_005c4c20 ; 005bc3a6
        ;   XREF to: 005c4c20 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c4c20(CStranger * this_ptr)
    ADD ESP,0xc                         ; 005bc3ab
    PUSH EBX                            ; 005bc3ae
    CALL core_stranger.cpp_CStranger_FUN_005c6220 ; 005bc3af
        ;   XREF to: 005c6220 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c6220(CStranger * this_ptr)
    ADD ESP,0x4                         ; 005bc3b4
    PUSH dword ptr [EBP + 0x18]         ; 005bc3b7
    PUSH EBX                            ; 005bc3ba
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005bc3bb
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 005bc3c0
    PUSH 0x6                            ; 005bc3c3
    LEA ESI,[EBX + 0x158]               ; 005bc3c5
    PUSH ESI                            ; 005bc3cb
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bc3cc
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bc3d1
    FLD float ptr [ESP + 0x2ec]         ; 005bc3d8
    FLDZ                                ; 005bc3df
    ADD ESP,0x8                         ; 005bc3e1
    FCOMPP                              ; 005bc3e4
    FNSTSW AX                           ; 005bc3e6
    SAHF                                ; 005bc3e8
    JNC 0x005bdc3b                      ; 005bc3e9
        ;   XREF to: 005bdc3b (CONDITIONAL_JUMP)  ; LAB_005bdc3b
    PUSH ESI                            ; 005bc3ef
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 005bc3f0
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bc3f5
    FLD float ptr [ESP + 0x2e8]         ; 005bc3fc
    FLD1                                ; 005bc403
    ADD ESP,0x4                         ; 005bc405
    FCOMPP                              ; 005bc408
    FNSTSW AX                           ; 005bc40a
    SAHF                                ; 005bc40c
    JNC 0x005bc4d4                      ; 005bc40d
        ;   XREF to: 005bc4d4 (CONDITIONAL_JUMP)  ; LAB_005bc4d4
    MOV ECX,dword ptr [0x008229e8]      ; 005bc413 | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 005bc419
    MOV ESI,dword ptr [EBX + 0x1fba4]   ; 005bc41a
    PUSH ESI                            ; 005bc420
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005bc421
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 005bc426
    ADD ESP,0x8                         ; 005bc428
    TEST EAX,EAX                        ; 005bc42b
    JZ 0x005bc4d4                       ; 005bc42d
        ;   XREF to: 005bc4d4 (CONDITIONAL_JUMP)  ; LAB_005bc4d4
    LEA EAX,[ESP + 0x1a4]               ; 005bc433
    PUSH EAX                            ; 005bc43a
    PUSH EBX                            ; 005bc43b
    CALL core_stranger.cpp_CStranger_FUN_005be490 ; 005bc43c
        ;   XREF to: 005be490 (UNCONDITIONAL_CALL)  ; float * core_stranger.cpp_CStranger_FUN_005be490(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bc441
    LEA EAX,[ESP + 0x1a4]               ; 005bc444
    PUSH EAX                            ; 005bc44b
    LEA EAX,[ESP + 0xe8]                ; 005bc44c
    PUSH EAX                            ; 005bc453
    PUSH EBX                            ; 005bc454
    XOR EDI,EDI                         ; 005bc455
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005bc457
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005bc45c
    LEA EAX,[ESP + 0xf0]                ; 005bc45f
    FLD float ptr [ESP + 0xe4]          ; 005bc466
    FLD float ptr [ESP + 0xec]          ; 005bc46d
    MOV dword ptr [ESP + 0xf4],EDI      ; 005bc474
    PUSH EAX                            ; 005bc47b
    LEA EAX,[ESP + 0x100]               ; 005bc47c
    FXCH                                ; 005bc483
    FSUB float ptr [ESP + 0xc4]         ; 005bc485
    FXCH                                ; 005bc48c
    FSUB float ptr [ESP + 0xcc]         ; 005bc48e
    PUSH EAX                            ; 005bc495
    FXCH                                ; 005bc496
    FSTP float ptr [ESP + 0xf8]         ; 005bc498
    PUSH EBX                            ; 005bc49f
    FSTP float ptr [ESP + 0x104]        ; 005bc4a0
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 005bc4a7
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    FLD float ptr [EAX + 0x8]           ; 005bc4ac
    FLDZ                                ; 005bc4af
    ADD ESP,0xc                         ; 005bc4b1
    FCOMPP                              ; 005bc4b4
    FNSTSW AX                           ; 005bc4b6
    SAHF                                ; 005bc4b8
    JNC 0x005bc4d4                      ; 005bc4b9
        ;   XREF to: 005bc4d4 (CONDITIONAL_JUMP)  ; LAB_005bc4d4
    LEA EAX,[ESP + 0xf0]                ; 005bc4bb
    PUSH EAX                            ; 005bc4c2
    LEA EAX,[ESP + 0xc4]                ; 005bc4c3
    PUSH EAX                            ; 005bc4ca
    PUSH ESI                            ; 005bc4cb
    CALL core_boxactor.cpp_CBoxActor_FUN_00422390 ; 005bc4cc
        ;   XREF to: 00422390 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_FUN_00422390(CBoxActor * this_ptr)
    ADD ESP,0xc                         ; 005bc4d1
    PUSH 0x0                            ; 005bc4d4
        ;   Label: LAB_005bc4d4
    PUSH EBX                            ; 005bc4d6
    CALL core_stranger.cpp_CStranger_FUN_005c06b0 ; 005bc4d7
        ;   XREF to: 005c06b0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c06b0(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bc4dc
    PUSH dword ptr [EBP + 0x18]         ; 005bc4df
    PUSH 0x0                            ; 005bc4e2
    PUSH EBX                            ; 005bc4e4
    CALL core_stranger.cpp_CStranger_FUN_005c3960 ; 005bc4e5
        ;   XREF to: 005c3960 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c3960(CStranger * this_ptr)
    ADD ESP,0xc                         ; 005bc4ea
    PUSH dword ptr [EBP + 0x18]         ; 005bc4ed
    PUSH 0x1                            ; 005bc4f0
    PUSH EBX                            ; 005bc4f2
    CALL core_stranger.cpp_CStranger_FUN_005c3960 ; 005bc4f3
        ;   XREF to: 005c3960 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c3960(CStranger * this_ptr)
    ADD ESP,0xc                         ; 005bc4f8
    PUSH dword ptr [EBP + 0x18]         ; 005bc4fb
    PUSH EBX                            ; 005bc4fe
    CALL core_stranger.cpp_CStranger_FUN_005c5f10 ; 005bc4ff
        ;   XREF to: 005c5f10 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c5f10(CStranger * this_ptr)
    ADD ESP,0x8                         ; 005bc504
    LEA EAX,[EBX + 0x1f738]             ; 005bc507
    PUSH EAX                            ; 005bc50d
    CALL core_inv.cpp_CInventory_updateInventory_FUN_004ffad0 ; 005bc50e
        ;   XREF to: 004ffad0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateInventory_FUN_004ffad0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 005bc513
    PUSH dword ptr [EBP + 0x18]         ; 005bc516
    PUSH EBX                            ; 005bc519
    CALL core_stranger.cpp_CStranger_FUN_005c6590 ; 005bc51a
        ;   XREF to: 005c6590 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c6590(CStranger * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005bc51f
    ADD ESP,0x8                         ; 005bc525
    TEST EAX,EAX                        ; 005bc528
    JZ 0x005bc53f                       ; 005bc52a
        ;   XREF to: 005bc53f (CONDITIONAL_JUMP)  ; LAB_005bc53f
    CMP dword ptr [EAX + 0xfc],0x0      ; 005bc52c
    JZ 0x005bc53f                       ; 005bc533
        ;   XREF to: 005bc53f (CONDITIONAL_JUMP)  ; LAB_005bc53f
    MOV dword ptr [EBX + 0xfc],0x1      ; 005bc535
    MOV ECX,dword ptr [EBX + 0x1fc48]   ; 005bc53f
        ;   Label: LAB_005bc53f
    PUSH ECX                            ; 005bc545
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005bc546
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005bc54b
    TEST EAX,EAX                        ; 005bc54e
    JZ 0x005bdc8f                       ; 005bc550
        ;   XREF to: 005bdc8f (CONDITIONAL_JUMP)  ; LAB_005bdc8f
    MOV EAX,[0x0067b654]                ; 005bc556 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x240],0x0     ; 005bc55b | g_CGameInstance.block_auto_save
    JZ 0x005bdc49                       ; 005bc562
        ;   XREF to: 005bdc49 (CONDITIONAL_JUMP)  ; LAB_005bdc49
    MOV ESP,EBP                         ; 005bc568
        ;   Label: LAB_005bc568
    POP EBP                             ; 005bc56a
    POP EDI                             ; 005bc56b
    POP ESI                             ; 005bc56c
    POP EBX                             ; 005bc56d
    RET                                 ; 005bc56e
    CMP dword ptr [EBX + 0x1fc28],0x0   ; 005bc56f
        ;   Label: LAB_005bc56f
    JNZ 0x005bbc0d                      ; 005bc576
        ;   XREF to: 005bbc0d (CONDITIONAL_JUMP)  ; LAB_005bbc0d
    JMP 0x005bbc47                      ; 005bc57c
        ;   XREF to: 005bbc47 (UNCONDITIONAL_JUMP)  ; LAB_005bbc47
    CMP dword ptr [EBX + 0x1fc38],0x4   ; 005bc581
        ;   Label: LAB_005bc581
    JZ 0x005bbc54                       ; 005bc588
        ;   XREF to: 005bbc54 (CONDITIONAL_JUMP)  ; LAB_005bbc54
    JMP 0x005bbc7f                      ; 005bc58e
        ;   XREF to: 005bbc7f (UNCONDITIONAL_JUMP)  ; LAB_005bbc7f
    PUSH 0x28                           ; 005bc593
        ;   Label: LAB_005bc593
    MOV ECX,dword ptr [ESP + 0x2a4]     ; 005bc595
    PUSH ECX                            ; 005bc59c
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bc59d
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bc5a2
    FLD float ptr [ESP + 0x2ec]         ; 005bc5a9
    FLDZ                                ; 005bc5b0
    ADD ESP,0x8                         ; 005bc5b2
    FCOMPP                              ; 005bc5b5
    FNSTSW AX                           ; 005bc5b7
    SAHF                                ; 005bc5b9
    JC 0x005bbcb2                       ; 005bc5ba
        ;   XREF to: 005bbcb2 (CONDITIONAL_JUMP)  ; LAB_005bbcb2
    PUSH 0x29                           ; 005bc5c0
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 005bc5c2
    PUSH EAX                            ; 005bc5c9
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bc5ca
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bc5cf
    FLD float ptr [ESP + 0x2ec]         ; 005bc5d6
    FLDZ                                ; 005bc5dd
    ADD ESP,0x8                         ; 005bc5df
    FCOMPP                              ; 005bc5e2
    FNSTSW AX                           ; 005bc5e4
    SAHF                                ; 005bc5e6
    JC 0x005bbcb2                       ; 005bc5e7
        ;   XREF to: 005bbcb2 (CONDITIONAL_JUMP)  ; LAB_005bbcb2
    FLD float ptr [EBX + 0x243c]        ; 005bc5ed
    FLDZ                                ; 005bc5f3
    FCOMPP                              ; 005bc5f5
    FNSTSW AX                           ; 005bc5f7
    SAHF                                ; 005bc5f9
    JNC 0x005bbcb2                      ; 005bc5fa
        ;   XREF to: 005bbcb2 (CONDITIONAL_JUMP)  ; LAB_005bbcb2
    JMP 0x005bbce5                      ; 005bc600
        ;   XREF to: 005bbce5 (UNCONDITIONAL_JUMP)  ; LAB_005bbce5
    PUSH 0x1d                           ; 005bc605
        ;   Label: LAB_005bc605
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 005bc607
    PUSH EAX                            ; 005bc60e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bc60f
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bc614
    FLD float ptr [ESP + 0x2ec]         ; 005bc61b
    FLDZ                                ; 005bc622
    ADD ESP,0x8                         ; 005bc624
    FCOMPP                              ; 005bc627
    FNSTSW AX                           ; 005bc629
    SAHF                                ; 005bc62b
    JC 0x005bbd18                       ; 005bc62c
        ;   XREF to: 005bbd18 (CONDITIONAL_JUMP)  ; LAB_005bbd18
    PUSH 0x1e                           ; 005bc632
    MOV EDX,dword ptr [ESP + 0x2a0]     ; 005bc634
    PUSH EDX                            ; 005bc63b
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bc63c
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bc641
    FLD float ptr [ESP + 0x2ec]         ; 005bc648
    FLDZ                                ; 005bc64f
    ADD ESP,0x8                         ; 005bc651
    FCOMPP                              ; 005bc654
    FNSTSW AX                           ; 005bc656
    SAHF                                ; 005bc658
    JC 0x005bbd18                       ; 005bc659
        ;   XREF to: 005bbd18 (CONDITIONAL_JUMP)  ; LAB_005bbd18
    CMP dword ptr [EBX + 0x1fc38],0x5   ; 005bc65f
    JZ 0x005bbd18                       ; 005bc666
        ;   XREF to: 005bbd18 (CONDITIONAL_JUMP)  ; LAB_005bbd18
    CMP dword ptr [EBX + 0x1fb9c],0x0   ; 005bc66c
    JNZ 0x005bbd18                      ; 005bc673
        ;   XREF to: 005bbd18 (CONDITIONAL_JUMP)  ; LAB_005bbd18
    JMP 0x005bbd41                      ; 005bc679
        ;   XREF to: 005bbd41 (UNCONDITIONAL_JUMP)  ; LAB_005bbd41
    MOV EDX,dword ptr [ESP + 0x28c]     ; 005bc67e
        ;   Label: LAB_005bc67e
    PUSH EDX                            ; 005bc685
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bc686
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bc68b
    ADD ESP,0x4                         ; 005bc68e
    CMP EAX,0x5                         ; 005bc691
    JZ 0x005bbef2                       ; 005bc694
        ;   XREF to: 005bbef2 (CONDITIONAL_JUMP)  ; LAB_005bbef2
    JMP 0x005bbf08                      ; 005bc69a
        ;   XREF to: 005bbf08 (UNCONDITIONAL_JUMP)  ; LAB_005bbf08
    FLD float ptr [EBP + 0x18]          ; 005bc69f
        ;   Label: LAB_005bc69f
    FMUL double ptr [0x006535ec]        ; 005bc6a2 | DOUBLE_006535ec
    FADD float ptr [EBX + 0x1fc44]      ; 005bc6a8
    FST float ptr [EBX + 0x1fc44]       ; 005bc6ae
    FLD1                                ; 005bc6b4
    FCOMPP                              ; 005bc6b6
    FNSTSW AX                           ; 005bc6b8
    SAHF                                ; 005bc6ba
    JNC 0x005bbf3a                      ; 005bc6bb
        ;   XREF to: 005bbf3a (CONDITIONAL_JUMP)  ; LAB_005bbf3a
    MOV dword ptr [EBX + 0x1fc44],0x3f800000 ; 005bc6c1
    JMP 0x005bbf3a                      ; 005bc6cb
        ;   XREF to: 005bbf3a (UNCONDITIONAL_JUMP)  ; LAB_005bbf3a
    MOV EAX,dword ptr [EBX + 0x1fbac]   ; 005bc6d0
        ;   Label: LAB_005bc6d0
    ADD EAX,0x2d4                       ; 005bc6d6
    PUSH EAX                            ; 005bc6db
    LEA EAX,[ESP + 0x1cc]               ; 005bc6dc
    PUSH EAX                            ; 005bc6e3
    MOV EDX,dword ptr [EBX + 0x1fbac]   ; 005bc6e4
    PUSH EDX                            ; 005bc6ea
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005bc6eb
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX + 0x4]           ; 005bc6f0
    FADD double ptr [0x00653654]        ; 005bc6f3 | DOUBLE_00653654
    ADD ESP,0xc                         ; 005bc6f9
    FLD float ptr [EBX + 0x24]          ; 005bc6fc
    FCOMPP                              ; 005bc6ff
    FNSTSW AX                           ; 005bc701
    SAHF                                ; 005bc703
    JBE 0x005bbf8a                      ; 005bc704
        ;   XREF to: 005bbf8a (CONDITIONAL_JUMP)  ; LAB_005bbf8a
    PUSH 0x1                            ; 005bc70a
    PUSH 0x0                            ; 005bc70c
    LEA EAX,[EBX + 0x158]               ; 005bc70e
    PUSH EAX                            ; 005bc714
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bc715
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bc71a
    JMP 0x005bbf8a                      ; 005bc71d
        ;   XREF to: 005bbf8a (UNCONDITIONAL_JUMP)  ; LAB_005bbf8a
    MOV ECX,0x3f800000                  ; 005bc722
        ;   Label: LAB_005bc722
    MOV dword ptr [EBX + 0x1fe64],0x0   ; 005bc727
    MOV dword ptr [ESP + 0x18],ECX      ; 005bc731
    JMP 0x005bbfcc                      ; 005bc735
        ;   XREF to: 005bbfcc (UNCONDITIONAL_JUMP)  ; LAB_005bbfcc
    CMP dword ptr [EBX + 0x1fc28],0x0   ; 005bc73a
        ;   Label: LAB_005bc73a
    JNZ 0x005bc962                      ; 005bc741
        ;   XREF to: 005bc962 (CONDITIONAL_JUMP)  ; LAB_005bc962
    MOV EAX,dword ptr [EBX + 0x1fbb0]   ; 005bc747
    TEST EAX,EAX                        ; 005bc74d
    JNZ 0x005bcb17                      ; 005bc74f
        ;   XREF to: 005bcb17 (CONDITIONAL_JUMP)  ; LAB_005bcb17
    MOV EDX,dword ptr [EBX + 0x2598]    ; 005bc755
    TEST EDX,EDX                        ; 005bc75b
    JZ 0x005bcef3                       ; 005bc75d
        ;   XREF to: 005bcef3 (CONDITIONAL_JUMP)  ; LAB_005bcef3
    CMP dword ptr [EBX + 0x259c],0x0    ; 005bc763
    JNZ 0x005bc851                      ; 005bc76a
        ;   XREF to: 005bc851 (CONDITIONAL_JUMP)  ; LAB_005bc851
    LEA EAX,[EDX + 0x20]                ; 005bc770
    PUSH EAX                            ; 005bc773
    LEA EAX,[ESP + 0x190]               ; 005bc774
    PUSH EAX                            ; 005bc77b
    PUSH EBX                            ; 005bc77c
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005bc77d
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005bc782
    PUSH EAX                            ; 005bc785
    LEA EAX,[ESP + 0x118]               ; 005bc786
    PUSH EAX                            ; 005bc78d
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005bc78e
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005bc793
    PUSH dword ptr [EAX + 0x4]          ; 005bc796
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005bc799
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bc79e
    FLD float ptr [ESP + 0x2e8]         ; 005bc7a5
    ADD ESP,0x4                         ; 005bc7ac
    FST float ptr [ESP + 0x20]          ; 005bc7af
    FCOMP double ptr [0x00653624]       ; 005bc7b3 | DOUBLE_00653624
    FNSTSW AX                           ; 005bc7b9
    SAHF                                ; 005bc7bb
    JNC 0x005bc7cc                      ; 005bc7bc
        ;   XREF to: 005bc7cc (CONDITIONAL_JUMP)  ; LAB_005bc7cc
    FLD float ptr [ESP + 0x20]          ; 005bc7be
    FADD float ptr [0x0065362c]         ; 005bc7c2 | FLOAT_0065362c
    FSTP float ptr [ESP + 0x20]         ; 005bc7c8
    FLD float ptr [ESP + 0x20]          ; 005bc7cc
        ;   Label: LAB_005bc7cc
    FCOMP double ptr [0x00653634]       ; 005bc7d0 | DOUBLE_00653634
    FNSTSW AX                           ; 005bc7d6
    SAHF                                ; 005bc7d8
    JBE 0x005bc7e9                      ; 005bc7d9
        ;   XREF to: 005bc7e9 (CONDITIONAL_JUMP)  ; LAB_005bc7e9
    FLD float ptr [ESP + 0x20]          ; 005bc7db
    FADD float ptr [0x0065363c]         ; 005bc7df | FLOAT_0065363c
    FSTP float ptr [ESP + 0x20]         ; 005bc7e5
    FLD float ptr [EBP + 0x18]          ; 005bc7e9
        ;   Label: LAB_005bc7e9
    FMUL double ptr [0x0065361c]        ; 005bc7ec | DOUBLE_0065361c
    FLD float ptr [ESP + 0x20]          ; 005bc7f2
    FXCH                                ; 005bc7f6
    FST float ptr [ESP + 0x2a8]         ; 005bc7f8
    FCHS                                ; 005bc7ff
    FSTP float ptr [ESP + 0x284]        ; 005bc801
    FCOMP float ptr [ESP + 0x284]       ; 005bc808
    FNSTSW AX                           ; 005bc80f
    SAHF                                ; 005bc811
    JNC 0x005bc81f                      ; 005bc812
        ;   XREF to: 005bc81f (CONDITIONAL_JUMP)  ; LAB_005bc81f
    MOV EAX,dword ptr [ESP + 0x284]     ; 005bc814
    MOV dword ptr [ESP + 0x20],EAX      ; 005bc81b
    FLD float ptr [ESP + 0x20]          ; 005bc81f
        ;   Label: LAB_005bc81f
    FCOMP float ptr [ESP + 0x2a8]       ; 005bc823
    FNSTSW AX                           ; 005bc82a
    SAHF                                ; 005bc82c
    JBE 0x005bc83a                      ; 005bc82d
        ;   XREF to: 005bc83a (CONDITIONAL_JUMP)  ; LAB_005bc83a
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 005bc82f
    MOV dword ptr [ESP + 0x20],EAX      ; 005bc836
    LEA EAX,[EBX + 0x30]                ; 005bc83a
        ;   Label: LAB_005bc83a
    FLD float ptr [EBX + 0x34]          ; 005bc83d
    PUSH EAX                            ; 005bc840
    FADD float ptr [ESP + 0x24]         ; 005bc841
    PUSH EBX                            ; 005bc845
    FSTP float ptr [EBX + 0x34]         ; 005bc846
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0 ; 005bc849
        ;   XREF to: 0042ded0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0(CCharacter * this_ptr, UOrientationVector * orientation)
    ADD ESP,0x8                         ; 005bc84e
    MOV EAX,dword ptr [EBX + 0x2598]    ; 005bc851
        ;   Label: LAB_005bc851
    MOV dword ptr [ESP + 0x2e0],EAX     ; 005bc857
    MOV EAX,dword ptr [EAX + 0x154]     ; 005bc85e
    PUSH 0x0                            ; 005bc864
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bc866
    LEA EAX,[ESP + 0x208]               ; 005bc86d
    PUSH EAX                            ; 005bc874
    LEA EAX,[EBX + 0x158]               ; 005bc875
    PUSH EAX                            ; 005bc87b
    MOV dword ptr [ESP + 0x2cc],EAX     ; 005bc87c
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005bc883
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005bc888
    PUSH EAX                            ; 005bc88b
    PUSH EBX                            ; 005bc88c
    MOV ECX,dword ptr [ESP + 0x2e8]     ; 005bc88d
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 005bc894
    PUSH ECX                            ; 005bc89b
    CALL dword ptr [EAX + 0x124]        ; 005bc89c
    ADD ESP,0xc                         ; 005bc8a2
    TEST EAX,EAX                        ; 005bc8a5
    JZ 0x005bcec0                       ; 005bc8a7
        ;   XREF to: 005bcec0 (CONDITIONAL_JUMP)  ; LAB_005bcec0
    CMP dword ptr [EBX + 0x2598],0x0    ; 005bc8ad
    JZ 0x005bcec6                       ; 005bc8b4
        ;   XREF to: 005bcec6 (CONDITIONAL_JUMP)  ; LAB_005bcec6
    FLD float ptr [EBX + 0x1fcd4]       ; 005bc8ba
    FADD float ptr [EBP + 0x18]         ; 005bc8c0
    FST float ptr [EBX + 0x1fcd4]       ; 005bc8c3
    FCOMP float ptr [0x0066376c]        ; 005bc8c9 | FLOAT_0066376c
    FNSTSW AX                           ; 005bc8cf
    SAHF                                ; 005bc8d1
    JC 0x005bc090                       ; 005bc8d2
        ;   XREF to: 005bc090 (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0x259c],0x1    ; 005bc8d8
    JZ 0x005bc090                       ; 005bc8df
        ;   XREF to: 005bc090 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x22                           ; 005bc8e5
    MOV ECX,dword ptr [ESP + 0x2c4]     ; 005bc8e7
    PUSH ECX                            ; 005bc8ee
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bc8ef
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x274],EAX     ; 005bc8f4
    ADD ESP,0x8                         ; 005bc8fb
    PUSH 0x23                           ; 005bc8fe
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 005bc900
    PUSH EAX                            ; 005bc907
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bc908
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bc90d
    FLD float ptr [ESP + 0x2ec]         ; 005bc914
    ADD ESP,0x8                         ; 005bc91b
    FADD float ptr [ESP + 0x26c]        ; 005bc91e
    FLDZ                                ; 005bc925
    FCOMPP                              ; 005bc927
    FNSTSW AX                           ; 005bc929
    SAHF                                ; 005bc92b
    JNC 0x005bcede                      ; 005bc92c
        ;   XREF to: 005bcede (CONDITIONAL_JUMP)  ; LAB_005bcede
    CMP dword ptr [EBX + 0xbe38],0x0    ; 005bc932
    JZ 0x005bc090                       ; 005bc939
        ;   XREF to: 005bc090 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 005bc93f
    PUSH 0x23                           ; 005bc941
    MOV ECX,dword ptr [ESP + 0x2c8]     ; 005bc943
    PUSH ECX                            ; 005bc94a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bc94b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bc950
    MOV dword ptr [EBX + 0xbe38],0x0    ; 005bc953
    JMP 0x005bc090                      ; 005bc95d
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x2b                           ; 005bc962
        ;   Label: LAB_005bc962
    LEA EAX,[EBX + 0x158]               ; 005bc964
    PUSH EAX                            ; 005bc96a
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bc96b
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bc970
    FLD float ptr [ESP + 0x2ec]         ; 005bc977
    FLDZ                                ; 005bc97e
    ADD ESP,0x8                         ; 005bc980
    FCOMPP                              ; 005bc983
    FNSTSW AX                           ; 005bc985
    SAHF                                ; 005bc987
    JC 0x005bcacc                       ; 005bc988
        ;   XREF to: 005bcacc (CONDITIONAL_JUMP)  ; LAB_005bcacc
    MOV dword ptr [EBX + 0x1fc28],0x0   ; 005bc98e
    FLD float ptr [EBX + 0x1fe64]       ; 005bc998
        ;   Label: LAB_005bc998
    FLDZ                                ; 005bc99e
    FCOMPP                              ; 005bc9a0
    FNSTSW AX                           ; 005bc9a2
    SAHF                                ; 005bc9a4
    JNC 0x005bca9e                      ; 005bc9a5
        ;   XREF to: 005bca9e (CONDITIONAL_JUMP)  ; LAB_005bca9e
    FLD float ptr [EBP + 0x18]          ; 005bc9ab
    FCOMP float ptr [EBX + 0x1fe64]     ; 005bc9ae
    FNSTSW AX                           ; 005bc9b4
    SAHF                                ; 005bc9b6
    JNC 0x005bcaff                      ; 005bc9b7
        ;   XREF to: 005bcaff (CONDITIONAL_JUMP)  ; LAB_005bcaff
    FLD float ptr [EBP + 0x18]          ; 005bc9bd
    FLD ST0                             ; 005bc9c0
    FDIV float ptr [EBX + 0x1fe64]      ; 005bc9c2
    FLD float ptr [EBX + 0x1fe64]       ; 005bc9c8
    FSUBRP ST2,ST0                      ; 005bc9ce
    FSTP float ptr [ESP + 0x30]         ; 005bc9d0
    FSTP float ptr [EBX + 0x1fe64]      ; 005bc9d4
    LEA EAX,[EBX + 0x1fe54]             ; 005bc9da
        ;   Label: LAB_005bc9da
    FLD float ptr [EAX]                 ; 005bc9e0
    FMUL float ptr [ESP + 0x30]         ; 005bc9e2
    FSTP float ptr [ESP + 0x228]        ; 005bc9e6
    FLD float ptr [EAX + 0x4]           ; 005bc9ed
    FMUL float ptr [ESP + 0x30]         ; 005bc9f0
    FSTP float ptr [ESP + 0x22c]        ; 005bc9f4
    FLD float ptr [EAX + 0x8]           ; 005bc9fb
    FMUL float ptr [ESP + 0x30]         ; 005bc9fe
    FLD float ptr [ESP + 0x30]          ; 005bca02
    FLD1                                ; 005bca06
    LEA EDX,[EBX + 0x20]                ; 005bca08
    FSUBRP                              ; 005bca0b
    FXCH                                ; 005bca0d
    FSTP float ptr [ESP + 0x230]        ; 005bca0f
    FLD float ptr [EDX]                 ; 005bca16
    FADD float ptr [ESP + 0x228]        ; 005bca18
    FLD float ptr [EDX + 0x4]           ; 005bca1f
    FXCH                                ; 005bca22
    FSTP float ptr [EDX]                ; 005bca24
    FADD float ptr [ESP + 0x22c]        ; 005bca26
    FLD float ptr [EDX + 0x8]           ; 005bca2d
    FXCH                                ; 005bca30
    FSTP float ptr [EDX + 0x4]          ; 005bca32
    FADD float ptr [ESP + 0x230]        ; 005bca35
    FXCH                                ; 005bca3c
    FSTP float ptr [ESP + 0x2a4]        ; 005bca3e
    FSTP float ptr [EDX + 0x8]          ; 005bca45
    FLD float ptr [EAX]                 ; 005bca48
    FMUL float ptr [ESP + 0x2a4]        ; 005bca4a
    FLD float ptr [EAX + 0x4]           ; 005bca51
    FMUL float ptr [ESP + 0x2a4]        ; 005bca54
    FLD float ptr [EAX + 0x8]           ; 005bca5b
    FMUL float ptr [ESP + 0x2a4]        ; 005bca5e
    FXCH ST2                            ; 005bca65
    FSTP float ptr [EAX]                ; 005bca67
    FSTP float ptr [EAX + 0x4]          ; 005bca69
    FSTP float ptr [EAX + 0x8]          ; 005bca6c
    FLD float ptr [EBX + 0x1fe60]       ; 005bca6f
    FSUB float ptr [EBX + 0x34]         ; 005bca75
    SUB ESP,0x4                         ; 005bca78
    FSTP float ptr [ESP]                ; 005bca7b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005bca7e
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bca83
    FLD float ptr [ESP + 0x2e8]         ; 005bca8a
    ADD ESP,0x4                         ; 005bca91
    FMUL float ptr [ESP + 0x30]         ; 005bca94
    FSTP float ptr [EBX + 0x2418]       ; 005bca98
    PUSH 0x0                            ; 005bca9e
        ;   Label: LAB_005bca9e
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bcaa0
    PUSH dword ptr [EBX + 0x2ddc]       ; 005bcaa6
    PUSH EBX                            ; 005bcaac
    CALL dword ptr [EAX + 0x38]         ; 005bcaad
    MOV dword ptr [ESP + 0x2f0],EAX     ; 005bcab0
    MOV EAX,dword ptr [ESP + 0x2f0]     ; 005bcab7
    MOV dword ptr [EBX + 0x2414],EAX    ; 005bcabe
    ADD ESP,0xc                         ; 005bcac4
    JMP 0x005bc090                      ; 005bcac7
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,dword ptr [EBX + 0x1fc28]   ; 005bcacc
        ;   Label: LAB_005bcacc
    FLD float ptr [EAX + 0x24]          ; 005bcad2
    FLD1                                ; 005bcad5
    FADDP                               ; 005bcad7
    FLD float ptr [EBX + 0x24]          ; 005bcad9
    FCOMPP                              ; 005bcadc
    FNSTSW AX                           ; 005bcade
    SAHF                                ; 005bcae0
    JNC 0x005bc998                      ; 005bcae1
        ;   XREF to: 005bc998 (CONDITIONAL_JUMP)  ; LAB_005bc998
    PUSH 0x1                            ; 005bcae7
    PUSH 0x0                            ; 005bcae9
    LEA EAX,[EBX + 0x158]               ; 005bcaeb
    PUSH EAX                            ; 005bcaf1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bcaf2
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bcaf7
    JMP 0x005bc998                      ; 005bcafa
        ;   XREF to: 005bc998 (UNCONDITIONAL_JUMP)  ; LAB_005bc998
    MOV EAX,0x3f800000                  ; 005bcaff
        ;   Label: LAB_005bcaff
    MOV dword ptr [EBX + 0x1fe64],0x0   ; 005bcb04
    MOV dword ptr [ESP + 0x30],EAX      ; 005bcb0e
    JMP 0x005bc9da                      ; 005bcb12
        ;   XREF to: 005bc9da (UNCONDITIONAL_JUMP)  ; LAB_005bc9da
    LEA EDX,[ESP + 0x70]                ; 005bcb17
        ;   Label: LAB_005bcb17
    PUSH EDX                            ; 005bcb1b
    MOV ECX,dword ptr [EAX + 0x154]     ; 005bcb1c
    PUSH EAX                            ; 005bcb22
    CALL dword ptr [ECX + 0x90]         ; 005bcb23
    ADD ESP,0x8                         ; 005bcb29
    CMP dword ptr [ESP + 0x70],0x0      ; 005bcb2c
    JZ 0x005bce68                       ; 005bcb31
        ;   XREF to: 005bce68 (CONDITIONAL_JUMP)  ; LAB_005bce68
    MOV EDX,dword ptr [ESP + 0x74]      ; 005bcb37
    CMP EBX,EDX                         ; 005bcb3b
    JNZ 0x005bce68                      ; 005bcb3d
        ;   XREF to: 005bce68 (CONDITIONAL_JUMP)  ; LAB_005bce68
    MOV EAX,dword ptr [EDX + 0x1fbb0]   ; 005bcb43
    LEA EDX,[EAX + 0x30]                ; 005bcb49
    MOV EAX,dword ptr [EDX]             ; 005bcb4c
    MOV dword ptr [ESP + 0x120],EAX     ; 005bcb4e
    LEA EAX,[EDX + 0x4]                 ; 005bcb55
    MOV EAX,dword ptr [EAX]             ; 005bcb58
    MOV dword ptr [ESP + 0x124],EAX     ; 005bcb5a
    MOV EAX,dword ptr [EDX + 0x8]       ; 005bcb61
    MOV dword ptr [ESP + 0x128],EAX     ; 005bcb64
    FLD float ptr [EBX + 0xbe50]        ; 005bcb6b
    FMUL double ptr [0x0065361c]        ; 005bcb71 | DOUBLE_0065361c
    FMUL double ptr [0x00653644]        ; 005bcb77 | DOUBLE_00653644
    FMUL float ptr [EBP + 0x18]         ; 005bcb7d
    FST float ptr [ESP + 0x2c4]         ; 005bcb80
    FCOMP float ptr [ESP + 0x84]        ; 005bcb87
    FNSTSW AX                           ; 005bcb8e
    SAHF                                ; 005bcb90
    JNC 0x005bcba1                      ; 005bcb91
        ;   XREF to: 005bcba1 (CONDITIONAL_JUMP)  ; LAB_005bcba1
    MOV EAX,dword ptr [ESP + 0x84]      ; 005bcb93
    MOV dword ptr [ESP + 0x2c4],EAX     ; 005bcb9a
    FLD float ptr [ESP + 0x2c4]         ; 005bcba1
        ;   Label: LAB_005bcba1
    FCOMP float ptr [ESP + 0x80]        ; 005bcba8
    FNSTSW AX                           ; 005bcbaf
    SAHF                                ; 005bcbb1
    JBE 0x005bcbc2                      ; 005bcbb2
        ;   XREF to: 005bcbc2 (CONDITIONAL_JUMP)  ; LAB_005bcbc2
    MOV EAX,dword ptr [ESP + 0x80]      ; 005bcbb4
    MOV dword ptr [ESP + 0x2c4],EAX     ; 005bcbbb
    FLD float ptr [ESP + 0x124]         ; 005bcbc2
        ;   Label: LAB_005bcbc2
    FADD float ptr [ESP + 0x2c4]        ; 005bcbc9
    SUB ESP,0x4                         ; 005bcbd0
    FSTP float ptr [ESP]                ; 005bcbd3
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005bcbd6
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bcbdb
    FLD float ptr [ESP + 0x2e8]         ; 005bcbe2
    ADD ESP,0x4                         ; 005bcbe9
    FSTP float ptr [ESP + 0x124]        ; 005bcbec
    FLD float ptr [EBX + 0xbe54]        ; 005bcbf3
    FMUL double ptr [0x0065361c]        ; 005bcbf9 | DOUBLE_0065361c
    FMUL double ptr [0x00653644]        ; 005bcbff | DOUBLE_00653644
    FMUL float ptr [EBP + 0x18]         ; 005bcc05
    FST float ptr [ESP + 0x2c8]         ; 005bcc08
    FCOMP float ptr [ESP + 0x8c]        ; 005bcc0f
    FNSTSW AX                           ; 005bcc16
    SAHF                                ; 005bcc18
    JNC 0x005bcc29                      ; 005bcc19
        ;   XREF to: 005bcc29 (CONDITIONAL_JUMP)  ; LAB_005bcc29
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005bcc1b
    MOV dword ptr [ESP + 0x2c8],EAX     ; 005bcc22
    FLD float ptr [ESP + 0x2c8]         ; 005bcc29
        ;   Label: LAB_005bcc29
    FCOMP float ptr [ESP + 0x88]        ; 005bcc30
    FNSTSW AX                           ; 005bcc37
    SAHF                                ; 005bcc39
    JBE 0x005bcc4a                      ; 005bcc3a
        ;   XREF to: 005bcc4a (CONDITIONAL_JUMP)  ; LAB_005bcc4a
    MOV EAX,dword ptr [ESP + 0x88]      ; 005bcc3c
    MOV dword ptr [ESP + 0x2c8],EAX     ; 005bcc43
    FLD float ptr [ESP + 0x120]         ; 005bcc4a
        ;   Label: LAB_005bcc4a
    FADD float ptr [ESP + 0x2c8]        ; 005bcc51
    SUB ESP,0x4                         ; 005bcc58
    FSTP float ptr [ESP]                ; 005bcc5b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005bcc5e
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bcc63
    FLD float ptr [ESP + 0x2e8]         ; 005bcc6a
    ADD ESP,0x4                         ; 005bcc71
    LEA EDX,[EBX + 0xbe2c]              ; 005bcc74
    FSTP float ptr [ESP + 0x120]        ; 005bcc7a
    PUSH EDX                            ; 005bcc81
    LEA EDX,[ESP + 0x124]               ; 005bcc82
    MOV EAX,dword ptr [EBX + 0x1fbb0]   ; 005bcc89
    PUSH EDX                            ; 005bcc8f
    MOV ECX,dword ptr [EAX + 0x154]     ; 005bcc90
    PUSH EAX                            ; 005bcc96
    CALL dword ptr [ECX + 0x98]         ; 005bcc97
    ADD ESP,0xc                         ; 005bcc9d
    LEA EDX,[EBX + 0x158]               ; 005bcca0
    MOV dword ptr [ESP + 0x2b8],EDX     ; 005bcca6
    TEST EAX,EAX                        ; 005bccad
    JZ 0x005bcea6                       ; 005bccaf
        ;   XREF to: 005bcea6 (CONDITIONAL_JUMP)  ; LAB_005bcea6
    MOV EAX,dword ptr [EBX + 0x1fbb0]   ; 005bccb5
    FLD float ptr [EAX + 0x34]          ; 005bccbb
    FSUB float ptr [EBX + 0x34]         ; 005bccbe
    SUB ESP,0x4                         ; 005bccc1
    FSTP float ptr [ESP]                ; 005bccc4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005bccc7
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bcccc
    FLD float ptr [ESP + 0x2e8]         ; 005bccd3
    ADD ESP,0x4                         ; 005bccda
    FST float ptr [ESP + 0x28]          ; 005bccdd
    FST double ptr [ESP]                ; 005bcce1
    FCOMP double ptr [0x006535f4]       ; 005bcce4 | DOUBLE_006535f4
    FNSTSW AX                           ; 005bccea
    SAHF                                ; 005bccec
    JNC 0x005bce76                      ; 005bcced
        ;   XREF to: 005bce76 (CONDITIONAL_JUMP)  ; LAB_005bce76
    PUSH 0x1                            ; 005bccf3
    PUSH 0x5                            ; 005bccf5
    MOV ECX,dword ptr [ESP + 0x2c0]     ; 005bccf7
    PUSH ECX                            ; 005bccfe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bccff
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005bccff
    ADD ESP,0xc                         ; 005bcd04
    LEA EDX,[EBX + 0x30]                ; 005bcd07
    MOV EAX,dword ptr [EDX]             ; 005bcd0a
    MOV dword ptr [ESP + 0x258],EAX     ; 005bcd0c
    LEA EAX,[EDX + 0x4]                 ; 005bcd13
    MOV EAX,dword ptr [EAX]             ; 005bcd16
    MOV dword ptr [ESP + 0x25c],EAX     ; 005bcd18
    LEA EAX,[EDX + 0x8]                 ; 005bcd1f
    MOV EAX,dword ptr [EAX]             ; 005bcd22
    FLD float ptr [ESP + 0x28]          ; 005bcd24
    MOV dword ptr [ESP + 0x260],EAX     ; 005bcd28
    LEA EAX,[ESP + 0x258]               ; 005bcd2f
    FMUL float ptr [EBX + 0x1fc44]      ; 005bcd36
    PUSH EAX                            ; 005bcd3c
    FADD float ptr [ESP + 0x260]        ; 005bcd3d
    PUSH EBX                            ; 005bcd44
    FSTP float ptr [ESP + 0x264]        ; 005bcd45
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0 ; 005bcd4c
        ;   XREF to: 0042ded0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0(CCharacter * this_ptr, UOrientationVector * orientation)
    ADD ESP,0x8                         ; 005bcd51
    XOR EAX,EAX                         ; 005bcd54
    FLD float ptr [ESP + 0x78]          ; 005bcd56
    MOV dword ptr [ESP + 0x108],EAX     ; 005bcd5a
    FADD double ptr [0x0065364c]        ; 005bcd61 | DOUBLE_0065364c
    MOV dword ptr [ESP + 0x10c],EAX     ; 005bcd67
    FSTP float ptr [ESP + 0x2e4]        ; 005bcd6e
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 005bcd75
    MOV dword ptr [ESP + 0x110],EAX     ; 005bcd7c
    LEA EAX,[ESP + 0x108]               ; 005bcd83
    PUSH EAX                            ; 005bcd8a
    LEA EAX,[ESP + 0x1e4]               ; 005bcd8b
    PUSH EAX                            ; 005bcd92
    MOV ECX,dword ptr [EBX + 0x1fbb0]   ; 005bcd93
    PUSH ECX                            ; 005bcd99
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005bcd9a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005bcd9f
    LEA EAX,[EBX + 0x20]                ; 005bcda2
    FLD float ptr [ESP + 0x1e0]         ; 005bcda5
    FSUB float ptr [EAX]                ; 005bcdac
    FLD float ptr [ESP + 0x1e4]         ; 005bcdae
    FXCH                                ; 005bcdb5
    FSTP float ptr [ESP + 0x1b0]        ; 005bcdb7
    FSUB float ptr [EAX + 0x4]          ; 005bcdbe
    FLD float ptr [ESP + 0x1e8]         ; 005bcdc1
    FXCH                                ; 005bcdc8
    FSTP float ptr [ESP + 0x1b4]        ; 005bcdca
    FSUB float ptr [EAX + 0x8]          ; 005bcdd1
    LEA EAX,[ESP + 0x1b0]               ; 005bcdd4
    PUSH EAX                            ; 005bcddb
    LEA EAX,[ESP + 0x220]               ; 005bcddc
    LEA EDX,[EBX + 0x1fc44]             ; 005bcde3
    PUSH EAX                            ; 005bcde9
    MOV dword ptr [ESP + 0x2b8],EDX     ; 005bcdea
    PUSH EBX                            ; 005bcdf1
    FSTP float ptr [ESP + 0x1c4]        ; 005bcdf2
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 005bcdf9
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 005bcdfe
    MOV EDX,dword ptr [ESP + 0x2b0]     ; 005bce01
    FLD float ptr [EAX]                 ; 005bce08
    FMUL float ptr [EDX]                ; 005bce0a
    FSTP float ptr [ESP + 0x168]        ; 005bce0c
    FLD float ptr [EAX + 0x4]           ; 005bce13
    FMUL float ptr [EDX]                ; 005bce16
    FSTP float ptr [ESP + 0x16c]        ; 005bce18
    FLD float ptr [EAX + 0x8]           ; 005bce1f
    FMUL float ptr [EDX]                ; 005bce22
    LEA EAX,[ESP + 0x168]               ; 005bce24
    LEA EDX,[EBX + 0x23ac]              ; 005bce2b
    FSTP float ptr [ESP + 0x170]        ; 005bce31
    CMP EDX,EAX                         ; 005bce38
    JZ 0x005bce59                       ; 005bce3a
        ;   XREF to: 005bce59 (CONDITIONAL_JUMP)  ; LAB_005bce59
    MOV EAX,dword ptr [ESP + 0x168]     ; 005bce3c
    MOV dword ptr [EDX],EAX             ; 005bce43
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005bce45
    MOV dword ptr [EDX + 0x4],EAX       ; 005bce4c
    MOV EAX,dword ptr [ESP + 0x170]     ; 005bce4f
    MOV dword ptr [EDX + 0x8],EAX       ; 005bce56
    MOV dword ptr [EBX + 0x23b0],0x0    ; 005bce59
        ;   Label: LAB_005bce59
    JMP 0x005bc090                      ; 005bce63
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 005bce68
        ;   Label: LAB_005bce68
    CALL core_hero.cpp_CHero_FUN_004f3580 ; 005bce69
        ;   XREF to: 004f3580 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3580(CHero * this_ptr)
    ADD ESP,0x4                         ; 005bce6e
    JMP 0x005bc090                      ; 005bce71
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    FLD double ptr [ESP]                ; 005bce76
        ;   Label: LAB_005bce76
    FCOMP double ptr [0x006535fc]       ; 005bce79 | DOUBLE_006535fc
    FNSTSW AX                           ; 005bce7f
    SAHF                                ; 005bce81
    JBE 0x005bce95                      ; 005bce82
        ;   XREF to: 005bce95 (CONDITIONAL_JUMP)  ; LAB_005bce95
    PUSH 0x1                            ; 005bce84
    PUSH 0x4                            ; 005bce86
    MOV EDX,dword ptr [ESP + 0x2c0]     ; 005bce88
    PUSH EDX                            ; 005bce8f
    JMP 0x005bccff                      ; 005bce90
        ;   XREF to: 005bccff (UNCONDITIONAL_JUMP)  ; LAB_005bccff
    PUSH 0x1                            ; 005bce95
        ;   Label: LAB_005bce95
    PUSH 0x0                            ; 005bce97
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 005bce99
    PUSH EAX                            ; 005bcea0
    JMP 0x005bccff                      ; 005bcea1
        ;   XREF to: 005bccff (UNCONDITIONAL_JUMP)  ; LAB_005bccff
    PUSH 0x1                            ; 005bcea6
        ;   Label: LAB_005bcea6
    PUSH EAX                            ; 005bcea8
    PUSH EDX                            ; 005bcea9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bceaa
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bceaf
    PUSH EBX                            ; 005bceb2
    CALL core_hero.cpp_CHero_FUN_004f3580 ; 005bceb3
        ;   XREF to: 004f3580 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3580(CHero * this_ptr)
    ADD ESP,0x4                         ; 005bceb8
    JMP 0x005bc090                      ; 005bcebb
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [EBX + 0x2598],EAX    ; 005bcec0
        ;   Label: LAB_005bcec0
    PUSH 0x1                            ; 005bcec6
        ;   Label: LAB_005bcec6
    PUSH 0x0                            ; 005bcec8
    LEA EAX,[EBX + 0x158]               ; 005bceca
    PUSH EAX                            ; 005bced0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bced1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bced6
    JMP 0x005bc090                      ; 005bced9
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 005bcede
        ;   Label: LAB_005bcede
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bcedf
    CALL dword ptr [EAX + 0x104]        ; 005bcee5
    ADD ESP,0x4                         ; 005bceeb
    JMP 0x005bc090                      ; 005bceee
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0x1fba4],0x0   ; 005bcef3
        ;   Label: LAB_005bcef3
    JZ 0x005bd172                       ; 005bcefa
        ;   XREF to: 005bd172 (CONDITIONAL_JUMP)  ; LAB_005bd172
    MOV ECX,dword ptr [EBX + 0xbe38]    ; 005bcf00
    MOV dword ptr [ESP + 0x278],EDX     ; 005bcf06
    TEST ECX,ECX                        ; 005bcf0d
    JNZ 0x005bcf40                      ; 005bcf0f
        ;   XREF to: 005bcf40 (CONDITIONAL_JUMP)  ; LAB_005bcf40
    MOV ECX,dword ptr [ESP + 0x278]     ; 005bcf11
        ;   Label: LAB_005bcf11
    TEST ECX,ECX                        ; 005bcf18
    JNZ 0x005bc090                      ; 005bcf1a
        ;   XREF to: 005bc090 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 005bcf20
    PUSH ECX                            ; 005bcf22
    LEA EAX,[EBX + 0x158]               ; 005bcf23
    PUSH EAX                            ; 005bcf29
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bcf2a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bcf2f
    PUSH EBX                            ; 005bcf32
    CALL core_hero.cpp_CHero_FUN_004f3350 ; 005bcf33
        ;   XREF to: 004f3350 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3350(CHero * this_ptr)
    ADD ESP,0x4                         ; 005bcf38
    JMP 0x005bc090                      ; 005bcf3b
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA ECX,[ESP + 0xa8]                ; 005bcf40
        ;   Label: LAB_005bcf40
    MOV EAX,dword ptr [EBX + 0x1fba4]   ; 005bcf47
    PUSH ECX                            ; 005bcf4d
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bcf4e
    PUSH EAX                            ; 005bcf54
    CALL dword ptr [EDX + 0x14]         ; 005bcf55
    ADD ESP,0x8                         ; 005bcf58
    FLD float ptr [ESP + 0xac]          ; 005bcf5b
    FLD float ptr [ESP + 0xa8]          ; 005bcf62
    FADD float ptr [ESP + 0xb4]         ; 005bcf69
    FXCH                                ; 005bcf70
    FADD float ptr [ESP + 0xb8]         ; 005bcf72
    FXCH                                ; 005bcf79
    FST float ptr [ESP + 0x138]         ; 005bcf7b
    FMUL float ptr [0x006535e0]         ; 005bcf82 | FLOAT_006535e0
    FXCH                                ; 005bcf88
    FST float ptr [ESP + 0x13c]         ; 005bcf8a
    FMUL float ptr [0x006535e0]         ; 005bcf91 | FLOAT_006535e0
    LEA EAX,[ESP + 0x180]               ; 005bcf97
    FLD float ptr [ESP + 0xb0]          ; 005bcf9e
    PUSH EAX                            ; 005bcfa5
    FADD float ptr [ESP + 0xc0]         ; 005bcfa6
    LEA EAX,[ESP + 0x178]               ; 005bcfad
    FST float ptr [ESP + 0x144]         ; 005bcfb4
    FMUL float ptr [0x006535e0]         ; 005bcfbb | FLOAT_006535e0
    PUSH EAX                            ; 005bcfc1
    FXCH ST2                            ; 005bcfc2
    FSTP float ptr [ESP + 0x188]        ; 005bcfc4
    FSTP float ptr [ESP + 0x18c]        ; 005bcfcb
    FSTP float ptr [ESP + 0x190]        ; 005bcfd2
    MOV EAX,dword ptr [EBX + 0x1fba4]   ; 005bcfd9
    PUSH EAX                            ; 005bcfdf
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005bcfe0
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005bcfe5
    LEA EAX,[ESP + 0x174]               ; 005bcfe8
    PUSH EAX                            ; 005bcfef
    LEA EAX,[ESP + 0x250]               ; 005bcff0
    PUSH EAX                            ; 005bcff7
    PUSH EBX                            ; 005bcff8
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005bcff9
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005bcffe
    LEA EAX,[ESP + 0x24c]               ; 005bd001
    PUSH EAX                            ; 005bd008
    LEA EAX,[ESP + 0x1d8]               ; 005bd009
    PUSH EAX                            ; 005bd010
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005bd011
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005bd016
    PUSH dword ptr [EAX + 0x4]          ; 005bd019
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005bd01c
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x2e8],EAX     ; 005bd021
    FLD float ptr [ESP + 0x2e8]         ; 005bd028
    ADD ESP,0x4                         ; 005bd02f
    FLD float ptr [ESP + 0xbc]          ; 005bd032
    FLD float ptr [ESP + 0xb4]          ; 005bd039
    FSUB float ptr [ESP + 0xa8]         ; 005bd040
    FXCH                                ; 005bd047
    FSUB float ptr [ESP + 0xb0]         ; 005bd049
    FXCH                                ; 005bd050
    FST float ptr [ESP + 0x210]         ; 005bd052
    FMUL float ptr [0x006535e0]         ; 005bd059 | FLOAT_006535e0
    FXCH                                ; 005bd05f
    FST float ptr [ESP + 0x218]         ; 005bd061
    FMUL float ptr [0x006535e0]         ; 005bd068 | FLOAT_006535e0
    FXCH                                ; 005bd06e
    FST float ptr [ESP + 0x1ec]         ; 005bd070
    FMUL float ptr [ESP + 0x1ec]        ; 005bd077
    FXCH                                ; 005bd07e
    FST float ptr [ESP + 0x1f4]         ; 005bd080
    FMUL float ptr [ESP + 0x1f4]        ; 005bd087
    FADDP                               ; 005bd08e
    FSQRT                               ; 005bd090
    XOR EDX,EDX                         ; 005bd092
    FLD float ptr [ESP + 0xb8]          ; 005bd094
    FXCH ST2                            ; 005bd09b
    FSTP float ptr [ESP + 0x24]         ; 005bd09d
    MOV dword ptr [ESP + 0x1f0],EDX     ; 005bd0a1
    FXCH                                ; 005bd0a8
    FSUB float ptr [ESP + 0xac]         ; 005bd0aa
    FXCH                                ; 005bd0b1
    FSUBR float ptr [ESP + 0x254]       ; 005bd0b3
    FXCH                                ; 005bd0ba
    FSTP float ptr [ESP + 0x214]        ; 005bd0bc
    FCOMP double ptr [0x00653604]       ; 005bd0c3 | DOUBLE_00653604
    FNSTSW AX                           ; 005bd0c9
    SAHF                                ; 005bd0cb
    JNC 0x005bcf11                      ; 005bd0cc
        ;   XREF to: 005bcf11 (CONDITIONAL_JUMP)  ; LAB_005bcf11
    FLD float ptr [ESP + 0x250]         ; 005bd0d2
    FLD1                                ; 005bd0d9
    FCOMPP                              ; 005bd0db
    FNSTSW AX                           ; 005bd0dd
    SAHF                                ; 005bd0df
    JNC 0x005bcf11                      ; 005bd0e0
        ;   XREF to: 005bcf11 (CONDITIONAL_JUMP)  ; LAB_005bcf11
    FLD float ptr [ESP + 0x250]         ; 005bd0e6
    FCOMP double ptr [0x0065360c]       ; 005bd0ed | DOUBLE_0065360c
    FNSTSW AX                           ; 005bd0f3
    SAHF                                ; 005bd0f5
    JNC 0x005bcf11                      ; 005bd0f6
        ;   XREF to: 005bcf11 (CONDITIONAL_JUMP)  ; LAB_005bcf11
    FLD float ptr [ESP + 0x24]          ; 005bd0fc
    FABS                                ; 005bd100
    FCOMP double ptr [0x00653614]       ; 005bd102 | DOUBLE_00653614
    FNSTSW AX                           ; 005bd108
    SAHF                                ; 005bd10a
    JNC 0x005bcf11                      ; 005bd10b
        ;   XREF to: 005bcf11 (CONDITIONAL_JUMP)  ; LAB_005bcf11
    FLD float ptr [EBP + 0x18]          ; 005bd111
    FMUL double ptr [0x0065361c]        ; 005bd114 | DOUBLE_0065361c
    FST float ptr [ESP + 0x2bc]         ; 005bd11a
    FCHS                                ; 005bd121
    FCOMP float ptr [ESP + 0x24]        ; 005bd123
    FNSTSW AX                           ; 005bd127
    SAHF                                ; 005bd129
    JA 0x005bd163                       ; 005bd12a
        ;   XREF to: 005bd163 (CONDITIONAL_JUMP)  ; LAB_005bd163
    FLD float ptr [ESP + 0x24]          ; 005bd12c
        ;   Label: LAB_005bd12c
    FCOMP float ptr [ESP + 0x2bc]       ; 005bd130
    FNSTSW AX                           ; 005bd137
    SAHF                                ; 005bd139
    JBE 0x005bd147                      ; 005bd13a
        ;   XREF to: 005bd147 (CONDITIONAL_JUMP)  ; LAB_005bd147
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 005bd13c
    MOV dword ptr [ESP + 0x24],EAX      ; 005bd143
    LEA EAX,[EBX + 0x30]                ; 005bd147
        ;   Label: LAB_005bd147
    FLD float ptr [EBX + 0x34]          ; 005bd14a
    PUSH EAX                            ; 005bd14d
    FADD float ptr [ESP + 0x28]         ; 005bd14e
    PUSH EBX                            ; 005bd152
    FSTP float ptr [EBX + 0x34]         ; 005bd153
    CALL core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0 ; 005bd156
        ;   XREF to: 0042ded0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setOrientation_FUN_0042ded0(CCharacter * this_ptr, UOrientationVector * orientation)
    ADD ESP,0x8                         ; 005bd15b
    JMP 0x005bc090                      ; 005bd15e
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [ESP + 0x2bc]         ; 005bd163
        ;   Label: LAB_005bd163
    FCHS                                ; 005bd16a
    FSTP float ptr [ESP + 0x24]         ; 005bd16c
    JMP 0x005bd12c                      ; 005bd170
        ;   XREF to: 005bd12c (UNCONDITIONAL_JUMP)  ; LAB_005bd12c
    PUSH dword ptr [EBP + 0x18]         ; 005bd172
        ;   Label: LAB_005bd172
    PUSH EBX                            ; 005bd175
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 005bd176
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bd17b
    LEA EDX,[EBX + 0x158]               ; 005bd17e
    TEST EAX,EAX                        ; 005bd184
    JZ 0x005bd20b                       ; 005bd186
        ;   XREF to: 005bd20b (CONDITIONAL_JUMP)  ; LAB_005bd20b
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005bd18c
    CMP EAX,0x2                         ; 005bd192
    JNC 0x005bd1f7                      ; 005bd195
        ;   XREF to: 005bd1f7 (CONDITIONAL_JUMP)  ; LAB_005bd1f7
    CMP EAX,0x1                         ; 005bd197
    JNZ 0x005bd1ea                      ; 005bd19a
        ;   XREF to: 005bd1ea (CONDITIONAL_JUMP)  ; LAB_005bd1ea
    PUSH EAX                            ; 005bd19c
    PUSH EAX                            ; 005bd19d
    PUSH EDX                            ; 005bd19e
        ;   Label: LAB_005bd19e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bd19f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005bd19f
    ADD ESP,0xc                         ; 005bd1a4
        ;   Label: LAB_005bd1a4
    LEA EAX,[EBX + 0x23ac]              ; 005bd1a7
    MOV dword ptr [EAX + 0x8],0x0       ; 005bd1ad
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bd1b4
    MOV dword ptr [EAX + 0x4],EDX       ; 005bd1b7
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bd1ba
    MOV dword ptr [EAX],EDX             ; 005bd1bd
    JMP 0x005bc090                      ; 005bd1bf
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 005bd1c4
        ;   Label: LAB_005bd1c4
    PUSH 0x0                            ; 005bd1c6
    PUSH EDX                            ; 005bd1c8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bd1c9
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bd1ce
    PUSH EBX                            ; 005bd1d1
    PUSH 0x65354a                       ; 005bd1d2 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x0066e8e0]                ; 005bd1d7 | g_ConsolePtr | g_CConsolePtr
    PUSH EAX                            ; 005bd1dc | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bd1dd
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x005bd1a4                      ; 005bd1e2
        ;   XREF to: 005bd1a4 (UNCONDITIONAL_JUMP)  ; LAB_005bd1a4
    PUSH 0x1                            ; 005bd1e4
        ;   Label: LAB_005bd1e4
    PUSH 0x3                            ; 005bd1e6
    JMP 0x005bd19e                      ; 005bd1e8
        ;   XREF to: 005bd19e (UNCONDITIONAL_JUMP)  ; LAB_005bd19e
    PUSH 0x1                            ; 005bd1ea
        ;   Label: LAB_005bd1ea
    PUSH 0x0                            ; 005bd1ec
    LEA EAX,[EBX + 0x158]               ; 005bd1ee
    PUSH EAX                            ; 005bd1f4
    JMP 0x005bd19f                      ; 005bd1f5
        ;   XREF to: 005bd19f (UNCONDITIONAL_JUMP)  ; LAB_005bd19f
    JBE 0x005bd1e4                      ; 005bd1f7
        ;   XREF to: 005bd1e4 (CONDITIONAL_JUMP)  ; LAB_005bd1e4
        ;   Label: LAB_005bd1f7
    CMP EAX,0x3                         ; 005bd1f9
    JZ 0x005bd1c4                       ; 005bd1fc
        ;   XREF to: 005bd1c4 (CONDITIONAL_JUMP)  ; LAB_005bd1c4
    PUSH 0x1                            ; 005bd1fe
    PUSH 0x0                            ; 005bd200
    LEA EAX,[EBX + 0x158]               ; 005bd202
    PUSH EAX                            ; 005bd208
    JMP 0x005bd19f                      ; 005bd209
        ;   XREF to: 005bd19f (UNCONDITIONAL_JUMP)  ; LAB_005bd19f
    CMP dword ptr [ESP + 0x2d4],0x0     ; 005bd20b
        ;   Label: LAB_005bd20b
    JZ 0x005bc090                       ; 005bd213
        ;   XREF to: 005bc090 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EDX                            ; 005bd219
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bd21a
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bd21f
    ADD ESP,0x4                         ; 005bd222
    CMP EAX,0xe                         ; 005bd225
    JA 0x005bc090                       ; 005bd228
        ;   XREF to: 005bc090 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x5bb918]  ; 005bd22e | caseD_6 | caseD_5 | caseD_e
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2410],0x0    ; 005bd235
        ;   Label: caseD_0
    JNZ 0x005bd24c                      ; 005bd23c
        ;   XREF to: 005bd24c (CONDITIONAL_JUMP)  ; LAB_005bd24c
    XOR ECX,ECX                         ; 005bd23e
        ;   Label: LAB_005bd23e
    MOV dword ptr [ESP + 0x290],ECX     ; 005bd240
    JMP 0x005bc090                      ; 005bd247
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBX + 0x158]               ; 005bd24c
        ;   Label: LAB_005bd24c
    PUSH EAX                            ; 005bd252
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bd253
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005bd258
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bd25b
    XOR ECX,ECX                         ; 005bd25e
    MOV dword ptr [ESP + 0x298],EAX     ; 005bd260
    MOV EAX,dword ptr [EBX + 0xbe2c]    ; 005bd267
    MOV dword ptr [ESP + 0x2d8],ECX     ; 005bd26d
    TEST EAX,EAX                        ; 005bd274
    JZ 0x005bd447                       ; 005bd276
        ;   XREF to: 005bd447 (CONDITIONAL_JUMP)  ; LAB_005bd447
    CMP dword ptr [EBX + 0xbe34],0x0    ; 005bd27c
    JZ 0x005bd437                       ; 005bd283
        ;   XREF to: 005bd437 (CONDITIONAL_JUMP)  ; LAB_005bd437
    MOV dword ptr [ESP + 0x2d8],0x3     ; 005bd289
    PUSH 0x1                            ; 005bd294
        ;   Label: LAB_005bd294
    LEA EAX,[EBX + 0x158]               ; 005bd296
    PUSH EAX                            ; 005bd29c
    MOV dword ptr [ESP + 0x27c],EAX     ; 005bd29d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bd2a4
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bd2a9
    FLD float ptr [ESP + 0x2ec]         ; 005bd2b0
    ADD ESP,0x8                         ; 005bd2b7
    FMUL float ptr [0x00663760]         ; 005bd2ba | FLOAT_00663760
    PUSH 0x3                            ; 005bd2c0
    MOV EAX,dword ptr [ESP + 0x278]     ; 005bd2c2
    PUSH EAX                            ; 005bd2c9
    FSTP float ptr [ESP + 0x274]        ; 005bd2ca
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bd2d1
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bd2d6
    FLD float ptr [ESP + 0x2ec]         ; 005bd2dd
    ADD ESP,0x8                         ; 005bd2e4
    FMUL float ptr [0x00663764]         ; 005bd2e7 | FLOAT_00663764
    PUSH 0x2                            ; 005bd2ed
    MOV EDX,dword ptr [ESP + 0x278]     ; 005bd2ef
    FADD float ptr [ESP + 0x270]        ; 005bd2f6
    PUSH EDX                            ; 005bd2fd
    FSTP float ptr [ESP + 0x27c]        ; 005bd2fe
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 005bd305
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [ESP + 0x2ec],EAX     ; 005bd30a
    FLD float ptr [ESP + 0x2ec]         ; 005bd311
    FMUL float ptr [0x00663768]         ; 005bd318 | FLOAT_00663768
    ADD ESP,0x8                         ; 005bd31e
    FADD float ptr [ESP + 0x274]        ; 005bd321
    FLD float ptr [EBX + 0xbe4c]        ; 005bd328
    FMUL float ptr [EBP + 0x18]         ; 005bd32e
    FLD float ptr [EBX + 0xbe50]        ; 005bd331
    FMUL float ptr [EBX + 0x2438]       ; 005bd337
    FXCH                                ; 005bd33d
    FMULP ST2                           ; 005bd33f
    MOV ECX,dword ptr [EBX + 0xbe48]    ; 005bd341
    FST float ptr [EBX + 0x2418]        ; 005bd347
    FLD ST0                             ; 005bd34d
    FLD float ptr [EBX + 0x2418]        ; 005bd34f
    FLD ST0                             ; 005bd355
    FLD float ptr [EBX + 0x2418]        ; 005bd357
    FXCH ST4                            ; 005bd35d
    FSUBR float ptr [EBX + 0x1fc50]     ; 005bd35f
    FXCH ST3                            ; 005bd365
    FSUBR float ptr [EBX + 0x1fbec]     ; 005bd367
    FXCH ST2                            ; 005bd36d
    FSUBR float ptr [EBX + 0x1fc0c]     ; 005bd36f
    FXCH                                ; 005bd375
    FSUBR float ptr [EBX + 0x1fbf4]     ; 005bd377
    FXCH ST4                            ; 005bd37d
    FSUBR float ptr [EBX + 0x1fc14]     ; 005bd37f
    FXCH ST3                            ; 005bd385
    FSTP float ptr [EBX + 0x1fc50]      ; 005bd387
    FXCH                                ; 005bd38d
    FSTP float ptr [EBX + 0x1fbec]      ; 005bd38f
    FSTP float ptr [EBX + 0x1fc0c]      ; 005bd395
    FXCH                                ; 005bd39b
    FSTP float ptr [EBX + 0x1fbf4]      ; 005bd39d
    FXCH                                ; 005bd3a3
    FADD float ptr [EBX + 0x241c]       ; 005bd3a5
    FXCH                                ; 005bd3ab
    FSTP float ptr [EBX + 0x1fc14]      ; 005bd3ad
    FSTP float ptr [EBX + 0x241c]       ; 005bd3b3
    TEST ECX,ECX                        ; 005bd3b9
    JZ 0x005bd3f1                       ; 005bd3bb
        ;   XREF to: 005bd3f1 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x2a8c],0xe    ; 005bd3bd
    JZ 0x005bd3f1                       ; 005bd3c4
        ;   XREF to: 005bd3f1 (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [ESP + 0x298]     ; 005bd3c6
    CMP EDX,0x5                         ; 005bd3cd
    JA 0x005bd3f1                       ; 005bd3d0
        ;   XREF to: 005bd3f1 (CONDITIONAL_JUMP)  ; default
    MOV EAX,EDX                         ; 005bd3d2
    JMP dword ptr [EAX*0x4 + 0x5bb900]  ; 005bd3d4 | caseD_5 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EDX,0xb                         ; 005bd3db
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x2410],0x0    ; 005bd3e0
    MOV dword ptr [ESP + 0x2d8],EDX     ; 005bd3ea
    MOV EAX,dword ptr [ESP + 0x2d8]     ; 005bd3f1
        ;   Label: default
    CMP EAX,dword ptr [ESP + 0x298]     ; 005bd3f8
    JZ 0x005bd413                       ; 005bd3ff
        ;   XREF to: 005bd413 (CONDITIONAL_JUMP)  ; LAB_005bd413
    PUSH 0x1                            ; 005bd401
    PUSH EAX                            ; 005bd403
    LEA EAX,[EBX + 0x158]               ; 005bd404
    PUSH EAX                            ; 005bd40a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bd40b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bd410
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 005bd413
        ;   Label: LAB_005bd413
    JZ 0x005bd23e                       ; 005bd41a
        ;   XREF to: 005bd23e (CONDITIONAL_JUMP)  ; LAB_005bd23e
    PUSH EBX                            ; 005bd420
    CALL core_hero.cpp_CHero_FUN_004f3760 ; 005bd421
        ;   XREF to: 004f3760 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f3760(CHero * this_ptr)
    ADD ESP,0x4                         ; 005bd426
    XOR ECX,ECX                         ; 005bd429
    MOV dword ptr [ESP + 0x290],ECX     ; 005bd42b
    JMP 0x005bc090                      ; 005bd432
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [ESP + 0x2d8],0x1     ; 005bd437
        ;   Label: LAB_005bd437
    JMP 0x005bd294                      ; 005bd442
        ;   XREF to: 005bd294 (UNCONDITIONAL_JUMP)  ; LAB_005bd294
    CMP dword ptr [EBX + 0xbe30],0x0    ; 005bd447
        ;   Label: LAB_005bd447
    JZ 0x005bd460                       ; 005bd44e
        ;   XREF to: 005bd460 (CONDITIONAL_JUMP)  ; LAB_005bd460
    MOV dword ptr [ESP + 0x2d8],0x2     ; 005bd450
    JMP 0x005bd294                      ; 005bd45b
        ;   XREF to: 005bd294 (UNCONDITIONAL_JUMP)  ; LAB_005bd294
    FLD float ptr [EBX + 0xbe4c]        ; 005bd460
        ;   Label: LAB_005bd460
    FST double ptr [ESP + 0x8]          ; 005bd466
    FCOMP double ptr [0x006535f4]       ; 005bd46a | DOUBLE_006535f4
    FNSTSW AX                           ; 005bd470
    SAHF                                ; 005bd472
    JNC 0x005bd485                      ; 005bd473
        ;   XREF to: 005bd485 (CONDITIONAL_JUMP)  ; LAB_005bd485
    MOV dword ptr [ESP + 0x2d8],0x4     ; 005bd475
    JMP 0x005bd294                      ; 005bd480
        ;   XREF to: 005bd294 (UNCONDITIONAL_JUMP)  ; LAB_005bd294
    FLD double ptr [ESP + 0x8]          ; 005bd485
        ;   Label: LAB_005bd485
    FCOMP double ptr [0x006535fc]       ; 005bd489 | DOUBLE_006535fc
    FNSTSW AX                           ; 005bd48f
    SAHF                                ; 005bd491
    JBE 0x005bd294                      ; 005bd492
        ;   XREF to: 005bd294 (CONDITIONAL_JUMP)  ; LAB_005bd294
    MOV dword ptr [ESP + 0x2d8],0x5     ; 005bd498
    JMP 0x005bd294                      ; 005bd4a3
        ;   XREF to: 005bd294 (UNCONDITIONAL_JUMP)  ; LAB_005bd294
    MOV EAX,0xb                         ; 005bd4a8
        ;   Label: caseD_1
    MOV dword ptr [EBX + 0x2410],0x0    ; 005bd4ad
    MOV dword ptr [ESP + 0x2d8],EAX     ; 005bd4b7
    JMP 0x005bd3f1                      ; 005bd4be
        ;   XREF to: 005bd3f1 (UNCONDITIONAL_JUMP)  ; default
    MOV ECX,0x7                         ; 005bd4c3
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x2410],0x0    ; 005bd4c8
    MOV dword ptr [ESP + 0x2d8],ECX     ; 005bd4d2
    JMP 0x005bd3f1                      ; 005bd4d9
        ;   XREF to: 005bd3f1 (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBX + 0x2410],0x0    ; 005bd4de
        ;   Label: caseD_7
    JMP 0x005bc090                      ; 005bd4e8
        ;   XREF to: 005bc090 (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0x1fc28],0x0   ; 005bd4ed
        ;   Label: LAB_005bd4ed
    JNZ 0x005bc147                      ; 005bd4f4
        ;   XREF to: 005bc147 (CONDITIONAL_JUMP)  ; LAB_005bc147
    CMP dword ptr [ESP + 0x270],0x0     ; 005bd4fa
    JZ 0x005bc1a6                       ; 005bd502
        ;   XREF to: 005bc1a6 (CONDITIONAL_JUMP)  ; LAB_005bc1a6
    LEA EAX,[EBX + 0x158]               ; 005bd508
    PUSH EAX                            ; 005bd50e
    MOV dword ptr [ESP + 0x298],EAX     ; 005bd50f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005bd516
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    LEA ECX,[EBX + 0x23ac]              ; 005bd51b
    ADD ESP,0x4                         ; 005bd521
    LEA EDX,[EBX + 0x241c]              ; 005bd524
    FLD float ptr [ECX]                 ; 005bd52a
    FADD float ptr [EDX]                ; 005bd52c
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bd52e
    FSTP float ptr [ESP + 0xd8]         ; 005bd531
    FLD float ptr [ECX + 0x4]           ; 005bd538
    FADD float ptr [EDX + 0x4]          ; 005bd53b
    FLD float ptr [0x0066374c]          ; 005bd53e | FLOAT_0066374c
    FXCH                                ; 005bd544
    FSTP float ptr [ESP + 0xdc]         ; 005bd546
    FLD float ptr [ECX + 0x8]           ; 005bd54d
    FADD float ptr [EDX + 0x8]          ; 005bd550
    FXCH                                ; 005bd553
    FMUL float ptr [EBP + 0x18]         ; 005bd555
    FXCH                                ; 005bd558
    FSTP float ptr [ESP + 0xe0]         ; 005bd55a
    MOV dword ptr [ECX + 0x8],0x0       ; 005bd561
    MOV dword ptr [ESP + 0x2d0],EAX     ; 005bd568
    FLD float ptr [ECX + 0x8]           ; 005bd56f
    FST float ptr [ECX + 0x4]           ; 005bd572
    FSTP float ptr [ECX]                ; 005bd575
    MOV dword ptr [EDX + 0x8],0x0       ; 005bd577
    FSTP float ptr [ESP + 0x2ac]        ; 005bd57e
    MOV ECX,dword ptr [EDX + 0x8]       ; 005bd585
    MOV dword ptr [EDX + 0x4],ECX       ; 005bd588
    MOV ECX,dword ptr [EDX + 0x4]       ; 005bd58b
    MOV dword ptr [EDX],ECX             ; 005bd58e
    CMP EAX,0x7                         ; 005bd590
    JZ 0x005bd7a4                       ; 005bd593
        ;   XREF to: 005bd7a4 (CONDITIONAL_JUMP)  ; LAB_005bd7a4
    CMP EAX,0x8                         ; 005bd599
    JNZ 0x005bd7db                      ; 005bd59c
        ;   XREF to: 005bd7db (CONDITIONAL_JUMP)  ; LAB_005bd7db
    FLD float ptr [EBP + 0x18]          ; 005bd5a2
    FMUL double ptr [0x0065365c]        ; 005bd5a5 | DOUBLE_0065365c
    XOR EDX,EDX                         ; 005bd5ab
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 005bd5ad
    MOV dword ptr [ESP + 0xd8],EDX      ; 005bd5b4
    MOV dword ptr [ESP + 0xdc],EDX      ; 005bd5bb
    MOV dword ptr [ESP + 0xe0],EAX      ; 005bd5c2
    FLD float ptr [EBX + 0x242c]        ; 005bd5c9
    MOV EAX,[0x0066374c]                ; 005bd5cf | FLOAT_0066374c
    MOV dword ptr [EBX + 0x1fc94],EAX   ; 005bd5d4
    FXCH                                ; 005bd5da
    FSUBR ST0,ST1                       ; 005bd5dc
    MOV dword ptr [EBX + 0x1fc90],EDX   ; 005bd5de
    FSTP ST1                            ; 005bd5e4
        ;   Label: LAB_005bd5e4
    FSTP float ptr [EBX + 0x242c]       ; 005bd5e6
        ;   Label: LAB_005bd5e6
    LEA EAX,[EBX + 0x1fc78]             ; 005bd5ec
        ;   Label: LAB_005bd5ec
    PUSH EAX                            ; 005bd5f2
    LEA EAX,[ESP + 0xd0]                ; 005bd5f3
    PUSH EAX                            ; 005bd5fa
    PUSH EBX                            ; 005bd5fb
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 005bd5fc
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    LEA EDX,[EBX + 0x2428]              ; 005bd601
    ADD ESP,0xc                         ; 005bd607
    FLD float ptr [EBP + 0x18]          ; 005bd60a
    FLD float ptr [EDX]                 ; 005bd60d
    FMUL ST1                            ; 005bd60f
    FSTP float ptr [ESP + 0x198]        ; 005bd611
    FLD float ptr [EDX + 0x4]           ; 005bd618
    FMUL ST1                            ; 005bd61b
    FSTP float ptr [ESP + 0x19c]        ; 005bd61d
    FMUL float ptr [EDX + 0x8]          ; 005bd624
    FLD float ptr [ESP + 0xd8]          ; 005bd627
    FLD float ptr [ESP + 0xdc]          ; 005bd62e
    FLD float ptr [ESP + 0xe0]          ; 005bd635
    FLD float ptr [ESP + 0x198]         ; 005bd63c
    FLD float ptr [ESP + 0x19c]         ; 005bd643
    FXCH ST5                            ; 005bd64a
    FSTP float ptr [ESP + 0x1a0]        ; 005bd64c
    FADD float ptr [EAX]                ; 005bd653
    FLD float ptr [ESP + 0x1a0]         ; 005bd655
    FXCH                                ; 005bd65c
    FSTP float ptr [ESP + 0x12c]        ; 005bd65e
    FXCH ST4                            ; 005bd665
    FADD float ptr [EAX + 0x4]          ; 005bd667
    FXCH ST3                            ; 005bd66a
    FADD float ptr [ESP + 0x12c]        ; 005bd66c
    FXCH ST3                            ; 005bd673
    FSTP float ptr [ESP + 0x130]        ; 005bd675
    FXCH ST3                            ; 005bd67c
    FADD float ptr [EAX + 0x8]          ; 005bd67e
    FXCH                                ; 005bd681
    FADD float ptr [ESP + 0x130]        ; 005bd683
    FXCH                                ; 005bd68a
    FSTP float ptr [ESP + 0x134]        ; 005bd68c
    FXCH                                ; 005bd693
    FSTP float ptr [ESP + 0xd8]         ; 005bd695
    FSTP float ptr [ESP + 0xdc]         ; 005bd69c
    LEA EAX,[ESP + 0xd8]                ; 005bd6a3
    FADD float ptr [ESP + 0x134]        ; 005bd6aa
    PUSH EAX                            ; 005bd6b1
    FSTP float ptr [ESP + 0xe4]         ; 005bd6b2
    PUSH EBX                            ; 005bd6b9
    MOV EAX,dword ptr [EBX + 0x242c]    ; 005bd6ba
    MOV dword ptr [EBX + 0x1fe6c],EAX   ; 005bd6c0
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 005bd6c6
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    FLD float ptr [EBX + 0x2414]        ; 005bd6cb
    FADD double ptr [0x00653664]        ; 005bd6d1 | DOUBLE_00653664
    ADD ESP,0x8                         ; 005bd6d7
    FLD float ptr [EBX + 0x24]          ; 005bd6da
    FCOMPP                              ; 005bd6dd
    FNSTSW AX                           ; 005bd6df
    SAHF                                ; 005bd6e1
    JNC 0x005bd6ee                      ; 005bd6e2
        ;   XREF to: 005bd6ee (CONDITIONAL_JUMP)  ; LAB_005bd6ee
    MOV dword ptr [EBX + 0x2410],0x1    ; 005bd6e4
    MOV ECX,dword ptr [ESP + 0x2d0]     ; 005bd6ee
        ;   Label: LAB_005bd6ee
    CMP ECX,0xf                         ; 005bd6f5
    JNZ 0x005bda4d                      ; 005bd6f8
        ;   XREF to: 005bda4d (CONDITIONAL_JUMP)  ; LAB_005bda4d
    CMP dword ptr [EBX + 0x2410],0x0    ; 005bd6fe
        ;   Label: LAB_005bd6fe
    JZ 0x005bd792                       ; 005bd705
        ;   XREF to: 005bd792 (CONDITIONAL_JUMP)  ; LAB_005bd792
    SUB ESP,0x8                         ; 005bd70b
    FLD float ptr [EBX + 0x242c]        ; 005bd70e
    FSTP double ptr [ESP]               ; 005bd714
    PUSH 0x653574                       ; 005bd717 | = "Splat at %3.2f fps\n"
    MOV EAX,[0x0066e8e0]                ; 005bd71c | g_ConsolePtr | g_CConsolePtr
    PUSH EAX                            ; 005bd721 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005bd722
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    FLD float ptr [EBX + 0x1fe6c]       ; 005bd727
    ADD ESP,0x10                        ; 005bd72d
    FCHS                                ; 005bd730
    FST float ptr [ESP + 0x1c]          ; 005bd732
    FST double ptr [ESP + 0x10]         ; 005bd736
    FCOMP double ptr [0x0065366c]       ; 005bd73a | DOUBLE_0065366c
    FNSTSW AX                           ; 005bd740
    SAHF                                ; 005bd742
    JNC 0x005bda91                      ; 005bd743
        ;   XREF to: 005bda91 (CONDITIONAL_JUMP)  ; LAB_005bda91
    MOV EDX,dword ptr [ESP + 0x2d0]     ; 005bd749
    LEA EAX,[EBX + 0x158]               ; 005bd750
    CMP EDX,0xd                         ; 005bd756
    JNZ 0x005bda71                      ; 005bd759
        ;   XREF to: 005bda71 (CONDITIONAL_JUMP)  ; LAB_005bda71
    PUSH 0x1                            ; 005bd75f
    PUSH 0xe                            ; 005bd761
    PUSH EAX                            ; 005bd763
        ;   Label: LAB_005bd763
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bd764
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bd769
    FLD float ptr [ESP + 0x1c]          ; 005bd76c
        ;   Label: LAB_005bd76c
    FMUL float ptr [0x0065368c]         ; 005bd770 | FLOAT_0065368c
    SUB ESP,0x4                         ; 005bd776
    FLD1                                ; 005bd779
    FADDP                               ; 005bd77b
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bd77d
    FSTP float ptr [ESP]                ; 005bd783
    PUSH 0x3f87558                      ; 005bd786 | g_ZeroVector
    PUSH EBX                            ; 005bd78b
    CALL dword ptr [EAX + 0x1c]         ; 005bd78c
    ADD ESP,0xc                         ; 005bd78f
    CMP dword ptr [EBX + 0x2410],0x0    ; 005bd792
        ;   Label: LAB_005bd792
    JZ 0x005bdb5a                       ; 005bd799
        ;   XREF to: 005bdb5a (CONDITIONAL_JUMP)  ; LAB_005bdb5a
    JMP 0x005bc19c                      ; 005bd79f
        ;   XREF to: 005bc19c (UNCONDITIONAL_JUMP)  ; LAB_005bc19c
    XOR EAX,EAX                         ; 005bd7a4
        ;   Label: LAB_005bd7a4
    MOV dword ptr [ESP + 0xd8],EAX      ; 005bd7a6
    MOV dword ptr [ESP + 0xdc],EAX      ; 005bd7ad
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 005bd7b4
    FLD float ptr [0x0066374c]          ; 005bd7bb | FLOAT_0066374c
    MOV dword ptr [ESP + 0xe0],EAX      ; 005bd7c1
    XOR EDX,EDX                         ; 005bd7c8
    FSTP float ptr [EBX + 0x1fc94]      ; 005bd7ca
    MOV dword ptr [EBX + 0x1fc90],EDX   ; 005bd7d0
    JMP 0x005bd5ec                      ; 005bd7d6
        ;   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)  ; LAB_005bd5ec
    CMP EAX,0x9                         ; 005bd7db
        ;   Label: LAB_005bd7db
    JNZ 0x005bd87c                      ; 005bd7de
        ;   XREF to: 005bd87c (CONDITIONAL_JUMP)  ; LAB_005bd87c
    FLD float ptr [EBP + 0x18]          ; 005bd7e4
    FLD ST0                             ; 005bd7e7
    FMUL double ptr [0x0065365c]        ; 005bd7e9 | DOUBLE_0065365c
    XOR EDX,EDX                         ; 005bd7ef
    FLD float ptr [0x0066375c]          ; 005bd7f1 | FLOAT_0066375c
    MOV dword ptr [ESP + 0xd8],EDX      ; 005bd7f7
    MOV dword ptr [ESP + 0xdc],EDX      ; 005bd7fe
    FMUL float ptr [0x0066374c]         ; 005bd805 | FLOAT_0066374c
    FLD float ptr [EBX + 0x1fc94]       ; 005bd80b
    FMUL ST3                            ; 005bd811
    FXCH                                ; 005bd813
    FMULP ST3                           ; 005bd815
    FSTP float ptr [ESP + 0xe0]         ; 005bd817
    MOV dword ptr [EBX + 0x1fc90],EDX   ; 005bd81e
    FXCH                                ; 005bd824
    FSUBR float ptr [EBX + 0x1fc94]     ; 005bd826
    FLD float ptr [EBX + 0x242c]        ; 005bd82c
    FXCH                                ; 005bd832
    FSTP float ptr [EBX + 0x1fc94]      ; 005bd834
    FXCH                                ; 005bd83a
    FSUBR ST0,ST1                       ; 005bd83c
    FLD float ptr [EBX + 0x1fc94]       ; 005bd83e
    FLDZ                                ; 005bd844
    FXCH ST2                            ; 005bd846
    FSTP ST3                            ; 005bd848
    FXCH ST2                            ; 005bd84a
    FSTP float ptr [EBX + 0x242c]       ; 005bd84c
    FCOMPP                              ; 005bd852
    FNSTSW AX                           ; 005bd854
    SAHF                                ; 005bd856
    JBE 0x005bd5ec                      ; 005bd857
        ;   XREF to: 005bd5ec (CONDITIONAL_JUMP)  ; LAB_005bd5ec
    PUSH 0x1                            ; 005bd85d
    PUSH 0xf                            ; 005bd85f
    MOV EAX,dword ptr [ESP + 0x29c]     ; 005bd861
    PUSH EAX                            ; 005bd868
    MOV dword ptr [EBX + 0x1fc94],EDX   ; 005bd869
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bd86f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bd874
    JMP 0x005bd5ec                      ; 005bd877
        ;   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)  ; LAB_005bd5ec
    CMP EAX,0xa                         ; 005bd87c
        ;   Label: LAB_005bd87c
    JNZ 0x005bd8a4                      ; 005bd87f
        ;   XREF to: 005bd8a4 (CONDITIONAL_JUMP)  ; LAB_005bd8a4
    XOR ECX,ECX                         ; 005bd881
    MOV EAX,dword ptr [ESP + 0x2ac]     ; 005bd883
    MOV dword ptr [ESP + 0xdc],ECX      ; 005bd88a
    MOV dword ptr [ESP + 0xe0],EAX      ; 005bd891
    MOV dword ptr [ESP + 0xd8],ECX      ; 005bd898
    JMP 0x005bd5ec                      ; 005bd89f
        ;   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)  ; LAB_005bd5ec
    CMP EAX,0xb                         ; 005bd8a4
        ;   Label: LAB_005bd8a4
    JNZ 0x005bd8c3                      ; 005bd8a7
        ;   XREF to: 005bd8c3 (CONDITIONAL_JUMP)  ; LAB_005bd8c3
    MOV dword ptr [EBX + 0x1fc90],0x0   ; 005bd8a9
    MOV EAX,[0x00663754]                ; 005bd8b3 | FLOAT_00663754
    MOV dword ptr [EBX + 0x1fc94],EAX   ; 005bd8b8
    JMP 0x005bd5ec                      ; 005bd8be
        ;   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)  ; LAB_005bd5ec
    CMP EAX,0xc                         ; 005bd8c3
        ;   Label: LAB_005bd8c3
    JNZ 0x005bd913                      ; 005bd8c6
        ;   XREF to: 005bd913 (CONDITIONAL_JUMP)  ; LAB_005bd913
    FLD float ptr [0x00663754]          ; 005bd8c8 | FLOAT_00663754
    FLD ST0                             ; 005bd8ce
    FLD float ptr [EBP + 0x18]          ; 005bd8d0
    FXCH                                ; 005bd8d3
    FMUL ST1                            ; 005bd8d5
    XOR EAX,EAX                         ; 005bd8d7
    FXCH                                ; 005bd8d9
    FMUL double ptr [0x0065365c]        ; 005bd8db | DOUBLE_0065365c
    MOV dword ptr [ESP + 0xd8],EAX      ; 005bd8e1
    MOV dword ptr [ESP + 0xdc],EAX      ; 005bd8e8
    FXCH                                ; 005bd8ef
    FSTP float ptr [ESP + 0xe0]         ; 005bd8f1
    FLD float ptr [EBX + 0x242c]        ; 005bd8f8
    FXCH ST2                            ; 005bd8fe
    FSTP float ptr [EBX + 0x1fc94]      ; 005bd900
    FSUBR ST0,ST1                       ; 005bd906
    MOV dword ptr [EBX + 0x1fc90],EAX   ; 005bd908
    JMP 0x005bd5e4                      ; 005bd90e
        ;   XREF to: 005bd5e4 (UNCONDITIONAL_JUMP)  ; LAB_005bd5e4
    CMP EAX,0xd                         ; 005bd913
        ;   Label: LAB_005bd913
    JNZ 0x005bd9b8                      ; 005bd916
        ;   XREF to: 005bd9b8 (CONDITIONAL_JUMP)  ; LAB_005bd9b8
    FLD float ptr [EBP + 0x18]          ; 005bd91c
    FLD ST0                             ; 005bd91f
    FMUL double ptr [0x0065365c]        ; 005bd921 | DOUBLE_0065365c
    XOR EAX,EAX                         ; 005bd927
    FLD float ptr [0x0066375c]          ; 005bd929 | FLOAT_0066375c
    MOV dword ptr [ESP + 0xd8],EAX      ; 005bd92f
    MOV dword ptr [ESP + 0xdc],EAX      ; 005bd936
    FMUL float ptr [0x00663754]         ; 005bd93d | FLOAT_00663754
    FLD float ptr [EBX + 0x1fc94]       ; 005bd943
    FMUL ST3                            ; 005bd949
    FXCH                                ; 005bd94b
    FMULP ST3                           ; 005bd94d
    FSTP float ptr [ESP + 0xe0]         ; 005bd94f
    MOV dword ptr [EBX + 0x1fc90],EAX   ; 005bd956
    FXCH                                ; 005bd95c
    FSUBR float ptr [EBX + 0x1fc94]     ; 005bd95e
    FLD float ptr [EBX + 0x242c]        ; 005bd964
    FXCH                                ; 005bd96a
    FSTP float ptr [EBX + 0x1fc94]      ; 005bd96c
    FXCH                                ; 005bd972
    FSUBR ST0,ST1                       ; 005bd974
    FLD float ptr [EBX + 0x1fc94]       ; 005bd976
    FLDZ                                ; 005bd97c
    FXCH ST2                            ; 005bd97e
    FSTP ST3                            ; 005bd980
    FXCH ST2                            ; 005bd982
    FSTP float ptr [EBX + 0x242c]       ; 005bd984
    FCOMPP                              ; 005bd98a
    FNSTSW AX                           ; 005bd98c
    SAHF                                ; 005bd98e
    JBE 0x005bd5ec                      ; 005bd98f
        ;   XREF to: 005bd5ec (CONDITIONAL_JUMP)  ; LAB_005bd5ec
    PUSH 0x1                            ; 005bd995
    PUSH 0xf                            ; 005bd997
    MOV ECX,dword ptr [ESP + 0x29c]     ; 005bd999
    PUSH ECX                            ; 005bd9a0
    MOV dword ptr [EBX + 0x1fc94],0x0   ; 005bd9a1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bd9ab
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bd9b0
    JMP 0x005bd5ec                      ; 005bd9b3
        ;   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)  ; LAB_005bd5ec
    CMP EAX,0xe                         ; 005bd9b8
        ;   Label: LAB_005bd9b8
    JNZ 0x005bd9cb                      ; 005bd9bb
        ;   XREF to: 005bd9cb (CONDITIONAL_JUMP)  ; LAB_005bd9cb
    XOR ECX,ECX                         ; 005bd9bd
    MOV dword ptr [ESP + 0xdc],ECX      ; 005bd9bf
    JMP 0x005bd5ec                      ; 005bd9c6
        ;   XREF to: 005bd5ec (UNCONDITIONAL_JUMP)  ; LAB_005bd5ec
    CMP EAX,0xf                         ; 005bd9cb
        ;   Label: LAB_005bd9cb
    JNZ 0x005bda09                      ; 005bd9ce
        ;   XREF to: 005bda09 (CONDITIONAL_JUMP)  ; LAB_005bda09
    FLD float ptr [EBP + 0x18]          ; 005bd9d0
    XOR ECX,ECX                         ; 005bd9d3
    FMUL double ptr [0x0065365c]        ; 005bd9d5 | DOUBLE_0065365c
    MOV dword ptr [ESP + 0xe0],ECX      ; 005bd9db
    MOV dword ptr [ESP + 0xdc],ECX      ; 005bd9e2
    MOV dword ptr [ESP + 0xd8],ECX      ; 005bd9e9
    FLD float ptr [EBX + 0x242c]        ; 005bd9f0
    FXCH                                ; 005bd9f6
    FSUBR ST0,ST1                       ; 005bd9f8
    MOV dword ptr [EBX + 0x1fc90],0x461c3f9a ; 005bd9fa
    JMP 0x005bd5e4                      ; 005bda04
        ;   XREF to: 005bd5e4 (UNCONDITIONAL_JUMP)  ; LAB_005bd5e4
    CMP EAX,0x10                        ; 005bda09
        ;   Label: LAB_005bda09
    JNZ 0x005bda39                      ; 005bda0c
        ;   XREF to: 005bda39 (CONDITIONAL_JUMP)  ; LAB_005bda39
    FLD float ptr [EBP + 0x18]          ; 005bda0e
    XOR ECX,ECX                         ; 005bda11
    FMUL double ptr [0x0065365c]        ; 005bda13 | DOUBLE_0065365c
    MOV dword ptr [ESP + 0xe0],ECX      ; 005bda19
    MOV dword ptr [ESP + 0xdc],ECX      ; 005bda20
    MOV dword ptr [ESP + 0xd8],ECX      ; 005bda27
    FSUBR float ptr [EBX + 0x242c]      ; 005bda2e
    JMP 0x005bd5e6                      ; 005bda34
        ;   XREF to: 005bd5e6 (UNCONDITIONAL_JUMP)  ; LAB_005bd5e6
    FLD float ptr [EBP + 0x18]          ; 005bda39
        ;   Label: LAB_005bda39
    FMUL double ptr [0x0065365c]        ; 005bda3c | DOUBLE_0065365c
    FSUBR float ptr [EBX + 0x242c]      ; 005bda42
    JMP 0x005bd5e6                      ; 005bda48
        ;   XREF to: 005bd5e6 (UNCONDITIONAL_JUMP)  ; LAB_005bd5e6
    CMP ECX,0x9                         ; 005bda4d
        ;   Label: LAB_005bda4d
    JZ 0x005bd6fe                       ; 005bda50
        ;   XREF to: 005bd6fe (CONDITIONAL_JUMP)  ; LAB_005bd6fe
    CMP ECX,0xd                         ; 005bda56
    JZ 0x005bd6fe                       ; 005bda59
        ;   XREF to: 005bd6fe (CONDITIONAL_JUMP)  ; LAB_005bd6fe
    CMP dword ptr [EBX + 0x2410],0x0    ; 005bda5f
    JZ 0x005bdb5a                       ; 005bda66
        ;   XREF to: 005bdb5a (CONDITIONAL_JUMP)  ; LAB_005bdb5a
    JMP 0x005bc19c                      ; 005bda6c
        ;   XREF to: 005bc19c (UNCONDITIONAL_JUMP)  ; LAB_005bc19c
    CMP EDX,0x9                         ; 005bda71
        ;   Label: LAB_005bda71
    JZ 0x005bda88                       ; 005bda74
        ;   XREF to: 005bda88 (CONDITIONAL_JUMP)  ; LAB_005bda88
    CMP EDX,0xf                         ; 005bda76
    JNZ 0x005bd76c                      ; 005bda79
        ;   XREF to: 005bd76c (CONDITIONAL_JUMP)  ; LAB_005bd76c
    PUSH 0x1                            ; 005bda7f
    PUSH 0x10                           ; 005bda81
    JMP 0x005bd763                      ; 005bda83
        ;   XREF to: 005bd763 (UNCONDITIONAL_JUMP)  ; LAB_005bd763
    PUSH 0x1                            ; 005bda88
        ;   Label: LAB_005bda88
    PUSH 0xa                            ; 005bda8a
    JMP 0x005bd763                      ; 005bda8c
        ;   XREF to: 005bd763 (UNCONDITIONAL_JUMP)  ; LAB_005bd763
    LEA EAX,[ESP + 0x34]                ; 005bda91
        ;   Label: LAB_005bda91
    XOR EDX,EDX                         ; 005bda95
    PUSH EAX                            ; 005bda97
    MOV dword ptr [ESP + 0x280],EDX     ; 005bda98
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005bda9f
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005bdaa4
    FLD double ptr [ESP + 0x10]         ; 005bdaa7
    FADD double ptr [0x00653674]        ; 005bdaab | DOUBLE_00653674
    FMUL double ptr [0x0065367c]        ; 005bdab1 | DOUBLE_0065367c
    FMUL double ptr [0x00653684]        ; 005bdab7 | DOUBLE_00653684
    FSTP float ptr [ESP + 0x38]         ; 005bdabd
    CMP dword ptr [ESP + 0x38],0x42c80000 ; 005bdac1
    JLE 0x005bdae0                      ; 005bdac9
        ;   XREF to: 005bdae0 (CONDITIONAL_JUMP)  ; LAB_005bdae0
    MOV EDX,0x1                         ; 005bdacb
    MOV EAX,0x461c3c00                  ; 005bdad0
    MOV dword ptr [ESP + 0x27c],EDX     ; 005bdad5
    MOV dword ptr [ESP + 0x38],EAX      ; 005bdadc
    LEA EAX,[ESP + 0x34]                ; 005bdae0
        ;   Label: LAB_005bdae0
    PUSH EAX                            ; 005bdae4
    MOV EDX,dword ptr [EBX + 0x154]     ; 005bdae5
    PUSH EBX                            ; 005bdaeb
    MOV dword ptr [EBX + 0xbe24],0x0    ; 005bdaec
    CALL dword ptr [EDX + 0x11c]        ; 005bdaf6
    FLD float ptr [EBX + 0x243c]        ; 005bdafc
    FLDZ                                ; 005bdb02
    ADD ESP,0x8                         ; 005bdb04
    FCOMPP                              ; 005bdb07
    FNSTSW AX                           ; 005bdb09
    SAHF                                ; 005bdb0b
    JNC 0x005bdb18                      ; 005bdb0c
        ;   XREF to: 005bdb18 (CONDITIONAL_JUMP)  ; LAB_005bdb18
    CMP dword ptr [ESP + 0x27c],0x0     ; 005bdb0e
    JZ 0x005bdb4b                       ; 005bdb16
        ;   XREF to: 005bdb4b (CONDITIONAL_JUMP)  ; LAB_005bdb4b
    PUSH 0x1                            ; 005bdb18
        ;   Label: LAB_005bdb18
    PUSH 0x12                           ; 005bdb1a
    LEA EAX,[EBX + 0x158]               ; 005bdb1c
    PUSH EAX                            ; 005bdb22
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bdb23
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bdb28
    PUSH 0x653588                       ; 005bdb2b | = "fall-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bdb30
    PUSH EBX                            ; 005bdb36
    CALL dword ptr [EAX + 0x24]         ; 005bdb37
    ADD ESP,0x8                         ; 005bdb3a
    CMP dword ptr [EBX + 0x2410],0x0    ; 005bdb3d
    JZ 0x005bdb5a                       ; 005bdb44
        ;   XREF to: 005bdb5a (CONDITIONAL_JUMP)  ; LAB_005bdb5a
    JMP 0x005bc19c                      ; 005bdb46
        ;   XREF to: 005bc19c (UNCONDITIONAL_JUMP)  ; LAB_005bc19c
    PUSH 0x1                            ; 005bdb4b
        ;   Label: LAB_005bdb4b
    PUSH 0x11                           ; 005bdb4d
    LEA EAX,[EBX + 0x158]               ; 005bdb4f
    JMP 0x005bd763                      ; 005bdb55
        ;   XREF to: 005bd763 (UNCONDITIONAL_JUMP)  ; LAB_005bd763
    MOV EAX,[0x0066375c]                ; 005bdb5a | FLOAT_0066375c
        ;   Label: LAB_005bdb5a
    FLD float ptr [EBX + 0x1fc90]       ; 005bdb5f
    MOV dword ptr [ESP + 0x2c],EAX      ; 005bdb65
    FADD float ptr [EBP + 0x18]         ; 005bdb69
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 005bdb6c
    FSTP float ptr [EBX + 0x1fc90]      ; 005bdb73
    CMP EAX,0x3                         ; 005bdb79
    JNZ 0x005bdb90                      ; 005bdb7c
        ;   XREF to: 005bdb90 (CONDITIONAL_JUMP)  ; LAB_005bdb90
    FLD float ptr [ESP + 0x2c]          ; 005bdb7e
    FLD ST0                             ; 005bdb82
    FMUL double ptr [0x006535ec]        ; 005bdb84 | DOUBLE_006535ec
    FSTP ST1                            ; 005bdb8a
    FSTP float ptr [ESP + 0x2c]         ; 005bdb8c
    FLD float ptr [EBX + 0x1fc90]       ; 005bdb90
        ;   Label: LAB_005bdb90
    FCOMP float ptr [ESP + 0x2c]        ; 005bdb96
    FNSTSW AX                           ; 005bdb9a
    SAHF                                ; 005bdb9c
    JBE 0x005bdbcb                      ; 005bdb9d
        ;   XREF to: 005bdbcb (CONDITIONAL_JUMP)  ; LAB_005bdbcb
    CMP dword ptr [ESP + 0x2d0],0xf     ; 005bdb9f
        ;   Label: LAB_005bdb9f
    JZ 0x005bdbbc                       ; 005bdba7
        ;   XREF to: 005bdbbc (CONDITIONAL_JUMP)  ; LAB_005bdbbc
    PUSH 0x1                            ; 005bdba9
    PUSH 0xf                            ; 005bdbab
    LEA EAX,[EBX + 0x158]               ; 005bdbad
    PUSH EAX                            ; 005bdbb3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005bdbb4
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bdbb9
    MOV dword ptr [EBX + 0x2410],0x0    ; 005bdbbc
        ;   Label: LAB_005bdbbc
    JMP 0x005bc1a6                      ; 005bdbc6
        ;   XREF to: 005bc1a6 (UNCONDITIONAL_JUMP)  ; LAB_005bc1a6
    FLD float ptr [EBX + 0x1fe6c]       ; 005bdbcb
        ;   Label: LAB_005bdbcb
    FCOMP double ptr [0x00653674]       ; 005bdbd1 | DOUBLE_00653674
    FNSTSW AX                           ; 005bdbd7
    SAHF                                ; 005bdbd9
    JC 0x005bdb9f                       ; 005bdbda
        ;   XREF to: 005bdb9f (CONDITIONAL_JUMP)  ; LAB_005bdb9f
    JMP 0x005bc1a6                      ; 005bdbdc
        ;   XREF to: 005bc1a6 (UNCONDITIONAL_JUMP)  ; LAB_005bc1a6
    MOV dword ptr [EBX + 0x1fbd4],0x1   ; 005bdbe1
        ;   Label: LAB_005bdbe1
    JMP 0x005bc216                      ; 005bdbeb
        ;   XREF to: 005bc216 (UNCONDITIONAL_JUMP)  ; LAB_005bc216
    MOV ECX,dword ptr [EAX + 0x2f0]     ; 005bdbf0
        ;   Label: LAB_005bdbf0
    TEST ECX,ECX                        ; 005bdbf6
    JNZ 0x005bc29b                      ; 005bdbf8
        ;   XREF to: 005bc29b (CONDITIONAL_JUMP)  ; LAB_005bc29b
    MOV EAX,[0x0067b654]                ; 005bdbfe | g_CGameInstance | g_CGamePtr
    MOV dword ptr [EAX + 0x244],ECX     ; 005bdc03 | g_CGameInstance.auto_save_blocked
    JMP 0x005bc29b                      ; 005bdc09
        ;   XREF to: 005bc29b (UNCONDITIONAL_JUMP)  ; LAB_005bc29b
    FLD float ptr [EBP + 0x18]          ; 005bdc0e
        ;   Label: LAB_005bdc0e
    FDIV float ptr [0x00663730]         ; 005bdc11 | FLOAT_00663730
    FSUBR float ptr [EBX + 0x1fbd8]     ; 005bdc17
    FST float ptr [EBX + 0x1fbd8]       ; 005bdc1d
    FLDZ                                ; 005bdc23
    FCOMPP                              ; 005bdc25
    FNSTSW AX                           ; 005bdc27
    SAHF                                ; 005bdc29
    JBE 0x005bc2e7                      ; 005bdc2a
        ;   XREF to: 005bc2e7 (CONDITIONAL_JUMP)  ; LAB_005bc2e7
    MOV dword ptr [EBX + 0x1fbd8],EDX   ; 005bdc30
    JMP 0x005bc2e7                      ; 005bdc36
        ;   XREF to: 005bc2e7 (UNCONDITIONAL_JUMP)  ; LAB_005bc2e7
    PUSH EBX                            ; 005bdc3b
        ;   Label: LAB_005bdc3b
    CALL core_hero.cpp_CHero_FUN_004f3350 ; 005bdc3c
        ;   XREF to: 004f3350 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3350(CHero * this_ptr)
    ADD ESP,0x4                         ; 005bdc41
    JMP 0x005bc4d4                      ; 005bdc44
        ;   XREF to: 005bc4d4 (UNCONDITIONAL_JUMP)  ; LAB_005bc4d4
    MOV ECX,dword ptr [EBX + 0x1fc4c]   ; 005bdc49
        ;   Label: LAB_005bdc49
    PUSH ECX                            ; 005bdc4f
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005bdc50
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005bdc55
    MOV ESI,dword ptr [EBX + 0x1fc48]   ; 005bdc58
    PUSH ESI                            ; 005bdc5e
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005bdc5f
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005bdc64
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005bdc67
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x1                            ; 005bdc6c
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90 ; 005bdc6e
        ;   XREF to: 005a8b90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask)
    ADD ESP,0x4                         ; 005bdc73
    PUSH 0x6535ad                       ; 005bdc76 | = "goggle-off.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005bdc7b
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005bdc80
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005bdc83
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    MOV ESP,EBP                         ; 005bdc88
    POP EBP                             ; 005bdc8a
    POP EDI                             ; 005bdc8b
    POP ESI                             ; 005bdc8c
    POP EBX                             ; 005bdc8d
    RET                                 ; 005bdc8e
    MOV EAX,[0x0067b654]                ; 005bdc8f | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_005bdc8f
    CMP dword ptr [EAX + 0x240],0x0     ; 005bdc94 | g_CGameInstance.block_auto_save
    JZ 0x005bc568                       ; 005bdc9b
        ;   XREF to: 005bc568 (CONDITIONAL_JUMP)  ; LAB_005bc568
    MOV EDI,dword ptr [EBX + 0x1fc4c]   ; 005bdca1
    PUSH EDI                            ; 005bdca7
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005bdca8
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005bdcad
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 005bdcb0
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
    PUSH 0x1                            ; 005bdcb5
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90 ; 005bdcb7
        ;   XREF to: 005a8b90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask)
    ADD ESP,0x4                         ; 005bdcbc
    PUSH 0x6535bc                       ; 005bdcbf | = "goggle-on.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005bdcc4
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005bdcc9
    PUSH 0x0                            ; 005bdccc
    MOV dword ptr [EBX + 0x1fc4c],EAX   ; 005bdcce
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60 ; 005bdcd4
        ;   XREF to: 005a8a60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60(float volume)
    ADD ESP,0x4                         ; 005bdcd9
    PUSH 0x6535ca                       ; 005bdcdc | = "goggle-loop.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 005bdce1
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 005bdce6
    MOV dword ptr [EBX + 0x1fc48],EAX   ; 005bdce9
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 005bdcef
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    PUSH 0x0                            ; 005bdcf4
    PUSH 0x3f800000                     ; 005bdcf6
    MOV EAX,dword ptr [EBX + 0x1fc48]   ; 005bdcfb
    PUSH 0x3f800000                     ; 005bdd01
    PUSH EAX                            ; 005bdd06
    CALL sound_sndmain.cpp_setSfxFade_FUN_005a9c70 ; 005bdd07
        ;   XREF to: 005a9c70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_005a9c70(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 005bdd0c
    MOV ESP,EBP                         ; 005bdd0f
    POP EBP                             ; 005bdd11
    POP EDI                             ; 005bdd12
    POP ESI                             ; 005bdd13
    POP EBX                             ; 005bdd14
    RET                                 ; 005bdd15

