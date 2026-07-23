; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined2       Stack[-0x70]:2  local_70
; undefined        Stack[-0x6c]:1  local_6c
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
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_load_FUN_005191f0 at 0051923c
;
; Referenced Globals:
;   TerminatedCString s_d_005916d9
;   TerminatedCString s_core_skeleton_cpp_005916dd
;   TerminatedCString s_Deformable_model_file_is_005916f2
;   TerminatedCString s_core_skeleton_cpp_00591713
;   TerminatedCString s_Can_t_load_model_of_vers_00591728
;   TerminatedCString s_d_d_d_d_d_00591773
;   TerminatedCString s_d_d_d_d_00591783
;   TerminatedCString s_d_d_d_d_d_00591790
;   TerminatedCString s_d_d_d_d_d_d_005917a0
;   TerminatedCString s_anon_005917b3
;   TerminatedCString s_d_005917ba
;   TerminatedCString s_d_d_005917c7
;   TerminatedCString s_d_005917d8
;   TerminatedCString s_d_d_005917dc
;   TerminatedCString s_d_d_d_005917e3
;   ... and 15 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fscanf_FUN_00563350
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519280
        ;   Label: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
    PUSH ESI                            ; 00519281
    PUSH EDI                            ; 00519282
    PUSH EBP                            ; 00519283
    SUB ESP,0x7c                        ; 00519284
    MOV EBX,dword ptr [ESP + 0x90]      ; 00519287
    MOV ESI,dword ptr [ESP + 0x94]      ; 0051928e
    MOV EDI,ESI                         ; 00519295
    PUSH EDI                            ; 00519297
        ;   Label: LAB_00519297
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519298
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051929d
    TEST EAX,EAX                        ; 005192a0
    JL 0x005192a9                       ; 005192a2
        ;   XREF to: 005192a9 (CONDITIONAL_JUMP)  ; LAB_005192a9
    CMP EAX,0xa                         ; 005192a4
    JNZ 0x00519297                      ; 005192a7
        ;   XREF to: 00519297 (CONDITIONAL_JUMP)  ; LAB_00519297
    LEA EAX,[ESP + 0x28]                ; 005192a9
        ;   Label: LAB_005192a9
    PUSH EAX                            ; 005192ad
    PUSH 0x5916d9                       ; 005192ae | = "%d\n"
    PUSH ESI                            ; 005192b3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005192b4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 005192b9
    CMP EAX,0x1                         ; 005192bc
    JZ 0x005192e4                       ; 005192bf
        ;   XREF to: 005192e4 (CONDITIONAL_JUMP)  ; LAB_005192e4
    MOV EDX,0x5916dd                    ; 005192c1 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_005192c1
    MOV ECX,0x4c7                       ; 005192c6
    PUSH 0x5916f2                       ; 005192cb | = "Deformable model file is corrupt"
    MOV dword ptr [0x01cc4800],EDX      ; 005192d0 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005192d6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005192dc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005192e1
    MOV EAX,dword ptr [ESP + 0x28]      ; 005192e4
        ;   Label: LAB_005192e4
    MOV EDI,dword ptr [0x005be97c]      ; 005192e8 | DAT_005be97c
    CMP EAX,EDI                         ; 005192ee
    JLE 0x0051931a                      ; 005192f0
        ;   XREF to: 0051931a (CONDITIONAL_JUMP)  ; LAB_0051931a
    PUSH EDI                            ; 005192f2
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005192f3
    PUSH ECX                            ; 005192f7
    MOV EBP,0x591713                    ; 005192f8 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x4ca                       ; 005192fd
    PUSH 0x591728                       ; 00519302 | = "Can't load model of version %d, this ..."
    MOV dword ptr [0x01cc4800],EBP      ; 00519307 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0051930d | DAT_01cc4804
    CALL FUN_004c8440                   ; 00519312
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00519317
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051931a
        ;   Label: LAB_0051931a
    CMP EDI,0x3                         ; 0051931e
    JL 0x0051944e                       ; 00519321
        ;   XREF to: 0051944e (CONDITIONAL_JUMP)  ; LAB_0051944e
    CMP EDI,0x5                         ; 00519327
    JL 0x00519402                       ; 0051932a
        ;   XREF to: 00519402 (CONDITIONAL_JUMP)  ; LAB_00519402
    MOV EDI,ESI                         ; 00519330
    PUSH EDI                            ; 00519332
        ;   Label: LAB_00519332
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519333
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00519338
    TEST EAX,EAX                        ; 0051933b
    JL 0x00519344                       ; 0051933d
        ;   XREF to: 00519344 (CONDITIONAL_JUMP)  ; LAB_00519344
    CMP EAX,0xa                         ; 0051933f
    JNZ 0x00519332                      ; 00519342
        ;   XREF to: 00519332 (CONDITIONAL_JUMP)  ; LAB_00519332
    LEA EAX,[ESP + 0x24]                ; 00519344
        ;   Label: LAB_00519344
    PUSH EAX                            ; 00519348
    LEA EAX,[ESP + 0x30]                ; 00519349
    PUSH EAX                            ; 0051934d
    LEA EAX,[ESP + 0x40]                ; 0051934e
    PUSH EAX                            ; 00519352
    LEA EAX,[ESP + 0x40]                ; 00519353
    PUSH EAX                            ; 00519357
    LEA EAX,[ESP + 0x40]                ; 00519358
    PUSH EAX                            ; 0051935c
    PUSH 0x591773                       ; 0051935d | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00519362
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00519363
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x1c                        ; 00519368
    CMP EAX,0x5                         ; 0051936b
    JNZ 0x005192c1                      ; 0051936e
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    MOV EDX,dword ptr [ESP + 0x24]      ; 00519374
        ;   Label: LAB_00519374
    PUSH EDX                            ; 00519378
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00519379
    PUSH ECX                            ; 0051937d
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0051937e
    PUSH EDI                            ; 00519382
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00519383
    PUSH EBP                            ; 00519387
    PUSH EBX                            ; 00519388
    MOV EDI,ESI                         ; 00519389
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0 ; 0051938b
        ;   XREF to: 00517da0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0()
    ADD ESP,0x14                        ; 00519390
    PUSH EDI                            ; 00519393
        ;   Label: LAB_00519393
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519394
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00519399
    TEST EAX,EAX                        ; 0051939c
    JL 0x005193a5                       ; 0051939e
        ;   XREF to: 005193a5 (CONDITIONAL_JUMP)  ; LAB_005193a5
    CMP EAX,0xa                         ; 005193a0
    JNZ 0x00519393                      ; 005193a3
        ;   XREF to: 00519393 (CONDITIONAL_JUMP)  ; LAB_00519393
    XOR EDI,EDI                         ; 005193a5
        ;   Label: LAB_005193a5
    CMP EDI,dword ptr [EBX]             ; 005193a7
        ;   Label: LAB_005193a7
    JGE 0x005194c8                      ; 005193a9
        ;   XREF to: 005194c8 (CONDITIONAL_JUMP)  ; LAB_005194c8
    LEA EDX,[EDI*0x8 + 0x0]             ; 005193af
    LEA EAX,[EBX + 0x4]                 ; 005193b6
    ADD EAX,EDX                         ; 005193b9
    LEA EDX,[EAX + 0x4]                 ; 005193bb
    PUSH EDX                            ; 005193be
    PUSH EAX                            ; 005193bf
    LEA EAX,[ESP + 0x60]                ; 005193c0
    PUSH EAX                            ; 005193c4
    LEA EAX,[ESP + 0x60]                ; 005193c5
    PUSH EAX                            ; 005193c9
    LEA EAX,[ESP + 0x60]                ; 005193ca
    PUSH EAX                            ; 005193ce
    PUSH 0x591790                       ; 005193cf | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 005193d4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005193d5
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x1c                        ; 005193da
    CMP EAX,0x5                         ; 005193dd
    JNZ 0x005192c1                      ; 005193e0
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    MOV EBP,dword ptr [ESP + 0x58]      ; 005193e6
    PUSH EBP                            ; 005193ea
    MOV EAX,dword ptr [ESP + 0x58]      ; 005193eb
    PUSH EAX                            ; 005193ef
    MOV EDX,dword ptr [ESP + 0x58]      ; 005193f0
    PUSH EDX                            ; 005193f4
    PUSH EDI                            ; 005193f5
    PUSH EBX                            ; 005193f6
    CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0 ; 005193f7
        ;   XREF to: 00517ec0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0()
    INC EDI                             ; 005193fc
    ADD ESP,0x14                        ; 005193fd
    JMP 0x005193a7                      ; 00519400
        ;   XREF to: 005193a7 (UNCONDITIONAL_JUMP)  ; LAB_005193a7
    MOV EDI,ESI                         ; 00519402
        ;   Label: LAB_00519402
    PUSH EDI                            ; 00519404
        ;   Label: LAB_00519404
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519405
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051940a
    TEST EAX,EAX                        ; 0051940d
    JL 0x00519416                       ; 0051940f
        ;   XREF to: 00519416 (CONDITIONAL_JUMP)  ; LAB_00519416
    CMP EAX,0xa                         ; 00519411
    JNZ 0x00519404                      ; 00519414
        ;   XREF to: 00519404 (CONDITIONAL_JUMP)  ; LAB_00519404
    LEA EAX,[ESP + 0x24]                ; 00519416
        ;   Label: LAB_00519416
    PUSH EAX                            ; 0051941a
    LEA EAX,[ESP + 0x30]                ; 0051941b
    PUSH EAX                            ; 0051941f
    LEA EAX,[ESP + 0x40]                ; 00519420
    PUSH EAX                            ; 00519424
    LEA EAX,[ESP + 0x3c]                ; 00519425
    PUSH EAX                            ; 00519429
    PUSH 0x591783                       ; 0051942a | = "%d,%d,%d,%d\n"
    PUSH ESI                            ; 0051942f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00519430
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x18                        ; 00519435
    CMP EAX,0x4                         ; 00519438
    JNZ 0x005192c1                      ; 0051943b
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    MOV dword ptr [ESP + 0x34],0x1      ; 00519441
    JMP 0x00519374                      ; 00519449
        ;   XREF to: 00519374 (UNCONDITIONAL_JUMP)  ; LAB_00519374
    MOV EDI,ESI                         ; 0051944e
        ;   Label: LAB_0051944e
    PUSH EDI                            ; 00519450
        ;   Label: LAB_00519450
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519451
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00519456
    TEST EAX,EAX                        ; 00519459
    JL 0x00519462                       ; 0051945b
        ;   XREF to: 00519462 (CONDITIONAL_JUMP)  ; LAB_00519462
    CMP EAX,0xa                         ; 0051945d
    JNZ 0x00519450                      ; 00519460
        ;   XREF to: 00519450 (CONDITIONAL_JUMP)  ; LAB_00519450
    LEA EAX,[ESP + 0x4c]                ; 00519462
        ;   Label: LAB_00519462
    PUSH EAX                            ; 00519466
    LEA EAX,[ESP + 0x30]                ; 00519467
    PUSH EAX                            ; 0051946b
    LEA EAX,[ESP + 0x50]                ; 0051946c
    PUSH EAX                            ; 00519470
    LEA EAX,[ESP + 0x50]                ; 00519471
    PUSH EAX                            ; 00519475
    LEA EAX,[ESP + 0x50]                ; 00519476
    PUSH EAX                            ; 0051947a
    LEA EAX,[ESP + 0x50]                ; 0051947b
    PUSH EAX                            ; 0051947f
    PUSH 0x5917a0                       ; 00519480 | = "%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00519485
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00519486
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x20                        ; 0051948b
    CMP EAX,0x6                         ; 0051948e
    JNZ 0x005192c1                      ; 00519491
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00519497
    PUSH EBP                            ; 0051949b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0051949c
    PUSH EAX                            ; 005194a0
    PUSH 0x1                            ; 005194a1
    PUSH 0x1                            ; 005194a3
    PUSH EBX                            ; 005194a5
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0 ; 005194a6
        ;   XREF to: 00517da0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00517da0()
    ADD ESP,0x14                        ; 005194ab
    MOV EDX,dword ptr [ESP + 0x44]      ; 005194ae
    PUSH EDX                            ; 005194b2
    MOV ECX,dword ptr [ESP + 0x44]      ; 005194b3
    PUSH ECX                            ; 005194b7
    MOV EDI,dword ptr [ESP + 0x44]      ; 005194b8
    PUSH EDI                            ; 005194bc
    PUSH 0x0                            ; 005194bd
    PUSH EBX                            ; 005194bf
    CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0 ; 005194c0
        ;   XREF to: 00517ec0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_allocLOD_FUN_00517ec0()
    ADD ESP,0x14                        ; 005194c5
    MOV EDI,ESI                         ; 005194c8
        ;   Label: LAB_005194c8
    PUSH EDI                            ; 005194ca
        ;   Label: LAB_005194ca
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 005194cb
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 005194d0
    TEST EAX,EAX                        ; 005194d3
    JL 0x005194dc                       ; 005194d5
        ;   XREF to: 005194dc (CONDITIONAL_JUMP)  ; LAB_005194dc
    CMP EAX,0xa                         ; 005194d7
    JNZ 0x005194ca                      ; 005194da
        ;   XREF to: 005194ca (CONDITIONAL_JUMP)  ; LAB_005194ca
    LEA EAX,[EBX + 0x2a1c]              ; 005194dc
        ;   Label: LAB_005194dc
    PUSH EAX                            ; 005194e2
    PUSH 0x5917b3                       ; 005194e3 | = "%[^\n]\n"
    PUSH ESI                            ; 005194e8
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005194e9
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 005194ee
    CMP EAX,0x1                         ; 005194f1
    JNZ 0x005192c1                      ; 005194f4
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    MOV EDI,ESI                         ; 005194fa
    PUSH EDI                            ; 005194fc
        ;   Label: LAB_005194fc
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 005194fd
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00519502
    TEST EAX,EAX                        ; 00519505
    JL 0x0051950e                       ; 00519507
        ;   XREF to: 0051950e (CONDITIONAL_JUMP)  ; LAB_0051950e
    CMP EAX,0xa                         ; 00519509
    JNZ 0x005194fc                      ; 0051950c
        ;   XREF to: 005194fc (CONDITIONAL_JUMP)  ; LAB_005194fc
    CMP dword ptr [ESP + 0x28],0x3      ; 0051950e
        ;   Label: LAB_0051950e
    JL 0x005195ed                       ; 00519513
        ;   XREF to: 005195ed (CONDITIONAL_JUMP)  ; LAB_005195ed
    XOR EDI,EDI                         ; 00519519
    CMP EDI,dword ptr [EBX + 0xc00]     ; 0051951b
        ;   Label: LAB_0051951b
    JGE 0x00519682                      ; 00519521
        ;   XREF to: 00519682 (CONDITIONAL_JUMP)  ; LAB_00519682
    LEA EAX,[EDI*0x4 + 0x0]             ; 00519527
    SUB EAX,EDI                         ; 0051952e
    LEA EBP,[EBX + 0xc04]               ; 00519530
    SHL EAX,0x5                         ; 00519536
    ADD EAX,EBP                         ; 00519539
    MOV ECX,dword ptr [ESP + 0x28]      ; 0051953b
    LEA EDX,[EAX + 0x48]                ; 0051953f
    CMP ECX,0x6                         ; 00519542
    JGE 0x00519599                      ; 00519545
        ;   XREF to: 00519599 (CONDITIONAL_JUMP)  ; LAB_00519599
    PUSH EDX                            ; 00519547
    PUSH EAX                            ; 00519548
    PUSH 0x5917ba                       ; 00519549 | = "\"%[^\"]\", %d\n"
    PUSH ESI                            ; 0051954e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0051954f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 00519554
    XOR EBP,EBP                         ; 00519557
        ;   Label: LAB_00519557
    LEA EAX,[EDI*0x4 + 0x0]             ; 00519559
        ;   Label: LAB_00519559
    SUB EAX,EDI                         ; 00519560
    SHL EAX,0x5                         ; 00519562
    LEA EDX,[EBX + EAX*0x1]             ; 00519565
    CMP EBP,dword ptr [EDX + 0xc4c]     ; 00519568
    JGE 0x005195af                      ; 0051956e
        ;   XREF to: 005195af (CONDITIONAL_JUMP)  ; LAB_005195af
    LEA EDX,[EBX + 0xc04]               ; 00519570
    ADD EAX,EDX                         ; 00519576
    LEA EDX,[EBP*0x4 + 0x0]             ; 00519578
    ADD EAX,0x4c                        ; 0051957f
    ADD EAX,EDX                         ; 00519582
    PUSH EAX                            ; 00519584
    PUSH 0x5917d8                       ; 00519585 | = "%d\n"
    PUSH ESI                            ; 0051958a
    INC EBP                             ; 0051958b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0051958c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00519591
    JMP 0x00519559                      ; 00519594
        ;   XREF to: 00519559 (UNCONDITIONAL_JUMP)  ; LAB_00519559
    INC EDI                             ; 00519596
        ;   Label: LAB_00519596
    JMP 0x0051951b                      ; 00519597
        ;   XREF to: 0051951b (UNCONDITIONAL_JUMP)  ; LAB_0051951b
    PUSH EDX                            ; 00519599
        ;   Label: LAB_00519599
    LEA EDX,[EAX + 0x5c]                ; 0051959a
    PUSH EDX                            ; 0051959d
    PUSH EAX                            ; 0051959e
    PUSH 0x5917c7                       ; 0051959f | = "\"%[^\"]\", %d, %d\n"
    PUSH ESI                            ; 005195a4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005195a5
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 005195aa
    JMP 0x00519557                      ; 005195ad
        ;   XREF to: 00519557 (UNCONDITIONAL_JUMP)  ; LAB_00519557
    XOR EBP,EBP                         ; 005195af
        ;   Label: LAB_005195af
    CMP EBP,dword ptr [EBX]             ; 005195b1
        ;   Label: LAB_005195b1
    JGE 0x00519596                      ; 005195b3
        ;   XREF to: 00519596 (CONDITIONAL_JUMP)  ; LAB_00519596
    LEA EDX,[EDI*0x4 + 0x0]             ; 005195b5
    SUB EDX,EDI                         ; 005195bc
    LEA EAX,[EBX + 0xc04]               ; 005195be
    SHL EDX,0x5                         ; 005195c4
    ADD EAX,EDX                         ; 005195c7
    LEA ECX,[EAX + 0x34]                ; 005195c9
    LEA EDX,[EBP*0x4 + 0x0]             ; 005195cc
    ADD ECX,EDX                         ; 005195d3
    ADD EAX,0x20                        ; 005195d5
    PUSH ECX                            ; 005195d8
    ADD EAX,EDX                         ; 005195d9
    PUSH EAX                            ; 005195db
    PUSH 0x5917dc                       ; 005195dc | = "%d,%d\n"
    PUSH ESI                            ; 005195e1
    INC EBP                             ; 005195e2
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005195e3
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 005195e8
    JMP 0x005195b1                      ; 005195eb
        ;   XREF to: 005195b1 (UNCONDITIONAL_JUMP)  ; LAB_005195b1
    XOR EDI,EDI                         ; 005195ed
        ;   Label: LAB_005195ed
    CMP EDI,dword ptr [EBX + 0xc00]     ; 005195ef
        ;   Label: LAB_005195ef
    JGE 0x00519682                      ; 005195f5
        ;   XREF to: 00519682 (CONDITIONAL_JUMP)  ; LAB_00519682
    LEA EAX,[EDI*0x4 + 0x0]             ; 005195fb
    SUB EAX,EDI                         ; 00519602
    LEA EDX,[EBX + 0xc04]               ; 00519604
    SHL EAX,0x5                         ; 0051960a
    ADD EAX,EDX                         ; 0051960d
    LEA EDX,[EAX + 0x48]                ; 0051960f
    PUSH EDX                            ; 00519612
    LEA EDX,[EAX + 0x34]                ; 00519613
    PUSH EDX                            ; 00519616
    LEA EDX,[EAX + 0x20]                ; 00519617
    PUSH EDX                            ; 0051961a
    PUSH EAX                            ; 0051961b
    PUSH 0x5917e3                       ; 0051961c | = "\"%[^\"]\",%d,%d,%d\n"
    PUSH ESI                            ; 00519621
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00519622
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x18                        ; 00519627
    CMP EAX,0x4                         ; 0051962a
    JNZ 0x005192c1                      ; 0051962d
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    XOR EBP,EBP                         ; 00519633
    LEA EAX,[EDI*0x4 + 0x0]             ; 00519635
        ;   Label: LAB_00519635
    SUB EAX,EDI                         ; 0051963c
    SHL EAX,0x5                         ; 0051963e
    LEA EDX,[EBX + EAX*0x1]             ; 00519641
    CMP EBP,dword ptr [EDX + 0xc4c]     ; 00519644
    JGE 0x0051967c                      ; 0051964a
        ;   XREF to: 0051967c (CONDITIONAL_JUMP)  ; LAB_0051967c
    LEA EDX,[EBX + 0xc04]               ; 0051964c
    ADD EDX,EAX                         ; 00519652
    LEA EAX,[EBP*0x4 + 0x0]             ; 00519654
    ADD EDX,0x4c                        ; 0051965b
    ADD EAX,EDX                         ; 0051965e
    PUSH EAX                            ; 00519660
    PUSH 0x5917f5                       ; 00519661 | = "%d\n"
    PUSH ESI                            ; 00519666
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00519667
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0051966c
    CMP EAX,0x1                         ; 0051966f
    JNZ 0x005192c1                      ; 00519672
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    ADD EBP,EAX                         ; 00519678
    JMP 0x00519635                      ; 0051967a
        ;   XREF to: 00519635 (UNCONDITIONAL_JUMP)  ; LAB_00519635
    INC EDI                             ; 0051967c
        ;   Label: LAB_0051967c
    JMP 0x005195ef                      ; 0051967d
        ;   XREF to: 005195ef (UNCONDITIONAL_JUMP)  ; LAB_005195ef
    MOV EDI,ESI                         ; 00519682
        ;   Label: LAB_00519682
    PUSH EDI                            ; 00519684
        ;   Label: LAB_00519684
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519685
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051968a
    TEST EAX,EAX                        ; 0051968d
    JL 0x00519696                       ; 0051968f
        ;   XREF to: 00519696 (CONDITIONAL_JUMP)  ; LAB_00519696
    CMP EAX,0xa                         ; 00519691
    JNZ 0x00519684                      ; 00519694
        ;   XREF to: 00519684 (CONDITIONAL_JUMP)  ; LAB_00519684
    XOR EAX,EAX                         ; 00519696
        ;   Label: LAB_00519696
    MOV dword ptr [ESP + 0x6c],EAX      ; 00519698
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0051969c
        ;   Label: LAB_0051969c
    CMP EAX,dword ptr [EBX]             ; 005196a0
    JGE 0x00519768                      ; 005196a2
        ;   XREF to: 00519768 (CONDITIONAL_JUMP)  ; LAB_00519768
    XOR ECX,ECX                         ; 005196a8
    MOV dword ptr [ESP + 0x74],ECX      ; 005196aa
    MOV EDI,dword ptr [ESP + 0x6c]      ; 005196ae
        ;   Label: LAB_005196ae
    SHL EDI,0x2                         ; 005196b2
    ADD EDI,EBX                         ; 005196b5
    MOV EAX,dword ptr [ESP + 0x74]      ; 005196b7
    CMP EAX,dword ptr [EDI + 0x2c]      ; 005196bb
    JGE 0x00519756                      ; 005196be
        ;   XREF to: 00519756 (CONDITIONAL_JUMP)  ; LAB_00519756
    MOV EDX,EAX                         ; 005196c4
    SHL EAX,0x2                         ; 005196c6
    SUB EAX,EDX                         ; 005196c9
    SHL EAX,0x2                         ; 005196cb
    ADD EAX,EDX                         ; 005196ce
    MOV EBP,dword ptr [EDI + 0x40]      ; 005196d0
    SHL EAX,0x2                         ; 005196d3
    ADD EBP,EAX                         ; 005196d6
    LEA EAX,[ESP + 0x5c]                ; 005196d8
    PUSH EAX                            ; 005196dc
    PUSH 0x5917f9                       ; 005196dd | = "%d\n"
    PUSH ESI                            ; 005196e2
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005196e3
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 005196e8
    CMP EAX,0x1                         ; 005196eb
    JNZ 0x005192c1                      ; 005196ee
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    MOV AL,byte ptr [ESP + 0x5c]        ; 005196f4
    XOR EDI,EDI                         ; 005196f8
    MOV byte ptr [EBP],AL               ; 005196fa
    XOR EAX,EAX                         ; 005196fd
        ;   Label: LAB_005196fd
    MOV AL,byte ptr [EBP]               ; 005196ff
    CMP EDI,EAX                         ; 00519702
    JGE 0x0051975f                      ; 00519704
        ;   XREF to: 0051975f (CONDITIONAL_JUMP)  ; LAB_0051975f
    LEA EAX,[EDI*0x4 + 0x0]             ; 00519706
    SUB EAX,EDI                         ; 0051970d
    LEA EDX,[EBP + 0x10]                ; 0051970f
    SHL EAX,0x2                         ; 00519712
    ADD EAX,EDX                         ; 00519715
    LEA EDX,[EAX + 0x8]                 ; 00519717
    PUSH EDX                            ; 0051971a
    LEA EDX,[EAX + 0x4]                 ; 0051971b
    PUSH EDX                            ; 0051971e
    PUSH EAX                            ; 0051971f
    LEA EDX,[EBP + 0x4]                 ; 00519720
    LEA EAX,[EDI*0x4 + 0x0]             ; 00519723
    ADD EAX,EDX                         ; 0051972a
    PUSH EAX                            ; 0051972c
    LEA EAX,[ESP + 0x70]                ; 0051972d
    PUSH EAX                            ; 00519731
    PUSH 0x5917fd                       ; 00519732 | = "%d,%f,%f,%f,%f\n"
    PUSH ESI                            ; 00519737
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00519738
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x1c                        ; 0051973d
    CMP EAX,0x5                         ; 00519740
    JNZ 0x005192c1                      ; 00519743
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    LEA EDX,[EDI + EBP*0x1]             ; 00519749
    MOV AL,byte ptr [ESP + 0x60]        ; 0051974c
    INC EDI                             ; 00519750
    MOV byte ptr [EDX + 0x1],AL         ; 00519751
    JMP 0x005196fd                      ; 00519754
        ;   XREF to: 005196fd (UNCONDITIONAL_JUMP)  ; LAB_005196fd
    INC dword ptr [ESP + 0x6c]          ; 00519756
        ;   Label: LAB_00519756
    JMP 0x0051969c                      ; 0051975a
        ;   XREF to: 0051969c (UNCONDITIONAL_JUMP)  ; LAB_0051969c
    INC dword ptr [ESP + 0x74]          ; 0051975f
        ;   Label: LAB_0051975f
    JMP 0x005196ae                      ; 00519763
        ;   XREF to: 005196ae (UNCONDITIONAL_JUMP)  ; LAB_005196ae
    MOV EDI,ESI                         ; 00519768
        ;   Label: LAB_00519768
    PUSH EDI                            ; 0051976a
        ;   Label: LAB_0051976a
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0051976b
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00519770
    TEST EAX,EAX                        ; 00519773
    JL 0x0051977c                       ; 00519775
        ;   XREF to: 0051977c (CONDITIONAL_JUMP)  ; LAB_0051977c
    CMP EAX,0xa                         ; 00519777
    JNZ 0x0051976a                      ; 0051977a
        ;   XREF to: 0051976a (CONDITIONAL_JUMP)  ; LAB_0051976a
    XOR ECX,ECX                         ; 0051977c
        ;   Label: LAB_0051977c
    MOV dword ptr [ESP + 0x78],ECX      ; 0051977e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00519782
        ;   Label: LAB_00519782
    CMP EAX,dword ptr [EBX]             ; 00519786
    JGE 0x00519863                      ; 00519788
        ;   XREF to: 00519863 (CONDITIONAL_JUMP)  ; LAB_00519863
    XOR EDI,EDI                         ; 0051978e
    MOV EBP,dword ptr [ESP + 0x78]      ; 00519790
        ;   Label: LAB_00519790
    SHL EBP,0x2                         ; 00519794
    ADD EBP,EBX                         ; 00519797
    MOV EAX,dword ptr [EBP + 0x54]      ; 00519799
    ADD EAX,dword ptr [EBP + 0x68]      ; 0051979c
    CMP EDI,EAX                         ; 0051979f
    JGE 0x0051985a                      ; 005197a1
        ;   XREF to: 0051985a (CONDITIONAL_JUMP)  ; LAB_0051985a
    LEA EAX,[EDI*0x8 + 0x0]             ; 005197a7
    LEA EDX,[EDI + EAX*0x1]             ; 005197ae
    MOV EAX,dword ptr [EBP + 0x7c]      ; 005197b1
    ADD EDX,EDX                         ; 005197b4
    ADD EAX,EDX                         ; 005197b6
    MOV dword ptr [ESP + 0x70],EAX      ; 005197b8
    LEA EAX,[ESP + 0x8]                 ; 005197bc
    PUSH EAX                            ; 005197c0
    LEA EAX,[ESP + 0x18]                ; 005197c1
    PUSH EAX                            ; 005197c5
    LEA EAX,[ESP + 0x28]                ; 005197c6
    PUSH EAX                            ; 005197ca
    LEA EAX,[ESP + 0x10]                ; 005197cb
    PUSH EAX                            ; 005197cf
    LEA EAX,[ESP + 0x20]                ; 005197d0
    PUSH EAX                            ; 005197d4
    LEA EAX,[ESP + 0x30]                ; 005197d5
    PUSH EAX                            ; 005197d9
    LEA EAX,[ESP + 0x18]                ; 005197da
    PUSH EAX                            ; 005197de
    LEA EAX,[ESP + 0x28]                ; 005197df
    PUSH EAX                            ; 005197e3
    LEA EAX,[ESP + 0x38]                ; 005197e4
    PUSH EAX                            ; 005197e8
    LEA EAX,[ESP + 0x88]                ; 005197e9
    PUSH EAX                            ; 005197f0
    PUSH 0x59180d                       ; 005197f1 | = "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 005197f6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005197f7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x30                        ; 005197fc
    CMP EAX,0xa                         ; 005197ff
    JNZ 0x005192c1                      ; 00519802
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    LEA EAX,[EDI*0x4 + 0x0]             ; 00519808
    MOV EDX,dword ptr [EBP + 0x90]      ; 0051980f
    ADD EDX,EAX                         ; 00519815
    MOV EAX,dword ptr [ESP + 0x64]      ; 00519817
    MOV dword ptr [EDX],EAX             ; 0051981b
    XOR EAX,EAX                         ; 0051981d
    MOV EDX,dword ptr [ESP + 0x70]      ; 0051981f
        ;   Label: LAB_0051981f
    LEA EBP,[EAX + EAX*0x1]             ; 00519823
    ADD EBP,EDX                         ; 00519826
    MOV CX,word ptr [ESP + EAX*0x4 + 0x18] ; 00519828
    MOV word ptr [EBP],CX               ; 0051982d
    MOV ECX,dword ptr [ESP + EAX*0x4 + 0xc] ; 00519831
    SAR ECX,0x8                         ; 00519835
    MOV dword ptr [ESP + 0x68],ECX      ; 00519838
    MOV ECX,dword ptr [ESP + 0x68]      ; 0051983c
    MOV word ptr [EBP + 0x6],CX         ; 00519840
    MOV EDX,dword ptr [ESP + EAX*0x4]   ; 00519844
    SAR EDX,0x8                         ; 00519847
    INC EAX                             ; 0051984a
    MOV word ptr [EBP + 0xc],DX         ; 0051984b
    CMP EAX,0x3                         ; 0051984f
    JL 0x0051981f                       ; 00519852
        ;   XREF to: 0051981f (CONDITIONAL_JUMP)  ; LAB_0051981f
    INC EDI                             ; 00519854
    JMP 0x00519790                      ; 00519855
        ;   XREF to: 00519790 (UNCONDITIONAL_JUMP)  ; LAB_00519790
    INC dword ptr [ESP + 0x78]          ; 0051985a
        ;   Label: LAB_0051985a
    JMP 0x00519782                      ; 0051985e
        ;   XREF to: 00519782 (UNCONDITIONAL_JUMP)  ; LAB_00519782
    MOV EDI,ESI                         ; 00519863
        ;   Label: LAB_00519863
    PUSH EDI                            ; 00519865
        ;   Label: LAB_00519865
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519866
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051986b
    TEST EAX,EAX                        ; 0051986e
    JL 0x00519877                       ; 00519870
        ;   XREF to: 00519877 (CONDITIONAL_JUMP)  ; LAB_00519877
    CMP EAX,0xa                         ; 00519872
    JNZ 0x00519865                      ; 00519875
        ;   XREF to: 00519865 (CONDITIONAL_JUMP)  ; LAB_00519865
    XOR EBP,EBP                         ; 00519877
        ;   Label: LAB_00519877
    CMP EBP,dword ptr [EBX]             ; 00519879
        ;   Label: LAB_00519879
    JGE 0x005198bb                      ; 0051987b
        ;   XREF to: 005198bb (CONDITIONAL_JUMP)  ; LAB_005198bb
    XOR EDI,EDI                         ; 0051987d
    LEA EAX,[EBP*0x4 + 0x0]             ; 0051987f
        ;   Label: LAB_0051987f
    ADD EAX,EBX                         ; 00519886
    CMP EDI,dword ptr [EAX + 0x68]      ; 00519888
    JGE 0x005198b8                      ; 0051988b
        ;   XREF to: 005198b8 (CONDITIONAL_JUMP)  ; LAB_005198b8
    LEA EDX,[EDI*0x4 + 0x0]             ; 0051988d
    MOV EAX,dword ptr [EAX + 0xa4]      ; 00519894
    ADD EAX,EDX                         ; 0051989a
    PUSH EAX                            ; 0051989c
    PUSH 0x59182c                       ; 0051989d | = "%d\n"
    PUSH ESI                            ; 005198a2
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005198a3
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 005198a8
    CMP EAX,0x1                         ; 005198ab
    JNZ 0x005192c1                      ; 005198ae
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    ADD EDI,EAX                         ; 005198b4
    JMP 0x0051987f                      ; 005198b6
        ;   XREF to: 0051987f (UNCONDITIONAL_JUMP)  ; LAB_0051987f
    INC EBP                             ; 005198b8
        ;   Label: LAB_005198b8
    JMP 0x00519879                      ; 005198b9
        ;   XREF to: 00519879 (UNCONDITIONAL_JUMP)  ; LAB_00519879
    MOV EDI,ESI                         ; 005198bb
        ;   Label: LAB_005198bb
    PUSH EDI                            ; 005198bd
        ;   Label: LAB_005198bd
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 005198be
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 005198c3
    TEST EAX,EAX                        ; 005198c6
    JL 0x005198cf                       ; 005198c8
        ;   XREF to: 005198cf (CONDITIONAL_JUMP)  ; LAB_005198cf
    CMP EAX,0xa                         ; 005198ca
    JNZ 0x005198bd                      ; 005198cd
        ;   XREF to: 005198bd (CONDITIONAL_JUMP)  ; LAB_005198bd
    XOR EDI,EDI                         ; 005198cf
        ;   Label: LAB_005198cf
    CMP EDI,dword ptr [EBX + 0xb8]      ; 005198d1
        ;   Label: LAB_005198d1
    JGE 0x00519927                      ; 005198d7
        ;   XREF to: 00519927 (CONDITIONAL_JUMP)  ; LAB_00519927
    XOR EBP,EBP                         ; 005198d9
    CMP EBP,dword ptr [EBX + 0xbc]      ; 005198db
        ;   Label: LAB_005198db
    JGE 0x00519924                      ; 005198e1
        ;   XREF to: 00519924 (CONDITIONAL_JUMP)  ; LAB_00519924
    LEA EAX,[EDI*0x8 + 0x0]             ; 005198e3
    ADD EAX,EDI                         ; 005198ea
    LEA EDX,[EBX + 0xc0]                ; 005198ec
    SHL EAX,0x6                         ; 005198f2
    ADD EDX,EAX                         ; 005198f5
    LEA EAX,[EBP*0x8 + 0x0]             ; 005198f7
    ADD EAX,EBP                         ; 005198fe
    SHL EAX,0x3                         ; 00519900
    ADD EAX,EDX                         ; 00519903
    ADD EAX,0x8                         ; 00519905
    PUSH EAX                            ; 00519908
    PUSH 0x591830                       ; 00519909 | = "%[^\n]\n"
    PUSH ESI                            ; 0051990e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0051990f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00519914
    CMP EAX,0x1                         ; 00519917
    JNZ 0x005192c1                      ; 0051991a
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    ADD EBP,EAX                         ; 00519920
    JMP 0x005198db                      ; 00519922
        ;   XREF to: 005198db (UNCONDITIONAL_JUMP)  ; LAB_005198db
    INC EDI                             ; 00519924
        ;   Label: LAB_00519924
    JMP 0x005198d1                      ; 00519925
        ;   XREF to: 005198d1 (UNCONDITIONAL_JUMP)  ; LAB_005198d1
    MOV EDI,ESI                         ; 00519927
        ;   Label: LAB_00519927
    PUSH EDI                            ; 00519929
        ;   Label: LAB_00519929
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0051992a
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051992f
    TEST EAX,EAX                        ; 00519932
    JL 0x0051993b                       ; 00519934
        ;   XREF to: 0051993b (CONDITIONAL_JUMP)  ; LAB_0051993b
    CMP EAX,0xa                         ; 00519936
    JNZ 0x00519929                      ; 00519939
        ;   XREF to: 00519929 (CONDITIONAL_JUMP)  ; LAB_00519929
    XOR EDI,EDI                         ; 0051993b
        ;   Label: LAB_0051993b
    CMP EDI,dword ptr [ESP + 0x2c]      ; 0051993d
        ;   Label: LAB_0051993d
    JGE 0x0051997a                      ; 00519941
        ;   XREF to: 0051997a (CONDITIONAL_JUMP)  ; LAB_0051997a
    LEA EAX,[EDI*0x4 + 0x0]             ; 00519943
    SUB EAX,EDI                         ; 0051994a
    LEA EDX,[EBX + 0x1750]              ; 0051994c
    SHL EAX,0x2                         ; 00519952
    ADD EAX,EDX                         ; 00519955
    LEA EDX,[EAX + 0x8]                 ; 00519957
    PUSH EDX                            ; 0051995a
    LEA EDX,[EAX + 0x4]                 ; 0051995b
    PUSH EDX                            ; 0051995e
    PUSH EAX                            ; 0051995f
    PUSH 0x591837                       ; 00519960 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00519965
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00519966
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0051996b
    CMP EAX,0x3                         ; 0051996e
    JNZ 0x005192c1                      ; 00519971
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    INC EDI                             ; 00519977
    JMP 0x0051993d                      ; 00519978
        ;   XREF to: 0051993d (UNCONDITIONAL_JUMP)  ; LAB_0051993d
    CMP dword ptr [ESP + 0x28],0x2      ; 0051997a
        ;   Label: LAB_0051997a
    JL 0x00519a4f                       ; 0051997f
        ;   XREF to: 00519a4f (CONDITIONAL_JUMP)  ; LAB_00519a4f
    MOV EDI,ESI                         ; 00519985
    PUSH EDI                            ; 00519987
        ;   Label: LAB_00519987
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519988
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 0051998d
    TEST EAX,EAX                        ; 00519990
    JL 0x00519999                       ; 00519992
        ;   XREF to: 00519999 (CONDITIONAL_JUMP)  ; LAB_00519999
    CMP EAX,0xa                         ; 00519994
    JNZ 0x00519987                      ; 00519997
        ;   XREF to: 00519987 (CONDITIONAL_JUMP)  ; LAB_00519987
    LEA EAX,[EBX + 0x174c]              ; 00519999
        ;   Label: LAB_00519999
    PUSH EAX                            ; 0051999f
    LEA EAX,[EBX + 0x1748]              ; 005199a0
    PUSH EAX                            ; 005199a6
    LEA EAX,[EBX + 0x1744]              ; 005199a7
    PUSH EAX                            ; 005199ad
    PUSH 0x591841                       ; 005199ae | = "%f,%f,%f\n"
    PUSH ESI                            ; 005199b3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005199b4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 005199b9
    CMP EAX,0x3                         ; 005199bc
    JNZ 0x005192c1                      ; 005199bf
        ;   XREF to: 005192c1 (CONDITIONAL_JUMP)  ; LAB_005192c1
    CMP dword ptr [ESP + 0x28],0x4      ; 005199c5
        ;   Label: LAB_005199c5
    JL 0x00519a76                       ; 005199ca
        ;   XREF to: 00519a76 (CONDITIONAL_JUMP)  ; LAB_00519a76
    MOV EDI,ESI                         ; 005199d0
    PUSH EDI                            ; 005199d2
        ;   Label: LAB_005199d2
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 005199d3
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 005199d8
    TEST EAX,EAX                        ; 005199db
    JL 0x005199e4                       ; 005199dd
        ;   XREF to: 005199e4 (CONDITIONAL_JUMP)  ; LAB_005199e4
    CMP EAX,0xa                         ; 005199df
    JNZ 0x005199d2                      ; 005199e2
        ;   XREF to: 005199d2 (CONDITIONAL_JUMP)  ; LAB_005199d2
    LEA EAX,[EBX + 0x1c08]              ; 005199e4
        ;   Label: LAB_005199e4
    PUSH EAX                            ; 005199ea
    LEA EAX,[EBX + 0x1c04]              ; 005199eb
    PUSH EAX                            ; 005199f1
    LEA EAX,[EBX + 0x1c00]              ; 005199f2
    PUSH EAX                            ; 005199f8
    PUSH 0x59184b                       ; 005199f9 | = "%f,%f,%f\n"
    PUSH ESI                            ; 005199fe
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005199ff
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00519a04
    CMP dword ptr [ESP + 0x28],0x7      ; 00519a07
        ;   Label: LAB_00519a07
    JL 0x00519a93                       ; 00519a0c
        ;   XREF to: 00519a93 (CONDITIONAL_JUMP)  ; LAB_00519a93
    MOV EDI,ESI                         ; 00519a12
    PUSH EDI                            ; 00519a14
        ;   Label: LAB_00519a14
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 00519a15
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_00564570()
    ADD ESP,0x4                         ; 00519a1a
    TEST EAX,EAX                        ; 00519a1d
    JL 0x00519a26                       ; 00519a1f
        ;   XREF to: 00519a26 (CONDITIONAL_JUMP)  ; LAB_00519a26
    CMP EAX,0xa                         ; 00519a21
    JNZ 0x00519a14                      ; 00519a24
        ;   XREF to: 00519a14 (CONDITIONAL_JUMP)  ; LAB_00519a14
    XOR EDI,EDI                         ; 00519a26
        ;   Label: LAB_00519a26
    CMP EDI,dword ptr [ESP + 0x2c]      ; 00519a28
        ;   Label: LAB_00519a28
    JGE 0x00519a93                      ; 00519a2c
        ;   XREF to: 00519a93 (CONDITIONAL_JUMP)  ; LAB_00519a93
    LEA EAX,[EDI*0x4 + 0x0]             ; 00519a2e
    LEA EDX,[EBX + 0x26fc]              ; 00519a35
    ADD EAX,EDX                         ; 00519a3b
    PUSH EAX                            ; 00519a3d
    PUSH 0x591855                       ; 00519a3e | = "%d\n"
    PUSH ESI                            ; 00519a43
    INC EDI                             ; 00519a44
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00519a45
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00519a4a
    JMP 0x00519a28                      ; 00519a4d
        ;   XREF to: 00519a28 (UNCONDITIONAL_JUMP)  ; LAB_00519a28
    MOV dword ptr [EBX + 0x174c],0x3f800000 ; 00519a4f
        ;   Label: LAB_00519a4f
    MOV EAX,dword ptr [EBX + 0x174c]    ; 00519a59
    MOV dword ptr [EBX + 0x1748],EAX    ; 00519a5f
    MOV EAX,dword ptr [EBX + 0x1748]    ; 00519a65
    MOV dword ptr [EBX + 0x1744],EAX    ; 00519a6b
    JMP 0x005199c5                      ; 00519a71
        ;   XREF to: 005199c5 (UNCONDITIONAL_JUMP)  ; LAB_005199c5
    LEA EAX,[EBX + 0x1c00]              ; 00519a76
        ;   Label: LAB_00519a76
    MOV dword ptr [EAX + 0x8],0x0       ; 00519a7c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00519a83
    MOV dword ptr [EAX + 0x4],EDX       ; 00519a86
    MOV EDX,dword ptr [EAX + 0x4]       ; 00519a89
    MOV dword ptr [EAX],EDX             ; 00519a8c
    JMP 0x00519a07                      ; 00519a8e
        ;   XREF to: 00519a07 (UNCONDITIONAL_JUMP)  ; LAB_00519a07
    CMP dword ptr [ESP + 0x28],0x7      ; 00519a93
        ;   Label: LAB_00519a93
    JGE 0x00519aa3                      ; 00519a98
        ;   XREF to: 00519aa3 (CONDITIONAL_JUMP)  ; LAB_00519aa3
    PUSH EBX                            ; 00519a9a
    CALL core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20 ; 00519a9b
        ;   XREF to: 0051ad20 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20()
    ADD ESP,0x4                         ; 00519aa0
    TEST byte ptr [ESI + 0xc],0x20      ; 00519aa3
        ;   Label: LAB_00519aa3
    JNZ 0x00519ab1                      ; 00519aa7
        ;   XREF to: 00519ab1 (CONDITIONAL_JUMP)  ; LAB_00519ab1
    ADD ESP,0x7c                        ; 00519aa9
    POP EBP                             ; 00519aac
    POP EDI                             ; 00519aad
    POP ESI                             ; 00519aae
    POP EBX                             ; 00519aaf
    RET                                 ; 00519ab0
    MOV EBX,0x591859                    ; 00519ab1 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00519ab1
    MOV ESI,0x596                       ; 00519ab6
    PUSH 0x59186e                       ; 00519abb | = "CDeformableModel::loadStream - error ..."
    MOV dword ptr [0x01cc4800],EBX      ; 00519ac0 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00519ac6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00519acc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00519ad1
    ADD ESP,0x7c                        ; 00519ad4
    POP EBP                             ; 00519ad7
    POP EDI                             ; 00519ad8
    POP ESI                             ; 00519ad9
    POP EBX                             ; 00519ada
    RET                                 ; 00519adb

