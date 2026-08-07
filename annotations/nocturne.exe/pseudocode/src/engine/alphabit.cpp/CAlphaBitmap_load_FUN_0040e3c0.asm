; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(CAlphaBitmap *this_ptr,char *filename,int width,int height)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; Local Variables:
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[13]:
;   core_game.cpp_CGame_displayActStats_FUN_004a6680 at 004a66b1
;   core_game.cpp_CGame_finishAct_FUN_004a6a10 at 004a6b3c
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a6eeb
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_0049d960 at 0049d9c2
;   core_inv.cpp_loadAssets_FUN_004befa0 at 004befe6
;   core_level.cpp_CLevelLoader_show_FUN_004c5640 at 004c5730
;   core_main.c_FUN_004c85f0 at 004c8c3d
;   core_main.c_finalizeGameSystems_FUN_004c90e0 at 004c9158
;   core_main.c_showPromoScreen_FUN_004c8eb0 at 004c8f09
;   core_menu.cpp_FUN_004d23d0 at 004d240a
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_engine_alphabit_cpp_00578099
;   TerminatedCString s_CAlphaBitmap_load_Out_of_005780b0
;   TerminatedCString s_engine_alphabit_cpp_005780d3
;   TerminatedCString s_CAlphaBitmap_load_Out_of_005780ea
;   TerminatedCString s_engine_alphabit_cpp_0057810d
;   TerminatedCString s_CAlphaBitmap_load_Out_of_00578124
;   TerminatedCString s_s_raw_00578147
;   TerminatedCString s_rb_0057814e
;   TerminatedCString s_art_00578151
;   TerminatedCString s_engine_alphabit_cpp_00578155
;   TerminatedCString s_CAlphaBitmap_load_Can_t_0057816c
;   TerminatedCString s_s_act_0057818f
;   TerminatedCString s_rb_00578196
;   TerminatedCString s_art_00578199
;   TerminatedCString s_engine_alphabit_cpp_0057819d
;   ... and 10 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgetc_FUN_00564570
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
;   engine_dosio.cpp_getFile_FUN_00456a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e3c0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
    PUSH ESI                            ; 0040e3c1
    PUSH EDI                            ; 0040e3c2
    PUSH EBP                            ; 0040e3c3
    SUB ESP,0x104                       ; 0040e3c4
    MOV EBX,dword ptr [ESP + 0x118]     ; 0040e3ca
    PUSH EBX                            ; 0040e3d1
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360 ; 0040e3d2
        ;   XREF to: 0040e360 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0040e3d7
    MOV EAX,dword ptr [ESP + 0x120]     ; 0040e3da
    MOV dword ptr [EBX + 0xc],EAX       ; 0040e3e1
    MOV EAX,dword ptr [ESP + 0x124]     ; 0040e3e4
    MOV EDX,dword ptr [ESP + 0x124]     ; 0040e3eb
    MOV dword ptr [EBX + 0x10],EAX      ; 0040e3f2
    MOV EAX,dword ptr [ESP + 0x120]     ; 0040e3f5
    IMUL EAX,EDX                        ; 0040e3fc
    PUSH EAX                            ; 0040e3ff
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0040e400
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0040e405
    MOV dword ptr [EBX],EAX             ; 0040e408
    TEST EAX,EAX                        ; 0040e40a
    JZ 0x0040e65b                       ; 0040e40c
        ;   XREF to: 0040e65b (CONDITIONAL_JUMP)  ; LAB_0040e65b
    MOV EAX,dword ptr [ESP + 0x120]     ; 0040e412
        ;   Label: LAB_0040e412
    IMUL EAX,dword ptr [ESP + 0x124]    ; 0040e419
    PUSH EAX                            ; 0040e421
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0040e422
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0040e427
    MOV dword ptr [EBX + 0x4],EAX       ; 0040e42a
    TEST EAX,EAX                        ; 0040e42d
    JNZ 0x0040e454                      ; 0040e42f
        ;   XREF to: 0040e454 (CONDITIONAL_JUMP)  ; LAB_0040e454
    MOV EDX,0x5780d3                    ; 0040e431 | = "..\\engine\\alphabit.cpp"
    MOV ECX,0x56                        ; 0040e436
    PUSH 0x5780ea                       ; 0040e43b | = "CAlphaBitmap::load - Out of memory"
    MOV dword ptr [0x01cc4800],EDX      ; 0040e440 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0040e446 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040e44c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0040e451
    PUSH 0x400                          ; 0040e454
        ;   Label: LAB_0040e454
    CALL crt_memory.c_malloc_FUN_005635b0 ; 0040e459
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    ADD ESP,0x4                         ; 0040e45e
    MOV dword ptr [EBX + 0x8],EAX       ; 0040e461
    TEST EAX,EAX                        ; 0040e464
    JNZ 0x0040e48b                      ; 0040e466
        ;   XREF to: 0040e48b (CONDITIONAL_JUMP)  ; LAB_0040e48b
    MOV EDI,0x57810d                    ; 0040e468 | = "..\\engine\\alphabit.cpp"
    MOV EBP,0x59                        ; 0040e46d
    PUSH 0x578124                       ; 0040e472 | = "CAlphaBitmap::load - Out of memory"
    MOV dword ptr [0x01cc4800],EDI      ; 0040e477 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBP      ; 0040e47d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040e483
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0040e488
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0040e48b
        ;   Label: LAB_0040e48b
    PUSH EAX                            ; 0040e492
    PUSH 0x578147                       ; 0040e493 | = "%s.raw"
    LEA EAX,[ESP + 0x8]                 ; 0040e498
    PUSH EAX                            ; 0040e49c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0040e49d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040e4a2
    PUSH 0x57814e                       ; 0040e4a5 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 0040e4aa
    PUSH EAX                            ; 0040e4ae
    PUSH 0x578151                       ; 0040e4af | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0040e4b4
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040e4b9
    MOV dword ptr [ESP + 0x100],EAX     ; 0040e4bc
    TEST EAX,EAX                        ; 0040e4c3
    JNZ 0x0040e4ed                      ; 0040e4c5
        ;   XREF to: 0040e4ed (CONDITIONAL_JUMP)  ; LAB_0040e4ed
    MOV EAX,ESP                         ; 0040e4c7
    PUSH EAX                            ; 0040e4c9
    MOV EDX,0x578155                    ; 0040e4ca | = "..\\engine\\alphabit.cpp"
    MOV ECX,0x5f                        ; 0040e4cf
    PUSH 0x57816c                       ; 0040e4d4 | = "CAlphaBitmap::load - Can't open %s"
    MOV dword ptr [0x01cc4800],EDX      ; 0040e4d9 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0040e4df | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040e4e5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 0040e4ea
    MOV ESI,dword ptr [ESP + 0x100]     ; 0040e4ed
        ;   Label: LAB_0040e4ed
    PUSH ESI                            ; 0040e4f4
    MOV EDI,dword ptr [ESP + 0x128]     ; 0040e4f5
    PUSH EDI                            ; 0040e4fc
    MOV EBP,dword ptr [ESP + 0x128]     ; 0040e4fd
    PUSH EBP                            ; 0040e504
    MOV EAX,dword ptr [EBX]             ; 0040e505
    PUSH EAX                            ; 0040e507
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0040e508
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0040e50d
    PUSH ESI                            ; 0040e510
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0040e511
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0040e516
    MOV ECX,dword ptr [ESP + 0x11c]     ; 0040e519
    PUSH ECX                            ; 0040e520
    PUSH 0x57818f                       ; 0040e521 | = "%s.act"
    LEA EAX,[ESP + 0x8]                 ; 0040e526
    PUSH EAX                            ; 0040e52a
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0040e52b
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040e530
    PUSH 0x578196                       ; 0040e533 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 0040e538
    PUSH EAX                            ; 0040e53c
    PUSH 0x578199                       ; 0040e53d | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0040e542
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0040e547
    MOV dword ptr [ESP + 0x100],EAX     ; 0040e54a
    TEST EAX,EAX                        ; 0040e551
    JZ 0x0040e683                       ; 0040e553
        ;   XREF to: 0040e683 (CONDITIONAL_JUMP)  ; LAB_0040e683
    XOR ESI,ESI                         ; 0040e559
        ;   Label: LAB_0040e559
    MOV EBP,dword ptr [ESP + 0x100]     ; 0040e55b
        ;   Label: LAB_0040e55b
    PUSH EBP                            ; 0040e562
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040e563
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 0040e568
    MOV EBP,EAX                         ; 0040e56b
    MOV EAX,dword ptr [ESP + 0x100]     ; 0040e56d
    PUSH EAX                            ; 0040e574
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040e575
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    ADD ESP,0x4                         ; 0040e57a
    MOV EDX,dword ptr [ESP + 0x100]     ; 0040e57d
    PUSH EDX                            ; 0040e584
    MOV EDI,EAX                         ; 0040e585
    CALL crt_stdio.c_fgetc_FUN_00564570 ; 0040e587
        ;   XREF to: 00564570 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_00564570(_FILE * file)
    MOV ECX,dword ptr [0x005b7624]      ; 0040e58c | g_BitsPerPixel
    ADD ESP,0x4                         ; 0040e592
    CMP ECX,0x20                        ; 0040e595
    JNZ 0x0040e6ae                      ; 0040e598
        ;   XREF to: 0040e6ae (CONDITIONAL_JUMP)  ; LAB_0040e6ae
    MOV CL,byte ptr [0x01c00624]        ; 0040e59e | g_RedBitPosition
    SHL EBP,CL                          ; 0040e5a4
    MOV CL,byte ptr [0x01c00630]        ; 0040e5a6 | g_GreenBitPosition
    SHL EDI,CL                          ; 0040e5ac
    MOV CL,byte ptr [0x01c0063c]        ; 0040e5ae | g_BlueBitPosition
    OR EDI,EBP                          ; 0040e5b4
    SHL EAX,CL                          ; 0040e5b6
    MOV ECX,EDI                         ; 0040e5b8
    OR ECX,EAX                          ; 0040e5ba
        ;   Label: LAB_0040e5ba
    ADD ESI,0x4                         ; 0040e5bc
    MOV EAX,dword ptr [EBX + 0x8]       ; 0040e5bf
    MOV dword ptr [ESI + EAX*0x1 + -0x4],ECX ; 0040e5c2
    CMP ESI,0x400                       ; 0040e5c6
    JNZ 0x0040e55b                      ; 0040e5cc
        ;   XREF to: 0040e55b (CONDITIONAL_JUMP)  ; LAB_0040e55b
    MOV ESI,dword ptr [ESP + 0x100]     ; 0040e5ce
    PUSH ESI                            ; 0040e5d5
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0040e5d6
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0040e5db
    MOV EDI,dword ptr [ESP + 0x11c]     ; 0040e5de
    PUSH EDI                            ; 0040e5e5
    PUSH 0x5781d7                       ; 0040e5e6 | = "%s.opa"
    LEA EAX,[ESP + 0x8]                 ; 0040e5eb
    PUSH EAX                            ; 0040e5ef
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0040e5f0
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040e5f5
    PUSH 0x5781de                       ; 0040e5f8 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 0040e5fd
    PUSH EAX                            ; 0040e601
    PUSH 0x5781e1                       ; 0040e602 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0040e607
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    MOV EDI,EAX                         ; 0040e60c
    ADD ESP,0xc                         ; 0040e60e
    TEST EAX,EAX                        ; 0040e611
    JNZ 0x0040e6bd                      ; 0040e613
        ;   XREF to: 0040e6bd (CONDITIONAL_JUMP)  ; LAB_0040e6bd
    MOV EDI,dword ptr [ESP + 0x120]     ; 0040e619
    IMUL EDI,dword ptr [ESP + 0x124]    ; 0040e620
    TEST EDI,EDI                        ; 0040e628
    JLE 0x0040e650                      ; 0040e62a
        ;   XREF to: 0040e650 (CONDITIONAL_JUMP)  ; LAB_0040e650
    MOV ECX,dword ptr [EBX]             ; 0040e62c
        ;   Label: LAB_0040e62c
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0040e62e
    AND ECX,0xff                        ; 0040e631
    MOV ESI,dword ptr [EBX + 0x8]       ; 0040e637
    CMP dword ptr [ESI + ECX*0x4],0x0   ; 0040e63a
    JNZ 0x0040e6ee                      ; 0040e63e
        ;   XREF to: 0040e6ee (CONDITIONAL_JUMP)  ; LAB_0040e6ee
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040e644
    MOV byte ptr [ECX + EAX*0x1],0x0    ; 0040e647
    INC EAX                             ; 0040e64b
    CMP EAX,EDI                         ; 0040e64c
    JL 0x0040e62c                       ; 0040e64e
        ;   XREF to: 0040e62c (CONDITIONAL_JUMP)  ; LAB_0040e62c
    ADD ESP,0x104                       ; 0040e650
        ;   Label: LAB_0040e650
    POP EBP                             ; 0040e656
    POP EDI                             ; 0040e657
    POP ESI                             ; 0040e658
    POP EBX                             ; 0040e659
    RET                                 ; 0040e65a
    MOV ESI,0x578099                    ; 0040e65b | = "..\\engine\\alphabit.cpp"
        ;   Label: LAB_0040e65b
    MOV EDI,0x53                        ; 0040e660
    PUSH 0x5780b0                       ; 0040e665 | = "CAlphaBitmap::load - Out of memory"
    MOV dword ptr [0x01cc4800],ESI      ; 0040e66a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 0040e670 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040e676
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0040e67b
    JMP 0x0040e412                      ; 0040e67e
        ;   XREF to: 0040e412 (UNCONDITIONAL_JUMP)  ; LAB_0040e412
    MOV EAX,ESP                         ; 0040e683
        ;   Label: LAB_0040e683
    PUSH EAX                            ; 0040e685
    MOV ESI,0x57819d                    ; 0040e686 | = "..\\engine\\alphabit.cpp"
    MOV EDI,0x65                        ; 0040e68b
    PUSH 0x5781b4                       ; 0040e690 | = "CAlphaBitmap::load - Can't open %s"
    MOV dword ptr [0x01cc4800],ESI      ; 0040e695 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 0040e69b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0040e6a1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 0040e6a6
    JMP 0x0040e559                      ; 0040e6a9
        ;   XREF to: 0040e559 (UNCONDITIONAL_JUMP)  ; LAB_0040e559
    MOV ECX,EBP                         ; 0040e6ae
        ;   Label: LAB_0040e6ae
    SHL EDI,0x8                         ; 0040e6b0
    SHL ECX,0x10                        ; 0040e6b3
    OR ECX,EDI                          ; 0040e6b6
    JMP 0x0040e5ba                      ; 0040e6b8
        ;   XREF to: 0040e5ba (UNCONDITIONAL_JUMP)  ; LAB_0040e5ba
    PUSH EAX                            ; 0040e6bd
        ;   Label: LAB_0040e6bd
    MOV EAX,dword ptr [ESP + 0x128]     ; 0040e6be
    PUSH EAX                            ; 0040e6c5
    MOV EDX,dword ptr [ESP + 0x128]     ; 0040e6c6
    PUSH EDX                            ; 0040e6cd
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040e6ce
    PUSH ECX                            ; 0040e6d1
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0040e6d2
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0040e6d7
    PUSH EDI                            ; 0040e6da
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0040e6db
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0040e6e0
    ADD ESP,0x104                       ; 0040e6e3
    POP EBP                             ; 0040e6e9
    POP EDI                             ; 0040e6ea
    POP ESI                             ; 0040e6eb
    POP EBX                             ; 0040e6ec
    RET                                 ; 0040e6ed
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040e6ee
        ;   Label: LAB_0040e6ee
    MOV byte ptr [ECX + EAX*0x1],0xff   ; 0040e6f1
    INC EAX                             ; 0040e6f5
    CMP EAX,EDI                         ; 0040e6f6
    JL 0x0040e62c                       ; 0040e6f8
        ;   XREF to: 0040e62c (CONDITIONAL_JUMP)  ; LAB_0040e62c
    ADD ESP,0x104                       ; 0040e6fe
    POP EBP                             ; 0040e704
    POP EDI                             ; 0040e705
    POP ESI                             ; 0040e706
    POP EBX                             ; 0040e707
    RET                                 ; 0040e708

