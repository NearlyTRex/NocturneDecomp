; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_archive_FUN_004193c0(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_vertexCount_005d4381
;   TerminatedCString s_triCount_005d438d
;   TerminatedCString s_textureCount_005d4396
;   TerminatedCString s_d_d_d_005d43a3
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_005d43ad
;   TerminatedCString s_anon_005d43d1
;   TerminatedCString s_d_d_d_005d43db
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_005d43e6
;   TerminatedCString s_s_005d4409
;   TerminatedCString s_simBox_005d4410
;   TerminatedCString s_carriedByActor_005d4417
;   TerminatedCString s_bloodType_005d4426
;   TerminatedCString s_dontUseNormals_005d4430
;   TerminatedCString s_transparentGeometryFlag_005d443f
;   TerminatedCString s_renderInBackground_005d4457
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveBox_FUN_0040bbf0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90
;   core_bodypart.cpp_FUN_00418d00
;   crt_stdio.c_fscanf_FUN_005c04b0
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004193c0
        ;   Label: core_bodypart.cpp_CBodyPart_archive_FUN_004193c0
    PUSH ESI                            ; 004193c1
    PUSH EDI                            ; 004193c2
    PUSH EBP                            ; 004193c3
    SUB ESP,0x8                         ; 004193c4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004193c7
    PUSH EBX                            ; 004193cb
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004193cc
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004193d1
    PUSH 0x5d4381                       ; 004193d4 | = "vertexCount"
    LEA EAX,[EBX + 0x174]               ; 004193d9
    PUSH EAX                            ; 004193df
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004193e0
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004193e5
    PUSH 0x5d438d                       ; 004193e8 | = "triCount"
    LEA EAX,[EBX + 0x180]               ; 004193ed
    PUSH EAX                            ; 004193f3
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004193f4
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004193f9
    PUSH 0x5d4396                       ; 004193fc | = "textureCount"
    LEA EAX,[EBX + 0x18c]               ; 00419401
    PUSH EAX                            ; 00419407
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00419408
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x007c3038]      ; 0041940d | DAT_007c3038
    ADD ESP,0x8                         ; 00419413
    CMP EDX,0x1                         ; 00419416
    JZ 0x004195f5                       ; 00419419
        ;   XREF to: 004195f5 (CONDITIONAL_JUMP)  ; LAB_004195f5
    MOV ECX,dword ptr [EBX + 0x174]     ; 0041941f
    XOR EDI,EDI                         ; 00419425
    TEST ECX,ECX                        ; 00419427
    JLE 0x00419470                      ; 00419429
        ;   XREF to: 00419470 (CONDITIONAL_JUMP)  ; LAB_00419470
    XOR EBP,EBP                         ; 0041942b
    MOV ESI,dword ptr [EBX + 0x178]     ; 0041942d
        ;   Label: LAB_0041942d
    MOV EDX,dword ptr [ESI + EBP*0x1 + 0x8] ; 00419433
    PUSH EDX                            ; 00419437
    MOV ECX,dword ptr [ESI + EBP*0x1 + 0x4] ; 00419438
    PUSH ECX                            ; 0041943c
    MOV EAX,dword ptr [ESI + EBP*0x1]   ; 0041943d
    PUSH EAX                            ; 00419440
    PUSH 0x5d43db                       ; 00419441 | = "\t%d,%d,%d\n"
    MOV EDX,dword ptr [0x007c3034]      ; 00419446 | DAT_007c3034
    PUSH EDX                            ; 0041944c
    ADD EBP,0xc                         ; 0041944d
    INC EDI                             ; 00419450
    CALL crt_unknown.c_FUN_005c03c0     ; 00419451
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV ECX,dword ptr [EBX + 0x174]     ; 00419456
    ADD ESP,0x14                        ; 0041945c
    CMP EDI,ECX                         ; 0041945f
    JL 0x0041942d                       ; 00419461
        ;   XREF to: 0041942d (CONDITIONAL_JUMP)  ; LAB_0041942d
    LEA EAX,[EAX]                       ; 00419463
    LEA EDX,[EDX]                       ; 00419469
    NOP                                 ; 0041946f
    MOV ESI,dword ptr [EBX + 0x180]     ; 00419470
        ;   Label: LAB_00419470
    XOR EBP,EBP                         ; 00419476
    TEST ESI,ESI                        ; 00419478
    JLE 0x004194f0                      ; 0041947a
        ;   XREF to: 004194f0 (CONDITIONAL_JUMP)  ; LAB_004194f0
    MOV dword ptr [ESP + 0x4],EBP       ; 00419480
    XOR EDI,EDI                         ; 00419484
    MOV EAX,dword ptr [ESP + 0x4]       ; 00419486
        ;   Label: LAB_00419486
    MOV ESI,dword ptr [EBX + 0x184]     ; 0041948a
    ADD ESI,EAX                         ; 00419490
    MOV EDX,dword ptr [ESI + 0x38]      ; 00419492
    PUSH EDX                            ; 00419495
    MOV ECX,dword ptr [ESI + 0x34]      ; 00419496
    PUSH ECX                            ; 00419499
    MOV EAX,dword ptr [ESI + 0x30]      ; 0041949a
    PUSH EAX                            ; 0041949d
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0041949e
    PUSH EDX                            ; 004194a1
    MOV ECX,dword ptr [ESI + 0x28]      ; 004194a2
    PUSH ECX                            ; 004194a5
    MOV EAX,dword ptr [ESI + 0x24]      ; 004194a6
    PUSH EAX                            ; 004194a9
    MOV EDX,dword ptr [ESI + 0x20]      ; 004194aa
    PUSH EDX                            ; 004194ad
    MOV ECX,dword ptr [ESI + 0x1c]      ; 004194ae
    PUSH ECX                            ; 004194b1
    MOV EAX,dword ptr [ESI + 0x18]      ; 004194b2
    PUSH EAX                            ; 004194b5
    MOV EAX,dword ptr [EBX + 0x188]     ; 004194b6
    MOV EDX,dword ptr [EDI + EAX*0x1]   ; 004194bc
    PUSH EDX                            ; 004194bf
    PUSH 0x5d43e6                       ; 004194c0 | = "\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV ECX,dword ptr [0x007c3034]      ; 004194c5 | DAT_007c3034
    PUSH ECX                            ; 004194cb
    CALL crt_unknown.c_FUN_005c03c0     ; 004194cc
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x30                        ; 004194d1
    ADD EDI,0x4                         ; 004194d4
    MOV ESI,dword ptr [ESP + 0x4]       ; 004194d7
    INC EBP                             ; 004194db
    ADD ESI,0x3c                        ; 004194dc
    MOV EAX,dword ptr [EBX + 0x180]     ; 004194df
    MOV dword ptr [ESP + 0x4],ESI       ; 004194e5
    CMP EBP,EAX                         ; 004194e9
    JL 0x00419486                       ; 004194eb
        ;   XREF to: 00419486 (CONDITIONAL_JUMP)  ; LAB_00419486
    LEA EAX,[EAX]                       ; 004194ed
    MOV EDX,dword ptr [EBX + 0x18c]     ; 004194f0
        ;   Label: LAB_004194f0
    XOR EDI,EDI                         ; 004194f6
    TEST EDX,EDX                        ; 004194f8
    JLE 0x00419530                      ; 004194fa
        ;   XREF to: 00419530 (CONDITIONAL_JUMP)  ; LAB_00419530
    LEA ESI,[EBX + 0x198]               ; 004194fc
    PUSH ESI                            ; 00419502
        ;   Label: LAB_00419502
    PUSH 0x5d4409                       ; 00419503 | = "\t\"%s\"\n"
    MOV EBP,dword ptr [0x007c3034]      ; 00419508 | DAT_007c3034
    PUSH EBP                            ; 0041950e
    INC EDI                             ; 0041950f
    ADD ESI,0x18                        ; 00419510
    CALL crt_unknown.c_FUN_005c03c0     ; 00419513
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0x18c]     ; 00419518
    ADD ESP,0xc                         ; 0041951e
    CMP EDI,EAX                         ; 00419521
    JL 0x00419502                       ; 00419523
        ;   XREF to: 00419502 (CONDITIONAL_JUMP)  ; LAB_00419502
    LEA EAX,[EAX]                       ; 00419525
    LEA EDX,[EDX]                       ; 0041952b
    MOV EBX,EBX                         ; 0041952e
    CMP dword ptr [0x00610acc],0x2      ; 00419530 | g_CBodyPartClassVersion
        ;   Label: LAB_00419530
    JL 0x00419561                       ; 00419537
        ;   XREF to: 00419561 (CONDITIONAL_JUMP)  ; LAB_00419561
    PUSH 0x5d4410                       ; 00419539 | = "simBox"
    LEA EAX,[EBX + 0xcd0]               ; 0041953e
    PUSH EAX                            ; 00419544
    CALL core_actor.cpp_archiveBox_FUN_0040bbf0 ; 00419545
        ;   XREF to: 0040bbf0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveBox_FUN_0040bbf0(CBox * box_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041954a
    PUSH 0x5d4417                       ; 0041954d | = "carriedByActor"
    LEA EAX,[EBX + 0xf2c]               ; 00419552
    PUSH EAX                            ; 00419558
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 00419559
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040b6f0(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041955e
    CMP dword ptr [0x00610acc],0x3      ; 00419561 | g_CBodyPartClassVersion
        ;   Label: LAB_00419561
    JL 0x004195a6                       ; 00419568
        ;   XREF to: 004195a6 (CONDITIONAL_JUMP)  ; LAB_004195a6
    PUSH 0x5d4426                       ; 0041956a | = "bloodType"
    LEA EAX,[EBX + 0xcb8]               ; 0041956f
    PUSH EAX                            ; 00419575
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00419576
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041957b
    PUSH 0x5d4430                       ; 0041957e | = "dontUseNormals"
    LEA EAX,[EBX + 0xcb0]               ; 00419583
    PUSH EAX                            ; 00419589
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0041958a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041958f
    PUSH 0x5d443f                       ; 00419592 | = "transparentGeometryFlag"
    LEA EAX,[EBX + 0xcb4]               ; 00419597
    PUSH EAX                            ; 0041959d
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0041959e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004195a3
    CMP dword ptr [0x00610acc],0x4      ; 004195a6 | g_CBodyPartClassVersion
        ;   Label: LAB_004195a6
    JL 0x004195c3                       ; 004195ad
        ;   XREF to: 004195c3 (CONDITIONAL_JUMP)  ; LAB_004195c3
    PUSH 0x5d4457                       ; 004195af | = "renderInBackground"
    LEA EAX,[EBX + 0x158]               ; 004195b4
    PUSH EAX                            ; 004195ba
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004195bb
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004195c0
    CMP dword ptr [0x00610acc],0x5      ; 004195c3 | g_CBodyPartClassVersion
        ;   Label: LAB_004195c3
    JL 0x004195e0                       ; 004195ca
        ;   XREF to: 004195e0 (CONDITIONAL_JUMP)  ; LAB_004195e0
    PUSH 0x5d446a                       ; 004195cc | = "dontPickMeUp"
    LEA EAX,[EBX + 0xcc4]               ; 004195d1
    PUSH EAX                            ; 004195d7
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004195d8
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004195dd
    CMP dword ptr [0x00610acc],0x6      ; 004195e0 | g_CBodyPartClassVersion
        ;   Label: LAB_004195e0
    JGE 0x0041971e                      ; 004195e7
        ;   XREF to: 0041971e (CONDITIONAL_JUMP)  ; LAB_0041971e
    ADD ESP,0x8                         ; 004195ed
    POP EBP                             ; 004195f0
    POP EDI                             ; 004195f1
    POP ESI                             ; 004195f2
    POP EBX                             ; 004195f3
    RET                                 ; 004195f4
    MOV ESI,dword ptr [EBX + 0x180]     ; 004195f5
        ;   Label: LAB_004195f5
    PUSH ESI                            ; 004195fb
    MOV EDI,dword ptr [EBX + 0x174]     ; 004195fc
    PUSH EDI                            ; 00419602
    PUSH EBX                            ; 00419603
    XOR EBP,EBP                         ; 00419604
    CALL core_bodypart.cpp_FUN_00418d00 ; 00419606
        ;   XREF to: 00418d00 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00418d00()
    MOV EAX,dword ptr [EBX + 0x174]     ; 0041960b
    ADD ESP,0xc                         ; 00419611
    TEST EAX,EAX                        ; 00419614
    JLE 0x00419650                      ; 00419616
        ;   XREF to: 00419650 (CONDITIONAL_JUMP)  ; LAB_00419650
    XOR EDI,EDI                         ; 00419618
    MOV ESI,dword ptr [EBX + 0x178]     ; 0041961a
        ;   Label: LAB_0041961a
    ADD ESI,EDI                         ; 00419620
    LEA EAX,[ESI + 0x8]                 ; 00419622
    PUSH EAX                            ; 00419625
    LEA EAX,[ESI + 0x4]                 ; 00419626
    PUSH EAX                            ; 00419629
    PUSH ESI                            ; 0041962a
    PUSH 0x5d43a3                       ; 0041962b | = "%d,%d,%d\n"
    MOV EDX,dword ptr [0x007c3034]      ; 00419630 | DAT_007c3034
    PUSH EDX                            ; 00419636
    INC EBP                             ; 00419637
    ADD EDI,0xc                         ; 00419638
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0041963b
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x174]     ; 00419640
    ADD ESP,0x14                        ; 00419646
    CMP EBP,ECX                         ; 00419649
    JL 0x0041961a                       ; 0041964b
        ;   XREF to: 0041961a (CONDITIONAL_JUMP)  ; LAB_0041961a
    LEA EAX,[EAX]                       ; 0041964d
    MOV ESI,dword ptr [EBX + 0x180]     ; 00419650
        ;   Label: LAB_00419650
    XOR EBP,EBP                         ; 00419656
    TEST ESI,ESI                        ; 00419658
    JLE 0x004196d0                      ; 0041965a
        ;   XREF to: 004196d0 (CONDITIONAL_JUMP)  ; LAB_004196d0
    MOV dword ptr [ESP],EBP             ; 00419660
    XOR EDI,EDI                         ; 00419663
    MOV ESI,dword ptr [EBX + 0x184]     ; 00419665
        ;   Label: LAB_00419665
    ADD ESI,EDI                         ; 0041966b
    LEA EAX,[ESI + 0x38]                ; 0041966d
    PUSH EAX                            ; 00419670
    LEA EAX,[ESI + 0x34]                ; 00419671
    PUSH EAX                            ; 00419674
    LEA EAX,[ESI + 0x30]                ; 00419675
    PUSH EAX                            ; 00419678
    LEA EAX,[ESI + 0x2c]                ; 00419679
    PUSH EAX                            ; 0041967c
    LEA EAX,[ESI + 0x28]                ; 0041967d
    PUSH EAX                            ; 00419680
    LEA EAX,[ESI + 0x24]                ; 00419681
    PUSH EAX                            ; 00419684
    LEA EAX,[ESI + 0x20]                ; 00419685
    PUSH EAX                            ; 00419688
    LEA EAX,[ESI + 0x1c]                ; 00419689
    PUSH EAX                            ; 0041968c
    LEA EAX,[ESI + 0x18]                ; 0041968d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00419690
    PUSH EAX                            ; 00419694
    MOV EAX,dword ptr [EBX + 0x188]     ; 00419695
    ADD EAX,EDX                         ; 0041969b
    PUSH EAX                            ; 0041969d
    PUSH 0x5d43ad                       ; 0041969e | = "\t\t%d, %d,%d,%d, %d,%d,%d, %d,%d,%d\n"
    MOV ECX,dword ptr [0x007c3034]      ; 004196a3 | DAT_007c3034
    PUSH ECX                            ; 004196a9
    INC EBP                             ; 004196aa
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004196ab
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 004196b0
    MOV dword ptr [ESI + 0x4],0x3       ; 004196b3
    MOV ESI,dword ptr [ESP]             ; 004196ba
    ADD EDI,0x3c                        ; 004196bd
    ADD ESI,0x4                         ; 004196c0
    MOV EAX,dword ptr [EBX + 0x180]     ; 004196c3
    MOV dword ptr [ESP],ESI             ; 004196c9
    CMP EBP,EAX                         ; 004196cc
    JL 0x00419665                       ; 004196ce
        ;   XREF to: 00419665 (CONDITIONAL_JUMP)  ; LAB_00419665
    MOV EDX,dword ptr [EBX + 0x18c]     ; 004196d0
        ;   Label: LAB_004196d0
    XOR EDI,EDI                         ; 004196d6
    TEST EDX,EDX                        ; 004196d8
    JLE 0x00419710                      ; 004196da
        ;   XREF to: 00419710 (CONDITIONAL_JUMP)  ; LAB_00419710
    LEA ESI,[EBX + 0x198]               ; 004196dc
    PUSH ESI                            ; 004196e2
        ;   Label: LAB_004196e2
    PUSH 0x5d43d1                       ; 004196e3 | = " \"%[^\"]\"\n"
    MOV EBP,dword ptr [0x007c3034]      ; 004196e8 | DAT_007c3034
    PUSH EBP                            ; 004196ee
    INC EDI                             ; 004196ef
    ADD ESI,0x18                        ; 004196f0
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004196f3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x18c]     ; 004196f8
    ADD ESP,0xc                         ; 004196fe
    CMP EDI,EAX                         ; 00419701
    JL 0x004196e2                       ; 00419703
        ;   XREF to: 004196e2 (CONDITIONAL_JUMP)  ; LAB_004196e2
    LEA EAX,[EAX]                       ; 00419705
    LEA EDX,[EDX]                       ; 0041970b
    MOV EBX,EBX                         ; 0041970e
    PUSH EBX                            ; 00419710
        ;   Label: LAB_00419710
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90 ; 00419711
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00419b90(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 00419716
    JMP 0x00419530                      ; 00419719
        ;   XREF to: 00419530 (UNCONDITIONAL_JUMP)  ; LAB_00419530
    PUSH 0x5d4477                       ; 0041971e | = "dontGoIntoBackground"
        ;   Label: LAB_0041971e
    ADD EBX,0xcc8                       ; 00419723
    PUSH EBX                            ; 00419729
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0041972a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0041972f
    ADD ESP,0x8                         ; 00419732
    POP EBP                             ; 00419735
    POP EDI                             ; 00419736
    POP ESI                             ; 00419737
    POP EBX                             ; 00419738
    RET                                 ; 00419739

