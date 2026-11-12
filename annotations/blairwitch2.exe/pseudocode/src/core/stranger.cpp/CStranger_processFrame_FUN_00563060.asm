; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processFrame_FUN_00563060(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x3d4]:1  local_3d4
; undefined        Stack[-0x3bc]:1  local_3bc
; undefined4       Stack[-0x2c]:4  local_2c
;
; XREF[1]:
;   core_stranger.cpp_CStranger_process_FUN_00562f30 at 00562f73
;
; Referenced Globals:
;   void* switchdataD_00563000 = 00564dbe
;   void* switchdataD_00563018 = 00564c35
;   undefined4 s_DebugActionPending_005eb4a4+1
;   TerminatedCString s_grabbedBy_s_005eb4b8
;   TerminatedCString s_pushedObject_s_005eb4c6
;   TerminatedCString s_ladder_005eb4d7
;   TerminatedCString s_pickup_005eb4df
;   TerminatedCString s_hurt_005eb4e7
;   TerminatedCString s_door_005eb4ed
;   TerminatedCString s_sitting_005eb4f3
;   TerminatedCString s_stashinventory_005eb4fc
;   TerminatedCString s_placeobject_005eb50c
;   TerminatedCString s_putdownobject_005eb519
;   TerminatedCString s_toss_005eb528
;   TerminatedCString s_attackmelee_005eb52e
;   ... and 50 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e600
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00429d60
;   core_charactr.cpp_FUN_0042b2a0
;   ... and 36 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563060
        ;   Label: core_stranger.cpp_CStranger_processFrame_FUN_00563060
    PUSH ESI                            ; 00563061
    PUSH EDI                            ; 00563062
    PUSH EBP                            ; 00563063
    MOV EBP,ESP                         ; 00563064
    SUB ESP,0x47c                       ; 00563066
    AND ESP,0xfffffff8                  ; 0056306c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056306f
    PUSH 0x5eb4a5                       ; 00563072 | s_DebugActionPending_005eb4a4+1
    MOV EDX,dword ptr [0x006141f0]      ; 00563077 | DAT_006141f0
    PUSH EDX                            ; 0056307d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0056307e
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00563083
    MOV ECX,dword ptr [EBX + 0x2698]    ; 00563086
    MOV dword ptr [ESP + 0x464],EAX     ; 0056308c
    TEST ECX,ECX                        ; 00563093
    JZ 0x0056323e                       ; 00563095
        ;   XREF to: 0056323e (CONDITIONAL_JUMP)  ; LAB_0056323e
    FLD float ptr [EBX + 0x2571c]       ; 0056309b
    FCOMP float ptr [0x005eb5cd]        ; 005630a1 | DAT_005eb5cd
    FNSTSW AX                           ; 005630a7
    SAHF                                ; 005630a9
    JNC 0x0056323e                      ; 005630aa
        ;   XREF to: 0056323e (CONDITIONAL_JUMP)  ; LAB_0056323e
    PUSH ECX                            ; 005630b0
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 005630b1
    LEA ESI,[ESP + 0xc0]                ; 005630b7
    LEA EDI,[ESP + 0xd8]                ; 005630be
    CALL dword ptr [EDX + 0x24]         ; 005630c5
    MOV ECX,0x6                         ; 005630c8
    LEA ESI,[ESP + 0xc0]                ; 005630cd
    ADD ESP,0x4                         ; 005630d4
    MOVSD.REP ES:EDI,ESI                ; 005630d7
    LEA EDX,[EBX + 0x25710]             ; 005630d9
    LEA ECX,[ESP + 0xd4]                ; 005630df
    MOV ESI,EDX                         ; 005630e6
    CMP EDX,ECX                         ; 005630e8
    JZ 0x00563109                       ; 005630ea
        ;   XREF to: 00563109 (CONDITIONAL_JUMP)  ; LAB_00563109
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005630ec
    MOV dword ptr [EDX],EAX             ; 005630f3
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005630f5
    MOV dword ptr [EDX + 0x4],EAX       ; 005630fc
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005630ff
    MOV dword ptr [EDX + 0x8],EAX       ; 00563106
    LEA EDX,[ECX + 0xc]                 ; 00563109
        ;   Label: LAB_00563109
    LEA EAX,[ESI + 0xc]                 ; 0056310c
    CMP EAX,EDX                         ; 0056310f
    JZ 0x00563123                       ; 00563111
        ;   XREF to: 00563123 (CONDITIONAL_JUMP)  ; LAB_00563123
    MOV ECX,dword ptr [EDX]             ; 00563113
    MOV dword ptr [EAX],ECX             ; 00563115
    MOV ECX,dword ptr [EDX + 0x4]       ; 00563117
    MOV dword ptr [EAX + 0x4],ECX       ; 0056311a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0056311d
    MOV dword ptr [EAX + 0x8],ECX       ; 00563120
    LEA EAX,[EBX + 0x25710]             ; 00563123
        ;   Label: LAB_00563123
    LEA EDI,[ESP + 0x260]               ; 00563129
    LEA ESI,[ESP + 0x1f4]               ; 00563130
    FLD float ptr [EAX]                 ; 00563137
    FLD float ptr [EAX + 0x4]           ; 00563139
    LEA EDX,[EBX + 0x2571c]             ; 0056313c
    FLD float ptr [EAX + 0x8]           ; 00563142
    FXCH ST2                            ; 00563145
    FADD float ptr [EDX]                ; 00563147
    FXCH                                ; 00563149
    FADD float ptr [EDX + 0x4]          ; 0056314b
    FXCH ST2                            ; 0056314e
    FADD float ptr [EDX + 0x8]          ; 00563150
    FXCH                                ; 00563153
    FSTP float ptr [ESP + 0x1f4]        ; 00563155
    FXCH                                ; 0056315c
    FSTP float ptr [ESP + 0x1f8]        ; 0056315e
    FSTP float ptr [ESP + 0x1fc]        ; 00563165
    MOVSD ES:EDI,ESI                    ; 0056316c
    MOVSD ES:EDI,ESI                    ; 0056316d
    MOVSD ES:EDI,ESI                    ; 0056316e
    FLD float ptr [0x005eb5d1]          ; 0056316f | DAT_005eb5d1
    FLD float ptr [ESP + 0x260]         ; 00563175
    FMUL ST1                            ; 0056317c
    FLD float ptr [ESP + 0x264]         ; 0056317e
    FMUL ST2                            ; 00563185
    FLD float ptr [ESP + 0x268]         ; 00563187
    FMULP ST3                           ; 0056318e
    LEA EAX,[ESP + 0x2fc]               ; 00563190
    LEA EDI,[ESP + 0x2fc]               ; 00563197
    LEA ESI,[ESP + 0x35c]               ; 0056319e
    FXCH                                ; 005631a5
    FSTP float ptr [ESP + 0x35c]        ; 005631a7
    FSTP float ptr [ESP + 0x360]        ; 005631ae
    FSTP float ptr [ESP + 0x364]        ; 005631b5
    MOVSD ES:EDI,ESI                    ; 005631bc
    MOVSD ES:EDI,ESI                    ; 005631bd
    MOVSD ES:EDI,ESI                    ; 005631be
    PUSH EAX                            ; 005631bf
    MOV ESI,dword ptr [EBX + 0x2698]    ; 005631c0
    PUSH ESI                            ; 005631c6
    LEA ESI,[ESP + 0x220]               ; 005631c7
    LEA EDI,[ESP + 0x10c]               ; 005631ce
    CALL core_actor.cpp_FUN_00408d70    ; 005631d5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 005631da
    LEA EAX,[ESP + 0x104]               ; 005631dd
    LEA ESI,[ESP + 0x218]               ; 005631e4
    PUSH EAX                            ; 005631eb
    MOVSD ES:EDI,ESI                    ; 005631ec
    MOVSD ES:EDI,ESI                    ; 005631ed
    MOVSD ES:EDI,ESI                    ; 005631ee
    PUSH EBX                            ; 005631ef
    LEA ESI,[ESP + 0x25c]               ; 005631f0
    LEA EDI,[ESP + 0x16c]               ; 005631f7
    CALL core_actor.cpp_FUN_00408de0    ; 005631fe
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x25c]               ; 00563203
    LEA EAX,[ESP + 0x16c]               ; 0056320a
    ADD ESP,0x8                         ; 00563211
    LEA EDX,[EBX + 0x25704]             ; 00563214
    MOVSD ES:EDI,ESI                    ; 0056321a
    MOVSD ES:EDI,ESI                    ; 0056321b
    MOVSD ES:EDI,ESI                    ; 0056321c
    CMP EDX,EAX                         ; 0056321d
    JZ 0x0056323e                       ; 0056321f
        ;   XREF to: 0056323e (CONDITIONAL_JUMP)  ; LAB_0056323e
    MOV EAX,dword ptr [ESP + 0x164]     ; 00563221
    MOV dword ptr [EDX],EAX             ; 00563228
    MOV EAX,dword ptr [ESP + 0x168]     ; 0056322a
    MOV dword ptr [EDX + 0x4],EAX       ; 00563231
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00563234
    MOV dword ptr [EDX + 0x8],EAX       ; 0056323b
    PUSH dword ptr [EBP + 0x18]         ; 0056323e
        ;   Label: LAB_0056323e
    PUSH EBX                            ; 00563241
    CALL core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0 ; 00563242
        ;   XREF to: 0042a7a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processSmoking_FUN_0042a7a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00563247
    MOV EDI,dword ptr [0x00616494]      ; 0056324a | g_CGamePtr
    PUSH dword ptr [EBP + 0x18]         ; 00563250
    PUSH EDI                            ; 00563253 | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004bd460 ; 00563254
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bd460(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00563259
    FLD float ptr [EBX + 0x10a60]       ; 0056325c
    FSUB float ptr [EBP + 0x18]         ; 00563262
    FST float ptr [EBX + 0x10a60]       ; 00563265
    FLDZ                                ; 0056326b
    FCOMPP                              ; 0056326d
    FNSTSW AX                           ; 0056326f
    SAHF                                ; 00563271
    JBE 0x0056327e                      ; 00563272
        ;   XREF to: 0056327e (CONDITIONAL_JUMP)  ; LAB_0056327e
    MOV dword ptr [EBX + 0x10a60],0x0   ; 00563274
    FLD float ptr [EBX + 0x256ac]       ; 0056327e
        ;   Label: LAB_0056327e
    FSUB float ptr [EBP + 0x18]         ; 00563284
    FST float ptr [EBX + 0x256ac]       ; 00563287
    FLDZ                                ; 0056328d
    FCOMPP                              ; 0056328f
    FNSTSW AX                           ; 00563291
    SAHF                                ; 00563293
    JBE 0x005632a0                      ; 00563294
        ;   XREF to: 005632a0 (CONDITIONAL_JUMP)  ; LAB_005632a0
    MOV dword ptr [EBX + 0x256ac],0x0   ; 00563296
    LEA EAX,[EBX + 0x2508]              ; 005632a0
        ;   Label: LAB_005632a0
    LEA ESI,[ESP + 0x200]               ; 005632a6
    LEA EDI,[ESP + 0x2a8]               ; 005632ad
    MOV dword ptr [EAX + 0x8],0x0       ; 005632b4
    PUSH EBX                            ; 005632bb
    MOV EDX,dword ptr [EAX + 0x8]       ; 005632bc
    MOV dword ptr [EAX + 0x4],EDX       ; 005632bf
    MOV EDX,dword ptr [EAX + 0x4]       ; 005632c2
    MOV dword ptr [EAX],EDX             ; 005632c5
    CALL core_stranger.cpp_FUN_00565f30 ; 005632c7
        ;   XREF to: 00565f30 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00565f30()
    ADD ESP,0x4                         ; 005632cc
    LEA EAX,[ESP + 0x2a8]               ; 005632cf
    LEA ESI,[ESP + 0x200]               ; 005632d6
    PUSH EAX                            ; 005632dd
    MOVSD ES:EDI,ESI                    ; 005632de
    MOVSD ES:EDI,ESI                    ; 005632df
    MOVSD ES:EDI,ESI                    ; 005632e0
    PUSH EBX                            ; 005632e1
    LEA ESI,[ESP + 0x178]               ; 005632e2
    LEA EDI,[ESP + 0x28c]               ; 005632e9
    CALL core_actor.cpp_FUN_00408d70    ; 005632f0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 005632f5
    LEA ESI,[ESP + 0x170]               ; 005632f8
    PUSH dword ptr [EBP + 0x18]         ; 005632ff
    PUSH EBX                            ; 00563302
    MOVSD ES:EDI,ESI                    ; 00563303
    MOVSD ES:EDI,ESI                    ; 00563304
    MOVSD ES:EDI,ESI                    ; 00563305
    CALL core_stranger.cpp_FUN_005656f0 ; 00563306
        ;   XREF to: 005656f0 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_005656f0()
    MOV EAX,0x1                         ; 0056330b
    ADD ESP,0x8                         ; 00563310
    MOV dword ptr [ESP + 0x45c],EAX     ; 00563313
    MOV dword ptr [ESP + 0x450],EAX     ; 0056331a
    MOV dword ptr [ESP + 0x454],EAX     ; 00563321
    MOV dword ptr [ESP + 0x468],EAX     ; 00563328
    MOV dword ptr [ESP + 0x46c],EAX     ; 0056332f
    MOV EAX,dword ptr [EBX + 0x276c]    ; 00563336
    TEST EAX,EAX                        ; 0056333c
    JZ 0x00563384                       ; 0056333e
        ;   XREF to: 00563384 (CONDITIONAL_JUMP)  ; LAB_00563384
    XOR EDX,EDX                         ; 00563340
    MOV dword ptr [ESP + 0x45c],EDX     ; 00563342
    MOV dword ptr [ESP + 0x454],EDX     ; 00563349
    MOV dword ptr [ESP + 0x468],EDX     ; 00563350
    MOV dword ptr [ESP + 0x46c],EDX     ; 00563357
    MOV dword ptr [ESP + 0x450],EDX     ; 0056335e
    CMP dword ptr [ESP + 0x464],0x0     ; 00563365
    JZ 0x00563384                       ; 0056336d
        ;   XREF to: 00563384 (CONDITIONAL_JUMP)  ; LAB_00563384
    PUSH EAX                            ; 0056336f
    PUSH 0x5eb4b8                       ; 00563370 | = "grabbedBy=%s\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 00563375 | g_CConsolePtr
    PUSH ESI                            ; 0056337b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0056337c
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00563381
    CMP dword ptr [EBX + 0x2560c],0x0   ; 00563384
        ;   Label: LAB_00563384
    JZ 0x005633d1                       ; 0056338b
        ;   XREF to: 005633d1 (CONDITIONAL_JUMP)  ; LAB_005633d1
    XOR EAX,EAX                         ; 0056338d
    MOV EDI,dword ptr [ESP + 0x464]     ; 0056338f
    MOV dword ptr [ESP + 0x468],EAX     ; 00563396
    MOV dword ptr [ESP + 0x46c],EAX     ; 0056339d
    MOV dword ptr [ESP + 0x45c],EAX     ; 005633a4
    MOV dword ptr [ESP + 0x454],EAX     ; 005633ab
    TEST EDI,EDI                        ; 005633b2
    JZ 0x005633d1                       ; 005633b4
        ;   XREF to: 005633d1 (CONDITIONAL_JUMP)  ; LAB_005633d1
    MOV EAX,dword ptr [EBX + 0x2560c]   ; 005633b6
    PUSH EAX                            ; 005633bc
    PUSH 0x5eb4c6                       ; 005633bd | = "pushedObject=%s\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 005633c2 | g_CConsolePtr
    PUSH EDX                            ; 005633c8 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 005633c9
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005633ce
    CMP dword ptr [EBX + 0x25614],0x0   ; 005633d1
        ;   Label: LAB_005633d1
    JZ 0x00563e3d                       ; 005633d8
        ;   XREF to: 00563e3d (CONDITIONAL_JUMP)  ; LAB_00563e3d
    XOR EDI,EDI                         ; 005633de
        ;   Label: LAB_005633de
    MOV dword ptr [ESP + 0x450],EDI     ; 005633e0
    MOV dword ptr [ESP + 0x454],EDI     ; 005633e7
    MOV dword ptr [ESP + 0x468],EDI     ; 005633ee
    MOV dword ptr [ESP + 0x46c],EDI     ; 005633f5
    MOV dword ptr [ESP + 0x45c],EDI     ; 005633fc
    CMP dword ptr [ESP + 0x464],0x0     ; 00563403
    JZ 0x00563420                       ; 0056340b
        ;   XREF to: 00563420 (CONDITIONAL_JUMP)  ; LAB_00563420
    PUSH 0x5eb4d7                       ; 0056340d | = "ladder\n"
    MOV EAX,[0x00609ed0]                ; 00563412 | g_CConsolePtr
    PUSH EAX                            ; 00563417 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00563418
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0056341d
    CMP dword ptr [EBX + 0x25608],0x0   ; 00563420
        ;   Label: LAB_00563420
    JZ 0x00563e4f                       ; 00563427
        ;   XREF to: 00563e4f (CONDITIONAL_JUMP)  ; LAB_00563e4f
    XOR ESI,ESI                         ; 0056342d
        ;   Label: LAB_0056342d
    MOV EDX,dword ptr [ESP + 0x464]     ; 0056342f
    MOV dword ptr [ESP + 0x468],ESI     ; 00563436
    MOV dword ptr [ESP + 0x46c],ESI     ; 0056343d
    MOV dword ptr [ESP + 0x45c],ESI     ; 00563444
    TEST EDX,EDX                        ; 0056344b
    JZ 0x00563463                       ; 0056344d
        ;   XREF to: 00563463 (CONDITIONAL_JUMP)  ; LAB_00563463
    PUSH 0x5eb4df                       ; 0056344f | = "pickup\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 00563454 | g_CConsolePtr
    PUSH ECX                            ; 0056345a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0056345b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00563460
    PUSH 0x24                           ; 00563463
        ;   Label: LAB_00563463
    LEA ESI,[EBX + 0x2b4]               ; 00563465
    PUSH ESI                            ; 0056346b
    CALL core_motion.cpp_FUN_005038a0   ; 0056346c
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00563471
    FLD float ptr [ESP + 0x480]         ; 00563478
    FLDZ                                ; 0056347f
    ADD ESP,0x8                         ; 00563481
    FCOMPP                              ; 00563484
    FNSTSW AX                           ; 00563486
    SAHF                                ; 00563488
    JNC 0x00563e61                      ; 00563489
        ;   XREF to: 00563e61 (CONDITIONAL_JUMP)  ; LAB_00563e61
    XOR ESI,ESI                         ; 0056348f
        ;   Label: LAB_0056348f
    MOV ECX,dword ptr [ESP + 0x464]     ; 00563491
    MOV dword ptr [ESP + 0x454],ESI     ; 00563498
    MOV dword ptr [ESP + 0x468],ESI     ; 0056349f
    MOV dword ptr [ESP + 0x46c],ESI     ; 005634a6
    MOV dword ptr [ESP + 0x45c],ESI     ; 005634ad
    TEST ECX,ECX                        ; 005634b4
    JZ 0x005634cc                       ; 005634b6
        ;   XREF to: 005634cc (CONDITIONAL_JUMP)  ; LAB_005634cc
    PUSH 0x5eb4e7                       ; 005634b8 | = "hurt\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 005634bd | g_CConsolePtr
    PUSH ESI                            ; 005634c3 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 005634c4
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005634c9
    PUSH 0x1c                           ; 005634cc
        ;   Label: LAB_005634cc
    LEA ESI,[EBX + 0x2b4]               ; 005634ce
    PUSH ESI                            ; 005634d4
    CALL core_motion.cpp_FUN_005038a0   ; 005634d5
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 005634da
    FLD float ptr [ESP + 0x480]         ; 005634e1
    FLDZ                                ; 005634e8
    ADD ESP,0x8                         ; 005634ea
    FCOMPP                              ; 005634ed
    FNSTSW AX                           ; 005634ef
    SAHF                                ; 005634f1
    JNC 0x00563ec5                      ; 005634f2
        ;   XREF to: 00563ec5 (CONDITIONAL_JUMP)  ; LAB_00563ec5
    XOR EDX,EDX                         ; 005634f8
        ;   Label: LAB_005634f8
    MOV EDI,dword ptr [ESP + 0x464]     ; 005634fa
    MOV dword ptr [ESP + 0x46c],EDX     ; 00563501
    MOV dword ptr [ESP + 0x45c],EDX     ; 00563508
    MOV dword ptr [ESP + 0x468],EDX     ; 0056350f
    TEST EDI,EDI                        ; 00563516
    JZ 0x0056352d                       ; 00563518
        ;   XREF to: 0056352d (CONDITIONAL_JUMP)  ; LAB_0056352d
    PUSH 0x5eb4ed                       ; 0056351a | = "door\n"
    MOV EAX,[0x00609ed0]                ; 0056351f | g_CConsolePtr
    PUSH EAX                            ; 00563524 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00563525
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0056352a
    PUSH 0x2e                           ; 0056352d
        ;   Label: LAB_0056352d
    LEA EAX,[EBX + 0x2b4]               ; 0056352f
    PUSH EAX                            ; 00563535
    CALL core_motion.cpp_FUN_005038a0   ; 00563536
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 0056353b
    FLD float ptr [ESP + 0x480]         ; 00563542
    FLDZ                                ; 00563549
    ADD ESP,0x8                         ; 0056354b
    FCOMPP                              ; 0056354e
    FNSTSW AX                           ; 00563550
    SAHF                                ; 00563552
    JNC 0x00563598                      ; 00563553
        ;   XREF to: 00563598 (CONDITIONAL_JUMP)  ; LAB_00563598
    XOR EDX,EDX                         ; 00563555
    MOV dword ptr [ESP + 0x454],EDX     ; 00563557
    MOV dword ptr [ESP + 0x468],EDX     ; 0056355e
    MOV dword ptr [ESP + 0x450],EDX     ; 00563565
    MOV dword ptr [ESP + 0x46c],EDX     ; 0056356c
    MOV dword ptr [ESP + 0x45c],EDX     ; 00563573
    CMP dword ptr [ESP + 0x464],0x0     ; 0056357a
    JZ 0x00563598                       ; 00563582
        ;   XREF to: 00563598 (CONDITIONAL_JUMP)  ; LAB_00563598
    PUSH 0x5eb4f3                       ; 00563584 | = "sitting\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 00563589 | g_CConsolePtr
    PUSH ECX                            ; 0056358f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00563590
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00563595
    CMP dword ptr [EBX + 0x256a4],0x1   ; 00563598
        ;   Label: LAB_00563598
    JNZ 0x005635d0                      ; 0056359f
        ;   XREF to: 005635d0 (CONDITIONAL_JUMP)  ; LAB_005635d0
    XOR EDI,EDI                         ; 005635a1
    MOV EDX,dword ptr [ESP + 0x464]     ; 005635a3
    MOV dword ptr [ESP + 0x46c],EDI     ; 005635aa
    MOV dword ptr [ESP + 0x468],EDI     ; 005635b1
    TEST EDX,EDX                        ; 005635b8
    JZ 0x005635d0                       ; 005635ba
        ;   XREF to: 005635d0 (CONDITIONAL_JUMP)  ; LAB_005635d0
    PUSH 0x5eb4fc                       ; 005635bc | = "stashinventory\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 005635c1 | g_CConsolePtr
    PUSH ECX                            ; 005635c7 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 005635c8
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005635cd
    CMP dword ptr [EBX + 0x256a4],0x2   ; 005635d0
        ;   Label: LAB_005635d0
    JNZ 0x00563608                      ; 005635d7
        ;   XREF to: 00563608 (CONDITIONAL_JUMP)  ; LAB_00563608
    XOR EDI,EDI                         ; 005635d9
    MOV EDX,dword ptr [ESP + 0x464]     ; 005635db
    MOV dword ptr [ESP + 0x46c],EDI     ; 005635e2
    MOV dword ptr [ESP + 0x468],EDI     ; 005635e9
    TEST EDX,EDX                        ; 005635f0
    JZ 0x00563608                       ; 005635f2
        ;   XREF to: 00563608 (CONDITIONAL_JUMP)  ; LAB_00563608
    PUSH 0x5eb50c                       ; 005635f4 | = "placeobject\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 005635f9 | g_CConsolePtr
    PUSH ECX                            ; 005635ff | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00563600
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00563605
    CMP dword ptr [EBX + 0x256a4],0x6   ; 00563608
        ;   Label: LAB_00563608
    JNZ 0x00563640                      ; 0056360f
        ;   XREF to: 00563640 (CONDITIONAL_JUMP)  ; LAB_00563640
    XOR EDI,EDI                         ; 00563611
    MOV EDX,dword ptr [ESP + 0x464]     ; 00563613
    MOV dword ptr [ESP + 0x46c],EDI     ; 0056361a
    MOV dword ptr [ESP + 0x468],EDI     ; 00563621
    TEST EDX,EDX                        ; 00563628
    JZ 0x00563640                       ; 0056362a
        ;   XREF to: 00563640 (CONDITIONAL_JUMP)  ; LAB_00563640
    PUSH 0x5eb519                       ; 0056362c | = "putdownobject\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 00563631 | g_CConsolePtr
    PUSH ECX                            ; 00563637 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00563638
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0056363d
    CMP dword ptr [EBX + 0x256a4],0x3   ; 00563640
        ;   Label: LAB_00563640
    JNZ 0x00563678                      ; 00563647
        ;   XREF to: 00563678 (CONDITIONAL_JUMP)  ; LAB_00563678
    XOR EDI,EDI                         ; 00563649
    MOV EDX,dword ptr [ESP + 0x464]     ; 0056364b
    MOV dword ptr [ESP + 0x46c],EDI     ; 00563652
    MOV dword ptr [ESP + 0x468],EDI     ; 00563659
    TEST EDX,EDX                        ; 00563660
    JZ 0x00563678                       ; 00563662
        ;   XREF to: 00563678 (CONDITIONAL_JUMP)  ; LAB_00563678
    PUSH 0x5eb528                       ; 00563664 | = "toss\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 00563669 | g_CConsolePtr
    PUSH ECX                            ; 0056366f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00563670
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00563675
    CMP dword ptr [EBX + 0x256a4],0x7   ; 00563678
        ;   Label: LAB_00563678
    JNZ 0x005636b0                      ; 0056367f
        ;   XREF to: 005636b0 (CONDITIONAL_JUMP)  ; LAB_005636b0
    XOR EDI,EDI                         ; 00563681
    MOV EDX,dword ptr [ESP + 0x464]     ; 00563683
    MOV dword ptr [ESP + 0x46c],EDI     ; 0056368a
    MOV dword ptr [ESP + 0x468],EDI     ; 00563691
    TEST EDX,EDX                        ; 00563698
    JZ 0x005636b0                       ; 0056369a
        ;   XREF to: 005636b0 (CONDITIONAL_JUMP)  ; LAB_005636b0
    PUSH 0x5eb52e                       ; 0056369c | = "attackmelee\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 005636a1 | g_CConsolePtr
    PUSH ECX                            ; 005636a7 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 005636a8
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005636ad
    CMP dword ptr [EBX + 0x276c],0x0    ; 005636b0
        ;   Label: LAB_005636b0
    JNZ 0x005636e6                      ; 005636b7
        ;   XREF to: 005636e6 (CONDITIONAL_JUMP)  ; LAB_005636e6
    CMP dword ptr [EBX + 0xdc],0x0      ; 005636b9
    JZ 0x005636cd                       ; 005636c0
        ;   XREF to: 005636cd (CONDITIONAL_JUMP)  ; LAB_005636cd
    MOV dword ptr [ESP + 0x450],0x1     ; 005636c2
    FLD float ptr [EBX + 0x24]          ; 005636cd
        ;   Label: LAB_005636cd
    FCOMP float ptr [EBX + 0x2574]      ; 005636d0
    FNSTSW AX                           ; 005636d6
    SAHF                                ; 005636d8
    JZ 0x005636e6                       ; 005636d9
        ;   XREF to: 005636e6 (CONDITIONAL_JUMP)  ; LAB_005636e6
    MOV dword ptr [ESP + 0x450],0x1     ; 005636db
    PUSH dword ptr [EBP + 0x18]         ; 005636e6
        ;   Label: LAB_005636e6
    FLD float ptr [EBX + 0x2510]        ; 005636e9
    PUSH EBX                            ; 005636ef
    FSTP float ptr [EBX + 0x2594]       ; 005636f0
    CALL core_charactr.cpp_FUN_0042b2a0 ; 005636f6
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 005636fb
    LEA ESI,[EBX + 0x2b4]               ; 005636fe
    PUSH ESI                            ; 00563704
    CALL core_motion.cpp_FUN_005035c0   ; 00563705
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056370a
    ADD ESP,0x4                         ; 0056370d
    CMP EAX,0x4                         ; 00563710
    JNZ 0x00563f30                      ; 00563713
        ;   XREF to: 00563f30 (CONDITIONAL_JUMP)  ; LAB_00563f30
    FLD float ptr [EBX + 0x2508]        ; 00563719
        ;   Label: LAB_00563719
    FLD ST0                             ; 0056371f
    FMUL double ptr [0x005eb5d5]        ; 00563721 | DAT_005eb5d5
    FSTP ST1                            ; 00563727
    FSTP float ptr [EBX + 0x2508]       ; 00563729
    MOV ECX,dword ptr [EBX + 0x25618]   ; 0056372f
        ;   Label: LAB_0056372f
    TEST ECX,ECX                        ; 00563735
    JNZ 0x00563f4a                      ; 00563737
        ;   XREF to: 00563f4a (CONDITIONAL_JUMP)  ; LAB_00563f4a
    FLD float ptr [EBP + 0x18]          ; 0056373d
    FMUL double ptr [0x005eb5d5]        ; 00563740 | DAT_005eb5d5
    FSUBR float ptr [EBX + 0x256b0]     ; 00563746
    FST float ptr [EBX + 0x256b0]       ; 0056374c
    FLDZ                                ; 00563752
    FCOMPP                              ; 00563754
    FNSTSW AX                           ; 00563756
    SAHF                                ; 00563758
    JBE 0x00563761                      ; 00563759
        ;   XREF to: 00563761 (CONDITIONAL_JUMP)  ; LAB_00563761
    MOV dword ptr [EBX + 0x256b0],ECX   ; 0056375b
    MOV ESI,0x1                         ; 00563761
        ;   Label: LAB_00563761
    MOV EDI,dword ptr [EBX + 0x25614]   ; 00563766
    MOV dword ptr [ESP + 0x420],ESI     ; 0056376c
    TEST EDI,EDI                        ; 00563773
    JZ 0x00563ff9                       ; 00563775
        ;   XREF to: 00563ff9 (CONDITIONAL_JUMP)  ; LAB_00563ff9
    PUSH 0x2a                           ; 0056377b
    LEA EAX,[EBX + 0x2b4]               ; 0056377d
    PUSH EAX                            ; 00563783
    CALL core_motion.cpp_FUN_005038a0   ; 00563784
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00563789
    FLD float ptr [ESP + 0x480]         ; 00563790
    FLDZ                                ; 00563797
    ADD ESP,0x8                         ; 00563799
    FCOMPP                              ; 0056379c
    FNSTSW AX                           ; 0056379e
    SAHF                                ; 005637a0
    JC 0x00563f7b                       ; 005637a1
        ;   XREF to: 00563f7b (CONDITIONAL_JUMP)  ; LAB_00563f7b
    MOV dword ptr [EBX + 0x25614],0x0   ; 005637a7
    FLD float ptr [EBX + 0x258d0]       ; 005637b1
        ;   Label: LAB_005637b1
    FLDZ                                ; 005637b7
    FCOMPP                              ; 005637b9
    FNSTSW AX                           ; 005637bb
    SAHF                                ; 005637bd
    JNC 0x005638ce                      ; 005637be
        ;   XREF to: 005638ce (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBP + 0x18]          ; 005637c4
    FCOMP float ptr [EBX + 0x258d0]     ; 005637c7
    FNSTSW AX                           ; 005637cd
    SAHF                                ; 005637cf
    JNC 0x00563fe1                      ; 005637d0
        ;   XREF to: 00563fe1 (CONDITIONAL_JUMP)  ; LAB_00563fe1
    FLD float ptr [EBP + 0x18]          ; 005637d6
    FLD ST0                             ; 005637d9
    FDIV float ptr [EBX + 0x258d0]      ; 005637db
    FLD float ptr [EBX + 0x258d0]       ; 005637e1
    FSUBRP ST2,ST0                      ; 005637e7
    FSTP float ptr [ESP + 0x20]         ; 005637e9
    FSTP float ptr [EBX + 0x258d0]      ; 005637ed
    LEA EAX,[EBX + 0x258c0]             ; 005637f3
        ;   Label: LAB_005637f3
    FLD float ptr [EAX]                 ; 005637f9
    FMUL float ptr [ESP + 0x20]         ; 005637fb
    FLD float ptr [EAX + 0x4]           ; 005637ff
    FMUL float ptr [ESP + 0x20]         ; 00563802
    FLD float ptr [EAX + 0x8]           ; 00563806
    FMUL float ptr [ESP + 0x20]         ; 00563809
    FLD float ptr [ESP + 0x20]          ; 0056380d
    LEA EDI,[ESP + 0x1a0]               ; 00563811
    LEA ESI,[ESP + 0xec]                ; 00563818
    FLD1                                ; 0056381f
    LEA EDX,[EBX + 0x20]                ; 00563821
    FSUBRP                              ; 00563824
    FXCH ST3                            ; 00563826
    FSTP float ptr [ESP + 0xec]         ; 00563828
    FXCH                                ; 0056382f
    FSTP float ptr [ESP + 0xf0]         ; 00563831
    FSTP float ptr [ESP + 0xf4]         ; 00563838
    MOVSD ES:EDI,ESI                    ; 0056383f
    MOVSD ES:EDI,ESI                    ; 00563840
    MOVSD ES:EDI,ESI                    ; 00563841
    FSTP float ptr [ESP + 0x434]        ; 00563842
    FLD float ptr [EDX]                 ; 00563849
    FLD float ptr [EDX + 0x4]           ; 0056384b
    FLD float ptr [EDX + 0x8]           ; 0056384e
    FXCH ST2                            ; 00563851
    FADD float ptr [ESP + 0x1a0]        ; 00563853
    FXCH                                ; 0056385a
    FADD float ptr [ESP + 0x1a4]        ; 0056385c
    FXCH ST2                            ; 00563863
    FADD float ptr [ESP + 0x1a8]        ; 00563865
    FXCH                                ; 0056386c
    FSTP float ptr [EDX]                ; 0056386e
    FXCH                                ; 00563870
    FSTP float ptr [EDX + 0x4]          ; 00563872
    FSTP float ptr [EDX + 0x8]          ; 00563875
    FLD float ptr [EAX]                 ; 00563878
    FMUL float ptr [ESP + 0x434]        ; 0056387a
    FLD float ptr [EAX + 0x4]           ; 00563881
    FMUL float ptr [ESP + 0x434]        ; 00563884
    FLD float ptr [EAX + 0x8]           ; 0056388b
    FMUL float ptr [ESP + 0x434]        ; 0056388e
    FXCH ST2                            ; 00563895
    FSTP float ptr [EAX]                ; 00563897
    FSTP float ptr [EAX + 0x4]          ; 00563899
    FSTP float ptr [EAX + 0x8]          ; 0056389c
    FLD float ptr [EBX + 0x258cc]       ; 0056389f
    FSUB float ptr [EBX + 0x34]         ; 005638a5
    SUB ESP,0x4                         ; 005638a8
    FSTP float ptr [ESP]                ; 005638ab
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005638ae
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x47c],EAX     ; 005638b3
    FLD float ptr [ESP + 0x47c]         ; 005638ba
    ADD ESP,0x4                         ; 005638c1
    FMUL float ptr [ESP + 0x20]         ; 005638c4
    FSTP float ptr [EBX + 0x2578]       ; 005638c8
    LEA EDI,[EBX + 0x2b4]               ; 005638ce
        ;   Label: caseD_6
    PUSH EDI                            ; 005638d4
    CALL core_motion.cpp_FUN_005035c0   ; 005638d5
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005638da
    ADD ESP,0x4                         ; 005638dd
    CMP EAX,0x1b                        ; 005638e0
    JNZ 0x00563927                      ; 005638e3
        ;   XREF to: 00563927 (CONDITIONAL_JUMP)  ; LAB_00563927
    MOV ECX,dword ptr [0x007bc3e0]      ; 005638e5 | g_CAmmoBoxClassInfo.name_hash
    PUSH ECX                            ; 005638eb
    MOV ESI,dword ptr [EBX + 0x25608]   ; 005638ec
    PUSH ESI                            ; 005638f2
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005638f3
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 005638f8
    ADD ESP,0x8                         ; 005638fa
    TEST EAX,EAX                        ; 005638fd
    JZ 0x00563927                       ; 005638ff
        ;   XREF to: 00563927 (CONDITIONAL_JUMP)  ; LAB_00563927
    PUSH EDI                            ; 00563901
    CALL core_motion.cpp_FUN_00503e60   ; 00563902
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x47c],EAX     ; 00563907
    FLD float ptr [ESP + 0x47c]         ; 0056390e
    ADD ESP,0x4                         ; 00563915
    SUB ESP,0x4                         ; 00563918
    FSTP float ptr [ESP]                ; 0056391b
    PUSH ESI                            ; 0056391e
    CALL core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e600 ; 0056391f
        ;   XREF to: 0040e600 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e600(CAmmoBox * this_ptr, float open_pct)
    ADD ESP,0x8                         ; 00563924
    PUSH EBX                            ; 00563927
        ;   Label: LAB_00563927
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 00563928
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0056392d
    PUSH dword ptr [EBP + 0x18]         ; 00563930
    PUSH EBX                            ; 00563933
    CALL core_stranger.cpp_FUN_00567530 ; 00563934
        ;   XREF to: 00567530 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_00567530(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00563939
    CMP dword ptr [ESP + 0x420],0x0     ; 0056393c
    JZ 0x0056395e                       ; 00563944
        ;   XREF to: 0056395e (CONDITIONAL_JUMP)  ; LAB_0056395e
    LEA EAX,[EBX + 0x256e4]             ; 00563946
    MOV dword ptr [EAX + 0x8],0x0       ; 0056394c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00563953
    MOV dword ptr [EAX + 0x4],EDX       ; 00563956
    MOV EDX,dword ptr [EAX + 0x4]       ; 00563959
    MOV dword ptr [EAX],EDX             ; 0056395c
    CMP dword ptr [EBX + 0x25614],0x0   ; 0056395e
        ;   Label: LAB_0056395e
    JZ 0x00564e79                       ; 00563965
        ;   XREF to: 00564e79 (CONDITIONAL_JUMP)  ; LAB_00564e79
    LEA EAX,[EBX + 0x2508]              ; 0056396b
        ;   Label: LAB_0056396b
    PUSH EAX                            ; 00563971
    LEA ESI,[ESP + 0x1b0]               ; 00563972
    PUSH EBX                            ; 00563979
    LEA EDI,[ESP + 0x22c]               ; 0056397a
    MOV dword ptr [ESP + 0x480],EAX     ; 00563981
    CALL core_actor.cpp_FUN_00408cf0    ; 00563988
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x1b4]               ; 0056398d
    ADD ESP,0x8                         ; 00563994
    LEA EAX,[EBX + 0x20]                ; 00563997
    MOVSD ES:EDI,ESI                    ; 0056399a
    MOVSD ES:EDI,ESI                    ; 0056399b
    MOVSD ES:EDI,ESI                    ; 0056399c
    FLD float ptr [EAX]                 ; 0056399d
    FLD float ptr [EAX + 0x4]           ; 0056399f
    FLD float ptr [EAX + 0x8]           ; 005639a2
    FXCH ST2                            ; 005639a5
    FADD float ptr [ESP + 0x224]        ; 005639a7
    FXCH                                ; 005639ae
    FADD float ptr [ESP + 0x228]        ; 005639b0
    FXCH ST2                            ; 005639b7
    FADD float ptr [ESP + 0x22c]        ; 005639b9
    FXCH                                ; 005639c0
    FSTP float ptr [EAX]                ; 005639c2
    FXCH                                ; 005639c4
    FSTP float ptr [EAX + 0x4]          ; 005639c6
    FSTP float ptr [EAX + 0x8]          ; 005639c9
    MOV EAX,dword ptr [ESP + 0x478]     ; 005639cc
    MOV dword ptr [EAX + 0x8],0x0       ; 005639d3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005639da
    MOV dword ptr [EAX + 0x4],EDX       ; 005639dd
    MOV EDX,dword ptr [EAX + 0x4]       ; 005639e0
    MOV dword ptr [EAX],EDX             ; 005639e3
    MOV dword ptr [EBX + 0x256fc],0x0   ; 005639e5
        ;   Label: LAB_005639e5
    LEA EAX,[EBX + 0x256e4]             ; 005639ef
        ;   Label: LAB_005639ef
    MOV dword ptr [EAX + 0x8],0x0       ; 005639f5
    MOV EDI,dword ptr [ESP + 0x45c]     ; 005639fc
    MOV EDX,dword ptr [EAX + 0x8]       ; 00563a03
    MOV dword ptr [EAX + 0x4],EDX       ; 00563a06
    MOV EDX,dword ptr [EAX + 0x4]       ; 00563a09
    MOV dword ptr [EAX],EDX             ; 00563a0c
    TEST EDI,EDI                        ; 00563a0e
    JZ 0x00563ac9                       ; 00563a10
        ;   XREF to: 00563ac9 (CONDITIONAL_JUMP)  ; LAB_00563ac9
    CMP dword ptr [EBX + 0x10a80],0x0   ; 00563a16
    JZ 0x00563a60                       ; 00563a1d
        ;   XREF to: 00563a60 (CONDITIONAL_JUMP)  ; LAB_00563a60
    CMP dword ptr [EBX + 0x25640],0x0   ; 00563a1f
    JZ 0x005655b1                       ; 00563a26
        ;   XREF to: 005655b1 (CONDITIONAL_JUMP)  ; LAB_005655b1
    MOV EAX,[0x00616494]                ; 00563a2c | g_CGamePtr
    MOV dword ptr [EBX + 0x25640],0x0   ; 00563a31
    CMP dword ptr [EAX + 0x264],0x0     ; 00563a3b | g_CGameInstance.flashlight_active
    JZ 0x00563a60                       ; 00563a42
        ;   XREF to: 00563a60 (CONDITIONAL_JUMP)  ; LAB_00563a60
    PUSH 0x5eb584                       ; 00563a44 | = "flashlit.wav"
    MOV dword ptr [EAX + 0x264],0x0     ; 00563a49 | g_CGameInstance.flashlight_active
    PUSH EBX                            ; 00563a53
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00563a54
    CALL dword ptr [EAX + 0x34]         ; 00563a5a
    ADD ESP,0x8                         ; 00563a5d
    CMP dword ptr [EBX + 0x10a7c],0x0   ; 00563a60
        ;   Label: LAB_00563a60
    JZ 0x00563ac9                       ; 00563a67
        ;   XREF to: 00563ac9 (CONDITIONAL_JUMP)  ; LAB_00563ac9
    LEA EAX,[EBX + 0x2437c]             ; 00563a69
    MOV EDX,dword ptr [EAX + 0x468]     ; 00563a6f
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x610] ; 00563a75
    TEST EAX,EAX                        ; 00563a7c
    JZ 0x00563ac9                       ; 00563a7e
        ;   XREF to: 00563ac9 (CONDITIONAL_JUMP)  ; LAB_00563ac9
    CMP dword ptr [EAX + 0x44c],0x0     ; 00563a80
    JZ 0x00563ac9                       ; 00563a87
        ;   XREF to: 00563ac9 (CONDITIONAL_JUMP)  ; LAB_00563ac9
    MOV EAX,[0x00616494]                ; 00563a89 | g_CGamePtr
    CMP dword ptr [EAX + 0x264],0x0     ; 00563a8e | g_CGameInstance.flashlight_active
    SETZ AL                             ; 00563a95
    MOV EDX,EAX                         ; 00563a98
    MOV EAX,[0x00616494]                ; 00563a9a | g_CGamePtr
    AND EDX,0xff                        ; 00563a9f
    MOV dword ptr [EAX + 0x264],EDX     ; 00563aa5 | g_CGameInstance.flashlight_active
    JZ 0x00563ab7                       ; 00563aab
        ;   XREF to: 00563ab7 (CONDITIONAL_JUMP)  ; LAB_00563ab7
    MOV dword ptr [EBX + 0x25640],0x1   ; 00563aad
    PUSH 0x5eb591                       ; 00563ab7 | = "flashlit.wav"
        ;   Label: LAB_00563ab7
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00563abc
    PUSH EBX                            ; 00563ac2
    CALL dword ptr [EAX + 0x34]         ; 00563ac3
    ADD ESP,0x8                         ; 00563ac6
    LEA EAX,[EBX + 0x2437c]             ; 00563ac9
        ;   Label: LAB_00563ac9
    MOV EDX,dword ptr [EAX + 0x468]     ; 00563acf
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x610] ; 00563ad5
    TEST EAX,EAX                        ; 00563adc
    JNZ 0x005655c0                      ; 00563ade
        ;   XREF to: 005655c0 (CONDITIONAL_JUMP)  ; LAB_005655c0
    MOV EAX,[0x00616494]                ; 00563ae4 | g_CGamePtr
    MOV dword ptr [EAX + 0x264],0x0     ; 00563ae9 | g_CGameInstance.flashlight_active
    CMP dword ptr [ESP + 0x454],0x0     ; 00563af3
        ;   Label: LAB_00563af3
    JZ 0x00563b09                       ; 00563afb
        ;   XREF to: 00563b09 (CONDITIONAL_JUMP)  ; LAB_00563b09
    PUSH dword ptr [EBP + 0x18]         ; 00563afd
    PUSH EBX                            ; 00563b00
    CALL core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50 ; 00563b01
        ;   XREF to: 0056db50 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00563b06
    CMP dword ptr [EBX + 0x25640],0x0   ; 00563b09
        ;   Label: LAB_00563b09
    JZ 0x005655de                       ; 00563b10
        ;   XREF to: 005655de (CONDITIONAL_JUMP)  ; LAB_005655de
    FLD float ptr [EBP + 0x18]          ; 00563b16
    FDIV float ptr [0x005fc1bc]         ; 00563b19 | DAT_005fc1bc
    FADD float ptr [EBX + 0x25644]      ; 00563b1f
    FST float ptr [EBX + 0x25644]       ; 00563b25
    FLD1                                ; 00563b2b
    FCOMPP                              ; 00563b2d
    FNSTSW AX                           ; 00563b2f
    SAHF                                ; 00563b31
    JNC 0x00563b3e                      ; 00563b32
        ;   XREF to: 00563b3e (CONDITIONAL_JUMP)  ; LAB_00563b3e
    MOV dword ptr [EBX + 0x25644],0x3f800000 ; 00563b34
    FLD float ptr [EBP + 0x18]          ; 00563b3e
        ;   Label: LAB_00563b3e
    FDIV float ptr [0x005fc1c4]         ; 00563b41 | DAT_005fc1c4
    FSUBR float ptr [EBX + 0x25664]     ; 00563b47
    MOV dword ptr [EBX + 0x25648],0x0   ; 00563b4d
    FST float ptr [EBX + 0x25664]       ; 00563b57
    FLDZ                                ; 00563b5d
    FCOMPP                              ; 00563b5f
    FNSTSW AX                           ; 00563b61
    SAHF                                ; 00563b63
    JC 0x00563b70                       ; 00563b64
        ;   XREF to: 00563b70 (CONDITIONAL_JUMP)  ; LAB_00563b70
    MOV dword ptr [EBX + 0x25664],0x0   ; 00563b66
    FLD float ptr [EBP + 0x18]          ; 00563b70
        ;   Label: LAB_00563b70
    FDIV float ptr [0x005fc1c4]         ; 00563b73 | DAT_005fc1c4
    FSUBR float ptr [EBX + 0x25684]     ; 00563b79
    FST float ptr [EBX + 0x25684]       ; 00563b7f
    FLDZ                                ; 00563b85
    FCOMPP                              ; 00563b87
    FNSTSW AX                           ; 00563b89
    SAHF                                ; 00563b8b
    JC 0x00563b98                       ; 00563b8c
        ;   XREF to: 00563b98 (CONDITIONAL_JUMP)  ; LAB_00563b98
    MOV dword ptr [EBX + 0x25684],0x0   ; 00563b8e
    CMP dword ptr [ESP + 0x468],0x0     ; 00563b98
        ;   Label: LAB_00563b98
    JZ 0x00563bab                       ; 00563ba0
        ;   XREF to: 00563bab (CONDITIONAL_JUMP)  ; LAB_00563bab
    PUSH EBX                            ; 00563ba2
    CALL core_stranger.cpp_CStranger_handleActionButton_FUN_0056e4d0 ; 00563ba3
        ;   XREF to: 0056e4d0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_handleActionButton_FUN_0056e4d0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00563ba8
    PUSH EBX                            ; 00563bab
        ;   Label: LAB_00563bab
    CALL core_stranger.cpp_FUN_00565ff0 ; 00563bac
        ;   XREF to: 00565ff0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_00565ff0(CStranger * this_ptr)
    MOV ECX,dword ptr [EBX + 0x24378]   ; 00563bb1
    ADD ESP,0x4                         ; 00563bb7
    CMP ECX,0x2                         ; 00563bba
    JNZ 0x00563bfe                      ; 00563bbd
        ;   XREF to: 00563bfe (CONDITIONAL_JUMP)  ; LAB_00563bfe
    MOV ESI,dword ptr [EBX + 0x25698]   ; 00563bbf
    TEST ESI,ESI                        ; 00563bc5
    JZ 0x00563bfe                       ; 00563bc7
        ;   XREF to: 00563bfe (CONDITIONAL_JUMP)  ; LAB_00563bfe
    MOV EDI,dword ptr [ESI + 0x43c]     ; 00563bc9
    TEST EDI,EDI                        ; 00563bcf
    JNZ 0x00563bfe                      ; 00563bd1
        ;   XREF to: 00563bfe (CONDITIONAL_JUMP)  ; LAB_00563bfe
    LEA EAX,[EBX + 0x2b4]               ; 00563bd3
    PUSH EAX                            ; 00563bd9
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 00563bda
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00563bdf
    PUSH EDI                            ; 00563be2
    PUSH EBX                            ; 00563be3
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0 ; 00563be4
        ;   XREF to: 005683d0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 00563be9
    PUSH EBX                            ; 00563bec
    CALL core_stranger.cpp_CStranger_aimLeftPistol_FUN_0056ca10 ; 00563bed
        ;   XREF to: 0056ca10 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_aimLeftPistol_FUN_0056ca10(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00563bf2
    PUSH EBX                            ; 00563bf5
    CALL core_stranger.cpp_FUN_00565ff0 ; 00563bf6
        ;   XREF to: 00565ff0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_FUN_00565ff0(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00563bfb
    MOV EAX,dword ptr [ESP + 0x46c]     ; 00563bfe
        ;   Label: LAB_00563bfe
    PUSH EAX                            ; 00563c05
    PUSH dword ptr [EBP + 0x18]         ; 00563c06
    PUSH EBX                            ; 00563c09
    CALL core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0056d3d0 ; 00563c0a
        ;   XREF to: 0056d3d0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateArmRecoilBlend_FUN_0056d3d0(CStranger * this_ptr, float delta_time, int is_weapon_active)
    ADD ESP,0xc                         ; 00563c0f
    PUSH EBX                            ; 00563c12
    CALL core_stranger.cpp_CStranger_updateClothSimulation_FUN_0056eb60 ; 00563c13
        ;   XREF to: 0056eb60 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateClothSimulation_FUN_0056eb60(CStranger * this_ptr)
    ADD ESP,0x4                         ; 00563c18
    PUSH dword ptr [EBP + 0x18]         ; 00563c1b
    PUSH EBX                            ; 00563c1e
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 00563c1f
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00563c24
    PUSH 0x6                            ; 00563c27
    LEA ESI,[EBX + 0x2b4]               ; 00563c29
    PUSH ESI                            ; 00563c2f
    CALL core_motion.cpp_FUN_005038a0   ; 00563c30
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00563c35
    FLD float ptr [ESP + 0x480]         ; 00563c3c
    FLDZ                                ; 00563c43
    ADD ESP,0x8                         ; 00563c45
    FCOMPP                              ; 00563c48
    FNSTSW AX                           ; 00563c4a
    SAHF                                ; 00563c4c
    JNC 0x0056560f                      ; 00563c4d
        ;   XREF to: 0056560f (CONDITIONAL_JUMP)  ; LAB_0056560f
    PUSH ESI                            ; 00563c53
    CALL core_motion.cpp_FUN_00503e60   ; 00563c54
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x47c],EAX     ; 00563c59
    FLD float ptr [ESP + 0x47c]         ; 00563c60
    FLD1                                ; 00563c67
    ADD ESP,0x4                         ; 00563c69
    FCOMPP                              ; 00563c6c
    FNSTSW AX                           ; 00563c6e
    SAHF                                ; 00563c70
    JNC 0x00563da2                      ; 00563c71
        ;   XREF to: 00563da2 (CONDITIONAL_JUMP)  ; LAB_00563da2
    MOV EDX,dword ptr [0x007bc9e8]      ; 00563c77 | g_CBoxActorClassInfo.name_hash
    PUSH EDX                            ; 00563c7d
    MOV ECX,dword ptr [EBX + 0x2560c]   ; 00563c7e
    PUSH ECX                            ; 00563c84
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 00563c85
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x42c],EAX     ; 00563c8a
    ADD ESP,0x8                         ; 00563c91
    TEST EAX,EAX                        ; 00563c94
    JZ 0x00563da2                       ; 00563c96
        ;   XREF to: 00563da2 (CONDITIONAL_JUMP)  ; LAB_00563da2
    PUSH EBX                            ; 00563c9c
    LEA ESI,[ESP + 0x330]               ; 00563c9d
    LEA EDI,[ESP + 0x2e8]               ; 00563ca4
    CALL core_stranger.cpp_FUN_00565f30 ; 00563cab
        ;   XREF to: 00565f30 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_00565f30()
    ADD ESP,0x4                         ; 00563cb0
    LEA EAX,[ESP + 0x2e4]               ; 00563cb3
    LEA ESI,[ESP + 0x32c]               ; 00563cba
    PUSH EAX                            ; 00563cc1
    MOVSD ES:EDI,ESI                    ; 00563cc2
    MOVSD ES:EDI,ESI                    ; 00563cc3
    MOVSD ES:EDI,ESI                    ; 00563cc4
    PUSH EBX                            ; 00563cc5
    LEA ESI,[ESP + 0x3b8]               ; 00563cc6
    LEA EDI,[ESP + 0x3f4]               ; 00563ccd
    CALL core_actor.cpp_FUN_00408d70    ; 00563cd4
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x3b8]               ; 00563cd9
    ADD ESP,0x8                         ; 00563ce0
    LEA EAX,[ESP + 0x14c]               ; 00563ce3
    MOVSD ES:EDI,ESI                    ; 00563cea
    MOVSD ES:EDI,ESI                    ; 00563ceb
    MOVSD ES:EDI,ESI                    ; 00563cec
    PUSH EAX                            ; 00563ced
    FLD float ptr [ESP + 0x3f0]         ; 00563cee
    FLD float ptr [ESP + 0x3f4]         ; 00563cf5
    FLD float ptr [ESP + 0x3f8]         ; 00563cfc
    LEA EDI,[ESP + 0x150]               ; 00563d03
    LEA ESI,[ESP + 0x18c]               ; 00563d0a
    FXCH ST2                            ; 00563d11
    FSUB float ptr [ESP + 0x288]        ; 00563d13
    FXCH                                ; 00563d1a
    FSUB float ptr [ESP + 0x28c]        ; 00563d1c
    FXCH ST2                            ; 00563d23
    FSUB float ptr [ESP + 0x290]        ; 00563d25
    FXCH                                ; 00563d2c
    FSTP float ptr [ESP + 0x18c]        ; 00563d2e
    FXCH                                ; 00563d35
    FSTP float ptr [ESP + 0x190]        ; 00563d37
    FSTP float ptr [ESP + 0x194]        ; 00563d3e
    MOVSD ES:EDI,ESI                    ; 00563d45
    MOVSD ES:EDI,ESI                    ; 00563d46
    MOVSD ES:EDI,ESI                    ; 00563d47
    PUSH EBX                            ; 00563d48
    XOR EDI,EDI                         ; 00563d49
    LEA ESI,[ESP + 0x340]               ; 00563d4b
    MOV dword ptr [ESP + 0x158],EDI     ; 00563d52
    CALL core_actor.cpp_FUN_00408d30    ; 00563d59
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA EDI,[ESP + 0x3a0]               ; 00563d5e
    LEA ESI,[ESP + 0x340]               ; 00563d65
    ADD ESP,0x8                         ; 00563d6c
    MOVSD ES:EDI,ESI                    ; 00563d6f
    MOVSD ES:EDI,ESI                    ; 00563d70
    MOVSD ES:EDI,ESI                    ; 00563d71
    FLD float ptr [ESP + 0x3a0]         ; 00563d72
    FLDZ                                ; 00563d79
    FCOMPP                              ; 00563d7b
    FNSTSW AX                           ; 00563d7d
    SAHF                                ; 00563d7f
    JNC 0x00563da2                      ; 00563d80
        ;   XREF to: 00563da2 (CONDITIONAL_JUMP)  ; LAB_00563da2
    LEA EAX,[ESP + 0x14c]               ; 00563d82
    PUSH EAX                            ; 00563d89
    LEA EAX,[ESP + 0x288]               ; 00563d8a
    PUSH EAX                            ; 00563d91
    MOV EAX,dword ptr [ESP + 0x42c]     ; 00563d92
    PUSH EAX                            ; 00563d99
    CALL core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40 ; 00563d9a
        ;   XREF to: 0041cb40 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40(CBoxActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    ADD ESP,0xc                         ; 00563d9f
    PUSH 0x0                            ; 00563da2
        ;   Label: LAB_00563da2
    PUSH EBX                            ; 00563da4
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0 ; 00563da5
        ;   XREF to: 005683d0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_005683d0(CStranger * this_ptr, int hand_index)
    ADD ESP,0x8                         ; 00563daa
    PUSH dword ptr [EBP + 0x18]         ; 00563dad
    PUSH 0x0                            ; 00563db0
    PUSH EBX                            ; 00563db2
    CALL core_stranger.cpp_FUN_0056bf00 ; 00563db3
        ;   XREF to: 0056bf00 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_0056bf00()
    ADD ESP,0xc                         ; 00563db8
    PUSH dword ptr [EBP + 0x18]         ; 00563dbb
    PUSH 0x1                            ; 00563dbe
    PUSH EBX                            ; 00563dc0
    CALL core_stranger.cpp_FUN_0056bf00 ; 00563dc1
        ;   XREF to: 0056bf00 (UNCONDITIONAL_CALL)  ; undefined core_stranger.cpp_FUN_0056bf00()
    ADD ESP,0xc                         ; 00563dc6
    PUSH dword ptr [EBP + 0x18]         ; 00563dc9
    PUSH EBX                            ; 00563dcc
    CALL core_stranger.cpp_CStranger_handleFireButton_FUN_0056e850 ; 00563dcd
        ;   XREF to: 0056e850 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_handleFireButton_FUN_0056e850(CStranger * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00563dd2
    LEA EAX,[EBX + 0x2437c]             ; 00563dd5
    PUSH EAX                            ; 00563ddb
    CALL core_inv.cpp_CInventory_updateInventory_FUN_004dccd0 ; 00563ddc
        ;   XREF to: 004dccd0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_updateInventory_FUN_004dccd0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 00563de1
    PUSH dword ptr [EBP + 0x18]         ; 00563de4
    PUSH EBX                            ; 00563de7
    CALL core_stranger.cpp_CStranger_processWeaponTick_FUN_0056eed0 ; 00563de8
        ;   XREF to: 0056eed0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_processWeaponTick_FUN_0056eed0(CStranger * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x25698]   ; 00563ded
    ADD ESP,0x8                         ; 00563df3
    TEST EDX,EDX                        ; 00563df6
    JZ 0x00563e0d                       ; 00563df8
        ;   XREF to: 00563e0d (CONDITIONAL_JUMP)  ; LAB_00563e0d
    CMP dword ptr [EDX + 0xfc],0x0      ; 00563dfa
    JZ 0x00563e0d                       ; 00563e01
        ;   XREF to: 00563e0d (CONDITIONAL_JUMP)  ; LAB_00563e0d
    MOV dword ptr [EBX + 0xfc],0x1      ; 00563e03
    MOV ESI,dword ptr [EBX + 0x256b4]   ; 00563e0d
        ;   Label: LAB_00563e0d
    PUSH ESI                            ; 00563e13
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00563e14
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00563e19
    TEST EAX,EAX                        ; 00563e1c
    JZ 0x00565663                       ; 00563e1e
        ;   XREF to: 00565663 (CONDITIONAL_JUMP)  ; LAB_00565663
    MOV EAX,[0x00616494]                ; 00563e24 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x25c],0x0     ; 00563e29 | g_CGameInstance.goggles_active
    JZ 0x0056561d                       ; 00563e30
        ;   XREF to: 0056561d (CONDITIONAL_JUMP)  ; LAB_0056561d
    MOV ESP,EBP                         ; 00563e36
        ;   Label: LAB_00563e36
    POP EBP                             ; 00563e38
    POP EDI                             ; 00563e39
    POP ESI                             ; 00563e3a
    POP EBX                             ; 00563e3b
    RET                                 ; 00563e3c
    CMP dword ptr [EBX + 0x25694],0x0   ; 00563e3d
        ;   Label: LAB_00563e3d
    JNZ 0x005633de                      ; 00563e44
        ;   XREF to: 005633de (CONDITIONAL_JUMP)  ; LAB_005633de
    JMP 0x00563420                      ; 00563e4a
        ;   XREF to: 00563420 (UNCONDITIONAL_JUMP)  ; LAB_00563420
    CMP dword ptr [EBX + 0x256a4],0x4   ; 00563e4f
        ;   Label: LAB_00563e4f
    JZ 0x0056342d                       ; 00563e56
        ;   XREF to: 0056342d (CONDITIONAL_JUMP)  ; LAB_0056342d
    JMP 0x00563463                      ; 00563e5c
        ;   XREF to: 00563463 (UNCONDITIONAL_JUMP)  ; LAB_00563463
    PUSH 0x28                           ; 00563e61
        ;   Label: LAB_00563e61
    PUSH ESI                            ; 00563e63
    CALL core_motion.cpp_FUN_005038a0   ; 00563e64
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00563e69
    FLD float ptr [ESP + 0x480]         ; 00563e70
    FLDZ                                ; 00563e77
    ADD ESP,0x8                         ; 00563e79
    FCOMPP                              ; 00563e7c
    FNSTSW AX                           ; 00563e7e
    SAHF                                ; 00563e80
    JC 0x0056348f                       ; 00563e81
        ;   XREF to: 0056348f (CONDITIONAL_JUMP)  ; LAB_0056348f
    PUSH 0x29                           ; 00563e87
    PUSH ESI                            ; 00563e89
    CALL core_motion.cpp_FUN_005038a0   ; 00563e8a
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00563e8f
    FLD float ptr [ESP + 0x480]         ; 00563e96
    FLDZ                                ; 00563e9d
    ADD ESP,0x8                         ; 00563e9f
    FCOMPP                              ; 00563ea2
    FNSTSW AX                           ; 00563ea4
    SAHF                                ; 00563ea6
    JC 0x0056348f                       ; 00563ea7
        ;   XREF to: 0056348f (CONDITIONAL_JUMP)  ; LAB_0056348f
    FLD float ptr [EBX + 0x25a8]        ; 00563ead
    FLDZ                                ; 00563eb3
    FCOMPP                              ; 00563eb5
    FNSTSW AX                           ; 00563eb7
    SAHF                                ; 00563eb9
    JNC 0x0056348f                      ; 00563eba
        ;   XREF to: 0056348f (CONDITIONAL_JUMP)  ; LAB_0056348f
    JMP 0x005634cc                      ; 00563ec0
        ;   XREF to: 005634cc (UNCONDITIONAL_JUMP)  ; LAB_005634cc
    PUSH 0x1d                           ; 00563ec5
        ;   Label: LAB_00563ec5
    PUSH ESI                            ; 00563ec7
    CALL core_motion.cpp_FUN_005038a0   ; 00563ec8
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00563ecd
    FLD float ptr [ESP + 0x480]         ; 00563ed4
    FLDZ                                ; 00563edb
    ADD ESP,0x8                         ; 00563edd
    FCOMPP                              ; 00563ee0
    FNSTSW AX                           ; 00563ee2
    SAHF                                ; 00563ee4
    JC 0x005634f8                       ; 00563ee5
        ;   XREF to: 005634f8 (CONDITIONAL_JUMP)  ; LAB_005634f8
    PUSH 0x1e                           ; 00563eeb
    PUSH ESI                            ; 00563eed
    CALL core_motion.cpp_FUN_005038a0   ; 00563eee
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00563ef3
    FLD float ptr [ESP + 0x480]         ; 00563efa
    FLDZ                                ; 00563f01
    ADD ESP,0x8                         ; 00563f03
    FCOMPP                              ; 00563f06
    FNSTSW AX                           ; 00563f08
    SAHF                                ; 00563f0a
    JC 0x005634f8                       ; 00563f0b
        ;   XREF to: 005634f8 (CONDITIONAL_JUMP)  ; LAB_005634f8
    CMP dword ptr [EBX + 0x256a4],0x5   ; 00563f11
    JZ 0x005634f8                       ; 00563f18
        ;   XREF to: 005634f8 (CONDITIONAL_JUMP)  ; LAB_005634f8
    CMP dword ptr [EBX + 0x25604],0x0   ; 00563f1e
    JNZ 0x005634f8                      ; 00563f25
        ;   XREF to: 005634f8 (CONDITIONAL_JUMP)  ; LAB_005634f8
    JMP 0x0056352d                      ; 00563f2b
        ;   XREF to: 0056352d (UNCONDITIONAL_JUMP)  ; LAB_0056352d
    PUSH ESI                            ; 00563f30
        ;   Label: LAB_00563f30
    CALL core_motion.cpp_FUN_005035c0   ; 00563f31
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00563f36
    ADD ESP,0x4                         ; 00563f39
    CMP EAX,0x5                         ; 00563f3c
    JZ 0x00563719                       ; 00563f3f
        ;   XREF to: 00563719 (CONDITIONAL_JUMP)  ; LAB_00563719
    JMP 0x0056372f                      ; 00563f45
        ;   XREF to: 0056372f (UNCONDITIONAL_JUMP)  ; LAB_0056372f
    FLD float ptr [EBP + 0x18]          ; 00563f4a
        ;   Label: LAB_00563f4a
    FMUL double ptr [0x005eb5d5]        ; 00563f4d | DAT_005eb5d5
    FADD float ptr [EBX + 0x256b0]      ; 00563f53
    FST float ptr [EBX + 0x256b0]       ; 00563f59
    FLD1                                ; 00563f5f
    FCOMPP                              ; 00563f61
    FNSTSW AX                           ; 00563f63
    SAHF                                ; 00563f65
    JNC 0x00563761                      ; 00563f66
        ;   XREF to: 00563761 (CONDITIONAL_JUMP)  ; LAB_00563761
    MOV dword ptr [EBX + 0x256b0],0x3f800000 ; 00563f6c
    JMP 0x00563761                      ; 00563f76
        ;   XREF to: 00563761 (UNCONDITIONAL_JUMP)  ; LAB_00563761
    MOV EAX,dword ptr [EBX + 0x25614]   ; 00563f7b
        ;   Label: LAB_00563f7b
    ADD EAX,0x430                       ; 00563f81
    PUSH EAX                            ; 00563f86
    MOV EAX,dword ptr [EBX + 0x25614]   ; 00563f87
    PUSH EAX                            ; 00563f8d
    LEA ESI,[ESP + 0x2a4]               ; 00563f8e
    LEA EDI,[ESP + 0x19c]               ; 00563f95
    CALL core_actor.cpp_FUN_00408d70    ; 00563f9c
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x2a4]               ; 00563fa1
    ADD ESP,0x8                         ; 00563fa8
    MOVSD ES:EDI,ESI                    ; 00563fab
    MOVSD ES:EDI,ESI                    ; 00563fac
    MOVSD ES:EDI,ESI                    ; 00563fad
    FLD float ptr [ESP + 0x198]         ; 00563fae
    FADD double ptr [0x005eb625]        ; 00563fb5 | DAT_005eb625
    FLD float ptr [EBX + 0x24]          ; 00563fbb
    FCOMPP                              ; 00563fbe
    FNSTSW AX                           ; 00563fc0
    SAHF                                ; 00563fc2
    JBE 0x005637b1                      ; 00563fc3
        ;   XREF to: 005637b1 (CONDITIONAL_JUMP)  ; LAB_005637b1
    PUSH 0x1                            ; 00563fc9
    PUSH 0x0                            ; 00563fcb
    LEA EAX,[EBX + 0x2b4]               ; 00563fcd
    PUSH EAX                            ; 00563fd3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00563fd4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00563fd9
    JMP 0x005637b1                      ; 00563fdc
        ;   XREF to: 005637b1 (UNCONDITIONAL_JUMP)  ; LAB_005637b1
    MOV EDX,0x3f800000                  ; 00563fe1
        ;   Label: LAB_00563fe1
    MOV dword ptr [EBX + 0x258d0],0x0   ; 00563fe6
    MOV dword ptr [ESP + 0x20],EDX      ; 00563ff0
    JMP 0x005637f3                      ; 00563ff4
        ;   XREF to: 005637f3 (UNCONDITIONAL_JUMP)  ; LAB_005637f3
    CMP dword ptr [EBX + 0x25694],0x0   ; 00563ff9
        ;   Label: LAB_00563ff9
    JNZ 0x00564284                      ; 00564000
        ;   XREF to: 00564284 (CONDITIONAL_JUMP)  ; LAB_00564284
    MOV EDX,dword ptr [EBX + 0x25618]   ; 00564006
    TEST EDX,EDX                        ; 0056400c
    JNZ 0x0056444a                      ; 0056400e
        ;   XREF to: 0056444a (CONDITIONAL_JUMP)  ; LAB_0056444a
    MOV ECX,dword ptr [EBX + 0x276c]    ; 00564014
    TEST ECX,ECX                        ; 0056401a
    JZ 0x00564831                       ; 0056401c
        ;   XREF to: 00564831 (CONDITIONAL_JUMP)  ; LAB_00564831
    CMP dword ptr [EBX + 0x2770],0x0    ; 00564022
    JNZ 0x0056415c                      ; 00564029
        ;   XREF to: 0056415c (CONDITIONAL_JUMP)  ; LAB_0056415c
    LEA EAX,[ECX + 0x20]                ; 0056402f
    PUSH EAX                            ; 00564032
    PUSH EBX                            ; 00564033
    LEA ESI,[ESP + 0x130]               ; 00564034
    LEA EDI,[ESP + 0x400]               ; 0056403b
    CALL core_actor.cpp_FUN_00408de0    ; 00564042
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x130]               ; 00564047
    ADD ESP,0x8                         ; 0056404e
    LEA EAX,[ESP + 0x3f8]               ; 00564051
    MOVSD ES:EDI,ESI                    ; 00564058
    MOVSD ES:EDI,ESI                    ; 00564059
    MOVSD ES:EDI,ESI                    ; 0056405a
    PUSH EAX                            ; 0056405b
    LEA ESI,[ESP + 0x30c]               ; 0056405c
    LEA EDI,[ESP + 0x2d0]               ; 00564063
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0056406a
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x30c]               ; 0056406f
    ADD ESP,0x4                         ; 00564076
    MOVSD ES:EDI,ESI                    ; 00564079
    MOVSD ES:EDI,ESI                    ; 0056407a
    MOVSD ES:EDI,ESI                    ; 0056407b
    PUSH dword ptr [ESP + 0x2d0]        ; 0056407c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00564083
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x47c],EAX     ; 00564088
    FLD float ptr [ESP + 0x47c]         ; 0056408f
    ADD ESP,0x4                         ; 00564096
    FST float ptr [ESP + 0x460]         ; 00564099
    FCOMP float ptr [0x005eb609]        ; 005640a0 | DAT_005eb609
    FNSTSW AX                           ; 005640a6
    SAHF                                ; 005640a8
    JNC 0x005640bf                      ; 005640a9
        ;   XREF to: 005640bf (CONDITIONAL_JUMP)  ; LAB_005640bf
    FLD float ptr [ESP + 0x460]         ; 005640ab
    FADD float ptr [0x005eb605]         ; 005640b2 | DAT_005eb605
    FSTP float ptr [ESP + 0x460]        ; 005640b8
    FLD float ptr [ESP + 0x460]         ; 005640bf
        ;   Label: LAB_005640bf
    FCOMP float ptr [0x005eb60d]        ; 005640c6 | DAT_005eb60d
    FNSTSW AX                           ; 005640cc
    SAHF                                ; 005640ce
    JBE 0x005640e5                      ; 005640cf
        ;   XREF to: 005640e5 (CONDITIONAL_JUMP)  ; LAB_005640e5
    FLD float ptr [ESP + 0x460]         ; 005640d1
    FADD float ptr [0x005eb611]         ; 005640d8 | DAT_005eb611
    FSTP float ptr [ESP + 0x460]        ; 005640de
    FLD float ptr [EBP + 0x18]          ; 005640e5
        ;   Label: LAB_005640e5
    FMUL float ptr [0x005eb605]         ; 005640e8 | DAT_005eb605
    FLD float ptr [ESP + 0x460]         ; 005640ee
    FXCH                                ; 005640f5
    FST float ptr [ESP + 0x42c]         ; 005640f7
    FCHS                                ; 005640fe
    FSTP float ptr [ESP + 0x41c]        ; 00564100
    FCOMP float ptr [ESP + 0x41c]       ; 00564107
    FNSTSW AX                           ; 0056410e
    SAHF                                ; 00564110
    JNC 0x00564121                      ; 00564111
        ;   XREF to: 00564121 (CONDITIONAL_JUMP)  ; LAB_00564121
    MOV EAX,dword ptr [ESP + 0x41c]     ; 00564113
    MOV dword ptr [ESP + 0x460],EAX     ; 0056411a
    FLD float ptr [ESP + 0x460]         ; 00564121
        ;   Label: LAB_00564121
    FCOMP float ptr [ESP + 0x42c]       ; 00564128
    FNSTSW AX                           ; 0056412f
    SAHF                                ; 00564131
    JBE 0x00564142                      ; 00564132
        ;   XREF to: 00564142 (CONDITIONAL_JUMP)  ; LAB_00564142
    MOV EAX,dword ptr [ESP + 0x42c]     ; 00564134
    MOV dword ptr [ESP + 0x460],EAX     ; 0056413b
    LEA EAX,[EBX + 0x30]                ; 00564142
        ;   Label: LAB_00564142
    FLD float ptr [EBX + 0x34]          ; 00564145
    PUSH EAX                            ; 00564148
    FADD float ptr [ESP + 0x464]        ; 00564149
    PUSH EBX                            ; 00564150
    FSTP float ptr [EBX + 0x34]         ; 00564151
    CALL core_charactr.cpp_FUN_00429d60 ; 00564154
        ;   XREF to: 00429d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429d60()
    ADD ESP,0x8                         ; 00564159
    MOV EAX,dword ptr [EBX + 0x276c]    ; 0056415c
        ;   Label: LAB_0056415c
    MOV dword ptr [ESP + 0x44c],EAX     ; 00564162
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00564169
    PUSH 0x0                            ; 0056416f
    MOV dword ptr [ESP + 0x478],EAX     ; 00564171
    LEA EAX,[EBX + 0x2b4]               ; 00564178
    PUSH EAX                            ; 0056417e
    LEA ESI,[ESP + 0x13c]               ; 0056417f
    MOV dword ptr [ESP + 0x444],EAX     ; 00564186
    CALL core_skeleton.cpp_FUN_00546a90 ; 0056418d
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 00564192
    LEA EAX,[ESP + 0x278]               ; 00564195
    PUSH EAX                            ; 0056419c
    LEA EDI,[ESP + 0x27c]               ; 0056419d
    LEA ESI,[ESP + 0x138]               ; 005641a4
    PUSH EBX                            ; 005641ab
    MOV ECX,dword ptr [ESP + 0x454]     ; 005641ac
    MOV EAX,dword ptr [ESP + 0x47c]     ; 005641b3
    PUSH ECX                            ; 005641ba
    MOVSD ES:EDI,ESI                    ; 005641bb
    MOVSD ES:EDI,ESI                    ; 005641bc
    MOVSD ES:EDI,ESI                    ; 005641bd
    CALL dword ptr [EAX + 0x118]        ; 005641be
    ADD ESP,0xc                         ; 005641c4
    TEST EAX,EAX                        ; 005641c7
    JZ 0x005647fe                       ; 005641c9
        ;   XREF to: 005647fe (CONDITIONAL_JUMP)  ; LAB_005647fe
    CMP dword ptr [EBX + 0x276c],0x0    ; 005641cf
    JZ 0x00564804                       ; 005641d6
        ;   XREF to: 00564804 (CONDITIONAL_JUMP)  ; LAB_00564804
    FLD float ptr [EBX + 0x25740]       ; 005641dc
    FADD float ptr [EBP + 0x18]         ; 005641e2
    FST float ptr [EBX + 0x25740]       ; 005641e5
    FCOMP float ptr [0x005fc1fc]        ; 005641eb | DAT_005fc1fc
    FNSTSW AX                           ; 005641f1
    SAHF                                ; 005641f3
    JC 0x005638ce                       ; 005641f4
        ;   XREF to: 005638ce (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0x2770],0x1    ; 005641fa
    JZ 0x005638ce                       ; 00564201
        ;   XREF to: 005638ce (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x22                           ; 00564207
    MOV EAX,dword ptr [ESP + 0x440]     ; 00564209
    PUSH EAX                            ; 00564210
    CALL core_motion.cpp_FUN_005038a0   ; 00564211
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x47c],EAX     ; 00564216
    ADD ESP,0x8                         ; 0056421d
    PUSH 0x23                           ; 00564220
    MOV EDX,dword ptr [ESP + 0x440]     ; 00564222
    PUSH EDX                            ; 00564229
    CALL core_motion.cpp_FUN_005038a0   ; 0056422a
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 0056422f
    FLD float ptr [ESP + 0x480]         ; 00564236
    ADD ESP,0x8                         ; 0056423d
    FADD float ptr [ESP + 0x474]        ; 00564240
    FLDZ                                ; 00564247
    FCOMPP                              ; 00564249
    FNSTSW AX                           ; 0056424b
    SAHF                                ; 0056424d
    JNC 0x0056481c                      ; 0056424e
        ;   XREF to: 0056481c (CONDITIONAL_JUMP)  ; LAB_0056481c
    CMP dword ptr [EBX + 0x10a74],0x0   ; 00564254
    JZ 0x005638ce                       ; 0056425b
        ;   XREF to: 005638ce (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00564261
    PUSH 0x23                           ; 00564263
    MOV ESI,dword ptr [ESP + 0x444]     ; 00564265
    PUSH ESI                            ; 0056426c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056426d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00564272
    MOV dword ptr [EBX + 0x10a74],0x0   ; 00564275
    JMP 0x005638ce                      ; 0056427f
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x2b                           ; 00564284
        ;   Label: LAB_00564284
    LEA EAX,[EBX + 0x2b4]               ; 00564286
    PUSH EAX                            ; 0056428c
    CALL core_motion.cpp_FUN_005038a0   ; 0056428d
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00564292
    FLD float ptr [ESP + 0x480]         ; 00564299
    FLDZ                                ; 005642a0
    ADD ESP,0x8                         ; 005642a2
    FCOMPP                              ; 005642a5
    FNSTSW AX                           ; 005642a7
    SAHF                                ; 005642a9
    JC 0x00564401                       ; 005642aa
        ;   XREF to: 00564401 (CONDITIONAL_JUMP)  ; LAB_00564401
    MOV dword ptr [EBX + 0x25694],EDI   ; 005642b0
    FLD float ptr [EBX + 0x258d0]       ; 005642b6
        ;   Label: LAB_005642b6
    FLDZ                                ; 005642bc
    FCOMPP                              ; 005642be
    FNSTSW AX                           ; 005642c0
    SAHF                                ; 005642c2
    JNC 0x005643d3                      ; 005642c3
        ;   XREF to: 005643d3 (CONDITIONAL_JUMP)  ; LAB_005643d3
    FLD float ptr [EBP + 0x18]          ; 005642c9
    FCOMP float ptr [EBX + 0x258d0]     ; 005642cc
    FNSTSW AX                           ; 005642d2
    SAHF                                ; 005642d4
    JNC 0x00564432                      ; 005642d5
        ;   XREF to: 00564432 (CONDITIONAL_JUMP)  ; LAB_00564432
    FLD float ptr [EBP + 0x18]          ; 005642db
    FLD ST0                             ; 005642de
    FDIV float ptr [EBX + 0x258d0]      ; 005642e0
    FLD float ptr [EBX + 0x258d0]       ; 005642e6
    FSUBRP ST2,ST0                      ; 005642ec
    FSTP float ptr [ESP + 0x24]         ; 005642ee
    FSTP float ptr [EBX + 0x258d0]      ; 005642f2
    LEA EAX,[EBX + 0x258c0]             ; 005642f8
        ;   Label: LAB_005642f8
    FLD float ptr [EAX]                 ; 005642fe
    FMUL float ptr [ESP + 0x24]         ; 00564300
    FLD float ptr [EAX + 0x4]           ; 00564304
    FMUL float ptr [ESP + 0x24]         ; 00564307
    FLD float ptr [EAX + 0x8]           ; 0056430b
    FMUL float ptr [ESP + 0x24]         ; 0056430e
    FLD float ptr [ESP + 0x24]          ; 00564312
    LEA EDI,[ESP + 0x1c4]               ; 00564316
    LEA ESI,[ESP + 0x248]               ; 0056431d
    FLD1                                ; 00564324
    LEA EDX,[EBX + 0x20]                ; 00564326
    FSUBRP                              ; 00564329
    FXCH ST3                            ; 0056432b
    FSTP float ptr [ESP + 0x248]        ; 0056432d
    FXCH                                ; 00564334
    FSTP float ptr [ESP + 0x24c]        ; 00564336
    FSTP float ptr [ESP + 0x250]        ; 0056433d
    MOVSD ES:EDI,ESI                    ; 00564344
    MOVSD ES:EDI,ESI                    ; 00564345
    MOVSD ES:EDI,ESI                    ; 00564346
    FSTP float ptr [ESP + 0x438]        ; 00564347
    FLD float ptr [EDX]                 ; 0056434e
    FLD float ptr [EDX + 0x4]           ; 00564350
    FLD float ptr [EDX + 0x8]           ; 00564353
    FXCH ST2                            ; 00564356
    FADD float ptr [ESP + 0x1c4]        ; 00564358
    FXCH                                ; 0056435f
    FADD float ptr [ESP + 0x1c8]        ; 00564361
    FXCH ST2                            ; 00564368
    FADD float ptr [ESP + 0x1cc]        ; 0056436a
    FXCH                                ; 00564371
    FSTP float ptr [EDX]                ; 00564373
    FXCH                                ; 00564375
    FSTP float ptr [EDX + 0x4]          ; 00564377
    FSTP float ptr [EDX + 0x8]          ; 0056437a
    FLD float ptr [EAX]                 ; 0056437d
    FMUL float ptr [ESP + 0x438]        ; 0056437f
    FLD float ptr [EAX + 0x4]           ; 00564386
    FMUL float ptr [ESP + 0x438]        ; 00564389
    FLD float ptr [EAX + 0x8]           ; 00564390
    FMUL float ptr [ESP + 0x438]        ; 00564393
    FXCH ST2                            ; 0056439a
    FSTP float ptr [EAX]                ; 0056439c
    FSTP float ptr [EAX + 0x4]          ; 0056439e
    FSTP float ptr [EAX + 0x8]          ; 005643a1
    FLD float ptr [EBX + 0x258cc]       ; 005643a4
    FSUB float ptr [EBX + 0x34]         ; 005643aa
    SUB ESP,0x4                         ; 005643ad
    FSTP float ptr [ESP]                ; 005643b0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005643b3
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x47c],EAX     ; 005643b8
    FLD float ptr [ESP + 0x47c]         ; 005643bf
    ADD ESP,0x4                         ; 005643c6
    FMUL float ptr [ESP + 0x24]         ; 005643c9
    FSTP float ptr [EBX + 0x2578]       ; 005643cd
    PUSH 0x0                            ; 005643d3
        ;   Label: LAB_005643d3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005643d5
    PUSH dword ptr [EBX + 0x3430]       ; 005643db
    PUSH EBX                            ; 005643e1
    CALL dword ptr [EAX + 0x48]         ; 005643e2
    MOV dword ptr [ESP + 0x484],EAX     ; 005643e5
    MOV EAX,dword ptr [ESP + 0x484]     ; 005643ec
    MOV dword ptr [EBX + 0x2574],EAX    ; 005643f3
    ADD ESP,0xc                         ; 005643f9
    JMP 0x005638ce                      ; 005643fc
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,dword ptr [EBX + 0x25694]   ; 00564401
        ;   Label: LAB_00564401
    FLD float ptr [EAX + 0x24]          ; 00564407
    FLD1                                ; 0056440a
    FADDP                               ; 0056440c
    FLD float ptr [EBX + 0x24]          ; 0056440e
    FCOMPP                              ; 00564411
    FNSTSW AX                           ; 00564413
    SAHF                                ; 00564415
    JNC 0x005642b6                      ; 00564416
        ;   XREF to: 005642b6 (CONDITIONAL_JUMP)  ; LAB_005642b6
    PUSH ESI                            ; 0056441c
    PUSH EDI                            ; 0056441d
    LEA EAX,[EBX + 0x2b4]               ; 0056441e
    PUSH EAX                            ; 00564424
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00564425
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056442a
    JMP 0x005642b6                      ; 0056442d
        ;   XREF to: 005642b6 (UNCONDITIONAL_JUMP)  ; LAB_005642b6
    MOV EDI,0x3f800000                  ; 00564432
        ;   Label: LAB_00564432
    MOV dword ptr [EBX + 0x258d0],0x0   ; 00564437
    MOV dword ptr [ESP + 0x24],EDI      ; 00564441
    JMP 0x005642f8                      ; 00564445
        ;   XREF to: 005642f8 (UNCONDITIONAL_JUMP)  ; LAB_005642f8
    MOV EAX,EDX                         ; 0056444a
        ;   Label: LAB_0056444a
    MOV ECX,dword ptr [EDX + 0x2b0]     ; 0056444c
    LEA EDX,[ESP + 0x6c]                ; 00564452
    PUSH EDX                            ; 00564456
    PUSH EAX                            ; 00564457
    CALL dword ptr [ECX + 0xa0]         ; 00564458
    ADD ESP,0x8                         ; 0056445e
    CMP dword ptr [ESP + 0x6c],0x0      ; 00564461
    JZ 0x005647b5                       ; 00564466
        ;   XREF to: 005647b5 (CONDITIONAL_JUMP)  ; LAB_005647b5
    MOV EAX,dword ptr [ESP + 0x70]      ; 0056446c
    CMP EBX,EAX                         ; 00564470
    JNZ 0x005647b5                      ; 00564472
        ;   XREF to: 005647b5 (CONDITIONAL_JUMP)  ; LAB_005647b5
    MOV ESI,dword ptr [EAX + 0x25618]   ; 00564478
    LEA EDI,[ESP + 0x1b8]               ; 0056447e
    LEA ESI,[ESI + 0x30]                ; 00564485
    MOVSD ES:EDI,ESI                    ; 00564488
    MOVSD ES:EDI,ESI                    ; 00564489
    MOVSD ES:EDI,ESI                    ; 0056448a
    FLD float ptr [EAX + 0x10a90]       ; 0056448b
    FMUL float ptr [0x005eb605]         ; 00564491 | DAT_005eb605
    FMUL double ptr [0x005eb615]        ; 00564497 | DAT_005eb615
    FMUL float ptr [EBP + 0x18]         ; 0056449d
    FST float ptr [ESP + 0x444]         ; 005644a0
    FCOMP float ptr [ESP + 0x80]        ; 005644a7
    FNSTSW AX                           ; 005644ae
    SAHF                                ; 005644b0
    JNC 0x005644c1                      ; 005644b1
        ;   XREF to: 005644c1 (CONDITIONAL_JUMP)  ; LAB_005644c1
    MOV EAX,dword ptr [ESP + 0x80]      ; 005644b3
    MOV dword ptr [ESP + 0x444],EAX     ; 005644ba
    FLD float ptr [ESP + 0x444]         ; 005644c1
        ;   Label: LAB_005644c1
    FCOMP float ptr [ESP + 0x7c]        ; 005644c8
    FNSTSW AX                           ; 005644cc
    SAHF                                ; 005644ce
    JBE 0x005644dc                      ; 005644cf
        ;   XREF to: 005644dc (CONDITIONAL_JUMP)  ; LAB_005644dc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005644d1
    MOV dword ptr [ESP + 0x444],EAX     ; 005644d5
    FLD float ptr [ESP + 0x1bc]         ; 005644dc
        ;   Label: LAB_005644dc
    FADD float ptr [ESP + 0x444]        ; 005644e3
    SUB ESP,0x4                         ; 005644ea
    FSTP float ptr [ESP]                ; 005644ed
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005644f0
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x47c],EAX     ; 005644f5
    FLD float ptr [ESP + 0x47c]         ; 005644fc
    ADD ESP,0x4                         ; 00564503
    FSTP float ptr [ESP + 0x1bc]        ; 00564506
    FLD float ptr [EBX + 0x10a94]       ; 0056450d
    FMUL float ptr [0x005eb605]         ; 00564513 | DAT_005eb605
    FMUL double ptr [0x005eb615]        ; 00564519 | DAT_005eb615
    FMUL float ptr [EBP + 0x18]         ; 0056451f
    FST float ptr [ESP + 0x448]         ; 00564522
    FCOMP float ptr [ESP + 0x88]        ; 00564529
    FNSTSW AX                           ; 00564530
    SAHF                                ; 00564532
    JNC 0x00564543                      ; 00564533
        ;   XREF to: 00564543 (CONDITIONAL_JUMP)  ; LAB_00564543
    MOV EAX,dword ptr [ESP + 0x88]      ; 00564535
    MOV dword ptr [ESP + 0x448],EAX     ; 0056453c
    FLD float ptr [ESP + 0x448]         ; 00564543
        ;   Label: LAB_00564543
    FCOMP float ptr [ESP + 0x84]        ; 0056454a
    FNSTSW AX                           ; 00564551
    SAHF                                ; 00564553
    JBE 0x00564564                      ; 00564554
        ;   XREF to: 00564564 (CONDITIONAL_JUMP)  ; LAB_00564564
    MOV EAX,dword ptr [ESP + 0x84]      ; 00564556
    MOV dword ptr [ESP + 0x448],EAX     ; 0056455d
    FLD float ptr [ESP + 0x1b8]         ; 00564564
        ;   Label: LAB_00564564
    FADD float ptr [ESP + 0x448]        ; 0056456b
    SUB ESP,0x4                         ; 00564572
    FSTP float ptr [ESP]                ; 00564575
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00564578
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x478],EAX     ; 0056457d
    FLD float ptr [ESP + 0x478]         ; 00564584
    ADD ESP,0x4                         ; 0056458b
    LEA EDX,[EBX + 0x10a68]             ; 0056458e
    FSTP float ptr [ESP + 0x1b8]        ; 00564594
    PUSH EDX                            ; 0056459b
    LEA EDX,[ESP + 0x1bc]               ; 0056459c
    MOV EAX,dword ptr [EBX + 0x25618]   ; 005645a3
    PUSH EDX                            ; 005645a9
    MOV ECX,dword ptr [EAX + 0x2b0]     ; 005645aa
    PUSH EAX                            ; 005645b0
    LEA ESI,[EBX + 0x2b4]               ; 005645b1
    CALL dword ptr [ECX + 0xa8]         ; 005645b7
    ADD ESP,0xc                         ; 005645bd
    TEST EAX,EAX                        ; 005645c0
    JZ 0x005647e4                       ; 005645c2
        ;   XREF to: 005647e4 (CONDITIONAL_JUMP)  ; LAB_005647e4
    MOV EAX,dword ptr [EBX + 0x25618]   ; 005645c8
    FLD float ptr [EAX + 0x34]          ; 005645ce
    FSUB float ptr [EBX + 0x34]         ; 005645d1
    SUB ESP,0x4                         ; 005645d4
    FSTP float ptr [ESP]                ; 005645d7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005645da
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x47c],EAX     ; 005645df
    FLD float ptr [ESP + 0x47c]         ; 005645e6
    ADD ESP,0x4                         ; 005645ed
    FST float ptr [ESP + 0x1c]          ; 005645f0
    FST double ptr [ESP + 0x8]          ; 005645f4
    FCOMP double ptr [0x005eb5dd]       ; 005645f8 | DAT_005eb5dd
    FNSTSW AX                           ; 005645fe
    SAHF                                ; 00564600
    JNC 0x005647c3                      ; 00564601
        ;   XREF to: 005647c3 (CONDITIONAL_JUMP)  ; LAB_005647c3
    PUSH 0x1                            ; 00564607
    PUSH 0x5                            ; 00564609
    PUSH ESI                            ; 0056460b
        ;   Label: LAB_0056460b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056460c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00564611
    LEA EDI,[ESP + 0x350]               ; 00564614
    LEA ESI,[EBX + 0x30]                ; 0056461b
    FLD float ptr [ESP + 0x1c]          ; 0056461e
    MOVSD ES:EDI,ESI                    ; 00564622
    MOVSD ES:EDI,ESI                    ; 00564623
    MOVSD ES:EDI,ESI                    ; 00564624
    LEA EAX,[ESP + 0x350]               ; 00564625
    FMUL float ptr [EBX + 0x256b0]      ; 0056462c
    PUSH EAX                            ; 00564632
    FADD float ptr [ESP + 0x358]        ; 00564633
    PUSH EBX                            ; 0056463a
    FSTP float ptr [ESP + 0x35c]        ; 0056463b
    CALL core_charactr.cpp_FUN_00429d60 ; 00564642
        ;   XREF to: 00429d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429d60()
    ADD ESP,0x8                         ; 00564647
    FLD float ptr [ESP + 0x74]          ; 0056464a
    FADD double ptr [0x005eb61d]        ; 0056464e | DAT_005eb61d
    XOR EDX,EDX                         ; 00564654
    FSTP float ptr [ESP + 0x474]        ; 00564656
    MOV EAX,dword ptr [ESP + 0x474]     ; 0056465d
    MOV dword ptr [ESP + 0x3d4],EDX     ; 00564664
    MOV dword ptr [ESP + 0x3dc],EAX     ; 0056466b
    LEA EAX,[ESP + 0x3d4]               ; 00564672
    MOV dword ptr [ESP + 0x3d8],EDX     ; 00564679
    PUSH EAX                            ; 00564680
    MOV ESI,dword ptr [EBX + 0x25618]   ; 00564681
    PUSH ESI                            ; 00564687
    LEA ESI,[ESP + 0x118]               ; 00564688
    LEA EDI,[ESP + 0x160]               ; 0056468f
    CALL core_actor.cpp_FUN_00408d70    ; 00564696
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x118]               ; 0056469b
    ADD ESP,0x8                         ; 005646a2
    LEA EAX,[EBX + 0x20]                ; 005646a5
    MOVSD ES:EDI,ESI                    ; 005646a8
    MOVSD ES:EDI,ESI                    ; 005646a9
    MOVSD ES:EDI,ESI                    ; 005646aa
    LEA EDX,[EBX + 0x256b0]             ; 005646ab
    FLD float ptr [ESP + 0x158]         ; 005646b1
    FLD float ptr [ESP + 0x15c]         ; 005646b8
    FLD float ptr [ESP + 0x160]         ; 005646bf
    LEA EDI,[ESP + 0x1dc]               ; 005646c6
    LEA ESI,[ESP + 0x3e0]               ; 005646cd
    MOV dword ptr [ESP + 0x474],EDX     ; 005646d4
    FXCH ST2                            ; 005646db
    FSUB float ptr [EAX]                ; 005646dd
    FXCH                                ; 005646df
    FSUB float ptr [EAX + 0x4]          ; 005646e1
    FXCH ST2                            ; 005646e4
    FSUB float ptr [EAX + 0x8]          ; 005646e6
    FXCH                                ; 005646e9
    FSTP float ptr [ESP + 0x3e0]        ; 005646eb
    FXCH                                ; 005646f2
    FSTP float ptr [ESP + 0x3e4]        ; 005646f4
    LEA EAX,[ESP + 0x1dc]               ; 005646fb
    FSTP float ptr [ESP + 0x3e8]        ; 00564702
    PUSH EAX                            ; 00564709
    MOVSD ES:EDI,ESI                    ; 0056470a
    MOVSD ES:EDI,ESI                    ; 0056470b
    MOVSD ES:EDI,ESI                    ; 0056470c
    PUSH EBX                            ; 0056470d
    LEA ESI,[ESP + 0x298]               ; 0056470e
    LEA EDI,[ESP + 0x2bc]               ; 00564715
    CALL core_actor.cpp_FUN_00408d30    ; 0056471c
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x298]               ; 00564721
    ADD ESP,0x8                         ; 00564728
    MOVSD ES:EDI,ESI                    ; 0056472b
    MOVSD ES:EDI,ESI                    ; 0056472c
    MOVSD ES:EDI,ESI                    ; 0056472d
    MOV EAX,dword ptr [ESP + 0x474]     ; 0056472e
    FLD float ptr [ESP + 0x2b4]         ; 00564735
    FMUL float ptr [EAX]                ; 0056473c
    FLD float ptr [ESP + 0x2b8]         ; 0056473e
    FMUL float ptr [EAX]                ; 00564745
    FLD float ptr [ESP + 0x2bc]         ; 00564747
    FMUL float ptr [EAX]                ; 0056474e
    LEA EDX,[EBX + 0x2508]              ; 00564750
    LEA EDI,[ESP + 0x20c]               ; 00564756
    LEA ESI,[ESP + 0x320]               ; 0056475d
    FXCH ST2                            ; 00564764
    FSTP float ptr [ESP + 0x320]        ; 00564766
    FSTP float ptr [ESP + 0x324]        ; 0056476d
    FSTP float ptr [ESP + 0x328]        ; 00564774
    LEA EAX,[ESP + 0x20c]               ; 0056477b
    MOVSD ES:EDI,ESI                    ; 00564782
    MOVSD ES:EDI,ESI                    ; 00564783
    MOVSD ES:EDI,ESI                    ; 00564784
    CMP EDX,EAX                         ; 00564785
    JZ 0x005647a6                       ; 00564787
        ;   XREF to: 005647a6 (CONDITIONAL_JUMP)  ; LAB_005647a6
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00564789
    MOV dword ptr [EDX],EAX             ; 00564790
    MOV EAX,dword ptr [ESP + 0x210]     ; 00564792
    MOV dword ptr [EDX + 0x4],EAX       ; 00564799
    MOV EAX,dword ptr [ESP + 0x214]     ; 0056479c
    MOV dword ptr [EDX + 0x8],EAX       ; 005647a3
    MOV dword ptr [EBX + 0x250c],0x0    ; 005647a6
        ;   Label: LAB_005647a6
    JMP 0x005638ce                      ; 005647b0
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 005647b5
        ;   Label: LAB_005647b5
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0 ; 005647b6
        ;   XREF to: 004cfad0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005647bb
    JMP 0x005638ce                      ; 005647be
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    FLD double ptr [ESP + 0x8]          ; 005647c3
        ;   Label: LAB_005647c3
    FCOMP double ptr [0x005eb5e5]       ; 005647c7 | DAT_005eb5e5
    FNSTSW AX                           ; 005647cd
    SAHF                                ; 005647cf
    JBE 0x005647db                      ; 005647d0
        ;   XREF to: 005647db (CONDITIONAL_JUMP)  ; LAB_005647db
    PUSH 0x1                            ; 005647d2
    PUSH 0x4                            ; 005647d4
    JMP 0x0056460b                      ; 005647d6
        ;   XREF to: 0056460b (UNCONDITIONAL_JUMP)  ; LAB_0056460b
    PUSH 0x1                            ; 005647db
        ;   Label: LAB_005647db
    PUSH 0x0                            ; 005647dd
    JMP 0x0056460b                      ; 005647df
        ;   XREF to: 0056460b (UNCONDITIONAL_JUMP)  ; LAB_0056460b
    PUSH 0x1                            ; 005647e4
        ;   Label: LAB_005647e4
    PUSH EAX                            ; 005647e6
    PUSH ESI                            ; 005647e7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005647e8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005647ed
    PUSH EBX                            ; 005647f0
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0 ; 005647f1
        ;   XREF to: 004cfad0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0(CHero * this_ptr)
    ADD ESP,0x4                         ; 005647f6
    JMP 0x005638ce                      ; 005647f9
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV dword ptr [EBX + 0x276c],EAX    ; 005647fe
        ;   Label: LAB_005647fe
    PUSH 0x1                            ; 00564804
        ;   Label: LAB_00564804
    PUSH 0x0                            ; 00564806
    LEA EAX,[EBX + 0x2b4]               ; 00564808
    PUSH EAX                            ; 0056480e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056480f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00564814
    JMP 0x005638ce                      ; 00564817
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 0056481c
        ;   Label: LAB_0056481c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056481d
    CALL dword ptr [EAX + 0xf8]         ; 00564823
    ADD ESP,0x4                         ; 00564829
    JMP 0x005638ce                      ; 0056482c
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ESI,dword ptr [EBX + 0x2560c]   ; 00564831
        ;   Label: LAB_00564831
    TEST ESI,ESI                        ; 00564837
    JZ 0x00564b72                       ; 00564839
        ;   XREF to: 00564b72 (CONDITIONAL_JUMP)  ; LAB_00564b72
    MOV EDX,dword ptr [EBX + 0x10a74]   ; 0056483f
    MOV dword ptr [ESP + 0x470],EDI     ; 00564845
    TEST EDX,EDX                        ; 0056484c
    JNZ 0x0056487f                      ; 0056484e
        ;   XREF to: 0056487f (CONDITIONAL_JUMP)  ; LAB_0056487f
    MOV EDI,dword ptr [ESP + 0x470]     ; 00564850
        ;   Label: LAB_00564850
    TEST EDI,EDI                        ; 00564857
    JNZ 0x005638ce                      ; 00564859
        ;   XREF to: 005638ce (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 0056485f
    PUSH EDI                            ; 00564861
    LEA EAX,[EBX + 0x2b4]               ; 00564862
    PUSH EAX                            ; 00564868
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00564869
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056486e
    PUSH EBX                            ; 00564871
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004cf830 ; 00564872
        ;   XREF to: 004cf830 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004cf830(CHero * this_ptr)
    ADD ESP,0x4                         ; 00564877
    JMP 0x005638ce                      ; 0056487a
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH ESI                            ; 0056487f
        ;   Label: LAB_0056487f
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00564880
    LEA ESI,[ESP + 0x90]                ; 00564886
    LEA EDI,[ESP + 0xa8]                ; 0056488d
    CALL dword ptr [EDX + 0x24]         ; 00564894
    MOV ECX,0x6                         ; 00564897
    LEA ESI,[ESP + 0x90]                ; 0056489c
    ADD ESP,0x4                         ; 005648a3
    MOVSD.REP ES:EDI,ESI                ; 005648a6
    FLD float ptr [ESP + 0xa4]          ; 005648a8
    FLD float ptr [ESP + 0xa8]          ; 005648af
    FLD float ptr [ESP + 0xac]          ; 005648b6
    LEA EDI,[ESP + 0x23c]               ; 005648bd
    LEA ESI,[ESP + 0x140]               ; 005648c4
    FXCH ST2                            ; 005648cb
    FADD float ptr [ESP + 0xb0]         ; 005648cd
    FXCH                                ; 005648d4
    FADD float ptr [ESP + 0xb4]         ; 005648d6
    FXCH ST2                            ; 005648dd
    FADD float ptr [ESP + 0xb8]         ; 005648df
    FXCH                                ; 005648e6
    FSTP float ptr [ESP + 0x140]        ; 005648e8
    FXCH                                ; 005648ef
    FSTP float ptr [ESP + 0x144]        ; 005648f1
    FSTP float ptr [ESP + 0x148]        ; 005648f8
    MOVSD ES:EDI,ESI                    ; 005648ff
    MOVSD ES:EDI,ESI                    ; 00564900
    MOVSD ES:EDI,ESI                    ; 00564901
    FLD float ptr [ESP + 0x23c]         ; 00564902
    FMUL float ptr [0x005eb5d1]         ; 00564909 | DAT_005eb5d1
    FLD float ptr [ESP + 0x240]         ; 0056490f
    FMUL float ptr [0x005eb5d1]         ; 00564916 | DAT_005eb5d1
    FLD float ptr [ESP + 0x244]         ; 0056491c
    FMUL float ptr [0x005eb5d1]         ; 00564923 | DAT_005eb5d1
    LEA EAX,[ESP + 0x314]               ; 00564929
    LEA EDI,[ESP + 0x314]               ; 00564930
    LEA ESI,[ESP + 0x404]               ; 00564937
    FXCH ST2                            ; 0056493e
    FSTP float ptr [ESP + 0x404]        ; 00564940
    FSTP float ptr [ESP + 0x408]        ; 00564947
    FSTP float ptr [ESP + 0x40c]        ; 0056494e
    MOVSD ES:EDI,ESI                    ; 00564955
    MOVSD ES:EDI,ESI                    ; 00564956
    MOVSD ES:EDI,ESI                    ; 00564957
    PUSH EAX                            ; 00564958
    MOV ECX,dword ptr [EBX + 0x2560c]   ; 00564959
    PUSH ECX                            ; 0056495f
    LEA ESI,[ESP + 0x37c]               ; 00564960
    LEA EDI,[ESP + 0x274]               ; 00564967
    CALL core_actor.cpp_FUN_00408d70    ; 0056496e
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00564973
    LEA EAX,[ESP + 0x26c]               ; 00564976
    LEA ESI,[ESP + 0x374]               ; 0056497d
    PUSH EAX                            ; 00564984
    MOVSD ES:EDI,ESI                    ; 00564985
    MOVSD ES:EDI,ESI                    ; 00564986
    MOVSD ES:EDI,ESI                    ; 00564987
    PUSH EBX                            ; 00564988
    LEA ESI,[ESP + 0x388]               ; 00564989
    LEA EDI,[ESP + 0x3d0]               ; 00564990
    CALL core_actor.cpp_FUN_00408de0    ; 00564997
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x388]               ; 0056499c
    ADD ESP,0x8                         ; 005649a3
    LEA EAX,[ESP + 0x3c8]               ; 005649a6
    MOVSD ES:EDI,ESI                    ; 005649ad
    MOVSD ES:EDI,ESI                    ; 005649ae
    MOVSD ES:EDI,ESI                    ; 005649af
    PUSH EAX                            ; 005649b0
    LEA ESI,[ESP + 0x390]               ; 005649b1
    LEA EDI,[ESP + 0x2c4]               ; 005649b8
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 005649bf
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x390]               ; 005649c4
    ADD ESP,0x4                         ; 005649cb
    MOVSD ES:EDI,ESI                    ; 005649ce
    MOVSD ES:EDI,ESI                    ; 005649cf
    MOVSD ES:EDI,ESI                    ; 005649d0
    PUSH dword ptr [ESP + 0x2c4]        ; 005649d1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005649d8
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x47c],EAX     ; 005649dd
    LEA EDI,[ESP + 0x234]               ; 005649e4
    FLD float ptr [ESP + 0x47c]         ; 005649eb
    ADD ESP,0x4                         ; 005649f2
    LEA ESI,[ESP + 0x2f0]               ; 005649f5
    FLD float ptr [ESP + 0xb0]          ; 005649fc
    FLD float ptr [ESP + 0xb4]          ; 00564a03
    FLD float ptr [ESP + 0xb8]          ; 00564a0a
    FXCH ST2                            ; 00564a11
    FSUB float ptr [ESP + 0xa4]         ; 00564a13
    FXCH                                ; 00564a1a
    FSUB float ptr [ESP + 0xa8]         ; 00564a1c
    FXCH ST2                            ; 00564a23
    FSUB float ptr [ESP + 0xac]         ; 00564a25
    FXCH                                ; 00564a2c
    FSTP float ptr [ESP + 0x2f0]        ; 00564a2e
    FXCH                                ; 00564a35
    FSTP float ptr [ESP + 0x2f4]        ; 00564a37
    FSTP float ptr [ESP + 0x2f8]        ; 00564a3e
    MOVSD ES:EDI,ESI                    ; 00564a45
    MOVSD ES:EDI,ESI                    ; 00564a46
    MOVSD ES:EDI,ESI                    ; 00564a47
    FLD float ptr [ESP + 0x230]         ; 00564a48
    FMUL float ptr [0x005eb5d1]         ; 00564a4f | DAT_005eb5d1
    FLD float ptr [ESP + 0x234]         ; 00564a55
    FMUL float ptr [0x005eb5d1]         ; 00564a5c | DAT_005eb5d1
    FLD float ptr [ESP + 0x238]         ; 00564a62
    FMUL float ptr [0x005eb5d1]         ; 00564a69 | DAT_005eb5d1
    LEA EDI,[ESP + 0x2d8]               ; 00564a6f
    LEA ESI,[ESP + 0x3bc]               ; 00564a76
    FXCH ST2                            ; 00564a7d
    FSTP float ptr [ESP + 0x3bc]        ; 00564a7f
    FSTP float ptr [ESP + 0x3c0]        ; 00564a86
    FSTP float ptr [ESP + 0x3c4]        ; 00564a8d
    MOVSD ES:EDI,ESI                    ; 00564a94
    MOVSD ES:EDI,ESI                    ; 00564a95
    MOVSD ES:EDI,ESI                    ; 00564a96
    FLD float ptr [ESP + 0x2d8]         ; 00564a97
    FMUL ST0                            ; 00564a9e
    FLD float ptr [ESP + 0x2e0]         ; 00564aa0
    FMUL ST0                            ; 00564aa7
    FADDP                               ; 00564aa9
    FSQRT                               ; 00564aab
    FXCH                                ; 00564aad
    FSTP float ptr [ESP + 0x28]         ; 00564aaf
    XOR ESI,ESI                         ; 00564ab3
    FSUBR float ptr [ESP + 0x3d0]       ; 00564ab5
    MOV dword ptr [ESP + 0x2dc],ESI     ; 00564abc
    FCOMP double ptr [0x005eb5ed]       ; 00564ac3 | DAT_005eb5ed
    FNSTSW AX                           ; 00564ac9
    SAHF                                ; 00564acb
    JNC 0x00564850                      ; 00564acc
        ;   XREF to: 00564850 (CONDITIONAL_JUMP)  ; LAB_00564850
    FLD float ptr [ESP + 0x3cc]         ; 00564ad2
    FLD1                                ; 00564ad9
    FCOMPP                              ; 00564adb
    FNSTSW AX                           ; 00564add
    SAHF                                ; 00564adf
    JNC 0x00564850                      ; 00564ae0
        ;   XREF to: 00564850 (CONDITIONAL_JUMP)  ; LAB_00564850
    FLD float ptr [ESP + 0x3cc]         ; 00564ae6
    FCOMP double ptr [0x005eb5f5]       ; 00564aed | DAT_005eb5f5
    FNSTSW AX                           ; 00564af3
    SAHF                                ; 00564af5
    JNC 0x00564850                      ; 00564af6
        ;   XREF to: 00564850 (CONDITIONAL_JUMP)  ; LAB_00564850
    FLD float ptr [ESP + 0x28]          ; 00564afc
    FABS                                ; 00564b00
    FCOMP double ptr [0x005eb5fd]       ; 00564b02 | DAT_005eb5fd
    FNSTSW AX                           ; 00564b08
    SAHF                                ; 00564b0a
    JNC 0x00564850                      ; 00564b0b
        ;   XREF to: 00564850 (CONDITIONAL_JUMP)  ; LAB_00564850
    FLD float ptr [EBP + 0x18]          ; 00564b11
    FMUL float ptr [0x005eb605]         ; 00564b14 | DAT_005eb605
    FST float ptr [ESP + 0x440]         ; 00564b1a
    FCHS                                ; 00564b21
    FCOMP float ptr [ESP + 0x28]        ; 00564b23
    FNSTSW AX                           ; 00564b27
    SAHF                                ; 00564b29
    JA 0x00564b63                       ; 00564b2a
        ;   XREF to: 00564b63 (CONDITIONAL_JUMP)  ; LAB_00564b63
    FLD float ptr [ESP + 0x28]          ; 00564b2c
        ;   Label: LAB_00564b2c
    FCOMP float ptr [ESP + 0x440]       ; 00564b30
    FNSTSW AX                           ; 00564b37
    SAHF                                ; 00564b39
    JBE 0x00564b47                      ; 00564b3a
        ;   XREF to: 00564b47 (CONDITIONAL_JUMP)  ; LAB_00564b47
    MOV EAX,dword ptr [ESP + 0x440]     ; 00564b3c
    MOV dword ptr [ESP + 0x28],EAX      ; 00564b43
    LEA EAX,[EBX + 0x30]                ; 00564b47
        ;   Label: LAB_00564b47
    FLD float ptr [EBX + 0x34]          ; 00564b4a
    PUSH EAX                            ; 00564b4d
    FADD float ptr [ESP + 0x2c]         ; 00564b4e
    PUSH EBX                            ; 00564b52
    FSTP float ptr [EBX + 0x34]         ; 00564b53
    CALL core_charactr.cpp_FUN_00429d60 ; 00564b56
        ;   XREF to: 00429d60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429d60()
    ADD ESP,0x8                         ; 00564b5b
    JMP 0x005638ce                      ; 00564b5e
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [ESP + 0x440]         ; 00564b63
        ;   Label: LAB_00564b63
    FCHS                                ; 00564b6a
    FSTP float ptr [ESP + 0x28]         ; 00564b6c
    JMP 0x00564b2c                      ; 00564b70
        ;   XREF to: 00564b2c (UNCONDITIONAL_JUMP)  ; LAB_00564b2c
    PUSH dword ptr [EBP + 0x18]         ; 00564b72
        ;   Label: LAB_00564b72
    PUSH EBX                            ; 00564b75
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 00564b76
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00564b7b
    LEA ESI,[EBX + 0x2b4]               ; 00564b7e
    TEST EAX,EAX                        ; 00564b84
    JZ 0x00564c0b                       ; 00564b86
        ;   XREF to: 00564c0b (CONDITIONAL_JUMP)  ; LAB_00564c0b
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00564b8c
    CMP EAX,0x2                         ; 00564b92
    JNC 0x00564bf7                      ; 00564b95
        ;   XREF to: 00564bf7 (CONDITIONAL_JUMP)  ; LAB_00564bf7
    CMP EAX,0x1                         ; 00564b97
    JNZ 0x00564bea                      ; 00564b9a
        ;   XREF to: 00564bea (CONDITIONAL_JUMP)  ; LAB_00564bea
    PUSH EAX                            ; 00564b9c
    PUSH EAX                            ; 00564b9d
    PUSH ESI                            ; 00564b9e
        ;   Label: LAB_00564b9e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00564b9f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00564b9f
    ADD ESP,0xc                         ; 00564ba4
        ;   Label: LAB_00564ba4
    LEA EAX,[EBX + 0x2508]              ; 00564ba7
    MOV dword ptr [EAX + 0x8],0x0       ; 00564bad
    MOV EDX,dword ptr [EAX + 0x8]       ; 00564bb4
    MOV dword ptr [EAX + 0x4],EDX       ; 00564bb7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00564bba
    MOV dword ptr [EAX],EDX             ; 00564bbd
    JMP 0x005638ce                      ; 00564bbf
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00564bc4
        ;   Label: LAB_00564bc4
    PUSH EDI                            ; 00564bc6
    PUSH ESI                            ; 00564bc7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00564bc8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00564bcd
    PUSH EBX                            ; 00564bd0
    PUSH 0x5eb53b                       ; 00564bd1 | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00609ed0]      ; 00564bd6 | g_CConsolePtr
    PUSH EDI                            ; 00564bdc | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 00564bdd
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x00564ba4                      ; 00564be2
        ;   XREF to: 00564ba4 (UNCONDITIONAL_JUMP)  ; LAB_00564ba4
    PUSH 0x1                            ; 00564be4
        ;   Label: LAB_00564be4
    PUSH 0x3                            ; 00564be6
    JMP 0x00564b9e                      ; 00564be8
        ;   XREF to: 00564b9e (UNCONDITIONAL_JUMP)  ; LAB_00564b9e
    PUSH 0x1                            ; 00564bea
        ;   Label: LAB_00564bea
    PUSH 0x0                            ; 00564bec
    LEA EAX,[EBX + 0x2b4]               ; 00564bee
    PUSH EAX                            ; 00564bf4
    JMP 0x00564b9f                      ; 00564bf5
        ;   XREF to: 00564b9f (UNCONDITIONAL_JUMP)  ; LAB_00564b9f
    JBE 0x00564be4                      ; 00564bf7
        ;   XREF to: 00564be4 (CONDITIONAL_JUMP)  ; LAB_00564be4
        ;   Label: LAB_00564bf7
    CMP EAX,0x3                         ; 00564bf9
    JZ 0x00564bc4                       ; 00564bfc
        ;   XREF to: 00564bc4 (CONDITIONAL_JUMP)  ; LAB_00564bc4
    PUSH 0x1                            ; 00564bfe
    PUSH 0x0                            ; 00564c00
    LEA EAX,[EBX + 0x2b4]               ; 00564c02
    PUSH EAX                            ; 00564c08
    JMP 0x00564b9f                      ; 00564c09
        ;   XREF to: 00564b9f (UNCONDITIONAL_JUMP)  ; LAB_00564b9f
    CMP dword ptr [ESP + 0x45c],0x0     ; 00564c0b
        ;   Label: LAB_00564c0b
    JZ 0x005638ce                       ; 00564c13
        ;   XREF to: 005638ce (CONDITIONAL_JUMP)  ; caseD_6
    PUSH ESI                            ; 00564c19
    CALL core_motion.cpp_FUN_005035c0   ; 00564c1a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00564c1f
    ADD ESP,0x4                         ; 00564c22
    CMP EAX,0xe                         ; 00564c25
    JA 0x005638ce                       ; 00564c28
        ;   XREF to: 005638ce (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x563018]  ; 00564c2e | caseD_5 | caseD_6 | caseD_e
        ;   Label: switchD
    CMP dword ptr [EBX + 0x2570],0x0    ; 00564c35
        ;   Label: caseD_0
    JNZ 0x00564c4c                      ; 00564c3c
        ;   XREF to: 00564c4c (CONDITIONAL_JUMP)  ; LAB_00564c4c
    XOR ESI,ESI                         ; 00564c3e
        ;   Label: LAB_00564c3e
    MOV dword ptr [ESP + 0x420],ESI     ; 00564c40
    JMP 0x005638ce                      ; 00564c47
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    LEA EAX,[EBX + 0x2b4]               ; 00564c4c
        ;   Label: LAB_00564c4c
    PUSH EAX                            ; 00564c52
    XOR ESI,ESI                         ; 00564c53
    CALL core_motion.cpp_FUN_005035c0   ; 00564c55
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00564c5a
    MOV EDX,dword ptr [EBX + 0x10a68]   ; 00564c5d
    MOV EDI,dword ptr [EAX + 0x24]      ; 00564c63
    TEST EDX,EDX                        ; 00564c66
    JZ 0x00564e11                       ; 00564c68
        ;   XREF to: 00564e11 (CONDITIONAL_JUMP)  ; LAB_00564e11
    CMP dword ptr [EBX + 0x10a70],0x0   ; 00564c6e
    JZ 0x00564e07                       ; 00564c75
        ;   XREF to: 00564e07 (CONDITIONAL_JUMP)  ; LAB_00564e07
    MOV ESI,0x3                         ; 00564c7b
    PUSH 0x1                            ; 00564c80
        ;   Label: LAB_00564c80
    LEA EAX,[EBX + 0x2b4]               ; 00564c82
    PUSH EAX                            ; 00564c88
    MOV dword ptr [ESP + 0x420],EAX     ; 00564c89
    CALL core_motion.cpp_FUN_005038a0   ; 00564c90
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00564c95
    FLD float ptr [ESP + 0x480]         ; 00564c9c
    ADD ESP,0x8                         ; 00564ca3
    FMUL float ptr [0x005fc1f0]         ; 00564ca6 | DAT_005fc1f0
    PUSH 0x3                            ; 00564cac
    MOV EDX,dword ptr [ESP + 0x41c]     ; 00564cae
    PUSH EDX                            ; 00564cb5
    FSTP float ptr [ESP + 0x47c]        ; 00564cb6
    CALL core_motion.cpp_FUN_005038a0   ; 00564cbd
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00564cc2
    FLD float ptr [ESP + 0x480]         ; 00564cc9
    ADD ESP,0x8                         ; 00564cd0
    FMUL float ptr [0x005fc1f4]         ; 00564cd3 | DAT_005fc1f4
    PUSH 0x2                            ; 00564cd9
    MOV ECX,dword ptr [ESP + 0x41c]     ; 00564cdb
    FADD float ptr [ESP + 0x478]        ; 00564ce2
    PUSH ECX                            ; 00564ce9
    FSTP float ptr [ESP + 0x47c]        ; 00564cea
    CALL core_motion.cpp_FUN_005038a0   ; 00564cf1
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x480],EAX     ; 00564cf6
    FLD float ptr [ESP + 0x480]         ; 00564cfd
    FMUL float ptr [0x005fc1f8]         ; 00564d04 | DAT_005fc1f8
    ADD ESP,0x8                         ; 00564d0a
    FADD float ptr [ESP + 0x474]        ; 00564d0d
    FLD float ptr [EBX + 0x10a8c]       ; 00564d14
    FMUL float ptr [EBP + 0x18]         ; 00564d1a
    FLD float ptr [EBX + 0x10a90]       ; 00564d1d
    FMUL float ptr [EBX + 0x2598]       ; 00564d23
    FXCH                                ; 00564d29
    FMULP ST2                           ; 00564d2b
    MOV EAX,dword ptr [EBX + 0x10a84]   ; 00564d2d
    FST float ptr [EBX + 0x2578]        ; 00564d33
    FLD ST0                             ; 00564d39
    FLD float ptr [EBX + 0x2578]        ; 00564d3b
    FLD ST0                             ; 00564d41
    FLD float ptr [EBX + 0x2578]        ; 00564d43
    FXCH ST4                            ; 00564d49
    FSUBR float ptr [EBX + 0x256bc]     ; 00564d4b
    FXCH ST3                            ; 00564d51
    FSUBR float ptr [EBX + 0x25658]     ; 00564d53
    FXCH ST2                            ; 00564d59
    FSUBR float ptr [EBX + 0x25678]     ; 00564d5b
    FXCH                                ; 00564d61
    FSUBR float ptr [EBX + 0x25660]     ; 00564d63
    FXCH ST4                            ; 00564d69
    FSUBR float ptr [EBX + 0x25680]     ; 00564d6b
    FXCH ST3                            ; 00564d71
    FSTP float ptr [EBX + 0x256bc]      ; 00564d73
    FXCH                                ; 00564d79
    FSTP float ptr [EBX + 0x25658]      ; 00564d7b
    FSTP float ptr [EBX + 0x25678]      ; 00564d81
    FXCH                                ; 00564d87
    FSTP float ptr [EBX + 0x25660]      ; 00564d89
    FXCH                                ; 00564d8f
    FADD float ptr [EBX + 0x257c]       ; 00564d91
    FXCH                                ; 00564d97
    FSTP float ptr [EBX + 0x25680]      ; 00564d99
    FSTP float ptr [EBX + 0x257c]       ; 00564d9f
    TEST EAX,EAX                        ; 00564da5
    JZ 0x00564dcd                       ; 00564da7
        ;   XREF to: 00564dcd (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [EBX + 0x2d04],0xe    ; 00564da9
    JZ 0x00564dcd                       ; 00564db0
        ;   XREF to: 00564dcd (CONDITIONAL_JUMP)  ; default
    CMP EDI,0x5                         ; 00564db2
    JA 0x00564dcd                       ; 00564db5
        ;   XREF to: 00564dcd (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x563000]  ; 00564db7 | caseD_5 | caseD_3 | switchdataD_00563000
        ;   Label: switchD
    MOV ESI,0xb                         ; 00564dbe
        ;   Label: caseD_0
    MOV dword ptr [EBX + 0x2570],0x0    ; 00564dc3
        ;   Label: LAB_00564dc3
    CMP ESI,EDI                         ; 00564dcd
        ;   Label: default
    JZ 0x00564de3                       ; 00564dcf
        ;   XREF to: 00564de3 (CONDITIONAL_JUMP)  ; LAB_00564de3
    PUSH 0x1                            ; 00564dd1
    PUSH ESI                            ; 00564dd3
    LEA EAX,[EBX + 0x2b4]               ; 00564dd4
    PUSH EAX                            ; 00564dda
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00564ddb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00564de0
    CMP dword ptr [EBX + 0x10a78],0x0   ; 00564de3
        ;   Label: LAB_00564de3
    JZ 0x00564c3e                       ; 00564dea
        ;   XREF to: 00564c3e (CONDITIONAL_JUMP)  ; LAB_00564c3e
    PUSH EBX                            ; 00564df0
    CALL core_hero.cpp_FUN_004cfc80     ; 00564df1
        ;   XREF to: 004cfc80 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004cfc80()
    ADD ESP,0x4                         ; 00564df6
    XOR ESI,ESI                         ; 00564df9
    MOV dword ptr [ESP + 0x420],ESI     ; 00564dfb
    JMP 0x005638ce                      ; 00564e02
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    MOV ESI,0x1                         ; 00564e07
        ;   Label: LAB_00564e07
    JMP 0x00564c80                      ; 00564e0c
        ;   XREF to: 00564c80 (UNCONDITIONAL_JUMP)  ; LAB_00564c80
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 00564e11
        ;   Label: LAB_00564e11
    JZ 0x00564e24                       ; 00564e18
        ;   XREF to: 00564e24 (CONDITIONAL_JUMP)  ; LAB_00564e24
    MOV ESI,0x2                         ; 00564e1a
    JMP 0x00564c80                      ; 00564e1f
        ;   XREF to: 00564c80 (UNCONDITIONAL_JUMP)  ; LAB_00564c80
    FLD float ptr [EBX + 0x10a8c]       ; 00564e24
        ;   Label: LAB_00564e24
    FST double ptr [ESP + 0x10]         ; 00564e2a
    FCOMP double ptr [0x005eb5dd]       ; 00564e2e | DAT_005eb5dd
    FNSTSW AX                           ; 00564e34
    SAHF                                ; 00564e36
    JNC 0x00564e43                      ; 00564e37
        ;   XREF to: 00564e43 (CONDITIONAL_JUMP)  ; LAB_00564e43
    MOV ESI,0x4                         ; 00564e39
    JMP 0x00564c80                      ; 00564e3e
        ;   XREF to: 00564c80 (UNCONDITIONAL_JUMP)  ; LAB_00564c80
    FLD double ptr [ESP + 0x10]         ; 00564e43
        ;   Label: LAB_00564e43
    FCOMP double ptr [0x005eb5e5]       ; 00564e47 | DAT_005eb5e5
    FNSTSW AX                           ; 00564e4d
    SAHF                                ; 00564e4f
    JBE 0x00564c80                      ; 00564e50
        ;   XREF to: 00564c80 (CONDITIONAL_JUMP)  ; LAB_00564c80
    MOV ESI,0x5                         ; 00564e56
    JMP 0x00564c80                      ; 00564e5b
        ;   XREF to: 00564c80 (UNCONDITIONAL_JUMP)  ; LAB_00564c80
    MOV ESI,0x7                         ; 00564e60
        ;   Label: caseD_3
    JMP 0x00564dc3                      ; 00564e65
        ;   XREF to: 00564dc3 (UNCONDITIONAL_JUMP)  ; LAB_00564dc3
    MOV dword ptr [EBX + 0x2570],0x0    ; 00564e6a
        ;   Label: caseD_7
    JMP 0x005638ce                      ; 00564e74
        ;   XREF to: 005638ce (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0x25694],0x0   ; 00564e79
        ;   Label: LAB_00564e79
    JNZ 0x0056396b                      ; 00564e80
        ;   XREF to: 0056396b (CONDITIONAL_JUMP)  ; LAB_0056396b
    CMP dword ptr [ESP + 0x450],0x0     ; 00564e86
    JZ 0x005639ef                       ; 00564e8e
        ;   XREF to: 005639ef (CONDITIONAL_JUMP)  ; LAB_005639ef
    LEA EAX,[EBX + 0x2b4]               ; 00564e94
    PUSH EAX                            ; 00564e9a
    MOV dword ptr [ESP + 0x434],EAX     ; 00564e9b
    CALL core_motion.cpp_FUN_005035c0   ; 00564ea2
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00564ea7
    FLD float ptr [0x005fc1dc]          ; 00564eaa | DAT_005fc1dc
    FMUL float ptr [EBP + 0x18]         ; 00564eb0
    LEA EDI,[ESP + 0x1d0]               ; 00564eb3
    LEA ECX,[EBX + 0x2508]              ; 00564eba
    LEA ESI,[ESP + 0xf8]                ; 00564ec0
    MOV EAX,dword ptr [EAX + 0x24]      ; 00564ec7
    FLD float ptr [ECX]                 ; 00564eca
    FLD float ptr [ECX + 0x4]           ; 00564ecc
    LEA EDX,[EBX + 0x257c]              ; 00564ecf
    FLD float ptr [ECX + 0x8]           ; 00564ed5
    FXCH ST2                            ; 00564ed8
    FADD float ptr [EDX]                ; 00564eda
    FXCH                                ; 00564edc
    FADD float ptr [EDX + 0x4]          ; 00564ede
    FXCH ST2                            ; 00564ee1
    FADD float ptr [EDX + 0x8]          ; 00564ee3
    FXCH                                ; 00564ee6
    FSTP float ptr [ESP + 0xf8]         ; 00564ee8
    FXCH                                ; 00564eef
    FSTP float ptr [ESP + 0xfc]         ; 00564ef1
    FSTP float ptr [ESP + 0x100]        ; 00564ef8
    MOVSD ES:EDI,ESI                    ; 00564eff
    MOVSD ES:EDI,ESI                    ; 00564f00
    MOVSD ES:EDI,ESI                    ; 00564f01
    MOV dword ptr [ECX + 0x8],0x0       ; 00564f02
    MOV dword ptr [ESP + 0x458],EAX     ; 00564f09
    MOV ESI,dword ptr [ECX + 0x8]       ; 00564f10
    MOV dword ptr [ECX + 0x4],ESI       ; 00564f13
    MOV ESI,dword ptr [ECX + 0x4]       ; 00564f16
    MOV dword ptr [ECX],ESI             ; 00564f19
    MOV dword ptr [EDX + 0x8],0x0       ; 00564f1b
    FSTP float ptr [ESP + 0x428]        ; 00564f22
    MOV ECX,dword ptr [EDX + 0x8]       ; 00564f29
    MOV dword ptr [EDX + 0x4],ECX       ; 00564f2c
    MOV ECX,dword ptr [EDX + 0x4]       ; 00564f2f
    MOV dword ptr [EDX],ECX             ; 00564f32
    CMP EAX,0x7                         ; 00564f34
    JZ 0x0056518f                       ; 00564f37
        ;   XREF to: 0056518f (CONDITIONAL_JUMP)  ; LAB_0056518f
    CMP EAX,0x8                         ; 00564f3d
    JNZ 0x005651c3                      ; 00564f40
        ;   XREF to: 005651c3 (CONDITIONAL_JUMP)  ; LAB_005651c3
    FLD float ptr [EBP + 0x18]          ; 00564f46
    FMUL double ptr [0x005eb62d]        ; 00564f49 | DAT_005eb62d
    XOR EDX,EDX                         ; 00564f4f
    MOV EAX,dword ptr [ESP + 0x428]     ; 00564f51
    MOV dword ptr [ESP + 0x1d0],EDX     ; 00564f58
    MOV dword ptr [ESP + 0x1d4],EDX     ; 00564f5f
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00564f66
    FLD float ptr [EBX + 0x258c]        ; 00564f6d
    MOV EAX,[0x005fc1dc]                ; 00564f73 | DAT_005fc1dc
    MOV dword ptr [EBX + 0x25700],EAX   ; 00564f78
    FXCH                                ; 00564f7e
    FSUBR ST0,ST1                       ; 00564f80
    MOV dword ptr [EBX + 0x256fc],EDX   ; 00564f82
    FSTP ST1                            ; 00564f88
        ;   Label: LAB_00564f88
    FSTP float ptr [EBX + 0x258c]       ; 00564f8a
        ;   Label: LAB_00564f8a
    LEA EAX,[EBX + 0x256e4]             ; 00564f90
        ;   Label: LAB_00564f90
    PUSH EAX                            ; 00564f96
    PUSH EBX                            ; 00564f97
    LEA ESI,[ESP + 0x34c]               ; 00564f98
    LEA EDI,[ESP + 0x1f0]               ; 00564f9f
    CALL core_actor.cpp_FUN_00408d30    ; 00564fa6
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x34c]               ; 00564fab
    ADD ESP,0x8                         ; 00564fb2
    LEA EAX,[EBX + 0x2588]              ; 00564fb5
    MOVSD ES:EDI,ESI                    ; 00564fbb
    MOVSD ES:EDI,ESI                    ; 00564fbc
    MOVSD ES:EDI,ESI                    ; 00564fbd
    FLD float ptr [EBP + 0x18]          ; 00564fbe
    FLD float ptr [EAX]                 ; 00564fc1
    FMUL ST1                            ; 00564fc3
    FLD float ptr [EAX + 0x4]           ; 00564fc5
    FMUL ST2                            ; 00564fc8
    FLD float ptr [EAX + 0x8]           ; 00564fca
    FMULP ST3                           ; 00564fcd
    FLD float ptr [ESP + 0x1d0]         ; 00564fcf
    FLD float ptr [ESP + 0x1d4]         ; 00564fd6
    FLD float ptr [ESP + 0x1d8]         ; 00564fdd
    LEA EDI,[ESP + 0x11c]               ; 00564fe4
    LEA ESI,[ESP + 0x17c]               ; 00564feb
    LEA EAX,[ESP + 0x1d0]               ; 00564ff2
    FXCH ST4                            ; 00564ff9
    FSTP float ptr [ESP + 0x17c]        ; 00564ffb
    FXCH ST2                            ; 00565002
    FSTP float ptr [ESP + 0x180]        ; 00565004
    FXCH ST3                            ; 0056500b
    FSTP float ptr [ESP + 0x184]        ; 0056500d
    MOVSD ES:EDI,ESI                    ; 00565014
    MOVSD ES:EDI,ESI                    ; 00565015
    MOVSD ES:EDI,ESI                    ; 00565016
    PUSH EAX                            ; 00565017
    FLD float ptr [ESP + 0x120]         ; 00565018
    FLD float ptr [ESP + 0x124]         ; 0056501f
    FLD float ptr [ESP + 0x128]         ; 00565026
    LEA EDI,[ESP + 0x3a8]               ; 0056502d
    LEA ESI,[ESP + 0x36c]               ; 00565034
    FXCH ST2                            ; 0056503b
    FADD float ptr [ESP + 0x1ec]        ; 0056503d
    FXCH                                ; 00565044
    FADD float ptr [ESP + 0x1f0]        ; 00565046
    FXCH ST2                            ; 0056504d
    FADD float ptr [ESP + 0x1f4]        ; 0056504f
    FXCH                                ; 00565056
    FSTP float ptr [ESP + 0x36c]        ; 00565058
    FXCH                                ; 0056505f
    FSTP float ptr [ESP + 0x370]        ; 00565061
    FSTP float ptr [ESP + 0x374]        ; 00565068
    MOVSD ES:EDI,ESI                    ; 0056506f
    MOVSD ES:EDI,ESI                    ; 00565070
    MOVSD ES:EDI,ESI                    ; 00565071
    PUSH EBX                            ; 00565072
    FXCH ST2                            ; 00565073
    FADD float ptr [ESP + 0x3ac]        ; 00565075
    FXCH ST2                            ; 0056507c
    FADD float ptr [ESP + 0x3b0]        ; 0056507e
    FXCH                                ; 00565085
    FADD float ptr [ESP + 0x3b4]        ; 00565087
    FXCH ST2                            ; 0056508e
    FSTP float ptr [ESP + 0x1d8]        ; 00565090
    FSTP float ptr [ESP + 0x1dc]        ; 00565097
    FSTP float ptr [ESP + 0x1e0]        ; 0056509e
    MOV EAX,dword ptr [EBX + 0x258c]    ; 005650a5
    MOV dword ptr [EBX + 0x258d8],EAX   ; 005650ab
    CALL core_charactr.cpp_FUN_00423a60 ; 005650b1
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    FLD float ptr [EBX + 0x2574]        ; 005650b6
    FADD double ptr [0x005eb635]        ; 005650bc | DAT_005eb635
    ADD ESP,0x8                         ; 005650c2
    FLD float ptr [EBX + 0x24]          ; 005650c5
    FCOMPP                              ; 005650c8
    FNSTSW AX                           ; 005650ca
    SAHF                                ; 005650cc
    JNC 0x005650d9                      ; 005650cd
        ;   XREF to: 005650d9 (CONDITIONAL_JUMP)  ; LAB_005650d9
    MOV dword ptr [EBX + 0x2570],0x1    ; 005650cf
    MOV EAX,dword ptr [ESP + 0x458]     ; 005650d9
        ;   Label: LAB_005650d9
    CMP EAX,0xf                         ; 005650e0
    JNZ 0x00565431                      ; 005650e3
        ;   XREF to: 00565431 (CONDITIONAL_JUMP)  ; LAB_00565431
    CMP dword ptr [EBX + 0x2570],0x0    ; 005650e9
        ;   Label: LAB_005650e9
    JZ 0x0056517d                       ; 005650f0
        ;   XREF to: 0056517d (CONDITIONAL_JUMP)  ; LAB_0056517d
    SUB ESP,0x8                         ; 005650f6
    FLD float ptr [EBX + 0x258c]        ; 005650f9
    FSTP double ptr [ESP]               ; 005650ff
    PUSH 0x5eb565                       ; 00565102 | = "Splat at %3.2f fps\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 00565107 | g_CConsolePtr
    PUSH EDI                            ; 0056510d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0056510e
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    FLD float ptr [EBX + 0x258d8]       ; 00565113
    ADD ESP,0x10                        ; 00565119
    FCHS                                ; 0056511c
    FST float ptr [ESP + 0x18]          ; 0056511e
    FST double ptr [ESP]                ; 00565122
    FCOMP double ptr [0x005eb63d]       ; 00565125 | DAT_005eb63d
    FNSTSW AX                           ; 0056512b
    SAHF                                ; 0056512d
    JNC 0x00565475                      ; 0056512e
        ;   XREF to: 00565475 (CONDITIONAL_JUMP)  ; LAB_00565475
    MOV ECX,dword ptr [ESP + 0x458]     ; 00565134
    LEA EAX,[EBX + 0x2b4]               ; 0056513b
    CMP ECX,0xd                         ; 00565141
    JNZ 0x00565455                      ; 00565144
        ;   XREF to: 00565455 (CONDITIONAL_JUMP)  ; LAB_00565455
    PUSH 0x1                            ; 0056514a
    PUSH 0xe                            ; 0056514c
    PUSH EAX                            ; 0056514e
        ;   Label: LAB_0056514e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056514f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00565154
    FLD float ptr [ESP + 0x18]          ; 00565157
        ;   Label: LAB_00565157
    FMUL float ptr [0x005eb65d]         ; 0056515b | DAT_005eb65d
    SUB ESP,0x4                         ; 00565161
    FLD1                                ; 00565164
    FADDP                               ; 00565166
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00565168
    FSTP float ptr [ESP]                ; 0056516e
    PUSH 0x265370c                      ; 00565171 | DAT_0265370c
    PUSH EBX                            ; 00565176
    CALL dword ptr [EAX + 0x2c]         ; 00565177
    ADD ESP,0xc                         ; 0056517a
    CMP dword ptr [EBX + 0x2570],0x0    ; 0056517d
        ;   Label: LAB_0056517d
    JZ 0x0056552a                       ; 00565184
        ;   XREF to: 0056552a (CONDITIONAL_JUMP)  ; LAB_0056552a
    JMP 0x005639e5                      ; 0056518a
        ;   XREF to: 005639e5 (UNCONDITIONAL_JUMP)  ; LAB_005639e5
    XOR ESI,ESI                         ; 0056518f
        ;   Label: LAB_0056518f
    MOV EAX,dword ptr [ESP + 0x428]     ; 00565191
    MOV dword ptr [ESP + 0x1d0],ESI     ; 00565198
    MOV dword ptr [ESP + 0x1d4],ESI     ; 0056519f
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005651a6
    MOV EAX,[0x005fc1dc]                ; 005651ad | DAT_005fc1dc
    MOV dword ptr [EBX + 0x25700],EAX   ; 005651b2
    MOV dword ptr [EBX + 0x256fc],ESI   ; 005651b8
    JMP 0x00564f90                      ; 005651be
        ;   XREF to: 00564f90 (UNCONDITIONAL_JUMP)  ; LAB_00564f90
    CMP EAX,0x9                         ; 005651c3
        ;   Label: LAB_005651c3
    JNZ 0x00565264                      ; 005651c6
        ;   XREF to: 00565264 (CONDITIONAL_JUMP)  ; LAB_00565264
    FLD float ptr [EBP + 0x18]          ; 005651cc
    FLD ST0                             ; 005651cf
    FMUL double ptr [0x005eb62d]        ; 005651d1 | DAT_005eb62d
    XOR ESI,ESI                         ; 005651d7
    FLD float ptr [0x005fc1ec]          ; 005651d9 | DAT_005fc1ec
    MOV dword ptr [ESP + 0x1d0],ESI     ; 005651df
    MOV dword ptr [ESP + 0x1d4],ESI     ; 005651e6
    FMUL float ptr [0x005fc1dc]         ; 005651ed | DAT_005fc1dc
    FLD float ptr [EBX + 0x25700]       ; 005651f3
    FMUL ST3                            ; 005651f9
    FXCH                                ; 005651fb
    FMULP ST3                           ; 005651fd
    FSTP float ptr [ESP + 0x1d8]        ; 005651ff
    MOV dword ptr [EBX + 0x256fc],ESI   ; 00565206
    FXCH                                ; 0056520c
    FSUBR float ptr [EBX + 0x25700]     ; 0056520e
    FLD float ptr [EBX + 0x258c]        ; 00565214
    FXCH                                ; 0056521a
    FSTP float ptr [EBX + 0x25700]      ; 0056521c
    FXCH                                ; 00565222
    FSUBR ST0,ST1                       ; 00565224
    FLD float ptr [EBX + 0x25700]       ; 00565226
    FLDZ                                ; 0056522c
    FXCH ST2                            ; 0056522e
    FSTP ST3                            ; 00565230
    FXCH ST2                            ; 00565232
    FSTP float ptr [EBX + 0x258c]       ; 00565234
    FCOMPP                              ; 0056523a
    FNSTSW AX                           ; 0056523c
    SAHF                                ; 0056523e
    JBE 0x00564f90                      ; 0056523f
        ;   XREF to: 00564f90 (CONDITIONAL_JUMP)  ; LAB_00564f90
    PUSH 0x1                            ; 00565245
    PUSH 0xf                            ; 00565247
    MOV EAX,dword ptr [ESP + 0x438]     ; 00565249
    PUSH EAX                            ; 00565250
    MOV dword ptr [EBX + 0x25700],ESI   ; 00565251
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00565257
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056525c
    JMP 0x00564f90                      ; 0056525f
        ;   XREF to: 00564f90 (UNCONDITIONAL_JUMP)  ; LAB_00564f90
    CMP EAX,0xa                         ; 00565264
        ;   Label: LAB_00565264
    JNZ 0x0056528c                      ; 00565267
        ;   XREF to: 0056528c (CONDITIONAL_JUMP)  ; LAB_0056528c
    XOR EDX,EDX                         ; 00565269
    MOV EAX,dword ptr [ESP + 0x428]     ; 0056526b
    MOV dword ptr [ESP + 0x1d4],EDX     ; 00565272
    MOV dword ptr [ESP + 0x1d8],EAX     ; 00565279
    MOV dword ptr [ESP + 0x1d0],EDX     ; 00565280
    JMP 0x00564f90                      ; 00565287
        ;   XREF to: 00564f90 (UNCONDITIONAL_JUMP)  ; LAB_00564f90
    CMP EAX,0xb                         ; 0056528c
        ;   Label: LAB_0056528c
    JNZ 0x005652ab                      ; 0056528f
        ;   XREF to: 005652ab (CONDITIONAL_JUMP)  ; LAB_005652ab
    MOV dword ptr [EBX + 0x256fc],0x0   ; 00565291
    MOV EAX,[0x005fc1e4]                ; 0056529b | DAT_005fc1e4
    MOV dword ptr [EBX + 0x25700],EAX   ; 005652a0
    JMP 0x00564f90                      ; 005652a6
        ;   XREF to: 00564f90 (UNCONDITIONAL_JUMP)  ; LAB_00564f90
    CMP EAX,0xc                         ; 005652ab
        ;   Label: LAB_005652ab
    JNZ 0x005652fb                      ; 005652ae
        ;   XREF to: 005652fb (CONDITIONAL_JUMP)  ; LAB_005652fb
    FLD float ptr [0x005fc1e4]          ; 005652b0 | DAT_005fc1e4
    FLD ST0                             ; 005652b6
    FLD float ptr [EBP + 0x18]          ; 005652b8
    FXCH                                ; 005652bb
    FMUL ST1                            ; 005652bd
    XOR EDI,EDI                         ; 005652bf
    FXCH                                ; 005652c1
    FMUL double ptr [0x005eb62d]        ; 005652c3 | DAT_005eb62d
    MOV dword ptr [ESP + 0x1d0],EDI     ; 005652c9
    MOV dword ptr [ESP + 0x1d4],EDI     ; 005652d0
    FXCH                                ; 005652d7
    FSTP float ptr [ESP + 0x1d8]        ; 005652d9
    FLD float ptr [EBX + 0x258c]        ; 005652e0
    FXCH ST2                            ; 005652e6
    FSTP float ptr [EBX + 0x25700]      ; 005652e8
    FSUBR ST0,ST1                       ; 005652ee
    MOV dword ptr [EBX + 0x256fc],EDI   ; 005652f0
    JMP 0x00564f88                      ; 005652f6
        ;   XREF to: 00564f88 (UNCONDITIONAL_JUMP)  ; LAB_00564f88
    CMP EAX,0xd                         ; 005652fb
        ;   Label: LAB_005652fb
    JNZ 0x0056539c                      ; 005652fe
        ;   XREF to: 0056539c (CONDITIONAL_JUMP)  ; LAB_0056539c
    FLD float ptr [EBP + 0x18]          ; 00565304
    FLD ST0                             ; 00565307
    FMUL double ptr [0x005eb62d]        ; 00565309 | DAT_005eb62d
    XOR EDX,EDX                         ; 0056530f
    FLD float ptr [0x005fc1ec]          ; 00565311 | DAT_005fc1ec
    MOV dword ptr [ESP + 0x1d0],EDX     ; 00565317
    MOV dword ptr [ESP + 0x1d4],EDX     ; 0056531e
    FMUL float ptr [0x005fc1e4]         ; 00565325 | DAT_005fc1e4
    FLD float ptr [EBX + 0x25700]       ; 0056532b
    FMUL ST3                            ; 00565331
    FXCH                                ; 00565333
    FMULP ST3                           ; 00565335
    FSTP float ptr [ESP + 0x1d8]        ; 00565337
    MOV dword ptr [EBX + 0x256fc],EDX   ; 0056533e
    FXCH                                ; 00565344
    FSUBR float ptr [EBX + 0x25700]     ; 00565346
    FLD float ptr [EBX + 0x258c]        ; 0056534c
    FXCH                                ; 00565352
    FSTP float ptr [EBX + 0x25700]      ; 00565354
    FXCH                                ; 0056535a
    FSUBR ST0,ST1                       ; 0056535c
    FLD float ptr [EBX + 0x25700]       ; 0056535e
    FLDZ                                ; 00565364
    FXCH ST2                            ; 00565366
    FSTP ST3                            ; 00565368
    FXCH ST2                            ; 0056536a
    FSTP float ptr [EBX + 0x258c]       ; 0056536c
    FCOMPP                              ; 00565372
    FNSTSW AX                           ; 00565374
    SAHF                                ; 00565376
    JBE 0x00564f90                      ; 00565377
        ;   XREF to: 00564f90 (CONDITIONAL_JUMP)  ; LAB_00564f90
    PUSH 0x1                            ; 0056537d
    PUSH 0xf                            ; 0056537f
    MOV ESI,dword ptr [ESP + 0x438]     ; 00565381
    PUSH ESI                            ; 00565388
    MOV dword ptr [EBX + 0x25700],EDX   ; 00565389
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056538f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00565394
    JMP 0x00564f90                      ; 00565397
        ;   XREF to: 00564f90 (UNCONDITIONAL_JUMP)  ; LAB_00564f90
    CMP EAX,0xe                         ; 0056539c
        ;   Label: LAB_0056539c
    JNZ 0x005653af                      ; 0056539f
        ;   XREF to: 005653af (CONDITIONAL_JUMP)  ; LAB_005653af
    XOR EAX,EAX                         ; 005653a1
    MOV dword ptr [ESP + 0x1d4],EAX     ; 005653a3
    JMP 0x00564f90                      ; 005653aa
        ;   XREF to: 00564f90 (UNCONDITIONAL_JUMP)  ; LAB_00564f90
    CMP EAX,0xf                         ; 005653af
        ;   Label: LAB_005653af
    JNZ 0x005653ed                      ; 005653b2
        ;   XREF to: 005653ed (CONDITIONAL_JUMP)  ; LAB_005653ed
    FLD float ptr [EBP + 0x18]          ; 005653b4
    XOR ECX,ECX                         ; 005653b7
    FMUL double ptr [0x005eb62d]        ; 005653b9 | DAT_005eb62d
    MOV dword ptr [ESP + 0x1d8],ECX     ; 005653bf
    MOV dword ptr [ESP + 0x1d4],ECX     ; 005653c6
    MOV dword ptr [ESP + 0x1d0],ECX     ; 005653cd
    FLD float ptr [EBX + 0x258c]        ; 005653d4
    FXCH                                ; 005653da
    FSUBR ST0,ST1                       ; 005653dc
    MOV dword ptr [EBX + 0x256fc],0x461c3f9a ; 005653de
    JMP 0x00564f88                      ; 005653e8
        ;   XREF to: 00564f88 (UNCONDITIONAL_JUMP)  ; LAB_00564f88
    CMP EAX,0x10                        ; 005653ed
        ;   Label: LAB_005653ed
    JNZ 0x0056541d                      ; 005653f0
        ;   XREF to: 0056541d (CONDITIONAL_JUMP)  ; LAB_0056541d
    FLD float ptr [EBP + 0x18]          ; 005653f2
    XOR EDI,EDI                         ; 005653f5
    FMUL double ptr [0x005eb62d]        ; 005653f7 | DAT_005eb62d
    MOV dword ptr [ESP + 0x1d8],EDI     ; 005653fd
    MOV dword ptr [ESP + 0x1d4],EDI     ; 00565404
    MOV dword ptr [ESP + 0x1d0],EDI     ; 0056540b
    FSUBR float ptr [EBX + 0x258c]      ; 00565412
    JMP 0x00564f8a                      ; 00565418
        ;   XREF to: 00564f8a (UNCONDITIONAL_JUMP)  ; LAB_00564f8a
    FLD float ptr [EBP + 0x18]          ; 0056541d
        ;   Label: LAB_0056541d
    FMUL double ptr [0x005eb62d]        ; 00565420 | DAT_005eb62d
    FSUBR float ptr [EBX + 0x258c]      ; 00565426
    JMP 0x00564f8a                      ; 0056542c
        ;   XREF to: 00564f8a (UNCONDITIONAL_JUMP)  ; LAB_00564f8a
    CMP EAX,0x9                         ; 00565431
        ;   Label: LAB_00565431
    JZ 0x005650e9                       ; 00565434
        ;   XREF to: 005650e9 (CONDITIONAL_JUMP)  ; LAB_005650e9
    CMP EAX,0xd                         ; 0056543a
    JZ 0x005650e9                       ; 0056543d
        ;   XREF to: 005650e9 (CONDITIONAL_JUMP)  ; LAB_005650e9
    CMP dword ptr [EBX + 0x2570],0x0    ; 00565443
    JZ 0x0056552a                       ; 0056544a
        ;   XREF to: 0056552a (CONDITIONAL_JUMP)  ; LAB_0056552a
    JMP 0x005639e5                      ; 00565450
        ;   XREF to: 005639e5 (UNCONDITIONAL_JUMP)  ; LAB_005639e5
    CMP ECX,0x9                         ; 00565455
        ;   Label: LAB_00565455
    JZ 0x0056546c                       ; 00565458
        ;   XREF to: 0056546c (CONDITIONAL_JUMP)  ; LAB_0056546c
    CMP ECX,0xf                         ; 0056545a
    JNZ 0x00565157                      ; 0056545d
        ;   XREF to: 00565157 (CONDITIONAL_JUMP)  ; LAB_00565157
    PUSH 0x1                            ; 00565463
    PUSH 0x10                           ; 00565465
    JMP 0x0056514e                      ; 00565467
        ;   XREF to: 0056514e (UNCONDITIONAL_JUMP)  ; LAB_0056514e
    PUSH 0x1                            ; 0056546c
        ;   Label: LAB_0056546c
    PUSH 0xa                            ; 0056546e
    JMP 0x0056514e                      ; 00565470
        ;   XREF to: 0056514e (UNCONDITIONAL_JUMP)  ; LAB_0056514e
    LEA EAX,[ESP + 0x30]                ; 00565475
        ;   Label: LAB_00565475
    PUSH EAX                            ; 00565479
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0056547a
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0056547f
    FLD double ptr [ESP]                ; 00565482
    FADD double ptr [0x005eb645]        ; 00565485 | DAT_005eb645
    FMUL double ptr [0x005eb64d]        ; 0056548b | DAT_005eb64d
    FMUL double ptr [0x005eb655]        ; 00565491 | DAT_005eb655
    FSTP float ptr [ESP + 0x34]         ; 00565497
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056549b
    XOR ESI,ESI                         ; 0056549f
    CMP EAX,0x42c80000                  ; 005654a1
    JLE 0x005654b6                      ; 005654a6
        ;   XREF to: 005654b6 (CONDITIONAL_JUMP)  ; LAB_005654b6
    MOV EDX,0x461c3c00                  ; 005654a8
    MOV ESI,0x1                         ; 005654ad
    MOV dword ptr [ESP + 0x34],EDX      ; 005654b2
    LEA EAX,[ESP + 0x30]                ; 005654b6
        ;   Label: LAB_005654b6
    PUSH EAX                            ; 005654ba
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 005654bb
    PUSH EBX                            ; 005654c1
    MOV dword ptr [EBX + 0x10a60],0x0   ; 005654c2
    CALL dword ptr [EDX + 0x110]        ; 005654cc
    FLD float ptr [EBX + 0x25a8]        ; 005654d2
    FLDZ                                ; 005654d8
    ADD ESP,0x8                         ; 005654da
    FCOMPP                              ; 005654dd
    FNSTSW AX                           ; 005654df
    SAHF                                ; 005654e1
    JNC 0x005654e8                      ; 005654e2
        ;   XREF to: 005654e8 (CONDITIONAL_JUMP)  ; LAB_005654e8
    TEST ESI,ESI                        ; 005654e4
    JZ 0x0056551b                       ; 005654e6
        ;   XREF to: 0056551b (CONDITIONAL_JUMP)  ; LAB_0056551b
    PUSH 0x1                            ; 005654e8
        ;   Label: LAB_005654e8
    PUSH 0x12                           ; 005654ea
    LEA EAX,[EBX + 0x2b4]               ; 005654ec
    PUSH EAX                            ; 005654f2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005654f3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005654f8
    PUSH 0x5eb579                       ; 005654fb | = "fall-?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00565500
    PUSH EBX                            ; 00565506
    CALL dword ptr [EAX + 0x34]         ; 00565507
    ADD ESP,0x8                         ; 0056550a
    CMP dword ptr [EBX + 0x2570],0x0    ; 0056550d
    JZ 0x0056552a                       ; 00565514
        ;   XREF to: 0056552a (CONDITIONAL_JUMP)  ; LAB_0056552a
    JMP 0x005639e5                      ; 00565516
        ;   XREF to: 005639e5 (UNCONDITIONAL_JUMP)  ; LAB_005639e5
    PUSH 0x1                            ; 0056551b
        ;   Label: LAB_0056551b
    PUSH 0x11                           ; 0056551d
    LEA EAX,[EBX + 0x2b4]               ; 0056551f
    JMP 0x0056514e                      ; 00565525
        ;   XREF to: 0056514e (UNCONDITIONAL_JUMP)  ; LAB_0056514e
    FLD float ptr [EBX + 0x256fc]       ; 0056552a
        ;   Label: LAB_0056552a
    MOV EDX,dword ptr [ESP + 0x458]     ; 00565530
    MOV EAX,[0x005fc1ec]                ; 00565537 | DAT_005fc1ec
    FADD float ptr [EBP + 0x18]         ; 0056553c
    MOV dword ptr [ESP + 0x2c],EAX      ; 0056553f
    FSTP float ptr [EBX + 0x256fc]      ; 00565543
    CMP EDX,0x3                         ; 00565549
    JNZ 0x00565560                      ; 0056554c
        ;   XREF to: 00565560 (CONDITIONAL_JUMP)  ; LAB_00565560
    FLD float ptr [ESP + 0x2c]          ; 0056554e
    FLD ST0                             ; 00565552
    FMUL double ptr [0x005eb5d5]        ; 00565554 | DAT_005eb5d5
    FSTP ST1                            ; 0056555a
    FSTP float ptr [ESP + 0x2c]         ; 0056555c
    FLD float ptr [EBX + 0x256fc]       ; 00565560
        ;   Label: LAB_00565560
    FCOMP float ptr [ESP + 0x2c]        ; 00565566
    FNSTSW AX                           ; 0056556a
    SAHF                                ; 0056556c
    JBE 0x0056559b                      ; 0056556d
        ;   XREF to: 0056559b (CONDITIONAL_JUMP)  ; LAB_0056559b
    CMP dword ptr [ESP + 0x458],0xf     ; 0056556f
        ;   Label: LAB_0056556f
    JZ 0x0056558c                       ; 00565577
        ;   XREF to: 0056558c (CONDITIONAL_JUMP)  ; LAB_0056558c
    PUSH 0x1                            ; 00565579
    PUSH 0xf                            ; 0056557b
    LEA EAX,[EBX + 0x2b4]               ; 0056557d
    PUSH EAX                            ; 00565583
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00565584
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00565589
    MOV dword ptr [EBX + 0x2570],0x0    ; 0056558c
        ;   Label: LAB_0056558c
    JMP 0x005639ef                      ; 00565596
        ;   XREF to: 005639ef (UNCONDITIONAL_JUMP)  ; LAB_005639ef
    FLD float ptr [EBX + 0x258d8]       ; 0056559b
        ;   Label: LAB_0056559b
    FCOMP double ptr [0x005eb645]       ; 005655a1 | DAT_005eb645
    FNSTSW AX                           ; 005655a7
    SAHF                                ; 005655a9
    JC 0x0056556f                       ; 005655aa
        ;   XREF to: 0056556f (CONDITIONAL_JUMP)  ; LAB_0056556f
    JMP 0x005639ef                      ; 005655ac
        ;   XREF to: 005639ef (UNCONDITIONAL_JUMP)  ; LAB_005639ef
    MOV dword ptr [EBX + 0x25640],0x1   ; 005655b1
        ;   Label: LAB_005655b1
    JMP 0x00563a60                      ; 005655bb
        ;   XREF to: 00563a60 (UNCONDITIONAL_JUMP)  ; LAB_00563a60
    MOV ESI,dword ptr [EAX + 0x44c]     ; 005655c0
        ;   Label: LAB_005655c0
    TEST ESI,ESI                        ; 005655c6
    JNZ 0x00563af3                      ; 005655c8
        ;   XREF to: 00563af3 (CONDITIONAL_JUMP)  ; LAB_00563af3
    MOV EAX,[0x00616494]                ; 005655ce | g_CGamePtr
    MOV dword ptr [EAX + 0x264],ESI     ; 005655d3 | g_CGameInstance.flashlight_active
    JMP 0x00563af3                      ; 005655d9
        ;   XREF to: 00563af3 (UNCONDITIONAL_JUMP)  ; LAB_00563af3
    FLD float ptr [EBP + 0x18]          ; 005655de
        ;   Label: LAB_005655de
    FDIV float ptr [0x005fc1c0]         ; 005655e1 | DAT_005fc1c0
    FSUBR float ptr [EBX + 0x25644]     ; 005655e7
    FST float ptr [EBX + 0x25644]       ; 005655ed
    FLDZ                                ; 005655f3
    FCOMPP                              ; 005655f5
    FNSTSW AX                           ; 005655f7
    SAHF                                ; 005655f9
    JBE 0x00563b3e                      ; 005655fa
        ;   XREF to: 00563b3e (CONDITIONAL_JUMP)  ; LAB_00563b3e
    MOV dword ptr [EBX + 0x25644],0x0   ; 00565600
    JMP 0x00563b3e                      ; 0056560a
        ;   XREF to: 00563b3e (UNCONDITIONAL_JUMP)  ; LAB_00563b3e
    PUSH EBX                            ; 0056560f
        ;   Label: LAB_0056560f
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004cf830 ; 00565610
        ;   XREF to: 004cf830 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004cf830(CHero * this_ptr)
    ADD ESP,0x4                         ; 00565615
    JMP 0x00563da2                      ; 00565618
        ;   XREF to: 00563da2 (UNCONDITIONAL_JUMP)  ; LAB_00563da2
    MOV ESI,dword ptr [EBX + 0x256b8]   ; 0056561d
        ;   Label: LAB_0056561d
    PUSH ESI                            ; 00565623
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00565624
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00565629
    MOV EDI,dword ptr [EBX + 0x256b4]   ; 0056562c
    PUSH EDI                            ; 00565632
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00565633
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00565638
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0056563b
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x1                            ; 00565640
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0 ; 00565642
        ;   XREF to: 005503a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0(uint flag_mask)
    ADD ESP,0x4                         ; 00565647
    PUSH 0x5eb59e                       ; 0056564a | = "goggle-off.wav"
    CALL sound_sndmain.cpp_FUN_005506b0 ; 0056564f
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 00565654
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 00565657
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV ESP,EBP                         ; 0056565c
    POP EBP                             ; 0056565e
    POP EDI                             ; 0056565f
    POP ESI                             ; 00565660
    POP EBX                             ; 00565661
    RET                                 ; 00565662
    MOV EAX,[0x00616494]                ; 00565663 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_00565663
    CMP dword ptr [EAX + 0x25c],0x0     ; 00565668 | g_CGameInstance.goggles_active
    JZ 0x00563e36                       ; 0056566f
        ;   XREF to: 00563e36 (CONDITIONAL_JUMP)  ; LAB_00563e36
    MOV EAX,dword ptr [EBX + 0x256b8]   ; 00565675
    PUSH EAX                            ; 0056567b
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0056567c
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00565681
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00565684
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x1                            ; 00565689
    CALL sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0 ; 0056568b
        ;   XREF to: 005503a0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxFlagBits_FUN_005503a0(uint flag_mask)
    ADD ESP,0x4                         ; 00565690
    PUSH 0x5eb5ad                       ; 00565693 | = "goggle-on.wav"
    CALL sound_sndmain.cpp_FUN_005506b0 ; 00565698
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 0056569d
    PUSH 0x0                            ; 005656a0
    MOV dword ptr [EBX + 0x256b8],EAX   ; 005656a2
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 005656a8
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 005656ad
    PUSH 0x5eb5bb                       ; 005656b0 | = "goggle-loop.wav"
    CALL sound_sndmain.cpp_FUN_005506b0 ; 005656b5
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 005656ba
    MOV dword ptr [EBX + 0x256b4],EAX   ; 005656bd
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 005656c3
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    PUSH 0x0                            ; 005656c8
    PUSH 0x3f800000                     ; 005656ca
    MOV EDX,dword ptr [EBX + 0x256b4]   ; 005656cf
    PUSH 0x3f800000                     ; 005656d5
    PUSH EDX                            ; 005656da
    CALL sound_sndmain.cpp_setSfxFade_FUN_00551080 ; 005656db
        ;   XREF to: 00551080 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_00551080(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    ADD ESP,0x10                        ; 005656e0
    MOV ESP,EBP                         ; 005656e3
    POP EBP                             ; 005656e5
    POP EDI                             ; 005656e6
    POP ESI                             ; 005656e7
    POP EBX                             ; 005656e8
    RET                                 ; 005656e9

