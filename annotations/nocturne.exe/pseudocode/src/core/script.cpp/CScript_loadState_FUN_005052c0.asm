; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_loadState_FUN_005052c0(CScript *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004a4170 at 004a48f3
;
; Referenced Globals:
;   TerminatedCString s_d_0058fcc6
;   TerminatedCString s_core_script_cpp_0058fcca
;   TerminatedCString s_CScript_loadState_file_v_0058fcdd
;   TerminatedCString s_d_0058fd12
;   TerminatedCString s_d_0058fd16
;   TerminatedCString s_d_0058fd1a
;   TerminatedCString s_g_0058fd1e
;   TerminatedCString s_d_0058fd22
;   TerminatedCString s_anon_0058fd26
;   TerminatedCString s_anon_0058fd2d
;   TerminatedCString s_g_0058fd30
;   TerminatedCString s_g_0058fd34
;   TerminatedCString s_d_0058fd38
;   TerminatedCString s_d_0058fd3c
;   TerminatedCString s_d_0058fd40
;   ... and 10 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_script.cpp_CScript_computeChecksum_FUN_00505820
;   core_script.cpp_readActorReference_FUN_00505200
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;   shape_edittool.cpp_FUN_0046fb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005052c0
        ;   Label: core_script.cpp_CScript_loadState_FUN_005052c0
    PUSH ESI                            ; 005052c1
    PUSH EDI                            ; 005052c2
    PUSH EBP                            ; 005052c3
    SUB ESP,0x108                       ; 005052c4
    MOV EBP,dword ptr [ESP + 0x11c]     ; 005052ca
    MOV EDI,dword ptr [ESP + 0x120]     ; 005052d1
    PUSH EDI                            ; 005052d8
    PUSH 0xff                           ; 005052d9
    LEA EAX,[ESP + 0x8]                 ; 005052de
    PUSH EAX                            ; 005052e2
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005052e3
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005052e8
    LEA EAX,[ESP + 0x100]               ; 005052eb
    PUSH EAX                            ; 005052f2
    PUSH 0x58fcc6                       ; 005052f3 | = "%d\n"
    PUSH EDI                            ; 005052f8
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005052f9
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005052fe
    CMP dword ptr [ESP + 0x100],0x6     ; 00505301
    JG 0x00505565                       ; 00505309
        ;   XREF to: 00505565 (CONDITIONAL_JUMP)  ; LAB_00505565
    PUSH EDI                            ; 0050530f
        ;   Label: LAB_0050530f
    PUSH 0xff                           ; 00505310
    LEA EAX,[ESP + 0x8]                 ; 00505315
    PUSH EAX                            ; 00505319
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050531a
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    MOV EAX,[0x005b9354]                ; 0050531f | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 00505324
    ADD EAX,0x228                       ; 00505327
    PUSH EAX                            ; 0050532c | g_CGame_01c775ec.letterbox_mode
    PUSH 0x58fd12                       ; 0050532d | = "%d\n"
    PUSH EDI                            ; 00505332
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00505333
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00505338
    CMP dword ptr [ESP + 0x100],0x2     ; 0050533b
    JL 0x00505371                       ; 00505343
        ;   XREF to: 00505371 (CONDITIONAL_JUMP)  ; LAB_00505371
    PUSH EDI                            ; 00505345
    PUSH 0xff                           ; 00505346
    LEA EAX,[ESP + 0x8]                 ; 0050534b
    PUSH EAX                            ; 0050534f
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00505350
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    MOV EAX,[0x005b9354]                ; 00505355 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 0050535a
    ADD EAX,0x22c                       ; 0050535d
    PUSH EAX                            ; 00505362 | g_CGame_01c775ec.allow_damage_flag
    PUSH 0x58fd16                       ; 00505363 | = "%d\n"
    PUSH EDI                            ; 00505368
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00505369
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0050536e
    CMP dword ptr [ESP + 0x100],0x3     ; 00505371
        ;   Label: LAB_00505371
    JL 0x005053a7                       ; 00505379
        ;   XREF to: 005053a7 (CONDITIONAL_JUMP)  ; LAB_005053a7
    PUSH EDI                            ; 0050537b
    PUSH 0xff                           ; 0050537c
    LEA EAX,[ESP + 0x8]                 ; 00505381
    PUSH EAX                            ; 00505385
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00505386
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    MOV EAX,[0x005b9354]                ; 0050538b | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 00505390
    ADD EAX,0x230                       ; 00505393
    PUSH EAX                            ; 00505398 | g_CGame_01c775ec.allow_enemy_attack_flag
    PUSH 0x58fd1a                       ; 00505399 | = "%d\n"
    PUSH EDI                            ; 0050539e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050539f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005053a4
    PUSH EDI                            ; 005053a7
        ;   Label: LAB_005053a7
    PUSH 0xff                           ; 005053a8
    LEA EAX,[ESP + 0x8]                 ; 005053ad
    PUSH EAX                            ; 005053b1
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005053b2
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005053b7
    PUSH 0x1e56c20                      ; 005053ba | DAT_01e56c20
    PUSH 0x58fd1e                       ; 005053bf | = "%g\n"
    PUSH EDI                            ; 005053c4
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005053c5
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005053ca
    PUSH EDI                            ; 005053cd
    PUSH 0xff                           ; 005053ce
    LEA EAX,[ESP + 0x8]                 ; 005053d3
    PUSH EAX                            ; 005053d7
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005053d8
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005053dd
    LEA EAX,[EBP + 0x40]                ; 005053e0
    PUSH EAX                            ; 005053e3
    PUSH 0x58fd22                       ; 005053e4 | = "%d\n"
    PUSH EDI                            ; 005053e9
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005053ea
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005053ef
    PUSH EDI                            ; 005053f2
    PUSH 0xff                           ; 005053f3
    LEA EAX,[ESP + 0x8]                 ; 005053f8
    PUSH EAX                            ; 005053fc
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005053fd
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00505402
    LEA EBX,[EBP + 0x4c]                ; 00505405
    PUSH EBX                            ; 00505408
    PUSH 0x58fd26                       ; 00505409 | = "\"%[^\"]"
    PUSH EDI                            ; 0050540e
    MOV byte ptr [EBP + 0x4c],0x0       ; 0050540f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00505413
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00505418
    PUSH EBX                            ; 0050541b
    PUSH 0x58fd2d                       ; 0050541c | = "\"\n"
    PUSH EDI                            ; 00505421
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00505422
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00505427
    PUSH EDI                            ; 0050542a
    PUSH 0xff                           ; 0050542b
    LEA EAX,[ESP + 0x8]                 ; 00505430
    PUSH EAX                            ; 00505434
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00505435
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0050543a
    LEA EAX,[EBP + 0x44]                ; 0050543d
    PUSH EAX                            ; 00505440
    PUSH 0x58fd30                       ; 00505441 | = "%g\n"
    PUSH EDI                            ; 00505446
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00505447
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0050544c
    PUSH EDI                            ; 0050544f
    PUSH 0xff                           ; 00505450
    LEA EAX,[ESP + 0x8]                 ; 00505455
    PUSH EAX                            ; 00505459
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050545a
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0050545f
    LEA EAX,[EBP + 0x48]                ; 00505462
    PUSH EAX                            ; 00505465
    PUSH 0x58fd34                       ; 00505466 | = "%g\n"
    PUSH EDI                            ; 0050546b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050546c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00505471
    PUSH EDI                            ; 00505474
    PUSH 0xff                           ; 00505475
    LEA EAX,[ESP + 0x8]                 ; 0050547a
    PUSH EAX                            ; 0050547e
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050547f
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00505484
    LEA EAX,[EBP + 0x4]                 ; 00505487
    PUSH EAX                            ; 0050548a
    PUSH EDI                            ; 0050548b
    CALL core_script.cpp_readActorReference_FUN_00505200 ; 0050548c
        ;   XREF to: 00505200 (UNCONDITIONAL_CALL)  ; void core_script.cpp_readActorReference_FUN_00505200(_FILE * file_handle, CDemonActor * actor_out)
    ADD ESP,0x8                         ; 00505491
    PUSH EDI                            ; 00505494
    PUSH 0xff                           ; 00505495
    LEA EAX,[ESP + 0x8]                 ; 0050549a
    PUSH EAX                            ; 0050549e
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050549f
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005054a4
    LEA EAX,[EBP + 0xc]                 ; 005054a7
    PUSH EAX                            ; 005054aa
    PUSH EDI                            ; 005054ab
    CALL core_script.cpp_readActorReference_FUN_00505200 ; 005054ac
        ;   XREF to: 00505200 (UNCONDITIONAL_CALL)  ; void core_script.cpp_readActorReference_FUN_00505200(_FILE * file_handle, CDemonActor * actor_out)
    ADD ESP,0x8                         ; 005054b1
    CMP dword ptr [ESP + 0x100],0x5     ; 005054b4
    JL 0x005054e3                       ; 005054bc
        ;   XREF to: 005054e3 (CONDITIONAL_JUMP)  ; LAB_005054e3
    PUSH EDI                            ; 005054be
    PUSH 0xff                           ; 005054bf
    LEA EAX,[ESP + 0x8]                 ; 005054c4
    PUSH EAX                            ; 005054c8
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005054c9
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005054ce
    LEA EAX,[EBP + 0x14]                ; 005054d1
    PUSH EAX                            ; 005054d4
    PUSH 0x58fd38                       ; 005054d5 | = "%d\n"
    PUSH EDI                            ; 005054da
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005054db
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005054e0
    CMP dword ptr [ESP + 0x100],0x4     ; 005054e3
        ;   Label: LAB_005054e3
    JL 0x00505550                       ; 005054eb
        ;   XREF to: 00505550 (CONDITIONAL_JUMP)  ; LAB_00505550
    PUSH EDI                            ; 005054ed
    PUSH 0xff                           ; 005054ee
    LEA EAX,[ESP + 0x8]                 ; 005054f3
    PUSH EAX                            ; 005054f7
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005054f8
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005054fd
    LEA EAX,[EBP + 0x454]               ; 00505500
    PUSH EAX                            ; 00505506
    PUSH 0x58fd3c                       ; 00505507 | = "%d\n"
    PUSH EDI                            ; 0050550c
    XOR ESI,ESI                         ; 0050550d
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050550f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EBX,dword ptr [EBP + 0x454]     ; 00505514
    ADD ESP,0xc                         ; 0050551a
    TEST EBX,EBX                        ; 0050551d
    JLE 0x00505550                      ; 0050551f
        ;   XREF to: 00505550 (CONDITIONAL_JUMP)  ; LAB_00505550
    LEA EBX,[EBP + 0x458]               ; 00505521
    PUSH EBX                            ; 00505527
        ;   Label: LAB_00505527
    PUSH 0x58fd40                       ; 00505528 | = "%d\n"
    PUSH EDI                            ; 0050552d
    INC ESI                             ; 0050552e
    ADD EBX,0x4                         ; 0050552f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00505532
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x454]     ; 00505537
    ADD ESP,0xc                         ; 0050553d
    CMP ESI,EAX                         ; 00505540
    JL 0x00505527                       ; 00505542
        ;   XREF to: 00505527 (CONDITIONAL_JUMP)  ; LAB_00505527
    LEA EAX,[EAX]                       ; 00505544
    LEA EDX,[EDX]                       ; 0050554a
    CMP dword ptr [ESP + 0x100],0x6     ; 00505550
        ;   Label: LAB_00505550
    JGE 0x0050558d                      ; 00505558
        ;   XREF to: 0050558d (CONDITIONAL_JUMP)  ; LAB_0050558d
    ADD ESP,0x108                       ; 0050555a
        ;   Label: LAB_0050555a
    POP EBP                             ; 00505560
    POP EDI                             ; 00505561
    POP ESI                             ; 00505562
    POP EBX                             ; 00505563
    RET                                 ; 00505564
    MOV ECX,0x58fcca                    ; 00505565 | = "..\\core\\script.cpp"
        ;   Label: LAB_00505565
    MOV EBX,0xf56                       ; 0050556a
    PUSH 0x58fcdd                       ; 0050556f | = "CScript::loadState - file version is ..."
    MOV dword ptr [0x01cc4800],ECX      ; 00505574 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0050557a | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00505580
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00505585
    JMP 0x0050530f                      ; 00505588
        ;   XREF to: 0050530f (UNCONDITIONAL_JUMP)  ; LAB_0050530f
    PUSH EDI                            ; 0050558d
        ;   Label: LAB_0050558d
    PUSH 0xff                           ; 0050558e
    LEA EAX,[ESP + 0x8]                 ; 00505593
    PUSH EAX                            ; 00505597
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00505598
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0050559d
    LEA EAX,[ESP + 0x104]               ; 005055a0
    PUSH EAX                            ; 005055a7
    PUSH 0x58fd44                       ; 005055a8 | = "%u\n"
    PUSH EDI                            ; 005055ad
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005055ae
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005055b3
    PUSH EBP                            ; 005055b6
    CALL core_script.cpp_CScript_computeChecksum_FUN_00505820 ; 005055b7
        ;   XREF to: 00505820 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_computeChecksum_FUN_00505820(CScript * this_ptr)
    ADD ESP,0x4                         ; 005055bc
    CMP EAX,dword ptr [ESP + 0x104]     ; 005055bf
    JZ 0x0050555a                       ; 005055c6
        ;   XREF to: 0050555a (CONDITIONAL_JUMP)  ; LAB_0050555a
    PUSH 0x58fd48                       ; 005055c8 | = "The script you were using when this g..."
    MOV EBX,dword ptr [0x005b6d50]      ; 005055cd | g_CEditorTools_PTR_005b6d50
    PUSH EBX                            ; 005055d3
    CALL shape_edittool.cpp_FUN_0046fb40 ; 005055d4
        ;   XREF to: 0046fb40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fb40()
    ADD ESP,0x8                         ; 005055d9
    ADD ESP,0x108                       ; 005055dc
    POP EBP                             ; 005055e2
    POP EDI                             ; 005055e3
    POP ESI                             ; 005055e4
    POP EBX                             ; 005055e5
    RET                                 ; 005055e6

