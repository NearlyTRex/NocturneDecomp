; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 (CStrList *this_ptr,char *directory_path,char *file_pattern)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   directory_path
; char *           Stack[0xc]:4   file_pattern
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined1       Stack[-0x528]:1  local_528
; undefined1       Stack[-0x414]:1  local_414
; undefined1       Stack[-0x310]:1  local_310
; undefined1       Stack[-0x30f]:1  local_30f
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[4]:
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 at 005b2d2f
;   core_sound.cpp_populateSoundFiles_FUN_005b17a0 at 005b17af
;   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 at 004bcef3
;   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 at 005ad705
;
; Referenced Globals:
;   TerminatedCString s_s_s_006239e5
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
;   engine_pod.cpp_CPod_initSearch_FUN_00550ea0
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_findString_FUN_004a3030
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a37b0
        ;   Label: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
    PUSH ESI                            ; 004a37b1
    PUSH EDI                            ; 004a37b2
    PUSH EBP                            ; 004a37b3
    SUB ESP,0x834                       ; 004a37b4
    MOV EBP,dword ptr [ESP + 0x848]     ; 004a37ba
    MOV EDI,dword ptr [ESP + 0x84c]     ; 004a37c1
    MOV ESI,dword ptr [ESP + 0x850]     ; 004a37c8
    TEST EDI,EDI                        ; 004a37cf
    JZ 0x004a397c                       ; 004a37d1
        ;   XREF to: 004a397c (CONDITIONAL_JUMP)  ; LAB_004a397c
    CMP byte ptr [EDI],0x0              ; 004a37d7
    JZ 0x004a397c                       ; 004a37da
        ;   XREF to: 004a397c (CONDITIONAL_JUMP)  ; LAB_004a397c
    PUSH ESI                            ; 004a37e0
    PUSH EDI                            ; 004a37e1
    PUSH 0x6239e5                       ; 004a37e2 | = "%s\\%s"
    LEA EAX,[ESP + 0x740]               ; 004a37e7
    PUSH EAX                            ; 004a37ee
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004a37ef
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a37f4
    MOV EDX,dword ptr [0x00680cdc]      ; 004a37f7 | g_CDemonPodInstance | g_CDemonPodPtr
        ;   Label: LAB_004a37f7
    TEST EDX,EDX                        ; 004a37fd
    JZ 0x004a38d1                       ; 004a37ff
        ;   XREF to: 004a38d1 (CONDITIONAL_JUMP)  ; LAB_004a38d1
    MOV EAX,ESP                         ; 004a3805
    PUSH EAX                            ; 004a3807
    LEA EAX,[ESP + 0x738]               ; 004a3808
    PUSH EAX                            ; 004a380f
    PUSH EDX                            ; 004a3810 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_initSearch_FUN_00550ea0 ; 004a3811
        ;   XREF to: 00550ea0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_initSearch_FUN_00550ea0(CPod * this_ptr, char * search_pattern, CPodSearchContext * search_context)
    ADD ESP,0xc                         ; 004a3816
    CMP byte ptr [ESP],0x0              ; 004a3819
    JZ 0x004a38d1                       ; 004a381d
        ;   XREF to: 004a38d1 (CONDITIONAL_JUMP)  ; LAB_004a38d1
    LEA EAX,[ESP + 0x534]               ; 004a3823
        ;   Label: LAB_004a3823
    PUSH EAX                            ; 004a382a
    LEA EAX,[ESP + 0x638]               ; 004a382b
    PUSH EAX                            ; 004a3832
    PUSH 0x0                            ; 004a3833
    PUSH 0x0                            ; 004a3835
    LEA EAX,[ESP + 0x10]                ; 004a3837
    PUSH EAX                            ; 004a383b
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004a383c
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3841
    CMP byte ptr [ESP + 0x534],0x2e     ; 004a3844
    JNZ 0x004a3878                      ; 004a384c
        ;   XREF to: 004a3878 (CONDITIONAL_JUMP)  ; LAB_004a3878
    LEA EDI,[ESP + 0x534]               ; 004a384e
    SUB ECX,ECX                         ; 004a3855
    DEC ECX                             ; 004a3857
    XOR EAX,EAX                         ; 004a3858
    SCASB.REPNE ES:EDI                  ; 004a385a
    NOT ECX                             ; 004a385c
    DEC ECX                             ; 004a385e
    PUSH ECX                            ; 004a385f
    LEA EAX,[ESP + 0x539]               ; 004a3860
    PUSH EAX                            ; 004a3867
    LEA EAX,[ESP + 0x53c]               ; 004a3868
    PUSH EAX                            ; 004a386f
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004a3870
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a3875
    LEA EAX,[ESP + 0x534]               ; 004a3878
        ;   Label: LAB_004a3878
    PUSH EAX                            ; 004a387f
    LEA EAX,[ESP + 0x638]               ; 004a3880
    PUSH EAX                            ; 004a3887
    PUSH 0x0                            ; 004a3888
    PUSH 0x0                            ; 004a388a
    LEA EAX,[ESP + 0x440]               ; 004a388c
    PUSH EAX                            ; 004a3893
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004a3894
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3899
    LEA EAX,[ESP + 0x430]               ; 004a389c
    PUSH EAX                            ; 004a38a3
    PUSH EBP                            ; 004a38a4
    CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030 ; 004a38a5
        ;   XREF to: 004a3030 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_findString_FUN_004a3030(CStrList * this_ptr, char * search_string)
    ADD ESP,0x8                         ; 004a38aa
    TEST EAX,EAX                        ; 004a38ad
    JL 0x004a39a2                       ; 004a38af
        ;   XREF to: 004a39a2 (CONDITIONAL_JUMP)  ; LAB_004a39a2
    MOV EAX,ESP                         ; 004a38b5
        ;   Label: LAB_004a38b5
    PUSH EAX                            ; 004a38b7
    MOV EBX,dword ptr [0x00680cdc]      ; 004a38b8 | g_CDemonPodInstance | g_CDemonPodPtr
    PUSH EBX                            ; 004a38be | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0 ; 004a38bf
        ;   XREF to: 00550ef0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0(CPod * this_ptr, CPodSearchContext * search_context)
    ADD ESP,0x8                         ; 004a38c4
    CMP byte ptr [ESP],0x0              ; 004a38c7
    JNZ 0x004a3823                      ; 004a38cb
        ;   XREF to: 004a3823 (CONDITIONAL_JUMP)  ; LAB_004a3823
    LEA EAX,[ESP + 0x31c]               ; 004a38d1
        ;   Label: LAB_004a38d1
    PUSH EAX                            ; 004a38d8
    MOV ESI,dword ptr [EBP]             ; 004a38d9
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 004a38dc
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a38e1
    LEA EAX,[ESP + 0x734]               ; 004a38e4
    PUSH EAX                            ; 004a38eb
    LEA EAX,[ESP + 0x320]               ; 004a38ec
    PUSH EAX                            ; 004a38f3
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 004a38f4
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 004a38f9
    CMP byte ptr [ESP + 0x31c],0x0      ; 004a38fc
    JZ 0x004a394f                       ; 004a3904
        ;   XREF to: 004a394f (CONDITIONAL_JUMP)  ; LAB_004a394f
    XOR EBX,EBX                         ; 004a3906
        ;   Label: LAB_004a3906
    XOR EDI,EDI                         ; 004a3908
    TEST ESI,ESI                        ; 004a390a
    JLE 0x004a39c1                      ; 004a390c
        ;   XREF to: 004a39c1 (CONDITIONAL_JUMP)  ; LAB_004a39c1
    LEA EAX,[ESP + 0x31c]               ; 004a3912
        ;   Label: LAB_004a3912
    PUSH EAX                            ; 004a3919
    PUSH EBX                            ; 004a391a
    PUSH EBP                            ; 004a391b
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a391c
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004a3921
    PUSH EAX                            ; 004a3924
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004a3925
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a392a
    TEST EAX,EAX                        ; 004a392d
    JNZ 0x004a39b8                      ; 004a392f
        ;   XREF to: 004a39b8 (CONDITIONAL_JUMP)  ; LAB_004a39b8
    LEA EAX,[ESP + 0x31c]               ; 004a3935
        ;   Label: LAB_004a3935
    PUSH EAX                            ; 004a393c
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 004a393d
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a3942
    CMP byte ptr [ESP + 0x31c],0x0      ; 004a3945
    JNZ 0x004a3906                      ; 004a394d
        ;   XREF to: 004a3906 (CONDITIONAL_JUMP)  ; LAB_004a3906
    LEA EAX,[ESP + 0x31c]               ; 004a394f
        ;   Label: LAB_004a394f
    PUSH EAX                            ; 004a3956
    CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70 ; 004a3957
        ;   XREF to: 00481d70 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a395c
    PUSH 0x0                            ; 004a395f
    LEA EAX,[ESP + 0x320]               ; 004a3961
    PUSH EAX                            ; 004a3968
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 004a3969
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004a396e
    ADD ESP,0x834                       ; 004a3971
    POP EBP                             ; 004a3977
    POP EDI                             ; 004a3978
    POP ESI                             ; 004a3979
    POP EBX                             ; 004a397a
    RET                                 ; 004a397b
    LEA EDI,[ESP + 0x734]               ; 004a397c
        ;   Label: LAB_004a397c
    PUSH EDI                            ; 004a3983
    MOV AL,byte ptr [ESI]               ; 004a3984
        ;   Label: LAB_004a3984
    MOV byte ptr [EDI],AL               ; 004a3986
    CMP AL,0x0                          ; 004a3988
    JZ 0x004a399c                       ; 004a398a
        ;   XREF to: 004a399c (CONDITIONAL_JUMP)  ; LAB_004a399c
    MOV AL,byte ptr [ESI + 0x1]         ; 004a398c
    ADD ESI,0x2                         ; 004a398f
    MOV byte ptr [EDI + 0x1],AL         ; 004a3992
    ADD EDI,0x2                         ; 004a3995
    CMP AL,0x0                          ; 004a3998
    JNZ 0x004a3984                      ; 004a399a
        ;   XREF to: 004a3984 (CONDITIONAL_JUMP)  ; LAB_004a3984
    POP EDI                             ; 004a399c
        ;   Label: LAB_004a399c
    JMP 0x004a37f7                      ; 004a399d
        ;   XREF to: 004a37f7 (UNCONDITIONAL_JUMP)  ; LAB_004a37f7
    LEA EAX,[ESP + 0x430]               ; 004a39a2
        ;   Label: LAB_004a39a2
    PUSH EAX                            ; 004a39a9
    PUSH EBP                            ; 004a39aa
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004a39ab
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a39b0
    JMP 0x004a38b5                      ; 004a39b3
        ;   XREF to: 004a38b5 (UNCONDITIONAL_JUMP)  ; LAB_004a38b5
    INC EBX                             ; 004a39b8
        ;   Label: LAB_004a39b8
    CMP EBX,ESI                         ; 004a39b9
    JL 0x004a3912                       ; 004a39bb
        ;   XREF to: 004a3912 (CONDITIONAL_JUMP)  ; LAB_004a3912
    TEST EDI,EDI                        ; 004a39c1
        ;   Label: LAB_004a39c1
    JNZ 0x004a3935                      ; 004a39c3
        ;   XREF to: 004a3935 (CONDITIONAL_JUMP)  ; LAB_004a3935
    LEA EAX,[ESP + 0x31c]               ; 004a39c9
    PUSH EAX                            ; 004a39d0
    PUSH EBP                            ; 004a39d1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004a39d2
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004a39d7
    JMP 0x004a3935                      ; 004a39da
        ;   XREF to: 004a3935 (UNCONDITIONAL_JUMP)  ; LAB_004a3935

