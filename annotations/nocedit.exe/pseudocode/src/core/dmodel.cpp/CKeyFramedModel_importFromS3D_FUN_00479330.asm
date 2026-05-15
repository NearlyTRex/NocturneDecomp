; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel *this_ptr,char *filename)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; CPickList        Stack[-0xc84]:936  local_c84
; uchar[300]       Stack[-0x8dc]:300  auStack_8dc
; char[260]        Stack[-0x7b0]:260  local_7b0
; char[260]        Stack[-0x6ac]:260  local_6ac
; char[260]        Stack[-0x5a8]:260  local_5a8
; char[260]        Stack[-0x4a4]:260  local_4a4
; char[256]        Stack[-0x3a0]:256  local_3a0
; char[256]        Stack[-0x2a0]:256  local_2a0
; char[256]        Stack[-0x1a0]:256  local_1a0
; char[32]         Stack[-0xa0]:32  local_a0
; int              Stack[-0x80]:4  local_80
; undefined1[4]    Stack[-0x7c]:4  local_7c
; undefined1[4]    Stack[-0x78]:4  local_78
; float            Stack[-0x74]:4  local_74
; undefined1[4]    Stack[-0x70]:4  local_70
; undefined1[4]    Stack[-0x6c]:4  local_6c
; float            Stack[-0x68]:4  local_68
; undefined1[4]    Stack[-0x64]:4  local_64
; undefined1[4]    Stack[-0x60]:4  local_60
; int              Stack[-0x5c]:4  local_5c
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x54]:4  local_54
; int              Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; _FILE *          Stack[-0x24]:4  local_24
; _FILE *          Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; char[4]          Stack[-0x18]:4  local_18
; byte[4]          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d91b
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061fc20
;   TerminatedCString s_rb_0061fc33
;   TerminatedCString s_core_dmodel_cpp_0061fc36
;   TerminatedCString s_wb_0061fc49
;   TerminatedCString s_core_dmodel_cpp_0061fc4c
;   TerminatedCString s_core_dmodel_cpp_0061fc5f
;   TerminatedCString s_core_dmodel_cpp_0061fc72
;   TerminatedCString s_core_dmodel_cpp_0061fc85
;   TerminatedCString s_rt_0061fc98
;   TerminatedCString s_rt_0061fc9b
;   TerminatedCString s_models_0061fc9e
;   TerminatedCString s_core_dmodel_cpp_0061fca5
;   TerminatedCString s_Can_t_open_s_0061fcb8
;   TerminatedCString s_d_0061fcc6
;   TerminatedCString s_core_dmodel_cpp_0061fcca
;   ... and 42 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_file.c_makepath_FUN_005febfc
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c__stricmp_FUN_005fe7f0
;   crt_string.c_splitpath_FUN_005ff178
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479330
        ;   Label: core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
    PUSH ESI                            ; 00479331
    PUSH EDI                            ; 00479332
    PUSH EBP                            ; 00479333
    MOV EBP,ESP                         ; 00479334
    SUB ESP,0xc74                       ; 00479336
    SUB EBP,0x7a                        ; 0047933c
    MOV DL,0x3a                         ; 0047933f
    MOV ESI,dword ptr [EBP + 0x92]      ; 00479341
    MOV AL,byte ptr [ESI]               ; 00479347
        ;   Label: LAB_00479347
    CMP AL,DL                           ; 00479349
    JZ 0x0047935f                       ; 0047934b
        ;   XREF to: 0047935f (CONDITIONAL_JUMP)  ; LAB_0047935f
    CMP AL,0x0                          ; 0047934d
    JZ 0x0047935d                       ; 0047934f
        ;   XREF to: 0047935d (CONDITIONAL_JUMP)  ; LAB_0047935d
    INC ESI                             ; 00479351
    MOV AL,byte ptr [ESI]               ; 00479352
    CMP AL,DL                           ; 00479354
    JZ 0x0047935f                       ; 00479356
        ;   XREF to: 0047935f (CONDITIONAL_JUMP)  ; LAB_0047935f
    INC ESI                             ; 00479358
    CMP AL,0x0                          ; 00479359
    JNZ 0x00479347                      ; 0047935b
        ;   XREF to: 00479347 (CONDITIONAL_JUMP)  ; LAB_00479347
    SUB ESI,ESI                         ; 0047935d
        ;   Label: LAB_0047935d
    TEST ESI,ESI                        ; 0047935f
        ;   Label: LAB_0047935f
    JNZ 0x0047938b                      ; 00479361
        ;   XREF to: 0047938b (CONDITIONAL_JUMP)  ; LAB_0047938b
    MOV DL,0x5c                         ; 00479363
    MOV ESI,dword ptr [EBP + 0x92]      ; 00479365
    MOV AL,byte ptr [ESI]               ; 0047936b
        ;   Label: LAB_0047936b
    CMP AL,DL                           ; 0047936d
    JZ 0x00479383                       ; 0047936f
        ;   XREF to: 00479383 (CONDITIONAL_JUMP)  ; LAB_00479383
    CMP AL,0x0                          ; 00479371
    JZ 0x00479381                       ; 00479373
        ;   XREF to: 00479381 (CONDITIONAL_JUMP)  ; LAB_00479381
    INC ESI                             ; 00479375
    MOV AL,byte ptr [ESI]               ; 00479376
    CMP AL,DL                           ; 00479378
    JZ 0x00479383                       ; 0047937a
        ;   XREF to: 00479383 (CONDITIONAL_JUMP)  ; LAB_00479383
    INC ESI                             ; 0047937c
    CMP AL,0x0                          ; 0047937d
    JNZ 0x0047936b                      ; 0047937f
        ;   XREF to: 0047936b (CONDITIONAL_JUMP)  ; LAB_0047936b
    SUB ESI,ESI                         ; 00479381
        ;   Label: LAB_00479381
    TEST ESI,ESI                        ; 00479383
        ;   Label: LAB_00479383
    JZ 0x00479557                       ; 00479385
        ;   XREF to: 00479557 (CONDITIONAL_JUMP)  ; LAB_00479557
    PUSH 0x60f                          ; 0047938b
        ;   Label: LAB_0047938b
    PUSH 0x61fc85                       ; 00479390 | = "..\\core\\dmodel.cpp"
    PUSH 0x61fc98                       ; 00479395 | = "rt"
    PUSH 0x0                            ; 0047939a
    MOV ECX,dword ptr [EBP + 0x92]      ; 0047939c
    PUSH ECX                            ; 004793a2
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004793a3
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004793a8
    MOV dword ptr [EBP + 0x6a],EAX      ; 004793ab
        ;   Label: LAB_004793ab
    CMP dword ptr [EBP + 0x6a],0x0      ; 004793ae
    JNZ 0x004793de                      ; 004793b2
        ;   XREF to: 004793de (CONDITIONAL_JUMP)  ; LAB_004793de
    MOV EAX,dword ptr [EBP + 0x92]      ; 004793b4
    PUSH EAX                            ; 004793ba
    MOV ESI,0x61fca5                    ; 004793bb | = "..\\core\\dmodel.cpp"
    MOV EDI,0x613                       ; 004793c0
    PUSH 0x61fcb8                       ; 004793c5 | = "Can't open %s"
    MOV dword ptr [0x02f0ca48],ESI      ; 004793ca | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004793d0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004793d6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004793db
    MOV EBX,0x1                         ; 004793de
        ;   Label: LAB_004793de
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004793e3
    PUSH ESI                            ; 004793e6
        ;   Label: LAB_004793e6
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004793e7
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004793ec
    TEST EAX,EAX                        ; 004793ef
    JL 0x004793fd                       ; 004793f1
        ;   XREF to: 004793fd (CONDITIONAL_JUMP)  ; LAB_004793fd
    CMP EAX,0xa                         ; 004793f3
    JNZ 0x004793e6                      ; 004793f6
        ;   XREF to: 004793e6 (CONDITIONAL_JUMP)  ; LAB_004793e6
    DEC EBX                             ; 004793f8
    TEST EBX,EBX                        ; 004793f9
    JG 0x004793e6                       ; 004793fb
        ;   XREF to: 004793e6 (CONDITIONAL_JUMP)  ; LAB_004793e6
    LEA EAX,[EBP + 0x36]                ; 004793fd
        ;   Label: LAB_004793fd
    PUSH EAX                            ; 00479400
    PUSH 0x61fcc6                       ; 00479401 | = "%d\n"
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00479406
    PUSH EDX                            ; 00479409
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0047940a
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0047940f
    CMP EAX,0x1                         ; 00479412
    JZ 0x00479441                       ; 00479415
        ;   XREF to: 00479441 (CONDITIONAL_JUMP)  ; LAB_00479441
    MOV ESI,dword ptr [EBP + 0x92]      ; 00479417
        ;   Label: LAB_00479417
    PUSH ESI                            ; 0047941d
    MOV ECX,0x61fcca                    ; 0047941e | = "..\\core\\dmodel.cpp"
    MOV EBX,0x61e                       ; 00479423
    PUSH 0x61fcdd                       ; 00479428 | = "%s is corrupt!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0047942d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00479433 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00479439
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0047943e
    MOV EDI,dword ptr [EBP + 0x36]      ; 00479441
        ;   Label: LAB_00479441
    CMP EDI,0x66                        ; 00479444
    JGE 0x00479575                      ; 00479447
        ;   XREF to: 00479575 (CONDITIONAL_JUMP)  ; LAB_00479575
    PUSH 0x67                           ; 0047944d
        ;   Label: LAB_0047944d
    MOV EBX,dword ptr [EBP + 0x36]      ; 0047944f
    PUSH EBX                            ; 00479452
    MOV EDX,0x61fcec                    ; 00479453 | = "..\\core\\dmodel.cpp"
    MOV ECX,0x623                       ; 00479458
    PUSH 0x61fcff                       ; 0047945d | = "Can't import S3D file version %d, I c..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00479462 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00479468 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047946e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00479473
    MOV EBX,0x1                         ; 00479476
        ;   Label: LAB_00479476
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0047947b
    PUSH ESI                            ; 0047947e
        ;   Label: LAB_0047947e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0047947f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479484
    TEST EAX,EAX                        ; 00479487
    JL 0x00479495                       ; 00479489
        ;   XREF to: 00479495 (CONDITIONAL_JUMP)  ; LAB_00479495
    CMP EAX,0xa                         ; 0047948b
    JNZ 0x0047947e                      ; 0047948e
        ;   XREF to: 0047947e (CONDITIONAL_JUMP)  ; LAB_0047947e
    DEC EBX                             ; 00479490
    TEST EBX,EBX                        ; 00479491
    JG 0x0047947e                       ; 00479493
        ;   XREF to: 0047947e (CONDITIONAL_JUMP)  ; LAB_0047947e
    LEA EAX,[EBP + 0x5a]                ; 00479495
        ;   Label: LAB_00479495
    PUSH EAX                            ; 00479498
    LEA EAX,[EBP + 0x2e]                ; 00479499
    PUSH EAX                            ; 0047949c
    LEA EAX,[EBP + 0x3e]                ; 0047949d
    PUSH EAX                            ; 004794a0
    LEA EAX,[EBP + 0x32]                ; 004794a1
    PUSH EAX                            ; 004794a4
    LEA EAX,[EBP + 0x56]                ; 004794a5
    PUSH EAX                            ; 004794a8
    LEA EAX,[EBP + 0x42]                ; 004794a9
    PUSH EAX                            ; 004794ac
    LEA EAX,[EBP + 0x3a]                ; 004794ad
    PUSH EAX                            ; 004794b0
    PUSH 0x61fd41                       ; 004794b1 | = "%d,%d,%d,%d,%d,%d,%d\n"
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004794b6
    PUSH ESI                            ; 004794b9
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004794ba
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 004794bf
    CMP EAX,0x7                         ; 004794c2
    JNZ 0x00479417                      ; 004794c5
        ;   XREF to: 00479417 (CONDITIONAL_JUMP)  ; LAB_00479417
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004794cb
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004794d0
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004794d5
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EDI,dword ptr [EBP + 0x3e]      ; 004794da
    PUSH EDI                            ; 004794dd
    PUSH 0x1                            ; 004794de
    MOV EAX,dword ptr [EBP + 0x3a]      ; 004794e0
    PUSH EAX                            ; 004794e3
    MOV EDX,dword ptr [EBP + 0x42]      ; 004794e4
    PUSH EDX                            ; 004794e7
    MOV ECX,dword ptr [EBP + 0x56]      ; 004794e8
    PUSH ECX                            ; 004794eb
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004794ec
    PUSH EBX                            ; 004794f2
    CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 ; 004794f3
        ;   XREF to: 00477bf0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel * this_ptr, int vertex_count, int poly_count, int texture_count, ...)
    ADD ESP,0x18                        ; 004794f8
    PUSH 0x61fd7c                       ; 004794fb | = "Skipping parts"
    MOV ESI,dword ptr [0x00678a60]      ; 00479500 | g_CEditorToolsPtr
    PUSH ESI                            ; 00479506 | g_CEditorToolsInstance
    MOV EBX,0x1                         ; 00479507
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0047950c
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479511
    ADD ESP,0x8                         ; 00479514
    PUSH ESI                            ; 00479517
        ;   Label: LAB_00479517
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479518
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0047951d
    TEST EAX,EAX                        ; 00479520
    JL 0x0047952e                       ; 00479522
        ;   XREF to: 0047952e (CONDITIONAL_JUMP)  ; LAB_0047952e
    CMP EAX,0xa                         ; 00479524
    JNZ 0x00479517                      ; 00479527
        ;   XREF to: 00479517 (CONDITIONAL_JUMP)  ; LAB_00479517
    DEC EBX                             ; 00479529
    TEST EBX,EBX                        ; 0047952a
    JG 0x00479517                       ; 0047952c
        ;   XREF to: 00479517 (CONDITIONAL_JUMP)  ; LAB_00479517
    XOR ESI,ESI                         ; 0047952e
        ;   Label: LAB_0047952e
    CMP ESI,dword ptr [EBP + 0x32]      ; 00479530
        ;   Label: LAB_00479530
    JGE 0x00479583                      ; 00479533
        ;   XREF to: 00479583 (CONDITIONAL_JUMP)  ; LAB_00479583
    MOV EBX,0x1                         ; 00479535
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0047953a
    PUSH EDI                            ; 0047953d
        ;   Label: LAB_0047953d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0047953e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479543
    TEST EAX,EAX                        ; 00479546
    JL 0x00479554                       ; 00479548
        ;   XREF to: 00479554 (CONDITIONAL_JUMP)  ; LAB_00479554
    CMP EAX,0xa                         ; 0047954a
    JNZ 0x0047953d                      ; 0047954d
        ;   XREF to: 0047953d (CONDITIONAL_JUMP)  ; LAB_0047953d
    DEC EBX                             ; 0047954f
    TEST EBX,EBX                        ; 00479550
    JG 0x0047953d                       ; 00479552
        ;   XREF to: 0047953d (CONDITIONAL_JUMP)  ; LAB_0047953d
    INC ESI                             ; 00479554
        ;   Label: LAB_00479554
    JMP 0x00479530                      ; 00479555
        ;   XREF to: 00479530 (UNCONDITIONAL_JUMP)  ; LAB_00479530
    PUSH 0x61fc9b                       ; 00479557 | = "rt"
        ;   Label: LAB_00479557
    MOV EDX,dword ptr [EBP + 0x92]      ; 0047955c
    PUSH EDX                            ; 00479562
    PUSH 0x61fc9e                       ; 00479563 | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 00479568
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0047956d
    JMP 0x004793ab                      ; 00479570
        ;   XREF to: 004793ab (UNCONDITIONAL_JUMP)  ; LAB_004793ab
    CMP EDI,0x67                        ; 00479575
        ;   Label: LAB_00479575
    JG 0x0047944d                       ; 00479578
        ;   XREF to: 0047944d (CONDITIONAL_JUMP)  ; LAB_0047944d
    JMP 0x00479476                      ; 0047957e
        ;   XREF to: 00479476 (UNCONDITIONAL_JUMP)  ; LAB_00479476
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00479583
        ;   Label: LAB_00479583
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00479589
    MOV EAX,dword ptr [EAX + 0x104]     ; 0047958f
    MOV dword ptr [EDX + 0x5588],EAX    ; 00479595
    MOV EAX,dword ptr [EDX + 0x110]     ; 0047959b
    MOV dword ptr [EDX + 0x558c],EAX    ; 004795a1
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004795a7
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 004795ac
    PUSH 0x0                            ; 004795ae
    PUSH 0x61fd8b                       ; 004795b0 | = "Importing textures"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004795b5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004795ba
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004795bd
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    LEA EAX,[EBP + 0xfffff406]          ; 004795c2
    PUSH EAX                            ; 004795c8
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004795c9
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004795ce
    PUSH 0x61fd9e                       ; 004795d1 | = "Don't copy textures."
    LEA EAX,[EBP + 0xfffff406]          ; 004795d6
    PUSH EAX                            ; 004795dc
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004795dd
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004795e2
    PUSH 0x61fdb3                       ; 004795e5 | = "Copy textures from another directory ..."
    LEA EAX,[EBP + 0xfffff406]          ; 004795ea
    PUSH EAX                            ; 004795f0
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004795f1
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004795f6
    PUSH 0x61fdea                       ; 004795f9 | = "Copy textures from path specified in ..."
    LEA EAX,[EBP + 0xfffff406]          ; 004795fe
    PUSH EAX                            ; 00479604
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00479605
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047960a
    PUSH 0x0                            ; 0047960d
    PUSH -0x1                           ; 0047960f
    PUSH 0x61fe2b                       ; 00479611 | = "What do you want to do about the text..."
    LEA EAX,[EBP + 0xfffff406]          ; 00479616
    PUSH EAX                            ; 0047961c
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0047961d
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 00479622
    MOV dword ptr [EBP + 0x62],EAX      ; 00479625
    TEST EAX,EAX                        ; 00479628
    JL 0x00479712                       ; 0047962a
        ;   XREF to: 00479712 (CONDITIONAL_JUMP)  ; LAB_00479712
    CMP EAX,0x1                         ; 00479630
    JZ 0x0047973a                       ; 00479633
        ;   XREF to: 0047973a (CONDITIONAL_JUMP)  ; LAB_0047973a
    MOV EBX,0x1                         ; 00479639
        ;   Label: LAB_00479639
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0047963e
    PUSH ESI                            ; 00479641
        ;   Label: LAB_00479641
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479642
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479647
    TEST EAX,EAX                        ; 0047964a
    JL 0x00479658                       ; 0047964c
        ;   XREF to: 00479658 (CONDITIONAL_JUMP)  ; LAB_00479658
    CMP EAX,0xa                         ; 0047964e
    JNZ 0x00479641                      ; 00479651
        ;   XREF to: 00479641 (CONDITIONAL_JUMP)  ; LAB_00479641
    DEC EBX                             ; 00479653
    TEST EBX,EBX                        ; 00479654
    JG 0x00479641                       ; 00479656
        ;   XREF to: 00479641 (CONDITIONAL_JUMP)  ; LAB_00479641
    XOR EBX,EBX                         ; 00479658
        ;   Label: LAB_00479658
    MOV EAX,dword ptr [EBP + 0x8e]      ; 0047965a
        ;   Label: LAB_0047965a
    CMP EBX,dword ptr [EAX + 0x120]     ; 00479660
    JL 0x004797ff                       ; 00479666
        ;   XREF to: 004797ff (CONDITIONAL_JUMP)  ; LAB_004797ff
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0047966c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00479671
    PUSH 0x0                            ; 00479673
    PUSH 0x61fee4                       ; 00479675 | = "Importing polygons"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047967a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047967f
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479682
    MOV EBX,0x1                         ; 00479685
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0047968a
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH ESI                            ; 0047968f
        ;   Label: LAB_0047968f
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479690
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479695
    TEST EAX,EAX                        ; 00479698
    JL 0x004796a6                       ; 0047969a
        ;   XREF to: 004796a6 (CONDITIONAL_JUMP)  ; LAB_004796a6
    CMP EAX,0xa                         ; 0047969c
    JNZ 0x0047968f                      ; 0047969f
        ;   XREF to: 0047968f (CONDITIONAL_JUMP)  ; LAB_0047968f
    DEC EBX                             ; 004796a1
    TEST EBX,EBX                        ; 004796a2
    JG 0x0047968f                       ; 004796a4
        ;   XREF to: 0047968f (CONDITIONAL_JUMP)  ; LAB_0047968f
    XOR EBX,EBX                         ; 004796a6
        ;   Label: LAB_004796a6
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004796a8
        ;   Label: LAB_004796a8
    CMP EBX,dword ptr [EAX + 0x110]     ; 004796ae
    JGE 0x00479b0e                      ; 004796b4
        ;   XREF to: 00479b0e (CONDITIONAL_JUMP)  ; LAB_00479b0e
    LEA EAX,[EBP + 0x1e]                ; 004796ba
    PUSH EAX                            ; 004796bd
    LEA EAX,[EBP + 0x2a]                ; 004796be
    PUSH EAX                            ; 004796c1
    LEA EAX,[EBP + 0x12]                ; 004796c2
    PUSH EAX                            ; 004796c5
    LEA EAX,[EBP + 0x1a]                ; 004796c6
    PUSH EAX                            ; 004796c9
    LEA EAX,[EBP + 0x26]                ; 004796ca
    PUSH EAX                            ; 004796cd
    LEA EAX,[EBP + 0xe]                 ; 004796ce
    PUSH EAX                            ; 004796d1
    LEA EAX,[EBP + 0x16]                ; 004796d2
    PUSH EAX                            ; 004796d5
    LEA EAX,[EBP + 0x22]                ; 004796d6
    PUSH EAX                            ; 004796d9
    LEA EAX,[EBP + 0xa]                 ; 004796da
    PUSH EAX                            ; 004796dd
    LEA EAX,[EBP + 0x46]                ; 004796de
    PUSH EAX                            ; 004796e1
    PUSH 0x61fef7                       ; 004796e2 | = "%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n"
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004796e7
    PUSH EDI                            ; 004796ea
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004796eb
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 004796f0
    CMP EAX,0xa                         ; 004796f3
    JZ 0x00479a60                       ; 004796f6
        ;   XREF to: 00479a60 (CONDITIONAL_JUMP)  ; LAB_00479a60
    PUSH 0x0                            ; 004796fc
    LEA EAX,[EBP + 0xfffff406]          ; 004796fe
    PUSH EAX                            ; 00479704
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00479705
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047970a
    JMP 0x00479417                      ; 0047970d
        ;   XREF to: 00479417 (UNCONDITIONAL_JUMP)  ; LAB_00479417
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00479712
        ;   Label: LAB_00479712
    PUSH ECX                            ; 00479718
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00479719
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
        ;   Label: LAB_00479719
    ADD ESP,0x4                         ; 0047971e
    PUSH 0x0                            ; 00479721
    LEA EAX,[EBP + 0xfffff406]          ; 00479723
    PUSH EAX                            ; 00479729
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0047972a
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047972f
    LEA ESP,[EBP + 0x7a]                ; 00479732
    POP EBP                             ; 00479735
    POP EDI                             ; 00479736
    POP ESI                             ; 00479737
    POP EBX                             ; 00479738
    RET                                 ; 00479739
    PUSH 0x0                            ; 0047973a
        ;   Label: LAB_0047973a
    PUSH 0x0                            ; 0047973c
    LEA EAX,[EBP + 0xfffffeea]          ; 0047973e
    PUSH EAX                            ; 00479744
    LEA EAX,[EBP + 0x72]                ; 00479745
    PUSH EAX                            ; 00479748
    MOV EAX,dword ptr [EBP + 0x92]      ; 00479749
    PUSH EAX                            ; 0047974f
    CALL crt_string.c_splitpath_FUN_005ff178 ; 00479750
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00479755
    PUSH 0x0                            ; 00479758
    PUSH 0x0                            ; 0047975a
    LEA EAX,[EBP + 0xfffffeea]          ; 0047975c
    PUSH EAX                            ; 00479762
    LEA EAX,[EBP + 0x72]                ; 00479763
    PUSH EAX                            ; 00479766
    LEA EAX,[EBP + 0xfffffae2]          ; 00479767
    PUSH EAX                            ; 0047976d
    CALL crt_file.c_makepath_FUN_005febfc ; 0047976e
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00479773
    PUSH 0x1                            ; 00479776
    PUSH 0x104                          ; 00479778
    LEA EAX,[EBP + 0xfffffae2]          ; 0047977d
    PUSH EAX                            ; 00479783
    PUSH 0x61fe56                       ; 00479784 | = "Enter directory to copy textures from"
    MOV EDX,dword ptr [0x00678a60]      ; 00479789 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0047978f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00479790
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00479795
    TEST EAX,EAX                        ; 00479798
    JZ 0x00479712                       ; 0047979a
        ;   XREF to: 00479712 (CONDITIONAL_JUMP)  ; LAB_00479712
    PUSH 0x0                            ; 004797a0
    PUSH 0x0                            ; 004797a2
    LEA EAX,[EBP + 0xfffffeea]          ; 004797a4
    PUSH EAX                            ; 004797aa
    LEA EAX,[EBP + 0x72]                ; 004797ab
    PUSH EAX                            ; 004797ae
    LEA EAX,[EBP + 0xfffffae2]          ; 004797af
    PUSH EAX                            ; 004797b5
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004797b6
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004797bb
    JMP 0x00479639                      ; 004797be
        ;   XREF to: 00479639 (UNCONDITIONAL_JUMP)  ; LAB_00479639
    PUSH 0x61fee0                       ; 004797c3 | = "raw"
        ;   Label: LAB_004797c3
    LEA EAX,[EBP + 0xfffffcea]          ; 004797c8
    PUSH EAX                            ; 004797ce
    LEA EAX,[EBX*0x8 + 0x0]             ; 004797cf
    MOV EDX,dword ptr [EBP + 0x8e]      ; 004797d6
    ADD EAX,EBX                         ; 004797dc
    ADD EDX,0x124                       ; 004797de
    SHL EAX,0x3                         ; 004797e4
    PUSH 0x0                            ; 004797e7
    ADD EAX,EDX                         ; 004797e9
    PUSH 0x0                            ; 004797eb
    ADD EAX,0x8                         ; 004797ed
    PUSH EAX                            ; 004797f0
    INC EBX                             ; 004797f1
    CALL crt_file.c_makepath_FUN_005febfc ; 004797f2
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004797f7
    JMP 0x0047965a                      ; 004797fa
        ;   XREF to: 0047965a (UNCONDITIONAL_JUMP)  ; LAB_0047965a
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004797ff
        ;   Label: LAB_004797ff
    PUSH EAX                            ; 00479802
    PUSH 0x104                          ; 00479803
    LEA EAX,[EBP + 0xfffff9de]          ; 00479808
    PUSH EAX                            ; 0047980e
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 0047980f
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00479814
    TEST EAX,EAX                        ; 00479817
    JZ 0x00479984                       ; 00479819
        ;   XREF to: 00479984 (CONDITIONAL_JUMP)  ; LAB_00479984
    MOV DL,0xa                          ; 0047981f
    LEA ESI,[EBP + 0xfffff9de]          ; 00479821
    MOV AL,byte ptr [ESI]               ; 00479827
        ;   Label: LAB_00479827
    CMP AL,DL                           ; 00479829
    JZ 0x0047983f                       ; 0047982b
        ;   XREF to: 0047983f (CONDITIONAL_JUMP)  ; LAB_0047983f
    CMP AL,0x0                          ; 0047982d
    JZ 0x0047983d                       ; 0047982f
        ;   XREF to: 0047983d (CONDITIONAL_JUMP)  ; LAB_0047983d
    INC ESI                             ; 00479831
    MOV AL,byte ptr [ESI]               ; 00479832
    CMP AL,DL                           ; 00479834
    JZ 0x0047983f                       ; 00479836
        ;   XREF to: 0047983f (CONDITIONAL_JUMP)  ; LAB_0047983f
    INC ESI                             ; 00479838
    CMP AL,0x0                          ; 00479839
    JNZ 0x00479827                      ; 0047983b
        ;   XREF to: 00479827 (CONDITIONAL_JUMP)  ; LAB_00479827
    SUB ESI,ESI                         ; 0047983d
        ;   Label: LAB_0047983d
    TEST ESI,ESI                        ; 0047983f
        ;   Label: LAB_0047983f
    JZ 0x00479846                       ; 00479841
        ;   XREF to: 00479846 (CONDITIONAL_JUMP)  ; LAB_00479846
    MOV byte ptr [ESI],0x0              ; 00479843
    LEA EAX,[EBP + 0xfffffdea]          ; 00479846
        ;   Label: LAB_00479846
    PUSH EAX                            ; 0047984c
    LEA EAX,[EBP + 0xfffffcea]          ; 0047984d
    PUSH EAX                            ; 00479853
    PUSH 0x0                            ; 00479854
    PUSH 0x0                            ; 00479856
    LEA EAX,[EBP + 0xfffff9de]          ; 00479858
    PUSH EAX                            ; 0047985e
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0047985f
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    MOV EDX,dword ptr [EBP + 0x62]      ; 00479864
    ADD ESP,0x14                        ; 00479867
    TEST EDX,EDX                        ; 0047986a
    JZ 0x004797c3                       ; 0047986c
        ;   XREF to: 004797c3 (CONDITIONAL_JUMP)  ; LAB_004797c3
    CMP EDX,0x1                         ; 00479872
    JNZ 0x00479999                      ; 00479875
        ;   XREF to: 00479999 (CONDITIONAL_JUMP)  ; LAB_00479999
    LEA EAX,[EBP + 0xfffffdea]          ; 0047987b
    PUSH EAX                            ; 00479881
    LEA EAX,[EBP + 0xfffffcea]          ; 00479882
    PUSH EAX                            ; 00479888
    LEA EAX,[EBP + 0xfffffeea]          ; 00479889
    PUSH EAX                            ; 0047988f
    LEA EAX,[EBP + 0x72]                ; 00479890
    PUSH EAX                            ; 00479893
    LEA EAX,[EBP + 0xfffff8da]          ; 00479894
    PUSH EAX                            ; 0047989a
    CALL crt_file.c_makepath_FUN_005febfc ; 0047989b
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004798a0
    LEA EAX,[EBP + 0xfffffdea]          ; 004798a3
        ;   Label: LAB_004798a3
    PUSH EAX                            ; 004798a9
    LEA EAX,[EBP + 0xfffffcea]          ; 004798aa
    PUSH EAX                            ; 004798b0
    PUSH 0x61fe9b                       ; 004798b1 | = "art"
    PUSH 0x0                            ; 004798b6
    LEA EAX,[EBP + 0xfffffbe6]          ; 004798b8
    PUSH EAX                            ; 004798be
    CALL crt_file.c_makepath_FUN_005febfc ; 004798bf
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004798c4
    LEA EAX,[EBP + 0xfffffbe6]          ; 004798c7
    PUSH EAX                            ; 004798cd
    LEA EAX,[EBP + 0xfffff8da]          ; 004798ce
    PUSH EAX                            ; 004798d4
    PUSH 0x61fe9f                       ; 004798d5 | = "Copying %s -> %s"
    MOV EDX,dword ptr [0x00678a60]      ; 004798da | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004798e0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004798e1
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004798e6
    PUSH 0x5ef                          ; 004798e9
    PUSH 0x61fc20                       ; 004798ee | = "..\\core\\dmodel.cpp"
    PUSH 0x61fc33                       ; 004798f3 | = "rb"
    PUSH 0x0                            ; 004798f8
    LEA EAX,[EBP + 0xfffff8da]          ; 004798fa
    PUSH EAX                            ; 00479900
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00479901
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 00479906
    ADD ESP,0x14                        ; 00479908
    MOV EDI,EAX                         ; 0047990b
    TEST EAX,EAX                        ; 0047990d
    JZ 0x0047994f                       ; 0047990f
        ;   XREF to: 0047994f (CONDITIONAL_JUMP)  ; LAB_0047994f
    PUSH 0x5f2                          ; 00479911
    PUSH 0x61fc36                       ; 00479916 | = "..\\core\\dmodel.cpp"
    PUSH 0x61fc49                       ; 0047991b | = "wb"
    PUSH 0x0                            ; 00479920
    LEA EAX,[EBP + 0xfffffbe6]          ; 00479922
    PUSH EAX                            ; 00479928
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00479929
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0047992e
    MOV dword ptr [EBP + 0x66],EAX      ; 00479931
    TEST EAX,EAX                        ; 00479934
    JNZ 0x004799f0                      ; 00479936
        ;   XREF to: 004799f0 (CONDITIONAL_JUMP)  ; LAB_004799f0
    PUSH 0x5f4                          ; 0047993c
    PUSH 0x61fc4c                       ; 00479941 | = "..\\core\\dmodel.cpp"
    PUSH ESI                            ; 00479946
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00479947
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0047994c
    LEA EAX,[EBP + 0xfffffbe6]          ; 0047994f
        ;   Label: LAB_0047994f
    PUSH EAX                            ; 00479955
    LEA EAX,[EBP + 0xfffff8da]          ; 00479956
    PUSH EAX                            ; 0047995c
    PUSH 0x61feb0                       ; 0047995d | = "I can't copy %s to %s.  Continue impo..."
    MOV EAX,[0x00678a60]                ; 00479962 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 00479967 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060 ; 00479968
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x10                        ; 0047996d
    TEST EAX,EAX                        ; 00479970
    JNZ 0x004797c3                      ; 00479972
        ;   XREF to: 004797c3 (CONDITIONAL_JUMP)  ; LAB_004797c3
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00479978
    PUSH EDX                            ; 0047997e
    JMP 0x00479719                      ; 0047997f
        ;   XREF to: 00479719 (UNCONDITIONAL_JUMP)  ; LAB_00479719
    PUSH EAX                            ; 00479984
        ;   Label: LAB_00479984
    LEA EAX,[EBP + 0xfffff406]          ; 00479985
    PUSH EAX                            ; 0047998b
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0047998c
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00479991
    JMP 0x00479417                      ; 00479994
        ;   XREF to: 00479417 (UNCONDITIONAL_JUMP)  ; LAB_00479417
    CMP EDX,0x2                         ; 00479999
        ;   Label: LAB_00479999
    JNZ 0x004799c9                      ; 0047999c
        ;   XREF to: 004799c9 (CONDITIONAL_JUMP)  ; LAB_004799c9
    LEA ESI,[EBP + 0xfffff9de]          ; 0047999e
    LEA EDI,[EBP + 0xfffff8da]          ; 004799a4
    PUSH EDI                            ; 004799aa
    MOV AL,byte ptr [ESI]               ; 004799ab
        ;   Label: LAB_004799ab
    MOV byte ptr [EDI],AL               ; 004799ad
    CMP AL,0x0                          ; 004799af
    JZ 0x004799c3                       ; 004799b1
        ;   XREF to: 004799c3 (CONDITIONAL_JUMP)  ; LAB_004799c3
    MOV AL,byte ptr [ESI + 0x1]         ; 004799b3
    ADD ESI,0x2                         ; 004799b6
    MOV byte ptr [EDI + 0x1],AL         ; 004799b9
    ADD EDI,0x2                         ; 004799bc
    CMP AL,0x0                          ; 004799bf
    JNZ 0x004799ab                      ; 004799c1
        ;   XREF to: 004799ab (CONDITIONAL_JUMP)  ; LAB_004799ab
    POP EDI                             ; 004799c3
        ;   Label: LAB_004799c3
    JMP 0x004798a3                      ; 004799c4
        ;   XREF to: 004798a3 (UNCONDITIONAL_JUMP)  ; LAB_004798a3
    MOV EDI,0x61fe7c                    ; 004799c9 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_004799c9
    MOV EAX,0x6a9                       ; 004799ce
    PUSH 0x61fe8f                       ; 004799d3 | = "Hell froze."
    MOV dword ptr [0x02f0ca48],EDI      ; 004799d8 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004799de | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004799e3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004799e8
    JMP 0x004798a3                      ; 004799eb
        ;   XREF to: 004798a3 (UNCONDITIONAL_JUMP)  ; LAB_004798a3
    PUSH EDI                            ; 004799f0
        ;   Label: LAB_004799f0
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004799f1
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004799f6
    TEST EAX,EAX                        ; 004799f9
    JL 0x00479a0c                       ; 004799fb
        ;   XREF to: 00479a0c (CONDITIONAL_JUMP)  ; LAB_00479a0c
    MOV ECX,dword ptr [EBP + 0x66]      ; 004799fd
    PUSH ECX                            ; 00479a00
    PUSH EAX                            ; 00479a01
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 00479a02
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 00479a07
    JMP 0x004799f0                      ; 00479a0a
        ;   XREF to: 004799f0 (UNCONDITIONAL_JUMP)  ; LAB_004799f0
    TEST byte ptr [EDI + 0xc],0x20      ; 00479a0c
        ;   Label: LAB_00479a0c
    JZ 0x00479a4a                       ; 00479a10
        ;   XREF to: 00479a4a (CONDITIONAL_JUMP)  ; LAB_00479a4a
    XOR ESI,ESI                         ; 00479a12
        ;   Label: LAB_00479a12
    PUSH 0x600                          ; 00479a14
        ;   Label: LAB_00479a14
    PUSH 0x61fc5f                       ; 00479a19 | = "..\\core\\dmodel.cpp"
    PUSH EDI                            ; 00479a1e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00479a1f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00479a24
    PUSH 0x601                          ; 00479a27
    PUSH 0x61fc72                       ; 00479a2c | = "..\\core\\dmodel.cpp"
    MOV EDI,dword ptr [EBP + 0x66]      ; 00479a31
    PUSH EDI                            ; 00479a34
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00479a35
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00479a3a
    TEST ESI,ESI                        ; 00479a3d
    JNZ 0x004797c3                      ; 00479a3f
        ;   XREF to: 004797c3 (CONDITIONAL_JUMP)  ; LAB_004797c3
    JMP 0x0047994f                      ; 00479a45
        ;   XREF to: 0047994f (UNCONDITIONAL_JUMP)  ; LAB_0047994f
    MOV EAX,dword ptr [EBP + 0x66]      ; 00479a4a
        ;   Label: LAB_00479a4a
    TEST byte ptr [EAX + 0xc],0x20      ; 00479a4d
    JNZ 0x00479a12                      ; 00479a51
        ;   XREF to: 00479a12 (CONDITIONAL_JUMP)  ; LAB_00479a12
    MOV ESI,0x1                         ; 00479a53
    JMP 0x00479a14                      ; 00479a58
        ;   XREF to: 00479a14 (UNCONDITIONAL_JUMP)  ; LAB_00479a14
    INC EBX                             ; 00479a5a
        ;   Label: LAB_00479a5a
    JMP 0x004796a8                      ; 00479a5b
        ;   XREF to: 004796a8 (UNCONDITIONAL_JUMP)  ; LAB_004796a8
    CMP dword ptr [EBP + 0x46],0x0      ; 00479a60
        ;   Label: LAB_00479a60
    JL 0x00479b04                       ; 00479a64
        ;   XREF to: 00479b04 (CONDITIONAL_JUMP)  ; LAB_00479b04
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00479a6a
        ;   Label: LAB_00479a6a
    LEA EAX,[EBX*0x8 + 0x0]             ; 00479a70
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00479a77
    ADD EAX,EBX                         ; 00479a7d
    MOV EDX,dword ptr [EDX + 0x114]     ; 00479a7f
    SHL EAX,0x3                         ; 00479a85
    MOV ECX,dword ptr [ECX + 0x118]     ; 00479a88
    ADD EDX,EAX                         ; 00479a8e
    LEA EAX,[EBX*0x4 + 0x0]             ; 00479a90
    ADD ECX,EAX                         ; 00479a97
    MOV EAX,dword ptr [EBP + 0x46]      ; 00479a99
    MOV dword ptr [ECX],EAX             ; 00479a9c
    MOV dword ptr [EDX + 0x4],0x3       ; 00479a9e
    MOV dword ptr [EDX + 0x14],0x0      ; 00479aa5
    MOV EAX,dword ptr [EDX + 0x14]      ; 00479aac
    MOV dword ptr [EDX + 0x10],EAX      ; 00479aaf
    MOV dword ptr [EDX + 0xc],EAX       ; 00479ab2
    XOR ECX,ECX                         ; 00479ab5
    MOV dword ptr [EDX + 0x8],EAX       ; 00479ab7
    CMP ECX,dword ptr [EDX + 0x4]       ; 00479aba
        ;   Label: LAB_00479aba
    JGE 0x00479a5a                      ; 00479abd
        ;   XREF to: 00479a5a (CONDITIONAL_JUMP)  ; LAB_00479a5a
    LEA EAX,[ECX*0x4 + 0x0]             ; 00479abf
    SUB EAX,ECX                         ; 00479ac6
    SHL EAX,0x2                         ; 00479ac8
    LEA EDI,[EDX + EAX*0x1]             ; 00479acb
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xa] ; 00479ace
    MOV dword ptr [EDI + 0x18],EAX      ; 00479ad2
    FLD double ptr [0x00620013]         ; 00479ad5 | DOUBLE_00620013
    FLD float ptr [EBP + ECX*0x4 + 0x22] ; 00479adb
    FMUL ST1                            ; 00479adf
    CALL crt_math.c_round_FUN_005fe6b0  ; 00479ae1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x6e]        ; 00479ae6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00479ae9
    MOV dword ptr [EDI + 0x1c],EAX      ; 00479aec
    FMUL float ptr [EBP + ECX*0x4 + 0x16] ; 00479aef
    CALL crt_math.c_round_FUN_005fe6b0  ; 00479af3
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x6e]        ; 00479af8
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00479afb
    INC ECX                             ; 00479afe
    MOV dword ptr [EDI + 0x20],EAX      ; 00479aff
    JMP 0x00479aba                      ; 00479b02
        ;   XREF to: 00479aba (UNCONDITIONAL_JUMP)  ; LAB_00479aba
    XOR EDX,EDX                         ; 00479b04
        ;   Label: LAB_00479b04
    MOV dword ptr [EBP + 0x46],EDX      ; 00479b06
    JMP 0x00479a6a                      ; 00479b09
        ;   XREF to: 00479a6a (UNCONDITIONAL_JUMP)  ; LAB_00479a6a
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00479b0e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00479b0e
    PUSH 0x0                            ; 00479b13
    PUSH 0x0                            ; 00479b15
    PUSH 0x61ff19                       ; 00479b17 | = "Importing vertices"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00479b1c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00479b21
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479b24
    MOV EBX,0x1                         ; 00479b27
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00479b2c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH ESI                            ; 00479b31
        ;   Label: LAB_00479b31
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479b32
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479b37
    TEST EAX,EAX                        ; 00479b3a
    JL 0x00479b48                       ; 00479b3c
        ;   XREF to: 00479b48 (CONDITIONAL_JUMP)  ; LAB_00479b48
    CMP EAX,0xa                         ; 00479b3e
    JNZ 0x00479b31                      ; 00479b41
        ;   XREF to: 00479b31 (CONDITIONAL_JUMP)  ; LAB_00479b31
    DEC EBX                             ; 00479b43
    TEST EBX,EBX                        ; 00479b44
    JG 0x00479b31                       ; 00479b46
        ;   XREF to: 00479b31 (CONDITIONAL_JUMP)  ; LAB_00479b31
    XOR EBX,EBX                         ; 00479b48
        ;   Label: LAB_00479b48
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00479b4a
        ;   Label: LAB_00479b4a
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00479b50
    MOV ECX,dword ptr [EDX + 0x100]     ; 00479b56
    MOV EAX,dword ptr [EAX + 0x104]     ; 00479b5c
    IMUL EAX,ECX                        ; 00479b62
    CMP EBX,EAX                         ; 00479b65
    JL 0x00479c17                       ; 00479b67
        ;   XREF to: 00479c17 (CONDITIONAL_JUMP)  ; LAB_00479c17
    MOV EBX,dword ptr [EBP + 0x2e]      ; 00479b6d
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479b70
    INC EBX                             ; 00479b73
    TEST EBX,EBX                        ; 00479b74
        ;   Label: LAB_00479b74
    JLE 0x00479c53                      ; 00479b76
        ;   XREF to: 00479c53 (CONDITIONAL_JUMP)  ; LAB_00479c53
    PUSH ESI                            ; 00479b7c
        ;   Label: LAB_00479b7c
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479b7d
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479b82
    TEST EAX,EAX                        ; 00479b85
    JL 0x00479c53                       ; 00479b87
        ;   XREF to: 00479c53 (CONDITIONAL_JUMP)  ; LAB_00479c53
    CMP EAX,0xa                         ; 00479b8d
    JNZ 0x00479b7c                      ; 00479b90
        ;   XREF to: 00479b7c (CONDITIONAL_JUMP)  ; LAB_00479b7c
    DEC EBX                             ; 00479b92
    JMP 0x00479b74                      ; 00479b93
        ;   XREF to: 00479b74 (UNCONDITIONAL_JUMP)  ; LAB_00479b74
    LEA EAX,[EBX*0x4 + 0x0]             ; 00479b95
        ;   Label: LAB_00479b95
    SUB EAX,EBX                         ; 00479b9c
    LEA EDX,[EAX*0x4 + 0x0]             ; 00479b9e
    FLD float ptr [EBP + 0x4a]          ; 00479ba5
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00479ba8
    FLD double ptr [0x0062000b]         ; 00479bae | DOUBLE_0062000b
    FXCH                                ; 00479bb4
    FMUL ST1                            ; 00479bb6
    MOV EAX,dword ptr [EAX + 0x10c]     ; 00479bb8
    CALL crt_math.c_round_FUN_005fe6b0  ; 00479bbe
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    LEA ECX,[EAX + EDX*0x1]             ; 00479bc3
    FISTP dword ptr [EBP + 0x6e]        ; 00479bc6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00479bc9
    MOV dword ptr [ECX],EAX             ; 00479bcc
    FLD float ptr [EBP + 0x4e]          ; 00479bce
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00479bd1
    FMUL ST1                            ; 00479bd7
    MOV EAX,dword ptr [EAX + 0x10c]     ; 00479bd9
    CALL crt_math.c_round_FUN_005fe6b0  ; 00479bdf
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    LEA ECX,[EAX + EDX*0x1]             ; 00479be4
    FISTP dword ptr [EBP + 0x6e]        ; 00479be7
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00479bea
    MOV dword ptr [ECX + 0x4],EAX       ; 00479bed
    FLD float ptr [EBP + 0x52]          ; 00479bf0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00479bf3
    FMULP                               ; 00479bf9
    MOV EAX,dword ptr [EAX + 0x10c]     ; 00479bfb
    CALL crt_math.c_round_FUN_005fe6b0  ; 00479c01
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x6e]        ; 00479c06
    ADD EDX,EAX                         ; 00479c09
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00479c0b
    INC EBX                             ; 00479c0e
    MOV dword ptr [EDX + 0x8],EAX       ; 00479c0f
    JMP 0x00479b4a                      ; 00479c12
        ;   XREF to: 00479b4a (UNCONDITIONAL_JUMP)  ; LAB_00479b4a
    LEA EAX,[EBP + 0x52]                ; 00479c17
        ;   Label: LAB_00479c17
    PUSH EAX                            ; 00479c1a
    LEA EAX,[EBP + 0x4e]                ; 00479c1b
    PUSH EAX                            ; 00479c1e
    LEA EAX,[EBP + 0x4a]                ; 00479c1f
    PUSH EAX                            ; 00479c22
    PUSH 0x61ff2c                       ; 00479c23 | = "%f,%f,%f\n"
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479c28
    PUSH ESI                            ; 00479c2b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00479c2c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00479c31
    CMP EAX,0x3                         ; 00479c34
    JZ 0x00479b95                       ; 00479c37
        ;   XREF to: 00479b95 (CONDITIONAL_JUMP)  ; LAB_00479b95
    PUSH 0x0                            ; 00479c3d
    LEA EAX,[EBP + 0xfffff406]          ; 00479c3f
    PUSH EAX                            ; 00479c45
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00479c46
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00479c4b
    JMP 0x00479417                      ; 00479c4e
        ;   XREF to: 00479417 (UNCONDITIONAL_JUMP)  ; LAB_00479417
    MOV EBX,dword ptr [EBP + 0x5a]      ; 00479c53
        ;   Label: LAB_00479c53
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479c56
    INC EBX                             ; 00479c59
    TEST EBX,EBX                        ; 00479c5a
        ;   Label: LAB_00479c5a
    JLE 0x00479c73                      ; 00479c5c
        ;   XREF to: 00479c73 (CONDITIONAL_JUMP)  ; LAB_00479c73
    PUSH ESI                            ; 00479c5e
        ;   Label: LAB_00479c5e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479c5f
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479c64
    TEST EAX,EAX                        ; 00479c67
    JL 0x00479c73                       ; 00479c69
        ;   XREF to: 00479c73 (CONDITIONAL_JUMP)  ; LAB_00479c73
    CMP EAX,0xa                         ; 00479c6b
    JNZ 0x00479c5e                      ; 00479c6e
        ;   XREF to: 00479c5e (CONDITIONAL_JUMP)  ; LAB_00479c5e
    DEC EBX                             ; 00479c70
    JMP 0x00479c5a                      ; 00479c71
        ;   XREF to: 00479c5a (UNCONDITIONAL_JUMP)  ; LAB_00479c5a
    LEA EAX,[EBP + 0x76]                ; 00479c73
        ;   Label: LAB_00479c73
    PUSH EAX                            ; 00479c76
    LEA EAX,[EBP + -0x16]               ; 00479c77
    PUSH EAX                            ; 00479c7a
    PUSH 0x61ff36                       ; 00479c7b | = " %s %d\n"
    MOV EBX,dword ptr [EBP + 0x6a]      ; 00479c80
    PUSH EBX                            ; 00479c83
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00479c84
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00479c89
    CMP EAX,0x2                         ; 00479c8c
    JNZ 0x00479ed2                      ; 00479c8f
        ;   XREF to: 00479ed2 (CONDITIONAL_JUMP)  ; LAB_00479ed2
    PUSH 0x61ff3e                       ; 00479c95 | = "matProp"
    LEA EAX,[EBP + -0x16]               ; 00479c9a
    PUSH EAX                            ; 00479c9d
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 00479c9e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00479ca3
    TEST EAX,EAX                        ; 00479ca6
    JNZ 0x00479ea9                      ; 00479ca8
        ;   XREF to: 00479ea9 (CONDITIONAL_JUMP)  ; LAB_00479ea9
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00479cae
    MOV EDX,dword ptr [EDX + 0x120]     ; 00479cb4
    INC EDX                             ; 00479cba
    LEA EAX,[EDX*0x4 + 0x0]             ; 00479cbb
    SUB EAX,EDX                         ; 00479cc2
    XOR EDX,EDX                         ; 00479cc4
    MOV DL,byte ptr [EBP + 0x76]        ; 00479cc6
    CMP EDX,EAX                         ; 00479cc9
    JZ 0x00479cf0                       ; 00479ccb
        ;   XREF to: 00479cf0 (CONDITIONAL_JUMP)  ; LAB_00479cf0
    MOV ESI,0x61ff46                    ; 00479ccd | = "..\\core\\dmodel.cpp"
    MOV EDI,0x70e                       ; 00479cd2
    PUSH 0x61ff59                       ; 00479cd7 | = "Invalid matProp format!"
    MOV dword ptr [0x02f0ca48],ESI      ; 00479cdc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00479ce2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00479ce8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00479ced
    MOV EBX,0x3                         ; 00479cf0
        ;   Label: LAB_00479cf0
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479cf5
    PUSH ESI                            ; 00479cf8
        ;   Label: LAB_00479cf8
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479cf9
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479cfe
    TEST EAX,EAX                        ; 00479d01
    JL 0x00479d0f                       ; 00479d03
        ;   XREF to: 00479d0f (CONDITIONAL_JUMP)  ; LAB_00479d0f
    CMP EAX,0xa                         ; 00479d05
    JNZ 0x00479cf8                      ; 00479d08
        ;   XREF to: 00479cf8 (CONDITIONAL_JUMP)  ; LAB_00479cf8
    DEC EBX                             ; 00479d0a
    TEST EBX,EBX                        ; 00479d0b
    JG 0x00479cf8                       ; 00479d0d
        ;   XREF to: 00479cf8 (CONDITIONAL_JUMP)  ; LAB_00479cf8
    XOR EBX,EBX                         ; 00479d0f
        ;   Label: LAB_00479d0f
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00479d11
        ;   Label: LAB_00479d11
    CMP EBX,dword ptr [EAX + 0x120]     ; 00479d17
    JGE 0x00479dce                      ; 00479d1d
        ;   XREF to: 00479dce (CONDITIONAL_JUMP)  ; LAB_00479dce
    LEA EAX,[EBP + 0x5e]                ; 00479d23
    PUSH EAX                            ; 00479d26
    PUSH 0x61ff71                       ; 00479d27 | = "%f, %*f, %*f\n"
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479d2c
    XOR ECX,ECX                         ; 00479d2f
    PUSH ESI                            ; 00479d31
    MOV dword ptr [EBP + 0x5e],ECX      ; 00479d32
    MOV EDI,ESI                         ; 00479d35
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00479d37
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ESI,0x1                         ; 00479d3c
    ADD ESP,0xc                         ; 00479d41
    PUSH EDI                            ; 00479d44
        ;   Label: LAB_00479d44
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479d45
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479d4a
    TEST EAX,EAX                        ; 00479d4d
    JL 0x00479d5b                       ; 00479d4f
        ;   XREF to: 00479d5b (CONDITIONAL_JUMP)  ; LAB_00479d5b
    CMP EAX,0xa                         ; 00479d51
    JNZ 0x00479d44                      ; 00479d54
        ;   XREF to: 00479d44 (CONDITIONAL_JUMP)  ; LAB_00479d44
    DEC ESI                             ; 00479d56
    TEST ESI,ESI                        ; 00479d57
    JG 0x00479d44                       ; 00479d59
        ;   XREF to: 00479d44 (CONDITIONAL_JUMP)  ; LAB_00479d44
    MOV ESI,0x1                         ; 00479d5b
        ;   Label: LAB_00479d5b
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00479d60
    PUSH EDI                            ; 00479d63
        ;   Label: LAB_00479d63
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479d64
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479d69
    TEST EAX,EAX                        ; 00479d6c
    JL 0x00479d7a                       ; 00479d6e
        ;   XREF to: 00479d7a (CONDITIONAL_JUMP)  ; LAB_00479d7a
    CMP EAX,0xa                         ; 00479d70
    JNZ 0x00479d63                      ; 00479d73
        ;   XREF to: 00479d63 (CONDITIONAL_JUMP)  ; LAB_00479d63
    DEC ESI                             ; 00479d75
    TEST ESI,ESI                        ; 00479d76
    JG 0x00479d63                       ; 00479d78
        ;   XREF to: 00479d63 (CONDITIONAL_JUMP)  ; LAB_00479d63
    FLD float ptr [EBP + 0x5e]          ; 00479d7a
        ;   Label: LAB_00479d7a
    FADD double ptr [0x0061fff3]        ; 00479d7d | DOUBLE_0061fff3
    FMUL double ptr [0x0061fffb]        ; 00479d83 | DOUBLE_0061fffb
    FST float ptr [EBP + 0x5e]          ; 00479d89
    FLDZ                                ; 00479d8c
    FCOMPP                              ; 00479d8e
    FNSTSW AX                           ; 00479d90
    SAHF                                ; 00479d92
    JBE 0x00479d9a                      ; 00479d93
        ;   XREF to: 00479d9a (CONDITIONAL_JUMP)  ; LAB_00479d9a
    XOR EDI,EDI                         ; 00479d95
    MOV dword ptr [EBP + 0x5e],EDI      ; 00479d97
    FLD float ptr [EBP + 0x5e]          ; 00479d9a
        ;   Label: LAB_00479d9a
    FLD1                                ; 00479d9d
    FCOMPP                              ; 00479d9f
    FNSTSW AX                           ; 00479da1
    SAHF                                ; 00479da3
    JNC 0x00479dad                      ; 00479da4
        ;   XREF to: 00479dad (CONDITIONAL_JUMP)  ; LAB_00479dad
    MOV dword ptr [EBP + 0x5e],0x3f800000 ; 00479da6
    FLD float ptr [EBP + 0x5e]          ; 00479dad
        ;   Label: LAB_00479dad
    FMUL float ptr [0x00620003]         ; 00479db0 | FLOAT_00620003
    CALL crt_math.c_round_FUN_005fe6b0  ; 00479db6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0x6e]        ; 00479dbb
    MOV AL,byte ptr [EBP + 0x6e]        ; 00479dbe
    INC EBX                             ; 00479dc1
    MOV byte ptr [EBX + EBP*0x1 + 0xfffff7ad],AL ; 00479dc2
    JMP 0x00479d11                      ; 00479dc9
        ;   XREF to: 00479d11 (UNCONDITIONAL_JUMP)  ; LAB_00479d11
    PUSH 0x725                          ; 00479dce
        ;   Label: LAB_00479dce
    PUSH 0x61ff7f                       ; 00479dd3 | = "..\\core\\dmodel.cpp"
    MOV ECX,dword ptr [EAX + 0x110]     ; 00479dd8
    PUSH ECX                            ; 00479dde
    CALL shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0 ; 00479ddf
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked2_FUN_0050f1f0(int size, char * filename, int line_number)
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00479de4
    ADD ESP,0xc                         ; 00479dea
    MOV dword ptr [EDX + 0x11c],EAX     ; 00479ded
    TEST EAX,EAX                        ; 00479df3
    JNZ 0x00479e1a                      ; 00479df5
        ;   XREF to: 00479e1a (CONDITIONAL_JUMP)  ; LAB_00479e1a
    MOV ESI,0x61ff92                    ; 00479df7 | = "..\\core\\dmodel.cpp"
    MOV EDI,0x726                       ; 00479dfc
    PUSH 0x61ffa5                       ; 00479e01 | = "Out of memory for envMapOpacList"
    MOV dword ptr [0x02f0ca48],ESI      ; 00479e06 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00479e0c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00479e12
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00479e17
    MOV EDX,0x1                         ; 00479e1a
        ;   Label: LAB_00479e1a
    XOR EAX,EAX                         ; 00479e1f
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00479e21
        ;   Label: LAB_00479e21
    CMP EAX,dword ptr [ECX + 0x110]     ; 00479e27
    JGE 0x00479e67                      ; 00479e2d
        ;   XREF to: 00479e67 (CONDITIONAL_JUMP)  ; LAB_00479e67
    MOV EBX,dword ptr [ECX + 0x118]     ; 00479e2f
    MOV EBX,dword ptr [EBX + EAX*0x4]   ; 00479e35
    MOV ECX,dword ptr [ECX + 0x11c]     ; 00479e38
    MOV BL,byte ptr [EBX + EBP*0x1 + 0xfffff7ae] ; 00479e3e
    MOV byte ptr [ECX + EAX*0x1],BL     ; 00479e45
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00479e48
    MOV ECX,dword ptr [ECX + 0x11c]     ; 00479e4e
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00479e54
    AND ECX,0xff                        ; 00479e57
    CMP ECX,0x5                         ; 00479e5d
    JLE 0x00479e64                      ; 00479e60
        ;   XREF to: 00479e64 (CONDITIONAL_JUMP)  ; LAB_00479e64
    XOR EDX,EDX                         ; 00479e62
    INC EAX                             ; 00479e64
        ;   Label: LAB_00479e64
    JMP 0x00479e21                      ; 00479e65
        ;   XREF to: 00479e21 (UNCONDITIONAL_JUMP)  ; LAB_00479e21
    TEST EDX,EDX                        ; 00479e67
        ;   Label: LAB_00479e67
    JZ 0x00479c73                       ; 00479e69
        ;   XREF to: 00479c73 (CONDITIONAL_JUMP)  ; LAB_00479c73
    MOV ESI,0x61ffc6                    ; 00479e6f | = "..\\core\\dmodel.cpp"
    MOV EDX,dword ptr [ECX + 0x11c]     ; 00479e74
    MOV EDI,0x731                       ; 00479e7a
    PUSH EDX                            ; 00479e7f
    MOV dword ptr [0x0067d20c],ESI      ; 00479e80 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EDI      ; 00479e86 | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00479e8c
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    MOV EAX,dword ptr [EBP + 0x8e]      ; 00479e91
    ADD ESP,0x4                         ; 00479e97
    MOV dword ptr [EAX + 0x11c],0x0     ; 00479e9a
    JMP 0x00479c73                      ; 00479ea4
        ;   XREF to: 00479c73 (UNCONDITIONAL_JUMP)  ; LAB_00479c73
    XOR EBX,EBX                         ; 00479ea9
        ;   Label: LAB_00479ea9
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00479eab
    MOV BL,byte ptr [EBP + 0x76]        ; 00479eae
    TEST EBX,EBX                        ; 00479eb1
        ;   Label: LAB_00479eb1
    JLE 0x00479c73                      ; 00479eb3
        ;   XREF to: 00479c73 (CONDITIONAL_JUMP)  ; LAB_00479c73
    PUSH ESI                            ; 00479eb9
        ;   Label: LAB_00479eb9
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00479eba
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00479ebf
    TEST EAX,EAX                        ; 00479ec2
    JL 0x00479c73                       ; 00479ec4
        ;   XREF to: 00479c73 (CONDITIONAL_JUMP)  ; LAB_00479c73
    CMP EAX,0xa                         ; 00479eca
    JNZ 0x00479eb9                      ; 00479ecd
        ;   XREF to: 00479eb9 (CONDITIONAL_JUMP)  ; LAB_00479eb9
    DEC EBX                             ; 00479ecf
    JMP 0x00479eb1                      ; 00479ed0
        ;   XREF to: 00479eb1 (UNCONDITIONAL_JUMP)  ; LAB_00479eb1
    PUSH 0x741                          ; 00479ed2
        ;   Label: LAB_00479ed2
    PUSH 0x61ffd9                       ; 00479ed7 | = "..\\core\\dmodel.cpp"
    PUSH EBX                            ; 00479edc
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00479edd
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00479ee2
    MOV ECX,dword ptr [EBP + 0x8e]      ; 00479ee5
    PUSH ECX                            ; 00479eeb
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 00479eec
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
    ADD ESP,0x4                         ; 00479ef1
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00479ef4
    PUSH EBX                            ; 00479efa
    CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 ; 00479efb
        ;   XREF to: 0047bf40 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00479f00
    PUSH 0x0                            ; 00479f03
    LEA EAX,[EBP + 0xfffff406]          ; 00479f05
    PUSH EAX                            ; 00479f0b
    MOV dword ptr [EBX + 0x569c],0x0    ; 00479f0c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 00479f16
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00479f1b
    LEA ESP,[EBP + 0x7a]                ; 00479f1e
    POP EBP                             ; 00479f21
    POP EDI                             ; 00479f22
    POP ESI                             ; 00479f23
    POP EBX                             ; 00479f24
    RET                                 ; 00479f25

