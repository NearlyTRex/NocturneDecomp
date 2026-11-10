; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_004583ec(CCharacter *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d0347
;   undefined4 DAT_005d034f
;   undefined4 DAT_005d0357
;   undefined4 DAT_005d035f
;   undefined4 DAT_005d0367
;   undefined4 DAT_005d036f
;   CConsole* g_CConsolePtr = 007c158c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CLadderClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004583ec
        ;   Label: core_doc.cpp_FUN_004583ec
    PUSH EBX                            ; 004583f0
    PUSH ESI                            ; 004583f1
    PUSH EDI                            ; 004583f2
    PUSH EBP                            ; 004583f3
    MOV EBP,ESP                         ; 004583f4
    SUB ESP,0x148                       ; 004583f6
    AND ESP,0xfffffff8                  ; 004583fc
    PUSH 0x0                            ; 004583ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458401
    PUSH EAX                            ; 00458404
    MOV dword ptr [EAX + 0x25614],0x0   ; 00458405
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0 ; 0045840f
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a5a0(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x14c],EAX     ; 00458414
    FLD float ptr [ESP + 0x14c]         ; 0045841b
    ADD ESP,0x8                         ; 00458422
    FCOMP double ptr [0x005d0347]       ; 00458425 | DAT_005d0347
    FNSTSW AX                           ; 0045842b
    SAHF                                ; 0045842d
    JC 0x00458472                       ; 0045842e
        ;   XREF to: 00458472 (CONDITIONAL_JUMP)  ; LAB_00458472
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458430
    MOV ECX,dword ptr [EAX + 0x2620]    ; 00458433
    TEST ECX,ECX                        ; 00458439
    JNZ 0x00458472                      ; 0045843b
        ;   XREF to: 00458472 (CONDITIONAL_JUMP)  ; LAB_00458472
    CMP dword ptr [EAX + 0x2698],0x0    ; 0045843d
    JNZ 0x00458472                      ; 00458444
        ;   XREF to: 00458472 (CONDITIONAL_JUMP)  ; LAB_00458472
    MOV dword ptr [ESP + 0x13c],ECX     ; 00458446
    ADD EAX,0x20                        ; 0045844d
    MOV dword ptr [ESP + 0x138],ECX     ; 00458450
    MOV dword ptr [ESP + 0x134],EAX     ; 00458457
    MOV EAX,[0x0061b5a8]                ; 0045845e | g_CDemonSetPtr
        ;   Label: LAB_0045845e
    MOV EBX,dword ptr [ESP + 0x13c]     ; 00458463
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0045846a
    JL 0x0045849d                       ; 00458470
        ;   XREF to: 0045849d (CONDITIONAL_JUMP)  ; LAB_0045849d
    XOR EAX,EAX                         ; 00458472
        ;   Label: LAB_00458472
    MOV ESP,EBP                         ; 00458474
    POP EBP                             ; 00458476
    POP EDI                             ; 00458477
    POP ESI                             ; 00458478
    POP EBX                             ; 00458479
    RET                                 ; 0045847a
    MOV EBX,dword ptr [ESP + 0x13c]     ; 0045847b
        ;   Label: LAB_0045847b
    MOV ECX,dword ptr [ESP + 0x138]     ; 00458482
    INC EBX                             ; 00458489
    ADD ECX,0x4                         ; 0045848a
    MOV dword ptr [ESP + 0x13c],EBX     ; 0045848d
    MOV dword ptr [ESP + 0x138],ECX     ; 00458494
    JMP 0x0045845e                      ; 0045849b
        ;   XREF to: 0045845e (UNCONDITIONAL_JUMP)  ; LAB_0045845e
    MOV ECX,dword ptr [ESP + 0x138]     ; 0045849d
        ;   Label: LAB_0045849d
    MOV EBX,dword ptr [0x01d02fc0]      ; 004584a4 | g_CLadderClassInfo.name_hash
    ADD EAX,ECX                         ; 004584aa
    PUSH EBX                            ; 004584ac
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 004584ad
    PUSH EAX                            ; 004584b3
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004584b4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004584b9
    MOV EBX,EAX                         ; 004584bc
    MOV dword ptr [ESP + 0x140],EAX     ; 004584be
    TEST EAX,EAX                        ; 004584c5
    JZ 0x0045847b                       ; 004584c7
        ;   XREF to: 0045847b (CONDITIONAL_JUMP)  ; LAB_0045847b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004584c9
    FLD float ptr [EAX + 0x24]          ; 004584cc
    FSUB float ptr [EBX + 0x24]         ; 004584cf
    FABS                                ; 004584d2
    FCOMP double ptr [0x005d0357]       ; 004584d4 | DAT_005d0357
    FNSTSW AX                           ; 004584da
    SAHF                                ; 004584dc
    JA 0x0045847b                       ; 004584dd
        ;   XREF to: 0045847b (CONDITIONAL_JUMP)  ; LAB_0045847b
    MOV ESI,dword ptr [ESP + 0x134]     ; 004584df
    PUSH ESI                            ; 004584e6
    PUSH EBX                            ; 004584e7
    LEA ESI,[ESP + 0x70]                ; 004584e8
    LEA EDI,[ESP + 0xf4]                ; 004584ec
    CALL core_actor.cpp_FUN_00408de0    ; 004584f3
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x70]                ; 004584f8
    ADD ESP,0x8                         ; 004584fc
    MOVSD ES:EDI,ESI                    ; 004584ff
    MOVSD ES:EDI,ESI                    ; 00458500
    MOVSD ES:EDI,ESI                    ; 00458501
    FLD float ptr [ESP + 0xf4]          ; 00458502
    FST double ptr [ESP]                ; 00458509
    FABS                                ; 0045850c
    FCOMP double ptr [0x005d035f]       ; 0045850e | DAT_005d035f
    FNSTSW AX                           ; 00458514
    SAHF                                ; 00458516
    JA 0x0045847b                       ; 00458517
        ;   XREF to: 0045847b (CONDITIONAL_JUMP)  ; LAB_0045847b
    FLDZ                                ; 0045851d
    FCOMP double ptr [ESP]              ; 0045851f
    FNSTSW AX                           ; 00458522
    SAHF                                ; 00458524
    JA 0x0045847b                       ; 00458525
        ;   XREF to: 0045847b (CONDITIONAL_JUMP)  ; LAB_0045847b
    PUSH EBX                            ; 0045852b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045852c
    LEA ESI,[ESP + 0xc]                 ; 00458532
    LEA EDI,[ESP + 0x24]                ; 00458536
    CALL dword ptr [EAX + 0x24]         ; 0045853a
    MOV ECX,0x6                         ; 0045853d
    LEA ESI,[ESP + 0xc]                 ; 00458542
    ADD ESP,0x4                         ; 00458546
    MOVSD.REP ES:EDI,ESI                ; 00458549
    FLD float ptr [ESP + 0xec]          ; 0045854b
    FCOMP float ptr [ESP + 0x2c]        ; 00458552
    FNSTSW AX                           ; 00458556
    SAHF                                ; 00458558
    JBE 0x00458580                      ; 00458559
        ;   XREF to: 00458580 (CONDITIONAL_JUMP)  ; LAB_00458580
    FLD float ptr [ESP + 0x2c]          ; 0045855b
    FLD1                                ; 0045855f
    FADDP                               ; 00458561
    FLD float ptr [ESP + 0xec]          ; 00458563
    FCOMPP                              ; 0045856a
    FNSTSW AX                           ; 0045856c
    SAHF                                ; 0045856e
    JA 0x0045847b                       ; 0045856f
        ;   XREF to: 0045847b (CONDITIONAL_JUMP)  ; LAB_0045847b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00458575
    MOV dword ptr [ESP + 0xec],EAX      ; 00458579
    FLD float ptr [ESP + 0xec]          ; 00458580
        ;   Label: LAB_00458580
    FCOMP float ptr [ESP + 0x20]        ; 00458587
    FNSTSW AX                           ; 0045858b
    SAHF                                ; 0045858d
    JNC 0x004585b7                      ; 0045858e
        ;   XREF to: 004585b7 (CONDITIONAL_JUMP)  ; LAB_004585b7
    FLD float ptr [ESP + 0x20]          ; 00458590
    FADD double ptr [0x005d0367]        ; 00458594 | DAT_005d0367
    FLD float ptr [ESP + 0xec]          ; 0045859a
    FCOMPP                              ; 004585a1
    FNSTSW AX                           ; 004585a3
    SAHF                                ; 004585a5
    JC 0x0045847b                       ; 004585a6
        ;   XREF to: 0045847b (CONDITIONAL_JUMP)  ; LAB_0045847b
    MOV EAX,dword ptr [ESP + 0x20]      ; 004585ac
    MOV dword ptr [ESP + 0xec],EAX      ; 004585b0
    FLD float ptr [ESP + 0x20]          ; 004585b7
        ;   Label: LAB_004585b7
    FLD float ptr [ESP + 0x24]          ; 004585bb
    FLD float ptr [ESP + 0x28]          ; 004585bf
    LEA EDI,[ESP + 0xc8]                ; 004585c3
    LEA ESI,[ESP + 0x5c]                ; 004585ca
    FXCH ST2                            ; 004585ce
    FADD float ptr [ESP + 0x2c]         ; 004585d0
    FXCH                                ; 004585d4
    FADD float ptr [ESP + 0x30]         ; 004585d6
    FXCH ST2                            ; 004585da
    FADD float ptr [ESP + 0x34]         ; 004585dc
    FXCH                                ; 004585e0
    FSTP float ptr [ESP + 0x5c]         ; 004585e2
    FXCH                                ; 004585e6
    FSTP float ptr [ESP + 0x60]         ; 004585e8
    FSTP float ptr [ESP + 0x64]         ; 004585ec
    MOVSD ES:EDI,ESI                    ; 004585f0
    MOVSD ES:EDI,ESI                    ; 004585f1
    MOVSD ES:EDI,ESI                    ; 004585f2
    FLD float ptr [0x005d034f]          ; 004585f3 | DAT_005d034f
    FLD float ptr [ESP + 0xc8]          ; 004585f9
    FMUL ST1                            ; 00458600
    FLD float ptr [ESP + 0xcc]          ; 00458602
    FMUL ST2                            ; 00458609
    FLD float ptr [ESP + 0xd0]          ; 0045860b
    FMULP ST3                           ; 00458612
    LEA EDI,[ESP + 0x110]               ; 00458614
    LEA ESI,[ESP + 0x104]               ; 0045861b
    FXCH                                ; 00458622
    FSTP float ptr [ESP + 0x104]        ; 00458624
    FSTP float ptr [ESP + 0x108]        ; 0045862b
    FSTP float ptr [ESP + 0x10c]        ; 00458632
    MOVSD ES:EDI,ESI                    ; 00458639
    MOVSD ES:EDI,ESI                    ; 0045863a
    MOVSD ES:EDI,ESI                    ; 0045863b
    MOV EAX,dword ptr [ESP + 0x118]     ; 0045863c
    MOV dword ptr [ESP + 0xf4],EAX      ; 00458643
    LEA EAX,[ESP + 0xec]                ; 0045864a
    PUSH EAX                            ; 00458651
    MOV EDI,dword ptr [ESP + 0x144]     ; 00458652
    PUSH EDI                            ; 00458659
    LEA ESI,[ESP + 0xe8]                ; 0045865a
    LEA EBX,[ESP + 0xf4]                ; 00458661
    CALL core_actor.cpp_FUN_00408d70    ; 00458668
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA EDI,[ESP + 0x58]                ; 0045866d
    LEA ESI,[ESP + 0xe8]                ; 00458671
    ADD ESP,0x8                         ; 00458678
    LEA EAX,[ESP + 0x50]                ; 0045867b
    MOVSD ES:EDI,ESI                    ; 0045867f
    MOVSD ES:EDI,ESI                    ; 00458680
    MOVSD ES:EDI,ESI                    ; 00458681
    CMP EBX,EAX                         ; 00458682
    JZ 0x004586a7                       ; 00458684
        ;   XREF to: 004586a7 (CONDITIONAL_JUMP)  ; LAB_004586a7
    MOV EAX,dword ptr [ESP + 0x50]      ; 00458686
    MOV dword ptr [ESP + 0xec],EAX      ; 0045868a
    MOV EAX,dword ptr [ESP + 0x54]      ; 00458691
    MOV dword ptr [ESP + 0xf0],EAX      ; 00458695
    MOV EAX,dword ptr [ESP + 0x58]      ; 0045869c
    MOV dword ptr [ESP + 0xf4],EAX      ; 004586a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004586a7
        ;   Label: LAB_004586a7
    MOV EAX,dword ptr [EAX + 0x44]      ; 004586aa
    MOV dword ptr [ESP + 0x12c],EAX     ; 004586ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 004586b4
    MOV EAX,dword ptr [EAX + 0x50]      ; 004586b7
    MOV dword ptr [ESP + 0x124],EAX     ; 004586ba
    MOV EAX,dword ptr [EBP + 0x14]      ; 004586c1
    MOV EAX,dword ptr [EAX + 0x5c]      ; 004586c4
    MOV dword ptr [ESP + 0x11c],EAX     ; 004586c7
    MOV EAX,dword ptr [ESP + 0x140]     ; 004586ce
    MOV EAX,dword ptr [EAX + 0x44]      ; 004586d5
    MOV dword ptr [ESP + 0x130],EAX     ; 004586d8
    MOV EAX,dword ptr [ESP + 0x140]     ; 004586df
    MOV EAX,dword ptr [EAX + 0x50]      ; 004586e6
    MOV dword ptr [ESP + 0x120],EAX     ; 004586e9
    FLD float ptr [ESP + 0x124]         ; 004586f0
    FMUL float ptr [ESP + 0x120]        ; 004586f7
    MOV EAX,dword ptr [ESP + 0x140]     ; 004586fe
    FLD float ptr [ESP + 0x12c]         ; 00458705
    FMUL float ptr [ESP + 0x130]        ; 0045870c
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00458713
    FADDP                               ; 00458716
    MOV dword ptr [ESP + 0x128],EAX     ; 00458718
    FLD float ptr [ESP + 0x11c]         ; 0045871f
    FMUL float ptr [ESP + 0x128]        ; 00458726
    FADDP                               ; 0045872d
    FABS                                ; 0045872f
    FLD double ptr [0x005d036f]         ; 00458731 | DAT_005d036f
    FCOS                                ; 00458737
    FCOMPP                              ; 00458739
    FNSTSW AX                           ; 0045873b
    SAHF                                ; 0045873d
    JA 0x0045847b                       ; 0045873e
        ;   XREF to: 0045847b (CONDITIONAL_JUMP)  ; LAB_0045847b
    MOV EAX,dword ptr [ESP + 0x140]     ; 00458744
    ADD EAX,0x20                        ; 0045874b
    PUSH EAX                            ; 0045874e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045874f
    PUSH EAX                            ; 00458752
    LEA ESI,[ESP + 0xac]                ; 00458753
    LEA EDI,[ESP + 0xb8]                ; 0045875a
    CALL core_actor.cpp_FUN_00408de0    ; 00458761
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xac]                ; 00458766
    ADD ESP,0x8                         ; 0045876d
    MOVSD ES:EDI,ESI                    ; 00458770
    MOVSD ES:EDI,ESI                    ; 00458771
    MOVSD ES:EDI,ESI                    ; 00458772
    FLD float ptr [ESP + 0xb8]          ; 00458773
    FLDZ                                ; 0045877a
    FCOMPP                              ; 0045877c
    FNSTSW AX                           ; 0045877e
    SAHF                                ; 00458780
    JNC 0x0045847b                      ; 00458781
        ;   XREF to: 0045847b (CONDITIONAL_JUMP)  ; LAB_0045847b
    PUSH 0x1                            ; 00458787
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458789
    PUSH 0x2c                           ; 0045878c
    ADD EAX,0x2b4                       ; 0045878e
    MOV EBX,dword ptr [ESP + 0x148]     ; 00458793
    PUSH EAX                            ; 0045879a
    MOV dword ptr [EAX + 0x25360],EBX   ; 0045879b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004587a1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004587a6
    MOV ESI,0x40000000                  ; 004587a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004587ae
    XOR EDX,EDX                         ; 004587b1
    MOV EBX,EAX                         ; 004587b3
    MOV dword ptr [EAX + 0x10a74],0x0   ; 004587b5
    LEA EAX,[ESP + 0xd4]                ; 004587bf
    MOV EDI,dword ptr [ESP + 0x140]     ; 004587c6
    PUSH EAX                            ; 004587cd
    MOV dword ptr [ESP + 0xd8],EDX      ; 004587ce
    MOV dword ptr [ESP + 0xe0],ESI      ; 004587d5
    PUSH EDI                            ; 004587dc
    LEA ESI,[ESP + 0x7c]                ; 004587dd
    MOV dword ptr [ESP + 0xe0],EDX      ; 004587e1
    CALL core_actor.cpp_FUN_00408d70    ; 004587e8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA EDI,[ESP + 0x100]               ; 004587ed
    LEA ESI,[ESP + 0x7c]                ; 004587f4
    ADD ESP,0x8                         ; 004587f8
    ADD EBX,0x25740                     ; 004587fb
    MOVSD ES:EDI,ESI                    ; 00458801
    MOVSD ES:EDI,ESI                    ; 00458802
    MOVSD ES:EDI,ESI                    ; 00458803
    LEA EAX,[ESP + 0x8c]                ; 00458804
    FLD float ptr [ESP + 0xf8]          ; 0045880b
    FLD float ptr [ESP + 0xfc]          ; 00458812
    FLD float ptr [ESP + 0x100]         ; 00458819
    LEA EDI,[ESP + 0x8c]                ; 00458820
    LEA ESI,[ESP + 0x80]                ; 00458827
    FXCH ST2                            ; 0045882e
    FSUB float ptr [EBX + 0xfffda8e0]   ; 00458830
    FXCH                                ; 00458836
    FSUB float ptr [EBX + 0xfffda8e4]   ; 00458838
    FXCH ST2                            ; 0045883e
    FSUB float ptr [EBX + 0xfffda8e8]   ; 00458840
    FXCH                                ; 00458846
    FSTP float ptr [ESP + 0x80]         ; 00458848
    FXCH                                ; 0045884f
    FSTP float ptr [ESP + 0x84]         ; 00458851
    FSTP float ptr [ESP + 0x88]         ; 00458858
    MOVSD ES:EDI,ESI                    ; 0045885f
    MOVSD ES:EDI,ESI                    ; 00458860
    MOVSD ES:EDI,ESI                    ; 00458861
    CMP EBX,EAX                         ; 00458862
    JZ 0x00458883                       ; 00458864
        ;   XREF to: 00458883 (CONDITIONAL_JUMP)  ; LAB_00458883
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00458866
    MOV dword ptr [EBX],EAX             ; 0045886d
    MOV EAX,dword ptr [ESP + 0x90]      ; 0045886f
    MOV dword ptr [EBX + 0x4],EAX       ; 00458876
    MOV EAX,dword ptr [ESP + 0x94]      ; 00458879
    MOV dword ptr [EBX + 0x8],EAX       ; 00458880
    FLD float ptr [ESP + 0xec]          ; 00458883
        ;   Label: LAB_00458883
    FLD float ptr [ESP + 0xf0]          ; 0045888a
    FLD float ptr [ESP + 0xf4]          ; 00458891
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458898
    LEA EDI,[ESP + 0x38]                ; 0045889b
    LEA ESI,[ESP + 0x44]                ; 0045889f
    FXCH ST2                            ; 004588a3
    FSUB float ptr [EAX + 0x20]         ; 004588a5
    FXCH                                ; 004588a8
    FSUB float ptr [EAX + 0x24]         ; 004588aa
    FXCH ST2                            ; 004588ad
    FSUB float ptr [EAX + 0x28]         ; 004588af
    FXCH                                ; 004588b2
    FSTP float ptr [ESP + 0x44]         ; 004588b4
    FXCH                                ; 004588b8
    FSTP float ptr [ESP + 0x48]         ; 004588ba
    FSTP float ptr [ESP + 0x4c]         ; 004588be
    LEA EAX,[ESP + 0x38]                ; 004588c2
    MOVSD ES:EDI,ESI                    ; 004588c6
    MOVSD ES:EDI,ESI                    ; 004588c7
    MOVSD ES:EDI,ESI                    ; 004588c8
    PUSH EAX                            ; 004588c9
    LEA ESI,[ESP + 0xc0]                ; 004588ca
    LEA EDI,[ESP + 0x9c]                ; 004588d1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004588d8
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0xc0]                ; 004588dd
    ADD ESP,0x4                         ; 004588e4
    MOVSD ES:EDI,ESI                    ; 004588e7
    MOVSD ES:EDI,ESI                    ; 004588e8
    MOVSD ES:EDI,ESI                    ; 004588e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004588ea
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004588ed
    MOV dword ptr [EBX + 0x2574c],EAX   ; 004588f4
    MOV EAX,dword ptr [ESP + 0x140]     ; 004588fa
    PUSH EAX                            ; 00458901
    PUSH 0x5d0332                       ; 00458902
    MOV EDX,dword ptr [0x00609ed0]      ; 00458907 | g_CConsolePtr
    PUSH EDX                            ; 0045890d
    MOV dword ptr [EBX + 0x25750],0x3f800000 ; 0045890e
    CALL engine_console.cpp_FUN_00436710 ; 00458918
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    MOV EAX,0x1                         ; 0045891d
    ADD ESP,0xc                         ; 00458922
    MOV ESP,EBP                         ; 00458925
    POP EBP                             ; 00458927
    POP EDI                             ; 00458928
    POP ESI                             ; 00458929
    POP EBX                             ; 0045892a
    RET                                 ; 0045892b

