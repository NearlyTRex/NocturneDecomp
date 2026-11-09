; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_FUN_00585230(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005edde2
;   undefined4 DAT_005eddea
;   undefined4 DAT_005eddf2
;   undefined4 DAT_005eddf6
;   undefined4 DAT_005eddfa
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360
;   core_flame.cpp_CFlame_process_FUN_0049f2e0
;   core_vessel.cpp_isStartLocTriggered_FUN_00585210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585230
        ;   Label: core_vessel.cpp_FUN_00585230
    PUSH ESI                            ; 00585231
    PUSH EDI                            ; 00585232
    PUSH EBP                            ; 00585233
    MOV EBP,ESP                         ; 00585234
    SUB ESP,0x5c                        ; 00585236
    AND ESP,0xfffffff8                  ; 00585239
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058523c
    MOV EDX,dword ptr [EBX + 0x510]     ; 0058523f
    CMP EDX,0x1                         ; 00585245
    JZ 0x0058550f                       ; 00585248
        ;   XREF to: 0058550f (CONDITIONAL_JUMP)  ; LAB_0058550f
    TEST EDX,EDX                        ; 0058524e
    JNZ 0x00585574                      ; 00585250
        ;   XREF to: 00585574 (CONDITIONAL_JUMP)  ; LAB_00585574
    FLD float ptr [EBP + 0x18]          ; 00585256
    FMUL float ptr [0x005eddf6]         ; 00585259 | DAT_005eddf6
    FADD float ptr [EBX + 0x920]        ; 0058525f
    FSTP float ptr [EBX + 0x920]        ; 00585265
    MOV ESI,dword ptr [EBX + 0x430]     ; 0058526b
        ;   Label: LAB_0058526b
    TEST ESI,ESI                        ; 00585271
    JNZ 0x00585508                      ; 00585273
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    CMP dword ptr [EBX + 0x51c],0x0     ; 00585279
    JNZ 0x005855af                      ; 00585280
        ;   XREF to: 005855af (CONDITIONAL_JUMP)  ; LAB_005855af
    LEA EDI,[EBX + 0x30]                ; 00585286
    MOV EAX,dword ptr [EBX + 0x514]     ; 00585289
    LEA ESI,[EBX + 0x20]                ; 0058528f
    CMP EAX,0x1                         ; 00585292
    JNZ 0x00585674                      ; 00585295
        ;   XREF to: 00585674 (CONDITIONAL_JUMP)  ; LAB_00585674
    FLD float ptr [EBX + 0x518]         ; 0058529b
    FADD float ptr [EBP + 0x18]         ; 005852a1
    FST float ptr [EBX + 0x518]         ; 005852a4
    FLD1                                ; 005852aa
    FCOMPP                              ; 005852ac
    FNSTSW AX                           ; 005852ae
    SAHF                                ; 005852b0
    JNC 0x00585508                      ; 005852b1
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    MOV EDX,dword ptr [EBX + 0x434]     ; 005852b7
    MOV dword ptr [EBX + 0x518],0x3f800000 ; 005852bd
    TEST EDX,EDX                        ; 005852c7
    JNZ 0x005855bc                      ; 005852c9
        ;   XREF to: 005855bc (CONDITIONAL_JUMP)  ; LAB_005855bc
    MOV EDX,dword ptr [EBX + 0x438]     ; 005852cf
    PUSH EDX                            ; 005852d5
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00585210 ; 005852d6
        ;   XREF to: 00585210 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_00585210(CCryptVessel * actor)
    ADD ESP,0x4                         ; 005852db
    TEST EAX,EAX                        ; 005852de
    JZ 0x00585326                       ; 005852e0
        ;   XREF to: 00585326 (CONDITIONAL_JUMP)  ; LAB_00585326
    MOV EDX,dword ptr [EBX + 0x504]     ; 005852e2
    MOV dword ptr [EBX + 0x514],0x2     ; 005852e8
    MOV EAX,dword ptr [EDX + 0x20]      ; 005852f2
    MOV dword ptr [ESI],EAX             ; 005852f5
    MOV EAX,dword ptr [EDX + 0x24]      ; 005852f7
    MOV dword ptr [ESI + 0x4],EAX       ; 005852fa
    MOV EAX,dword ptr [EDX + 0x28]      ; 005852fd
    MOV dword ptr [ESI + 0x8],EAX       ; 00585300
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00585303
    MOV dword ptr [ESI + 0xc],EAX       ; 00585306
    MOV EDX,dword ptr [EBX + 0x504]     ; 00585309
    ADD EDX,0x30                        ; 0058530f
    CMP EDI,EDX                         ; 00585312
    JZ 0x00585326                       ; 00585314
        ;   XREF to: 00585326 (CONDITIONAL_JUMP)  ; LAB_00585326
    MOV EAX,dword ptr [EDX]             ; 00585316
    MOV dword ptr [EDI],EAX             ; 00585318
    MOV EAX,dword ptr [EDX + 0x4]       ; 0058531a
    MOV dword ptr [EDI + 0x4],EAX       ; 0058531d
    MOV EAX,dword ptr [EDX + 0x8]       ; 00585320
    MOV dword ptr [EDI + 0x8],EAX       ; 00585323
    MOV EAX,dword ptr [EBX + 0x504]     ; 00585326
        ;   Label: LAB_00585326
    CMP dword ptr [EAX + 0x2e0],0x0     ; 0058532c
    JZ 0x0058578a                       ; 00585333
        ;   XREF to: 0058578a (CONDITIONAL_JUMP)  ; LAB_0058578a
    MOV dword ptr [ESP + 0x58],0x4479f99a ; 00585339
        ;   Label: LAB_00585339
    MOV EAX,[0x01cedef4]                ; 00585341 | DAT_01cedef4
    LEA EDI,[ESP + 0x30]                ; 00585346
    XOR EDX,EDX                         ; 0058534a
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 0058534c
    MOV dword ptr [ESP + 0x50],EDX      ; 00585353
    LEA EDX,[EBX + 0x20]                ; 00585357
    FLD float ptr [ESI + 0x24]          ; 0058535a
    FLD float ptr [ESI + 0x28]          ; 0058535d
    FLD float ptr [ESI + 0x20]          ; 00585360
    LEA ESI,[ESP + 0x24]                ; 00585363
    FSUB float ptr [EDX]                ; 00585367
    FXCH ST2                            ; 00585369
    FSUB float ptr [EDX + 0x4]          ; 0058536b
    FXCH                                ; 0058536e
    FSUB float ptr [EDX + 0x8]          ; 00585370
    FXCH ST2                            ; 00585373
    FSTP float ptr [ESP + 0x24]         ; 00585375
    FSTP float ptr [ESP + 0x28]         ; 00585379
    FSTP float ptr [ESP + 0x2c]         ; 0058537d
    MOVSD ES:EDI,ESI                    ; 00585381
    MOVSD ES:EDI,ESI                    ; 00585382
    MOVSD ES:EDI,ESI                    ; 00585383
    FLD float ptr [ESP + 0x34]          ; 00585384
    FMUL ST0                            ; 00585388
    FLD float ptr [ESP + 0x30]          ; 0058538a
    FMUL ST0                            ; 0058538e
    FADDP                               ; 00585390
    FLD float ptr [ESP + 0x38]          ; 00585392
    FMUL ST0                            ; 00585396
    FADDP                               ; 00585398
    FSQRT                               ; 0058539a
    MOV ECX,dword ptr [EBX + 0x434]     ; 0058539c
    FSTP float ptr [ESP + 0x54]         ; 005853a2
    TEST ECX,ECX                        ; 005853a6
    JZ 0x005853f8                       ; 005853a8
        ;   XREF to: 005853f8 (CONDITIONAL_JUMP)  ; LAB_005853f8
    FLD float ptr [EDX]                 ; 005853aa
    FLD float ptr [EDX + 0x4]           ; 005853ac
    FLD float ptr [EDX + 0x8]           ; 005853af
    LEA EDI,[ESP + 0xc]                 ; 005853b2
    LEA ESI,[ESP + 0x3c]                ; 005853b6
    FXCH ST2                            ; 005853ba
    FSUB float ptr [ECX + 0x20]         ; 005853bc
    FXCH                                ; 005853bf
    FSUB float ptr [ECX + 0x24]         ; 005853c1
    FXCH ST2                            ; 005853c4
    FSUB float ptr [ECX + 0x28]         ; 005853c6
    FXCH                                ; 005853c9
    FSTP float ptr [ESP + 0x3c]         ; 005853cb
    FXCH                                ; 005853cf
    FSTP float ptr [ESP + 0x40]         ; 005853d1
    FSTP float ptr [ESP + 0x44]         ; 005853d5
    MOVSD ES:EDI,ESI                    ; 005853d9
    MOVSD ES:EDI,ESI                    ; 005853da
    MOVSD ES:EDI,ESI                    ; 005853db
    FLD float ptr [ESP + 0x10]          ; 005853dc
    FMUL ST0                            ; 005853e0
    FLD float ptr [ESP + 0xc]           ; 005853e2
    FMUL ST0                            ; 005853e6
    FADDP                               ; 005853e8
    FLD float ptr [ESP + 0x14]          ; 005853ea
    FMUL ST0                            ; 005853ee
    FADDP                               ; 005853f0
    FSQRT                               ; 005853f2
    FSTP float ptr [ESP + 0x58]         ; 005853f4
    MOV ESI,dword ptr [EBX + 0x438]     ; 005853f8
        ;   Label: LAB_005853f8
    TEST ESI,ESI                        ; 005853fe
    JZ 0x0058544c                       ; 00585400
        ;   XREF to: 0058544c (CONDITIONAL_JUMP)  ; LAB_0058544c
    FLD float ptr [ESI + 0x24]          ; 00585402
    FLD float ptr [ESI + 0x28]          ; 00585405
    FLD float ptr [ESI + 0x20]          ; 00585408
    LEA EDX,[EBX + 0x20]                ; 0058540b
    MOV EDI,ESP                         ; 0058540e
    LEA ESI,[ESP + 0x18]                ; 00585410
    FSUB float ptr [EDX]                ; 00585414
    FXCH ST2                            ; 00585416
    FSUB float ptr [EDX + 0x4]          ; 00585418
    FXCH                                ; 0058541b
    FSUB float ptr [EDX + 0x8]          ; 0058541d
    FXCH ST2                            ; 00585420
    FSTP float ptr [ESP + 0x18]         ; 00585422
    FSTP float ptr [ESP + 0x1c]         ; 00585426
    FSTP float ptr [ESP + 0x20]         ; 0058542a
    MOVSD ES:EDI,ESI                    ; 0058542e
    MOVSD ES:EDI,ESI                    ; 0058542f
    MOVSD ES:EDI,ESI                    ; 00585430
    FLD float ptr [ESP + 0x4]           ; 00585431
    FMUL ST0                            ; 00585435
    FLD float ptr [ESP]                 ; 00585437
    FMUL ST0                            ; 0058543a
    FADDP                               ; 0058543c
    FLD float ptr [ESP + 0x8]           ; 0058543e
    FMUL ST0                            ; 00585442
    FADDP                               ; 00585444
    FSQRT                               ; 00585446
    FSTP float ptr [ESP + 0x50]         ; 00585448
    FLD float ptr [ESP + 0x58]          ; 0058544c
        ;   Label: LAB_0058544c
    FCOMP float ptr [EBX + 0x50c]       ; 00585450
    FNSTSW AX                           ; 00585456
    SAHF                                ; 00585458
    JNC 0x005854c3                      ; 00585459
        ;   XREF to: 005854c3 (CONDITIONAL_JUMP)  ; LAB_005854c3
    FLD float ptr [ESP + 0x54]          ; 0058545b
    FCOMP float ptr [EBX + 0x50c]       ; 0058545f
    FNSTSW AX                           ; 00585465
    SAHF                                ; 00585467
    JBE 0x005854c3                      ; 00585468
        ;   XREF to: 005854c3 (CONDITIONAL_JUMP)  ; LAB_005854c3
    FLD float ptr [ESP + 0x50]          ; 0058546a
    FCOMP float ptr [EBX + 0x50c]       ; 0058546e
    FNSTSW AX                           ; 00585474
    SAHF                                ; 00585476
    JBE 0x005854c3                      ; 00585477
        ;   XREF to: 005854c3 (CONDITIONAL_JUMP)  ; LAB_005854c3
    MOV EDX,dword ptr [EBX + 0x434]     ; 00585479
    MOV EDI,dword ptr [EDX + 0x430]     ; 0058547f
    TEST EDI,EDI                        ; 00585485
    JNZ 0x005854c3                      ; 00585487
        ;   XREF to: 005854c3 (CONDITIONAL_JUMP)  ; LAB_005854c3
    CMP dword ptr [EDX + 0x514],0x0     ; 00585489
    JNZ 0x005854c3                      ; 00585490
        ;   XREF to: 005854c3 (CONDITIONAL_JUMP)  ; LAB_005854c3
    MOV dword ptr [EDX + 0x514],0x1     ; 00585492
    MOV EAX,dword ptr [EBX + 0x434]     ; 0058549c
    MOV dword ptr [EAX + 0x518],EDI     ; 005854a2
    MOV EAX,dword ptr [EBX + 0x434]     ; 005854a8
    ADD EAX,0x43c                       ; 005854ae
    PUSH EAX                            ; 005854b3
    MOV EDX,dword ptr [0x006141f0]      ; 005854b4 | DAT_006141f0
    PUSH EDX                            ; 005854ba
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 005854bb
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005854c0
    MOV ECX,dword ptr [EBX + 0x434]     ; 005854c3
        ;   Label: LAB_005854c3
    TEST ECX,ECX                        ; 005854c9
    JZ 0x00585508                       ; 005854cb
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    MOV ESI,dword ptr [EBX + 0x438]     ; 005854cd
    TEST ESI,ESI                        ; 005854d3
    JZ 0x00585508                       ; 005854d5
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    MOV EAX,dword ptr [EBX + 0x508]     ; 005854d7
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005854dd
    JZ 0x00585508                       ; 005854e4
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    MOV EAX,dword ptr [ECX + 0x508]     ; 005854e6
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005854ec
    JZ 0x00585508                       ; 005854f3
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    MOV EAX,dword ptr [ESI + 0x508]     ; 005854f5
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005854fb
    JNZ 0x005857c5                      ; 00585502
        ;   XREF to: 005857c5 (CONDITIONAL_JUMP)  ; LAB_005857c5
    MOV ESP,EBP                         ; 00585508
        ;   Label: LAB_00585508
    POP EBP                             ; 0058550a
    POP EDI                             ; 0058550b
    POP ESI                             ; 0058550c
    POP EBX                             ; 0058550d
    RET                                 ; 0058550e
    LEA ESI,[EBX + 0x540]               ; 0058550f
        ;   Label: LAB_0058550f
    LEA EDX,[EBX + 0x20]                ; 00585515
    MOV EAX,dword ptr [EDX]             ; 00585518
    MOV dword ptr [ESI],EAX             ; 0058551a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0058551c
    MOV dword ptr [ESI + 0x4],EAX       ; 0058551f
    MOV EAX,dword ptr [EDX + 0x8]       ; 00585522
    MOV dword ptr [ESI + 0x8],EAX       ; 00585525
    MOV EAX,dword ptr [EDX + 0xc]       ; 00585528
    MOV dword ptr [ESI + 0xc],EAX       ; 0058552b
    LEA EDX,[EBX + 0x550]               ; 0058552e
    FLD float ptr [EBX + 0x544]         ; 00585534
    FADD float ptr [0x005eddfa]         ; 0058553a | DAT_005eddfa
    LEA ESI,[EBX + 0x30]                ; 00585540
    FSTP float ptr [EBX + 0x544]        ; 00585543
    CMP EDX,ESI                         ; 00585549
    JZ 0x0058555d                       ; 0058554b
        ;   XREF to: 0058555d (CONDITIONAL_JUMP)  ; LAB_0058555d
    MOV EAX,dword ptr [ESI]             ; 0058554d
    MOV dword ptr [EDX],EAX             ; 0058554f
    MOV EAX,dword ptr [ESI + 0x4]       ; 00585551
    MOV dword ptr [EDX + 0x4],EAX       ; 00585554
    MOV EAX,dword ptr [ESI + 0x8]       ; 00585557
    MOV dword ptr [EDX + 0x8],EAX       ; 0058555a
    LEA EAX,[EBX + 0x520]               ; 0058555d
        ;   Label: LAB_0058555d
    PUSH dword ptr [EBP + 0x18]         ; 00585563
    PUSH EAX                            ; 00585566
    CALL core_flame.cpp_CFlame_process_FUN_0049f2e0 ; 00585567
        ;   XREF to: 0049f2e0 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_process_FUN_0049f2e0(CFlame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058556c
    JMP 0x0058526b                      ; 0058556f
        ;   XREF to: 0058526b (UNCONDITIONAL_JUMP)  ; LAB_0058526b
    FLD float ptr [EBP + 0x18]          ; 00585574
        ;   Label: LAB_00585574
    FMUL double ptr [0x005edde2]        ; 00585577 | DAT_005edde2
    FADD float ptr [EBX + 0xaa4]        ; 0058557d
    FST float ptr [EBX + 0xaa4]         ; 00585583
    FCOMP double ptr [0x005eddea]       ; 00585589 | DAT_005eddea
    FNSTSW AX                           ; 0058558f
    SAHF                                ; 00585591
    JC 0x0058526b                       ; 00585592
        ;   XREF to: 0058526b (CONDITIONAL_JUMP)  ; LAB_0058526b
    FLD float ptr [EBX + 0xaa4]         ; 00585598
    FADD float ptr [0x005eddf2]         ; 0058559e | DAT_005eddf2
    FSTP float ptr [EBX + 0xaa4]        ; 005855a4
    JMP 0x0058526b                      ; 005855aa
        ;   XREF to: 0058526b (UNCONDITIONAL_JUMP)  ; LAB_0058526b
    MOV dword ptr [EBX + 0x51c],ESI     ; 005855af
        ;   Label: LAB_005855af
    MOV ESP,EBP                         ; 005855b5
    POP EBP                             ; 005855b7
    POP EDI                             ; 005855b8
    POP ESI                             ; 005855b9
    POP EBX                             ; 005855ba
    RET                                 ; 005855bb
    PUSH EDX                            ; 005855bc
        ;   Label: LAB_005855bc
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00585210 ; 005855bd
        ;   XREF to: 00585210 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_00585210(CCryptVessel * actor)
    ADD ESP,0x4                         ; 005855c2
    TEST EAX,EAX                        ; 005855c5
    JZ 0x0058562f                       ; 005855c7
        ;   XREF to: 0058562f (CONDITIONAL_JUMP)  ; LAB_0058562f
    MOV ESI,dword ptr [EBX + 0x438]     ; 005855c9
    PUSH ESI                            ; 005855cf
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00585210 ; 005855d0
        ;   XREF to: 00585210 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_00585210(CCryptVessel * actor)
    ADD ESP,0x4                         ; 005855d5
    TEST EAX,EAX                        ; 005855d8
    JZ 0x0058562f                       ; 005855da
        ;   XREF to: 0058562f (CONDITIONAL_JUMP)  ; LAB_0058562f
    MOV EDX,dword ptr [EBX + 0x504]     ; 005855dc
        ;   Label: LAB_005855dc
    MOV dword ptr [EBX + 0x514],0x2     ; 005855e2
    LEA ESI,[EBX + 0x20]                ; 005855ec
    MOV EAX,dword ptr [EDX + 0x20]      ; 005855ef
    MOV dword ptr [ESI],EAX             ; 005855f2
    MOV EAX,dword ptr [EDX + 0x24]      ; 005855f4
    MOV dword ptr [ESI + 0x4],EAX       ; 005855f7
    MOV EAX,dword ptr [EDX + 0x28]      ; 005855fa
    MOV dword ptr [ESI + 0x8],EAX       ; 005855fd
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00585600
    MOV dword ptr [ESI + 0xc],EAX       ; 00585603
    MOV ESI,dword ptr [EBX + 0x504]     ; 00585606
    LEA EDX,[EBX + 0x30]                ; 0058560c
    ADD ESI,0x30                        ; 0058560f
    CMP EDX,ESI                         ; 00585612
    JZ 0x00585326                       ; 00585614
        ;   XREF to: 00585326 (CONDITIONAL_JUMP)  ; LAB_00585326
    MOV EAX,dword ptr [ESI]             ; 0058561a
    MOV dword ptr [EDX],EAX             ; 0058561c
    MOV EAX,dword ptr [ESI + 0x4]       ; 0058561e
    MOV dword ptr [EDX + 0x4],EAX       ; 00585621
    MOV EAX,dword ptr [ESI + 0x8]       ; 00585624
    MOV dword ptr [EDX + 0x8],EAX       ; 00585627
    JMP 0x00585326                      ; 0058562a
        ;   XREF to: 00585326 (UNCONDITIONAL_JUMP)  ; LAB_00585326
    MOV EDI,dword ptr [EBX + 0x434]     ; 0058562f
        ;   Label: LAB_0058562f
    PUSH EDI                            ; 00585635
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00585210 ; 00585636
        ;   XREF to: 00585210 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_00585210(CCryptVessel * actor)
    ADD ESP,0x4                         ; 0058563b
    TEST EAX,EAX                        ; 0058563e
    JZ 0x0058565c                       ; 00585640
        ;   XREF to: 0058565c (CONDITIONAL_JUMP)  ; LAB_0058565c
    MOV dword ptr [EBX + 0x24],0x461c3f9a ; 00585642
        ;   Label: LAB_00585642
    MOV dword ptr [EBX + 0x28],0x461c3f9a ; 00585649
    MOV dword ptr [EBX + 0x20],0x461c3f9a ; 00585650
    JMP 0x00585326                      ; 00585657
        ;   XREF to: 00585326 (UNCONDITIONAL_JUMP)  ; LAB_00585326
    MOV EAX,dword ptr [EBX + 0x438]     ; 0058565c
        ;   Label: LAB_0058565c
    PUSH EAX                            ; 00585662
    CALL core_vessel.cpp_isStartLocTriggered_FUN_00585210 ; 00585663
        ;   XREF to: 00585210 (UNCONDITIONAL_CALL)  ; int core_vessel.cpp_isStartLocTriggered_FUN_00585210(CCryptVessel * actor)
    ADD ESP,0x4                         ; 00585668
    TEST EAX,EAX                        ; 0058566b
    JNZ 0x00585642                      ; 0058566d
        ;   XREF to: 00585642 (CONDITIONAL_JUMP)  ; LAB_00585642
    JMP 0x005855dc                      ; 0058566f
        ;   XREF to: 005855dc (UNCONDITIONAL_JUMP)  ; LAB_005855dc
    CMP EAX,0x2                         ; 00585674
        ;   Label: LAB_00585674
    JNZ 0x005856ae                      ; 00585677
        ;   XREF to: 005856ae (CONDITIONAL_JUMP)  ; LAB_005856ae
    FLD float ptr [EBX + 0x518]         ; 00585679
    FSUB float ptr [EBP + 0x18]         ; 0058567f
    FST float ptr [EBX + 0x518]         ; 00585682
    FLDZ                                ; 00585688
    FCOMPP                              ; 0058568a
    FNSTSW AX                           ; 0058568c
    SAHF                                ; 0058568e
    JBE 0x00585508                      ; 0058568f
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    MOV dword ptr [EBX + 0x514],0x0     ; 00585695
    MOV dword ptr [EBX + 0x518],0x0     ; 0058569f
    JMP 0x00585326                      ; 005856a9
        ;   XREF to: 00585326 (UNCONDITIONAL_JUMP)  ; LAB_00585326
    CMP EAX,0x3                         ; 005856ae
        ;   Label: LAB_005856ae
    JNZ 0x00585326                      ; 005856b1
        ;   XREF to: 00585326 (CONDITIONAL_JUMP)  ; LAB_00585326
    MOV EAX,dword ptr [EBX + 0x504]     ; 005856b7
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005856bd
    JNZ 0x005856d5                      ; 005856c4
        ;   XREF to: 005856d5 (CONDITIONAL_JUMP)  ; LAB_005856d5
    MOV EAX,dword ptr [EBX + 0x508]     ; 005856c6
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005856cc
    JZ 0x005856ee                       ; 005856d3
        ;   XREF to: 005856ee (CONDITIONAL_JUMP)  ; LAB_005856ee
    MOV dword ptr [EBX + 0x518],0x0     ; 005856d5
        ;   Label: LAB_005856d5
    MOV dword ptr [EBX + 0x514],0x0     ; 005856df
    JMP 0x00585326                      ; 005856e9
        ;   XREF to: 00585326 (UNCONDITIONAL_JUMP)  ; LAB_00585326
    FLD float ptr [EBX + 0x518]         ; 005856ee
        ;   Label: LAB_005856ee
    FSUB float ptr [EBP + 0x18]         ; 005856f4
    FST float ptr [EBX + 0x518]         ; 005856f7
    FLDZ                                ; 005856fd
    FCOMPP                              ; 005856ff
    FNSTSW AX                           ; 00585701
    SAHF                                ; 00585703
    JBE 0x00585508                      ; 00585704
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    PUSH 0x40800000                     ; 0058570a
    PUSH 0x44bb8000                     ; 0058570f
    PUSH 0x41000000                     ; 00585714
    PUSH ESI                            ; 00585719
    MOV EAX,[0x00614d30]                ; 0058571a | DAT_00614d30
    PUSH EAX                            ; 0058571f
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360 ; 00585720
        ;   XREF to: 0049e360 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_0049e360(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    MOV EDX,dword ptr [EBX + 0x504]     ; 00585725
    MOV dword ptr [EBX + 0x518],0x3f800000 ; 0058572b
    MOV EAX,dword ptr [EDX + 0x20]      ; 00585735
    MOV dword ptr [ESI],EAX             ; 00585738
    MOV EAX,dword ptr [EDX + 0x24]      ; 0058573a
    MOV dword ptr [ESI + 0x4],EAX       ; 0058573d
    MOV EAX,dword ptr [EDX + 0x28]      ; 00585740
    MOV dword ptr [ESI + 0x8],EAX       ; 00585743
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00585746
    MOV dword ptr [ESI + 0xc],EAX       ; 00585749
    MOV EDX,dword ptr [EBX + 0x504]     ; 0058574c
    ADD EDX,0x30                        ; 00585752
    ADD ESP,0x14                        ; 00585755
    CMP EDI,EDX                         ; 00585758
    JNZ 0x0058576b                      ; 0058575a
        ;   XREF to: 0058576b (CONDITIONAL_JUMP)  ; LAB_0058576b
    MOV dword ptr [EBX + 0x514],0x2     ; 0058575c
    JMP 0x00585326                      ; 00585766
        ;   XREF to: 00585326 (UNCONDITIONAL_JUMP)  ; LAB_00585326
    MOV EAX,dword ptr [EDX]             ; 0058576b
        ;   Label: LAB_0058576b
    MOV dword ptr [EDI],EAX             ; 0058576d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0058576f
    MOV dword ptr [EDI + 0x4],EAX       ; 00585772
    MOV EAX,dword ptr [EDX + 0x8]       ; 00585775
    MOV dword ptr [EDI + 0x8],EAX       ; 00585778
    MOV dword ptr [EBX + 0x514],0x2     ; 0058577b
    JMP 0x00585326                      ; 00585785
        ;   XREF to: 00585326 (UNCONDITIONAL_JUMP)  ; LAB_00585326
    MOV EAX,dword ptr [EBX + 0x508]     ; 0058578a
        ;   Label: LAB_0058578a
    CMP dword ptr [EAX + 0x2e0],0x0     ; 00585790
    JNZ 0x00585339                      ; 00585797
        ;   XREF to: 00585339 (CONDITIONAL_JUMP)  ; LAB_00585339
    CMP dword ptr [EBX + 0x514],0x0     ; 0058579d
    JNZ 0x00585508                      ; 005857a4
        ;   XREF to: 00585508 (CONDITIONAL_JUMP)  ; LAB_00585508
    MOV dword ptr [EBX + 0x518],0x40400000 ; 005857aa
    MOV dword ptr [EBX + 0x514],0x3     ; 005857b4
    MOV ESP,EBP                         ; 005857be
    POP EBP                             ; 005857c0
    POP EDI                             ; 005857c1
    POP ESI                             ; 005857c2
    POP EBX                             ; 005857c3
    RET                                 ; 005857c4
    LEA EAX,[EBX + 0x4a0]               ; 005857c5
        ;   Label: LAB_005857c5
    PUSH EAX                            ; 005857cb
    MOV ESI,dword ptr [0x006141f0]      ; 005857cc | DAT_006141f0
    PUSH ESI                            ; 005857d2
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 005857d3
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    MOV EAX,dword ptr [EBX + 0x434]     ; 005857d8
    MOV dword ptr [EAX + 0xaa8],0x1     ; 005857de
    MOV EAX,dword ptr [EBX + 0x438]     ; 005857e8
    MOV dword ptr [EAX + 0xaa8],0x1     ; 005857ee
    ADD ESP,0x8                         ; 005857f8
    MOV dword ptr [EBX + 0xaa8],0x1     ; 005857fb
    MOV ESP,EBP                         ; 00585805
    POP EBP                             ; 00585807
    POP EDI                             ; 00585808
    POP ESI                             ; 00585809
    POP EBX                             ; 0058580a
    RET                                 ; 0058580b

