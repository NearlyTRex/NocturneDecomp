; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00469550(CDoc *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x400]:1  local_400
; undefined        Stack[-0x3e8]:1  local_3e8
; undefined4       Stack[-0x28]:4  local_28
;
; XREF[1]:
;   core_doc.cpp_CDoc_process_FUN_004693e0 at 0046948a
;
; Referenced Globals:
;   undefined4 s_DebugActionPending_005d9bf3+1
;   TerminatedCString s_grabbedBy_s_005d9c07
;   TerminatedCString s_pushedObject_s_005d9c15
;   TerminatedCString s_ladder_005d9c26
;   TerminatedCString s_pickup_005d9c2e
;   TerminatedCString s_hurt_005d9c36
;   TerminatedCString s_door_005d9c3c
;   TerminatedCString s_door_005d9c42
;   TerminatedCString s_sitting_005d9c48
;   TerminatedCString s_stashinventory_005d9c51
;   TerminatedCString s_placeobject_005d9c61
;   TerminatedCString s_putdownobject_005d9c6e
;   TerminatedCString s_toss_005d9c7d
;   TerminatedCString s_attackmelee_005d9c83
;   TerminatedCString s_leverToPull_s_005d9c90
;   ... and 53 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_isOfClass_FUN_0040c550
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_00433d50
;   core_charactr.cpp_FUN_00434790
;   ... and 41 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469550
        ;   Label: core_doc.cpp_FUN_00469550
    PUSH ESI                            ; 00469551
    PUSH EDI                            ; 00469552
    PUSH EBP                            ; 00469553
    MOV EBP,ESP                         ; 00469554
    SUB ESP,0x4d4                       ; 00469556
    AND ESP,0xfffffff8                  ; 0046955c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046955f
    PUSH 0x5d9bf4                       ; 00469562 | s_DebugActionPending_005d9bf3+1
    MOV EDX,dword ptr [0x0061b4d0]      ; 00469567 | DAT_0061b4d0
    PUSH EDX                            ; 0046956d
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0046956e
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00469573
    MOV ECX,dword ptr [EBX + 0x2628]    ; 00469576
    MOV dword ptr [ESP + 0x4c0],EAX     ; 0046957c
    TEST ECX,ECX                        ; 00469583
    JZ 0x0046972e                       ; 00469585
        ;   XREF to: 0046972e (CONDITIONAL_JUMP)  ; LAB_0046972e
    FLD float ptr [EBX + 0x20084]       ; 0046958b
    FCOMP float ptr [0x005d9d70]        ; 00469591 | DAT_005d9d70
    FNSTSW AX                           ; 00469597
    SAHF                                ; 00469599
    JNC 0x0046972e                      ; 0046959a
        ;   XREF to: 0046972e (CONDITIONAL_JUMP)  ; LAB_0046972e
    PUSH ECX                            ; 004695a0
    MOV EDX,dword ptr [ECX + 0x154]     ; 004695a1
    LEA ESI,[ESP + 0x104]               ; 004695a7
    LEA EDI,[ESP + 0xec]                ; 004695ae
    CALL dword ptr [EDX + 0x1c]         ; 004695b5
    MOV ECX,0x6                         ; 004695b8
    LEA ESI,[ESP + 0x104]               ; 004695bd
    ADD ESP,0x4                         ; 004695c4
    MOVSD.REP ES:EDI,ESI                ; 004695c7
    LEA EDX,[EBX + 0x20078]             ; 004695c9
    LEA ECX,[ESP + 0xe8]                ; 004695cf
    MOV ESI,EDX                         ; 004695d6
    CMP EDX,ECX                         ; 004695d8
    JZ 0x004695f9                       ; 004695da
        ;   XREF to: 004695f9 (CONDITIONAL_JUMP)  ; LAB_004695f9
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004695dc
    MOV dword ptr [EDX],EAX             ; 004695e3
    MOV EAX,dword ptr [ESP + 0xec]      ; 004695e5
    MOV dword ptr [EDX + 0x4],EAX       ; 004695ec
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004695ef
    MOV dword ptr [EDX + 0x8],EAX       ; 004695f6
    LEA EDX,[ECX + 0xc]                 ; 004695f9
        ;   Label: LAB_004695f9
    LEA EAX,[ESI + 0xc]                 ; 004695fc
    CMP EAX,EDX                         ; 004695ff
    JZ 0x00469613                       ; 00469601
        ;   XREF to: 00469613 (CONDITIONAL_JUMP)  ; LAB_00469613
    MOV ECX,dword ptr [EDX]             ; 00469603
    MOV dword ptr [EAX],ECX             ; 00469605
    MOV ECX,dword ptr [EDX + 0x4]       ; 00469607
    MOV dword ptr [EAX + 0x4],ECX       ; 0046960a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046960d
    MOV dword ptr [EAX + 0x8],ECX       ; 00469610
    LEA EDX,[EBX + 0x20078]             ; 00469613
        ;   Label: LAB_00469613
    LEA EDI,[ESP + 0x364]               ; 00469619
    LEA ESI,[ESP + 0x40c]               ; 00469620
    FLD float ptr [EDX]                 ; 00469627
    FLD float ptr [EDX + 0x4]           ; 00469629
    LEA EAX,[EBX + 0x20084]             ; 0046962c
    FLD float ptr [EDX + 0x8]           ; 00469632
    FXCH ST2                            ; 00469635
    FADD float ptr [EAX]                ; 00469637
    FXCH                                ; 00469639
    FADD float ptr [EAX + 0x4]          ; 0046963b
    FXCH ST2                            ; 0046963e
    FADD float ptr [EAX + 0x8]          ; 00469640
    FXCH                                ; 00469643
    FSTP float ptr [ESP + 0x40c]        ; 00469645
    FXCH                                ; 0046964c
    FSTP float ptr [ESP + 0x410]        ; 0046964e
    FSTP float ptr [ESP + 0x414]        ; 00469655
    MOVSD ES:EDI,ESI                    ; 0046965c
    MOVSD ES:EDI,ESI                    ; 0046965d
    MOVSD ES:EDI,ESI                    ; 0046965e
    FLD float ptr [0x005d9d74]          ; 0046965f | DAT_005d9d74
    FLD float ptr [ESP + 0x364]         ; 00469665
    FMUL ST1                            ; 0046966c
    FLD float ptr [ESP + 0x368]         ; 0046966e
    FMUL ST2                            ; 00469675
    FLD float ptr [ESP + 0x36c]         ; 00469677
    FMULP ST3                           ; 0046967e
    LEA EAX,[ESP + 0x1cc]               ; 00469680
    LEA EDI,[ESP + 0x1cc]               ; 00469687
    LEA ESI,[ESP + 0x3c4]               ; 0046968e
    FXCH                                ; 00469695
    FSTP float ptr [ESP + 0x3c4]        ; 00469697
    FSTP float ptr [ESP + 0x3c8]        ; 0046969e
    FSTP float ptr [ESP + 0x3cc]        ; 004696a5
    MOVSD ES:EDI,ESI                    ; 004696ac
    MOVSD ES:EDI,ESI                    ; 004696ad
    MOVSD ES:EDI,ESI                    ; 004696ae
    PUSH EAX                            ; 004696af
    MOV ESI,dword ptr [EBX + 0x2628]    ; 004696b0
    PUSH ESI                            ; 004696b6
    LEA ESI,[ESP + 0x180]               ; 004696b7
    LEA EDI,[ESP + 0x150]               ; 004696be
    CALL core_actor.cpp_FUN_00408b40    ; 004696c5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004696ca
    LEA EAX,[ESP + 0x148]               ; 004696cd
    LEA ESI,[ESP + 0x178]               ; 004696d4
    PUSH EAX                            ; 004696db
    MOVSD ES:EDI,ESI                    ; 004696dc
    MOVSD ES:EDI,ESI                    ; 004696dd
    MOVSD ES:EDI,ESI                    ; 004696de
    PUSH EBX                            ; 004696df
    LEA ESI,[ESP + 0x1c8]               ; 004696e0
    LEA EDI,[ESP + 0x324]               ; 004696e7
    CALL core_actor.cpp_FUN_00408bb0    ; 004696ee
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x1c8]               ; 004696f3
    LEA EAX,[ESP + 0x324]               ; 004696fa
    ADD ESP,0x8                         ; 00469701
    LEA EDX,[EBX + 0x2006c]             ; 00469704
    MOVSD ES:EDI,ESI                    ; 0046970a
    MOVSD ES:EDI,ESI                    ; 0046970b
    MOVSD ES:EDI,ESI                    ; 0046970c
    CMP EDX,EAX                         ; 0046970d
    JZ 0x0046972e                       ; 0046970f
        ;   XREF to: 0046972e (CONDITIONAL_JUMP)  ; LAB_0046972e
    MOV EAX,dword ptr [ESP + 0x31c]     ; 00469711
    MOV dword ptr [EDX],EAX             ; 00469718
    MOV EAX,dword ptr [ESP + 0x320]     ; 0046971a
    MOV dword ptr [EDX + 0x4],EAX       ; 00469721
    MOV EAX,dword ptr [ESP + 0x324]     ; 00469724
    MOV dword ptr [EDX + 0x8],EAX       ; 0046972b
    MOV EDI,dword ptr [0x0061d95c]      ; 0046972e | g_CGamePtr
        ;   Label: LAB_0046972e
    PUSH dword ptr [EBP + 0x18]         ; 00469734
    PUSH EDI                            ; 00469737 | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004d7f50 ; 00469738
        ;   XREF to: 004d7f50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004d7f50(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0046973d
    PUSH dword ptr [EBP + 0x18]         ; 00469740
    PUSH EBX                            ; 00469743
    CALL core_charactr.cpp_FUN_00434790 ; 00469744
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
    ADD ESP,0x8                         ; 00469749
    FLD float ptr [EBX + 0xc1d0]        ; 0046974c
    FSUB float ptr [EBP + 0x18]         ; 00469752
    FST float ptr [EBX + 0xc1d0]        ; 00469755
    FLDZ                                ; 0046975b
    FCOMPP                              ; 0046975d
    FNSTSW AX                           ; 0046975f
    SAHF                                ; 00469761
    JBE 0x0046976e                      ; 00469762
        ;   XREF to: 0046976e (CONDITIONAL_JUMP)  ; LAB_0046976e
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 00469764
    LEA EAX,[EBX + 0x249c]              ; 0046976e
        ;   Label: LAB_0046976e
    LEA ESI,[ESP + 0x154]               ; 00469774
    LEA EDI,[ESP + 0x2a4]               ; 0046977b
    MOV dword ptr [EAX + 0x8],0x0       ; 00469782
    PUSH EBX                            ; 00469789
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046978a
    MOV dword ptr [EAX + 0x4],EDX       ; 0046978d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00469790
    MOV dword ptr [EAX],EDX             ; 00469793
    CALL core_doc.cpp_FUN_0046c9e0      ; 00469795
        ;   XREF to: 0046c9e0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046c9e0()
    ADD ESP,0x4                         ; 0046979a
    LEA EAX,[ESP + 0x2a4]               ; 0046979d
    LEA ESI,[ESP + 0x154]               ; 004697a4
    PUSH EAX                            ; 004697ab
    MOVSD ES:EDI,ESI                    ; 004697ac
    MOVSD ES:EDI,ESI                    ; 004697ad
    MOVSD ES:EDI,ESI                    ; 004697ae
    PUSH EBX                            ; 004697af
    LEA ESI,[ESP + 0x288]               ; 004697b0
    LEA EDI,[ESP + 0x144]               ; 004697b7
    CALL core_actor.cpp_FUN_00408b40    ; 004697be
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004697c3
    LEA ESI,[ESP + 0x280]               ; 004697c6
    PUSH dword ptr [EBP + 0x18]         ; 004697cd
    PUSH EBX                            ; 004697d0
    MOVSD ES:EDI,ESI                    ; 004697d1
    MOVSD ES:EDI,ESI                    ; 004697d2
    MOVSD ES:EDI,ESI                    ; 004697d3
    CALL core_doc.cpp_FUN_0046bde0      ; 004697d4
        ;   XREF to: 0046bde0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046bde0()
    MOV EAX,0x1                         ; 004697d9
    ADD ESP,0x8                         ; 004697de
    MOV dword ptr [ESP + 0x4b8],EAX     ; 004697e1
    MOV dword ptr [ESP + 0x4b0],EAX     ; 004697e8
    MOV dword ptr [ESP + 0x4b4],EAX     ; 004697ef
    MOV dword ptr [ESP + 0x4c8],EAX     ; 004697f6
    MOV dword ptr [ESP + 0x4c4],EAX     ; 004697fd
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 00469804
    TEST EAX,EAX                        ; 0046980a
    JZ 0x00469852                       ; 0046980c
        ;   XREF to: 00469852 (CONDITIONAL_JUMP)  ; LAB_00469852
    XOR EDX,EDX                         ; 0046980e
    MOV dword ptr [ESP + 0x4b8],EDX     ; 00469810
    MOV dword ptr [ESP + 0x4b4],EDX     ; 00469817
    MOV dword ptr [ESP + 0x4c8],EDX     ; 0046981e
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00469825
    MOV dword ptr [ESP + 0x4b0],EDX     ; 0046982c
    CMP dword ptr [ESP + 0x4c0],0x0     ; 00469833
    JZ 0x00469852                       ; 0046983b
        ;   XREF to: 00469852 (CONDITIONAL_JUMP)  ; LAB_00469852
    PUSH EAX                            ; 0046983d
    PUSH 0x5d9c07                       ; 0046983e | = "grabbedBy=%s\n"
    MOV ESI,dword ptr [0x00611100]      ; 00469843 | g_CConsolePtr
    PUSH ESI                            ; 00469849 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0046984a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0046984f
    CMP dword ptr [EBX + 0x1ff7c],0x0   ; 00469852
        ;   Label: LAB_00469852
    JZ 0x0046989f                       ; 00469859
        ;   XREF to: 0046989f (CONDITIONAL_JUMP)  ; LAB_0046989f
    XOR EAX,EAX                         ; 0046985b
    MOV EDI,dword ptr [ESP + 0x4c0]     ; 0046985d
    MOV dword ptr [ESP + 0x4c8],EAX     ; 00469864
    MOV dword ptr [ESP + 0x4c4],EAX     ; 0046986b
    MOV dword ptr [ESP + 0x4b8],EAX     ; 00469872
    MOV dword ptr [ESP + 0x4b4],EAX     ; 00469879
    TEST EDI,EDI                        ; 00469880
    JZ 0x0046989f                       ; 00469882
        ;   XREF to: 0046989f (CONDITIONAL_JUMP)  ; LAB_0046989f
    MOV EAX,dword ptr [EBX + 0x1ff7c]   ; 00469884
    PUSH EAX                            ; 0046988a
    PUSH 0x5d9c15                       ; 0046988b | = "pushedObject=%s\n"
    MOV EDX,dword ptr [0x00611100]      ; 00469890 | g_CConsolePtr
    PUSH EDX                            ; 00469896 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469897
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0046989c
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 0046989f
        ;   Label: LAB_0046989f
    JZ 0x0046a540                       ; 004698a6
        ;   XREF to: 0046a540 (CONDITIONAL_JUMP)  ; LAB_0046a540
    XOR EDI,EDI                         ; 004698ac
        ;   Label: LAB_004698ac
    MOV dword ptr [ESP + 0x4b0],EDI     ; 004698ae
    MOV dword ptr [ESP + 0x4b4],EDI     ; 004698b5
    MOV dword ptr [ESP + 0x4c8],EDI     ; 004698bc
    MOV dword ptr [ESP + 0x4c4],EDI     ; 004698c3
    MOV dword ptr [ESP + 0x4b8],EDI     ; 004698ca
    CMP dword ptr [ESP + 0x4c0],0x0     ; 004698d1
    JZ 0x004698ee                       ; 004698d9
        ;   XREF to: 004698ee (CONDITIONAL_JUMP)  ; LAB_004698ee
    PUSH 0x5d9c26                       ; 004698db | = "ladder\n"
    MOV EAX,[0x00611100]                ; 004698e0 | g_CConsolePtr
    PUSH EAX                            ; 004698e5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004698e6
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004698eb
    CMP dword ptr [EBX + 0x1ff78],0x0   ; 004698ee
        ;   Label: LAB_004698ee
    JZ 0x0046a552                       ; 004698f5
        ;   XREF to: 0046a552 (CONDITIONAL_JUMP)  ; LAB_0046a552
    XOR ESI,ESI                         ; 004698fb
        ;   Label: LAB_004698fb
    MOV EDX,dword ptr [ESP + 0x4c0]     ; 004698fd
    MOV dword ptr [ESP + 0x4c8],ESI     ; 00469904
    MOV dword ptr [ESP + 0x4c4],ESI     ; 0046990b
    MOV dword ptr [ESP + 0x4b8],ESI     ; 00469912
    TEST EDX,EDX                        ; 00469919
    JZ 0x00469931                       ; 0046991b
        ;   XREF to: 00469931 (CONDITIONAL_JUMP)  ; LAB_00469931
    PUSH 0x5d9c2e                       ; 0046991d | = "pickup\n"
    MOV ECX,dword ptr [0x00611100]      ; 00469922 | g_CConsolePtr
    PUSH ECX                            ; 00469928 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469929
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0046992e
    PUSH 0x82                           ; 00469931
        ;   Label: LAB_00469931
    LEA ESI,[EBX + 0x158]               ; 00469936
    PUSH ESI                            ; 0046993c
    CALL core_motion.cpp_FUN_00524a40   ; 0046993d
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 00469942
    FLD float ptr [ESP + 0x4d8]         ; 00469949
    FLDZ                                ; 00469950
    ADD ESP,0x8                         ; 00469952
    FCOMPP                              ; 00469955
    FNSTSW AX                           ; 00469957
    SAHF                                ; 00469959
    JNC 0x0046a564                      ; 0046995a
        ;   XREF to: 0046a564 (CONDITIONAL_JUMP)  ; LAB_0046a564
    XOR ESI,ESI                         ; 00469960
        ;   Label: LAB_00469960
    MOV ECX,dword ptr [ESP + 0x4c0]     ; 00469962
    MOV dword ptr [ESP + 0x4b4],ESI     ; 00469969
    MOV dword ptr [ESP + 0x4c8],ESI     ; 00469970
    MOV dword ptr [ESP + 0x4c4],ESI     ; 00469977
    MOV dword ptr [ESP + 0x4b8],ESI     ; 0046997e
    TEST ECX,ECX                        ; 00469985
    JZ 0x0046999d                       ; 00469987
        ;   XREF to: 0046999d (CONDITIONAL_JUMP)  ; LAB_0046999d
    PUSH 0x5d9c36                       ; 00469989 | = "hurt\n"
    MOV ESI,dword ptr [0x00611100]      ; 0046998e | g_CConsolePtr
    PUSH ESI                            ; 00469994 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469995
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0046999a
    PUSH 0x22                           ; 0046999d
        ;   Label: LAB_0046999d
    LEA EAX,[EBX + 0x158]               ; 0046999f
    PUSH EAX                            ; 004699a5
    CALL core_motion.cpp_FUN_00524a40   ; 004699a6
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 004699ab
    FLD float ptr [ESP + 0x4d8]         ; 004699b2
    FLDZ                                ; 004699b9
    ADD ESP,0x8                         ; 004699bb
    FCOMPP                              ; 004699be
    FNSTSW AX                           ; 004699c0
    SAHF                                ; 004699c2
    JNC 0x0046a617                      ; 004699c3
        ;   XREF to: 0046a617 (CONDITIONAL_JUMP)  ; LAB_0046a617
    XOR EDX,EDX                         ; 004699c9
        ;   Label: LAB_004699c9
    MOV EDI,dword ptr [ESP + 0x4c0]     ; 004699cb
    MOV dword ptr [ESP + 0x4c4],EDX     ; 004699d2
    MOV dword ptr [ESP + 0x4b8],EDX     ; 004699d9
    MOV dword ptr [ESP + 0x4c8],EDX     ; 004699e0
    TEST EDI,EDI                        ; 004699e7
    JZ 0x004699fe                       ; 004699e9
        ;   XREF to: 004699fe (CONDITIONAL_JUMP)  ; LAB_004699fe
    PUSH 0x5d9c3c                       ; 004699eb | = "door\n"
    MOV EAX,[0x00611100]                ; 004699f0 | g_CConsolePtr
    PUSH EAX                            ; 004699f5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004699f6
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 004699fb
    PUSH 0x23                           ; 004699fe
        ;   Label: LAB_004699fe
    LEA EAX,[EBX + 0x158]               ; 00469a00
    PUSH EAX                            ; 00469a06
    CALL core_motion.cpp_FUN_00524a40   ; 00469a07
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 00469a0c
    FLD float ptr [ESP + 0x4d8]         ; 00469a13
    FLDZ                                ; 00469a1a
    ADD ESP,0x8                         ; 00469a1c
    FCOMPP                              ; 00469a1f
    FNSTSW AX                           ; 00469a21
    SAHF                                ; 00469a23
    JNC 0x0046a636                      ; 00469a24
        ;   XREF to: 0046a636 (CONDITIONAL_JUMP)  ; LAB_0046a636
    XOR ESI,ESI                         ; 00469a2a
        ;   Label: LAB_00469a2a
    MOV EDX,dword ptr [ESP + 0x4c0]     ; 00469a2c
    MOV dword ptr [ESP + 0x4c4],ESI     ; 00469a33
    MOV dword ptr [ESP + 0x4b8],ESI     ; 00469a3a
    MOV dword ptr [ESP + 0x4c8],ESI     ; 00469a41
    TEST EDX,EDX                        ; 00469a48
    JZ 0x00469a60                       ; 00469a4a
        ;   XREF to: 00469a60 (CONDITIONAL_JUMP)  ; LAB_00469a60
    PUSH 0x5d9c42                       ; 00469a4c | = "door\n"
    MOV ECX,dword ptr [0x00611100]      ; 00469a51 | g_CConsolePtr
    PUSH ECX                            ; 00469a57 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469a58
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00469a5d
    PUSH 0x33                           ; 00469a60
        ;   Label: LAB_00469a60
    LEA EAX,[EBX + 0x158]               ; 00469a62
    PUSH EAX                            ; 00469a68
    CALL core_motion.cpp_FUN_00524a40   ; 00469a69
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 00469a6e
    FLD float ptr [ESP + 0x4d8]         ; 00469a75
    FLDZ                                ; 00469a7c
    ADD ESP,0x8                         ; 00469a7e
    FCOMPP                              ; 00469a81
    FNSTSW AX                           ; 00469a83
    SAHF                                ; 00469a85
    JNC 0x00469acb                      ; 00469a86
        ;   XREF to: 00469acb (CONDITIONAL_JUMP)  ; LAB_00469acb
    XOR ESI,ESI                         ; 00469a88
    MOV dword ptr [ESP + 0x4b4],ESI     ; 00469a8a
    MOV dword ptr [ESP + 0x4c8],ESI     ; 00469a91
    MOV dword ptr [ESP + 0x4b0],ESI     ; 00469a98
    MOV dword ptr [ESP + 0x4c4],ESI     ; 00469a9f
    MOV dword ptr [ESP + 0x4b8],ESI     ; 00469aa6
    CMP dword ptr [ESP + 0x4c0],0x0     ; 00469aad
    JZ 0x00469acb                       ; 00469ab5
        ;   XREF to: 00469acb (CONDITIONAL_JUMP)  ; LAB_00469acb
    PUSH 0x5d9c48                       ; 00469ab7 | = "sitting\n"
    MOV EDI,dword ptr [0x00611100]      ; 00469abc | g_CConsolePtr
    PUSH EDI                            ; 00469ac2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469ac3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00469ac8
    CMP dword ptr [EBX + 0x1ff5c],0x1   ; 00469acb
        ;   Label: LAB_00469acb
    JNZ 0x00469b03                      ; 00469ad2
        ;   XREF to: 00469b03 (CONDITIONAL_JUMP)  ; LAB_00469b03
    XOR EDX,EDX                         ; 00469ad4
    MOV ESI,dword ptr [ESP + 0x4c0]     ; 00469ad6
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00469add
    MOV dword ptr [ESP + 0x4c8],EDX     ; 00469ae4
    TEST ESI,ESI                        ; 00469aeb
    JZ 0x00469b03                       ; 00469aed
        ;   XREF to: 00469b03 (CONDITIONAL_JUMP)  ; LAB_00469b03
    PUSH 0x5d9c51                       ; 00469aef | = "stashinventory\n"
    MOV EDI,dword ptr [0x00611100]      ; 00469af4 | g_CConsolePtr
    PUSH EDI                            ; 00469afa | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469afb
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00469b00
    CMP dword ptr [EBX + 0x1ff5c],0x2   ; 00469b03
        ;   Label: LAB_00469b03
    JNZ 0x00469b3b                      ; 00469b0a
        ;   XREF to: 00469b3b (CONDITIONAL_JUMP)  ; LAB_00469b3b
    XOR EDX,EDX                         ; 00469b0c
    MOV ESI,dword ptr [ESP + 0x4c0]     ; 00469b0e
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00469b15
    MOV dword ptr [ESP + 0x4c8],EDX     ; 00469b1c
    TEST ESI,ESI                        ; 00469b23
    JZ 0x00469b3b                       ; 00469b25
        ;   XREF to: 00469b3b (CONDITIONAL_JUMP)  ; LAB_00469b3b
    PUSH 0x5d9c61                       ; 00469b27 | = "placeobject\n"
    MOV EDI,dword ptr [0x00611100]      ; 00469b2c | g_CConsolePtr
    PUSH EDI                            ; 00469b32 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469b33
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00469b38
    CMP dword ptr [EBX + 0x1ff5c],0x6   ; 00469b3b
        ;   Label: LAB_00469b3b
    JNZ 0x00469b73                      ; 00469b42
        ;   XREF to: 00469b73 (CONDITIONAL_JUMP)  ; LAB_00469b73
    XOR EDX,EDX                         ; 00469b44
    MOV ESI,dword ptr [ESP + 0x4c0]     ; 00469b46
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00469b4d
    MOV dword ptr [ESP + 0x4c8],EDX     ; 00469b54
    TEST ESI,ESI                        ; 00469b5b
    JZ 0x00469b73                       ; 00469b5d
        ;   XREF to: 00469b73 (CONDITIONAL_JUMP)  ; LAB_00469b73
    PUSH 0x5d9c6e                       ; 00469b5f | = "putdownobject\n"
    MOV EDI,dword ptr [0x00611100]      ; 00469b64 | g_CConsolePtr
    PUSH EDI                            ; 00469b6a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469b6b
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00469b70
    CMP dword ptr [EBX + 0x1ff5c],0x3   ; 00469b73
        ;   Label: LAB_00469b73
    JNZ 0x00469bab                      ; 00469b7a
        ;   XREF to: 00469bab (CONDITIONAL_JUMP)  ; LAB_00469bab
    XOR EDX,EDX                         ; 00469b7c
    MOV ESI,dword ptr [ESP + 0x4c0]     ; 00469b7e
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00469b85
    MOV dword ptr [ESP + 0x4c8],EDX     ; 00469b8c
    TEST ESI,ESI                        ; 00469b93
    JZ 0x00469bab                       ; 00469b95
        ;   XREF to: 00469bab (CONDITIONAL_JUMP)  ; LAB_00469bab
    PUSH 0x5d9c7d                       ; 00469b97 | = "toss\n"
    MOV EDI,dword ptr [0x00611100]      ; 00469b9c | g_CConsolePtr
    PUSH EDI                            ; 00469ba2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469ba3
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00469ba8
    CMP dword ptr [EBX + 0x1ff5c],0x7   ; 00469bab
        ;   Label: LAB_00469bab
    JNZ 0x00469be3                      ; 00469bb2
        ;   XREF to: 00469be3 (CONDITIONAL_JUMP)  ; LAB_00469be3
    XOR EDX,EDX                         ; 00469bb4
    MOV ESI,dword ptr [ESP + 0x4c0]     ; 00469bb6
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00469bbd
    MOV dword ptr [ESP + 0x4c8],EDX     ; 00469bc4
    TEST ESI,ESI                        ; 00469bcb
    JZ 0x00469be3                       ; 00469bcd
        ;   XREF to: 00469be3 (CONDITIONAL_JUMP)  ; LAB_00469be3
    PUSH 0x5d9c83                       ; 00469bcf | = "attackmelee\n"
    MOV EDI,dword ptr [0x00611100]      ; 00469bd4 | g_CConsolePtr
    PUSH EDI                            ; 00469bda | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469bdb
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00469be0
    CMP dword ptr [EBX + 0x1ff80],0x0   ; 00469be3
        ;   Label: LAB_00469be3
    JZ 0x0046a655                       ; 00469bea
        ;   XREF to: 0046a655 (CONDITIONAL_JUMP)  ; LAB_0046a655
    XOR EDX,EDX                         ; 00469bf0
        ;   Label: LAB_00469bf0
    MOV EAX,dword ptr [ESP + 0x4c0]     ; 00469bf2
    MOV dword ptr [ESP + 0x4c8],EDX     ; 00469bf9
    MOV dword ptr [ESP + 0x4c4],EDX     ; 00469c00
    MOV dword ptr [ESP + 0x4b8],EDX     ; 00469c07
    MOV dword ptr [ESP + 0x4b4],EDX     ; 00469c0e
    TEST EAX,EAX                        ; 00469c15
    JZ 0x00469c34                       ; 00469c17
        ;   XREF to: 00469c34 (CONDITIONAL_JUMP)  ; LAB_00469c34
    MOV EDX,dword ptr [EBX + 0x1ff80]   ; 00469c19
    PUSH EDX                            ; 00469c1f
    PUSH 0x5d9c90                       ; 00469c20 | = "leverToPull=%s\n"
    MOV ECX,dword ptr [0x00611100]      ; 00469c25 | g_CConsolePtr
    PUSH ECX                            ; 00469c2b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00469c2c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00469c31
    CMP dword ptr [EBX + 0x26fc],0x0    ; 00469c34
        ;   Label: LAB_00469c34
    JNZ 0x00469c6a                      ; 00469c3b
        ;   XREF to: 00469c6a (CONDITIONAL_JUMP)  ; LAB_00469c6a
    CMP dword ptr [EBX + 0xdc],0x0      ; 00469c3d
    JZ 0x00469c51                       ; 00469c44
        ;   XREF to: 00469c51 (CONDITIONAL_JUMP)  ; LAB_00469c51
    MOV dword ptr [ESP + 0x4b0],0x1     ; 00469c46
    FLD float ptr [EBX + 0x24]          ; 00469c51
        ;   Label: LAB_00469c51
    FCOMP float ptr [EBX + 0x2504]      ; 00469c54
    FNSTSW AX                           ; 00469c5a
    SAHF                                ; 00469c5c
    JZ 0x00469c6a                       ; 00469c5d
        ;   XREF to: 00469c6a (CONDITIONAL_JUMP)  ; LAB_00469c6a
    MOV dword ptr [ESP + 0x4b0],0x1     ; 00469c5f
    PUSH dword ptr [EBP + 0x18]         ; 00469c6a
        ;   Label: LAB_00469c6a
    FLD float ptr [EBX + 0x24a4]        ; 00469c6d
    PUSH EBX                            ; 00469c73
    FSTP float ptr [EBX + 0x2524]       ; 00469c74
    CALL core_charactr.cpp_FUN_00435320 ; 00469c7a
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV ECX,dword ptr [EBX + 0x1ff88]   ; 00469c7f
    ADD ESP,0x8                         ; 00469c85
    TEST ECX,ECX                        ; 00469c88
    JNZ 0x0046a686                      ; 00469c8a
        ;   XREF to: 0046a686 (CONDITIONAL_JUMP)  ; LAB_0046a686
    FLD double ptr [0x005d9d7c]         ; 00469c90 | DAT_005d9d7c
    FLD float ptr [EBP + 0x18]          ; 00469c96
    FMUL ST1                            ; 00469c99
    FMULP                               ; 00469c9b
    FSUBR float ptr [EBX + 0x20014]     ; 00469c9d
    FST float ptr [EBX + 0x20014]       ; 00469ca3
    FLDZ                                ; 00469ca9
    FCOMPP                              ; 00469cab
    FNSTSW AX                           ; 00469cad
    SAHF                                ; 00469caf
    JBE 0x00469cb8                      ; 00469cb0
        ;   XREF to: 00469cb8 (CONDITIONAL_JUMP)  ; LAB_00469cb8
    MOV dword ptr [EBX + 0x20014],ECX   ; 00469cb2
    MOV ESI,0x1                         ; 00469cb8
        ;   Label: LAB_00469cb8
    MOV EDI,dword ptr [EBX + 0x1ff84]   ; 00469cbd
    MOV dword ptr [ESP + 0x47c],ESI     ; 00469cc3
    TEST EDI,EDI                        ; 00469cca
    JZ 0x0046a735                       ; 00469ccc
        ;   XREF to: 0046a735 (CONDITIONAL_JUMP)  ; LAB_0046a735
    PUSH 0x2f                           ; 00469cd2
    LEA EAX,[EBX + 0x158]               ; 00469cd4
    PUSH EAX                            ; 00469cda
    CALL core_motion.cpp_FUN_00524a40   ; 00469cdb
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 00469ce0
    FLD float ptr [ESP + 0x4d8]         ; 00469ce7
    FLDZ                                ; 00469cee
    ADD ESP,0x8                         ; 00469cf0
    FCOMPP                              ; 00469cf3
    FNSTSW AX                           ; 00469cf5
    SAHF                                ; 00469cf7
    JC 0x0046a6b7                       ; 00469cf8
        ;   XREF to: 0046a6b7 (CONDITIONAL_JUMP)  ; LAB_0046a6b7
    MOV dword ptr [EBX + 0x1ff84],0x0   ; 00469cfe
    FLD float ptr [EBX + 0x200bc]       ; 00469d08
        ;   Label: LAB_00469d08
    FLDZ                                ; 00469d0e
    FCOMPP                              ; 00469d10
    FNSTSW AX                           ; 00469d12
    SAHF                                ; 00469d14
    JNC 0x00469e25                      ; 00469d15
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    FLD float ptr [EBP + 0x18]          ; 00469d1b
    FCOMP float ptr [EBX + 0x200bc]     ; 00469d1e
    FNSTSW AX                           ; 00469d24
    SAHF                                ; 00469d26
    JNC 0x0046a71d                      ; 00469d27
        ;   XREF to: 0046a71d (CONDITIONAL_JUMP)  ; LAB_0046a71d
    FLD float ptr [EBP + 0x18]          ; 00469d2d
    FLD ST0                             ; 00469d30
    FDIV float ptr [EBX + 0x200bc]      ; 00469d32
    FLD float ptr [EBX + 0x200bc]       ; 00469d38
    FSUBRP ST2,ST0                      ; 00469d3e
    FSTP float ptr [ESP + 0x54]         ; 00469d40
    FSTP float ptr [EBX + 0x200bc]      ; 00469d44
    LEA EAX,[EBX + 0x200ac]             ; 00469d4a
        ;   Label: LAB_00469d4a
    FLD float ptr [EAX]                 ; 00469d50
    FMUL float ptr [ESP + 0x54]         ; 00469d52
    FLD float ptr [EAX + 0x4]           ; 00469d56
    FMUL float ptr [ESP + 0x54]         ; 00469d59
    FLD float ptr [EAX + 0x8]           ; 00469d5d
    FMUL float ptr [ESP + 0x54]         ; 00469d60
    FLD float ptr [ESP + 0x54]          ; 00469d64
    LEA EDI,[ESP + 0x25c]               ; 00469d68
    LEA ESI,[ESP + 0x358]               ; 00469d6f
    FLD1                                ; 00469d76
    LEA EDX,[EBX + 0x20]                ; 00469d78
    FSUBRP                              ; 00469d7b
    FXCH ST3                            ; 00469d7d
    FSTP float ptr [ESP + 0x358]        ; 00469d7f
    FXCH                                ; 00469d86
    FSTP float ptr [ESP + 0x35c]        ; 00469d88
    FSTP float ptr [ESP + 0x360]        ; 00469d8f
    MOVSD ES:EDI,ESI                    ; 00469d96
    MOVSD ES:EDI,ESI                    ; 00469d97
    MOVSD ES:EDI,ESI                    ; 00469d98
    FSTP float ptr [ESP + 0x48c]        ; 00469d99
    FLD float ptr [EDX]                 ; 00469da0
    FLD float ptr [EDX + 0x4]           ; 00469da2
    FLD float ptr [EDX + 0x8]           ; 00469da5
    FXCH ST2                            ; 00469da8
    FADD float ptr [ESP + 0x25c]        ; 00469daa
    FXCH                                ; 00469db1
    FADD float ptr [ESP + 0x260]        ; 00469db3
    FXCH ST2                            ; 00469dba
    FADD float ptr [ESP + 0x264]        ; 00469dbc
    FXCH                                ; 00469dc3
    FSTP float ptr [EDX]                ; 00469dc5
    FXCH                                ; 00469dc7
    FSTP float ptr [EDX + 0x4]          ; 00469dc9
    FSTP float ptr [EDX + 0x8]          ; 00469dcc
    FLD float ptr [EAX]                 ; 00469dcf
    FMUL float ptr [ESP + 0x48c]        ; 00469dd1
    FLD float ptr [EAX + 0x4]           ; 00469dd8
    FMUL float ptr [ESP + 0x48c]        ; 00469ddb
    FLD float ptr [EAX + 0x8]           ; 00469de2
    FMUL float ptr [ESP + 0x48c]        ; 00469de5
    FXCH ST2                            ; 00469dec
    FSTP float ptr [EAX]                ; 00469dee
    FSTP float ptr [EAX + 0x4]          ; 00469df0
    FSTP float ptr [EAX + 0x8]          ; 00469df3
    FLD float ptr [EBX + 0x200b8]       ; 00469df6
    FSUB float ptr [EBX + 0x34]         ; 00469dfc
    SUB ESP,0x4                         ; 00469dff
    FSTP float ptr [ESP]                ; 00469e02
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00469e05
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 00469e0a
    FLD float ptr [ESP + 0x4d4]         ; 00469e11
    ADD ESP,0x4                         ; 00469e18
    FMUL float ptr [ESP + 0x54]         ; 00469e1b
    FSTP float ptr [EBX + 0x2508]       ; 00469e1f
    FLD float ptr [EBX + 0x200d0]       ; 00469e25
        ;   Label: LAB_00469e25
    FLDZ                                ; 00469e2b
    FCOMPP                              ; 00469e2d
    FNSTSW AX                           ; 00469e2f
    SAHF                                ; 00469e31
    JNC 0x00469f7c                      ; 00469e32
        ;   XREF to: 00469f7c (CONDITIONAL_JUMP)  ; LAB_00469f7c
    FLD float ptr [EBP + 0x18]          ; 00469e38
    FCOMP float ptr [EBX + 0x200d0]     ; 00469e3b
    FNSTSW AX                           ; 00469e41
    SAHF                                ; 00469e43
    JNC 0x0046b696                      ; 00469e44
        ;   XREF to: 0046b696 (CONDITIONAL_JUMP)  ; LAB_0046b696
    FLD float ptr [EBP + 0x18]          ; 00469e4a
    FLD ST0                             ; 00469e4d
    FDIV float ptr [EBX + 0x200d0]      ; 00469e4f
    FLD float ptr [EBX + 0x200d0]       ; 00469e55
    FSUBRP ST2,ST0                      ; 00469e5b
    FSTP float ptr [ESP + 0x48]         ; 00469e5d
    FSTP float ptr [EBX + 0x200d0]      ; 00469e61
    LEA EAX,[EBX + 0x200c0]             ; 00469e67
        ;   Label: LAB_00469e67
    FLD float ptr [EAX]                 ; 00469e6d
    FMUL float ptr [ESP + 0x48]         ; 00469e6f
    FLD float ptr [EAX + 0x4]           ; 00469e73
    FMUL float ptr [ESP + 0x48]         ; 00469e76
    FLD float ptr [EAX + 0x8]           ; 00469e7a
    FMUL float ptr [ESP + 0x48]         ; 00469e7d
    LEA EDI,[ESP + 0x3dc]               ; 00469e81
    LEA ESI,[ESP + 0x1fc]               ; 00469e88
    MOV dword ptr [ESP + 0x4d0],EAX     ; 00469e8f
    LEA EAX,[ESP + 0x3dc]               ; 00469e96
    FXCH ST2                            ; 00469e9d
    FSTP float ptr [ESP + 0x1fc]        ; 00469e9f
    FSTP float ptr [ESP + 0x200]        ; 00469ea6
    FSTP float ptr [ESP + 0x204]        ; 00469ead
    PUSH EAX                            ; 00469eb4
    MOVSD ES:EDI,ESI                    ; 00469eb5
    MOVSD ES:EDI,ESI                    ; 00469eb6
    MOVSD ES:EDI,ESI                    ; 00469eb7
    PUSH EBX                            ; 00469eb8
    LEA ESI,[ESP + 0x138]               ; 00469eb9
    LEA EDI,[ESP + 0x300]               ; 00469ec0
    CALL core_actor.cpp_FUN_00408b00    ; 00469ec7
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x138]               ; 00469ecc
    ADD ESP,0x8                         ; 00469ed3
    LEA EAX,[EBX + 0x249c]              ; 00469ed6
    FLD float ptr [ESP + 0x48]          ; 00469edc
    MOVSD ES:EDI,ESI                    ; 00469ee0
    MOVSD ES:EDI,ESI                    ; 00469ee1
    MOVSD ES:EDI,ESI                    ; 00469ee2
    FLD1                                ; 00469ee3
    FLD float ptr [EAX]                 ; 00469ee5
    FLD float ptr [EAX + 0x4]           ; 00469ee7
    FLD float ptr [EAX + 0x8]           ; 00469eea
    FXCH ST3                            ; 00469eed
    FSUBRP ST4,ST0                      ; 00469eef
    FXCH                                ; 00469ef1
    FADD float ptr [ESP + 0x2f8]        ; 00469ef3
    FXCH                                ; 00469efa
    FADD float ptr [ESP + 0x2fc]        ; 00469efc
    FXCH ST2                            ; 00469f03
    FADD float ptr [ESP + 0x300]        ; 00469f05
    FXCH                                ; 00469f0c
    FSTP float ptr [EAX]                ; 00469f0e
    FXCH                                ; 00469f10
    FSTP float ptr [EAX + 0x4]          ; 00469f12
    FSTP float ptr [EAX + 0x8]          ; 00469f15
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 00469f18
    FSTP float ptr [ESP + 0x498]        ; 00469f1f
    FLD float ptr [EAX]                 ; 00469f26
    FMUL float ptr [ESP + 0x498]        ; 00469f28
    FLD float ptr [EAX + 0x4]           ; 00469f2f
    FMUL float ptr [ESP + 0x498]        ; 00469f32
    FLD float ptr [EAX + 0x8]           ; 00469f39
    FMUL float ptr [ESP + 0x498]        ; 00469f3c
    FXCH ST2                            ; 00469f43
    FSTP float ptr [EAX]                ; 00469f45
    FSTP float ptr [EAX + 0x4]          ; 00469f47
    FSTP float ptr [EAX + 0x8]          ; 00469f4a
    FLD float ptr [EBX + 0x200cc]       ; 00469f4d
    FSUB float ptr [EBX + 0x34]         ; 00469f53
    SUB ESP,0x4                         ; 00469f56
    FSTP float ptr [ESP]                ; 00469f59
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00469f5c
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 00469f61
    FLD float ptr [ESP + 0x4d4]         ; 00469f68
    ADD ESP,0x4                         ; 00469f6f
    FMUL float ptr [ESP + 0x48]         ; 00469f72
    FSTP float ptr [EBX + 0x2508]       ; 00469f76
    LEA EDI,[EBX + 0x158]               ; 00469f7c
        ;   Label: LAB_00469f7c
    PUSH EDI                            ; 00469f82
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00469f83
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00469f88
    ADD ESP,0x4                         ; 00469f8b
    CMP EAX,0x1e                        ; 00469f8e
    JNZ 0x00469fd4                      ; 00469f91
        ;   XREF to: 00469fd4 (CONDITIONAL_JUMP)  ; LAB_00469fd4
    MOV EAX,[0x007c33e0]                ; 00469f93 | g_CAmmoBoxClassInfo.name_hash
    PUSH EAX                            ; 00469f98
    MOV EDX,dword ptr [EBX + 0x1ff78]   ; 00469f99
    PUSH EDX                            ; 00469f9f
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00469fa0
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 00469fa5
    ADD ESP,0x8                         ; 00469fa7
    TEST EAX,EAX                        ; 00469faa
    JZ 0x00469fd4                       ; 00469fac
        ;   XREF to: 00469fd4 (CONDITIONAL_JUMP)  ; LAB_00469fd4
    PUSH EDI                            ; 00469fae
    CALL core_motion.cpp_FUN_00525020   ; 00469faf
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 00469fb4
    FLD float ptr [ESP + 0x4d4]         ; 00469fbb
    ADD ESP,0x4                         ; 00469fc2
    SUB ESP,0x4                         ; 00469fc5
    FSTP float ptr [ESP]                ; 00469fc8
    PUSH ESI                            ; 00469fcb
    CALL core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0 ; 00469fcc
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e1a0(CAmmoBox * this_ptr, float open_pct)
    ADD ESP,0x8                         ; 00469fd1
    PUSH EBX                            ; 00469fd4
        ;   Label: LAB_00469fd4
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00469fd5
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00469fda
    PUSH dword ptr [EBP + 0x18]         ; 00469fdd
    PUSH EBX                            ; 00469fe0
    CALL core_doc.cpp_FUN_0046e730      ; 00469fe1
        ;   XREF to: 0046e730 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046e730()
    ADD ESP,0x8                         ; 00469fe6
    CMP dword ptr [ESP + 0x47c],0x0     ; 00469fe9
    JZ 0x0046a00b                       ; 00469ff1
        ;   XREF to: 0046a00b (CONDITIONAL_JUMP)  ; LAB_0046a00b
    LEA EAX,[EBX + 0x2004c]             ; 00469ff3
    MOV dword ptr [EAX + 0x8],0x0       ; 00469ff9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046a000
    MOV dword ptr [EAX + 0x4],EDX       ; 0046a003
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046a006
    MOV dword ptr [EAX],EDX             ; 0046a009
    CMP dword ptr [EBX + 0x1ff84],0x0   ; 0046a00b
        ;   Label: LAB_0046a00b
    JZ 0x0046b6ae                       ; 0046a012
        ;   XREF to: 0046b6ae (CONDITIONAL_JUMP)  ; LAB_0046b6ae
    LEA EAX,[EBX + 0x249c]              ; 0046a018
        ;   Label: LAB_0046a018
    PUSH EAX                            ; 0046a01e
    LEA ESI,[ESP + 0x1a0]               ; 0046a01f
    PUSH EBX                            ; 0046a026
    LEA EDI,[ESP + 0x2c4]               ; 0046a027
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a02e
    CALL core_actor.cpp_FUN_00408ac0    ; 0046a035
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x1a4]               ; 0046a03a
    ADD ESP,0x8                         ; 0046a041
    LEA EAX,[EBX + 0x20]                ; 0046a044
    MOVSD ES:EDI,ESI                    ; 0046a047
    MOVSD ES:EDI,ESI                    ; 0046a048
    MOVSD ES:EDI,ESI                    ; 0046a049
    FLD float ptr [EAX]                 ; 0046a04a
    FLD float ptr [EAX + 0x4]           ; 0046a04c
    FLD float ptr [EAX + 0x8]           ; 0046a04f
    FXCH ST2                            ; 0046a052
    FADD float ptr [ESP + 0x2bc]        ; 0046a054
    FXCH                                ; 0046a05b
    FADD float ptr [ESP + 0x2c0]        ; 0046a05d
    FXCH ST2                            ; 0046a064
    FADD float ptr [ESP + 0x2c4]        ; 0046a066
    FXCH                                ; 0046a06d
    FSTP float ptr [EAX]                ; 0046a06f
    FXCH                                ; 0046a071
    FSTP float ptr [EAX + 0x4]          ; 0046a073
    FSTP float ptr [EAX + 0x8]          ; 0046a076
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 0046a079
    MOV dword ptr [EAX + 0x8],0x0       ; 0046a080
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046a087
    MOV dword ptr [EAX + 0x4],EDX       ; 0046a08a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046a08d
    MOV dword ptr [EAX],EDX             ; 0046a090
    MOV dword ptr [EBX + 0x20064],0x0   ; 0046a092
        ;   Label: LAB_0046a092
    LEA EAX,[EBX + 0x2004c]             ; 0046a09c
        ;   Label: LAB_0046a09c
    MOV dword ptr [EAX + 0x8],0x0       ; 0046a0a2
    MOV ECX,dword ptr [ESP + 0x4b8]     ; 0046a0a9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046a0b0
    MOV dword ptr [EAX + 0x4],EDX       ; 0046a0b3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046a0b6
    MOV dword ptr [EAX],EDX             ; 0046a0b9
    TEST ECX,ECX                        ; 0046a0bb
    JZ 0x0046a17e                       ; 0046a0bd
        ;   XREF to: 0046a17e (CONDITIONAL_JUMP)  ; LAB_0046a17e
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 0046a0c3
    JZ 0x0046a10d                       ; 0046a0ca
        ;   XREF to: 0046a10d (CONDITIONAL_JUMP)  ; LAB_0046a10d
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 0046a0cc
    JZ 0x0046bb08                       ; 0046a0d3
        ;   XREF to: 0046bb08 (CONDITIONAL_JUMP)  ; LAB_0046bb08
    MOV EAX,[0x0061d95c]                ; 0046a0d9 | g_CGamePtr
    MOV dword ptr [EBX + 0x1ffac],0x0   ; 0046a0de
    CMP dword ptr [EAX + 0x264],0x0     ; 0046a0e8 | g_CGameInstance.flashlight_active
    JZ 0x0046a10d                       ; 0046a0ef
        ;   XREF to: 0046a10d (CONDITIONAL_JUMP)  ; LAB_0046a10d
    PUSH 0x5d9ce9                       ; 0046a0f1 | = "flashlit.wav"
    MOV dword ptr [EAX + 0x264],0x0     ; 0046a0f6 | g_CGameInstance.flashlight_active
    PUSH EBX                            ; 0046a100
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046a101
    CALL dword ptr [EAX + 0x2c]         ; 0046a107
    ADD ESP,0x8                         ; 0046a10a
    CMP dword ptr [EBX + 0xc1ec],0x0    ; 0046a10d
        ;   Label: LAB_0046a10d
    JZ 0x0046a17e                       ; 0046a114
        ;   XREF to: 0046a17e (CONDITIONAL_JUMP)  ; LAB_0046a17e
    LEA ESI,[EBX + 0x1fae8]             ; 0046a116
    MOV EAX,dword ptr [ESI + 0x338]     ; 0046a11c
    TEST EAX,EAX                        ; 0046a122
    JZ 0x0046a17e                       ; 0046a124
        ;   XREF to: 0046a17e (CONDITIONAL_JUMP)  ; LAB_0046a17e
    CMP dword ptr [EBX + 0x1ffac],0x1   ; 0046a126
    JNZ 0x0046bb6e                      ; 0046a12d
        ;   XREF to: 0046bb6e (CONDITIONAL_JUMP)  ; LAB_0046bb6e
    PUSH 0x5d9cf6                       ; 0046a133 | = "CFlashlight"
    MOV EDI,dword ptr [EBX + 0x20004]   ; 0046a138
    PUSH EDI                            ; 0046a13e
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0046a13f
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0046a144
    TEST EAX,EAX                        ; 0046a147
    JZ 0x0046bb17                       ; 0046a149
        ;   XREF to: 0046bb17 (CONDITIONAL_JUMP)  ; LAB_0046bb17
    MOV EAX,[0x0061d95c]                ; 0046a14f | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x264]     ; 0046a154 | g_CGameInstance.flashlight_active
    CMP EDX,0x1                         ; 0046a15a
    JNZ 0x0046bb17                      ; 0046a15d
        ;   XREF to: 0046bb17 (CONDITIONAL_JUMP)  ; LAB_0046bb17
    TEST EDX,EDX                        ; 0046a163
    SETZ DL                             ; 0046a165
    AND EDX,0xff                        ; 0046a168
    MOV dword ptr [EAX + 0x264],EDX     ; 0046a16e | g_CGameInstance.flashlight_active
    MOV dword ptr [EBX + 0x1ffac],0x0   ; 0046a174
    LEA EAX,[EBX + 0x1fae8]             ; 0046a17e
        ;   Label: LAB_0046a17e
    MOV EAX,dword ptr [EAX + 0x338]     ; 0046a184
    TEST EAX,EAX                        ; 0046a18a
    JNZ 0x0046bc5c                      ; 0046a18c
        ;   XREF to: 0046bc5c (CONDITIONAL_JUMP)  ; LAB_0046bc5c
    MOV EAX,[0x0061d95c]                ; 0046a192 | g_CGamePtr
    MOV dword ptr [EAX + 0x264],0x0     ; 0046a197 | g_CGameInstance.flashlight_active
    MOV EAX,[0x0061d95c]                ; 0046a1a1 | g_CGamePtr
        ;   Label: LAB_0046a1a1
    CMP dword ptr [EAX + 0x244],0x0     ; 0046a1a6 | g_CGameInstance.letterbox_mode
    JZ 0x0046a1cc                       ; 0046a1ad
        ;   XREF to: 0046a1cc (CONDITIONAL_JUMP)  ; LAB_0046a1cc
    CMP dword ptr [EBX + 0x1ff58],0x0   ; 0046a1af
    JZ 0x0046bc7a                       ; 0046a1b6
        ;   XREF to: 0046bc7a (CONDITIONAL_JUMP)  ; LAB_0046bc7a
    PUSH EBX                            ; 0046a1bc
        ;   Label: LAB_0046a1bc
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046a1bd
    CALL dword ptr [EAX + 0x150]        ; 0046a1c3
    ADD ESP,0x4                         ; 0046a1c9
    CMP dword ptr [ESP + 0x4b4],0x0     ; 0046a1cc
        ;   Label: LAB_0046a1cc
    JZ 0x0046a1e2                       ; 0046a1d4
        ;   XREF to: 0046a1e2 (CONDITIONAL_JUMP)  ; LAB_0046a1e2
    PUSH dword ptr [EBP + 0x18]         ; 0046a1d6
    PUSH EBX                            ; 0046a1d9
    CALL core_doc.cpp_FUN_00474400      ; 0046a1da
        ;   XREF to: 00474400 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00474400()
    ADD ESP,0x8                         ; 0046a1df
    MOV EDX,dword ptr [EBX + 0x1ffac]   ; 0046a1e2
        ;   Label: LAB_0046a1e2
    TEST EDX,EDX                        ; 0046a1e8
    JZ 0x0046bc8c                       ; 0046a1ea
        ;   XREF to: 0046bc8c (CONDITIONAL_JUMP)  ; LAB_0046bc8c
    FLD float ptr [EBP + 0x18]          ; 0046a1f0
    FDIV float ptr [0x005fec9c]         ; 0046a1f3 | DAT_005fec9c
    FADD float ptr [EBX + 0x1ffb0]      ; 0046a1f9
    FST float ptr [EBX + 0x1ffb0]       ; 0046a1ff
    FLD1                                ; 0046a205
    FCOMPP                              ; 0046a207
    FNSTSW AX                           ; 0046a209
    SAHF                                ; 0046a20b
    JNC 0x0046a218                      ; 0046a20c
        ;   XREF to: 0046a218 (CONDITIONAL_JUMP)  ; LAB_0046a218
    MOV dword ptr [EBX + 0x1ffb0],0x3f800000 ; 0046a20e
    FLD float ptr [EBP + 0x18]          ; 0046a218
        ;   Label: LAB_0046a218
    FDIV float ptr [0x005feca4]         ; 0046a21b | DAT_005feca4
    FSUBR float ptr [EBX + 0x1ffd0]     ; 0046a221
    FST float ptr [EBX + 0x1ffd0]       ; 0046a227
    FLDZ                                ; 0046a22d
    FCOMPP                              ; 0046a22f
    FNSTSW AX                           ; 0046a231
    SAHF                                ; 0046a233
    JC 0x0046a240                       ; 0046a234
        ;   XREF to: 0046a240 (CONDITIONAL_JUMP)  ; LAB_0046a240
    MOV dword ptr [EBX + 0x1ffd0],0x0   ; 0046a236
    FLD float ptr [EBP + 0x18]          ; 0046a240
        ;   Label: LAB_0046a240
    FDIV float ptr [0x005feca4]         ; 0046a243 | DAT_005feca4
    FSUBR float ptr [EBX + 0x1fff0]     ; 0046a249
    FST float ptr [EBX + 0x1fff0]       ; 0046a24f
    FLDZ                                ; 0046a255
    FCOMPP                              ; 0046a257
    FNSTSW AX                           ; 0046a259
    SAHF                                ; 0046a25b
    JC 0x0046a268                       ; 0046a25c
        ;   XREF to: 0046a268 (CONDITIONAL_JUMP)  ; LAB_0046a268
    MOV dword ptr [EBX + 0x1fff0],0x0   ; 0046a25e
    CMP dword ptr [ESP + 0x4c8],0x0     ; 0046a268
        ;   Label: LAB_0046a268
    JZ 0x0046a27b                       ; 0046a270
        ;   XREF to: 0046a27b (CONDITIONAL_JUMP)  ; LAB_0046a27b
    PUSH EBX                            ; 0046a272
    CALL core_doc.cpp_FUN_00474ef0      ; 0046a273
        ;   XREF to: 00474ef0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00474ef0()
    ADD ESP,0x4                         ; 0046a278
    PUSH EBX                            ; 0046a27b
        ;   Label: LAB_0046a27b
    CALL core_doc.cpp_FUN_0046caa0      ; 0046a27c
        ;   XREF to: 0046caa0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046caa0()
    MOV ESI,dword ptr [EBX + 0x1fae4]   ; 0046a281
    ADD ESP,0x4                         ; 0046a287
    CMP ESI,0x2                         ; 0046a28a
    JNZ 0x0046a2ce                      ; 0046a28d
        ;   XREF to: 0046a2ce (CONDITIONAL_JUMP)  ; LAB_0046a2ce
    MOV EDI,dword ptr [EBX + 0x20004]   ; 0046a28f
    TEST EDI,EDI                        ; 0046a295
    JZ 0x0046a2ce                       ; 0046a297
        ;   XREF to: 0046a2ce (CONDITIONAL_JUMP)  ; LAB_0046a2ce
    CMP dword ptr [EDI + 0x2e0],0x0     ; 0046a299
    JNZ 0x0046a2ce                      ; 0046a2a0
        ;   XREF to: 0046a2ce (CONDITIONAL_JUMP)  ; LAB_0046a2ce
    LEA EAX,[EBX + 0x158]               ; 0046a2a2
    PUSH EAX                            ; 0046a2a8
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 0046a2a9
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0046a2ae
    PUSH 0x0                            ; 0046a2b1
    PUSH EBX                            ; 0046a2b3
    CALL core_doc.cpp_FUN_0046f610      ; 0046a2b4
        ;   XREF to: 0046f610 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046f610()
    ADD ESP,0x8                         ; 0046a2b9
    PUSH EBX                            ; 0046a2bc
    CALL core_doc.cpp_CDoc_aimLeftPistol_FUN_00473160 ; 0046a2bd
        ;   XREF to: 00473160 (UNCONDITIONAL_CALL)  ; void core_doc.cpp_CDoc_aimLeftPistol_FUN_00473160(CDoc * this_ptr)
    ADD ESP,0x4                         ; 0046a2c2
    PUSH EBX                            ; 0046a2c5
    CALL core_doc.cpp_FUN_0046caa0      ; 0046a2c6
        ;   XREF to: 0046caa0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046caa0()
    ADD ESP,0x4                         ; 0046a2cb
    MOV ECX,dword ptr [ESP + 0x4c4]     ; 0046a2ce
        ;   Label: LAB_0046a2ce
    PUSH ECX                            ; 0046a2d5
    PUSH dword ptr [EBP + 0x18]         ; 0046a2d6
    PUSH EBX                            ; 0046a2d9
    CALL core_doc.cpp_CDoc_updateArmRecoilBlend_FUN_00473c10 ; 0046a2da
        ;   XREF to: 00473c10 (UNCONDITIONAL_CALL)  ; void core_doc.cpp_CDoc_updateArmRecoilBlend_FUN_00473c10(CDoc * this_ptr, float delta_time, int is_weapon_active)
    ADD ESP,0xc                         ; 0046a2df
    PUSH EBX                            ; 0046a2e2
    CALL core_doc.cpp_FUN_00476080      ; 0046a2e3
        ;   XREF to: 00476080 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00476080()
    ADD ESP,0x4                         ; 0046a2e8
    PUSH dword ptr [EBP + 0x18]         ; 0046a2eb
    PUSH EBX                            ; 0046a2ee
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 0046a2ef
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0046a2f4
    PUSH 0x11                           ; 0046a2f7
    LEA ESI,[EBX + 0x158]               ; 0046a2f9
    PUSH ESI                            ; 0046a2ff
    CALL core_motion.cpp_FUN_00524a40   ; 0046a300
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a305
    FLD float ptr [ESP + 0x4d8]         ; 0046a30c
    FLDZ                                ; 0046a313
    ADD ESP,0x8                         ; 0046a315
    FCOMPP                              ; 0046a318
    FNSTSW AX                           ; 0046a31a
    SAHF                                ; 0046a31c
    JNC 0x0046bcb9                      ; 0046a31d
        ;   XREF to: 0046bcb9 (CONDITIONAL_JUMP)  ; LAB_0046bcb9
    PUSH ESI                            ; 0046a323
    CALL core_motion.cpp_FUN_00525020   ; 0046a324
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 0046a329
    FLD float ptr [ESP + 0x4d4]         ; 0046a330
    FLD1                                ; 0046a337
    ADD ESP,0x4                         ; 0046a339
    FCOMPP                              ; 0046a33c
    FNSTSW AX                           ; 0046a33e
    SAHF                                ; 0046a340
    JNC 0x0046a472                      ; 0046a341
        ;   XREF to: 0046a472 (CONDITIONAL_JUMP)  ; LAB_0046a472
    MOV ESI,dword ptr [0x007c5094]      ; 0046a347 | g_CBoxActorClassInfo.name_hash
    PUSH ESI                            ; 0046a34d
    MOV EDI,dword ptr [EBX + 0x1ff7c]   ; 0046a34e
    PUSH EDI                            ; 0046a354
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0046a355
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x488],EAX     ; 0046a35a
    ADD ESP,0x8                         ; 0046a361
    TEST EAX,EAX                        ; 0046a364
    JZ 0x0046a472                       ; 0046a366
        ;   XREF to: 0046a472 (CONDITIONAL_JUMP)  ; LAB_0046a472
    PUSH EBX                            ; 0046a36c
    LEA ESI,[ESP + 0x374]               ; 0046a36d
    LEA EDI,[ESP + 0x41c]               ; 0046a374
    CALL core_doc.cpp_FUN_0046c9e0      ; 0046a37b
        ;   XREF to: 0046c9e0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046c9e0()
    ADD ESP,0x4                         ; 0046a380
    LEA EAX,[ESP + 0x418]               ; 0046a383
    LEA ESI,[ESP + 0x370]               ; 0046a38a
    PUSH EAX                            ; 0046a391
    MOVSD ES:EDI,ESI                    ; 0046a392
    MOVSD ES:EDI,ESI                    ; 0046a393
    MOVSD ES:EDI,ESI                    ; 0046a394
    PUSH EBX                            ; 0046a395
    LEA ESI,[ESP + 0x18c]               ; 0046a396
    LEA EDI,[ESP + 0x198]               ; 0046a39d
    CALL core_actor.cpp_FUN_00408b40    ; 0046a3a4
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x18c]               ; 0046a3a9
    LEA EAX,[ESP + 0x33c]               ; 0046a3b0
    ADD ESP,0x8                         ; 0046a3b7
    XOR EDX,EDX                         ; 0046a3ba
    MOVSD ES:EDI,ESI                    ; 0046a3bc
    MOVSD ES:EDI,ESI                    ; 0046a3bd
    MOVSD ES:EDI,ESI                    ; 0046a3be
    PUSH EAX                            ; 0046a3bf
    FLD float ptr [ESP + 0x194]         ; 0046a3c0
    FLD float ptr [ESP + 0x198]         ; 0046a3c7
    FLD float ptr [ESP + 0x19c]         ; 0046a3ce
    LEA EDI,[ESP + 0x338]               ; 0046a3d5
    LEA ESI,[ESP + 0x2cc]               ; 0046a3dc
    FXCH ST2                            ; 0046a3e3
    FSUB float ptr [ESP + 0x140]        ; 0046a3e5
    FXCH                                ; 0046a3ec
    FSUB float ptr [ESP + 0x144]        ; 0046a3ee
    FXCH ST2                            ; 0046a3f5
    FSUB float ptr [ESP + 0x148]        ; 0046a3f7
    FXCH                                ; 0046a3fe
    FSTP float ptr [ESP + 0x2cc]        ; 0046a400
    FXCH                                ; 0046a407
    FSTP float ptr [ESP + 0x2d0]        ; 0046a409
    FSTP float ptr [ESP + 0x2d4]        ; 0046a410
    MOVSD ES:EDI,ESI                    ; 0046a417
    MOVSD ES:EDI,ESI                    ; 0046a418
    MOVSD ES:EDI,ESI                    ; 0046a419
    PUSH EBX                            ; 0046a41a
    LEA ESI,[ESP + 0x390]               ; 0046a41b
    LEA EDI,[ESP + 0x1bc]               ; 0046a422
    MOV dword ptr [ESP + 0x340],EDX     ; 0046a429
    CALL core_actor.cpp_FUN_00408b00    ; 0046a430
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x390]               ; 0046a435
    ADD ESP,0x8                         ; 0046a43c
    MOVSD ES:EDI,ESI                    ; 0046a43f
    MOVSD ES:EDI,ESI                    ; 0046a440
    MOVSD ES:EDI,ESI                    ; 0046a441
    FLD float ptr [ESP + 0x1bc]         ; 0046a442
    FLDZ                                ; 0046a449
    FCOMPP                              ; 0046a44b
    FNSTSW AX                           ; 0046a44d
    SAHF                                ; 0046a44f
    JNC 0x0046a472                      ; 0046a450
        ;   XREF to: 0046a472 (CONDITIONAL_JUMP)  ; LAB_0046a472
    LEA EAX,[ESP + 0x334]               ; 0046a452
    PUSH EAX                            ; 0046a459
    LEA EAX,[ESP + 0x140]               ; 0046a45a
    PUSH EAX                            ; 0046a461
    MOV ECX,dword ptr [ESP + 0x488]     ; 0046a462
    PUSH ECX                            ; 0046a469
    CALL core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0 ; 0046a46a
        ;   XREF to: 00422ab0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0(CBoxActor * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    ADD ESP,0xc                         ; 0046a46f
    PUSH 0x0                            ; 0046a472
        ;   Label: LAB_0046a472
    PUSH EBX                            ; 0046a474
    CALL core_doc.cpp_FUN_0046f610      ; 0046a475
        ;   XREF to: 0046f610 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_0046f610()
    ADD ESP,0x8                         ; 0046a47a
    PUSH dword ptr [EBP + 0x18]         ; 0046a47d
    PUSH 0x0                            ; 0046a480
    PUSH EBX                            ; 0046a482
    CALL core_doc.cpp_FUN_004724a0      ; 0046a483
        ;   XREF to: 004724a0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004724a0()
    ADD ESP,0xc                         ; 0046a488
    PUSH dword ptr [EBP + 0x18]         ; 0046a48b
    PUSH 0x1                            ; 0046a48e
    PUSH EBX                            ; 0046a490
    CALL core_doc.cpp_FUN_004724a0      ; 0046a491
        ;   XREF to: 004724a0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004724a0()
    ADD ESP,0xc                         ; 0046a496
    PUSH dword ptr [EBP + 0x18]         ; 0046a499
    PUSH EBX                            ; 0046a49c
    CALL core_doc.cpp_FUN_00475920      ; 0046a49d
        ;   XREF to: 00475920 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00475920()
    ADD ESP,0x8                         ; 0046a4a2
    LEA EAX,[EBX + 0x1fae8]             ; 0046a4a5
    PUSH EAX                            ; 0046a4ab
    CALL core_inv.cpp_FUN_004f9f10      ; 0046a4ac
        ;   XREF to: 004f9f10 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f9f10()
    ADD ESP,0x4                         ; 0046a4b1
    PUSH dword ptr [EBP + 0x18]         ; 0046a4b4
    PUSH EBX                            ; 0046a4b7
    CALL core_doc.cpp_FUN_00476150      ; 0046a4b8
        ;   XREF to: 00476150 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00476150()
    ADD ESP,0x8                         ; 0046a4bd
    CMP dword ptr [ESP + 0x4c8],0x0     ; 0046a4c0
    JZ 0x0046bcc7                       ; 0046a4c8
        ;   XREF to: 0046bcc7 (CONDITIONAL_JUMP)  ; LAB_0046bcc7
    FLD float ptr [EBX + 0x1ff70]       ; 0046a4ce
    FADD float ptr [EBP + 0x18]         ; 0046a4d4
    FST float ptr [EBX + 0x1ff70]       ; 0046a4d7
    FCOMP double ptr [0x005d9dbc]       ; 0046a4dd | DAT_005d9dbc
    FNSTSW AX                           ; 0046a4e3
    SAHF                                ; 0046a4e5
    JBE 0x0046a4f3                      ; 0046a4e6
        ;   XREF to: 0046a4f3 (CONDITIONAL_JUMP)  ; LAB_0046a4f3
    PUSH 0x1                            ; 0046a4e8
    PUSH EBX                            ; 0046a4ea
    CALL core_hero.cpp_FUN_004eca10     ; 0046a4eb
        ;   XREF to: 004eca10 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eca10()
    ADD ESP,0x8                         ; 0046a4f0
    MOV EDI,dword ptr [EBX + 0x20004]   ; 0046a4f3
        ;   Label: LAB_0046a4f3
    TEST EDI,EDI                        ; 0046a4f9
    JZ 0x0046a510                       ; 0046a4fb
        ;   XREF to: 0046a510 (CONDITIONAL_JUMP)  ; LAB_0046a510
    CMP dword ptr [EDI + 0xfc],0x0      ; 0046a4fd
    JZ 0x0046a510                       ; 0046a504
        ;   XREF to: 0046a510 (CONDITIONAL_JUMP)  ; LAB_0046a510
    MOV dword ptr [EBX + 0xfc],0x1      ; 0046a506
    MOV ECX,dword ptr [EBX + 0x20018]   ; 0046a510
        ;   Label: LAB_0046a510
    PUSH ECX                            ; 0046a516
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0046a517
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0046a51c
    TEST EAX,EAX                        ; 0046a51f
    JZ 0x0046bd1b                       ; 0046a521
        ;   XREF to: 0046bd1b (CONDITIONAL_JUMP)  ; LAB_0046bd1b
    MOV EAX,[0x0061d95c]                ; 0046a527 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x25c],0x0     ; 0046a52c | g_CGameInstance.goggles_active
    JZ 0x0046bcd5                       ; 0046a533
        ;   XREF to: 0046bcd5 (CONDITIONAL_JUMP)  ; LAB_0046bcd5
    MOV ESP,EBP                         ; 0046a539
        ;   Label: LAB_0046a539
    POP EBP                             ; 0046a53b
    POP EDI                             ; 0046a53c
    POP ESI                             ; 0046a53d
    POP EBX                             ; 0046a53e
    RET                                 ; 0046a53f
    CMP dword ptr [EBX + 0x20000],0x0   ; 0046a540
        ;   Label: LAB_0046a540
    JNZ 0x004698ac                      ; 0046a547
        ;   XREF to: 004698ac (CONDITIONAL_JUMP)  ; LAB_004698ac
    JMP 0x004698ee                      ; 0046a54d
        ;   XREF to: 004698ee (UNCONDITIONAL_JUMP)  ; LAB_004698ee
    CMP dword ptr [EBX + 0x1ff5c],0x4   ; 0046a552
        ;   Label: LAB_0046a552
    JZ 0x004698fb                       ; 0046a559
        ;   XREF to: 004698fb (CONDITIONAL_JUMP)  ; LAB_004698fb
    JMP 0x00469931                      ; 0046a55f
        ;   XREF to: 00469931 (UNCONDITIONAL_JUMP)  ; LAB_00469931
    PUSH 0x83                           ; 0046a564
        ;   Label: LAB_0046a564
    PUSH ESI                            ; 0046a569
    CALL core_motion.cpp_FUN_00524a40   ; 0046a56a
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a56f
    FLD float ptr [ESP + 0x4d8]         ; 0046a576
    FLDZ                                ; 0046a57d
    ADD ESP,0x8                         ; 0046a57f
    FCOMPP                              ; 0046a582
    FNSTSW AX                           ; 0046a584
    SAHF                                ; 0046a586
    JC 0x00469960                       ; 0046a587
        ;   XREF to: 00469960 (CONDITIONAL_JUMP)  ; LAB_00469960
    PUSH 0x29                           ; 0046a58d
    PUSH ESI                            ; 0046a58f
    CALL core_motion.cpp_FUN_00524a40   ; 0046a590
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a595
    FLD float ptr [ESP + 0x4d8]         ; 0046a59c
    FLDZ                                ; 0046a5a3
    ADD ESP,0x8                         ; 0046a5a5
    FCOMPP                              ; 0046a5a8
    FNSTSW AX                           ; 0046a5aa
    SAHF                                ; 0046a5ac
    JC 0x00469960                       ; 0046a5ad
        ;   XREF to: 00469960 (CONDITIONAL_JUMP)  ; LAB_00469960
    PUSH 0x2d                           ; 0046a5b3
    PUSH ESI                            ; 0046a5b5
    CALL core_motion.cpp_FUN_00524a40   ; 0046a5b6
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a5bb
    FLD float ptr [ESP + 0x4d8]         ; 0046a5c2
    FLDZ                                ; 0046a5c9
    ADD ESP,0x8                         ; 0046a5cb
    FCOMPP                              ; 0046a5ce
    FNSTSW AX                           ; 0046a5d0
    SAHF                                ; 0046a5d2
    JC 0x00469960                       ; 0046a5d3
        ;   XREF to: 00469960 (CONDITIONAL_JUMP)  ; LAB_00469960
    PUSH 0x2e                           ; 0046a5d9
    PUSH ESI                            ; 0046a5db
    CALL core_motion.cpp_FUN_00524a40   ; 0046a5dc
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a5e1
    FLD float ptr [ESP + 0x4d8]         ; 0046a5e8
    FLDZ                                ; 0046a5ef
    ADD ESP,0x8                         ; 0046a5f1
    FCOMPP                              ; 0046a5f4
    FNSTSW AX                           ; 0046a5f6
    SAHF                                ; 0046a5f8
    JC 0x00469960                       ; 0046a5f9
        ;   XREF to: 00469960 (CONDITIONAL_JUMP)  ; LAB_00469960
    FLD float ptr [EBX + 0x2538]        ; 0046a5ff
    FLDZ                                ; 0046a605
    FCOMPP                              ; 0046a607
    FNSTSW AX                           ; 0046a609
    SAHF                                ; 0046a60b
    JNC 0x00469960                      ; 0046a60c
        ;   XREF to: 00469960 (CONDITIONAL_JUMP)  ; LAB_00469960
    JMP 0x0046999d                      ; 0046a612
        ;   XREF to: 0046999d (UNCONDITIONAL_JUMP)  ; LAB_0046999d
    CMP dword ptr [EBX + 0x1ff5c],0x5   ; 0046a617
        ;   Label: LAB_0046a617
    JZ 0x004699c9                       ; 0046a61e
        ;   XREF to: 004699c9 (CONDITIONAL_JUMP)  ; LAB_004699c9
    CMP dword ptr [EBX + 0x1ff74],0x0   ; 0046a624
    JNZ 0x004699c9                      ; 0046a62b
        ;   XREF to: 004699c9 (CONDITIONAL_JUMP)  ; LAB_004699c9
    JMP 0x004699fe                      ; 0046a631
        ;   XREF to: 004699fe (UNCONDITIONAL_JUMP)  ; LAB_004699fe
    CMP dword ptr [EBX + 0x1ff5c],0x5   ; 0046a636
        ;   Label: LAB_0046a636
    JZ 0x00469a2a                       ; 0046a63d
        ;   XREF to: 00469a2a (CONDITIONAL_JUMP)  ; LAB_00469a2a
    CMP dword ptr [EBX + 0x1ff74],0x0   ; 0046a643
    JNZ 0x00469a2a                      ; 0046a64a
        ;   XREF to: 00469a2a (CONDITIONAL_JUMP)  ; LAB_00469a2a
    JMP 0x00469a60                      ; 0046a650
        ;   XREF to: 00469a60 (UNCONDITIONAL_JUMP)  ; LAB_00469a60
    PUSH 0x24                           ; 0046a655
        ;   Label: LAB_0046a655
    LEA EAX,[EBX + 0x158]               ; 0046a657
    PUSH EAX                            ; 0046a65d
    CALL core_motion.cpp_FUN_00524a40   ; 0046a65e
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a663
    FLD float ptr [ESP + 0x4d8]         ; 0046a66a
    FLDZ                                ; 0046a671
    ADD ESP,0x8                         ; 0046a673
    FCOMPP                              ; 0046a676
    FNSTSW AX                           ; 0046a678
    SAHF                                ; 0046a67a
    JC 0x00469bf0                       ; 0046a67b
        ;   XREF to: 00469bf0 (CONDITIONAL_JUMP)  ; LAB_00469bf0
    JMP 0x00469c34                      ; 0046a681
        ;   XREF to: 00469c34 (UNCONDITIONAL_JUMP)  ; LAB_00469c34
    FLD float ptr [EBP + 0x18]          ; 0046a686
        ;   Label: LAB_0046a686
    FMUL double ptr [0x005d9d7c]        ; 0046a689 | DAT_005d9d7c
    FADD float ptr [EBX + 0x20014]      ; 0046a68f
    FST float ptr [EBX + 0x20014]       ; 0046a695
    FLD1                                ; 0046a69b
    FCOMPP                              ; 0046a69d
    FNSTSW AX                           ; 0046a69f
    SAHF                                ; 0046a6a1
    JNC 0x00469cb8                      ; 0046a6a2
        ;   XREF to: 00469cb8 (CONDITIONAL_JUMP)  ; LAB_00469cb8
    MOV dword ptr [EBX + 0x20014],0x3f800000 ; 0046a6a8
    JMP 0x00469cb8                      ; 0046a6b2
        ;   XREF to: 00469cb8 (UNCONDITIONAL_JUMP)  ; LAB_00469cb8
    MOV EAX,dword ptr [EBX + 0x1ff84]   ; 0046a6b7
        ;   Label: LAB_0046a6b7
    ADD EAX,0x2d4                       ; 0046a6bd
    PUSH EAX                            ; 0046a6c2
    MOV EDX,dword ptr [EBX + 0x1ff84]   ; 0046a6c3
    PUSH EDX                            ; 0046a6c9
    LEA ESI,[ESP + 0x3d8]               ; 0046a6ca
    LEA EDI,[ESP + 0x168]               ; 0046a6d1
    CALL core_actor.cpp_FUN_00408b40    ; 0046a6d8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x3d8]               ; 0046a6dd
    ADD ESP,0x8                         ; 0046a6e4
    MOVSD ES:EDI,ESI                    ; 0046a6e7
    MOVSD ES:EDI,ESI                    ; 0046a6e8
    MOVSD ES:EDI,ESI                    ; 0046a6e9
    FLD float ptr [ESP + 0x164]         ; 0046a6ea
    FADD double ptr [0x005d9dcc]        ; 0046a6f1 | DAT_005d9dcc
    FLD float ptr [EBX + 0x24]          ; 0046a6f7
    FCOMPP                              ; 0046a6fa
    FNSTSW AX                           ; 0046a6fc
    SAHF                                ; 0046a6fe
    JBE 0x00469d08                      ; 0046a6ff
        ;   XREF to: 00469d08 (CONDITIONAL_JUMP)  ; LAB_00469d08
    PUSH 0x1                            ; 0046a705
    PUSH 0x0                            ; 0046a707
    LEA EAX,[EBX + 0x158]               ; 0046a709
    PUSH EAX                            ; 0046a70f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046a710
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046a715
    JMP 0x00469d08                      ; 0046a718
        ;   XREF to: 00469d08 (UNCONDITIONAL_JUMP)  ; LAB_00469d08
    MOV ECX,0x3f800000                  ; 0046a71d
        ;   Label: LAB_0046a71d
    MOV dword ptr [EBX + 0x200bc],0x0   ; 0046a722
    MOV dword ptr [ESP + 0x54],ECX      ; 0046a72c
    JMP 0x00469d4a                      ; 0046a730
        ;   XREF to: 00469d4a (UNCONDITIONAL_JUMP)  ; LAB_00469d4a
    CMP dword ptr [EBX + 0x20000],0x0   ; 0046a735
        ;   Label: LAB_0046a735
    JNZ 0x0046a9c8                      ; 0046a73c
        ;   XREF to: 0046a9c8 (CONDITIONAL_JUMP)  ; LAB_0046a9c8
    MOV EDX,dword ptr [EBX + 0x1ff88]   ; 0046a742
    TEST EDX,EDX                        ; 0046a748
    JNZ 0x0046ab8e                      ; 0046a74a
        ;   XREF to: 0046ab8e (CONDITIONAL_JUMP)  ; LAB_0046ab8e
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 0046a750
    TEST ECX,ECX                        ; 0046a756
    JZ 0x0046af87                       ; 0046a758
        ;   XREF to: 0046af87 (CONDITIONAL_JUMP)  ; LAB_0046af87
    CMP dword ptr [EBX + 0x2700],0x0    ; 0046a75e
    JNZ 0x0046a898                      ; 0046a765
        ;   XREF to: 0046a898 (CONDITIONAL_JUMP)  ; LAB_0046a898
    LEA EAX,[ECX + 0x20]                ; 0046a76b
    PUSH EAX                            ; 0046a76e
    PUSH EBX                            ; 0046a76f
    LEA ESI,[ESP + 0x408]               ; 0046a770
    LEA EDI,[ESP + 0x12c]               ; 0046a777
    CALL core_actor.cpp_FUN_00408bb0    ; 0046a77e
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x408]               ; 0046a783
    ADD ESP,0x8                         ; 0046a78a
    LEA EAX,[ESP + 0x124]               ; 0046a78d
    MOVSD ES:EDI,ESI                    ; 0046a794
    MOVSD ES:EDI,ESI                    ; 0046a795
    MOVSD ES:EDI,ESI                    ; 0046a796
    PUSH EAX                            ; 0046a797
    LEA ESI,[ESP + 0x380]               ; 0046a798
    LEA EDI,[ESP + 0x2d8]               ; 0046a79f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0046a7a6
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x380]               ; 0046a7ab
    ADD ESP,0x4                         ; 0046a7b2
    MOVSD ES:EDI,ESI                    ; 0046a7b5
    MOVSD ES:EDI,ESI                    ; 0046a7b6
    MOVSD ES:EDI,ESI                    ; 0046a7b7
    PUSH dword ptr [ESP + 0x2d8]        ; 0046a7b8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0046a7bf
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 0046a7c4
    FLD float ptr [ESP + 0x4d4]         ; 0046a7cb
    ADD ESP,0x4                         ; 0046a7d2
    FST float ptr [ESP + 0x4bc]         ; 0046a7d5
    FCOMP float ptr [0x005d9db0]        ; 0046a7dc | DAT_005d9db0
    FNSTSW AX                           ; 0046a7e2
    SAHF                                ; 0046a7e4
    JNC 0x0046a7fb                      ; 0046a7e5
        ;   XREF to: 0046a7fb (CONDITIONAL_JUMP)  ; LAB_0046a7fb
    FLD float ptr [ESP + 0x4bc]         ; 0046a7e7
    FADD float ptr [0x005d9dac]         ; 0046a7ee | DAT_005d9dac
    FSTP float ptr [ESP + 0x4bc]        ; 0046a7f4
    FLD float ptr [ESP + 0x4bc]         ; 0046a7fb
        ;   Label: LAB_0046a7fb
    FCOMP float ptr [0x005d9db4]        ; 0046a802 | DAT_005d9db4
    FNSTSW AX                           ; 0046a808
    SAHF                                ; 0046a80a
    JBE 0x0046a821                      ; 0046a80b
        ;   XREF to: 0046a821 (CONDITIONAL_JUMP)  ; LAB_0046a821
    FLD float ptr [ESP + 0x4bc]         ; 0046a80d
    FADD float ptr [0x005d9db8]         ; 0046a814 | DAT_005d9db8
    FSTP float ptr [ESP + 0x4bc]        ; 0046a81a
    FLD float ptr [EBP + 0x18]          ; 0046a821
        ;   Label: LAB_0046a821
    FMUL float ptr [0x005d9dac]         ; 0046a824 | DAT_005d9dac
    FLD float ptr [ESP + 0x4bc]         ; 0046a82a
    FXCH                                ; 0046a831
    FST float ptr [ESP + 0x494]         ; 0046a833
    FCHS                                ; 0046a83a
    FSTP float ptr [ESP + 0x484]        ; 0046a83c
    FCOMP float ptr [ESP + 0x484]       ; 0046a843
    FNSTSW AX                           ; 0046a84a
    SAHF                                ; 0046a84c
    JNC 0x0046a85d                      ; 0046a84d
        ;   XREF to: 0046a85d (CONDITIONAL_JUMP)  ; LAB_0046a85d
    MOV EAX,dword ptr [ESP + 0x484]     ; 0046a84f
    MOV dword ptr [ESP + 0x4bc],EAX     ; 0046a856
    FLD float ptr [ESP + 0x4bc]         ; 0046a85d
        ;   Label: LAB_0046a85d
    FCOMP float ptr [ESP + 0x494]       ; 0046a864
    FNSTSW AX                           ; 0046a86b
    SAHF                                ; 0046a86d
    JBE 0x0046a87e                      ; 0046a86e
        ;   XREF to: 0046a87e (CONDITIONAL_JUMP)  ; LAB_0046a87e
    MOV EAX,dword ptr [ESP + 0x494]     ; 0046a870
    MOV dword ptr [ESP + 0x4bc],EAX     ; 0046a877
    LEA EAX,[EBX + 0x30]                ; 0046a87e
        ;   Label: LAB_0046a87e
    FLD float ptr [EBX + 0x34]          ; 0046a881
    PUSH EAX                            ; 0046a884
    FADD float ptr [ESP + 0x4c0]        ; 0046a885
    PUSH EBX                            ; 0046a88c
    FSTP float ptr [EBX + 0x34]         ; 0046a88d
    CALL core_charactr.cpp_FUN_00433d50 ; 0046a890
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433d50()
    ADD ESP,0x8                         ; 0046a895
    MOV EAX,dword ptr [EBX + 0x26fc]    ; 0046a898
        ;   Label: LAB_0046a898
    MOV dword ptr [ESP + 0x478],EAX     ; 0046a89e
    MOV EAX,dword ptr [EAX + 0x154]     ; 0046a8a5
    PUSH 0x0                            ; 0046a8ab
    MOV dword ptr [ESP + 0x4d4],EAX     ; 0046a8ad
    LEA EAX,[EBX + 0x158]               ; 0046a8b4
    LEA ESI,[ESP + 0x32c]               ; 0046a8ba
    PUSH EAX                            ; 0046a8c1
    LEA EDI,[ESP + 0x2b8]               ; 0046a8c2
    MOV dword ptr [ESP + 0x4a4],EAX     ; 0046a8c9
    CALL core_skeleton.cpp_FUN_00569130 ; 0046a8d0
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 0046a8d5
    LEA EAX,[ESP + 0x2b0]               ; 0046a8d8
    LEA ESI,[ESP + 0x328]               ; 0046a8df
    PUSH EAX                            ; 0046a8e6
    MOVSD ES:EDI,ESI                    ; 0046a8e7
    MOVSD ES:EDI,ESI                    ; 0046a8e8
    MOVSD ES:EDI,ESI                    ; 0046a8e9
    PUSH EBX                            ; 0046a8ea
    MOV ESI,dword ptr [ESP + 0x480]     ; 0046a8eb
    MOV EAX,dword ptr [ESP + 0x4d8]     ; 0046a8f2
    PUSH ESI                            ; 0046a8f9
    CALL dword ptr [EAX + 0x110]        ; 0046a8fa
    ADD ESP,0xc                         ; 0046a900
    TEST EAX,EAX                        ; 0046a903
    JZ 0x0046af54                       ; 0046a905
        ;   XREF to: 0046af54 (CONDITIONAL_JUMP)  ; LAB_0046af54
    CMP dword ptr [EBX + 0x26fc],0x0    ; 0046a90b
    JZ 0x0046af5a                       ; 0046a912
        ;   XREF to: 0046af5a (CONDITIONAL_JUMP)  ; LAB_0046af5a
    FLD float ptr [EBX + 0x200a8]       ; 0046a918
    FADD float ptr [EBP + 0x18]         ; 0046a91e
    FST float ptr [EBX + 0x200a8]       ; 0046a921
    FCOMP float ptr [0x005feccc]        ; 0046a927 | DAT_005feccc
    FNSTSW AX                           ; 0046a92d
    SAHF                                ; 0046a92f
    JC 0x00469e25                       ; 0046a930
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    CMP dword ptr [EBX + 0x2700],0x1    ; 0046a936
    JZ 0x00469e25                       ; 0046a93d
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH 0x27                           ; 0046a943
    MOV EDX,dword ptr [ESP + 0x4a0]     ; 0046a945
    PUSH EDX                            ; 0046a94c
    CALL core_motion.cpp_FUN_00524a40   ; 0046a94d
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x47c],EAX     ; 0046a952
    ADD ESP,0x8                         ; 0046a959
    PUSH 0x28                           ; 0046a95c
    MOV ECX,dword ptr [ESP + 0x4a0]     ; 0046a95e
    PUSH ECX                            ; 0046a965
    CALL core_motion.cpp_FUN_00524a40   ; 0046a966
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a96b
    FLD float ptr [ESP + 0x4d8]         ; 0046a972
    ADD ESP,0x8                         ; 0046a979
    FADD float ptr [ESP + 0x474]        ; 0046a97c
    FLDZ                                ; 0046a983
    FCOMPP                              ; 0046a985
    FNSTSW AX                           ; 0046a987
    SAHF                                ; 0046a989
    JNC 0x0046af72                      ; 0046a98a
        ;   XREF to: 0046af72 (CONDITIONAL_JUMP)  ; LAB_0046af72
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 0046a990
    JNZ 0x0046a9a6                      ; 0046a997
        ;   XREF to: 0046a9a6 (CONDITIONAL_JUMP)  ; LAB_0046a9a6
    CMP dword ptr [0x01c43544],0x0      ; 0046a999 | DAT_01c43544
    JZ 0x00469e25                       ; 0046a9a0
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH 0x1                            ; 0046a9a6
        ;   Label: LAB_0046a9a6
    PUSH 0x28                           ; 0046a9a8
    LEA EAX,[EBX + 0x158]               ; 0046a9aa
    PUSH EAX                            ; 0046a9b0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046a9b1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046a9b6
    MOV dword ptr [EBX + 0xc1e4],0x0    ; 0046a9b9
    JMP 0x00469e25                      ; 0046a9c3
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH 0x30                           ; 0046a9c8
        ;   Label: LAB_0046a9c8
    LEA EAX,[EBX + 0x158]               ; 0046a9ca
    PUSH EAX                            ; 0046a9d0
    CALL core_motion.cpp_FUN_00524a40   ; 0046a9d1
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x4d8],EAX     ; 0046a9d6
    FLD float ptr [ESP + 0x4d8]         ; 0046a9dd
    FLDZ                                ; 0046a9e4
    ADD ESP,0x8                         ; 0046a9e6
    FCOMPP                              ; 0046a9e9
    FNSTSW AX                           ; 0046a9eb
    SAHF                                ; 0046a9ed
    JC 0x0046ab45                       ; 0046a9ee
        ;   XREF to: 0046ab45 (CONDITIONAL_JUMP)  ; LAB_0046ab45
    MOV dword ptr [EBX + 0x20000],EDI   ; 0046a9f4
    FLD float ptr [EBX + 0x200bc]       ; 0046a9fa
        ;   Label: LAB_0046a9fa
    FLDZ                                ; 0046aa00
    FCOMPP                              ; 0046aa02
    FNSTSW AX                           ; 0046aa04
    SAHF                                ; 0046aa06
    JNC 0x0046ab17                      ; 0046aa07
        ;   XREF to: 0046ab17 (CONDITIONAL_JUMP)  ; LAB_0046ab17
    FLD float ptr [EBP + 0x18]          ; 0046aa0d
    FCOMP float ptr [EBX + 0x200bc]     ; 0046aa10
    FNSTSW AX                           ; 0046aa16
    SAHF                                ; 0046aa18
    JNC 0x0046ab76                      ; 0046aa19
        ;   XREF to: 0046ab76 (CONDITIONAL_JUMP)  ; LAB_0046ab76
    FLD float ptr [EBP + 0x18]          ; 0046aa1f
    FLD ST0                             ; 0046aa22
    FDIV float ptr [EBX + 0x200bc]      ; 0046aa24
    FLD float ptr [EBX + 0x200bc]       ; 0046aa2a
    FSUBRP ST2,ST0                      ; 0046aa30
    FSTP float ptr [ESP + 0x4c]         ; 0046aa32
    FSTP float ptr [EBX + 0x200bc]      ; 0046aa36
    LEA EAX,[EBX + 0x200ac]             ; 0046aa3c
        ;   Label: LAB_0046aa3c
    FLD float ptr [EAX]                 ; 0046aa42
    FMUL float ptr [ESP + 0x4c]         ; 0046aa44
    FLD float ptr [EAX + 0x4]           ; 0046aa48
    FMUL float ptr [ESP + 0x4c]         ; 0046aa4b
    FLD float ptr [EAX + 0x8]           ; 0046aa4f
    FMUL float ptr [ESP + 0x4c]         ; 0046aa52
    FLD float ptr [ESP + 0x4c]          ; 0046aa56
    LEA EDI,[ESP + 0x118]               ; 0046aa5a
    LEA ESI,[ESP + 0x28c]               ; 0046aa61
    FLD1                                ; 0046aa68
    LEA EDX,[EBX + 0x20]                ; 0046aa6a
    FSUBRP                              ; 0046aa6d
    FXCH ST3                            ; 0046aa6f
    FSTP float ptr [ESP + 0x28c]        ; 0046aa71
    FXCH                                ; 0046aa78
    FSTP float ptr [ESP + 0x290]        ; 0046aa7a
    FSTP float ptr [ESP + 0x294]        ; 0046aa81
    MOVSD ES:EDI,ESI                    ; 0046aa88
    MOVSD ES:EDI,ESI                    ; 0046aa89
    MOVSD ES:EDI,ESI                    ; 0046aa8a
    FSTP float ptr [ESP + 0x488]        ; 0046aa8b
    FLD float ptr [EDX]                 ; 0046aa92
    FLD float ptr [EDX + 0x4]           ; 0046aa94
    FLD float ptr [EDX + 0x8]           ; 0046aa97
    FXCH ST2                            ; 0046aa9a
    FADD float ptr [ESP + 0x118]        ; 0046aa9c
    FXCH                                ; 0046aaa3
    FADD float ptr [ESP + 0x11c]        ; 0046aaa5
    FXCH ST2                            ; 0046aaac
    FADD float ptr [ESP + 0x120]        ; 0046aaae
    FXCH                                ; 0046aab5
    FSTP float ptr [EDX]                ; 0046aab7
    FXCH                                ; 0046aab9
    FSTP float ptr [EDX + 0x4]          ; 0046aabb
    FSTP float ptr [EDX + 0x8]          ; 0046aabe
    FLD float ptr [EAX]                 ; 0046aac1
    FMUL float ptr [ESP + 0x488]        ; 0046aac3
    FLD float ptr [EAX + 0x4]           ; 0046aaca
    FMUL float ptr [ESP + 0x488]        ; 0046aacd
    FLD float ptr [EAX + 0x8]           ; 0046aad4
    FMUL float ptr [ESP + 0x488]        ; 0046aad7
    FXCH ST2                            ; 0046aade
    FSTP float ptr [EAX]                ; 0046aae0
    FSTP float ptr [EAX + 0x4]          ; 0046aae2
    FSTP float ptr [EAX + 0x8]          ; 0046aae5
    FLD float ptr [EBX + 0x200b8]       ; 0046aae8
    FSUB float ptr [EBX + 0x34]         ; 0046aaee
    SUB ESP,0x4                         ; 0046aaf1
    FSTP float ptr [ESP]                ; 0046aaf4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0046aaf7
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 0046aafc
    FLD float ptr [ESP + 0x4d4]         ; 0046ab03
    ADD ESP,0x4                         ; 0046ab0a
    FMUL float ptr [ESP + 0x4c]         ; 0046ab0d
    FSTP float ptr [EBX + 0x2508]       ; 0046ab11
    PUSH 0x0                            ; 0046ab17
        ;   Label: LAB_0046ab17
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046ab19
    PUSH dword ptr [EBX + 0x2fec]       ; 0046ab1f
    PUSH EBX                            ; 0046ab25
    CALL dword ptr [EAX + 0x40]         ; 0046ab26
    MOV dword ptr [ESP + 0x4dc],EAX     ; 0046ab29
    MOV EAX,dword ptr [ESP + 0x4dc]     ; 0046ab30
    MOV dword ptr [EBX + 0x2504],EAX    ; 0046ab37
    ADD ESP,0xc                         ; 0046ab3d
    JMP 0x00469e25                      ; 0046ab40
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    MOV EAX,dword ptr [EBX + 0x20000]   ; 0046ab45
        ;   Label: LAB_0046ab45
    FLD float ptr [EAX + 0x24]          ; 0046ab4b
    FLD1                                ; 0046ab4e
    FADDP                               ; 0046ab50
    FLD float ptr [EBX + 0x24]          ; 0046ab52
    FCOMPP                              ; 0046ab55
    FNSTSW AX                           ; 0046ab57
    SAHF                                ; 0046ab59
    JNC 0x0046a9fa                      ; 0046ab5a
        ;   XREF to: 0046a9fa (CONDITIONAL_JUMP)  ; LAB_0046a9fa
    PUSH ESI                            ; 0046ab60
    PUSH EDI                            ; 0046ab61
    LEA EAX,[EBX + 0x158]               ; 0046ab62
    PUSH EAX                            ; 0046ab68
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046ab69
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046ab6e
    JMP 0x0046a9fa                      ; 0046ab71
        ;   XREF to: 0046a9fa (UNCONDITIONAL_JUMP)  ; LAB_0046a9fa
    MOV EAX,0x3f800000                  ; 0046ab76
        ;   Label: LAB_0046ab76
    MOV dword ptr [EBX + 0x200bc],0x0   ; 0046ab7b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0046ab85
    JMP 0x0046aa3c                      ; 0046ab89
        ;   XREF to: 0046aa3c (UNCONDITIONAL_JUMP)  ; LAB_0046aa3c
    MOV EAX,EDX                         ; 0046ab8e
        ;   Label: LAB_0046ab8e
    MOV ECX,dword ptr [EDX + 0x154]     ; 0046ab90
    LEA EDX,[ESP + 0x98]                ; 0046ab96
    PUSH EDX                            ; 0046ab9d
    PUSH EAX                            ; 0046ab9e
    CALL dword ptr [ECX + 0x98]         ; 0046ab9f
    ADD ESP,0x8                         ; 0046aba5
    CMP dword ptr [ESP + 0x98],0x0      ; 0046aba8
    JZ 0x0046af0b                       ; 0046abb0
        ;   XREF to: 0046af0b (CONDITIONAL_JUMP)  ; LAB_0046af0b
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0046abb6
    CMP EBX,EDX                         ; 0046abbd
    JNZ 0x0046af0b                      ; 0046abbf
        ;   XREF to: 0046af0b (CONDITIONAL_JUMP)  ; LAB_0046af0b
    MOV ESI,dword ptr [EDX + 0x1ff88]   ; 0046abc5
    LEA EDI,[ESP + 0x2ec]               ; 0046abcb
    LEA ESI,[ESI + 0x30]                ; 0046abd2
    MOVSD ES:EDI,ESI                    ; 0046abd5
    MOVSD ES:EDI,ESI                    ; 0046abd6
    MOVSD ES:EDI,ESI                    ; 0046abd7
    FLD float ptr [EDX + 0xc200]        ; 0046abd8
    FMUL float ptr [0x005d9dac]         ; 0046abde | DAT_005d9dac
    FMUL double ptr [0x005d9dbc]        ; 0046abe4 | DAT_005d9dbc
    FMUL float ptr [EBP + 0x18]         ; 0046abea
    FST float ptr [ESP + 0x4ac]         ; 0046abed
    FCOMP float ptr [ESP + 0xac]        ; 0046abf4
    FNSTSW AX                           ; 0046abfb
    SAHF                                ; 0046abfd
    JNC 0x0046ac0e                      ; 0046abfe
        ;   XREF to: 0046ac0e (CONDITIONAL_JUMP)  ; LAB_0046ac0e
    MOV EAX,dword ptr [ESP + 0xac]      ; 0046ac00
    MOV dword ptr [ESP + 0x4ac],EAX     ; 0046ac07
    FLD float ptr [ESP + 0x4ac]         ; 0046ac0e
        ;   Label: LAB_0046ac0e
    FCOMP float ptr [ESP + 0xa8]        ; 0046ac15
    FNSTSW AX                           ; 0046ac1c
    SAHF                                ; 0046ac1e
    JBE 0x0046ac2f                      ; 0046ac1f
        ;   XREF to: 0046ac2f (CONDITIONAL_JUMP)  ; LAB_0046ac2f
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0046ac21
    MOV dword ptr [ESP + 0x4ac],EAX     ; 0046ac28
    FLD float ptr [ESP + 0x2f0]         ; 0046ac2f
        ;   Label: LAB_0046ac2f
    FADD float ptr [ESP + 0x4ac]        ; 0046ac36
    SUB ESP,0x4                         ; 0046ac3d
    FSTP float ptr [ESP]                ; 0046ac40
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0046ac43
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 0046ac48
    FLD float ptr [ESP + 0x4d4]         ; 0046ac4f
    ADD ESP,0x4                         ; 0046ac56
    FSTP float ptr [ESP + 0x2f0]        ; 0046ac59
    FLD float ptr [EBX + 0xc204]        ; 0046ac60
    FMUL float ptr [0x005d9dac]         ; 0046ac66 | DAT_005d9dac
    FMUL double ptr [0x005d9dbc]        ; 0046ac6c | DAT_005d9dbc
    FMUL float ptr [EBP + 0x18]         ; 0046ac72
    FST float ptr [ESP + 0x4a8]         ; 0046ac75
    FCOMP float ptr [ESP + 0xb4]        ; 0046ac7c
    FNSTSW AX                           ; 0046ac83
    SAHF                                ; 0046ac85
    JNC 0x0046ac96                      ; 0046ac86
        ;   XREF to: 0046ac96 (CONDITIONAL_JUMP)  ; LAB_0046ac96
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0046ac88
    MOV dword ptr [ESP + 0x4a8],EAX     ; 0046ac8f
    FLD float ptr [ESP + 0x4a8]         ; 0046ac96
        ;   Label: LAB_0046ac96
    FCOMP float ptr [ESP + 0xb0]        ; 0046ac9d
    FNSTSW AX                           ; 0046aca4
    SAHF                                ; 0046aca6
    JBE 0x0046acb7                      ; 0046aca7
        ;   XREF to: 0046acb7 (CONDITIONAL_JUMP)  ; LAB_0046acb7
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0046aca9
    MOV dword ptr [ESP + 0x4a8],EAX     ; 0046acb0
    FLD float ptr [ESP + 0x2ec]         ; 0046acb7
        ;   Label: LAB_0046acb7
    FADD float ptr [ESP + 0x4a8]        ; 0046acbe
    SUB ESP,0x4                         ; 0046acc5
    FSTP float ptr [ESP]                ; 0046acc8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0046accb
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 0046acd0
    FLD float ptr [ESP + 0x4d4]         ; 0046acd7
    ADD ESP,0x4                         ; 0046acde
    LEA EDX,[EBX + 0xc1d8]              ; 0046ace1
    FSTP float ptr [ESP + 0x2ec]        ; 0046ace7
    PUSH EDX                            ; 0046acee
    LEA EDX,[ESP + 0x2f0]               ; 0046acef
    MOV EAX,dword ptr [EBX + 0x1ff88]   ; 0046acf6
    PUSH EDX                            ; 0046acfc
    MOV ECX,dword ptr [EAX + 0x154]     ; 0046acfd
    PUSH EAX                            ; 0046ad03
    LEA ESI,[EBX + 0x158]               ; 0046ad04
    CALL dword ptr [ECX + 0xa0]         ; 0046ad0a
    ADD ESP,0xc                         ; 0046ad10
    TEST EAX,EAX                        ; 0046ad13
    JZ 0x0046af3a                       ; 0046ad15
        ;   XREF to: 0046af3a (CONDITIONAL_JUMP)  ; LAB_0046af3a
    MOV EAX,dword ptr [EBX + 0x1ff88]   ; 0046ad1b
    FLD float ptr [EAX + 0x34]          ; 0046ad21
    FSUB float ptr [EBX + 0x34]         ; 0046ad24
    SUB ESP,0x4                         ; 0046ad27
    FSTP float ptr [ESP]                ; 0046ad2a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0046ad2d
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 0046ad32
    FLD float ptr [ESP + 0x4d4]         ; 0046ad39
    ADD ESP,0x4                         ; 0046ad40
    FST float ptr [ESP + 0x50]          ; 0046ad43
    FST double ptr [ESP + 0x38]         ; 0046ad47
    FCOMP double ptr [0x005d9d84]       ; 0046ad4b | DAT_005d9d84
    FNSTSW AX                           ; 0046ad51
    SAHF                                ; 0046ad53
    JNC 0x0046af19                      ; 0046ad54
        ;   XREF to: 0046af19 (CONDITIONAL_JUMP)  ; LAB_0046af19
    PUSH 0x1                            ; 0046ad5a
    PUSH 0x6                            ; 0046ad5c
    PUSH ESI                            ; 0046ad5e
        ;   Label: LAB_0046ad5e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046ad5f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046ad64
    LEA EDI,[ESP + 0x1a8]               ; 0046ad67
    LEA ESI,[EBX + 0x30]                ; 0046ad6e
    FLD float ptr [ESP + 0x50]          ; 0046ad71
    MOVSD ES:EDI,ESI                    ; 0046ad75
    MOVSD ES:EDI,ESI                    ; 0046ad76
    MOVSD ES:EDI,ESI                    ; 0046ad77
    LEA EAX,[ESP + 0x1a8]               ; 0046ad78
    FMUL float ptr [EBX + 0x20014]      ; 0046ad7f
    PUSH EAX                            ; 0046ad85
    FADD float ptr [ESP + 0x1b0]        ; 0046ad86
    PUSH EBX                            ; 0046ad8d
    FSTP float ptr [ESP + 0x1b4]        ; 0046ad8e
    CALL core_charactr.cpp_FUN_00433d50 ; 0046ad95
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433d50()
    ADD ESP,0x8                         ; 0046ad9a
    FLD float ptr [ESP + 0xa0]          ; 0046ad9d
    FADD double ptr [0x005d9dc4]        ; 0046ada4 | DAT_005d9dc4
    XOR ECX,ECX                         ; 0046adaa
    FSTP float ptr [ESP + 0x4d0]        ; 0046adac
    MOV EAX,dword ptr [ESP + 0x4d0]     ; 0046adb3
    MOV dword ptr [ESP + 0x454],ECX     ; 0046adba
    MOV dword ptr [ESP + 0x45c],EAX     ; 0046adc1
    LEA EAX,[ESP + 0x454]               ; 0046adc8
    MOV dword ptr [ESP + 0x458],ECX     ; 0046adcf
    PUSH EAX                            ; 0046add6
    MOV EDI,dword ptr [EBX + 0x1ff88]   ; 0046add7
    PUSH EDI                            ; 0046addd
    LEA ESI,[ESP + 0x270]               ; 0046adde
    CALL core_actor.cpp_FUN_00408b40    ; 0046ade5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x468]               ; 0046adea
    LEA ESI,[ESP + 0x270]               ; 0046adf1
    ADD ESP,0x8                         ; 0046adf8
    LEA EAX,[EBX + 0x20]                ; 0046adfb
    MOVSD ES:EDI,ESI                    ; 0046adfe
    MOVSD ES:EDI,ESI                    ; 0046adff
    MOVSD ES:EDI,ESI                    ; 0046ae00
    LEA EDX,[EBX + 0x20014]             ; 0046ae01
    FLD float ptr [ESP + 0x460]         ; 0046ae07
    FLD float ptr [ESP + 0x464]         ; 0046ae0e
    FLD float ptr [ESP + 0x468]         ; 0046ae15
    LEA EDI,[ESP + 0x1e4]               ; 0046ae1c
    LEA ESI,[ESP + 0x1d8]               ; 0046ae23
    MOV dword ptr [ESP + 0x474],EDX     ; 0046ae2a
    FXCH ST2                            ; 0046ae31
    FSUB float ptr [EAX]                ; 0046ae33
    FXCH                                ; 0046ae35
    FSUB float ptr [EAX + 0x4]          ; 0046ae37
    FXCH ST2                            ; 0046ae3a
    FSUB float ptr [EAX + 0x8]          ; 0046ae3c
    FXCH                                ; 0046ae3f
    FSTP float ptr [ESP + 0x1d8]        ; 0046ae41
    FXCH                                ; 0046ae48
    FSTP float ptr [ESP + 0x1dc]        ; 0046ae4a
    LEA EAX,[ESP + 0x1e4]               ; 0046ae51
    FSTP float ptr [ESP + 0x1e0]        ; 0046ae58
    PUSH EAX                            ; 0046ae5f
    MOVSD ES:EDI,ESI                    ; 0046ae60
    MOVSD ES:EDI,ESI                    ; 0046ae61
    MOVSD ES:EDI,ESI                    ; 0046ae62
    PUSH EBX                            ; 0046ae63
    LEA ESI,[ESP + 0x2a0]               ; 0046ae64
    LEA EDI,[ESP + 0x348]               ; 0046ae6b
    CALL core_actor.cpp_FUN_00408b00    ; 0046ae72
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x2a0]               ; 0046ae77
    ADD ESP,0x8                         ; 0046ae7e
    MOVSD ES:EDI,ESI                    ; 0046ae81
    MOVSD ES:EDI,ESI                    ; 0046ae82
    MOVSD ES:EDI,ESI                    ; 0046ae83
    MOV EAX,dword ptr [ESP + 0x474]     ; 0046ae84
    FLD float ptr [ESP + 0x340]         ; 0046ae8b
    FMUL float ptr [EAX]                ; 0046ae92
    FLD float ptr [ESP + 0x344]         ; 0046ae94
    FMUL float ptr [EAX]                ; 0046ae9b
    FLD float ptr [ESP + 0x348]         ; 0046ae9d
    FMUL float ptr [EAX]                ; 0046aea4
    LEA EDX,[EBX + 0x249c]              ; 0046aea6
    LEA EDI,[ESP + 0x1f0]               ; 0046aeac
    LEA ESI,[ESP + 0x274]               ; 0046aeb3
    FXCH ST2                            ; 0046aeba
    FSTP float ptr [ESP + 0x274]        ; 0046aebc
    FSTP float ptr [ESP + 0x278]        ; 0046aec3
    FSTP float ptr [ESP + 0x27c]        ; 0046aeca
    LEA EAX,[ESP + 0x1f0]               ; 0046aed1
    MOVSD ES:EDI,ESI                    ; 0046aed8
    MOVSD ES:EDI,ESI                    ; 0046aed9
    MOVSD ES:EDI,ESI                    ; 0046aeda
    CMP EDX,EAX                         ; 0046aedb
    JZ 0x0046aefc                       ; 0046aedd
        ;   XREF to: 0046aefc (CONDITIONAL_JUMP)  ; LAB_0046aefc
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0046aedf
    MOV dword ptr [EDX],EAX             ; 0046aee6
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 0046aee8
    MOV dword ptr [EDX + 0x4],EAX       ; 0046aeef
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 0046aef2
    MOV dword ptr [EDX + 0x8],EAX       ; 0046aef9
    MOV dword ptr [EBX + 0x24a0],0x0    ; 0046aefc
        ;   Label: LAB_0046aefc
    JMP 0x00469e25                      ; 0046af06
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH EBX                            ; 0046af0b
        ;   Label: LAB_0046af0b
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80 ; 0046af0c
        ;   XREF to: 004ebe80 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80(CHero * this_ptr)
    ADD ESP,0x4                         ; 0046af11
    JMP 0x00469e25                      ; 0046af14
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    FLD double ptr [ESP + 0x38]         ; 0046af19
        ;   Label: LAB_0046af19
    FCOMP double ptr [0x005d9d8c]       ; 0046af1d | DAT_005d9d8c
    FNSTSW AX                           ; 0046af23
    SAHF                                ; 0046af25
    JBE 0x0046af31                      ; 0046af26
        ;   XREF to: 0046af31 (CONDITIONAL_JUMP)  ; LAB_0046af31
    PUSH 0x1                            ; 0046af28
    PUSH 0x5                            ; 0046af2a
    JMP 0x0046ad5e                      ; 0046af2c
        ;   XREF to: 0046ad5e (UNCONDITIONAL_JUMP)  ; LAB_0046ad5e
    PUSH 0x1                            ; 0046af31
        ;   Label: LAB_0046af31
    PUSH 0x0                            ; 0046af33
    JMP 0x0046ad5e                      ; 0046af35
        ;   XREF to: 0046ad5e (UNCONDITIONAL_JUMP)  ; LAB_0046ad5e
    PUSH 0x1                            ; 0046af3a
        ;   Label: LAB_0046af3a
    PUSH EAX                            ; 0046af3c
    PUSH ESI                            ; 0046af3d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046af3e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046af43
    PUSH EBX                            ; 0046af46
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80 ; 0046af47
        ;   XREF to: 004ebe80 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004ebe80(CHero * this_ptr)
    ADD ESP,0x4                         ; 0046af4c
    JMP 0x00469e25                      ; 0046af4f
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    MOV dword ptr [EBX + 0x26fc],EAX    ; 0046af54
        ;   Label: LAB_0046af54
    PUSH 0x1                            ; 0046af5a
        ;   Label: LAB_0046af5a
    PUSH 0x0                            ; 0046af5c
    LEA EAX,[EBX + 0x158]               ; 0046af5e
    PUSH EAX                            ; 0046af64
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046af65
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046af6a
    JMP 0x00469e25                      ; 0046af6d
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH EBX                            ; 0046af72
        ;   Label: LAB_0046af72
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046af73
    CALL dword ptr [EAX + 0xf0]         ; 0046af79
    ADD ESP,0x4                         ; 0046af7f
    JMP 0x00469e25                      ; 0046af82
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    MOV ESI,dword ptr [EBX + 0x1ff7c]   ; 0046af87
        ;   Label: LAB_0046af87
    TEST ESI,ESI                        ; 0046af8d
    JZ 0x0046b2cd                       ; 0046af8f
        ;   XREF to: 0046b2cd (CONDITIONAL_JUMP)  ; LAB_0046b2cd
    MOV ECX,dword ptr [EBX + 0xc1e4]    ; 0046af95
    MOV dword ptr [ESP + 0x490],EDI     ; 0046af9b
    TEST ECX,ECX                        ; 0046afa2
    JNZ 0x0046afd5                      ; 0046afa4
        ;   XREF to: 0046afd5 (CONDITIONAL_JUMP)  ; LAB_0046afd5
    MOV EAX,dword ptr [ESP + 0x490]     ; 0046afa6
        ;   Label: LAB_0046afa6
    TEST EAX,EAX                        ; 0046afad
    JNZ 0x00469e25                      ; 0046afaf
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH 0x1                            ; 0046afb5
    PUSH EAX                            ; 0046afb7
    LEA EAX,[EBX + 0x158]               ; 0046afb8
    PUSH EAX                            ; 0046afbe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046afbf
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046afc4
    PUSH EBX                            ; 0046afc7
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0 ; 0046afc8
        ;   XREF to: 004ebbe0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0046afcd
    JMP 0x00469e25                      ; 0046afd0
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH ESI                            ; 0046afd5
        ;   Label: LAB_0046afd5
    MOV EDX,dword ptr [ESI + 0x154]     ; 0046afd6
    LEA ESI,[ESP + 0xbc]                ; 0046afdc
    LEA EDI,[ESP + 0xd4]                ; 0046afe3
    CALL dword ptr [EDX + 0x1c]         ; 0046afea
    MOV ECX,0x6                         ; 0046afed
    LEA ESI,[ESP + 0xbc]                ; 0046aff2
    ADD ESP,0x4                         ; 0046aff9
    MOVSD.REP ES:EDI,ESI                ; 0046affc
    FLD float ptr [ESP + 0xd0]          ; 0046affe
    FLD float ptr [ESP + 0xd4]          ; 0046b005
    FLD float ptr [ESP + 0xd8]          ; 0046b00c
    LEA EDI,[ESP + 0x304]               ; 0046b013
    LEA ESI,[ESP + 0x16c]               ; 0046b01a
    FXCH ST2                            ; 0046b021
    FADD float ptr [ESP + 0xdc]         ; 0046b023
    FXCH                                ; 0046b02a
    FADD float ptr [ESP + 0xe0]         ; 0046b02c
    FXCH ST2                            ; 0046b033
    FADD float ptr [ESP + 0xe4]         ; 0046b035
    FXCH                                ; 0046b03c
    FSTP float ptr [ESP + 0x16c]        ; 0046b03e
    FXCH                                ; 0046b045
    FSTP float ptr [ESP + 0x170]        ; 0046b047
    FSTP float ptr [ESP + 0x174]        ; 0046b04e
    MOVSD ES:EDI,ESI                    ; 0046b055
    MOVSD ES:EDI,ESI                    ; 0046b056
    MOVSD ES:EDI,ESI                    ; 0046b057
    FLD float ptr [ESP + 0x304]         ; 0046b058
    FMUL float ptr [0x005d9d74]         ; 0046b05f | DAT_005d9d74
    FLD float ptr [ESP + 0x308]         ; 0046b065
    FMUL float ptr [0x005d9d74]         ; 0046b06c | DAT_005d9d74
    FLD float ptr [ESP + 0x30c]         ; 0046b072
    FMUL float ptr [0x005d9d74]         ; 0046b079 | DAT_005d9d74
    LEA EAX,[ESP + 0x3b8]               ; 0046b07f
    LEA EDI,[ESP + 0x3b8]               ; 0046b086
    LEA ESI,[ESP + 0x448]               ; 0046b08d
    FXCH ST2                            ; 0046b094
    FSTP float ptr [ESP + 0x448]        ; 0046b096
    FSTP float ptr [ESP + 0x44c]        ; 0046b09d
    FSTP float ptr [ESP + 0x450]        ; 0046b0a4
    MOVSD ES:EDI,ESI                    ; 0046b0ab
    MOVSD ES:EDI,ESI                    ; 0046b0ac
    MOVSD ES:EDI,ESI                    ; 0046b0ad
    PUSH EAX                            ; 0046b0ae
    MOV ESI,dword ptr [EBX + 0x1ff7c]   ; 0046b0af
    PUSH ESI                            ; 0046b0b5
    LEA ESI,[ESP + 0x42c]               ; 0046b0b6
    LEA EDI,[ESP + 0x3b4]               ; 0046b0bd
    CALL core_actor.cpp_FUN_00408b40    ; 0046b0c4
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0046b0c9
    LEA EAX,[ESP + 0x3ac]               ; 0046b0cc
    LEA ESI,[ESP + 0x424]               ; 0046b0d3
    PUSH EAX                            ; 0046b0da
    MOVSD ES:EDI,ESI                    ; 0046b0db
    MOVSD ES:EDI,ESI                    ; 0046b0dc
    MOVSD ES:EDI,ESI                    ; 0046b0dd
    PUSH EBX                            ; 0046b0de
    LEA ESI,[ESP + 0x39c]               ; 0046b0df
    LEA EDI,[ESP + 0x3f0]               ; 0046b0e6
    CALL core_actor.cpp_FUN_00408bb0    ; 0046b0ed
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x39c]               ; 0046b0f2
    ADD ESP,0x8                         ; 0046b0f9
    LEA EAX,[ESP + 0x3e8]               ; 0046b0fc
    MOVSD ES:EDI,ESI                    ; 0046b103
    MOVSD ES:EDI,ESI                    ; 0046b104
    MOVSD ES:EDI,ESI                    ; 0046b105
    PUSH EAX                            ; 0046b106
    LEA ESI,[ESP + 0x440]               ; 0046b107
    LEA EDI,[ESP + 0x248]               ; 0046b10e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0046b115
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x440]               ; 0046b11a
    ADD ESP,0x4                         ; 0046b121
    MOVSD ES:EDI,ESI                    ; 0046b124
    MOVSD ES:EDI,ESI                    ; 0046b125
    MOVSD ES:EDI,ESI                    ; 0046b126
    PUSH dword ptr [ESP + 0x248]        ; 0046b127
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0046b12e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0x4d4],EAX     ; 0046b133
    LEA EDI,[ESP + 0x20c]               ; 0046b13a
    FLD float ptr [ESP + 0x4d4]         ; 0046b141
    ADD ESP,0x4                         ; 0046b148
    LEA ESI,[ESP + 0x2e0]               ; 0046b14b
    FLD float ptr [ESP + 0xdc]          ; 0046b152
    FLD float ptr [ESP + 0xe0]          ; 0046b159
    FLD float ptr [ESP + 0xe4]          ; 0046b160
    FXCH ST2                            ; 0046b167
    FSUB float ptr [ESP + 0xd0]         ; 0046b169
    FXCH                                ; 0046b170
    FSUB float ptr [ESP + 0xd4]         ; 0046b172
    FXCH ST2                            ; 0046b179
    FSUB float ptr [ESP + 0xd8]         ; 0046b17b
    FXCH                                ; 0046b182
    FSTP float ptr [ESP + 0x2e0]        ; 0046b184
    FXCH                                ; 0046b18b
    FSTP float ptr [ESP + 0x2e4]        ; 0046b18d
    FSTP float ptr [ESP + 0x2e8]        ; 0046b194
    MOVSD ES:EDI,ESI                    ; 0046b19b
    MOVSD ES:EDI,ESI                    ; 0046b19c
    MOVSD ES:EDI,ESI                    ; 0046b19d
    FLD float ptr [ESP + 0x208]         ; 0046b19e
    FMUL float ptr [0x005d9d74]         ; 0046b1a5 | DAT_005d9d74
    FLD float ptr [ESP + 0x20c]         ; 0046b1ab
    FMUL float ptr [0x005d9d74]         ; 0046b1b2 | DAT_005d9d74
    FLD float ptr [ESP + 0x210]         ; 0046b1b8
    FMUL float ptr [0x005d9d74]         ; 0046b1bf | DAT_005d9d74
    LEA EDI,[ESP + 0x310]               ; 0046b1c5
    LEA ESI,[ESP + 0x238]               ; 0046b1cc
    FXCH ST2                            ; 0046b1d3
    FSTP float ptr [ESP + 0x238]        ; 0046b1d5
    FSTP float ptr [ESP + 0x23c]        ; 0046b1dc
    FSTP float ptr [ESP + 0x240]        ; 0046b1e3
    MOVSD ES:EDI,ESI                    ; 0046b1ea
    MOVSD ES:EDI,ESI                    ; 0046b1eb
    MOVSD ES:EDI,ESI                    ; 0046b1ec
    FLD float ptr [ESP + 0x310]         ; 0046b1ed
    FMUL ST0                            ; 0046b1f4
    FLD float ptr [ESP + 0x318]         ; 0046b1f6
    FMUL ST0                            ; 0046b1fd
    FADDP                               ; 0046b1ff
    FSQRT                               ; 0046b201
    FXCH                                ; 0046b203
    FSTP float ptr [ESP + 0x58]         ; 0046b205
    XOR EDI,EDI                         ; 0046b209
    FSUBR float ptr [ESP + 0x3f0]       ; 0046b20b
    MOV dword ptr [ESP + 0x314],EDI     ; 0046b212
    FCOMP double ptr [0x005d9d94]       ; 0046b219 | DAT_005d9d94
    FNSTSW AX                           ; 0046b21f
    SAHF                                ; 0046b221
    JNC 0x0046afa6                      ; 0046b222
        ;   XREF to: 0046afa6 (CONDITIONAL_JUMP)  ; LAB_0046afa6
    FLD float ptr [ESP + 0x3ec]         ; 0046b228
    FLD1                                ; 0046b22f
    FXCH                                ; 0046b231
    FSTP double ptr [ESP + 0x18]        ; 0046b233
    FCOMP double ptr [ESP + 0x18]       ; 0046b237
    FNSTSW AX                           ; 0046b23b
    SAHF                                ; 0046b23d
    JNC 0x0046afa6                      ; 0046b23e
        ;   XREF to: 0046afa6 (CONDITIONAL_JUMP)  ; LAB_0046afa6
    FLD double ptr [ESP + 0x18]         ; 0046b244
    FCOMP double ptr [0x005d9d9c]       ; 0046b248 | DAT_005d9d9c
    FNSTSW AX                           ; 0046b24e
    SAHF                                ; 0046b250
    JNC 0x0046afa6                      ; 0046b251
        ;   XREF to: 0046afa6 (CONDITIONAL_JUMP)  ; LAB_0046afa6
    FLD float ptr [ESP + 0x58]          ; 0046b257
    FABS                                ; 0046b25b
    FCOMP double ptr [0x005d9da4]       ; 0046b25d | DAT_005d9da4
    FNSTSW AX                           ; 0046b263
    SAHF                                ; 0046b265
    JNC 0x0046afa6                      ; 0046b266
        ;   XREF to: 0046afa6 (CONDITIONAL_JUMP)  ; LAB_0046afa6
    FLD float ptr [EBP + 0x18]          ; 0046b26c
    FMUL float ptr [0x005d9dac]         ; 0046b26f | DAT_005d9dac
    FST float ptr [ESP + 0x4a0]         ; 0046b275
    FCHS                                ; 0046b27c
    FCOMP float ptr [ESP + 0x58]        ; 0046b27e
    FNSTSW AX                           ; 0046b282
    SAHF                                ; 0046b284
    JA 0x0046b2be                       ; 0046b285
        ;   XREF to: 0046b2be (CONDITIONAL_JUMP)  ; LAB_0046b2be
    FLD float ptr [ESP + 0x58]          ; 0046b287
        ;   Label: LAB_0046b287
    FCOMP float ptr [ESP + 0x4a0]       ; 0046b28b
    FNSTSW AX                           ; 0046b292
    SAHF                                ; 0046b294
    JBE 0x0046b2a2                      ; 0046b295
        ;   XREF to: 0046b2a2 (CONDITIONAL_JUMP)  ; LAB_0046b2a2
    MOV EAX,dword ptr [ESP + 0x4a0]     ; 0046b297
    MOV dword ptr [ESP + 0x58],EAX      ; 0046b29e
    LEA EAX,[EBX + 0x30]                ; 0046b2a2
        ;   Label: LAB_0046b2a2
    FLD float ptr [EBX + 0x34]          ; 0046b2a5
    PUSH EAX                            ; 0046b2a8
    FADD float ptr [ESP + 0x5c]         ; 0046b2a9
    PUSH EBX                            ; 0046b2ad
    FSTP float ptr [EBX + 0x34]         ; 0046b2ae
    CALL core_charactr.cpp_FUN_00433d50 ; 0046b2b1
        ;   XREF to: 00433d50 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433d50()
    ADD ESP,0x8                         ; 0046b2b6
    JMP 0x00469e25                      ; 0046b2b9
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    FLD float ptr [ESP + 0x4a0]         ; 0046b2be
        ;   Label: LAB_0046b2be
    FCHS                                ; 0046b2c5
    FSTP float ptr [ESP + 0x58]         ; 0046b2c7
    JMP 0x0046b287                      ; 0046b2cb
        ;   XREF to: 0046b287 (UNCONDITIONAL_JUMP)  ; LAB_0046b287
    PUSH dword ptr [EBP + 0x18]         ; 0046b2cd
        ;   Label: LAB_0046b2cd
    PUSH EBX                            ; 0046b2d0
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0046b2d1
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    MOV EDX,EAX                         ; 0046b2d6
    ADD ESP,0x8                         ; 0046b2d8
    LEA EAX,[EBX + 0x158]               ; 0046b2db
    TEST EDX,EDX                        ; 0046b2e1
    JZ 0x0046b365                       ; 0046b2e3
        ;   XREF to: 0046b365 (CONDITIONAL_JUMP)  ; LAB_0046b365
    MOV EDX,dword ptr [EBX + 0x273c]    ; 0046b2e9
    CMP EDX,0x2                         ; 0046b2ef
    JNC 0x0046b352                      ; 0046b2f2
        ;   XREF to: 0046b352 (CONDITIONAL_JUMP)  ; LAB_0046b352
    CMP EDX,0x1                         ; 0046b2f4
    JNZ 0x0046b346                      ; 0046b2f7
        ;   XREF to: 0046b346 (CONDITIONAL_JUMP)  ; LAB_0046b346
    PUSH EDX                            ; 0046b2f9
    PUSH EDX                            ; 0046b2fa
    PUSH EAX                            ; 0046b2fb
        ;   Label: LAB_0046b2fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046b2fc
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046b301
        ;   Label: LAB_0046b301
    LEA EAX,[EBX + 0x249c]              ; 0046b304
    MOV dword ptr [EAX + 0x8],0x0       ; 0046b30a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046b311
    MOV dword ptr [EAX + 0x4],EDX       ; 0046b314
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046b317
    MOV dword ptr [EAX],EDX             ; 0046b31a
    JMP 0x00469e25                      ; 0046b31c
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH 0x1                            ; 0046b321
        ;   Label: LAB_0046b321
    PUSH EDI                            ; 0046b323
    PUSH EAX                            ; 0046b324
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046b325
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046b32a
    PUSH EBX                            ; 0046b32d
    PUSH 0x5d9ca0                       ; 0046b32e | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x00611100]                ; 0046b333 | g_CConsolePtr
    PUSH EAX                            ; 0046b338 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0046b339
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x0046b301                      ; 0046b33e
        ;   XREF to: 0046b301 (UNCONDITIONAL_JUMP)  ; LAB_0046b301
    PUSH 0x1                            ; 0046b340
        ;   Label: LAB_0046b340
    PUSH 0x4                            ; 0046b342
    JMP 0x0046b2fb                      ; 0046b344
        ;   XREF to: 0046b2fb (UNCONDITIONAL_JUMP)  ; LAB_0046b2fb
    PUSH 0x1                            ; 0046b346
        ;   Label: LAB_0046b346
    PUSH 0x0                            ; 0046b348
    LEA EAX,[EBX + 0x158]               ; 0046b34a
    JMP 0x0046b2fb                      ; 0046b350
        ;   XREF to: 0046b2fb (UNCONDITIONAL_JUMP)  ; LAB_0046b2fb
    JBE 0x0046b340                      ; 0046b352
        ;   XREF to: 0046b340 (CONDITIONAL_JUMP)  ; LAB_0046b340
        ;   Label: LAB_0046b352
    CMP EDX,0x3                         ; 0046b354
    JZ 0x0046b321                       ; 0046b357
        ;   XREF to: 0046b321 (CONDITIONAL_JUMP)  ; LAB_0046b321
    PUSH 0x1                            ; 0046b359
    PUSH 0x0                            ; 0046b35b
    LEA EAX,[EBX + 0x158]               ; 0046b35d
    JMP 0x0046b2fb                      ; 0046b363
        ;   XREF to: 0046b2fb (UNCONDITIONAL_JUMP)  ; LAB_0046b2fb
    CMP dword ptr [ESP + 0x4b8],0x0     ; 0046b365
        ;   Label: LAB_0046b365
    JZ 0x00469e25                       ; 0046b36d
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    PUSH EAX                            ; 0046b373
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0046b374
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0046b379
    ADD ESP,0x4                         ; 0046b37c
    CMP EAX,0x9                         ; 0046b37f
    JNC 0x0046b642                      ; 0046b382
        ;   XREF to: 0046b642 (CONDITIONAL_JUMP)  ; LAB_0046b642
    CMP EAX,0x4                         ; 0046b388
    JNC 0x0046b39a                      ; 0046b38b
        ;   XREF to: 0046b39a (CONDITIONAL_JUMP)  ; LAB_0046b39a
    CMP EAX,0x1                         ; 0046b38d
    JNC 0x0046b39a                      ; 0046b390
        ;   XREF to: 0046b39a (CONDITIONAL_JUMP)  ; LAB_0046b39a
    TEST EAX,EAX                        ; 0046b392
    JNZ 0x00469e25                      ; 0046b394
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    CMP dword ptr [EBX + 0x2500],0x0    ; 0046b39a
        ;   Label: LAB_0046b39a
    JZ 0x0046b469                       ; 0046b3a1
        ;   XREF to: 0046b469 (CONDITIONAL_JUMP)  ; LAB_0046b469
    LEA EAX,[EBX + 0x158]               ; 0046b3a7
    PUSH EAX                            ; 0046b3ad
    XOR ESI,ESI                         ; 0046b3ae
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0046b3b0
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EDX,dword ptr [EAX + 0x24]      ; 0046b3b5
    MOV EAX,dword ptr [EBX + 0xc1d8]    ; 0046b3b8
    ADD ESP,0x4                         ; 0046b3be
    TEST EAX,EAX                        ; 0046b3c1
    JZ 0x0046b548                       ; 0046b3c3
        ;   XREF to: 0046b548 (CONDITIONAL_JUMP)  ; LAB_0046b548
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 0046b3c9
    JZ 0x0046b506                       ; 0046b3d0
        ;   XREF to: 0046b506 (CONDITIONAL_JUMP)  ; LAB_0046b506
    FLD float ptr [EBX + 0xc1fc]        ; 0046b3d6
    FST double ptr [ESP + 0x8]          ; 0046b3dc
    FCOMP double ptr [0x005d9d84]       ; 0046b3e0 | DAT_005d9d84
    FNSTSW AX                           ; 0046b3e6
    SAHF                                ; 0046b3e8
    JNC 0x0046b4e3                      ; 0046b3e9
        ;   XREF to: 0046b4e3 (CONDITIONAL_JUMP)  ; LAB_0046b4e3
    MOV ESI,0x9                         ; 0046b3ef
    CMP dword ptr [EBX + 0xc1f8],0x0    ; 0046b3f4
        ;   Label: LAB_0046b3f4
    JZ 0x0046b41a                       ; 0046b3fb
        ;   XREF to: 0046b41a (CONDITIONAL_JUMP)  ; LAB_0046b41a
    CMP dword ptr [EBX + 0x2c98],0xe    ; 0046b3fd
    JZ 0x0046b41a                       ; 0046b404
        ;   XREF to: 0046b41a (CONDITIONAL_JUMP)  ; LAB_0046b41a
    MOV dword ptr [EBX + 0x200dc],0x0   ; 0046b406
    MOV dword ptr [EBX + 0x200d8],0x1   ; 0046b410
    CMP dword ptr [EBX + 0x200d8],0x0   ; 0046b41a
        ;   Label: LAB_0046b41a
    JNZ 0x0046b441                      ; 0046b421
        ;   XREF to: 0046b441 (CONDITIONAL_JUMP)  ; LAB_0046b441
    FLD float ptr [EBX + 0xc200]        ; 0046b423
    FMUL float ptr [EBX + 0x2528]       ; 0046b429
    FST float ptr [EBX + 0x2508]        ; 0046b42f
    FSUBR float ptr [EBX + 0x20024]     ; 0046b435
    FSTP float ptr [EBX + 0x20024]      ; 0046b43b
    CMP ESI,EDX                         ; 0046b441
        ;   Label: LAB_0046b441
    JZ 0x0046b457                       ; 0046b443
        ;   XREF to: 0046b457 (CONDITIONAL_JUMP)  ; LAB_0046b457
    PUSH 0x1                            ; 0046b445
    PUSH ESI                            ; 0046b447
    LEA EAX,[EBX + 0x158]               ; 0046b448
    PUSH EAX                            ; 0046b44e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046b44f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046b454
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 0046b457
        ;   Label: LAB_0046b457
    JZ 0x0046b469                       ; 0046b45e
        ;   XREF to: 0046b469 (CONDITIONAL_JUMP)  ; LAB_0046b469
    PUSH EBX                            ; 0046b460
    CALL core_hero.cpp_CHero_tryUseSelectedItem_FUN_004ec020 ; 0046b461
        ;   XREF to: 004ec020 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_tryUseSelectedItem_FUN_004ec020(CHero * this_ptr)
    ADD ESP,0x4                         ; 0046b466
    XOR EDI,EDI                         ; 0046b469
        ;   Label: LAB_0046b469
    MOV dword ptr [ESP + 0x47c],EDI     ; 0046b46b
    JMP 0x00469e25                      ; 0046b472
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    LEA EAX,[EBX + 0x158]               ; 0046b477
        ;   Label: LAB_0046b477
    PUSH EAX                            ; 0046b47d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0046b47e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0046b483
    MOV EDX,dword ptr [EAX + 0x24]      ; 0046b486
    MOV ECX,dword ptr [EBX + 0xc1d8]    ; 0046b489
    MOV EAX,0x78                        ; 0046b48f
    TEST ECX,ECX                        ; 0046b494
    JZ 0x0046b49d                       ; 0046b496
        ;   XREF to: 0046b49d (CONDITIONAL_JUMP)  ; LAB_0046b49d
    MOV EAX,0x79                        ; 0046b498
    CMP EAX,EDX                         ; 0046b49d
        ;   Label: LAB_0046b49d
    JZ 0x0046b4b3                       ; 0046b49f
        ;   XREF to: 0046b4b3 (CONDITIONAL_JUMP)  ; LAB_0046b4b3
    PUSH 0x1                            ; 0046b4a1
    PUSH EAX                            ; 0046b4a3
    LEA EAX,[EBX + 0x158]               ; 0046b4a4
    PUSH EAX                            ; 0046b4aa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046b4ab
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046b4b0
    CMP dword ptr [EBX + 0x200d8],0x0   ; 0046b4b3
        ;   Label: LAB_0046b4b3
    JNZ 0x00469e25                      ; 0046b4ba
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    FLD float ptr [EBX + 0xc200]        ; 0046b4c0
    FMUL float ptr [EBX + 0x2528]       ; 0046b4c6
    FST float ptr [EBX + 0x2508]        ; 0046b4cc
    FSUBR float ptr [EBX + 0x20024]     ; 0046b4d2
    FSTP float ptr [EBX + 0x20024]      ; 0046b4d8
    JMP 0x00469e25                      ; 0046b4de
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    FLD double ptr [ESP + 0x8]          ; 0046b4e3
        ;   Label: LAB_0046b4e3
    FCOMP double ptr [0x005d9d8c]       ; 0046b4e7 | DAT_005d9d8c
    FNSTSW AX                           ; 0046b4ed
    SAHF                                ; 0046b4ef
    JBE 0x0046b4fc                      ; 0046b4f0
        ;   XREF to: 0046b4fc (CONDITIONAL_JUMP)  ; LAB_0046b4fc
    MOV ESI,0xa                         ; 0046b4f2
    JMP 0x0046b3f4                      ; 0046b4f7
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    MOV ESI,0x4                         ; 0046b4fc
        ;   Label: LAB_0046b4fc
    JMP 0x0046b3f4                      ; 0046b501
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    FLD float ptr [EBX + 0xc1fc]        ; 0046b506
        ;   Label: LAB_0046b506
    FST double ptr [ESP + 0x28]         ; 0046b50c
    FCOMP double ptr [0x005d9d84]       ; 0046b510 | DAT_005d9d84
    FNSTSW AX                           ; 0046b516
    SAHF                                ; 0046b518
    JNC 0x0046b525                      ; 0046b519
        ;   XREF to: 0046b525 (CONDITIONAL_JUMP)  ; LAB_0046b525
    MOV ESI,0xb                         ; 0046b51b
    JMP 0x0046b3f4                      ; 0046b520
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    FLD double ptr [ESP + 0x28]         ; 0046b525
        ;   Label: LAB_0046b525
    FCOMP double ptr [0x005d9d8c]       ; 0046b529 | DAT_005d9d8c
    FNSTSW AX                           ; 0046b52f
    SAHF                                ; 0046b531
    JBE 0x0046b53e                      ; 0046b532
        ;   XREF to: 0046b53e (CONDITIONAL_JUMP)  ; LAB_0046b53e
    MOV ESI,0xc                         ; 0046b534
    JMP 0x0046b3f4                      ; 0046b539
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    MOV ESI,0x1                         ; 0046b53e
        ;   Label: LAB_0046b53e
    JMP 0x0046b3f4                      ; 0046b543
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 0046b548
        ;   Label: LAB_0046b548
    JZ 0x0046b5e2                       ; 0046b54f
        ;   XREF to: 0046b5e2 (CONDITIONAL_JUMP)  ; LAB_0046b5e2
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 0046b555
    JZ 0x0046b5a0                       ; 0046b55c
        ;   XREF to: 0046b5a0 (CONDITIONAL_JUMP)  ; LAB_0046b5a0
    FLD float ptr [EBX + 0xc1fc]        ; 0046b55e
    FST double ptr [ESP + 0x10]         ; 0046b564
    FCOMP double ptr [0x005d9d84]       ; 0046b568 | DAT_005d9d84
    FNSTSW AX                           ; 0046b56e
    SAHF                                ; 0046b570
    JNC 0x0046b57d                      ; 0046b571
        ;   XREF to: 0046b57d (CONDITIONAL_JUMP)  ; LAB_0046b57d
    MOV ESI,0xd                         ; 0046b573
    JMP 0x0046b3f4                      ; 0046b578
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    FLD double ptr [ESP + 0x10]         ; 0046b57d
        ;   Label: LAB_0046b57d
    FCOMP double ptr [0x005d9d8c]       ; 0046b581 | DAT_005d9d8c
    FNSTSW AX                           ; 0046b587
    SAHF                                ; 0046b589
    JBE 0x0046b596                      ; 0046b58a
        ;   XREF to: 0046b596 (CONDITIONAL_JUMP)  ; LAB_0046b596
    MOV ESI,0xe                         ; 0046b58c
    JMP 0x0046b3f4                      ; 0046b591
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    MOV ESI,0x3                         ; 0046b596
        ;   Label: LAB_0046b596
    JMP 0x0046b3f4                      ; 0046b59b
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    FLD float ptr [EBX + 0xc1fc]        ; 0046b5a0
        ;   Label: LAB_0046b5a0
    FST double ptr [ESP + 0x20]         ; 0046b5a6
    FCOMP double ptr [0x005d9d84]       ; 0046b5aa | DAT_005d9d84
    FNSTSW AX                           ; 0046b5b0
    SAHF                                ; 0046b5b2
    JNC 0x0046b5bf                      ; 0046b5b3
        ;   XREF to: 0046b5bf (CONDITIONAL_JUMP)  ; LAB_0046b5bf
    MOV ESI,0xf                         ; 0046b5b5
    JMP 0x0046b3f4                      ; 0046b5ba
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    FLD double ptr [ESP + 0x20]         ; 0046b5bf
        ;   Label: LAB_0046b5bf
    FCOMP double ptr [0x005d9d8c]       ; 0046b5c3 | DAT_005d9d8c
    FNSTSW AX                           ; 0046b5c9
    SAHF                                ; 0046b5cb
    JBE 0x0046b5d8                      ; 0046b5cc
        ;   XREF to: 0046b5d8 (CONDITIONAL_JUMP)  ; LAB_0046b5d8
    MOV ESI,0x10                        ; 0046b5ce
    JMP 0x0046b3f4                      ; 0046b5d3
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    MOV ESI,0x2                         ; 0046b5d8
        ;   Label: LAB_0046b5d8
    JMP 0x0046b3f4                      ; 0046b5dd
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    FLD float ptr [EBX + 0xc1fc]        ; 0046b5e2
        ;   Label: LAB_0046b5e2
    FST double ptr [ESP]                ; 0046b5e8
    FCOMP double ptr [0x005d9d84]       ; 0046b5eb | DAT_005d9d84
    FNSTSW AX                           ; 0046b5f1
    SAHF                                ; 0046b5f3
    JNC 0x0046b613                      ; 0046b5f4
        ;   XREF to: 0046b613 (CONDITIONAL_JUMP)  ; LAB_0046b613
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 0046b5f6
    JZ 0x0046b609                       ; 0046b5fd
        ;   XREF to: 0046b609 (CONDITIONAL_JUMP)  ; LAB_0046b609
    MOV ESI,0x7                         ; 0046b5ff
    JMP 0x0046b3f4                      ; 0046b604
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    MOV ESI,0x5                         ; 0046b609
        ;   Label: LAB_0046b609
    JMP 0x0046b3f4                      ; 0046b60e
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    FLD double ptr [ESP]                ; 0046b613
        ;   Label: LAB_0046b613
    FCOMP double ptr [0x005d9d8c]       ; 0046b616 | DAT_005d9d8c
    FNSTSW AX                           ; 0046b61c
    SAHF                                ; 0046b61e
    JBE 0x0046b3f4                      ; 0046b61f
        ;   XREF to: 0046b3f4 (CONDITIONAL_JUMP)  ; LAB_0046b3f4
    CMP dword ptr [EBX + 0xc1e0],0x0    ; 0046b625
    JZ 0x0046b638                       ; 0046b62c
        ;   XREF to: 0046b638 (CONDITIONAL_JUMP)  ; LAB_0046b638
    MOV ESI,0x8                         ; 0046b62e
    JMP 0x0046b3f4                      ; 0046b633
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    MOV ESI,0x6                         ; 0046b638
        ;   Label: LAB_0046b638
    JMP 0x0046b3f4                      ; 0046b63d
        ;   XREF to: 0046b3f4 (UNCONDITIONAL_JUMP)  ; LAB_0046b3f4
    JBE 0x0046b39a                      ; 0046b642
        ;   XREF to: 0046b39a (CONDITIONAL_JUMP)  ; LAB_0046b39a
        ;   Label: LAB_0046b642
    CMP EAX,0xe                         ; 0046b648
    JC 0x0046b39a                       ; 0046b64b
        ;   XREF to: 0046b39a (CONDITIONAL_JUMP)  ; LAB_0046b39a
    JBE 0x0046b39a                      ; 0046b651
        ;   XREF to: 0046b39a (CONDITIONAL_JUMP)  ; LAB_0046b39a
    CMP EAX,0x75                        ; 0046b657
    JNC 0x0046b673                      ; 0046b65a
        ;   XREF to: 0046b673 (CONDITIONAL_JUMP)  ; LAB_0046b673
    CMP EAX,0xf                         ; 0046b65c
    JBE 0x0046b39a                      ; 0046b65f
        ;   XREF to: 0046b39a (CONDITIONAL_JUMP)  ; LAB_0046b39a
    CMP EAX,0x10                        ; 0046b665
    JZ 0x0046b39a                       ; 0046b668
        ;   XREF to: 0046b39a (CONDITIONAL_JUMP)  ; LAB_0046b39a
    JMP 0x00469e25                      ; 0046b66e
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    JBE 0x00469e25                      ; 0046b673
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
        ;   Label: LAB_0046b673
    CMP EAX,0x78                        ; 0046b679
    JC 0x00469e25                       ; 0046b67c
        ;   XREF to: 00469e25 (CONDITIONAL_JUMP)  ; LAB_00469e25
    JBE 0x0046b477                      ; 0046b682
        ;   XREF to: 0046b477 (CONDITIONAL_JUMP)  ; LAB_0046b477
    CMP EAX,0x79                        ; 0046b688
    JZ 0x0046b477                       ; 0046b68b
        ;   XREF to: 0046b477 (CONDITIONAL_JUMP)  ; LAB_0046b477
    JMP 0x00469e25                      ; 0046b691
        ;   XREF to: 00469e25 (UNCONDITIONAL_JUMP)  ; LAB_00469e25
    MOV ESI,0x3f800000                  ; 0046b696
        ;   Label: LAB_0046b696
    MOV dword ptr [EBX + 0x200d0],0x0   ; 0046b69b
    MOV dword ptr [ESP + 0x48],ESI      ; 0046b6a5
    JMP 0x00469e67                      ; 0046b6a9
        ;   XREF to: 00469e67 (UNCONDITIONAL_JUMP)  ; LAB_00469e67
    CMP dword ptr [EBX + 0x20000],0x0   ; 0046b6ae
        ;   Label: LAB_0046b6ae
    JNZ 0x0046a018                      ; 0046b6b5
        ;   XREF to: 0046a018 (CONDITIONAL_JUMP)  ; LAB_0046a018
    CMP dword ptr [ESP + 0x4b0],0x0     ; 0046b6bb
    JZ 0x0046a09c                       ; 0046b6c3
        ;   XREF to: 0046a09c (CONDITIONAL_JUMP)  ; LAB_0046a09c
    LEA EAX,[EBX + 0x158]               ; 0046b6c9
    PUSH EAX                            ; 0046b6cf
    LEA EDI,[ESP + 0x224]               ; 0046b6d0
    LEA ESI,[ESP + 0x3a4]               ; 0046b6d7
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0046b6de
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    LEA EDX,[EBX + 0x249c]              ; 0046b6e3
    ADD ESP,0x4                         ; 0046b6e9
    MOV ECX,dword ptr [EAX + 0x24]      ; 0046b6ec
    FLD float ptr [EDX]                 ; 0046b6ef
    FLD float ptr [EDX + 0x4]           ; 0046b6f1
    LEA EAX,[EBX + 0x250c]              ; 0046b6f4
    FLD float ptr [EDX + 0x8]           ; 0046b6fa
    FXCH ST2                            ; 0046b6fd
    FADD float ptr [EAX]                ; 0046b6ff
    FXCH                                ; 0046b701
    FADD float ptr [EAX + 0x4]          ; 0046b703
    FXCH ST2                            ; 0046b706
    FADD float ptr [EAX + 0x8]          ; 0046b708
    FXCH                                ; 0046b70b
    FSTP float ptr [ESP + 0x3a0]        ; 0046b70d
    FXCH                                ; 0046b714
    FSTP float ptr [ESP + 0x3a4]        ; 0046b716
    FSTP float ptr [ESP + 0x3a8]        ; 0046b71d
    MOVSD ES:EDI,ESI                    ; 0046b724
    MOVSD ES:EDI,ESI                    ; 0046b725
    MOVSD ES:EDI,ESI                    ; 0046b726
    MOV dword ptr [EDX + 0x8],0x0       ; 0046b727
    MOV ESI,dword ptr [EDX + 0x8]       ; 0046b72e
    MOV dword ptr [EDX + 0x4],ESI       ; 0046b731
    MOV ESI,dword ptr [EDX + 0x4]       ; 0046b734
    MOV dword ptr [EDX],ESI             ; 0046b737
    MOV dword ptr [EAX + 0x8],0x0       ; 0046b739
    MOV dword ptr [ESP + 0x4a4],ECX     ; 0046b740
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046b747
    MOV dword ptr [EAX + 0x4],EDX       ; 0046b74a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046b74d
    MOV dword ptr [EAX],EDX             ; 0046b750
    CMP ECX,0x12                        ; 0046b752
    JZ 0x0046b988                       ; 0046b755
        ;   XREF to: 0046b988 (CONDITIONAL_JUMP)  ; LAB_0046b988
    CMP ECX,0x13                        ; 0046b75b
    JNZ 0x0046b9c3                      ; 0046b75e
        ;   XREF to: 0046b9c3 (CONDITIONAL_JUMP)  ; LAB_0046b9c3
    FLD float ptr [EBP + 0x18]          ; 0046b764
    XOR EDX,EDX                         ; 0046b767
    FMUL double ptr [0x005d9dd4]        ; 0046b769 | DAT_005d9dd4
    MOV dword ptr [ESP + 0x228],EDX     ; 0046b76f
    MOV dword ptr [ESP + 0x224],EDX     ; 0046b776
    MOV dword ptr [ESP + 0x220],EDX     ; 0046b77d
    FSUBR float ptr [EBX + 0x251c]      ; 0046b784
        ;   Label: LAB_0046b784
    FSTP float ptr [EBX + 0x251c]       ; 0046b78a
        ;   Label: LAB_0046b78a
    LEA EAX,[EBX + 0x2004c]             ; 0046b790
    PUSH EAX                            ; 0046b796
    PUSH EBX                            ; 0046b797
    LEA ESI,[ESP + 0x438]               ; 0046b798
    LEA EDI,[ESP + 0x3fc]               ; 0046b79f
    CALL core_actor.cpp_FUN_00408b00    ; 0046b7a6
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x438]               ; 0046b7ab
    ADD ESP,0x8                         ; 0046b7b2
    LEA EAX,[EBX + 0x2518]              ; 0046b7b5
    MOVSD ES:EDI,ESI                    ; 0046b7bb
    MOVSD ES:EDI,ESI                    ; 0046b7bc
    MOVSD ES:EDI,ESI                    ; 0046b7bd
    FLD float ptr [EBP + 0x18]          ; 0046b7be
    FLD float ptr [EAX]                 ; 0046b7c1
    FMUL ST1                            ; 0046b7c3
    FLD float ptr [EAX + 0x4]           ; 0046b7c5
    FMUL ST2                            ; 0046b7c8
    FLD float ptr [EAX + 0x8]           ; 0046b7ca
    FMULP ST3                           ; 0046b7cd
    FLD float ptr [ESP + 0x220]         ; 0046b7cf
    FLD float ptr [ESP + 0x224]         ; 0046b7d6
    FLD float ptr [ESP + 0x228]         ; 0046b7dd
    LEA EDI,[ESP + 0x22c]               ; 0046b7e4
    LEA ESI,[ESP + 0x250]               ; 0046b7eb
    LEA EAX,[ESP + 0x220]               ; 0046b7f2
    FXCH ST4                            ; 0046b7f9
    FSTP float ptr [ESP + 0x250]        ; 0046b7fb
    FXCH ST2                            ; 0046b802
    FSTP float ptr [ESP + 0x254]        ; 0046b804
    FXCH ST3                            ; 0046b80b
    FSTP float ptr [ESP + 0x258]        ; 0046b80d
    MOVSD ES:EDI,ESI                    ; 0046b814
    MOVSD ES:EDI,ESI                    ; 0046b815
    MOVSD ES:EDI,ESI                    ; 0046b816
    PUSH EAX                            ; 0046b817
    FLD float ptr [ESP + 0x230]         ; 0046b818
    FLD float ptr [ESP + 0x234]         ; 0046b81f
    FLD float ptr [ESP + 0x238]         ; 0046b826
    LEA EDI,[ESP + 0x218]               ; 0046b82d
    LEA ESI,[ESP + 0x350]               ; 0046b834
    FXCH ST2                            ; 0046b83b
    FADD float ptr [ESP + 0x3f8]        ; 0046b83d
    FXCH                                ; 0046b844
    FADD float ptr [ESP + 0x3fc]        ; 0046b846
    FXCH ST2                            ; 0046b84d
    FADD float ptr [ESP + 0x400]        ; 0046b84f
    FXCH                                ; 0046b856
    FSTP float ptr [ESP + 0x350]        ; 0046b858
    FXCH                                ; 0046b85f
    FSTP float ptr [ESP + 0x354]        ; 0046b861
    FSTP float ptr [ESP + 0x358]        ; 0046b868
    MOVSD ES:EDI,ESI                    ; 0046b86f
    MOVSD ES:EDI,ESI                    ; 0046b870
    MOVSD ES:EDI,ESI                    ; 0046b871
    PUSH EBX                            ; 0046b872
    FXCH ST2                            ; 0046b873
    FADD float ptr [ESP + 0x21c]        ; 0046b875
    FXCH ST2                            ; 0046b87c
    FADD float ptr [ESP + 0x220]        ; 0046b87e
    FXCH                                ; 0046b885
    FADD float ptr [ESP + 0x224]        ; 0046b887
    FXCH ST2                            ; 0046b88e
    FSTP float ptr [ESP + 0x228]        ; 0046b890
    FSTP float ptr [ESP + 0x22c]        ; 0046b897
    FSTP float ptr [ESP + 0x230]        ; 0046b89e
    MOV EAX,dword ptr [EBX + 0x251c]    ; 0046b8a5
    MOV dword ptr [EBX + 0x200e0],EAX   ; 0046b8ab
    CALL core_charactr.cpp_FUN_0042d750 ; 0046b8b1
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    FLD float ptr [EBX + 0x2504]        ; 0046b8b6
    FADD double ptr [0x005d9ddc]        ; 0046b8bc | DAT_005d9ddc
    ADD ESP,0x8                         ; 0046b8c2
    FLD float ptr [EBX + 0x24]          ; 0046b8c5
    FCOMPP                              ; 0046b8c8
    FNSTSW AX                           ; 0046b8ca
    SAHF                                ; 0046b8cc
    JNC 0x0046b8d9                      ; 0046b8cd
        ;   XREF to: 0046b8d9 (CONDITIONAL_JUMP)  ; LAB_0046b8d9
    MOV dword ptr [EBX + 0x2500],0x1    ; 0046b8cf
    CMP dword ptr [ESP + 0x4a4],0x12    ; 0046b8d9
        ;   Label: LAB_0046b8d9
    JNZ 0x0046b976                      ; 0046b8e1
        ;   XREF to: 0046b976 (CONDITIONAL_JUMP)  ; LAB_0046b976
    CMP dword ptr [EBX + 0x2500],0x0    ; 0046b8e7
    JZ 0x0046b976                       ; 0046b8ee
        ;   XREF to: 0046b976 (CONDITIONAL_JUMP)  ; LAB_0046b976
    SUB ESP,0x8                         ; 0046b8f4
    FLD float ptr [EBX + 0x251c]        ; 0046b8f7
    FSTP double ptr [ESP]               ; 0046b8fd
    PUSH 0x5d9cca                       ; 0046b900 | = "Splat at %3.2f fps\n"
    MOV EDI,dword ptr [0x00611100]      ; 0046b905 | g_CConsolePtr
    PUSH EDI                            ; 0046b90b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0046b90c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    FLD float ptr [EBX + 0x200e0]       ; 0046b911
    ADD ESP,0x10                        ; 0046b917
    FCHS                                ; 0046b91a
    FST float ptr [ESP + 0x44]          ; 0046b91c
    FST double ptr [ESP + 0x30]         ; 0046b920
    FCOMP double ptr [0x005d9de4]       ; 0046b924 | DAT_005d9de4
    FNSTSW AX                           ; 0046b92a
    SAHF                                ; 0046b92c
    JNC 0x0046b9d1                      ; 0046b92d
        ;   XREF to: 0046b9d1 (CONDITIONAL_JUMP)  ; LAB_0046b9d1
    CMP dword ptr [ESP + 0x4a4],0x12    ; 0046b933
    JNZ 0x0046b950                      ; 0046b93b
        ;   XREF to: 0046b950 (CONDITIONAL_JUMP)  ; LAB_0046b950
    PUSH 0x1                            ; 0046b93d
    PUSH 0x13                           ; 0046b93f
    LEA EAX,[EBX + 0x158]               ; 0046b941
        ;   Label: LAB_0046b941
    PUSH EAX                            ; 0046b947
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046b948
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046b94d
    FLD float ptr [ESP + 0x44]          ; 0046b950
        ;   Label: LAB_0046b950
    FMUL float ptr [0x005d9e04]         ; 0046b954 | DAT_005d9e04
    SUB ESP,0x4                         ; 0046b95a
    FLD1                                ; 0046b95d
    FADDP                               ; 0046b95f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046b961
    FSTP float ptr [ESP]                ; 0046b967
    PUSH 0x2c8af28                      ; 0046b96a | DAT_02c8af28
    PUSH EBX                            ; 0046b96f
    CALL dword ptr [EAX + 0x24]         ; 0046b970
    ADD ESP,0xc                         ; 0046b973
    CMP dword ptr [EBX + 0x2500],0x0    ; 0046b976
        ;   Label: LAB_0046b976
    JZ 0x0046ba81                       ; 0046b97d
        ;   XREF to: 0046ba81 (CONDITIONAL_JUMP)  ; LAB_0046ba81
    JMP 0x0046a092                      ; 0046b983
        ;   XREF to: 0046a092 (UNCONDITIONAL_JUMP)  ; LAB_0046a092
    FLD float ptr [EBP + 0x18]          ; 0046b988
        ;   Label: LAB_0046b988
    XOR EDI,EDI                         ; 0046b98b
    FMUL double ptr [0x005d9dd4]        ; 0046b98d | DAT_005d9dd4
    MOV dword ptr [ESP + 0x228],EDI     ; 0046b993
    MOV dword ptr [ESP + 0x224],EDI     ; 0046b99a
    MOV dword ptr [ESP + 0x220],EDI     ; 0046b9a1
    FLD float ptr [EBX + 0x251c]        ; 0046b9a8
    FXCH                                ; 0046b9ae
    FSUBR ST0,ST1                       ; 0046b9b0
    MOV dword ptr [EBX + 0x20064],0x461c3f9a ; 0046b9b2
    FSTP ST1                            ; 0046b9bc
    JMP 0x0046b78a                      ; 0046b9be
        ;   XREF to: 0046b78a (UNCONDITIONAL_JUMP)  ; LAB_0046b78a
    FLD float ptr [EBP + 0x18]          ; 0046b9c3
        ;   Label: LAB_0046b9c3
    FMUL double ptr [0x005d9dd4]        ; 0046b9c6 | DAT_005d9dd4
    JMP 0x0046b784                      ; 0046b9cc
        ;   XREF to: 0046b784 (UNCONDITIONAL_JUMP)  ; LAB_0046b784
    LEA EAX,[ESP + 0x5c]                ; 0046b9d1
        ;   Label: LAB_0046b9d1
    PUSH EAX                            ; 0046b9d5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0046b9d6
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0046b9db
    FLD double ptr [ESP + 0x30]         ; 0046b9de
    FADD double ptr [0x005d9dec]        ; 0046b9e2 | DAT_005d9dec
    FMUL double ptr [0x005d9df4]        ; 0046b9e8 | DAT_005d9df4
    FMUL double ptr [0x005d9dfc]        ; 0046b9ee | DAT_005d9dfc
    FSTP float ptr [ESP + 0x60]         ; 0046b9f4
    MOV EAX,dword ptr [ESP + 0x60]      ; 0046b9f8
    XOR ESI,ESI                         ; 0046b9fc
    CMP EAX,0x42c80000                  ; 0046b9fe
    JLE 0x0046ba13                      ; 0046ba03
        ;   XREF to: 0046ba13 (CONDITIONAL_JUMP)  ; LAB_0046ba13
    MOV EDX,0x461c3c00                  ; 0046ba05
    MOV ESI,0x1                         ; 0046ba0a
    MOV dword ptr [ESP + 0x60],EDX      ; 0046ba0f
    LEA EDX,[ESP + 0x5c]                ; 0046ba13
        ;   Label: LAB_0046ba13
    PUSH EDX                            ; 0046ba17
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046ba18
    PUSH EBX                            ; 0046ba1e
    MOV dword ptr [EBX + 0xc1d0],0x0    ; 0046ba1f
    CALL dword ptr [EAX + 0x108]        ; 0046ba29
    FLD float ptr [EBX + 0x2538]        ; 0046ba2f
    FLDZ                                ; 0046ba35
    ADD ESP,0x8                         ; 0046ba37
    FCOMPP                              ; 0046ba3a
    FNSTSW AX                           ; 0046ba3c
    SAHF                                ; 0046ba3e
    JNC 0x0046ba45                      ; 0046ba3f
        ;   XREF to: 0046ba45 (CONDITIONAL_JUMP)  ; LAB_0046ba45
    TEST ESI,ESI                        ; 0046ba41
    JZ 0x0046ba78                       ; 0046ba43
        ;   XREF to: 0046ba78 (CONDITIONAL_JUMP)  ; LAB_0046ba78
    PUSH 0x1                            ; 0046ba45
        ;   Label: LAB_0046ba45
    PUSH 0x15                           ; 0046ba47
    LEA EAX,[EBX + 0x158]               ; 0046ba49
    PUSH EAX                            ; 0046ba4f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046ba50
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046ba55
    PUSH 0x5d9cde                       ; 0046ba58 | = "fall-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046ba5d
    PUSH EBX                            ; 0046ba63
    CALL dword ptr [EAX + 0x2c]         ; 0046ba64
    ADD ESP,0x8                         ; 0046ba67
    CMP dword ptr [EBX + 0x2500],0x0    ; 0046ba6a
    JZ 0x0046ba81                       ; 0046ba71
        ;   XREF to: 0046ba81 (CONDITIONAL_JUMP)  ; LAB_0046ba81
    JMP 0x0046a092                      ; 0046ba73
        ;   XREF to: 0046a092 (UNCONDITIONAL_JUMP)  ; LAB_0046a092
    PUSH 0x1                            ; 0046ba78
        ;   Label: LAB_0046ba78
    PUSH 0x14                           ; 0046ba7a
    JMP 0x0046b941                      ; 0046ba7c
        ;   XREF to: 0046b941 (UNCONDITIONAL_JUMP)  ; LAB_0046b941
    FLD float ptr [EBX + 0x20064]       ; 0046ba81
        ;   Label: LAB_0046ba81
    MOV EDI,dword ptr [ESP + 0x4a4]     ; 0046ba87
    MOV EAX,[0x005fecc8]                ; 0046ba8e | DAT_005fecc8
    FADD float ptr [EBP + 0x18]         ; 0046ba93
    MOV dword ptr [ESP + 0x40],EAX      ; 0046ba96
    FSTP float ptr [EBX + 0x20064]      ; 0046ba9a
    CMP EDI,0x4                         ; 0046baa0
    JNZ 0x0046bab7                      ; 0046baa3
        ;   XREF to: 0046bab7 (CONDITIONAL_JUMP)  ; LAB_0046bab7
    FLD float ptr [ESP + 0x40]          ; 0046baa5
    FLD ST0                             ; 0046baa9
    FMUL double ptr [0x005d9d7c]        ; 0046baab | DAT_005d9d7c
    FSTP ST1                            ; 0046bab1
    FSTP float ptr [ESP + 0x40]         ; 0046bab3
    FLD float ptr [EBX + 0x20064]       ; 0046bab7
        ;   Label: LAB_0046bab7
    FCOMP float ptr [ESP + 0x40]        ; 0046babd
    FNSTSW AX                           ; 0046bac1
    SAHF                                ; 0046bac3
    JBE 0x0046baf2                      ; 0046bac4
        ;   XREF to: 0046baf2 (CONDITIONAL_JUMP)  ; LAB_0046baf2
    CMP dword ptr [ESP + 0x4a4],0x12    ; 0046bac6
        ;   Label: LAB_0046bac6
    JZ 0x0046bae3                       ; 0046bace
        ;   XREF to: 0046bae3 (CONDITIONAL_JUMP)  ; LAB_0046bae3
    PUSH 0x1                            ; 0046bad0
    PUSH 0x12                           ; 0046bad2
    LEA EAX,[EBX + 0x158]               ; 0046bad4
    PUSH EAX                            ; 0046bada
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0046badb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0046bae0
    MOV dword ptr [EBX + 0x2500],0x0    ; 0046bae3
        ;   Label: LAB_0046bae3
    JMP 0x0046a09c                      ; 0046baed
        ;   XREF to: 0046a09c (UNCONDITIONAL_JUMP)  ; LAB_0046a09c
    FLD float ptr [EBX + 0x200e0]       ; 0046baf2
        ;   Label: LAB_0046baf2
    FCOMP double ptr [0x005d9dec]       ; 0046baf8 | DAT_005d9dec
    FNSTSW AX                           ; 0046bafe
    SAHF                                ; 0046bb00
    JC 0x0046bac6                       ; 0046bb01
        ;   XREF to: 0046bac6 (CONDITIONAL_JUMP)  ; LAB_0046bac6
    JMP 0x0046a09c                      ; 0046bb03
        ;   XREF to: 0046a09c (UNCONDITIONAL_JUMP)  ; LAB_0046a09c
    MOV dword ptr [EBX + 0x1ffac],0x1   ; 0046bb08
        ;   Label: LAB_0046bb08
    JMP 0x0046a10d                      ; 0046bb12
        ;   XREF to: 0046a10d (UNCONDITIONAL_JUMP)  ; LAB_0046a10d
    LEA EAX,[EBX + 0x1fae8]             ; 0046bb17
        ;   Label: LAB_0046bb17
    MOV EAX,dword ptr [EAX + 0x338]     ; 0046bb1d
    CMP dword ptr [EAX + 0x2f0],0x0     ; 0046bb23
    JZ 0x0046a17e                       ; 0046bb2a
        ;   XREF to: 0046a17e (CONDITIONAL_JUMP)  ; LAB_0046a17e
    MOV EAX,[0x0061d95c]                ; 0046bb30 | g_CGamePtr
    CMP dword ptr [EAX + 0x264],0x0     ; 0046bb35 | g_CGameInstance.flashlight_active
    SETZ DL                             ; 0046bb3c
    AND EDX,0xff                        ; 0046bb3f
    MOV dword ptr [EAX + 0x264],EDX     ; 0046bb45 | g_CGameInstance.flashlight_active
    JZ 0x0046bb57                       ; 0046bb4b
        ;   XREF to: 0046bb57 (CONDITIONAL_JUMP)  ; LAB_0046bb57
    MOV dword ptr [EBX + 0x1ffac],0x1   ; 0046bb4d
    PUSH 0x5d9d02                       ; 0046bb57 | = "flashlit.wav"
        ;   Label: LAB_0046bb57
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046bb5c
    PUSH EBX                            ; 0046bb62
    CALL dword ptr [EAX + 0x2c]         ; 0046bb63
    ADD ESP,0x8                         ; 0046bb66
    JMP 0x0046a17e                      ; 0046bb69
        ;   XREF to: 0046a17e (UNCONDITIONAL_JUMP)  ; LAB_0046a17e
    PUSH 0x5d9d0f                       ; 0046bb6e | = "CFlashlight"
        ;   Label: LAB_0046bb6e
    PUSH ESI                            ; 0046bb73
    CALL core_inv.cpp_FUN_004f8ce0      ; 0046bb74
        ;   XREF to: 004f8ce0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f8ce0()
    ADD ESP,0x8                         ; 0046bb79
    TEST EAX,EAX                        ; 0046bb7c
    JZ 0x0046bc0b                       ; 0046bb7e
        ;   XREF to: 0046bc0b (CONDITIONAL_JUMP)  ; LAB_0046bc0b
    MOV dword ptr [ESP + 0x4cc],ESI     ; 0046bb84
    XOR EDI,EDI                         ; 0046bb8b
    MOV EAX,dword ptr [ESP + 0x4cc]     ; 0046bb8d
        ;   Label: LAB_0046bb8d
    MOV EAX,dword ptr [EAX + 0x10]      ; 0046bb94
    CMP EDI,EAX                         ; 0046bb97
    JGE 0x0046bbcd                      ; 0046bb99
        ;   XREF to: 0046bbcd (CONDITIONAL_JUMP)  ; LAB_0046bbcd
    MOV EDX,dword ptr [0x01cc41fc]      ; 0046bb9b | g_CFlashlightClassInfo.name_hash
    PUSH EDX                            ; 0046bba1
    MOV EAX,dword ptr [ESI + 0x14]      ; 0046bba2
    PUSH EAX                            ; 0046bba5
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0046bba6
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0046bbab
    TEST EAX,EAX                        ; 0046bbae
    JNZ 0x0046bbb8                      ; 0046bbb0
        ;   XREF to: 0046bbb8 (CONDITIONAL_JUMP)  ; LAB_0046bbb8
    INC EDI                             ; 0046bbb2
    ADD ESI,0x4                         ; 0046bbb3
    JMP 0x0046bb8d                      ; 0046bbb6
        ;   XREF to: 0046bb8d (UNCONDITIONAL_JUMP)  ; LAB_0046bb8d
    PUSH 0x1                            ; 0046bbb8
        ;   Label: LAB_0046bbb8
    PUSH 0x5                            ; 0046bbba
    PUSH EAX                            ; 0046bbbc
    MOV ECX,dword ptr [ESP + 0x4d8]     ; 0046bbbd
    PUSH ECX                            ; 0046bbc4
    CALL core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0 ; 0046bbc5
        ;   XREF to: 004f8dc0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectWeapon_FUN_004f8dc0(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
    ADD ESP,0x10                        ; 0046bbca
    MOV EAX,[0x0061d95c]                ; 0046bbcd | g_CGamePtr
        ;   Label: LAB_0046bbcd
    CMP dword ptr [EAX + 0x264],0x0     ; 0046bbd2 | g_CGameInstance.flashlight_active
    SETZ DL                             ; 0046bbd9
    AND EDX,0xff                        ; 0046bbdc
    MOV dword ptr [EAX + 0x264],EDX     ; 0046bbe2 | g_CGameInstance.flashlight_active
    JZ 0x0046bbf4                       ; 0046bbe8
        ;   XREF to: 0046bbf4 (CONDITIONAL_JUMP)  ; LAB_0046bbf4
    MOV dword ptr [EBX + 0x1ffac],0x1   ; 0046bbea
    PUSH 0x5d9d1b                       ; 0046bbf4 | = "flashlit.wav"
        ;   Label: LAB_0046bbf4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046bbf9
    PUSH EBX                            ; 0046bbff
    CALL dword ptr [EAX + 0x2c]         ; 0046bc00
    ADD ESP,0x8                         ; 0046bc03
    JMP 0x0046a17e                      ; 0046bc06
        ;   XREF to: 0046a17e (UNCONDITIONAL_JUMP)  ; LAB_0046a17e
    MOV EAX,dword ptr [ESI + 0x338]     ; 0046bc0b
        ;   Label: LAB_0046bc0b
    CMP dword ptr [EAX + 0x2f0],0x0     ; 0046bc11
    JZ 0x0046a17e                       ; 0046bc18
        ;   XREF to: 0046a17e (CONDITIONAL_JUMP)  ; LAB_0046a17e
    MOV EAX,[0x0061d95c]                ; 0046bc1e | g_CGamePtr
    CMP dword ptr [EAX + 0x264],0x0     ; 0046bc23 | g_CGameInstance.flashlight_active
    SETZ DL                             ; 0046bc2a
    AND EDX,0xff                        ; 0046bc2d
    MOV dword ptr [EAX + 0x264],EDX     ; 0046bc33 | g_CGameInstance.flashlight_active
    JZ 0x0046bc45                       ; 0046bc39
        ;   XREF to: 0046bc45 (CONDITIONAL_JUMP)  ; LAB_0046bc45
    MOV dword ptr [EBX + 0x1ffac],0x1   ; 0046bc3b
    PUSH 0x5d9d28                       ; 0046bc45 | = "flashlit.wav"
        ;   Label: LAB_0046bc45
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046bc4a
    PUSH EBX                            ; 0046bc50
    CALL dword ptr [EAX + 0x2c]         ; 0046bc51
    ADD ESP,0x8                         ; 0046bc54
    JMP 0x0046a17e                      ; 0046bc57
        ;   XREF to: 0046a17e (UNCONDITIONAL_JUMP)  ; LAB_0046a17e
    MOV EDX,dword ptr [EAX + 0x2f0]     ; 0046bc5c
        ;   Label: LAB_0046bc5c
    TEST EDX,EDX                        ; 0046bc62
    JNZ 0x0046a1a1                      ; 0046bc64
        ;   XREF to: 0046a1a1 (CONDITIONAL_JUMP)  ; LAB_0046a1a1
    MOV EAX,[0x0061d95c]                ; 0046bc6a | g_CGamePtr
    MOV dword ptr [EAX + 0x264],EDX     ; 0046bc6f | g_CGameInstance.flashlight_active
    JMP 0x0046a1a1                      ; 0046bc75
        ;   XREF to: 0046a1a1 (UNCONDITIONAL_JUMP)  ; LAB_0046a1a1
    CMP dword ptr [EAX + 0x25c],0x0     ; 0046bc7a | g_CGameInstance.goggles_active
        ;   Label: LAB_0046bc7a
    JNZ 0x0046a1bc                      ; 0046bc81
        ;   XREF to: 0046a1bc (CONDITIONAL_JUMP)  ; LAB_0046a1bc
    JMP 0x0046a1cc                      ; 0046bc87
        ;   XREF to: 0046a1cc (UNCONDITIONAL_JUMP)  ; LAB_0046a1cc
    FLD float ptr [EBP + 0x18]          ; 0046bc8c
        ;   Label: LAB_0046bc8c
    FDIV float ptr [0x005feca0]         ; 0046bc8f | DAT_005feca0
    FSUBR float ptr [EBX + 0x1ffb0]     ; 0046bc95
    FST float ptr [EBX + 0x1ffb0]       ; 0046bc9b
    FLDZ                                ; 0046bca1
    FCOMPP                              ; 0046bca3
    FNSTSW AX                           ; 0046bca5
    SAHF                                ; 0046bca7
    JBE 0x0046a218                      ; 0046bca8
        ;   XREF to: 0046a218 (CONDITIONAL_JUMP)  ; LAB_0046a218
    MOV dword ptr [EBX + 0x1ffb0],EDX   ; 0046bcae
    JMP 0x0046a218                      ; 0046bcb4
        ;   XREF to: 0046a218 (UNCONDITIONAL_JUMP)  ; LAB_0046a218
    PUSH EBX                            ; 0046bcb9
        ;   Label: LAB_0046bcb9
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0 ; 0046bcba
        ;   XREF to: 004ebbe0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopPushingBox_FUN_004ebbe0(CHero * this_ptr)
    ADD ESP,0x4                         ; 0046bcbf
    JMP 0x0046a472                      ; 0046bcc2
        ;   XREF to: 0046a472 (UNCONDITIONAL_JUMP)  ; LAB_0046a472
    PUSH EBX                            ; 0046bcc7
        ;   Label: LAB_0046bcc7
    CALL core_hero.cpp_FUN_004eb5b0     ; 0046bcc8
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eb5b0()
    ADD ESP,0x4                         ; 0046bccd
    JMP 0x0046a4f3                      ; 0046bcd0
        ;   XREF to: 0046a4f3 (UNCONDITIONAL_JUMP)  ; LAB_0046a4f3
    MOV ESI,dword ptr [EBX + 0x2001c]   ; 0046bcd5
        ;   Label: LAB_0046bcd5
    PUSH ESI                            ; 0046bcdb
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0046bcdc
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0046bce1
    MOV EDI,dword ptr [EBX + 0x20018]   ; 0046bce4
    PUSH EDI                            ; 0046bcea
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0046bceb
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0046bcf0
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0046bcf3
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH 0x1                            ; 0046bcf8
    CALL sound_sndmain.cpp_FUN_00572a10 ; 0046bcfa
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572a10(uint flag_mask)
    ADD ESP,0x4                         ; 0046bcff
    PUSH 0x5d9d35                       ; 0046bd02 | = "goggle-off.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0046bd07
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0046bd0c
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0046bd0f
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    MOV ESP,EBP                         ; 0046bd14
    POP EBP                             ; 0046bd16
    POP EDI                             ; 0046bd17
    POP ESI                             ; 0046bd18
    POP EBX                             ; 0046bd19
    RET                                 ; 0046bd1a
    MOV EAX,[0x0061d95c]                ; 0046bd1b | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_0046bd1b
    CMP dword ptr [EAX + 0x25c],0x0     ; 0046bd20 | g_CGameInstance.goggles_active
    JZ 0x0046a539                       ; 0046bd27
        ;   XREF to: 0046a539 (CONDITIONAL_JUMP)  ; LAB_0046a539
    MOV EDI,dword ptr [EBX + 0x2001c]   ; 0046bd2d
    PUSH EDI                            ; 0046bd33
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0046bd34
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0046bd39
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0046bd3c
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
    PUSH 0x1                            ; 0046bd41
    CALL sound_sndmain.cpp_FUN_00572a10 ; 0046bd43
        ;   XREF to: 00572a10 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572a10(uint flag_mask)
    ADD ESP,0x4                         ; 0046bd48
    PUSH 0x5d9d44                       ; 0046bd4b | = "goggle-on.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0046bd50
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0046bd55
    PUSH 0x0                            ; 0046bd58
    MOV dword ptr [EBX + 0x2001c],EAX   ; 0046bd5a
    CALL sound_sndmain.cpp_FUN_005728e0 ; 0046bd60
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0046bd65
    PUSH 0x5d9d52                       ; 0046bd68 | = "goggle-loop.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 0046bd6d
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 0046bd72
    MOV dword ptr [EBX + 0x20018],EAX   ; 0046bd75
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0046bd7b
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    PUSH 0x0                            ; 0046bd80
    PUSH 0x3f800000                     ; 0046bd82
    MOV EAX,dword ptr [EBX + 0x20018]   ; 0046bd87
    PUSH 0x3eaa7efa                     ; 0046bd8d
    PUSH EAX                            ; 0046bd92
    CALL sound_sndmain.cpp_setSfxFade_FUN_00573ab0 ; 0046bd93
        ;   XREF to: 00573ab0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxFade_FUN_00573ab0(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)
    MOV EAX,[0x0061d95c]                ; 0046bd98 | g_CGamePtr | g_CGameInstance
    MOV EDX,dword ptr [EAX + 0x264]     ; 0046bd9d | g_CGameInstance.flashlight_active
    ADD ESP,0x10                        ; 0046bda3
    TEST EDX,EDX                        ; 0046bda6
    JZ 0x0046a539                       ; 0046bda8
        ;   XREF to: 0046a539 (CONDITIONAL_JUMP)  ; LAB_0046a539
    PUSH 0x5d9d62                       ; 0046bdae | = "flashlit.wav"
    MOV dword ptr [EAX + 0x264],0x0     ; 0046bdb3 | g_CGameInstance.flashlight_active
    PUSH EBX                            ; 0046bdbd
    MOV EAX,dword ptr [EBX + 0x154]     ; 0046bdbe
    CALL dword ptr [EAX + 0x2c]         ; 0046bdc4
    ADD ESP,0x8                         ; 0046bdc7
    MOV ESP,EBP                         ; 0046bdca
    POP EBP                             ; 0046bdcc
    POP EDI                             ; 0046bdcd
    POP ESI                             ; 0046bdce
    POP EBX                             ; 0046bdcf
    RET                                 ; 0046bdd0

