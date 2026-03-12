; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0(CTextureList *this_ptr)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; Local Variables:
; _WIN32_FIND_DATAA Stack[-0x1e0]:320  _Stack_1e0
; char[80]         Stack[-0x78]:80  local_78
; int              Stack[-0x28]:4  local_28
; HANDLE           Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; char[16] *       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_art_raw_00654ff3
;   TerminatedCString s_core_texlist_cpp_00654ffd
;   TerminatedCString s_Unable_to_build_list_of__00655011
;   TerminatedCString s_Please_wait_building_tex_00655036
;   TerminatedCString s_s_4d_s_0065505c
;   TerminatedCString s_core_texlist_cpp_00655065
;   TerminatedCString s_Too_many_editable_textur_00655079
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_io.c__findclose_FUN_00602380
;   crt_io.c__findfirst_FUN_006021f0
;   crt_io.c__findnext_FUN_00602300
;   crt_string.c__strcmp_FUN_005fef20
;   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
;   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dc2a0
        ;   Label: core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0
    PUSH ESI                            ; 005dc2a1
    PUSH EDI                            ; 005dc2a2
    PUSH EBP                            ; 005dc2a3
    SUB ESP,0x1d0                       ; 005dc2a4
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 005dc2aa
    MOV EDX,dword ptr [EAX + 0x6d64]    ; 005dc2b1
    TEST EDX,EDX                        ; 005dc2b7
    JZ 0x005dc2c6                       ; 005dc2b9
        ;   XREF to: 005dc2c6 (CONDITIONAL_JUMP)  ; LAB_005dc2c6
    ADD ESP,0x1d0                       ; 005dc2bb
        ;   Label: LAB_005dc2bb
    POP EBP                             ; 005dc2c1
    POP EDI                             ; 005dc2c2
    POP ESI                             ; 005dc2c3
    POP EBX                             ; 005dc2c4
    RET                                 ; 005dc2c5
    MOV dword ptr [EAX + 0x1a5e8],EDX   ; 005dc2c6
        ;   Label: LAB_005dc2c6
    MOV EAX,ESP                         ; 005dc2cc
    PUSH EAX                            ; 005dc2ce
    PUSH 0x654ff3                       ; 005dc2cf | = "art\\*.raw"
    CALL crt_io.c__findfirst_FUN_006021f0 ; 005dc2d4
        ;   XREF to: 006021f0 (UNCONDITIONAL_CALL)  ; HANDLE crt_io.c__findfirst_FUN_006021f0(char * filespec, LPWIN32_FIND_DATAA find_data)
    ADD ESP,0x8                         ; 005dc2d9
    MOV dword ptr [ESP + 0x1bc],EAX     ; 005dc2dc
    CMP EAX,-0x1                        ; 005dc2e3
    JZ 0x005dc4d6                       ; 005dc2e6
        ;   XREF to: 005dc4d6 (CONDITIONAL_JUMP)  ; LAB_005dc4d6
    PUSH 0x655036                       ; 005dc2ec | = "Please wait, building texture list..."
        ;   Label: LAB_005dc2ec
    MOV ESI,dword ptr [0x00678a60]      ; 005dc2f1 | g_CEditorToolsPtr
    PUSH ESI                            ; 005dc2f7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 ; 005dc2f8
        ;   XREF to: 0049e940 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools * this_ptr, char * dialog_text)
    ADD ESP,0x8                         ; 005dc2fd
    MOV EBP,dword ptr [ESP + 0x1e4]     ; 005dc300
    ADD EBP,0x6d68                      ; 005dc307
    LEA ESI,[ESP + 0x14]                ; 005dc30d
        ;   Label: LAB_005dc30d
    LEA EDI,[ESP + 0x118]               ; 005dc311
    PUSH EDI                            ; 005dc318
    MOV AL,byte ptr [ESI]               ; 005dc319
        ;   Label: LAB_005dc319
    MOV byte ptr [EDI],AL               ; 005dc31b
    CMP AL,0x0                          ; 005dc31d
    JZ 0x005dc331                       ; 005dc31f
        ;   XREF to: 005dc331 (CONDITIONAL_JUMP)  ; LAB_005dc331
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc321
    ADD ESI,0x2                         ; 005dc324
    MOV byte ptr [EDI + 0x1],AL         ; 005dc327
    ADD EDI,0x2                         ; 005dc32a
    CMP AL,0x0                          ; 005dc32d
    JNZ 0x005dc319                      ; 005dc32f
        ;   XREF to: 005dc319 (CONDITIONAL_JUMP)  ; LAB_005dc319
    POP EDI                             ; 005dc331
        ;   Label: LAB_005dc331
    MOV EDI,dword ptr [ESP + 0x10]      ; 005dc332
    CMP EDI,0x1000                      ; 005dc336
    JNZ 0x005dc4fe                      ; 005dc33c
        ;   XREF to: 005dc4fe (CONDITIONAL_JUMP)  ; LAB_005dc4fe
    MOV EDI,dword ptr [ESP + 0x1e4]     ; 005dc342
        ;   Label: LAB_005dc342
    MOV EDI,dword ptr [EDI + 0x6d64]    ; 005dc349
    SHL EDI,0x4                         ; 005dc34f
    LEA ESI,[ESP + 0x118]               ; 005dc352
    ADD EDI,EBP                         ; 005dc359
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 005dc35b
    PUSH EDI                            ; 005dc362
    MOV AL,byte ptr [ESI]               ; 005dc363
        ;   Label: LAB_005dc363
    MOV byte ptr [EDI],AL               ; 005dc365
    CMP AL,0x0                          ; 005dc367
    JZ 0x005dc37b                       ; 005dc369
        ;   XREF to: 005dc37b (CONDITIONAL_JUMP)  ; LAB_005dc37b
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc36b
    ADD ESI,0x2                         ; 005dc36e
    MOV byte ptr [EDI + 0x1],AL         ; 005dc371
    ADD EDI,0x2                         ; 005dc374
    CMP AL,0x0                          ; 005dc377
    JNZ 0x005dc363                      ; 005dc379
        ;   XREF to: 005dc363 (CONDITIONAL_JUMP)  ; LAB_005dc363
    POP EDI                             ; 005dc37b
        ;   Label: LAB_005dc37b
    MOV EBX,dword ptr [EBX + 0x6d64]    ; 005dc37c
    SHL EBX,0x4                         ; 005dc382
    ADD EBX,EBP                         ; 005dc385
    CMP byte ptr [EBX],0x0              ; 005dc387
    JZ 0x005dc3a3                       ; 005dc38a
        ;   XREF to: 005dc3a3 (CONDITIONAL_JUMP)  ; LAB_005dc3a3
    XOR EAX,EAX                         ; 005dc38c
        ;   Label: LAB_005dc38c
    MOV AL,byte ptr [EBX]               ; 005dc38e
    PUSH EAX                            ; 005dc390
    INC EBX                             ; 005dc391
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 005dc392
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    MOV byte ptr [EBX + -0x1],AL        ; 005dc397
    MOV DL,byte ptr [EBX]               ; 005dc39a
    ADD ESP,0x4                         ; 005dc39c
    TEST DL,DL                          ; 005dc39f
    JNZ 0x005dc38c                      ; 005dc3a1
        ;   XREF to: 005dc38c (CONDITIONAL_JUMP)  ; LAB_005dc38c
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 005dc3a3
        ;   Label: LAB_005dc3a3
    TEST byte ptr [EAX + 0x6d64],0x1f   ; 005dc3aa
    JNZ 0x005dc3dd                      ; 005dc3b1
        ;   XREF to: 005dc3dd (CONDITIONAL_JUMP)  ; LAB_005dc3dd
    LEA EAX,[ESP + 0x118]               ; 005dc3b3
    PUSH EAX                            ; 005dc3ba
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005dc3bb
    MOV EDX,dword ptr [EAX + 0x6d64]    ; 005dc3c2
    PUSH EDX                            ; 005dc3c8
    PUSH 0x65505c                       ; 005dc3c9 | = "[%4d] %s"
    MOV ECX,dword ptr [0x00678a60]      ; 005dc3ce | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 005dc3d4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 ; 005dc3d5
        ;   XREF to: 0049e870 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x10                        ; 005dc3da
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 005dc3dd
        ;   Label: LAB_005dc3dd
    MOV EBX,dword ptr [EAX + 0x6d64]    ; 005dc3e4
    INC EBX                             ; 005dc3ea
    MOV dword ptr [EAX + 0x6d64],EBX    ; 005dc3eb
    CMP EBX,0x1388                      ; 005dc3f1
    JL 0x005dc41b                       ; 005dc3f7
        ;   XREF to: 005dc41b (CONDITIONAL_JUMP)  ; LAB_005dc41b
    MOV EDI,0x655065                    ; 005dc3f9 | = "..\\core\\texlist.cpp"
    MOV EAX,0x124                       ; 005dc3fe
    PUSH 0x655079                       ; 005dc403 | = "Too many editable textures!"
    MOV dword ptr [0x02f0ca48],EDI      ; 005dc408 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005dc40e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dc413
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005dc418
    MOV EAX,ESP                         ; 005dc41b
        ;   Label: LAB_005dc41b
    PUSH EAX                            ; 005dc41d
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 005dc41e
    PUSH EDX                            ; 005dc425
    CALL crt_io.c__findnext_FUN_00602300 ; 005dc426
        ;   XREF to: 00602300 (UNCONDITIONAL_CALL)  ; int crt_io.c__findnext_FUN_00602300(HANDLE find_handle, LPWIN32_FIND_DATAA find_data)
    ADD ESP,0x8                         ; 005dc42b
    TEST EAX,EAX                        ; 005dc42e
    JZ 0x005dc30d                       ; 005dc430
        ;   XREF to: 005dc30d (CONDITIONAL_JUMP)  ; LAB_005dc30d
    MOV ECX,dword ptr [0x00678a60]      ; 005dc436 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 005dc43c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005dc43d
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 005dc442
    MOV EBX,dword ptr [ESP + 0x1bc]     ; 005dc445
    PUSH EBX                            ; 005dc44c
    CALL crt_io.c__findclose_FUN_00602380 ; 005dc44d
        ;   XREF to: 00602380 (UNCONDITIONAL_CALL)  ; int crt_io.c__findclose_FUN_00602380(HANDLE find_handle)
    ADD ESP,0x4                         ; 005dc452
    XOR ESI,ESI                         ; 005dc455
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 005dc457
    MOV dword ptr [ESP + 0x1c4],ESI     ; 005dc45e
    ADD EAX,0x6d68                      ; 005dc465
    MOV dword ptr [ESP + 0x1c0],ESI     ; 005dc46a
    MOV dword ptr [ESP + 0x1cc],EAX     ; 005dc471
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 005dc478
        ;   Label: LAB_005dc478
    MOV EAX,dword ptr [EAX + 0x6d64]    ; 005dc47f
    MOV EBP,dword ptr [ESP + 0x1c4]     ; 005dc485
    DEC EAX                             ; 005dc48c
    CMP EAX,EBP                         ; 005dc48d
    JLE 0x005dc2bb                      ; 005dc48f
        ;   XREF to: 005dc2bb (CONDITIONAL_JUMP)  ; LAB_005dc2bb
    MOV EBX,dword ptr [ESP + 0x1e4]     ; 005dc495
    LEA EAX,[EBP + 0x1]                 ; 005dc49c
    MOV EDX,dword ptr [EBX + 0x6d64]    ; 005dc49f
    MOV dword ptr [ESP + 0x1b8],EAX     ; 005dc4a5
    CMP EAX,EDX                         ; 005dc4ac
    JL 0x005dc5b9                       ; 005dc4ae
        ;   XREF to: 005dc5b9 (CONDITIONAL_JUMP)  ; LAB_005dc5b9
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 005dc4b4
        ;   Label: LAB_005dc4b4
    MOV EBP,dword ptr [ESP + 0x1c0]     ; 005dc4bb
    INC EAX                             ; 005dc4c2
    ADD EBP,0x10                        ; 005dc4c3
    MOV dword ptr [ESP + 0x1c4],EAX     ; 005dc4c6
    MOV dword ptr [ESP + 0x1c0],EBP     ; 005dc4cd
    JMP 0x005dc478                      ; 005dc4d4
        ;   XREF to: 005dc478 (UNCONDITIONAL_JUMP)  ; LAB_005dc478
    MOV ECX,0x654ffd                    ; 005dc4d6 | = "..\\core\\texlist.cpp"
        ;   Label: LAB_005dc4d6
    MOV EBX,0xff                        ; 005dc4db
    PUSH 0x655011                       ; 005dc4e0 | = "Unable to build list of *.raw files!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005dc4e5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005dc4eb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dc4f1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005dc4f6
    JMP 0x005dc2ec                      ; 005dc4f9
        ;   XREF to: 005dc2ec (UNCONDITIONAL_JUMP)  ; LAB_005dc2ec
    CMP EDI,0x10000                     ; 005dc4fe
        ;   Label: LAB_005dc4fe
    JZ 0x005dc342                       ; 005dc504
        ;   XREF to: 005dc342 (CONDITIONAL_JUMP)  ; LAB_005dc342
    JMP 0x005dc41b                      ; 005dc50a
        ;   XREF to: 005dc41b (UNCONDITIONAL_JUMP)  ; LAB_005dc41b
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 005dc50f
        ;   Label: LAB_005dc50f
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 005dc516
    ADD EBX,0x10                        ; 005dc51d
    INC ECX                             ; 005dc520
    MOV EDI,dword ptr [ESI + 0x6d64]    ; 005dc521
    MOV dword ptr [ESP + 0x1b8],ECX     ; 005dc527
    CMP ECX,EDI                         ; 005dc52e
    JGE 0x005dc4b4                      ; 005dc530
        ;   XREF to: 005dc4b4 (CONDITIONAL_JUMP)  ; LAB_005dc4b4
    MOV EBP,dword ptr [ESP + 0x1cc]     ; 005dc532
        ;   Label: LAB_005dc532
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 005dc539
    PUSH EBX                            ; 005dc540
    ADD EBP,ECX                         ; 005dc541
    PUSH EBP                            ; 005dc543
    CALL crt_string.c__strcmp_FUN_005fef20 ; 005dc544
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 005dc549
    TEST EAX,EAX                        ; 005dc54c
    JLE 0x005dc50f                      ; 005dc54e
        ;   XREF to: 005dc50f (CONDITIONAL_JUMP)  ; LAB_005dc50f
    LEA EDI,[ESP + 0x168]               ; 005dc550
    MOV ESI,EBP                         ; 005dc557
    PUSH EDI                            ; 005dc559
    MOV AL,byte ptr [ESI]               ; 005dc55a
        ;   Label: LAB_005dc55a
    MOV byte ptr [EDI],AL               ; 005dc55c
    CMP AL,0x0                          ; 005dc55e
    JZ 0x005dc572                       ; 005dc560
        ;   XREF to: 005dc572 (CONDITIONAL_JUMP)  ; LAB_005dc572
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc562
    ADD ESI,0x2                         ; 005dc565
    MOV byte ptr [EDI + 0x1],AL         ; 005dc568
    ADD EDI,0x2                         ; 005dc56b
    CMP AL,0x0                          ; 005dc56e
    JNZ 0x005dc55a                      ; 005dc570
        ;   XREF to: 005dc55a (CONDITIONAL_JUMP)  ; LAB_005dc55a
    POP EDI                             ; 005dc572
        ;   Label: LAB_005dc572
    MOV ESI,EBX                         ; 005dc573
    MOV EDI,EBP                         ; 005dc575
    PUSH EDI                            ; 005dc577
    MOV AL,byte ptr [ESI]               ; 005dc578
        ;   Label: LAB_005dc578
    MOV byte ptr [EDI],AL               ; 005dc57a
    CMP AL,0x0                          ; 005dc57c
    JZ 0x005dc590                       ; 005dc57e
        ;   XREF to: 005dc590 (CONDITIONAL_JUMP)  ; LAB_005dc590
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc580
    ADD ESI,0x2                         ; 005dc583
    MOV byte ptr [EDI + 0x1],AL         ; 005dc586
    ADD EDI,0x2                         ; 005dc589
    CMP AL,0x0                          ; 005dc58c
    JNZ 0x005dc578                      ; 005dc58e
        ;   XREF to: 005dc578 (CONDITIONAL_JUMP)  ; LAB_005dc578
    POP EDI                             ; 005dc590
        ;   Label: LAB_005dc590
    LEA ESI,[ESP + 0x168]               ; 005dc591
    MOV EDI,EBX                         ; 005dc598
    PUSH EDI                            ; 005dc59a
    MOV AL,byte ptr [ESI]               ; 005dc59b
        ;   Label: LAB_005dc59b
    MOV byte ptr [EDI],AL               ; 005dc59d
    CMP AL,0x0                          ; 005dc59f
    JZ 0x005dc5b3                       ; 005dc5a1
        ;   XREF to: 005dc5b3 (CONDITIONAL_JUMP)  ; LAB_005dc5b3
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc5a3
    ADD ESI,0x2                         ; 005dc5a6
    MOV byte ptr [EDI + 0x1],AL         ; 005dc5a9
    ADD EDI,0x2                         ; 005dc5ac
    CMP AL,0x0                          ; 005dc5af
    JNZ 0x005dc59b                      ; 005dc5b1
        ;   XREF to: 005dc59b (CONDITIONAL_JUMP)  ; LAB_005dc59b
    POP EDI                             ; 005dc5b3
        ;   Label: LAB_005dc5b3
    JMP 0x005dc50f                      ; 005dc5b4
        ;   XREF to: 005dc50f (UNCONDITIONAL_JUMP)  ; LAB_005dc50f
    MOV EBX,dword ptr [ESP + 0x1b8]     ; 005dc5b9
        ;   Label: LAB_005dc5b9
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 005dc5c0
    MOV EDX,dword ptr [ESP + 0x1cc]     ; 005dc5c7
    SHL EBX,0x4                         ; 005dc5ce
    MOV dword ptr [ESP + 0x1c8],EAX     ; 005dc5d1
    ADD EBX,EDX                         ; 005dc5d8
    JMP 0x005dc532                      ; 005dc5da
        ;   XREF to: 005dc532 (UNCONDITIONAL_JUMP)  ; LAB_005dc532

