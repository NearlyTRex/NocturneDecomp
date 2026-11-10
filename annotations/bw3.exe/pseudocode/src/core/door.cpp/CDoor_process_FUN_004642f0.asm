; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_process_FUN_004642f0(CDoor *this_ptr,float delta_time)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004642d8 = 00464339
;   undefined4 DAT_005fba60
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b870
;   core_door.cpp_FUN_00463d80
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00
;   core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_0053eea0
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004642f0
        ;   Label: core_door.cpp_CDoor_process_FUN_004642f0
    PUSH ESI                            ; 004642f1
    PUSH EDI                            ; 004642f2
    PUSH EBP                            ; 004642f3
    SUB ESP,0xf8                        ; 004642f4
    MOV EBP,dword ptr [ESP + 0x10c]     ; 004642fa
    LEA EDI,[ESP + 0x7c]                ; 00464301
    LEA ESI,[EBP + 0x20]                ; 00464305
    MOVSD ES:EDI,ESI                    ; 00464308
    MOVSD ES:EDI,ESI                    ; 00464309
    MOVSD ES:EDI,ESI                    ; 0046430a
    MOV EAX,dword ptr [EBP + 0x9ac]     ; 0046430b
    MOV EDX,dword ptr [EBP + 0x9c8]     ; 00464311
    MOV dword ptr [ESP + 0xb0],EAX      ; 00464317
    CMP EDX,0x2                         ; 0046431e
    JGE 0x00464460                      ; 00464321
        ;   XREF to: 00464460 (CONDITIONAL_JUMP)  ; LAB_00464460
    MOV EAX,dword ptr [EBP + 0x2e0]     ; 00464327
    CMP EAX,0x3                         ; 0046432d
    JA 0x00464395                       ; 00464330
        ;   XREF to: 00464395 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4642d8]  ; 00464332 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBP + 0x2e8]               ; 00464339
        ;   Label: caseD_0
    PUSH EAX                            ; 0046433f
    MOV EBX,dword ptr [0x005fba60]      ; 00464340 | DAT_005fba60
    PUSH EBX                            ; 00464346
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00464347
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0046434c
    TEST EAX,EAX                        ; 0046434f
    JZ 0x0046438b                       ; 00464351
        ;   XREF to: 0046438b (CONDITIONAL_JUMP)  ; LAB_0046438b
    MOV DL,byte ptr [EBP + 0x864]       ; 00464353
    MOV dword ptr [EBP + 0x2e0],0x1     ; 00464359
    TEST DL,DL                          ; 00464363
    JZ 0x0046437b                       ; 00464365
        ;   XREF to: 0046437b (CONDITIONAL_JUMP)  ; LAB_0046437b
    LEA EAX,[EBP + 0x864]               ; 00464367
    PUSH EAX                            ; 0046436d
    MOV EBX,dword ptr [EBP + 0x154]     ; 0046436e
    PUSH EBP                            ; 00464374
    CALL dword ptr [EBX + 0x2c]         ; 00464375
    ADD ESP,0x8                         ; 00464378
    PUSH EBP                            ; 0046437b
        ;   Label: LAB_0046437b
    MOV ESI,dword ptr [0x00603b28]      ; 0046437c | g_CDemonSetPtr
    PUSH ESI                            ; 00464382 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_0053eea0 ; 00464383
        ;   XREF to: 0053eea0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_transferVoxelShadow_FUN_0053eea0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00464388
    MOV dword ptr [EBP + 0x9ac],0x0     ; 0046438b
        ;   Label: LAB_0046438b
    MOV EAX,dword ptr [EBP + 0x2e0]     ; 00464395
        ;   Label: default
    TEST EAX,EAX                        ; 0046439b
    JBE 0x00464653                      ; 0046439d
        ;   XREF to: 00464653 (CONDITIONAL_JUMP)  ; LAB_00464653
    CMP EAX,0x2                         ; 004643a3
    JNZ 0x004643c7                      ; 004643a6
        ;   XREF to: 004643c7 (CONDITIONAL_JUMP)  ; LAB_004643c7
    CMP byte ptr [EBP + 0x3b0],0x0      ; 004643a8
    JZ 0x004643c7                       ; 004643af
        ;   XREF to: 004643c7 (CONDITIONAL_JUMP)  ; LAB_004643c7
    LEA EAX,[EBP + 0x3b0]               ; 004643b1
    PUSH EAX                            ; 004643b7
    MOV EDI,dword ptr [0x005fba60]      ; 004643b8 | DAT_005fba60
    PUSH EDI                            ; 004643be
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004643bf
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
        ;   Label: LAB_004643bf
    ADD ESP,0x8                         ; 004643c4
    PUSH EBP                            ; 004643c7
        ;   Label: LAB_004643c7
    CALL core_door.cpp_FUN_00463d80     ; 004643c8
        ;   XREF to: 00463d80 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_00463d80()
    ADD ESP,0x4                         ; 004643cd
    FLD float ptr [EBP + 0x9ac]         ; 004643d0
    FCOMP float ptr [ESP + 0xb0]        ; 004643d6
    FNSTSW AX                           ; 004643dd
    SAHF                                ; 004643df
    JZ 0x00464460                       ; 004643e0
        ;   XREF to: 00464460 (CONDITIONAL_JUMP)  ; LAB_00464460
    CMP dword ptr [EBP + 0x2d8],0x3     ; 004643e6
    JZ 0x00464460                       ; 004643ed
        ;   XREF to: 00464460 (CONDITIONAL_JUMP)  ; LAB_00464460
    PUSH EBP                            ; 004643ef
    MOV EAX,dword ptr [EBP + 0x154]     ; 004643f0
    LEA ESI,[ESP + 0x2c]                ; 004643f6
    LEA EDI,[ESP + 0x44]                ; 004643fa
    CALL dword ptr [EAX + 0x1c]         ; 004643fe
    MOV ECX,0x6                         ; 00464401
    LEA ESI,[ESP + 0x2c]                ; 00464406
    ADD ESP,0x4                         ; 0046440a
    LEA EAX,[EBP + 0x20]                ; 0046440d
    MOVSD.REP ES:EDI,ESI                ; 00464410
    MOV dword ptr [ESP + 0xec],EAX      ; 00464412
    XOR ECX,ECX                         ; 00464419
    LEA EAX,[EBP + 0x3c]                ; 0046441b
    MOV dword ptr [ESP + 0xac],ECX      ; 0046441e
    MOV dword ptr [ESP + 0xe4],ECX      ; 00464425
    MOV dword ptr [ESP + 0xb4],EAX      ; 0046442c
    MOV dword ptr [ESP + 0xe8],ECX      ; 00464433
    MOV EAX,[0x00603b28]                ; 0046443a | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0046443a
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0046443f
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 00464446 | g_CDemonSetInstance.character_count
    JL 0x00464697                       ; 0046444c
        ;   XREF to: 00464697 (CONDITIONAL_JUMP)  ; LAB_00464697
    CMP dword ptr [ESP + 0xac],0x0      ; 00464452
    JNZ 0x00464830                      ; 0046445a
        ;   XREF to: 00464830 (CONDITIONAL_JUMP)  ; LAB_00464830
    ADD ESP,0xf8                        ; 00464460
        ;   Label: LAB_00464460
    POP EBP                             ; 00464466
    POP EDI                             ; 00464467
    POP ESI                             ; 00464468
    POP EBX                             ; 00464469
    RET                                 ; 0046446a
    LEA EAX,[EBP + 0x34c]               ; 0046446b
        ;   Label: caseD_2
    PUSH EAX                            ; 00464471
    MOV EAX,[0x005fba60]                ; 00464472 | DAT_005fba60
    PUSH EAX                            ; 00464477
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00464478
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0046447d
    TEST EAX,EAX                        ; 00464480
    JZ 0x004644ac                       ; 00464482
        ;   XREF to: 004644ac (CONDITIONAL_JUMP)  ; LAB_004644ac
    MOV AH,byte ptr [EBP + 0x8c8]       ; 00464484
    MOV dword ptr [EBP + 0x2e0],0x3     ; 0046448a
    TEST AH,AH                          ; 00464494
    JZ 0x004644ac                       ; 00464496
        ;   XREF to: 004644ac (CONDITIONAL_JUMP)  ; LAB_004644ac
    LEA EAX,[EBP + 0x8c8]               ; 00464498
    PUSH EAX                            ; 0046449e
    MOV EBX,dword ptr [EBP + 0x154]     ; 0046449f
    PUSH EBP                            ; 004644a5
    CALL dword ptr [EBX + 0x2c]         ; 004644a6
    ADD ESP,0x8                         ; 004644a9
    MOV EAX,dword ptr [EBP + 0x9b0]     ; 004644ac
        ;   Label: LAB_004644ac
    MOV dword ptr [EBP + 0x9ac],EAX     ; 004644b2
    JMP 0x00464395                      ; 004644b8
        ;   XREF to: 00464395 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x110]         ; 004644bd
        ;   Label: caseD_1
    FMUL float ptr [EBP + 0x9b0]        ; 004644c4
    FDIV float ptr [EBP + 0x9b4]        ; 004644ca
    FLD float ptr [EBP + 0x9b0]         ; 004644d0
    FXCH                                ; 004644d6
    FADD float ptr [ESP + 0xb0]         ; 004644d8
    FLDZ                                ; 004644df
    FXCH                                ; 004644e1
    FSTP float ptr [EBP + 0x9ac]        ; 004644e3
    FCOMPP                              ; 004644e9
    FNSTSW AX                           ; 004644eb
    SAHF                                ; 004644ed
    JNC 0x00464538                      ; 004644ee
        ;   XREF to: 00464538 (CONDITIONAL_JUMP)  ; LAB_00464538
    FLD float ptr [EBP + 0x9ac]         ; 004644f0
    FCOMP float ptr [EBP + 0x9b0]       ; 004644f6
    FNSTSW AX                           ; 004644fc
    SAHF                                ; 004644fe
    JBE 0x00464395                      ; 004644ff
        ;   XREF to: 00464395 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x2e0],0x2     ; 00464505
    FLD float ptr [EBP + 0x9b0]         ; 0046450f
    MOV ECX,dword ptr [EBP + 0x9c8]     ; 00464515
    FSTP float ptr [EBP + 0x9ac]        ; 0046451b
    TEST ECX,ECX                        ; 00464521
    JZ 0x00464395                       ; 00464523
        ;   XREF to: 00464395 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x9c8],0x2     ; 00464529
    JMP 0x00464395                      ; 00464533
        ;   XREF to: 00464395 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBP + 0x9ac]         ; 00464538
        ;   Label: LAB_00464538
    FCOMP float ptr [EBP + 0x9b0]       ; 0046453e
    FNSTSW AX                           ; 00464544
    SAHF                                ; 00464546
    JNC 0x00464395                      ; 00464547
        ;   XREF to: 00464395 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x2e0],0x2     ; 0046454d
    FLD float ptr [EBP + 0x9b0]         ; 00464557
    MOV EDX,dword ptr [EBP + 0x9c8]     ; 0046455d
    FSTP float ptr [EBP + 0x9ac]        ; 00464563
    TEST EDX,EDX                        ; 00464569
    JZ 0x00464395                       ; 0046456b
        ;   XREF to: 00464395 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x9c8],0x2     ; 00464571
    JMP 0x00464395                      ; 0046457b
        ;   XREF to: 00464395 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x110]         ; 00464580
        ;   Label: caseD_3
    FMUL float ptr [EBP + 0x9b0]        ; 00464587
    FDIV float ptr [EBP + 0x9b8]        ; 0046458d
    FLD float ptr [EBP + 0x9b0]         ; 00464593
    FXCH                                ; 00464599
    FSUBR float ptr [ESP + 0xb0]        ; 0046459b
    FLDZ                                ; 004645a2
    FXCH                                ; 004645a4
    FSTP float ptr [EBP + 0x9ac]        ; 004645a6
    FCOMPP                              ; 004645ac
    FNSTSW AX                           ; 004645ae
    SAHF                                ; 004645b0
    JNC 0x00464603                      ; 004645b1
        ;   XREF to: 00464603 (CONDITIONAL_JUMP)  ; LAB_00464603
    FLD float ptr [EBP + 0x9ac]         ; 004645b3
    FLDZ                                ; 004645b9
    FCOMPP                              ; 004645bb
    FNSTSW AX                           ; 004645bd
    SAHF                                ; 004645bf
    JBE 0x00464395                      ; 004645c0
        ;   XREF to: 00464395 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x2e0],0x0     ; 004645c6
    MOV ESI,dword ptr [EBP + 0x9c8]     ; 004645d0
    MOV dword ptr [EBP + 0x9ac],0x0     ; 004645d6
    TEST ESI,ESI                        ; 004645e0
    JZ 0x004645ee                       ; 004645e2
        ;   XREF to: 004645ee (CONDITIONAL_JUMP)  ; LAB_004645ee
    MOV dword ptr [EBP + 0x9c8],0x2     ; 004645e4
    PUSH EBP                            ; 004645ee
        ;   Label: LAB_004645ee
    MOV EDI,dword ptr [0x00603b28]      ; 004645ef | g_CDemonSetPtr
    PUSH EDI                            ; 004645f5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00 ; 004645f6
        ;   XREF to: 0053ee00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004645fb
    JMP 0x00464395                      ; 004645fe
        ;   XREF to: 00464395 (UNCONDITIONAL_JUMP)  ; default
    FLD float ptr [EBP + 0x9ac]         ; 00464603
        ;   Label: LAB_00464603
    FLDZ                                ; 00464609
    FCOMPP                              ; 0046460b
    FNSTSW AX                           ; 0046460d
    SAHF                                ; 0046460f
    JNC 0x00464395                      ; 00464610
        ;   XREF to: 00464395 (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EBP + 0x2e0],0x0     ; 00464616
    MOV ECX,dword ptr [EBP + 0x9c8]     ; 00464620
    MOV dword ptr [EBP + 0x9ac],0x0     ; 00464626
    TEST ECX,ECX                        ; 00464630
    JZ 0x0046463e                       ; 00464632
        ;   XREF to: 0046463e (CONDITIONAL_JUMP)  ; LAB_0046463e
    MOV dword ptr [EBP + 0x9c8],0x2     ; 00464634
    PUSH EBP                            ; 0046463e
        ;   Label: LAB_0046463e
    MOV EBX,dword ptr [0x00603b28]      ; 0046463f | g_CDemonSetPtr
    PUSH EBX                            ; 00464645 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00 ; 00464646
        ;   XREF to: 0053ee00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0046464b
    JMP 0x00464395                      ; 0046464e
        ;   XREF to: 00464395 (UNCONDITIONAL_JUMP)  ; default
    CMP byte ptr [EBP + 0x414],0x0      ; 00464653
        ;   Label: LAB_00464653
    JZ 0x004643c7                       ; 0046465a
        ;   XREF to: 004643c7 (CONDITIONAL_JUMP)  ; LAB_004643c7
    LEA EAX,[EBP + 0x414]               ; 00464660
    PUSH EAX                            ; 00464666
    MOV EAX,[0x005fba60]                ; 00464667 | DAT_005fba60
    PUSH EAX                            ; 0046466c
    JMP 0x004643bf                      ; 0046466d
        ;   XREF to: 004643bf (UNCONDITIONAL_JUMP)  ; LAB_004643bf
    MOV ESI,dword ptr [ESP + 0xe4]      ; 00464672
        ;   Label: LAB_00464672
    MOV EBX,dword ptr [ESP + 0xe8]      ; 00464679
    INC ESI                             ; 00464680
    ADD EBX,0x4                         ; 00464681
    MOV dword ptr [ESP + 0xe4],ESI      ; 00464684
    MOV dword ptr [ESP + 0xe8],EBX      ; 0046468b
    JMP 0x0046443a                      ; 00464692
        ;   XREF to: 0046443a (UNCONDITIONAL_JUMP)  ; LAB_0046443a
    ADD EAX,dword ptr [ESP + 0xe8]      ; 00464697
        ;   Label: LAB_00464697
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 0046469e
    MOV EAX,ESP                         ; 004646a4
    PUSH EAX                            ; 004646a6
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80 ; 004646a7
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_0053ed80(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 004646ac
    MOV ESI,ESP                         ; 004646af
    PUSH ESI                            ; 004646b1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004646b2
    PUSH EBX                            ; 004646b8
    CALL dword ptr [EAX + 0x3c]         ; 004646b9
    ADD ESP,0x8                         ; 004646bc
    CMP EAX,0x2                         ; 004646bf
    JNZ 0x00464672                      ; 004646c2
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    FLD float ptr [ESP + 0x14]          ; 004646c4
    FADD float ptr [EBX + 0x24]         ; 004646c8
    FLD float ptr [EBP + 0x24]          ; 004646cb
    FADD float ptr [ESP + 0x50]         ; 004646ce
    FCOMPP                              ; 004646d2
    FNSTSW AX                           ; 004646d4
    SAHF                                ; 004646d6
    JC 0x00464672                       ; 004646d7
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    FLD float ptr [ESP + 0x18]          ; 004646d9
    FADD float ptr [EBX + 0x24]         ; 004646dd
    FLD float ptr [EBP + 0x24]          ; 004646e0
    FADD float ptr [ESP + 0x44]         ; 004646e3
    FCOMPP                              ; 004646e7
    FNSTSW AX                           ; 004646e9
    SAHF                                ; 004646eb
    JA 0x00464672                       ; 004646ec
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    FLD float ptr [EBX + 0x24]          ; 004646ee
    FLD float ptr [EBX + 0x28]          ; 004646f1
    FLD float ptr [EBX + 0x20]          ; 004646f4
    MOV EAX,dword ptr [ESP + 0xec]      ; 004646f7
    LEA EDI,[ESP + 0x94]                ; 004646fe
    LEA ESI,[ESP + 0x64]                ; 00464705
    MOV ECX,dword ptr [ESP + 0xb4]      ; 00464709
    LEA EBX,[ESP + 0x88]                ; 00464710
    FSUB float ptr [EAX]                ; 00464717
    FXCH ST2                            ; 00464719
    FSUB float ptr [EAX + 0x4]          ; 0046471b
    FXCH                                ; 0046471e
    FSUB float ptr [EAX + 0x8]          ; 00464720
    FXCH ST2                            ; 00464723
    FSTP float ptr [ESP + 0x64]         ; 00464725
    FSTP float ptr [ESP + 0x68]         ; 00464729
    LEA EAX,[ESP + 0x94]                ; 0046472d
    FSTP float ptr [ESP + 0x6c]         ; 00464734
    PUSH EAX                            ; 00464738
    MOVSD ES:EDI,ESI                    ; 00464739
    MOVSD ES:EDI,ESI                    ; 0046473a
    MOVSD ES:EDI,ESI                    ; 0046473b
    PUSH ECX                            ; 0046473c
    LEA ESI,[ESP + 0x78]                ; 0046473d
    LEA EDI,[ESP + 0x90]                ; 00464741
    CALL core_dirmat.cpp_FUN_0045b870   ; 00464748
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x78]                ; 0046474d
    ADD ESP,0x8                         ; 00464751
    LEA EAX,[ESP + 0x58]                ; 00464754
    MOVSD ES:EDI,ESI                    ; 00464758
    MOVSD ES:EDI,ESI                    ; 00464759
    MOVSD ES:EDI,ESI                    ; 0046475a
    CMP EAX,EBX                         ; 0046475b
    JZ 0x00464780                       ; 0046475d
        ;   XREF to: 00464780 (CONDITIONAL_JUMP)  ; LAB_00464780
    MOV EAX,dword ptr [ESP + 0x88]      ; 0046475f
    MOV dword ptr [ESP + 0x58],EAX      ; 00464766
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0046476a
    MOV dword ptr [ESP + 0x5c],EAX      ; 00464771
    MOV EAX,dword ptr [ESP + 0x90]      ; 00464775
    MOV dword ptr [ESP + 0x60],EAX      ; 0046477c
    FLD float ptr [ESP + 0x58]          ; 00464780
        ;   Label: LAB_00464780
    FADD float ptr [ESP + 0x1c]         ; 00464784
    FST float ptr [ESP + 0xc0]          ; 00464788
    FCOMP float ptr [ESP + 0x40]        ; 0046478f
    FNSTSW AX                           ; 00464793
    SAHF                                ; 00464795
    JC 0x00464672                       ; 00464796
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    FLD float ptr [ESP + 0x58]          ; 0046479c
    FSUB float ptr [ESP + 0x1c]         ; 004647a0
    FST float ptr [ESP + 0xb8]          ; 004647a4
    FCOMP float ptr [ESP + 0x4c]        ; 004647ab
    FNSTSW AX                           ; 004647af
    SAHF                                ; 004647b1
    JA 0x00464672                       ; 004647b2
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    FLD float ptr [ESP + 0x60]          ; 004647b8
    FADD float ptr [ESP + 0x1c]         ; 004647bc
    FST float ptr [ESP + 0xf4]          ; 004647c0
    FCOMP float ptr [ESP + 0x48]        ; 004647c7
    FNSTSW AX                           ; 004647cb
    SAHF                                ; 004647cd
    JC 0x00464672                       ; 004647ce
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    FLD float ptr [ESP + 0x60]          ; 004647d4
    FSUB float ptr [ESP + 0x1c]         ; 004647d8
    FST float ptr [ESP + 0xbc]          ; 004647dc
    FCOMP float ptr [ESP + 0x54]        ; 004647e3
    FNSTSW AX                           ; 004647e7
    SAHF                                ; 004647e9
    JA 0x00464672                       ; 004647ea
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    FLD float ptr [ESP + 0xb8]          ; 004647f0
    FCOMP float ptr [ESP + 0x40]        ; 004647f7
    FNSTSW AX                           ; 004647fb
    SAHF                                ; 004647fd
    JC 0x0046486e                       ; 004647fe
        ;   XREF to: 0046486e (CONDITIONAL_JUMP)  ; LAB_0046486e
    FLD float ptr [ESP + 0xc0]          ; 00464800
    FCOMP float ptr [ESP + 0x4c]        ; 00464807
    FNSTSW AX                           ; 0046480b
    SAHF                                ; 0046480d
    JA 0x0046486e                       ; 0046480e
        ;   XREF to: 0046486e (CONDITIONAL_JUMP)  ; LAB_0046486e
    FLD float ptr [ESP + 0xbc]          ; 00464810
    FCOMP float ptr [ESP + 0x48]        ; 00464817
    FNSTSW AX                           ; 0046481b
    SAHF                                ; 0046481d
    JC 0x0046486e                       ; 0046481e
        ;   XREF to: 0046486e (CONDITIONAL_JUMP)  ; LAB_0046486e
    FLD float ptr [ESP + 0xf4]          ; 00464820
    FCOMP float ptr [ESP + 0x54]        ; 00464827
    FNSTSW AX                           ; 0046482b
    SAHF                                ; 0046482d
    JA 0x0046486e                       ; 0046482e
        ;   XREF to: 0046486e (CONDITIONAL_JUMP)  ; LAB_0046486e
    LEA EBX,[EBP + 0x20]                ; 00464830
        ;   Label: LAB_00464830
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00464833
    MOV dword ptr [EBX],EAX             ; 00464837
    MOV EAX,dword ptr [ESP + 0x80]      ; 00464839
    MOV dword ptr [EBX + 0x4],EAX       ; 00464840
    MOV EAX,dword ptr [ESP + 0x84]      ; 00464843
    MOV dword ptr [EBX + 0x8],EAX       ; 0046484a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0046484d
    PUSH EBP                            ; 00464854
    MOV dword ptr [EBP + 0x9ac],EAX     ; 00464855
    CALL core_door.cpp_FUN_00463d80     ; 0046485b
        ;   XREF to: 00463d80 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_00463d80()
    ADD ESP,0x4                         ; 00464860
    ADD ESP,0xf8                        ; 00464863
    POP EBP                             ; 00464869
    POP EDI                             ; 0046486a
    POP ESI                             ; 0046486b
    POP EBX                             ; 0046486c
    RET                                 ; 0046486d
    FLD float ptr [ESP + 0x1c]          ; 0046486e
        ;   Label: LAB_0046486e
    FMUL ST0                            ; 00464872
    FLD float ptr [ESP + 0x4c]          ; 00464874
    FSUB float ptr [ESP + 0x58]         ; 00464878
    FMUL ST0                            ; 0046487c
    FXCH                                ; 0046487e
    FSTP float ptr [ESP + 0xf0]         ; 00464880
    FSUBR float ptr [ESP + 0xf0]        ; 00464887
    FSQRT                               ; 0046488e
    FLD float ptr [ESP + 0x60]          ; 00464890
    FLD ST0                             ; 00464894
    FADD ST0,ST2                        ; 00464896
    FXCH                                ; 00464898
    FSUBRP ST2,ST0                      ; 0046489a
    FSTP float ptr [ESP + 0xc8]         ; 0046489c
    FSTP float ptr [ESP + 0xd8]         ; 004648a3
    FLD float ptr [ESP + 0xc8]          ; 004648aa
    FCOMP float ptr [ESP + 0x48]        ; 004648b1
    FNSTSW AX                           ; 004648b5
    SAHF                                ; 004648b7
    JC 0x004648ce                       ; 004648b8
        ;   XREF to: 004648ce (CONDITIONAL_JUMP)  ; LAB_004648ce
    FLD float ptr [ESP + 0xc8]          ; 004648ba
    FCOMP float ptr [ESP + 0x54]        ; 004648c1
    FNSTSW AX                           ; 004648c5
    SAHF                                ; 004648c7
    JBE 0x00464830                      ; 004648c8
        ;   XREF to: 00464830 (CONDITIONAL_JUMP)  ; LAB_00464830
    FLD float ptr [ESP + 0xd8]          ; 004648ce
        ;   Label: LAB_004648ce
    FCOMP float ptr [ESP + 0x48]        ; 004648d5
    FNSTSW AX                           ; 004648d9
    SAHF                                ; 004648db
    JC 0x004648f2                       ; 004648dc
        ;   XREF to: 004648f2 (CONDITIONAL_JUMP)  ; LAB_004648f2
    FLD float ptr [ESP + 0xd8]          ; 004648de
    FCOMP float ptr [ESP + 0x54]        ; 004648e5
    FNSTSW AX                           ; 004648e9
    SAHF                                ; 004648eb
    JBE 0x00464830                      ; 004648ec
        ;   XREF to: 00464830 (CONDITIONAL_JUMP)  ; LAB_00464830
    FLD float ptr [ESP + 0x40]          ; 004648f2
        ;   Label: LAB_004648f2
    FSUB float ptr [ESP + 0x58]         ; 004648f6
    FMUL ST0                            ; 004648fa
    FSUBR float ptr [ESP + 0xf0]        ; 004648fc
    FSQRT                               ; 00464903
    FLD float ptr [ESP + 0x60]          ; 00464905
    FLD ST0                             ; 00464909
    FADD ST0,ST2                        ; 0046490b
    FXCH                                ; 0046490d
    FSUBRP ST2,ST0                      ; 0046490f
    FSTP float ptr [ESP + 0xe0]         ; 00464911
    FSTP float ptr [ESP + 0xcc]         ; 00464918
    FLD float ptr [ESP + 0xe0]          ; 0046491f
    FCOMP float ptr [ESP + 0x48]        ; 00464926
    FNSTSW AX                           ; 0046492a
    SAHF                                ; 0046492c
    JC 0x00464943                       ; 0046492d
        ;   XREF to: 00464943 (CONDITIONAL_JUMP)  ; LAB_00464943
    FLD float ptr [ESP + 0xe0]          ; 0046492f
    FCOMP float ptr [ESP + 0x54]        ; 00464936
    FNSTSW AX                           ; 0046493a
    SAHF                                ; 0046493c
    JBE 0x00464830                      ; 0046493d
        ;   XREF to: 00464830 (CONDITIONAL_JUMP)  ; LAB_00464830
    FLD float ptr [ESP + 0xcc]          ; 00464943
        ;   Label: LAB_00464943
    FCOMP float ptr [ESP + 0x48]        ; 0046494a
    FNSTSW AX                           ; 0046494e
    SAHF                                ; 00464950
    JC 0x00464967                       ; 00464951
        ;   XREF to: 00464967 (CONDITIONAL_JUMP)  ; LAB_00464967
    FLD float ptr [ESP + 0xcc]          ; 00464953
    FCOMP float ptr [ESP + 0x54]        ; 0046495a
    FNSTSW AX                           ; 0046495e
    SAHF                                ; 00464960
    JBE 0x00464830                      ; 00464961
        ;   XREF to: 00464830 (CONDITIONAL_JUMP)  ; LAB_00464830
    FLD float ptr [ESP + 0x54]          ; 00464967
        ;   Label: LAB_00464967
    FSUB float ptr [ESP + 0x60]         ; 0046496b
    FMUL ST0                            ; 0046496f
    FSUBR float ptr [ESP + 0xf0]        ; 00464971
    FSQRT                               ; 00464978
    FLD float ptr [ESP + 0x58]          ; 0046497a
    FLD ST0                             ; 0046497e
    FADD ST0,ST2                        ; 00464980
    FXCH                                ; 00464982
    FSUBRP ST2,ST0                      ; 00464984
    FSTP float ptr [ESP + 0xd4]         ; 00464986
    FSTP float ptr [ESP + 0xd0]         ; 0046498d
    FLD float ptr [ESP + 0xd4]          ; 00464994
    FCOMP float ptr [ESP + 0x40]        ; 0046499b
    FNSTSW AX                           ; 0046499f
    SAHF                                ; 004649a1
    JC 0x004649b8                       ; 004649a2
        ;   XREF to: 004649b8 (CONDITIONAL_JUMP)  ; LAB_004649b8
    FLD float ptr [ESP + 0xd4]          ; 004649a4
    FCOMP float ptr [ESP + 0x4c]        ; 004649ab
    FNSTSW AX                           ; 004649af
    SAHF                                ; 004649b1
    JBE 0x00464830                      ; 004649b2
        ;   XREF to: 00464830 (CONDITIONAL_JUMP)  ; LAB_00464830
    FLD float ptr [ESP + 0xd0]          ; 004649b8
        ;   Label: LAB_004649b8
    FCOMP float ptr [ESP + 0x40]        ; 004649bf
    FNSTSW AX                           ; 004649c3
    SAHF                                ; 004649c5
    JC 0x004649dc                       ; 004649c6
        ;   XREF to: 004649dc (CONDITIONAL_JUMP)  ; LAB_004649dc
    FLD float ptr [ESP + 0xd0]          ; 004649c8
    FCOMP float ptr [ESP + 0x4c]        ; 004649cf
    FNSTSW AX                           ; 004649d3
    SAHF                                ; 004649d5
    JBE 0x00464830                      ; 004649d6
        ;   XREF to: 00464830 (CONDITIONAL_JUMP)  ; LAB_00464830
    FLD float ptr [ESP + 0x48]          ; 004649dc
        ;   Label: LAB_004649dc
    FSUB float ptr [ESP + 0x60]         ; 004649e0
    FMUL ST0                            ; 004649e4
    FSUBR float ptr [ESP + 0xf0]        ; 004649e6
    FSQRT                               ; 004649ed
    FLD float ptr [ESP + 0x58]          ; 004649ef
    FLD ST0                             ; 004649f3
    FADD ST0,ST2                        ; 004649f5
    FXCH                                ; 004649f7
    FSUBRP ST2,ST0                      ; 004649f9
    FSTP float ptr [ESP + 0xdc]         ; 004649fb
    FSTP float ptr [ESP + 0xc4]         ; 00464a02
    FLD float ptr [ESP + 0xdc]          ; 00464a09
    FCOMP float ptr [ESP + 0x40]        ; 00464a10
    FNSTSW AX                           ; 00464a14
    SAHF                                ; 00464a16
    JC 0x00464a2d                       ; 00464a17
        ;   XREF to: 00464a2d (CONDITIONAL_JUMP)  ; LAB_00464a2d
    FLD float ptr [ESP + 0xdc]          ; 00464a19
    FCOMP float ptr [ESP + 0x4c]        ; 00464a20
    FNSTSW AX                           ; 00464a24
    SAHF                                ; 00464a26
    JBE 0x00464830                      ; 00464a27
        ;   XREF to: 00464830 (CONDITIONAL_JUMP)  ; LAB_00464830
    FLD float ptr [ESP + 0xc4]          ; 00464a2d
        ;   Label: LAB_00464a2d
    FCOMP float ptr [ESP + 0x40]        ; 00464a34
    FNSTSW AX                           ; 00464a38
    SAHF                                ; 00464a3a
    JC 0x00464672                       ; 00464a3b
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    FLD float ptr [ESP + 0xc4]          ; 00464a41
    FCOMP float ptr [ESP + 0x4c]        ; 00464a48
    FNSTSW AX                           ; 00464a4c
    SAHF                                ; 00464a4e
    JA 0x00464672                       ; 00464a4f
        ;   XREF to: 00464672 (CONDITIONAL_JUMP)  ; LAB_00464672
    JMP 0x00464830                      ; 00464a55
        ;   XREF to: 00464830 (UNCONDITIONAL_JUMP)  ; LAB_00464830

