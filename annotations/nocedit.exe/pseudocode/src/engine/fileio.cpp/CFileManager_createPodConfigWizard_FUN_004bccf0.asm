; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl engine_fileio_cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager *this_ptr)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x4d0]:1  local_4d0
; undefined1       Stack[-0x128]:1  local_128
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[5]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005073af
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004baf13
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004ba760
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b86ee
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc2c7
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_0062924a
;   TerminatedCString s_rt_0062925f
;   TerminatedCString s_pod_ini_00629262
;   TerminatedCString s_engine_fileio_cpp_0062926a
;   TerminatedCString s_Create_a_POD_INI_file_no_0062927f
;   TerminatedCString s_Create_a_POD_INI_file_no_006292b0
;   TerminatedCString s_Oops_forget_about_it_006292e0
;   TerminatedCString s_You_do_not_have_a_POD_IN_006292f8
;   TerminatedCString s_pod_00629356
;
; Called Functions:
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
;   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bccf0
        ;   Label: engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
    SUB ESP,0x4cc                       ; 004bccf1
    PUSH 0x1076                         ; 004bccf7
    PUSH 0x62924a                       ; 004bccfc | = "..\\engine\\fileio.cpp"
    PUSH 0x62925f                       ; 004bcd01 | = "rt"
    PUSH 0x0                            ; 004bcd06
    PUSH 0x629262                       ; 004bcd08 | = "pod.ini"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004bcd0d
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 004bcd12
    TEST EAX,EAX                        ; 004bcd15
    JNZ 0x004bce5a                      ; 004bcd17
        ;   XREF to: 004bce5a (CONDITIONAL_JUMP)  ; LAB_004bce5a
    MOV EAX,ESP                         ; 004bcd1d
    PUSH EAX                            ; 004bcd1f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004bcd20
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004bcd25
    PUSH 0x62927f                       ; 004bcd28 | = "Create a POD.INI file now with all po..."
    LEA EAX,[ESP + 0x4]                 ; 004bcd2d
    PUSH EAX                            ; 004bcd31
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bcd32
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bcd37
    PUSH 0x6292b0                       ; 004bcd3a | = "Create a POD.INI file now with no pod..."
    LEA EAX,[ESP + 0x4]                 ; 004bcd3f
    PUSH EAX                            ; 004bcd43
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bcd44
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bcd49
    PUSH 0x6292e0                       ; 004bcd4c | = "Oops - forget about it."
    LEA EAX,[ESP + 0x4]                 ; 004bcd51
    PUSH EAX                            ; 004bcd55
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bcd56
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bcd5b
    PUSH 0x0                            ; 004bcd5e
    PUSH -0x1                           ; 004bcd60
    PUSH 0x6292f8                       ; 004bcd62 | = "You do not have a POD.INI file.\nThe ..."
    LEA EAX,[ESP + 0xc]                 ; 004bcd67
    PUSH EAX                            ; 004bcd6b
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004bcd6c
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    MOV EBX,EAX                         ; 004bcd71
    ADD ESP,0x10                        ; 004bcd73
    TEST EAX,EAX                        ; 004bcd76
    JL 0x004bce7c                       ; 004bcd78
        ;   XREF to: 004bce7c (CONDITIONAL_JUMP)  ; LAB_004bce7c
    CMP EAX,0x2                         ; 004bcd7e
    JGE 0x004bce7c                      ; 004bcd81
        ;   XREF to: 004bce7c (CONDITIONAL_JUMP)  ; LAB_004bce7c
    LEA EAX,[ESP + 0x4bc]               ; 004bcd87
    PUSH EAX                            ; 004bcd8e
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004bcd8f
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004bcd94
    TEST EBX,EBX                        ; 004bcd97
    JNZ 0x004bce12                      ; 004bcd99
        ;   XREF to: 004bce12 (CONDITIONAL_JUMP)  ; LAB_004bce12
    LEA EAX,[ESP + 0x3a8]               ; 004bcd9f
    PUSH EAX                            ; 004bcda6
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 004bcda7
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004bcdac
    PUSH 0x629356                       ; 004bcdaf | = "*.pod"
    LEA EAX,[ESP + 0x3ac]               ; 004bcdb4
    PUSH EAX                            ; 004bcdbb
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 004bcdbc
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 004bcdc1
    CMP byte ptr [ESP + 0x3a8],0x0      ; 004bcdc4
    JZ 0x004bce00                       ; 004bcdcc
        ;   XREF to: 004bce00 (CONDITIONAL_JUMP)  ; LAB_004bce00
    LEA EAX,[ESP + 0x3a8]               ; 004bcdce
        ;   Label: LAB_004bcdce
    PUSH EAX                            ; 004bcdd5
    LEA EAX,[ESP + 0x4c0]               ; 004bcdd6
    PUSH EAX                            ; 004bcddd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bcdde
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bcde3
    LEA EAX,[ESP + 0x3a8]               ; 004bcde6
    PUSH EAX                            ; 004bcded
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 004bcdee
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004bcdf3
    CMP byte ptr [ESP + 0x3a8],0x0      ; 004bcdf6
    JNZ 0x004bcdce                      ; 004bcdfe
        ;   XREF to: 004bcdce (CONDITIONAL_JUMP)  ; LAB_004bcdce
    PUSH 0x0                            ; 004bce00
        ;   Label: LAB_004bce00
    LEA EAX,[ESP + 0x3ac]               ; 004bce02
    PUSH EAX                            ; 004bce09
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 004bce0a
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004bce0f
    LEA EAX,[ESP + 0x4bc]               ; 004bce12
        ;   Label: LAB_004bce12
    PUSH EAX                            ; 004bce19
    MOV EDX,dword ptr [ESP + 0x4d8]     ; 004bce1a
    PUSH EDX                            ; 004bce21
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004bce22
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004bce27
    PUSH 0x0                            ; 004bce2a
    LEA EAX,[ESP + 0x4c0]               ; 004bce2c
    PUSH EAX                            ; 004bce33
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bce34
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint d1, uint d2)
    ADD ESP,0x8                         ; 004bce39
    PUSH 0x0                            ; 004bce3c
    LEA EAX,[ESP + 0x4]                 ; 004bce3e
    PUSH EAX                            ; 004bce42
    MOV EBX,0x1                         ; 004bce43
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bce48
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004bce4d
    MOV EAX,EBX                         ; 004bce50
    ADD ESP,0x4cc                       ; 004bce52
    POP EBX                             ; 004bce58
    RET                                 ; 004bce59
    PUSH 0x1078                         ; 004bce5a
        ;   Label: LAB_004bce5a
    PUSH 0x62926a                       ; 004bce5f | = "..\\engine\\fileio.cpp"
    PUSH EAX                            ; 004bce64
    MOV EBX,0x1                         ; 004bce65
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bce6a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bce6f
    MOV EAX,EBX                         ; 004bce72
    ADD ESP,0x4cc                       ; 004bce74
    POP EBX                             ; 004bce7a
    RET                                 ; 004bce7b
    XOR EBX,EBX                         ; 004bce7c
        ;   Label: LAB_004bce7c
    PUSH EBX                            ; 004bce7e
    LEA EAX,[ESP + 0x4]                 ; 004bce7f
    PUSH EAX                            ; 004bce83
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bce84
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 004bce89
    MOV EAX,EBX                         ; 004bce8c
    ADD ESP,0x4cc                       ; 004bce8e
    POP EBX                             ; 004bce94
    RET                                 ; 004bce95

