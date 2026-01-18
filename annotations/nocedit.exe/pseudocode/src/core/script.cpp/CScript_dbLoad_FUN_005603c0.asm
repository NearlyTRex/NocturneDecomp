; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_script.cpp_CScript_dbLoad_FUN_005603c0()
;
; Local Variables:
; undefined1       Stack[-0x334]:1  local_334
; undefined1       Stack[-0x333]:1  local_333
; undefined1       Stack[-0x2f8]:1  local_2f8
; undefined1       Stack[-0x2f7]:1  local_2f7
; undefined1       Stack[-0x2bc]:1  local_2bc
; undefined1       Stack[-0x2bb]:1  local_2bb
; undefined1       Stack[-0x29e]:1  local_29e
; undefined1       Stack[-0x10c]:1  local_10c
; undefined1       Stack[-0x10b]:1  local_10b
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 at 0055a026
;
; Referenced Globals:
;   TerminatedCString s_world_006432a2
;   TerminatedCString s_rt_006432a8
;   TerminatedCString s_world_006432ab
;   TerminatedCString s_core_script_cpp_006432b1
;   TerminatedCString s_Can_t_open_world_s_006432c4
;   TerminatedCString s_anon_006432d8
;   TerminatedCString s_anon_006432da
;   TerminatedCString s_core_script_cpp_006432ef
;   TerminatedCString s_SCScipt_dbLoad_error_par_00643302
;   TerminatedCString s_stranger_0064332f
;   TerminatedCString s_anon_00643338
;   undefined4 DAT_00643339
;   TerminatedCString s_Warning_Duplicate_wav_st_0064333a
;   undefined4 s_arning!_Duplicate_wav_string_%s_d_0064333b
;   TerminatedCString s_s_wav_0064336a
;   ... and 11 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_script.cpp_FUN_00559360
;   core_script.cpp_FUN_005606e0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_ftell_FUN_00601560
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_splitpath_FUN_005ff178
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005603c0
        ;   Label: core_script.cpp_CScript_dbLoad_FUN_005603c0
    PUSH EBP                            ; 005603c1
    SUB ESP,0x32c                       ; 005603c2
    MOV EBX,dword ptr [ESP + 0x338]     ; 005603c8
    MOV EDX,dword ptr [ESP + 0x33c]     ; 005603cf
    PUSH EDX                            ; 005603d6
    PUSH 0x6432a2                       ; 005603d7 | = "world"
    MOV dword ptr [EBX + 0x1c],0x0      ; 005603dc
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005603e3
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005603e8
    MOV dword ptr [ESP + 0x328],EAX     ; 005603eb
    TEST EAX,EAX                        ; 005603f2
    JG 0x005603ff                       ; 005603f4
        ;   XREF to: 005603ff (CONDITIONAL_JUMP)  ; LAB_005603ff
    ADD ESP,0x32c                       ; 005603f6
    POP EBP                             ; 005603fc
    POP EBX                             ; 005603fd
    RET                                 ; 005603fe
    PUSH EDI                            ; 005603ff
        ;   Label: LAB_005603ff
    PUSH ESI                            ; 00560400
    PUSH 0x6432a8                       ; 00560401 | = "rt"
    MOV ECX,dword ptr [ESP + 0x348]     ; 00560406
    PUSH ECX                            ; 0056040d
    PUSH 0x6432ab                       ; 0056040e | = "world"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00560413
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00560418
    MOV EBP,EAX                         ; 0056041b
    TEST EAX,EAX                        ; 0056041d
    JZ 0x00560610                       ; 0056041f
        ;   XREF to: 00560610 (CONDITIONAL_JUMP)  ; LAB_00560610
    PUSH EBP                            ; 00560425
        ;   Label: LAB_00560425
    CALL crt_stdio.c_ftell_FUN_00601560 ; 00560426
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(FILE * file_handle)
    ADD ESP,0x4                         ; 0056042b
    ADD dword ptr [ESP + 0x330],EAX     ; 0056042e
    PUSH 0x6432d8                       ; 00560435 | = " "
        ;   Label: LAB_00560435
    PUSH EBP                            ; 0056043a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0056043b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00560440
    PUSH EBP                            ; 00560443
    CALL crt_stdio.c_ftell_FUN_00601560 ; 00560444
        ;   XREF to: 00601560 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_00601560(FILE * file_handle)
    ADD ESP,0x4                         ; 00560449
    CMP EAX,dword ptr [ESP + 0x330]     ; 0056044c
    JGE 0x005606bf                      ; 00560453
        ;   XREF to: 005606bf (CONDITIONAL_JUMP)  ; LAB_005606bf
    LEA EAX,[ESP + 0x9e]                ; 00560459
    PUSH EAX                            ; 00560460
    LEA EAX,[ESP + 0x84]                ; 00560461
    PUSH EAX                            ; 00560468
    LEA EAX,[ESP + 0x10]                ; 00560469
    PUSH EAX                            ; 0056046d
    PUSH 0x6432da                       ; 0056046e | = "%[^,], %[^,], %[^\n]\n"
    PUSH EBP                            ; 00560473
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00560474
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00560479
    CMP EAX,0x3                         ; 0056047c
    JZ 0x005604b0                       ; 0056047f
        ;   XREF to: 005604b0 (CONDITIONAL_JUMP)  ; LAB_005604b0
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00560481
    PUSH EAX                            ; 00560484
    MOV EDX,dword ptr [ESP + 0x348]     ; 00560485
    PUSH EDX                            ; 0056048c
    MOV ESI,0x6432ef                    ; 0056048d | = "..\\core\\script.cpp"
    MOV EDI,0xed6                       ; 00560492
    PUSH 0x643302                       ; 00560497 | = "SCScipt::dbLoad - error parsing %s re..."
    MOV dword ptr [0x02f0ca48],ESI      ; 0056049c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005604a2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005604a8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 005604ad
    LEA EAX,[ESP + 0x8]                 ; 005604b0
        ;   Label: LAB_005604b0
    PUSH EAX                            ; 005604b4
    CALL core_script.cpp_FUN_00559360   ; 005604b5
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00559360()
    ADD ESP,0x4                         ; 005604ba
    LEA EAX,[ESP + 0x80]                ; 005604bd
    PUSH EAX                            ; 005604c4
    CALL core_script.cpp_FUN_00559360   ; 005604c5
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00559360()
    ADD ESP,0x4                         ; 005604ca
    LEA EAX,[ESP + 0x9e]                ; 005604cd
    PUSH EAX                            ; 005604d4
    CALL core_script.cpp_FUN_00559360   ; 005604d5
        ;   XREF to: 00559360 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00559360()
    ADD ESP,0x4                         ; 005604da
    PUSH 0x64332f                       ; 005604dd | = "stranger"
    LEA EAX,[ESP + 0x84]                ; 005604e2
    PUSH EAX                            ; 005604e9
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005604ea
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005604ef
    TEST EAX,EAX                        ; 005604f2
    JNZ 0x0056051c                      ; 005604f4
        ;   XREF to: 0056051c (CONDITIONAL_JUMP)  ; LAB_0056051c
    MOV ESI,0x643338                    ; 005604f6 | = "$"
    LEA EDI,[ESP + 0x80]                ; 005604fb
    PUSH EDI                            ; 00560502
    MOV AL,byte ptr [ESI]               ; 00560503 | = "$" | s_Warning_Duplicate_wav_st_0064333a
        ;   Label: LAB_00560503
    MOV byte ptr [EDI],AL               ; 00560505
    CMP AL,0x0                          ; 00560507
    JZ 0x0056051b                       ; 00560509
        ;   XREF to: 0056051b (CONDITIONAL_JUMP)  ; LAB_0056051b
    MOV AL,byte ptr [ESI + 0x1]         ; 0056050b | DAT_00643339 | s_arning!_Duplicate_wav_string_%s_d_0064333b
    ADD ESI,0x2                         ; 0056050e
    MOV byte ptr [EDI + 0x1],AL         ; 00560511
    ADD EDI,0x2                         ; 00560514
    CMP AL,0x0                          ; 00560517
    JNZ 0x00560503                      ; 00560519
        ;   XREF to: 00560503 (CONDITIONAL_JUMP)  ; LAB_00560503
    POP EDI                             ; 0056051b
        ;   Label: LAB_0056051b
    PUSH 0x0                            ; 0056051c
        ;   Label: LAB_0056051c
    LEA EAX,[ESP + 0x234]               ; 0056051e
    PUSH EAX                            ; 00560525
    PUSH 0x0                            ; 00560526
    PUSH 0x0                            ; 00560528
    LEA EAX,[ESP + 0x18]                ; 0056052a
    PUSH EAX                            ; 0056052e
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0056052f
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 00560534
    LEA ESI,[ESP + 0x230]               ; 00560537
    LEA EDI,[ESP + 0x8]                 ; 0056053e
    PUSH EDI                            ; 00560542
    MOV AL,byte ptr [ESI]               ; 00560543
        ;   Label: LAB_00560543
    MOV byte ptr [EDI],AL               ; 00560545
    CMP AL,0x0                          ; 00560547
    JZ 0x0056055b                       ; 00560549
        ;   XREF to: 0056055b (CONDITIONAL_JUMP)  ; LAB_0056055b
    MOV AL,byte ptr [ESI + 0x1]         ; 0056054b
    ADD ESI,0x2                         ; 0056054e
    MOV byte ptr [EDI + 0x1],AL         ; 00560551
    ADD EDI,0x2                         ; 00560554
    CMP AL,0x0                          ; 00560557
    JNZ 0x00560543                      ; 00560559
        ;   XREF to: 00560543 (CONDITIONAL_JUMP)  ; LAB_00560543
    POP EDI                             ; 0056055b
        ;   Label: LAB_0056055b
    LEA EAX,[ESP + 0x8]                 ; 0056055c
    PUSH EAX                            ; 00560560
    PUSH EBX                            ; 00560561
    CALL core_script.cpp_FUN_005606e0   ; 00560562
        ;   XREF to: 005606e0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_005606e0()
    ADD ESP,0x8                         ; 00560567
    TEST EAX,EAX                        ; 0056056a
    JL 0x0056058f                       ; 0056056c
        ;   XREF to: 0056058f (CONDITIONAL_JUMP)  ; LAB_0056058f
    MOV ECX,dword ptr [ESP + 0x344]     ; 0056056e
    PUSH ECX                            ; 00560575
    LEA EAX,[ESP + 0xc]                 ; 00560576
    PUSH EAX                            ; 0056057a
    PUSH 0x64333a                       ; 0056057b | = "Warning! Duplicate wav string %s dete..."
    MOV ESI,dword ptr [0x00678a60]      ; 00560580 | g_CEditorToolsPtr
    PUSH ESI                            ; 00560586 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00560587
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 0056058c
    LEA EAX,[ESP + 0x8]                 ; 0056058f
        ;   Label: LAB_0056058f
    PUSH EAX                            ; 00560593
    PUSH 0x64336a                       ; 00560594 | = "%s.wav"
    LEA EAX,[ESP + 0x4c]                ; 00560599
    PUSH EAX                            ; 0056059d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0056059e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005605a3
    LEA EAX,[ESP + 0x44]                ; 005605a6
    PUSH EAX                            ; 005605aa
    PUSH 0x643371                       ; 005605ab | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005605b0
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 005605b5
    TEST EAX,EAX                        ; 005605b8
    JLE 0x00560640                      ; 005605ba
        ;   XREF to: 00560640 (CONDITIONAL_JUMP)  ; LAB_00560640
    MOV EDI,dword ptr [EBX + 0x1c]      ; 005605c0
        ;   Label: LAB_005605c0
    INC EDI                             ; 005605c3
    MOV dword ptr [EBX + 0x1c],EDI      ; 005605c4
    IMUL EAX,EDI,0x226                  ; 005605c7
    PUSH 0xefa                          ; 005605cd
    PUSH 0x643384                       ; 005605d2 | = "..\\core\\script.cpp"
    PUSH EAX                            ; 005605d7
    MOV ECX,dword ptr [EBX + 0x20]      ; 005605d8
    PUSH ECX                            ; 005605db
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 005605dc
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 005605e1
    MOV dword ptr [EBX + 0x20],EAX      ; 005605e4
    TEST EAX,EAX                        ; 005605e7
    JZ 0x00560698                       ; 005605e9
        ;   XREF to: 00560698 (CONDITIONAL_JUMP)  ; LAB_00560698
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005605ef
        ;   Label: LAB_005605ef
    DEC EAX                             ; 005605f2
    IMUL EAX,EAX,0x226                  ; 005605f3
    MOV ECX,0x89                        ; 005605f9
    MOV EDI,dword ptr [EBX + 0x20]      ; 005605fe
    LEA ESI,[ESP + 0x8]                 ; 00560601
    ADD EDI,EAX                         ; 00560605
    MOVSD.REP ES:EDI,ESI                ; 00560607
    MOVSW ES:EDI,ESI                    ; 00560609
    JMP 0x00560435                      ; 0056060b
        ;   XREF to: 00560435 (UNCONDITIONAL_JUMP)  ; LAB_00560435
    MOV EAX,dword ptr [ESP + 0x344]     ; 00560610
        ;   Label: LAB_00560610
    PUSH EAX                            ; 00560617
    MOV ESI,0x6432b1                    ; 00560618 | = "..\\core\\script.cpp"
    MOV EDI,0xec2                       ; 0056061d
    PUSH 0x6432c4                       ; 00560622 | = "Can't open world\\%s"
    MOV dword ptr [0x02f0ca48],ESI      ; 00560627 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0056062d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00560633
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00560638
    JMP 0x00560425                      ; 0056063b
        ;   XREF to: 00560425 (UNCONDITIONAL_JUMP)  ; LAB_00560425
    LEA EAX,[ESP + 0x8]                 ; 00560640
        ;   Label: LAB_00560640
    PUSH EAX                            ; 00560644
    PUSH 0x643377                       ; 00560645 | = "%s.mp3"
    LEA EAX,[ESP + 0x4c]                ; 0056064a
    PUSH EAX                            ; 0056064e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0056064f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00560654
    LEA EAX,[ESP + 0x44]                ; 00560657
    PUSH EAX                            ; 0056065b
    PUSH 0x64337e                       ; 0056065c | = "sound"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00560661
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 00560666
    TEST EAX,EAX                        ; 00560669
    JG 0x005605c0                       ; 0056066b
        ;   XREF to: 005605c0 (CONDITIONAL_JUMP)  ; LAB_005605c0
    LEA ESI,[ESP + 0x8]                 ; 00560671
    LEA EDI,[ESP + 0x44]                ; 00560675
    PUSH EDI                            ; 00560679
    MOV AL,byte ptr [ESI]               ; 0056067a
        ;   Label: LAB_0056067a
    MOV byte ptr [EDI],AL               ; 0056067c
    CMP AL,0x0                          ; 0056067e
    JZ 0x00560692                       ; 00560680
        ;   XREF to: 00560692 (CONDITIONAL_JUMP)  ; LAB_00560692
    MOV AL,byte ptr [ESI + 0x1]         ; 00560682
    ADD ESI,0x2                         ; 00560685
    MOV byte ptr [EDI + 0x1],AL         ; 00560688
    ADD EDI,0x2                         ; 0056068b
    CMP AL,0x0                          ; 0056068e
    JNZ 0x0056067a                      ; 00560690
        ;   XREF to: 0056067a (CONDITIONAL_JUMP)  ; LAB_0056067a
    POP EDI                             ; 00560692
        ;   Label: LAB_00560692
    JMP 0x005605c0                      ; 00560693
        ;   XREF to: 005605c0 (UNCONDITIONAL_JUMP)  ; LAB_005605c0
    MOV EDI,0x643397                    ; 00560698 | = "..\\core\\script.cpp"
        ;   Label: LAB_00560698
    MOV EAX,0xefb                       ; 0056069d
    PUSH 0x6433aa                       ; 005606a2 | = "SCScipt::dbLoad - out of memory"
    MOV dword ptr [0x02f0ca48],EDI      ; 005606a7 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005606ad | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005606b2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005606b7
    JMP 0x005605ef                      ; 005606ba
        ;   XREF to: 005605ef (UNCONDITIONAL_JUMP)  ; LAB_005605ef
    PUSH 0xf02                          ; 005606bf
        ;   Label: LAB_005606bf
    PUSH 0x6433ca                       ; 005606c4 | = "..\\core\\script.cpp"
    PUSH EBP                            ; 005606c9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005606ca
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005606cf
    POP ESI                             ; 005606d2
    POP EDI                             ; 005606d3
    ADD ESP,0x32c                       ; 005606d4
    POP EBP                             ; 005606da
    POP EBX                             ; 005606db
    RET                                 ; 005606dc

