; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   cube_size
; Local Variables:
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579397
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622ae4
;   TerminatedCString s_core_dtrace_cpp_00622af7
;   TerminatedCString s_CDemonRaytrace_crunch_ou_00622b0a
;   TerminatedCString s_Cube_crunch_00622b39
;   TerminatedCString s_core_dtrace_cpp_00622b45
;   float g_CubeGridScaleFactor = 8
;   float g_CubeGridMultiplier = 0.125
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
;   core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
;   core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
;   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0
;   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
;   core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
;   core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_free_FUN_005fe659
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495310
        ;   Label: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
    PUSH ESI                            ; 00495311
    PUSH EDI                            ; 00495312
    PUSH EBP                            ; 00495313
    MOV EBP,ESP                         ; 00495314
    SUB ESP,0xdc                        ; 00495316
    SUB EBP,0x7a                        ; 0049531c
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0049531f
    FLD float ptr [EDI + 0x1c]          ; 00495325
    FSUB float ptr [EDI + 0x10]         ; 00495328
    FLD1                                ; 0049532b
    FDIV float ptr [EBP + 0x92]         ; 0049532d
    FXCH                                ; 00495333
    FMUL ST1                            ; 00495335
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495337
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x76]        ; 0049533c
    MOV EAX,dword ptr [EBP + 0x76]      ; 0049533f
    FLD float ptr [EDI + 0x1c]          ; 00495342
    INC EAX                             ; 00495345
    FSUB float ptr [EDI + 0x10]         ; 00495346
    MOV dword ptr [EDI + 0x40],EAX      ; 00495349
    FILD dword ptr [EDI + 0x40]         ; 0049534c
    FDIVP                               ; 0049534f
    FLD float ptr [EDI + 0x20]          ; 00495351
    FSUB float ptr [EDI + 0x14]         ; 00495354
    FMUL ST2                            ; 00495357
    CALL crt_math.c_round_FUN_005fe6b0  ; 00495359
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x76]        ; 0049535e
    MOV EAX,dword ptr [EBP + 0x76]      ; 00495361
    FLD float ptr [EDI + 0x20]          ; 00495364
    INC EAX                             ; 00495367
    FSUB float ptr [EDI + 0x14]         ; 00495368
    MOV dword ptr [EDI + 0x44],EAX      ; 0049536b
    FILD dword ptr [EDI + 0x44]         ; 0049536e
    FDIVP                               ; 00495371
    FLD float ptr [EDI + 0x24]          ; 00495373
    FSUB float ptr [EDI + 0x18]         ; 00495376
    FMULP ST3                           ; 00495379
    FXCH ST2                            ; 0049537b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0049537d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x76]        ; 00495382
    MOV EAX,dword ptr [EBP + 0x76]      ; 00495385
    FLD float ptr [EDI + 0x24]          ; 00495388
    INC EAX                             ; 0049538b
    FSUB float ptr [EDI + 0x18]         ; 0049538c
    MOV dword ptr [EDI + 0x48],EAX      ; 0049538f
    FILD dword ptr [EDI + 0x48]         ; 00495392
    FDIVP                               ; 00495395
    LEA EAX,[EDI + 0x28]                ; 00495397
    FXCH                                ; 0049539a
    FSTP float ptr [EDI + 0x28]         ; 0049539c
    FXCH                                ; 0049539f
    FSTP float ptr [EDI + 0x2c]         ; 004953a1
    FSTP float ptr [EDI + 0x30]         ; 004953a4
    FLD float ptr [EAX]                 ; 004953a7
    FDIV float ptr [0x00622b5a]         ; 004953a9 | g_CubeGridScaleFactor
    FSTP float ptr [EBP + -0x6]         ; 004953af
    FLD float ptr [0x00622b5e]          ; 004953b2 | g_CubeGridMultiplier
    FLD float ptr [EAX + 0x4]           ; 004953b8
    FMUL ST1                            ; 004953bb
    FSTP float ptr [EBP + -0x2]         ; 004953bd
    FMUL float ptr [EAX + 0x8]          ; 004953c0
    LEA EDX,[EDI + 0x34]                ; 004953c3
    LEA EAX,[EBP + -0x6]                ; 004953c6
    FSTP float ptr [EBP + 0x2]          ; 004953c9
    CMP EDX,EAX                         ; 004953cc
    JZ 0x004953e1                       ; 004953ce
        ;   XREF to: 004953e1 (CONDITIONAL_JUMP)  ; LAB_004953e1
    MOV EAX,dword ptr [EBP + -0x6]      ; 004953d0
    MOV dword ptr [EDX],EAX             ; 004953d3
    MOV EAX,dword ptr [EBP + -0x2]      ; 004953d5
    MOV dword ptr [EDX + 0x4],EAX       ; 004953d8
    MOV EAX,dword ptr [EBP + 0x2]       ; 004953db
    MOV dword ptr [EDX + 0x8],EAX       ; 004953de
    PUSH EDI                            ; 004953e1
        ;   Label: LAB_004953e1
    CALL core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380 ; 004953e2
        ;   XREF to: 00494380 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace * this_ptr)
    MOV EBX,dword ptr [EDI + 0x4]       ; 004953e7
    LEA EAX,[EBX*0x4 + 0x0]             ; 004953ea
    ADD ESP,0x4                         ; 004953f1
    MOV EDX,EAX                         ; 004953f4
    SHL EAX,0x3                         ; 004953f6
    PUSH 0x2ed                          ; 004953f9
    SUB EAX,EDX                         ; 004953fe
    PUSH 0x622ae4                       ; 00495400 | = "..\\core\\dtrace.cpp"
    ADD EAX,0x4                         ; 00495405
    PUSH EAX                            ; 00495408
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00495409
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0049540e
    TEST EAX,EAX                        ; 00495411
    JZ 0x0049541b                       ; 00495413
        ;   XREF to: 0049541b (CONDITIONAL_JUMP)  ; LAB_0049541b
    ADD EAX,0x4                         ; 00495415
    MOV dword ptr [EAX + -0x4],EBX      ; 00495418
    MOV dword ptr [EBP + 0x46],EAX      ; 0049541b
        ;   Label: LAB_0049541b
    TEST EAX,EAX                        ; 0049541e
    JNZ 0x00495445                      ; 00495420
        ;   XREF to: 00495445 (CONDITIONAL_JUMP)  ; LAB_00495445
    MOV EDX,0x622af7                    ; 00495422 | = "..\\core\\dtrace.cpp"
    MOV ECX,0x2ee                       ; 00495427
    PUSH 0x622b0a                       ; 0049542c | = "CDemonRaytrace::crunch - out of refLi..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00495431 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00495437 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049543d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00495442
    MOV EBX,dword ptr [EDI + 0x4]       ; 00495445
        ;   Label: LAB_00495445
    XOR ECX,ECX                         ; 00495448
    TEST EBX,EBX                        ; 0049544a
    JLE 0x004955b9                      ; 0049544c
        ;   XREF to: 004955b9 (CONDITIONAL_JUMP)  ; LAB_004955b9
    MOV EBX,dword ptr [EBP + 0x46]      ; 00495452
    MOV dword ptr [EBP + 0x22],ECX      ; 00495455
    MOV EAX,dword ptr [EBP + 0x22]      ; 00495458
        ;   Label: LAB_00495458
    MOV ESI,dword ptr [EDI + 0x8]       ; 0049545b
    ADD ESI,EAX                         ; 0049545e
    MOV EAX,dword ptr [ESI]             ; 00495460
    MOV dword ptr [EBP + -0x1e],EAX     ; 00495462
    LEA EAX,[ESI + 0x4]                 ; 00495465
    MOV EAX,dword ptr [EAX]             ; 00495468
    MOV dword ptr [EBP + -0x1a],EAX     ; 0049546a
    LEA EAX,[ESI + 0x8]                 ; 0049546d
    MOV EAX,dword ptr [EAX]             ; 00495470
    MOV dword ptr [EBP + -0x16],EAX     ; 00495472
    LEA EAX,[ESI + 0xc]                 ; 00495475
    MOV dword ptr [EBP + 0x1e],EAX      ; 00495478
    MOV EAX,dword ptr [EAX]             ; 0049547b
    MOV dword ptr [EBP + 0x6],EAX       ; 0049547d
    MOV EAX,dword ptr [EBP + 0x1e]      ; 00495480
    ADD EAX,0x4                         ; 00495483
    MOV EAX,dword ptr [EAX]             ; 00495486
    MOV dword ptr [EBP + 0xa],EAX       ; 00495488
    MOV EAX,dword ptr [EBP + 0x1e]      ; 0049548b
    ADD EAX,0x8                         ; 0049548e
    MOV EAX,dword ptr [EAX]             ; 00495491
    MOV dword ptr [EBP + 0xe],EAX       ; 00495493
    MOV EAX,dword ptr [ESI + 0x18]      ; 00495496
    ADD ESI,0x18                        ; 00495499
    MOV dword ptr [EBP + 0x12],EAX      ; 0049549c
    LEA EAX,[ESI + 0x4]                 ; 0049549f
    MOV EAX,dword ptr [EAX]             ; 004954a2
    MOV dword ptr [EBP + 0x16],EAX      ; 004954a4
    MOV EAX,dword ptr [ESI + 0x8]       ; 004954a7
    MOV dword ptr [EBP + 0x1a],EAX      ; 004954aa
    MOV dword ptr [EBX],ECX             ; 004954ad
    MOV EAX,dword ptr [EBP + -0x1e]     ; 004954af
    MOV dword ptr [EBX + 0x10],EAX      ; 004954b2
    MOV EAX,dword ptr [EBX + 0x10]      ; 004954b5
    MOV dword ptr [EBX + 0x4],EAX       ; 004954b8
    MOV EAX,dword ptr [EBP + -0x1a]     ; 004954bb
    MOV dword ptr [EBX + 0x14],EAX      ; 004954be
    MOV EAX,dword ptr [EBX + 0x14]      ; 004954c1
    MOV dword ptr [EBX + 0x8],EAX       ; 004954c4
    MOV EAX,dword ptr [EBP + -0x16]     ; 004954c7
    MOV dword ptr [EBX + 0x18],EAX      ; 004954ca
    MOV EDX,EBX                         ; 004954cd
    MOV EAX,dword ptr [EBX + 0x18]      ; 004954cf
    MOV dword ptr [EBX + 0xc],EAX       ; 004954d2
    FLD float ptr [EBP + 0x6]           ; 004954d5
    FCOMP float ptr [EBX + 0x4]         ; 004954d8
    FNSTSW AX                           ; 004954db
    SAHF                                ; 004954dd
    JNC 0x004954e6                      ; 004954de
        ;   XREF to: 004954e6 (CONDITIONAL_JUMP)  ; LAB_004954e6
    MOV EAX,dword ptr [EBP + 0x6]       ; 004954e0
    MOV dword ptr [EBX + 0x4],EAX       ; 004954e3
    FLD float ptr [EBP + 0x6]           ; 004954e6
        ;   Label: LAB_004954e6
    FCOMP float ptr [EDX + 0x10]        ; 004954e9
    FNSTSW AX                           ; 004954ec
    SAHF                                ; 004954ee
    JBE 0x004954f7                      ; 004954ef
        ;   XREF to: 004954f7 (CONDITIONAL_JUMP)  ; LAB_004954f7
    MOV EAX,dword ptr [EBP + 0x6]       ; 004954f1
    MOV dword ptr [EDX + 0x10],EAX      ; 004954f4
    FLD float ptr [EBP + 0xa]           ; 004954f7
        ;   Label: LAB_004954f7
    FCOMP float ptr [EDX + 0x8]         ; 004954fa
    FNSTSW AX                           ; 004954fd
    SAHF                                ; 004954ff
    JNC 0x00495508                      ; 00495500
        ;   XREF to: 00495508 (CONDITIONAL_JUMP)  ; LAB_00495508
    MOV EAX,dword ptr [EBP + 0xa]       ; 00495502
    MOV dword ptr [EDX + 0x8],EAX       ; 00495505
    FLD float ptr [EBP + 0xa]           ; 00495508
        ;   Label: LAB_00495508
    FCOMP float ptr [EDX + 0x14]        ; 0049550b
    FNSTSW AX                           ; 0049550e
    SAHF                                ; 00495510
    JBE 0x00495519                      ; 00495511
        ;   XREF to: 00495519 (CONDITIONAL_JUMP)  ; LAB_00495519
    MOV EAX,dword ptr [EBP + 0xa]       ; 00495513
    MOV dword ptr [EDX + 0x14],EAX      ; 00495516
    FLD float ptr [EBP + 0xe]           ; 00495519
        ;   Label: LAB_00495519
    FCOMP float ptr [EDX + 0xc]         ; 0049551c
    FNSTSW AX                           ; 0049551f
    SAHF                                ; 00495521
    JNC 0x0049552a                      ; 00495522
        ;   XREF to: 0049552a (CONDITIONAL_JUMP)  ; LAB_0049552a
    MOV EAX,dword ptr [EBP + 0xe]       ; 00495524
    MOV dword ptr [EDX + 0xc],EAX       ; 00495527
    FLD float ptr [EBP + 0xe]           ; 0049552a
        ;   Label: LAB_0049552a
    FCOMP float ptr [EDX + 0x18]        ; 0049552d
    FNSTSW AX                           ; 00495530
    SAHF                                ; 00495532
    JBE 0x0049553b                      ; 00495533
        ;   XREF to: 0049553b (CONDITIONAL_JUMP)  ; LAB_0049553b
    MOV EAX,dword ptr [EBP + 0xe]       ; 00495535
    MOV dword ptr [EDX + 0x18],EAX      ; 00495538
    FLD float ptr [EBP + 0x12]          ; 0049553b
        ;   Label: LAB_0049553b
    FCOMP float ptr [EDX + 0x4]         ; 0049553e
    FNSTSW AX                           ; 00495541
    SAHF                                ; 00495543
    JNC 0x0049554c                      ; 00495544
        ;   XREF to: 0049554c (CONDITIONAL_JUMP)  ; LAB_0049554c
    MOV EAX,dword ptr [EBP + 0x12]      ; 00495546
    MOV dword ptr [EDX + 0x4],EAX       ; 00495549
    FLD float ptr [EBP + 0x12]          ; 0049554c
        ;   Label: LAB_0049554c
    FCOMP float ptr [EDX + 0x10]        ; 0049554f
    FNSTSW AX                           ; 00495552
    SAHF                                ; 00495554
    JBE 0x0049555d                      ; 00495555
        ;   XREF to: 0049555d (CONDITIONAL_JUMP)  ; LAB_0049555d
    MOV EAX,dword ptr [EBP + 0x12]      ; 00495557
    MOV dword ptr [EDX + 0x10],EAX      ; 0049555a
    FLD float ptr [EBP + 0x16]          ; 0049555d
        ;   Label: LAB_0049555d
    FCOMP float ptr [EDX + 0x8]         ; 00495560
    FNSTSW AX                           ; 00495563
    SAHF                                ; 00495565
    JNC 0x0049556e                      ; 00495566
        ;   XREF to: 0049556e (CONDITIONAL_JUMP)  ; LAB_0049556e
    MOV EAX,dword ptr [EBP + 0x16]      ; 00495568
    MOV dword ptr [EDX + 0x8],EAX       ; 0049556b
    FLD float ptr [EBP + 0x16]          ; 0049556e
        ;   Label: LAB_0049556e
    FCOMP float ptr [EDX + 0x14]        ; 00495571
    FNSTSW AX                           ; 00495574
    SAHF                                ; 00495576
    JBE 0x0049557f                      ; 00495577
        ;   XREF to: 0049557f (CONDITIONAL_JUMP)  ; LAB_0049557f
    MOV EAX,dword ptr [EBP + 0x16]      ; 00495579
    MOV dword ptr [EDX + 0x14],EAX      ; 0049557c
    FLD float ptr [EBP + 0x1a]          ; 0049557f
        ;   Label: LAB_0049557f
    FCOMP float ptr [EDX + 0xc]         ; 00495582
    FNSTSW AX                           ; 00495585
    SAHF                                ; 00495587
    JNC 0x00495590                      ; 00495588
        ;   XREF to: 00495590 (CONDITIONAL_JUMP)  ; LAB_00495590
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0049558a
    MOV dword ptr [EDX + 0xc],EAX       ; 0049558d
    FLD float ptr [EBP + 0x1a]          ; 00495590
        ;   Label: LAB_00495590
    FCOMP float ptr [EDX + 0x18]        ; 00495593
    FNSTSW AX                           ; 00495596
    SAHF                                ; 00495598
    JBE 0x004955a1                      ; 00495599
        ;   XREF to: 004955a1 (CONDITIONAL_JUMP)  ; LAB_004955a1
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0049559b
    MOV dword ptr [EDX + 0x18],EAX      ; 0049559e
    MOV ESI,dword ptr [EBP + 0x22]      ; 004955a1
        ;   Label: LAB_004955a1
    ADD EBX,0x1c                        ; 004955a4
    INC ECX                             ; 004955a7
    ADD ESI,0x38                        ; 004955a8
    MOV EAX,dword ptr [EDI + 0x4]       ; 004955ab
    MOV dword ptr [EBP + 0x22],ESI      ; 004955ae
    CMP ECX,EAX                         ; 004955b1
    JL 0x00495458                       ; 004955b3
        ;   XREF to: 00495458 (CONDITIONAL_JUMP)  ; LAB_00495458
    PUSH 0x622b39                       ; 004955b9 | = "Cube crunch"
        ;   Label: LAB_004955b9
    MOV EDX,dword ptr [0x00678a60]      ; 004955be | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004955c4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 004955c5
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 004955ca
    XOR ECX,ECX                         ; 004955cd
    MOV EBX,dword ptr [EDI + 0x40]      ; 004955cf
    MOV dword ptr [EBP + 0x4e],ECX      ; 004955d2
    TEST EBX,EBX                        ; 004955d5
    JLE 0x00495822                      ; 004955d7
        ;   XREF to: 00495822 (CONDITIONAL_JUMP)  ; LAB_00495822
    MOV EAX,dword ptr [EBP + 0x4e]      ; 004955dd
        ;   Label: LAB_004955dd
    MOV dword ptr [EBP + 0x76],EAX      ; 004955e0
    FILD dword ptr [EBP + 0x76]         ; 004955e3
    FMUL float ptr [EDI + 0x28]         ; 004955e6
    FADD float ptr [EDI + 0x10]         ; 004955e9
    FST float ptr [EBP + -0x12]         ; 004955ec
    FADD float ptr [EDI + 0x28]         ; 004955ef
    FSTP float ptr [EBP + -0x2a]        ; 004955f2
    MOV EAX,dword ptr [EDI + 0x4]       ; 004955f5
    XOR EDX,EDX                         ; 004955f8
    DEC EAX                             ; 004955fa
    MOV dword ptr [EBP + 0x2e],EDX      ; 004955fb
    MOV dword ptr [EBP + 0x32],EAX      ; 004955fe
    TEST EAX,EAX                        ; 00495601
    JL 0x0049565d                       ; 00495603
        ;   XREF to: 0049565d (CONDITIONAL_JUMP)  ; LAB_0049565d
    MOV EAX,dword ptr [EBP + 0x46]      ; 00495605
    MOV EDX,dword ptr [EBP + 0x32]      ; 00495608
    MOV dword ptr [EBP + 0x3a],EAX      ; 0049560b
    IMUL EAX,EDX,0x1c                   ; 0049560e
    MOV ECX,dword ptr [EBP + 0x46]      ; 00495611
    LEA ESI,[EAX + 0x4]                 ; 00495614
    ADD EAX,ECX                         ; 00495617
    ADD ESI,ECX                         ; 00495619
    MOV dword ptr [EBP + 0x3e],EAX      ; 0049561b
    MOV EAX,dword ptr [EBP + 0x3a]      ; 0049561e
        ;   Label: LAB_0049561e
    FLD float ptr [EAX + 0x4]           ; 00495621
    MOV dword ptr [EBP + 0x42],EAX      ; 00495624
    FCOMP float ptr [EBP + -0x2a]       ; 00495627
    FNSTSW AX                           ; 0049562a
    SAHF                                ; 0049562c
    JA 0x00495863                       ; 0049562d
        ;   XREF to: 00495863 (CONDITIONAL_JUMP)  ; LAB_00495863
    MOV EAX,dword ptr [EBP + 0x3a]      ; 00495633
    FLD float ptr [EAX + 0x10]          ; 00495636
    FCOMP float ptr [EBP + -0x12]       ; 00495639
    FNSTSW AX                           ; 0049563c
    SAHF                                ; 0049563e
    JC 0x00495863                       ; 0049563f
        ;   XREF to: 00495863 (CONDITIONAL_JUMP)  ; LAB_00495863
    MOV EAX,dword ptr [EBP + 0x2e]      ; 00495645
    MOV EBX,dword ptr [EBP + 0x3a]      ; 00495648
    INC EAX                             ; 0049564b
    ADD EBX,0x1c                        ; 0049564c
    MOV dword ptr [EBP + 0x2e],EAX      ; 0049564f
    MOV dword ptr [EBP + 0x3a],EBX      ; 00495652
    MOV EAX,dword ptr [EBP + 0x2e]      ; 00495655
        ;   Label: LAB_00495655
    CMP EAX,dword ptr [EBP + 0x32]      ; 00495658
    JLE 0x0049561e                      ; 0049565b
        ;   XREF to: 0049561e (CONDITIONAL_JUMP)  ; LAB_0049561e
    XOR ESI,ESI                         ; 0049565d
        ;   Label: LAB_0049565d
    MOV EAX,dword ptr [EDI + 0x44]      ; 0049565f
    MOV dword ptr [EBP + 0x52],ESI      ; 00495662
    TEST EAX,EAX                        ; 00495665
    JLE 0x00495810                      ; 00495667
        ;   XREF to: 00495810 (CONDITIONAL_JUMP)  ; LAB_00495810
    MOV EAX,dword ptr [EBP + 0x2e]      ; 0049566d
    DEC EAX                             ; 00495670
    MOV dword ptr [EBP + 0x2a],EAX      ; 00495671
    MOV EAX,dword ptr [EBP + 0x52]      ; 00495674
        ;   Label: LAB_00495674
    MOV dword ptr [EBP + 0x76],EAX      ; 00495677
    XOR EBX,EBX                         ; 0049567a
    FILD dword ptr [EBP + 0x76]         ; 0049567c
    FMUL float ptr [EDI + 0x2c]         ; 0049567f
    MOV dword ptr [EBP + 0x72],EBX      ; 00495682
    FADD float ptr [EDI + 0x14]         ; 00495685
    MOV EAX,dword ptr [EBP + 0x2a]      ; 00495688
    FST float ptr [EBP + -0xe]          ; 0049568b
    FADD float ptr [EDI + 0x2c]         ; 0049568e
    MOV dword ptr [EBP + 0x56],EAX      ; 00495691
    FSTP float ptr [EBP + -0x26]        ; 00495694
    TEST EAX,EAX                        ; 00495697
    JL 0x004956f3                       ; 00495699
        ;   XREF to: 004956f3 (CONDITIONAL_JUMP)  ; LAB_004956f3
    MOV EAX,dword ptr [EBP + 0x46]      ; 0049569b
    MOV ESI,dword ptr [EBP + 0x2a]      ; 0049569e
    MOV dword ptr [EBP + 0x62],EAX      ; 004956a1
    IMUL EAX,ESI,0x1c                   ; 004956a4
    MOV EDX,dword ptr [EBP + 0x46]      ; 004956a7
    LEA ESI,[EAX + 0x4]                 ; 004956aa
    ADD EAX,EDX                         ; 004956ad
    ADD ESI,EDX                         ; 004956af
    MOV dword ptr [EBP + 0x5e],EAX      ; 004956b1
    MOV EAX,dword ptr [EBP + 0x62]      ; 004956b4
        ;   Label: LAB_004956b4
    FLD float ptr [EAX + 0x8]           ; 004956b7
    MOV dword ptr [EBP + 0x66],EAX      ; 004956ba
    FCOMP float ptr [EBP + -0x26]       ; 004956bd
    FNSTSW AX                           ; 004956c0
    SAHF                                ; 004956c2
    JA 0x00495974                       ; 004956c3
        ;   XREF to: 00495974 (CONDITIONAL_JUMP)  ; LAB_00495974
    MOV EAX,dword ptr [EBP + 0x62]      ; 004956c9
    FLD float ptr [EAX + 0x14]          ; 004956cc
    FCOMP float ptr [EBP + -0xe]        ; 004956cf
    FNSTSW AX                           ; 004956d2
    SAHF                                ; 004956d4
    JC 0x00495974                       ; 004956d5
        ;   XREF to: 00495974 (CONDITIONAL_JUMP)  ; LAB_00495974
    MOV EAX,dword ptr [EBP + 0x72]      ; 004956db
    MOV EBX,dword ptr [EBP + 0x62]      ; 004956de
    INC EAX                             ; 004956e1
    ADD EBX,0x1c                        ; 004956e2
    MOV dword ptr [EBP + 0x72],EAX      ; 004956e5
    MOV dword ptr [EBP + 0x62],EBX      ; 004956e8
    MOV EAX,dword ptr [EBP + 0x72]      ; 004956eb
        ;   Label: LAB_004956eb
    CMP EAX,dword ptr [EBP + 0x56]      ; 004956ee
    JLE 0x004956b4                      ; 004956f1
        ;   XREF to: 004956b4 (CONDITIONAL_JUMP)  ; LAB_004956b4
    XOR ECX,ECX                         ; 004956f3
        ;   Label: LAB_004956f3
    MOV EBX,dword ptr [EDI + 0x48]      ; 004956f5
    MOV dword ptr [EBP + 0x6a],ECX      ; 004956f8
    TEST EBX,EBX                        ; 004956fb
    JLE 0x004957fe                      ; 004956fd
        ;   XREF to: 004957fe (CONDITIONAL_JUMP)  ; LAB_004957fe
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00495703
        ;   Label: LAB_00495703
    MOV dword ptr [EBP + 0x76],EAX      ; 00495706
    FILD dword ptr [EBP + 0x76]         ; 00495709
    FMUL float ptr [EDI + 0x30]         ; 0049570c
    FADD float ptr [EDI + 0x18]         ; 0049570f
    FST float ptr [EBP + -0xa]          ; 00495712
    FADD float ptr [EDI + 0x30]         ; 00495715
    FSTP float ptr [EBP + -0x22]        ; 00495718
    MOV EAX,dword ptr [EDI + 0x40]      ; 0049571b
    MOV ESI,dword ptr [EDI + 0x44]      ; 0049571e
    IMUL EAX,ESI                        ; 00495721
    MOV EDX,dword ptr [EDI + 0x48]      ; 00495724
    IMUL EAX,EDX                        ; 00495727
    MOV dword ptr [EBP + 0x76],EAX      ; 0049572a
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0049572d
    IMUL EAX,ESI                        ; 00495730
    ADD EAX,dword ptr [EBP + 0x52]      ; 00495733
    IMUL EAX,EDX                        ; 00495736
    SUB ESP,0x4                         ; 00495739
    MOV ECX,dword ptr [0x00678a60]      ; 0049573c | g_CEditorToolsInstance | g_CEditorToolsPtr
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00495742
    FILD dword ptr [EBP + 0x76]         ; 00495745
    ADD EAX,EDX                         ; 00495748
    FSTP float ptr [ESP]                ; 0049574a
    MOV dword ptr [EBP + 0x76],EAX      ; 0049574d
    SUB ESP,0x4                         ; 00495750
    FILD dword ptr [EBP + 0x76]         ; 00495753
    FSTP float ptr [ESP]                ; 00495756
    PUSH ECX                            ; 00495759 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 0049575a
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0049575f
    IMUL EAX,dword ptr [EDI + 0x44]     ; 00495762
    MOV ESI,dword ptr [EDI + 0x48]      ; 00495766
    IMUL ESI,EAX                        ; 00495769
    MOV EDX,dword ptr [EDI + 0x48]      ; 0049576c
    MOV EAX,dword ptr [EBP + 0x52]      ; 0049576f
    IMUL EAX,EDX                        ; 00495772
    ADD EAX,dword ptr [EBP + 0x6a]      ; 00495775
    ADD ESI,EAX                         ; 00495778
    IMUL ESI,ESI,0x34                   ; 0049577a
    MOV EAX,dword ptr [EDI + 0x50]      ; 0049577d
    ADD EAX,ESI                         ; 00495780
    ADD ESP,0xc                         ; 00495782
    MOV dword ptr [EBP + 0x6e],EAX      ; 00495785
    LEA EAX,[EBP + -0x2a]               ; 00495788
    PUSH EAX                            ; 0049578b
    LEA EAX,[EBP + -0x12]               ; 0049578c
    PUSH EAX                            ; 0049578f
    MOV EBX,dword ptr [EBP + 0x6e]      ; 00495790
    PUSH EBX                            ; 00495793
    XOR ESI,ESI                         ; 00495794
    CALL core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90 ; 00495796
        ;   XREF to: 00456a90 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90(CDemonCube * this_ptr, CVector3f * min_bounds, CVector3f * max_bounds)
    MOV EAX,dword ptr [EBP + 0x72]      ; 0049579b
    ADD ESP,0xc                         ; 0049579e
    TEST EAX,EAX                        ; 004957a1
    JLE 0x004957e0                      ; 004957a3
        ;   XREF to: 004957e0 (CONDITIONAL_JUMP)  ; LAB_004957e0
    MOV EBX,dword ptr [EBP + 0x46]      ; 004957a5
    MOV ECX,dword ptr [EBX]             ; 004957a8
        ;   Label: LAB_004957a8
    IMUL EDX,ECX,0x38                   ; 004957aa
    MOV EAX,dword ptr [EDI + 0x8]       ; 004957ad
    ADD EAX,EDX                         ; 004957b0
    MOV EDX,dword ptr [EDI + 0xc]       ; 004957b2
    ADD EDX,ECX                         ; 004957b5
    MOV DL,byte ptr [EDX]               ; 004957b7
    AND EDX,0xff                        ; 004957b9
    PUSH EDX                            ; 004957bf
    LEA EDX,[EAX + 0x18]                ; 004957c0
    PUSH EDX                            ; 004957c3
    LEA EDX,[EAX + 0xc]                 ; 004957c4
    PUSH EDX                            ; 004957c7
    PUSH EAX                            ; 004957c8
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004957c9
    PUSH EAX                            ; 004957cc
    ADD EBX,0x1c                        ; 004957cd
    INC ESI                             ; 004957d0
    CALL core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0 ; 004957d1
        ;   XREF to: 00456af0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0(CDemonCubeFrustum * frustum, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, ...)
    MOV EDX,dword ptr [EBP + 0x72]      ; 004957d6
    ADD ESP,0x14                        ; 004957d9
    CMP ESI,EDX                         ; 004957dc
    JL 0x004957a8                       ; 004957de
        ;   XREF to: 004957a8 (CONDITIONAL_JUMP)  ; LAB_004957a8
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004957e0
        ;   Label: LAB_004957e0
    PUSH EDX                            ; 004957e3
    CALL core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0 ; 004957e4
        ;   XREF to: 00456ed0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0(CDemonCube * this_ptr)
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004957e9
    ADD ESP,0x4                         ; 004957ec
    INC ECX                             ; 004957ef
    MOV EBX,dword ptr [EDI + 0x48]      ; 004957f0
    MOV dword ptr [EBP + 0x6a],ECX      ; 004957f3
    CMP ECX,EBX                         ; 004957f6
    JL 0x00495703                       ; 004957f8
        ;   XREF to: 00495703 (CONDITIONAL_JUMP)  ; LAB_00495703
    MOV EDX,dword ptr [EBP + 0x52]      ; 004957fe
        ;   Label: LAB_004957fe
    INC EDX                             ; 00495801
    MOV ECX,dword ptr [EDI + 0x44]      ; 00495802
    MOV dword ptr [EBP + 0x52],EDX      ; 00495805
    CMP EDX,ECX                         ; 00495808
    JL 0x00495674                       ; 0049580a
        ;   XREF to: 00495674 (CONDITIONAL_JUMP)  ; LAB_00495674
    MOV EDX,dword ptr [EBP + 0x4e]      ; 00495810
        ;   Label: LAB_00495810
    INC EDX                             ; 00495813
    MOV ECX,dword ptr [EDI + 0x40]      ; 00495814
    MOV dword ptr [EBP + 0x4e],EDX      ; 00495817
    CMP EDX,ECX                         ; 0049581a
    JL 0x004955dd                       ; 0049581c
        ;   XREF to: 004955dd (CONDITIONAL_JUMP)  ; LAB_004955dd
    MOV EBX,dword ptr [0x00678a60]      ; 00495822 | g_CEditorToolsInstance | g_CEditorToolsPtr
        ;   Label: LAB_00495822
    PUSH EBX                            ; 00495828 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 00495829
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0049582e
    PUSH EDI                            ; 00495831
    MOV ESI,0x622b45                    ; 00495832 | = "..\\core\\dtrace.cpp"
    CALL core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690 ; 00495837
        ;   XREF to: 00494690 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace * this_ptr)
    MOV EDI,0x38c                       ; 0049583c
    MOV EAX,dword ptr [EBP + 0x46]      ; 00495841
    ADD ESP,0x4                         ; 00495844
    MOV dword ptr [0x0067d20c],ESI      ; 00495847 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 0049584d | g_CurrentDebugLine
    TEST EAX,EAX                        ; 00495853
    JNZ 0x00495a85                      ; 00495855
        ;   XREF to: 00495a85 (CONDITIONAL_JUMP)  ; LAB_00495a85
    LEA ESP,[EBP + 0x7a]                ; 0049585b
    POP EBP                             ; 0049585e
    POP EDI                             ; 0049585f
    POP ESI                             ; 00495860
    POP EBX                             ; 00495861
    RET                                 ; 00495862
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00495863
        ;   Label: LAB_00495863
    MOV EBX,dword ptr [EBP + 0x42]      ; 00495866
    MOV dword ptr [EBP + 0x36],EAX      ; 00495869
    MOV EAX,dword ptr [EBP + 0x42]      ; 0049586c
    ADD EBX,0x4                         ; 0049586f
    MOV EAX,dword ptr [EAX]             ; 00495872
    PUSH EBX                            ; 00495874
    MOV dword ptr [EBP + -0x62],EAX     ; 00495875
    LEA EAX,[EBP + -0x5e]               ; 00495878
    PUSH EAX                            ; 0049587b
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00 ; 0049587c
        ;   XREF to: 0042fb00 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter * this_ptr, char * * actor_name)
    ADD ESP,0x8                         ; 00495881
    LEA EAX,[EBX + 0x4]                 ; 00495884
    PUSH EAX                            ; 00495887
    LEA EAX,[EBP + -0x5a]               ; 00495888
    PUSH EAX                            ; 0049588b
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0 ; 0049588c
        ;   XREF to: 0042faf0 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0(CCharacter * this_ptr, char * * actor_name)
    ADD ESP,0x8                         ; 00495891
    LEA EAX,[EBX + 0x8]                 ; 00495894
    PUSH EAX                            ; 00495897
    LEA EAX,[EBP + -0x56]               ; 00495898
    PUSH EAX                            ; 0049589b
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0 ; 0049589c
        ;   XREF to: 0042fae0 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter * this_ptr, char * * actor_name)
    MOV EAX,dword ptr [EBP + 0x42]      ; 004958a1
    ADD ESP,0x8                         ; 004958a4
    ADD EAX,0x10                        ; 004958a7
    PUSH EAX                            ; 004958aa
    MOV dword ptr [EBP + 0x76],EAX      ; 004958ab
    LEA EAX,[EBP + -0x52]               ; 004958ae
    PUSH EAX                            ; 004958b1
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00 ; 004958b2
        ;   XREF to: 0042fb00 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter * this_ptr, char * * actor_name)
    MOV EAX,dword ptr [EBP + 0x76]      ; 004958b7
    ADD ESP,0x8                         ; 004958ba
    ADD EAX,0x4                         ; 004958bd
    PUSH EAX                            ; 004958c0
    LEA EAX,[EBP + -0x4e]               ; 004958c1
    PUSH EAX                            ; 004958c4
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0 ; 004958c5
        ;   XREF to: 0042faf0 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0(CCharacter * this_ptr, char * * actor_name)
    MOV EAX,dword ptr [EBP + 0x76]      ; 004958ca
    ADD ESP,0x8                         ; 004958cd
    ADD EAX,0x8                         ; 004958d0
    PUSH EAX                            ; 004958d3
    LEA EAX,[EBP + -0x4a]               ; 004958d4
    PUSH EAX                            ; 004958d7
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0 ; 004958d8
        ;   XREF to: 0042fae0 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter * this_ptr, char * * actor_name)
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004958dd
    MOV EDX,dword ptr [EBP + 0x42]      ; 004958e0
    MOV dword ptr [EBP + 0x26],EAX      ; 004958e3
    MOV EAX,dword ptr [EAX]             ; 004958e6
    ADD ESP,0x8                         ; 004958e8
    MOV dword ptr [EDX],EAX             ; 004958eb
    CMP EBX,ESI                         ; 004958ed
    JZ 0x00495901                       ; 004958ef
        ;   XREF to: 00495901 (CONDITIONAL_JUMP)  ; LAB_00495901
    MOV EAX,dword ptr [ESI]             ; 004958f1
    MOV dword ptr [EBX],EAX             ; 004958f3
    MOV EAX,dword ptr [ESI + 0x4]       ; 004958f5
    MOV dword ptr [EBX + 0x4],EAX       ; 004958f8
    MOV EAX,dword ptr [ESI + 0x8]       ; 004958fb
    MOV dword ptr [EBX + 0x8],EAX       ; 004958fe
    LEA EAX,[EDX + 0x10]                ; 00495901
        ;   Label: LAB_00495901
    MOV EDX,dword ptr [EBP + 0x26]      ; 00495904
    ADD EDX,0x10                        ; 00495907
    CMP EAX,EDX                         ; 0049590a
    JZ 0x0049591e                       ; 0049590c
        ;   XREF to: 0049591e (CONDITIONAL_JUMP)  ; LAB_0049591e
    MOV ECX,dword ptr [EDX]             ; 0049590e
    MOV dword ptr [EAX],ECX             ; 00495910
    MOV ECX,dword ptr [EDX + 0x4]       ; 00495912
    MOV dword ptr [EAX + 0x4],ECX       ; 00495915
    MOV ECX,dword ptr [EDX + 0x8]       ; 00495918
    MOV dword ptr [EAX + 0x8],ECX       ; 0049591b
    MOV EBX,dword ptr [EBP + 0x36]      ; 0049591e
        ;   Label: LAB_0049591e
    MOV EAX,dword ptr [EBP + -0x62]     ; 00495921
    LEA EDX,[EBX + 0x4]                 ; 00495924
    MOV dword ptr [EBX],EAX             ; 00495927
    LEA EAX,[EBP + -0x5e]               ; 00495929
    CMP EDX,EAX                         ; 0049592c
    JZ 0x00495941                       ; 0049592e
        ;   XREF to: 00495941 (CONDITIONAL_JUMP)  ; LAB_00495941
    MOV EAX,dword ptr [EBP + -0x5e]     ; 00495930
    MOV dword ptr [EDX],EAX             ; 00495933
    MOV EAX,dword ptr [EBP + -0x5a]     ; 00495935
    MOV dword ptr [EDX + 0x4],EAX       ; 00495938
    MOV EAX,dword ptr [EBP + -0x56]     ; 0049593b
    MOV dword ptr [EDX + 0x8],EAX       ; 0049593e
    LEA EAX,[EBP + -0x52]               ; 00495941
        ;   Label: LAB_00495941
    LEA EDX,[EBX + 0x10]                ; 00495944
    CMP EDX,EAX                         ; 00495947
    JZ 0x0049595c                       ; 00495949
        ;   XREF to: 0049595c (CONDITIONAL_JUMP)  ; LAB_0049595c
    MOV EAX,dword ptr [EBP + -0x52]     ; 0049594b
    MOV dword ptr [EDX],EAX             ; 0049594e
    MOV EAX,dword ptr [EBP + -0x4e]     ; 00495950
    MOV dword ptr [EDX + 0x4],EAX       ; 00495953
    MOV EAX,dword ptr [EBP + -0x4a]     ; 00495956
    MOV dword ptr [EDX + 0x8],EAX       ; 00495959
    MOV EDX,dword ptr [EBP + 0x3e]      ; 0049595c
        ;   Label: LAB_0049595c
    MOV ECX,dword ptr [EBP + 0x32]      ; 0049595f
    SUB ESI,0x1c                        ; 00495962
    SUB EDX,0x1c                        ; 00495965
    DEC ECX                             ; 00495968
    MOV dword ptr [EBP + 0x3e],EDX      ; 00495969
    MOV dword ptr [EBP + 0x32],ECX      ; 0049596c
    JMP 0x00495655                      ; 0049596f
        ;   XREF to: 00495655 (UNCONDITIONAL_JUMP)  ; LAB_00495655
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00495974
        ;   Label: LAB_00495974
    MOV EBX,dword ptr [EBP + 0x66]      ; 00495977
    MOV dword ptr [EBP + 0x5a],EAX      ; 0049597a
    MOV EAX,dword ptr [EBP + 0x66]      ; 0049597d
    ADD EBX,0x4                         ; 00495980
    MOV EAX,dword ptr [EAX]             ; 00495983
    PUSH EBX                            ; 00495985
    MOV dword ptr [EBP + -0x46],EAX     ; 00495986
    LEA EAX,[EBP + -0x42]               ; 00495989
    PUSH EAX                            ; 0049598c
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00 ; 0049598d
        ;   XREF to: 0042fb00 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter * this_ptr, char * * actor_name)
    ADD ESP,0x8                         ; 00495992
    LEA EAX,[EBX + 0x4]                 ; 00495995
    PUSH EAX                            ; 00495998
    LEA EAX,[EBP + -0x3e]               ; 00495999
    PUSH EAX                            ; 0049599c
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0 ; 0049599d
        ;   XREF to: 0042faf0 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0(CCharacter * this_ptr, char * * actor_name)
    ADD ESP,0x8                         ; 004959a2
    LEA EAX,[EBX + 0x8]                 ; 004959a5
    PUSH EAX                            ; 004959a8
    LEA EAX,[EBP + -0x3a]               ; 004959a9
    PUSH EAX                            ; 004959ac
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0 ; 004959ad
        ;   XREF to: 0042fae0 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter * this_ptr, char * * actor_name)
    MOV EAX,dword ptr [EBP + 0x66]      ; 004959b2
    ADD ESP,0x8                         ; 004959b5
    ADD EAX,0x10                        ; 004959b8
    PUSH EAX                            ; 004959bb
    MOV dword ptr [EBP + 0x76],EAX      ; 004959bc
    LEA EAX,[EBP + -0x36]               ; 004959bf
    PUSH EAX                            ; 004959c2
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00 ; 004959c3
        ;   XREF to: 0042fb00 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00(CCharacter * this_ptr, char * * actor_name)
    MOV EAX,dword ptr [EBP + 0x76]      ; 004959c8
    ADD ESP,0x8                         ; 004959cb
    ADD EAX,0x4                         ; 004959ce
    PUSH EAX                            ; 004959d1
    LEA EAX,[EBP + -0x32]               ; 004959d2
    PUSH EAX                            ; 004959d5
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0 ; 004959d6
        ;   XREF to: 0042faf0 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0(CCharacter * this_ptr, char * * actor_name)
    MOV EAX,dword ptr [EBP + 0x76]      ; 004959db
    ADD ESP,0x8                         ; 004959de
    ADD EAX,0x8                         ; 004959e1
    PUSH EAX                            ; 004959e4
    LEA EAX,[EBP + -0x2e]               ; 004959e5
    PUSH EAX                            ; 004959e8
    CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0 ; 004959e9
        ;   XREF to: 0042fae0 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(CCharacter * this_ptr, char * * actor_name)
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004959ee
    MOV EDX,dword ptr [EBP + 0x66]      ; 004959f1
    MOV dword ptr [EBP + 0x4a],EAX      ; 004959f4
    MOV EAX,dword ptr [EAX]             ; 004959f7
    ADD ESP,0x8                         ; 004959f9
    MOV dword ptr [EDX],EAX             ; 004959fc
    CMP EBX,ESI                         ; 004959fe
    JZ 0x00495a12                       ; 00495a00
        ;   XREF to: 00495a12 (CONDITIONAL_JUMP)  ; LAB_00495a12
    MOV EAX,dword ptr [ESI]             ; 00495a02
    MOV dword ptr [EBX],EAX             ; 00495a04
    MOV EAX,dword ptr [ESI + 0x4]       ; 00495a06
    MOV dword ptr [EBX + 0x4],EAX       ; 00495a09
    MOV EAX,dword ptr [ESI + 0x8]       ; 00495a0c
    MOV dword ptr [EBX + 0x8],EAX       ; 00495a0f
    LEA EAX,[EDX + 0x10]                ; 00495a12
        ;   Label: LAB_00495a12
    MOV EDX,dword ptr [EBP + 0x4a]      ; 00495a15
    ADD EDX,0x10                        ; 00495a18
    CMP EAX,EDX                         ; 00495a1b
    JZ 0x00495a2f                       ; 00495a1d
        ;   XREF to: 00495a2f (CONDITIONAL_JUMP)  ; LAB_00495a2f
    MOV ECX,dword ptr [EDX]             ; 00495a1f
    MOV dword ptr [EAX],ECX             ; 00495a21
    MOV ECX,dword ptr [EDX + 0x4]       ; 00495a23
    MOV dword ptr [EAX + 0x4],ECX       ; 00495a26
    MOV ECX,dword ptr [EDX + 0x8]       ; 00495a29
    MOV dword ptr [EAX + 0x8],ECX       ; 00495a2c
    MOV EBX,dword ptr [EBP + 0x5a]      ; 00495a2f
        ;   Label: LAB_00495a2f
    MOV EAX,dword ptr [EBP + -0x46]     ; 00495a32
    LEA EDX,[EBX + 0x4]                 ; 00495a35
    MOV dword ptr [EBX],EAX             ; 00495a38
    LEA EAX,[EBP + -0x42]               ; 00495a3a
    CMP EDX,EAX                         ; 00495a3d
    JZ 0x00495a52                       ; 00495a3f
        ;   XREF to: 00495a52 (CONDITIONAL_JUMP)  ; LAB_00495a52
    MOV EAX,dword ptr [EBP + -0x42]     ; 00495a41
    MOV dword ptr [EDX],EAX             ; 00495a44
    MOV EAX,dword ptr [EBP + -0x3e]     ; 00495a46
    MOV dword ptr [EDX + 0x4],EAX       ; 00495a49
    MOV EAX,dword ptr [EBP + -0x3a]     ; 00495a4c
    MOV dword ptr [EDX + 0x8],EAX       ; 00495a4f
    LEA EAX,[EBP + -0x36]               ; 00495a52
        ;   Label: LAB_00495a52
    LEA EDX,[EBX + 0x10]                ; 00495a55
    CMP EDX,EAX                         ; 00495a58
    JZ 0x00495a6d                       ; 00495a5a
        ;   XREF to: 00495a6d (CONDITIONAL_JUMP)  ; LAB_00495a6d
    MOV EAX,dword ptr [EBP + -0x36]     ; 00495a5c
    MOV dword ptr [EDX],EAX             ; 00495a5f
    MOV EAX,dword ptr [EBP + -0x32]     ; 00495a61
    MOV dword ptr [EDX + 0x4],EAX       ; 00495a64
    MOV EAX,dword ptr [EBP + -0x2e]     ; 00495a67
    MOV dword ptr [EDX + 0x8],EAX       ; 00495a6a
    MOV EDX,dword ptr [EBP + 0x5e]      ; 00495a6d
        ;   Label: LAB_00495a6d
    MOV ECX,dword ptr [EBP + 0x56]      ; 00495a70
    SUB ESI,0x1c                        ; 00495a73
    SUB EDX,0x1c                        ; 00495a76
    DEC ECX                             ; 00495a79
    MOV dword ptr [EBP + 0x5e],EDX      ; 00495a7a
    MOV dword ptr [EBP + 0x56],ECX      ; 00495a7d
    JMP 0x004956eb                      ; 00495a80
        ;   XREF to: 004956eb (UNCONDITIONAL_JUMP)  ; LAB_004956eb
    SUB EAX,0x4                         ; 00495a85
        ;   Label: LAB_00495a85
    PUSH EAX                            ; 00495a88
    CALL crt_memory.c_free_FUN_005fe659 ; 00495a89
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00495a8e
    LEA ESP,[EBP + 0x7a]                ; 00495a91
    POP EBP                             ; 00495a94
    POP EDI                             ; 00495a95
    POP ESI                             ; 00495a96
    POP EBX                             ; 00495a97
    RET                                 ; 00495a98

