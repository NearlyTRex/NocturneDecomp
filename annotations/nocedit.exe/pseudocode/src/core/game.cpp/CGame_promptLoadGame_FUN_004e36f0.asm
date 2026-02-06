; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_promptLoadGame_FUN_004e36f0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x20f]:1  local_20f
; undefined1       Stack[-0x10c]:1  local_10c
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004dcee0 at 004dd12f
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db4e0
;
; Referenced Globals:
;   TerminatedCString s_noc_0062d4c5
;   TerminatedCString s_noc_0062d4c9
;   TerminatedCString s_noc_0062d4ce
;   TerminatedCString s_save_0062d4d4
;   TerminatedCString s_Select_file_to_load_0062d4d9
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char g_CurrentSaveFile
;   undefined1 DAT_02d82c81
;   undefined1 DAT_02d82c82
;   undefined1 DAT_02d82c83
;
; Called Functions:
;   crt_string.c_splitpath_FUN_005ff178
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e36f0
        ;   Label: core_game.cpp_CGame_promptLoadGame_FUN_004e36f0
    PUSH ESI                            ; 004e36f1
    PUSH EDI                            ; 004e36f2
    SUB ESP,0x204                       ; 004e36f3
    MOV EBX,dword ptr [ESP + 0x214]     ; 004e36f9
    LEA EAX,[ESP + 0x104]               ; 004e3700
    PUSH EAX                            ; 004e3707
    PUSH 0x0                            ; 004e3708
    PUSH 0x0                            ; 004e370a
    PUSH 0x0                            ; 004e370c
    MOV dword ptr [EBX + 0x9c4],0x0     ; 004e370e
    PUSH 0x2d82c80                      ; 004e3718 | g_CurrentSaveFile
    MOV byte ptr [EBX + 0x9c8],0x0      ; 004e371d
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004e3724
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004e3729
    PUSH 0x62d4c5                       ; 004e372c | = "noc"
    LEA EAX,[ESP + 0x108]               ; 004e3731
    PUSH EAX                            ; 004e3738
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e3739
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e373e
    TEST EAX,EAX                        ; 004e3741
    JZ 0x004e375e                       ; 004e3743
        ;   XREF to: 004e375e (CONDITIONAL_JUMP)  ; LAB_004e375e
    PUSH 0x62d4c9                       ; 004e3745 | = ".noc"
    LEA EAX,[ESP + 0x108]               ; 004e374a
    PUSH EAX                            ; 004e3751
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e3752
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e3757
    TEST EAX,EAX                        ; 004e375a
    JNZ 0x004e37bb                      ; 004e375c
        ;   XREF to: 004e37bb (CONDITIONAL_JUMP)  ; LAB_004e37bb
    MOV ESI,0x2d82c80                   ; 004e375e | g_CurrentSaveFile
        ;   Label: LAB_004e375e
    MOV EDI,ESP                         ; 004e3763
    PUSH EDI                            ; 004e3765
    MOV AL,byte ptr [ESI]               ; 004e3766 | g_CurrentSaveFile | DAT_02d82c82
        ;   Label: LAB_004e3766
    MOV byte ptr [EDI],AL               ; 004e3768
    CMP AL,0x0                          ; 004e376a
    JZ 0x004e377e                       ; 004e376c
        ;   XREF to: 004e377e (CONDITIONAL_JUMP)  ; LAB_004e377e
    MOV AL,byte ptr [ESI + 0x1]         ; 004e376e | DAT_02d82c81 | DAT_02d82c83
    ADD ESI,0x2                         ; 004e3771
    MOV byte ptr [EDI + 0x1],AL         ; 004e3774
    ADD EDI,0x2                         ; 004e3777
    CMP AL,0x0                          ; 004e377a
    JNZ 0x004e3766                      ; 004e377c
        ;   XREF to: 004e3766 (CONDITIONAL_JUMP)  ; LAB_004e3766
    POP EDI                             ; 004e377e
        ;   Label: LAB_004e377e
    PUSH 0x1                            ; 004e377f
        ;   Label: LAB_004e377f
    LEA EAX,[ESP + 0x4]                 ; 004e3781
    PUSH EAX                            ; 004e3785
    PUSH 0x62d4ce                       ; 004e3786 | = "*.noc"
    PUSH 0x62d4d4                       ; 004e378b | = "save"
    PUSH 0x62d4d9                       ; 004e3790 | = "Select file to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e3795
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004e379a
    PUSH EAX                            ; 004e379d
    MOV EDX,dword ptr [0x00678a60]      ; 004e379e | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004e37a4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 004e37a5
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
    ADD ESP,0x18                        ; 004e37aa
    TEST EAX,EAX                        ; 004e37ad
    JNZ 0x004e37c2                      ; 004e37af
        ;   XREF to: 004e37c2 (CONDITIONAL_JUMP)  ; LAB_004e37c2
    ADD ESP,0x204                       ; 004e37b1
    POP EDI                             ; 004e37b7
    POP ESI                             ; 004e37b8
    POP EBX                             ; 004e37b9
    RET                                 ; 004e37ba
    XOR AH,AH                           ; 004e37bb
        ;   Label: LAB_004e37bb
    MOV byte ptr [ESP],AH               ; 004e37bd
    JMP 0x004e377f                      ; 004e37c0
        ;   XREF to: 004e377f (UNCONDITIONAL_JUMP)  ; LAB_004e377f
    MOV ESI,ESP                         ; 004e37c2
        ;   Label: LAB_004e37c2
    LEA EDI,[EBX + 0x9c8]               ; 004e37c4
    MOV dword ptr [EBX + 0x9c4],0x1     ; 004e37ca
    PUSH EDI                            ; 004e37d4
    MOV AL,byte ptr [ESI]               ; 004e37d5
        ;   Label: LAB_004e37d5
    MOV byte ptr [EDI],AL               ; 004e37d7
    CMP AL,0x0                          ; 004e37d9
    JZ 0x004e37ed                       ; 004e37db
        ;   XREF to: 004e37ed (CONDITIONAL_JUMP)  ; LAB_004e37ed
    MOV AL,byte ptr [ESI + 0x1]         ; 004e37dd
    ADD ESI,0x2                         ; 004e37e0
    MOV byte ptr [EDI + 0x1],AL         ; 004e37e3
    ADD EDI,0x2                         ; 004e37e6
    CMP AL,0x0                          ; 004e37e9
    JNZ 0x004e37d5                      ; 004e37eb
        ;   XREF to: 004e37d5 (CONDITIONAL_JUMP)  ; LAB_004e37d5
    POP EDI                             ; 004e37ed
        ;   Label: LAB_004e37ed
    ADD ESP,0x204                       ; 004e37ee
    POP EDI                             ; 004e37f4
    POP ESI                             ; 004e37f5
    POP EBX                             ; 004e37f6
    RET                                 ; 004e37f7

