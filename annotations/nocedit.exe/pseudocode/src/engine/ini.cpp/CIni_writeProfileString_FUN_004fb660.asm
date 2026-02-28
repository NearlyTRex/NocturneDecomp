; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_CIni_writeProfileString_FUN_004fb660(CIni *this_ptr,char *section,char *key,char *value,char *filename)
;
; Parameters:
; CIni *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
; char *           Stack[0xc]:4   key
; char *           Stack[0x10]:4   value
; char *           Stack[0x14]:4   filename
; Local Variables:
; undefined1       Stack[-0x314]:1  local_314
; undefined1       Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined1       Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_ini.cpp_writeProfileString_FUN_004fba40 at 004fba5b
;
; Referenced Globals:
;   TerminatedCString s_engine_ini_cpp_0062fb82
;   TerminatedCString s_rt_0062fb94
;   TerminatedCString s_engine_ini_cpp_0062fb97
;   TerminatedCString s_cIni_writeProfileString__0062fba9
;   TerminatedCString s_engine_ini_cpp_0062fbd8
;   TerminatedCString s_wt_0062fbea
;   TerminatedCString s_engine_ini_cpp_0062fbed
;   TerminatedCString s_cIni_writeProfileString__0062fbff
;   TerminatedCString s_s_0062fc2f
;   TerminatedCString s_s_s_0062fc35
;   TerminatedCString s_s_s_0062fc3c
;   TerminatedCString s_s_s_0062fc43
;   TerminatedCString s_engine_ini_cpp_0062fc4a
;   TerminatedCString s_engine_ini_cpp_0062fc5c
;   char* g_CurrentFilename
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_stdio.c_rename_FUN_006015d0
;   crt_string.c__strcmp_FUN_005fef20
;   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb660
        ;   Label: engine_ini.cpp_CIni_writeProfileString_FUN_004fb660
    PUSH ESI                            ; 004fb661
    PUSH EDI                            ; 004fb662
    PUSH EBP                            ; 004fb663
    SUB ESP,0x304                       ; 004fb664
    MOV EBX,dword ptr [ESP + 0x318]     ; 004fb66a
    MOV ECX,dword ptr [ESP + 0x324]     ; 004fb671
    PUSH ECX                            ; 004fb678
    MOV ESI,dword ptr [ESP + 0x32c]     ; 004fb679
    PUSH ESI                            ; 004fb680
    MOV EDI,dword ptr [ESP + 0x328]     ; 004fb681
    PUSH EDI                            ; 004fb688
    MOV EBP,dword ptr [ESP + 0x328]     ; 004fb689
    PUSH EBP                            ; 004fb690
    XOR EDX,EDX                         ; 004fb691
    PUSH EBX                            ; 004fb693
    MOV dword ptr [ESP + 0x314],EDX     ; 004fb694
    CALL engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470 ; 004fb69b
        ;   XREF to: 004fb470 (UNCONDITIONAL_CALL)  ; int engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470(CIni * this_ptr, char * section, char * key, char * value, ...)
    MOV EBP,EAX                         ; 004fb6a0
    MOV EAX,dword ptr [EBX]             ; 004fb6a2
    ADD ESP,0x14                        ; 004fb6a4
    TEST EAX,EAX                        ; 004fb6a7
    JNZ 0x004fb6bb                      ; 004fb6a9
        ;   XREF to: 004fb6bb (CONDITIONAL_JUMP)  ; LAB_004fb6bb
    MOV EAX,0x1                         ; 004fb6ab
    ADD ESP,0x304                       ; 004fb6b0
    POP EBP                             ; 004fb6b6
    POP EDI                             ; 004fb6b7
    POP ESI                             ; 004fb6b8
    POP EBX                             ; 004fb6b9
    RET                                 ; 004fb6ba
    PUSH 0x182                          ; 004fb6bb
        ;   Label: LAB_004fb6bb
    PUSH 0x62fb82                       ; 004fb6c0 | = "..\\engine\\ini.cpp"
    PUSH 0x62fb94                       ; 004fb6c5 | = "rt"
    PUSH 0x0                            ; 004fb6ca
    PUSH ESI                            ; 004fb6cc
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004fb6cd
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004fb6d2
    MOV EBX,EAX                         ; 004fb6d5
    TEST EAX,EAX                        ; 004fb6d7
    JNZ 0x004fb6fe                      ; 004fb6d9
        ;   XREF to: 004fb6fe (CONDITIONAL_JUMP)  ; LAB_004fb6fe
    MOV ECX,0x62fb97                    ; 004fb6db | = "..\\engine\\ini.cpp"
    MOV ESI,0x183                       ; 004fb6e0
    PUSH 0x62fba9                       ; 004fb6e5 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004fb6ea | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004fb6f0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fb6f6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fb6fb
    MOV ESI,dword ptr [ESP + 0x328]     ; 004fb6fe
        ;   Label: LAB_004fb6fe
    LEA EDI,[ESP + 0x100]               ; 004fb705
    PUSH EDI                            ; 004fb70c
    MOV AL,byte ptr [ESI]               ; 004fb70d
        ;   Label: LAB_004fb70d
    MOV byte ptr [EDI],AL               ; 004fb70f
    CMP AL,0x0                          ; 004fb711
    JZ 0x004fb725                       ; 004fb713
        ;   XREF to: 004fb725 (CONDITIONAL_JUMP)  ; LAB_004fb725
    MOV AL,byte ptr [ESI + 0x1]         ; 004fb715
    ADD ESI,0x2                         ; 004fb718
    MOV byte ptr [EDI + 0x1],AL         ; 004fb71b
    ADD EDI,0x2                         ; 004fb71e
    CMP AL,0x0                          ; 004fb721
    JNZ 0x004fb70d                      ; 004fb723
        ;   XREF to: 004fb70d (CONDITIONAL_JUMP)  ; LAB_004fb70d
    POP EDI                             ; 004fb725
        ;   Label: LAB_004fb725
    MOV EDI,dword ptr [ESP + 0x328]     ; 004fb726
    SUB ECX,ECX                         ; 004fb72d
    DEC ECX                             ; 004fb72f
    XOR EAX,EAX                         ; 004fb730
    SCASB.REPNE ES:EDI                  ; 004fb732
    NOT ECX                             ; 004fb734
    DEC ECX                             ; 004fb736
    PUSH 0x186                          ; 004fb737
    PUSH 0x62fbd8                       ; 004fb73c | = "..\\engine\\ini.cpp"
    PUSH 0x62fbea                       ; 004fb741 | = "wt"
    MOV AH,0x78                         ; 004fb746
    PUSH 0x0                            ; 004fb748
    MOV byte ptr [ESP + ECX*0x1 + 0x10f],AH ; 004fb74a
    LEA EAX,[ESP + 0x110]               ; 004fb751
    PUSH EAX                            ; 004fb758
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004fb759
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004fb75e
    MOV ESI,EAX                         ; 004fb761
    TEST EAX,EAX                        ; 004fb763
    JNZ 0x004fb789                      ; 004fb765
        ;   XREF to: 004fb789 (CONDITIONAL_JUMP)  ; LAB_004fb789
    MOV EDI,0x62fbed                    ; 004fb767 | = "..\\engine\\ini.cpp"
    MOV EAX,0x187                       ; 004fb76c
    PUSH 0x62fbff                       ; 004fb771 | = "cIni::writeProfileString: Unable to o..."
    MOV dword ptr [0x02f0ca48],EDI      ; 004fb776 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004fb77c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fb781
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fb786
    TEST EBP,EBP                        ; 004fb789
        ;   Label: LAB_004fb789
    JZ 0x004fb7b7                       ; 004fb78b
        ;   XREF to: 004fb7b7 (CONDITIONAL_JUMP)  ; LAB_004fb7b7
    TEST EBP,EBP                        ; 004fb78d
        ;   Label: LAB_004fb78d
    JL 0x004fb8ea                       ; 004fb78f
        ;   XREF to: 004fb8ea (CONDITIONAL_JUMP)  ; LAB_004fb8ea
    PUSH EBX                            ; 004fb795
    PUSH 0xff                           ; 004fb796
    LEA EAX,[ESP + 0x8]                 ; 004fb79b
    PUSH EAX                            ; 004fb79f
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004fb7a0
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004fb7a5
    MOV EAX,ESP                         ; 004fb7a8
    PUSH EAX                            ; 004fb7aa
    PUSH ESI                            ; 004fb7ab
    DEC EBP                             ; 004fb7ac
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004fb7ad
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004fb7b2
    JMP 0x004fb78d                      ; 004fb7b5
        ;   XREF to: 004fb78d (UNCONDITIONAL_JUMP)  ; LAB_004fb78d
    MOV EDX,dword ptr [ESP + 0x31c]     ; 004fb7b7
        ;   Label: LAB_004fb7b7
    PUSH EDX                            ; 004fb7be
    PUSH 0x62fc2f                       ; 004fb7bf | = "[%s]\n"
    LEA EAX,[ESP + 0x208]               ; 004fb7c4
    PUSH EAX                            ; 004fb7cb
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004fb7cc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV DL,byte ptr [EBX + 0xc]         ; 004fb7d1
    ADD ESP,0xc                         ; 004fb7d4
    TEST DL,0x10                        ; 004fb7d7
    JNZ 0x004fb7fe                      ; 004fb7da
        ;   XREF to: 004fb7fe (CONDITIONAL_JUMP)  ; LAB_004fb7fe
    MOV EBP,dword ptr [ESP + 0x324]     ; 004fb7dc
    PUSH EBX                            ; 004fb7e3
        ;   Label: LAB_004fb7e3
    PUSH 0xff                           ; 004fb7e4
    LEA EAX,[ESP + 0x8]                 ; 004fb7e9
    PUSH EAX                            ; 004fb7ed
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004fb7ee
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004fb7f3
    TEST EAX,EAX                        ; 004fb7f6
    JNZ 0x004fb895                      ; 004fb7f8
        ;   XREF to: 004fb895 (CONDITIONAL_JUMP)  ; LAB_004fb895
    CMP dword ptr [ESP + 0x300],0x0     ; 004fb7fe
        ;   Label: LAB_004fb7fe
    JNZ 0x004fb837                      ; 004fb806
        ;   XREF to: 004fb837 (CONDITIONAL_JUMP)  ; LAB_004fb837
    LEA EAX,[ESP + 0x200]               ; 004fb808
    PUSH EAX                            ; 004fb80f
    PUSH ESI                            ; 004fb810
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004fb811
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004fb816
    MOV EDI,dword ptr [ESP + 0x324]     ; 004fb819
    PUSH EDI                            ; 004fb820
    MOV EBP,dword ptr [ESP + 0x324]     ; 004fb821
    PUSH EBP                            ; 004fb828
    PUSH 0x62fc3c                       ; 004fb829 | = "%s=%s\n"
    PUSH ESI                            ; 004fb82e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004fb82f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004fb834
    PUSH 0x1e8                          ; 004fb837
        ;   Label: LAB_004fb837
    PUSH 0x62fc4a                       ; 004fb83c | = "..\\engine\\ini.cpp"
    PUSH EBX                            ; 004fb841
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004fb842
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004fb847
    PUSH 0x1e9                          ; 004fb84a
    PUSH 0x62fc5c                       ; 004fb84f | = "..\\engine\\ini.cpp"
    PUSH ESI                            ; 004fb854
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004fb855
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004fb85a
    MOV EAX,dword ptr [ESP + 0x328]     ; 004fb85d
    PUSH EAX                            ; 004fb864
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 004fb865
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 004fb86a
    MOV EDX,dword ptr [ESP + 0x328]     ; 004fb86d
    PUSH EDX                            ; 004fb874
    LEA EAX,[ESP + 0x104]               ; 004fb875
    PUSH EAX                            ; 004fb87c
    CALL crt_stdio.c_rename_FUN_006015d0 ; 004fb87d
        ;   XREF to: 006015d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_rename_FUN_006015d0(char * old_filename, char * new_filename)
    MOV EAX,0x1                         ; 004fb882
    ADD ESP,0x8                         ; 004fb887
    ADD ESP,0x304                       ; 004fb88a
    POP EBP                             ; 004fb890
    POP EDI                             ; 004fb891
    POP ESI                             ; 004fb892
    POP EBX                             ; 004fb893
    RET                                 ; 004fb894
    MOV EAX,ESP                         ; 004fb895
        ;   Label: LAB_004fb895
    PUSH EAX                            ; 004fb897
    PUSH ESI                            ; 004fb898
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004fb899
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 004fb89e
    MOV EAX,ESP                         ; 004fb8a1
    PUSH EAX                            ; 004fb8a3
    LEA EAX,[ESP + 0x204]               ; 004fb8a4
    PUSH EAX                            ; 004fb8ab
    CALL crt_string.c__strcmp_FUN_005fef20 ; 004fb8ac
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fb8b1
    TEST EAX,EAX                        ; 004fb8b4
    JNZ 0x004fb8db                      ; 004fb8b6
        ;   XREF to: 004fb8db (CONDITIONAL_JUMP)  ; LAB_004fb8db
    PUSH EBP                            ; 004fb8b8
    MOV EAX,dword ptr [ESP + 0x324]     ; 004fb8b9
    PUSH EAX                            ; 004fb8c0
    PUSH 0x62fc35                       ; 004fb8c1 | = "%s=%s\n"
    PUSH ESI                            ; 004fb8c6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004fb8c7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV EDX,0x1                         ; 004fb8cc
    ADD ESP,0x10                        ; 004fb8d1
    MOV dword ptr [ESP + 0x300],EDX     ; 004fb8d4
    TEST byte ptr [EBX + 0xc],0x10      ; 004fb8db
        ;   Label: LAB_004fb8db
    JNZ 0x004fb7fe                      ; 004fb8df
        ;   XREF to: 004fb7fe (CONDITIONAL_JUMP)  ; LAB_004fb7fe
    JMP 0x004fb7e3                      ; 004fb8e5
        ;   XREF to: 004fb7e3 (UNCONDITIONAL_JUMP)  ; LAB_004fb7e3
    MOV ECX,dword ptr [ESP + 0x324]     ; 004fb8ea
        ;   Label: LAB_004fb8ea
    PUSH ECX                            ; 004fb8f1
    MOV EDI,dword ptr [ESP + 0x324]     ; 004fb8f2
    PUSH EDI                            ; 004fb8f9
    PUSH 0x62fc43                       ; 004fb8fa | = "%s=%s\n"
    PUSH ESI                            ; 004fb8ff
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004fb900
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004fb905
    PUSH EBX                            ; 004fb908
    PUSH 0xff                           ; 004fb909
    LEA EAX,[ESP + 0x8]                 ; 004fb90e
    PUSH EAX                            ; 004fb912
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004fb913
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    MOV DH,byte ptr [EBX + 0xc]         ; 004fb918
    ADD ESP,0xc                         ; 004fb91b
    TEST DH,0x10                        ; 004fb91e
    JNZ 0x004fb837                      ; 004fb921
        ;   XREF to: 004fb837 (CONDITIONAL_JUMP)  ; LAB_004fb837
        ;   Label: LAB_004fb921
    PUSH EBX                            ; 004fb927
    PUSH 0xff                           ; 004fb928
    LEA EAX,[ESP + 0x8]                 ; 004fb92d
    PUSH EAX                            ; 004fb931
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004fb932
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004fb937
    TEST EAX,EAX                        ; 004fb93a
    JZ 0x004fb837                       ; 004fb93c
        ;   XREF to: 004fb837 (CONDITIONAL_JUMP)  ; LAB_004fb837
    MOV EAX,ESP                         ; 004fb942
    PUSH EAX                            ; 004fb944
    PUSH ESI                            ; 004fb945
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004fb946
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV CL,byte ptr [EBX + 0xc]         ; 004fb94b
    ADD ESP,0x8                         ; 004fb94e
    TEST CL,0x10                        ; 004fb951
    JMP 0x004fb921                      ; 004fb954
        ;   XREF to: 004fb921 (UNCONDITIONAL_JUMP)  ; LAB_004fb921

