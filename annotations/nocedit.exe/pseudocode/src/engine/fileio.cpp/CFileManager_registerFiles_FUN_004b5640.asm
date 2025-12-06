; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager * this_ptr, char * filename_list)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename_list
; Local Variables:
; undefined1       Stack[-0x580]:1  local_580
; undefined1       Stack[-0x47c]:1  local_47c
; undefined1       Stack[-0x37c]:1  local_37c
; undefined1       Stack[-0x27c]:1  local_27c
; undefined1       Stack[-0x17c]:1  local_17c
; undefined1       Stack[-0xb4]:1  local_b4
; undefined1       Stack[-0xb3]:1  local_b3
; undefined1       Stack[-0xb1]:1  local_b1
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x63]:1  local_63
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_fileio.cpp_CFileManager_load_FUN_004b6c00 at 004b6cab
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_00627633
;   TerminatedCString s_Too_many_files_get_Mark_00627648
;   TerminatedCString s_art_00627662
;   TerminatedCString s_art_00627666
;   TerminatedCString s_raw_0062766b
;   TerminatedCString s_raw_0062766f
;   TerminatedCString s_OPA_00627674
;   TerminatedCString s_s_is_not_the_same_size_a_00627678
;   TerminatedCString s_engine_fileio_cpp_00627696
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_strcmp_FUN_005fef20
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5640
        ;   Label: engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640
    PUSH ESI                            ; 004b5641
    PUSH EDI                            ; 004b5642
    PUSH EBP                            ; 004b5643
    SUB ESP,0x570                       ; 004b5644
    MOV ESI,dword ptr [ESP + 0x588]     ; 004b564a
    LEA EDI,[ESP + 0x51c]               ; 004b5651
    MOV DL,0x2c                         ; 004b5658
    PUSH EDI                            ; 004b565a
    MOV AL,byte ptr [ESI]               ; 004b565b
        ;   Label: LAB_004b565b
    MOV byte ptr [EDI],AL               ; 004b565d
    CMP AL,0x0                          ; 004b565f
    JZ 0x004b5673                       ; 004b5661 | LAB_004b5673
        ;   XREF to: 004b5673 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5663
    ADD ESI,0x2                         ; 004b5666
    MOV byte ptr [EDI + 0x1],AL         ; 004b5669
    ADD EDI,0x2                         ; 004b566c
    CMP AL,0x0                          ; 004b566f
    JNZ 0x004b565b                      ; 004b5671 | LAB_004b565b
        ;   XREF to: 004b565b (CONDITIONAL_JUMP)
    POP EDI                             ; 004b5673
        ;   Label: LAB_004b5673
    LEA ESI,[ESP + 0x51c]               ; 004b5674
    MOV AL,byte ptr [ESI]               ; 004b567b
        ;   Label: LAB_004b567b
    CMP AL,DL                           ; 004b567d
    JZ 0x004b5693                       ; 004b567f | LAB_004b5693
        ;   XREF to: 004b5693 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 004b5681
    JZ 0x004b5691                       ; 004b5683 | LAB_004b5691
        ;   XREF to: 004b5691 (CONDITIONAL_JUMP)
    INC ESI                             ; 004b5685
    MOV AL,byte ptr [ESI]               ; 004b5686
    CMP AL,DL                           ; 004b5688
    JZ 0x004b5693                       ; 004b568a | LAB_004b5693
        ;   XREF to: 004b5693 (CONDITIONAL_JUMP)
    INC ESI                             ; 004b568c
    CMP AL,0x0                          ; 004b568d
    JNZ 0x004b567b                      ; 004b568f | LAB_004b567b
        ;   XREF to: 004b567b (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 004b5691
        ;   Label: LAB_004b5691
    TEST ESI,ESI                        ; 004b5693
        ;   Label: LAB_004b5693
    JNZ 0x004b584a                      ; 004b5695 | LAB_004b584a
        ;   XREF to: 004b584a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x584]     ; 004b569b
        ;   Label: LAB_004b569b
    ADD EAX,0x8                         ; 004b56a2
    MOV dword ptr [ESP + 0x56c],EAX     ; 004b56a5
    MOV EBX,EAX                         ; 004b56ac
    MOV EAX,dword ptr [ESP + 0x584]     ; 004b56ae
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b56b5
    XOR EBP,EBP                         ; 004b56b8
    TEST EDX,EDX                        ; 004b56ba
    JLE 0x004b5742                      ; 004b56bc | LAB_004b5742
        ;   XREF to: 004b5742 (CONDITIONAL_JUMP)
    LEA EDI,[ESP + 0x4cc]               ; 004b56c2
        ;   Label: LAB_004b56c2
    MOV ESI,EBX                         ; 004b56c9
    MOV DL,0x2c                         ; 004b56cb
    PUSH EDI                            ; 004b56cd
    MOV AL,byte ptr [ESI]               ; 004b56ce
        ;   Label: LAB_004b56ce
    MOV byte ptr [EDI],AL               ; 004b56d0
    CMP AL,0x0                          ; 004b56d2
    JZ 0x004b56e6                       ; 004b56d4 | LAB_004b56e6
        ;   XREF to: 004b56e6 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b56d6
    ADD ESI,0x2                         ; 004b56d9
    MOV byte ptr [EDI + 0x1],AL         ; 004b56dc
    ADD EDI,0x2                         ; 004b56df
    CMP AL,0x0                          ; 004b56e2
    JNZ 0x004b56ce                      ; 004b56e4 | LAB_004b56ce
        ;   XREF to: 004b56ce (CONDITIONAL_JUMP)
    POP EDI                             ; 004b56e6
        ;   Label: LAB_004b56e6
    LEA ESI,[ESP + 0x4cc]               ; 004b56e7
    MOV AL,byte ptr [ESI]               ; 004b56ee
        ;   Label: LAB_004b56ee
    CMP AL,DL                           ; 004b56f0
    JZ 0x004b5706                       ; 004b56f2 | LAB_004b5706
        ;   XREF to: 004b5706 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 004b56f4
    JZ 0x004b5704                       ; 004b56f6 | LAB_004b5704
        ;   XREF to: 004b5704 (CONDITIONAL_JUMP)
    INC ESI                             ; 004b56f8
    MOV AL,byte ptr [ESI]               ; 004b56f9
    CMP AL,DL                           ; 004b56fb
    JZ 0x004b5706                       ; 004b56fd | LAB_004b5706
        ;   XREF to: 004b5706 (CONDITIONAL_JUMP)
    INC ESI                             ; 004b56ff
    CMP AL,0x0                          ; 004b5700
    JNZ 0x004b56ee                      ; 004b5702 | LAB_004b56ee
        ;   XREF to: 004b56ee (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 004b5704
        ;   Label: LAB_004b5704
    TEST ESI,ESI                        ; 004b5706
        ;   Label: LAB_004b5706
    JZ 0x004b570d                       ; 004b5708 | LAB_004b570d
        ;   XREF to: 004b570d (CONDITIONAL_JUMP)
    MOV byte ptr [ESI],0x0              ; 004b570a
    LEA EAX,[ESP + 0x4cc]               ; 004b570d
        ;   Label: LAB_004b570d
    PUSH EAX                            ; 004b5714
    LEA EAX,[ESP + 0x520]               ; 004b5715
    PUSH EAX                            ; 004b571c
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004b571d | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b5722
    TEST EAX,EAX                        ; 004b5725
    JZ 0x004b583f                       ; 004b5727 | LAB_004b583f
        ;   XREF to: 004b583f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x584]     ; 004b572d
    INC EBP                             ; 004b5734
    MOV ECX,dword ptr [EAX + 0x4]       ; 004b5735
    ADD EBX,0x80                        ; 004b5738
    CMP EBP,ECX                         ; 004b573e
    JL 0x004b56c2                       ; 004b5740 | LAB_004b56c2
        ;   XREF to: 004b56c2 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x584]     ; 004b5742
        ;   Label: LAB_004b5742
    MOV EDI,dword ptr [EDI + 0x4]       ; 004b5749
    MOV EBX,dword ptr [ESP + 0x56c]     ; 004b574c
    SHL EDI,0x7                         ; 004b5753
    MOV ESI,dword ptr [ESP + 0x588]     ; 004b5756
    ADD EDI,EBX                         ; 004b575d
    PUSH EDI                            ; 004b575f
    MOV AL,byte ptr [ESI]               ; 004b5760
        ;   Label: LAB_004b5760
    MOV byte ptr [EDI],AL               ; 004b5762
    CMP AL,0x0                          ; 004b5764
    JZ 0x004b5778                       ; 004b5766 | LAB_004b5778
        ;   XREF to: 004b5778 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004b5768
    ADD ESI,0x2                         ; 004b576b
    MOV byte ptr [EDI + 0x1],AL         ; 004b576e
    ADD EDI,0x2                         ; 004b5771
    CMP AL,0x0                          ; 004b5774
    JNZ 0x004b5760                      ; 004b5776 | LAB_004b5760
        ;   XREF to: 004b5760 (CONDITIONAL_JUMP)
    POP EDI                             ; 004b5778
        ;   Label: LAB_004b5778
    MOV EAX,dword ptr [ESP + 0x584]     ; 004b5779
    MOV ESI,dword ptr [EAX + 0x4]       ; 004b5780
    INC ESI                             ; 004b5783
    MOV dword ptr [EAX + 0x4],ESI       ; 004b5784
    CMP ESI,0x2710                      ; 004b5787
    JL 0x004b57b1                       ; 004b578d | LAB_004b57b1
        ;   XREF to: 004b57b1 (CONDITIONAL_JUMP)
    MOV EBP,0x627633                    ; 004b578f | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00627633 = ..\engine\fileio.cpp
    MOV EAX,0x767                       ; 004b5794
    PUSH 0x627648                       ; 004b5799 | = "Too many files - get Mark" | s_Too_many_files_get_Mark_00627648 = Too many files - get Mark
    MOV dword ptr [0x02f0ca48],EBP      ; 004b579e | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004b57a4 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b57a9 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b57ae
    LEA EAX,[ESP + 0x204]               ; 004b57b1
        ;   Label: LAB_004b57b1
    PUSH EAX                            ; 004b57b8
    LEA EAX,[ESP + 0x308]               ; 004b57b9
    PUSH EAX                            ; 004b57c0
    LEA EAX,[ESP + 0x10c]               ; 004b57c1
    PUSH EAX                            ; 004b57c8
    PUSH 0x0                            ; 004b57c9
    LEA EAX,[ESP + 0x52c]               ; 004b57cb
    PUSH EAX                            ; 004b57d2
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004b57d3 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b57d8
    PUSH 0x627662                       ; 004b57db | = "art" | s_art_00627662 = art
    LEA EAX,[ESP + 0x108]               ; 004b57e0
    PUSH EAX                            ; 004b57e7
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b57e8 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b57ed
    TEST EAX,EAX                        ; 004b57f0
    JZ 0x004b580d                       ; 004b57f2 | LAB_004b580d
        ;   XREF to: 004b580d (CONDITIONAL_JUMP)
    PUSH 0x627666                       ; 004b57f4 | = "art\\" | s_art_00627666 = art\
    LEA EAX,[ESP + 0x108]               ; 004b57f9
    PUSH EAX                            ; 004b5800
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b5801 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b5806
    TEST EAX,EAX                        ; 004b5809
    JNZ 0x004b583f                      ; 004b580b | LAB_004b583f
        ;   XREF to: 004b583f (CONDITIONAL_JUMP)
    PUSH 0x62766b                       ; 004b580d | = "raw" | s_raw_0062766b = raw
        ;   Label: LAB_004b580d
    LEA EAX,[ESP + 0x208]               ; 004b5812
    PUSH EAX                            ; 004b5819
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b581a | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b581f
    TEST EAX,EAX                        ; 004b5822
    JZ 0x004b5852                       ; 004b5824 | LAB_004b5852
        ;   XREF to: 004b5852 (CONDITIONAL_JUMP)
    PUSH 0x62766f                       ; 004b5826 | = ".raw" | s_raw_0062766f = .raw
    LEA EAX,[ESP + 0x208]               ; 004b582b
    PUSH EAX                            ; 004b5832
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004b5833 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b5838
    TEST EAX,EAX                        ; 004b583b
    JZ 0x004b5852                       ; 004b583d | LAB_004b5852
        ;   XREF to: 004b5852 (CONDITIONAL_JUMP)
    ADD ESP,0x570                       ; 004b583f
        ;   Label: LAB_004b583f
    POP EBP                             ; 004b5845
    POP EDI                             ; 004b5846
    POP ESI                             ; 004b5847
    POP EBX                             ; 004b5848
    RET                                 ; 004b5849
    MOV byte ptr [ESI],0x0              ; 004b584a
        ;   Label: LAB_004b584a
    JMP 0x004b569b                      ; 004b584d | LAB_004b569b
        ;   XREF to: 004b569b (UNCONDITIONAL_JUMP)
    PUSH 0x627674                       ; 004b5852 | = "OPA" | s_OPA_00627674 = OPA
        ;   Label: LAB_004b5852
    LEA EAX,[ESP + 0x308]               ; 004b5857
    PUSH EAX                            ; 004b585e
    LEA EAX,[ESP + 0x10c]               ; 004b585f
    PUSH EAX                            ; 004b5866
    PUSH 0x0                            ; 004b5867
    LEA EAX,[ESP + 0x10]                ; 004b5869
    PUSH EAX                            ; 004b586d
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b586e | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004b5873
    MOV EAX,ESP                         ; 004b5876
    PUSH EAX                            ; 004b5878
    PUSH 0x0                            ; 004b5879
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 004b587b | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 004b5880
    ADD ESP,0x8                         ; 004b5882
    TEST EAX,EAX                        ; 004b5885
    JL 0x004b583f                       ; 004b5887 | LAB_004b583f
        ;   XREF to: 004b583f (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x51c]               ; 004b5889
    PUSH EAX                            ; 004b5890
    PUSH 0x0                            ; 004b5891
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 004b5893 | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b5898
    CMP EBX,EAX                         ; 004b589b
    JZ 0x004b58e7                       ; 004b589d | LAB_004b58e7
        ;   XREF to: 004b58e7 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x51c]               ; 004b589f
    PUSH EAX                            ; 004b58a6
    LEA EAX,[ESP + 0x4]                 ; 004b58a7
    PUSH EAX                            ; 004b58ab
    PUSH 0x627678                       ; 004b58ac | = "%s is not the same size as %s" | s_s_is_not_the_same_size_a_00627678 = %s is not the same size as %s
    LEA EAX,[ESP + 0x410]               ; 004b58b1
    PUSH EAX                            ; 004b58b8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b58b9 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EDX,0x627696                    ; 004b58be | = "..\\engine\\fileio.cpp" | s_engine_fileio_cpp_00627696 = ..\engine\fileio.cpp
    ADD ESP,0x10                        ; 004b58c3
    LEA EAX,[ESP + 0x404]               ; 004b58c6
    MOV ECX,0x786                       ; 004b58cd
    PUSH EAX                            ; 004b58d2
    MOV dword ptr [0x02f0ca48],EDX      ; 004b58d3 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b58d9 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b58df | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b58e4
    MOV EAX,ESP                         ; 004b58e7
        ;   Label: LAB_004b58e7
    PUSH EAX                            ; 004b58e9
    MOV EBX,dword ptr [ESP + 0x588]     ; 004b58ea
    PUSH EBX                            ; 004b58f1
    CALL engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640 ; 004b58f2 | void engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640(CFileManager * this_ptr, char * filename_list)
        ;   XREF to: 004b5640 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b58f7
    ADD ESP,0x570                       ; 004b58fa
    POP EBP                             ; 004b5900
    POP EDI                             ; 004b5901
    POP ESI                             ; 004b5902
    POP EBX                             ; 004b5903
    RET                                 ; 004b5904

