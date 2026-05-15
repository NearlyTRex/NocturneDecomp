; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740(CFileManager *this_ptr,CCheckOutItem *checkout_item,_FILE *optional_pod_file)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; CCheckOutItem *  Stack[0x8]:4   checkout_item
; _FILE *          Stack[0xc]:4   optional_pod_file
; Local Variables:
; CCheckOutItem    Stack[-0x4a8]:360  local_4a8
; char[8]          Stack[-0x340]:8  local_340
; char[252]        Stack[-0x338]:252  acStack_338
; char[260]        Stack[-0x23c]:260  local_23c
; char[264]        Stack[-0x138]:264  local_138
; undefined1[8]    Stack[-0x30]:8  auStack_30
; CCheckOutList    Stack[-0x28]:8  local_28
; CStrList_vtable * Stack[-0x20]:4  local_20
; CCheckOutItem *  Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; char[4]          Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   SLEEP_FUNC* g_SleepFunc = 00212228
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_engine_fileio_cpp_00626060
;   TerminatedCString s_versionControlDirectory__00626075
;   TerminatedCString s_checkout_txt_00626096
;   undefined4 s_heckout.txt_00626097
;   undefined4 s_eckout.txt_00626098
;   undefined4 s_ckout.txt_00626099
;   TerminatedCString s_engine_fileio_cpp_00626129
;   TerminatedCString s_A_writable_copy_of_s_exi_0062654c
;   TerminatedCString s_You_already_have_s_check_00626884
;   TerminatedCString s_s_is_currently_checked_o_006268a4
;   TerminatedCString s_Logging_on_as_version_co_006268c6
;   TerminatedCString s_Marking_s_as_checked_out_006268ec
;   TerminatedCString s_r_t_00626909
;   ... and 25 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_errno.c__errno_FUN_00601450
;   crt_stdio.c_setvbuf_FUN_00601490
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.cpp_getFileSizeWithFinder_FUN_00481960
;   engine_dosio.cpp_makePath_FUN_00481f50
;   engine_dosio.cpp_setFileAttributes_FUN_004819f0
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
;   engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
;   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
;   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba740
        ;   Label: engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740
    PUSH ESI                            ; 004ba741
    PUSH EDI                            ; 004ba742
    PUSH EBP                            ; 004ba743
    SUB ESP,0x68c                       ; 004ba744
    MOV EBX,dword ptr [ESP + 0x6a4]     ; 004ba74a
    MOV EBP,dword ptr [ESP + 0x6a8]     ; 004ba751
    MOV EDX,dword ptr [ESP + 0x6a0]     ; 004ba758
    PUSH EDX                            ; 004ba75f
    CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 ; 004ba760
        ;   XREF to: 004bccf0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004ba765
    TEST EAX,EAX                        ; 004ba768
    JNZ 0x004ba77b                      ; 004ba76a
        ;   XREF to: 004ba77b (CONDITIONAL_JUMP)  ; LAB_004ba77b
    XOR EBP,EBP                         ; 004ba76c
        ;   Label: LAB_004ba76c
    MOV EAX,EBP                         ; 004ba76e
    ADD ESP,0x68c                       ; 004ba770
    POP EBP                             ; 004ba776
    POP EDI                             ; 004ba777
    POP ESI                             ; 004ba778
    POP EBX                             ; 004ba779
    RET                                 ; 004ba77a
    CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 ; 004ba77b
        ;   XREF to: 004b1c00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00()
        ;   Label: LAB_004ba77b
    TEST EAX,EAX                        ; 004ba780
    JZ 0x004ba76c                       ; 004ba782
        ;   XREF to: 004ba76c (CONDITIONAL_JUMP)  ; LAB_004ba76c
    TEST EBP,EBP                        ; 004ba784
    JZ 0x004ba7da                       ; 004ba786
        ;   XREF to: 004ba7da (CONDITIONAL_JUMP)  ; LAB_004ba7da
    LEA EDI,[ESP + 0x35c]               ; 004ba788
    MOV ESI,EBP                         ; 004ba78f
    PUSH EDI                            ; 004ba791
    MOV AL,byte ptr [ESI]               ; 004ba792
        ;   Label: LAB_004ba792
    MOV byte ptr [EDI],AL               ; 004ba794
    CMP AL,0x0                          ; 004ba796
    JZ 0x004ba7aa                       ; 004ba798
        ;   XREF to: 004ba7aa (CONDITIONAL_JUMP)  ; LAB_004ba7aa
    MOV AL,byte ptr [ESI + 0x1]         ; 004ba79a
    ADD ESI,0x2                         ; 004ba79d
    MOV byte ptr [EDI + 0x1],AL         ; 004ba7a0
    ADD EDI,0x2                         ; 004ba7a3
    CMP AL,0x0                          ; 004ba7a6
    JNZ 0x004ba792                      ; 004ba7a8
        ;   XREF to: 004ba792 (CONDITIONAL_JUMP)  ; LAB_004ba792
    POP EDI                             ; 004ba7aa
        ;   Label: LAB_004ba7aa
    LEA EBP,[ESP + 0x35c]               ; 004ba7ab
        ;   Label: LAB_004ba7ab
    XOR ECX,ECX                         ; 004ba7b2
    MOV dword ptr [ESP + 0x680],EBX     ; 004ba7b4
    MOV dword ptr [ESP + 0x67c],ECX     ; 004ba7bb
    CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 ; 004ba7c2
        ;   XREF to: 004b1c00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00()
    TEST EAX,EAX                        ; 004ba7c7
    JNZ 0x004ba801                      ; 004ba7c9
        ;   XREF to: 004ba801 (CONDITIONAL_JUMP)  ; LAB_004ba801
    XOR EBP,EBP                         ; 004ba7cb
    MOV EAX,EBP                         ; 004ba7cd
    ADD ESP,0x68c                       ; 004ba7cf
    POP EBP                             ; 004ba7d5
    POP EDI                             ; 004ba7d6
    POP ESI                             ; 004ba7d7
    POP EBX                             ; 004ba7d8
    RET                                 ; 004ba7d9
    LEA EAX,[ESP + 0x35c]               ; 004ba7da
        ;   Label: LAB_004ba7da
    PUSH EAX                            ; 004ba7e1
    PUSH 0x628db7                       ; 004ba7e2 | = "*.pod"
    PUSH EBX                            ; 004ba7e7
    CALL engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 ; 004ba7e8
        ;   XREF to: 004b5030 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030(CCheckOutItem * this_ptr, char * file_pattern, char * output_filename_buffer)
    ADD ESP,0xc                         ; 004ba7ed
    TEST EAX,EAX                        ; 004ba7f0
    JNZ 0x004ba7ab                      ; 004ba7f2
        ;   XREF to: 004ba7ab (CONDITIONAL_JUMP)  ; LAB_004ba7ab
    MOV EAX,EBP                         ; 004ba7f4
    ADD ESP,0x68c                       ; 004ba7f6
    POP EBP                             ; 004ba7fc
    POP EDI                             ; 004ba7fd
    POP ESI                             ; 004ba7fe
    POP EBX                             ; 004ba7ff
    RET                                 ; 004ba800
    LEA EAX,[ESP + 0x674]               ; 004ba801
        ;   Label: LAB_004ba801
    XOR EBX,EBX                         ; 004ba808
    PUSH EAX                            ; 004ba80a
    MOV dword ptr [ESP + 0x678],EBX     ; 004ba80b
    MOV dword ptr [ESP + 0x67c],EBX     ; 004ba812
    CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 ; 004ba819
        ;   XREF to: 004b2890 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004ba81e
    TEST EAX,EAX                        ; 004ba821
    JZ 0x004ba895                       ; 004ba823
        ;   XREF to: 004ba895 (CONDITIONAL_JUMP)  ; LAB_004ba895
    LEA EAX,[ESP + 0x35c]               ; 004ba825
    PUSH EAX                            ; 004ba82c
    LEA EAX,[ESP + 0x678]               ; 004ba82d
    PUSH EAX                            ; 004ba834
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004ba835
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ba83a
    TEST EAX,EAX                        ; 004ba83d
    JL 0x004ba8d2                       ; 004ba83f
        ;   XREF to: 004ba8d2 (CONDITIONAL_JUMP)  ; LAB_004ba8d2
    MOV EBX,EAX                         ; 004ba845
    SHL EAX,0x2                         ; 004ba847
    SUB EAX,EBX                         ; 004ba84a
    SHL EAX,0x3                         ; 004ba84c
    MOV ESI,EAX                         ; 004ba84f
    SHL ESI,0x4                         ; 004ba851
    SUB ESI,EAX                         ; 004ba854
    MOV EAX,dword ptr [ESP + 0x678]     ; 004ba856
    ADD EAX,ESI                         ; 004ba85d
    PUSH 0x2d12bd0                      ; 004ba85f | g_VersionControlSession
    ADD EAX,0x104                       ; 004ba864
    PUSH EAX                            ; 004ba869
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004ba86a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ba86f
    MOV EBX,EAX                         ; 004ba872
    MOV EAX,dword ptr [ESP + 0x678]     ; 004ba874
    ADD EAX,ESI                         ; 004ba87b
    TEST EBX,EBX                        ; 004ba87d
    JNZ 0x004ba8b4                      ; 004ba87f
        ;   XREF to: 004ba8b4 (CONDITIONAL_JUMP)  ; LAB_004ba8b4
    PUSH EAX                            ; 004ba881
    PUSH 0x626884                       ; 004ba882 | = "You already have %s checked out"
    MOV EAX,[0x00678a60]                ; 004ba887 | g_CEditorToolsPtr
    PUSH EAX                            ; 004ba88c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004ba88d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004ba892
    LEA EAX,[ESP + 0x674]               ; 004ba895
        ;   Label: LAB_004ba895
    PUSH EAX                            ; 004ba89c
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004ba89d
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004ba8a2
    XOR EBP,EBP                         ; 004ba8a5
    MOV EAX,EBP                         ; 004ba8a7
    ADD ESP,0x68c                       ; 004ba8a9
    POP EBP                             ; 004ba8af
    POP EDI                             ; 004ba8b0
    POP ESI                             ; 004ba8b1
    POP EBX                             ; 004ba8b2
    RET                                 ; 004ba8b3
    LEA EBX,[EAX + 0x104]               ; 004ba8b4
        ;   Label: LAB_004ba8b4
    PUSH EBX                            ; 004ba8ba
    PUSH EAX                            ; 004ba8bb
    PUSH 0x6268a4                       ; 004ba8bc | = "%s is currently checked out by %s"
    MOV EBP,dword ptr [0x00678a60]      ; 004ba8c1 | g_CEditorToolsPtr
    PUSH EBP                            ; 004ba8c7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004ba8c8
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004ba8cd
    JMP 0x004ba895                      ; 004ba8d0
        ;   XREF to: 004ba895 (UNCONDITIONAL_JUMP)  ; LAB_004ba895
    LEA EAX,[ESP + 0x35c]               ; 004ba8d2
        ;   Label: LAB_004ba8d2
    PUSH EAX                            ; 004ba8d9
    PUSH EBX                            ; 004ba8da
    MOV dword ptr [0x02d12bf0],EBX      ; 004ba8db | g_VersionControlSession.overwrite_own_choice
    MOV dword ptr [0x02d12bf4],EBX      ; 004ba8e1 | g_VersionControlSession.overwrite_writeable_choice
    CALL engine_dosio.cpp_getFileSizeWithFinder_FUN_00481960 ; 004ba8e7
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSizeWithFinder_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004ba8ec
    TEST EAX,EAX                        ; 004ba8ef
    JL 0x004ba8fb                       ; 004ba8f1
        ;   XREF to: 004ba8fb (CONDITIONAL_JUMP)  ; LAB_004ba8fb
    TEST AL,0x8                         ; 004ba8f3
    JZ 0x004baaad                       ; 004ba8f5
        ;   XREF to: 004baaad (CONDITIONAL_JUMP)  ; LAB_004baaad
    MOV EAX,0x1                         ; 004ba8fb
        ;   Label: LAB_004ba8fb
    TEST EAX,EAX                        ; 004ba900
        ;   Label: LAB_004ba900
    JLE 0x004baade                      ; 004ba902
        ;   XREF to: 004baade (CONDITIONAL_JUMP)  ; LAB_004baade
    MOV EDX,0xffffffff                  ; 004ba908
    MOV AH,byte ptr [0x02d12bf8]        ; 004ba90d | g_VersionControlSession.network_username[0]
    MOV dword ptr [ESP + 0x684],EDX     ; 004ba913
    TEST AH,AH                          ; 004ba91a
    JZ 0x004ba93f                       ; 004ba91c
        ;   XREF to: 004ba93f (CONDITIONAL_JUMP)  ; LAB_004ba93f
    PUSH 0x6268c6                       ; 004ba91e | = "Logging on as version control user..."
    MOV ECX,dword ptr [0x00678a60]      ; 004ba923 | g_CEditorToolsPtr
    PUSH ECX                            ; 004ba929 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004ba92a
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004ba92f
    CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770 ; 004ba932
        ;   XREF to: 004b2770 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770()
    TEST EAX,EAX                        ; 004ba937
    JZ 0x004baa34                       ; 004ba939
        ;   XREF to: 004baa34 (CONDITIONAL_JUMP)  ; LAB_004baa34
    MOV DL,byte ptr [0x02d12ac8]        ; 004ba93f | g_VersionControlDirectory
        ;   Label: LAB_004ba93f
    LEA EDI,[ESP + 0x460]               ; 004ba945
    TEST DL,DL                          ; 004ba94c
    JZ 0x004baaea                       ; 004ba94e
        ;   XREF to: 004baaea (CONDITIONAL_JUMP)  ; LAB_004baaea
    LEA EAX,[ESP + 0x564]               ; 004ba954
        ;   Label: LAB_004ba954
    PUSH EAX                            ; 004ba95b
    LEA EAX,[ESP + 0x68c]               ; 004ba95c
    PUSH EAX                            ; 004ba963
    PUSH 0x2d12ac8                      ; 004ba964 | g_VersionControlDirectory
    CALL engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80 ; 004ba969
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004ba96e
    PUSH 0x0                            ; 004ba971
    PUSH 0x0                            ; 004ba973
    LEA EAX,[ESP + 0x56c]               ; 004ba975
    PUSH EAX                            ; 004ba97c
    LEA EAX,[ESP + 0x694]               ; 004ba97d
    PUSH EAX                            ; 004ba984
    PUSH EDI                            ; 004ba985
    CALL engine_dosio.cpp_makePath_FUN_00481f50 ; 004ba986
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004ba98b
    MOV ESI,0x626096                    ; 004ba98e | = "checkout.txt"
    PUSH EDI                            ; 004ba993
    SUB ECX,ECX                         ; 004ba994
    DEC ECX                             ; 004ba996
    MOV AL,0x0                          ; 004ba997
    SCASB.REPNE ES:EDI                  ; 004ba999
    DEC EDI                             ; 004ba99b
    MOV AL,byte ptr [ESI]               ; 004ba99c | = "checkout.txt" | s_eckout.txt_00626098
        ;   Label: LAB_004ba99c
    MOV byte ptr [EDI],AL               ; 004ba99e
    CMP AL,0x0                          ; 004ba9a0
    JZ 0x004ba9b4                       ; 004ba9a2
        ;   XREF to: 004ba9b4 (CONDITIONAL_JUMP)  ; LAB_004ba9b4
    MOV AL,byte ptr [ESI + 0x1]         ; 004ba9a4 | s_heckout.txt_00626097 | s_ckout.txt_00626099
    ADD ESI,0x2                         ; 004ba9a7
    MOV byte ptr [EDI + 0x1],AL         ; 004ba9aa
    ADD EDI,0x2                         ; 004ba9ad
    CMP AL,0x0                          ; 004ba9b0
    JNZ 0x004ba99c                      ; 004ba9b2
        ;   XREF to: 004ba99c (CONDITIONAL_JUMP)  ; LAB_004ba99c
    POP EDI                             ; 004ba9b4
        ;   Label: LAB_004ba9b4
    PUSH EBP                            ; 004ba9b5
    PUSH 0x6268ec                       ; 004ba9b6 | = "Marking %s as checked out..."
    MOV EDI,dword ptr [0x00678a60]      ; 004ba9bb | g_CEditorToolsPtr
    PUSH EDI                            ; 004ba9c1 | g_CEditorToolsInstance
    XOR ESI,ESI                         ; 004ba9c2
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004ba9c4
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    LEA EDI,[ESP + 0x46c]               ; 004ba9c9
    ADD ESP,0xc                         ; 004ba9d0
    PUSH 0x153                          ; 004ba9d3
        ;   Label: LAB_004ba9d3
    PUSH 0x626129                       ; 004ba9d8 | = "..\\engine\\fileio.cpp"
    PUSH 0x626909                       ; 004ba9dd | = "r+t"
    PUSH 0x0                            ; 004ba9e2
    PUSH EDI                            ; 004ba9e4
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004ba9e5
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004ba9ea
    ADD ESP,0x14                        ; 004ba9ec
    TEST EAX,EAX                        ; 004ba9ef
    JZ 0x004bab12                       ; 004ba9f1
        ;   XREF to: 004bab12 (CONDITIONAL_JUMP)  ; LAB_004bab12
    PUSH 0x400                          ; 004ba9f7
    PUSH 0x0                            ; 004ba9fc
    PUSH 0x0                            ; 004ba9fe
    PUSH EAX                            ; 004baa00
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004baa01
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(_FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004baa06
    MOV dword ptr [ESP + 0x67c],EBX     ; 004baa09
        ;   Label: LAB_004baa09
    TEST EBX,EBX                        ; 004baa10
    JNZ 0x004bab39                      ; 004baa12
        ;   XREF to: 004bab39 (CONDITIONAL_JUMP)  ; LAB_004bab39
    LEA EAX,[ESP + 0x460]               ; 004baa18
    PUSH EAX                            ; 004baa1f
    PUSH 0x62690d                       ; 004baa20 | = "Can't access %s."
    MOV ESI,dword ptr [0x00678a60]      ; 004baa25 | g_CEditorToolsPtr
    PUSH ESI                            ; 004baa2b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004baa2c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   Label: LAB_004baa2c
    ADD ESP,0xc                         ; 004baa31
    MOV EDI,dword ptr [ESP + 0x67c]     ; 004baa34
        ;   Label: LAB_004baa34
    TEST EDI,EDI                        ; 004baa3b
    JZ 0x004baa5b                       ; 004baa3d
        ;   XREF to: 004baa5b (CONDITIONAL_JUMP)  ; LAB_004baa5b
    PUSH 0xc4                           ; 004baa3f
    PUSH 0x62604b                       ; 004baa44 | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004baa49
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004baa4a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004baa4f
    XOR EAX,EAX                         ; 004baa52
    MOV dword ptr [ESP + 0x67c],EAX     ; 004baa54
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004baa5b
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004baa5b
    LEA EAX,[ESP + 0x674]               ; 004baa60
    PUSH EAX                            ; 004baa67
    MOV EBX,dword ptr [ESP + 0x688]     ; 004baa68
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004baa6f
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
        ;   Label: LAB_004baa6f
    ADD ESP,0x4                         ; 004baa74
    TEST EBX,EBX                        ; 004baa77
    JLE 0x004ba76c                      ; 004baa79
        ;   XREF to: 004ba76c (CONDITIONAL_JUMP)  ; LAB_004ba76c
    PUSH 0x628dbd                       ; 004baa7f | = "Extract and dismount now?"
        ;   Label: LAB_004baa7f
    MOV EDX,dword ptr [0x00678a60]      ; 004baa84 | g_CEditorToolsPtr
    PUSH EDX                            ; 004baa8a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004baa8b
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004baa90
    TEST EAX,EAX                        ; 004baa93
    JNZ 0x004badf0                      ; 004baa95
        ;   XREF to: 004badf0 (CONDITIONAL_JUMP)  ; LAB_004badf0
    MOV EBP,0x1                         ; 004baa9b
    MOV EAX,EBP                         ; 004baaa0
    ADD ESP,0x68c                       ; 004baaa2
    POP EBP                             ; 004baaa8
    POP EDI                             ; 004baaa9
    POP ESI                             ; 004baaaa
    POP EBX                             ; 004baaab
    RET                                 ; 004baaac
    LEA EAX,[ESP + 0x35c]               ; 004baaad
        ;   Label: LAB_004baaad
    PUSH EAX                            ; 004baab4
    PUSH 0x62654c                       ; 004baab5 | = "A writable copy of %s exists.  Replac..."
    LEA EAX,[ESP + 0x8]                 ; 004baaba
    PUSH EAX                            ; 004baabe
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004baabf
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004baac4
    PUSH 0x2d12bf4                      ; 004baac7 | g_VersionControlSession.overwrite_writeable_choice
    LEA EAX,[ESP + 0x4]                 ; 004baacc
    PUSH EAX                            ; 004baad0
    CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 ; 004baad1
        ;   XREF to: 004b2f90 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char * dialog_title, int * overwrite_state)
    ADD ESP,0x8                         ; 004baad6
    JMP 0x004ba900                      ; 004baad9
        ;   XREF to: 004ba900 (UNCONDITIONAL_JUMP)  ; LAB_004ba900
    MOV EBX,EAX                         ; 004baade
        ;   Label: LAB_004baade
    LEA EAX,[ESP + 0x674]               ; 004baae0
    PUSH EAX                            ; 004baae7
    JMP 0x004baa6f                      ; 004baae8
        ;   XREF to: 004baa6f (UNCONDITIONAL_JUMP)  ; LAB_004baa6f
    MOV EBX,0x626060                    ; 004baaea | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004baaea
    MOV ESI,0xdd                        ; 004baaef
    PUSH 0x626075                       ; 004baaf4 | = "versionControlDirectory not set!"
    MOV dword ptr [0x02f0ca48],EBX      ; 004baaf9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004baaff | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004bab05
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004bab0a
    JMP 0x004ba954                      ; 004bab0d
        ;   XREF to: 004ba954 (UNCONDITIONAL_JUMP)  ; LAB_004ba954
    CALL crt_errno.c__errno_FUN_00601450 ; 004bab12
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_00601450()
        ;   Label: LAB_004bab12
    CMP dword ptr [EAX],0x6             ; 004bab17
    JNZ 0x004bab32                      ; 004bab1a
        ;   XREF to: 004bab32 (CONDITIONAL_JUMP)  ; LAB_004bab32
    PUSH 0x1f4                          ; 004bab1c
    INC ESI                             ; 004bab21
    CALL dword ptr CS:[0x611644]        ; 004bab22 | g_SleepFunc
    CMP ESI,0xa                         ; 004bab29
    JL 0x004ba9d3                       ; 004bab2c
        ;   XREF to: 004ba9d3 (CONDITIONAL_JUMP)  ; LAB_004ba9d3
    XOR EBX,EBX                         ; 004bab32
        ;   Label: LAB_004bab32
    JMP 0x004baa09                      ; 004bab34
        ;   XREF to: 004baa09 (UNCONDITIONAL_JUMP)  ; LAB_004baa09
    LEA EAX,[ESP + 0x67c]               ; 004bab39
        ;   Label: LAB_004bab39
    PUSH EAX                            ; 004bab40
    LEA EAX,[ESP + 0x678]               ; 004bab41
    PUSH EAX                            ; 004bab48
    CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 ; 004bab49
        ;   XREF to: 004b2a60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList * this_ptr, _FILE * * file)
    ADD ESP,0x8                         ; 004bab4e
    TEST EAX,EAX                        ; 004bab51
    JZ 0x004babfc                       ; 004bab53
        ;   XREF to: 004babfc (CONDITIONAL_JUMP)  ; LAB_004babfc
    PUSH EBP                            ; 004bab59
    LEA EAX,[ESP + 0x678]               ; 004bab5a
    PUSH EAX                            ; 004bab61
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004bab62
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004bab67
    MOV EDI,EAX                         ; 004bab6a
    TEST EAX,EAX                        ; 004bab6c
    JL 0x004bac56                       ; 004bab6e
        ;   XREF to: 004bac56 (CONDITIONAL_JUMP)  ; LAB_004bac56
    MOV ESI,dword ptr [ESP + 0x67c]     ; 004bab74
    TEST ESI,ESI                        ; 004bab7b
    JZ 0x004bab9b                       ; 004bab7d
        ;   XREF to: 004bab9b (CONDITIONAL_JUMP)  ; LAB_004bab9b
    PUSH 0xc4                           ; 004bab7f
    PUSH 0x62604b                       ; 004bab84 | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004bab89
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bab8a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bab8f
    XOR EAX,EAX                         ; 004bab92
    MOV dword ptr [ESP + 0x67c],EAX     ; 004bab94
    LEA EAX,[EDI*0x4 + 0x0]             ; 004bab9b
        ;   Label: LAB_004bab9b
    SUB EAX,EDI                         ; 004baba2
    SHL EAX,0x3                         ; 004baba4
    MOV ESI,EAX                         ; 004baba7
    SHL ESI,0x4                         ; 004baba9
    SUB ESI,EAX                         ; 004babac
    MOV EAX,dword ptr [ESP + 0x678]     ; 004babae
    ADD EAX,ESI                         ; 004babb5
    PUSH 0x2d12bd0                      ; 004babb7 | g_VersionControlSession
    ADD EAX,0x104                       ; 004babbc
    PUSH EAX                            ; 004babc1
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004babc2
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004babc7
    MOV EBX,EAX                         ; 004babca
    MOV EAX,dword ptr [ESP + 0x678]     ; 004babcc
    ADD EAX,ESI                         ; 004babd3
    TEST EBX,EBX                        ; 004babd5
    JNZ 0x004bac2c                      ; 004babd7
        ;   XREF to: 004bac2c (CONDITIONAL_JUMP)  ; LAB_004bac2c
    PUSH EAX                            ; 004babd9
    PUSH 0x62691e                       ; 004babda | = "You already have %s checked out"
    MOV ECX,dword ptr [0x00678a60]      ; 004babdf | g_CEditorToolsPtr
    PUSH ECX                            ; 004babe5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004babe6
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004babeb
    XOR EBX,EBX                         ; 004babee
    MOV dword ptr [ESP + 0x684],EBX     ; 004babf0
    JMP 0x004baa34                      ; 004babf7
        ;   XREF to: 004baa34 (UNCONDITIONAL_JUMP)  ; LAB_004baa34
    MOV ECX,dword ptr [ESP + 0x67c]     ; 004babfc
        ;   Label: LAB_004babfc
    TEST ECX,ECX                        ; 004bac03
    JZ 0x004baa34                       ; 004bac05
        ;   XREF to: 004baa34 (CONDITIONAL_JUMP)  ; LAB_004baa34
    PUSH 0xc4                           ; 004bac0b
    PUSH 0x62604b                       ; 004bac10 | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004bac15
    XOR ESI,ESI                         ; 004bac16
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bac18
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bac1d
    MOV dword ptr [ESP + 0x67c],ESI     ; 004bac20
    JMP 0x004baa5b                      ; 004bac27
        ;   XREF to: 004baa5b (UNCONDITIONAL_JUMP)  ; LAB_004baa5b
    LEA EBX,[EAX + 0x104]               ; 004bac2c
        ;   Label: LAB_004bac2c
    PUSH EBX                            ; 004bac32
    PUSH EAX                            ; 004bac33
    PUSH 0x62693e                       ; 004bac34 | = "%s is currently checked out by %s"
    MOV EDX,dword ptr [0x00678a60]      ; 004bac39 | g_CEditorToolsPtr
    PUSH EDX                            ; 004bac3f | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bac40
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004bac45
    XOR EBX,EBX                         ; 004bac48
    MOV dword ptr [ESP + 0x684],EBX     ; 004bac4a
    JMP 0x004baa34                      ; 004bac51
        ;   XREF to: 004baa34 (UNCONDITIONAL_JUMP)  ; LAB_004baa34
    LEA EDI,[ESP + 0x1f4]               ; 004bac56
        ;   Label: LAB_004bac56
    MOV ESI,EBP                         ; 004bac5d
    PUSH EDI                            ; 004bac5f
    MOV AL,byte ptr [ESI]               ; 004bac60
        ;   Label: LAB_004bac60
    MOV byte ptr [EDI],AL               ; 004bac62
    CMP AL,0x0                          ; 004bac64
    JZ 0x004bac78                       ; 004bac66
        ;   XREF to: 004bac78 (CONDITIONAL_JUMP)  ; LAB_004bac78
    MOV AL,byte ptr [ESI + 0x1]         ; 004bac68
    ADD ESI,0x2                         ; 004bac6b
    MOV byte ptr [EDI + 0x1],AL         ; 004bac6e
    ADD EDI,0x2                         ; 004bac71
    CMP AL,0x0                          ; 004bac74
    JNZ 0x004bac60                      ; 004bac76
        ;   XREF to: 004bac60 (CONDITIONAL_JUMP)  ; LAB_004bac60
    POP EDI                             ; 004bac78
        ;   Label: LAB_004bac78
    MOV ESI,0x2d12bd0                   ; 004bac79 | g_VersionControlSession
    LEA EDI,[ESP + 0x2f8]               ; 004bac7e
    PUSH EDI                            ; 004bac85
    MOV AL,byte ptr [ESI]               ; 004bac86 | g_VersionControlSession | g_VersionControlSession.primary_username[2]
        ;   Label: LAB_004bac86
    MOV byte ptr [EDI],AL               ; 004bac88
    CMP AL,0x0                          ; 004bac8a
    JZ 0x004bac9e                       ; 004bac8c
        ;   XREF to: 004bac9e (CONDITIONAL_JUMP)  ; LAB_004bac9e
    MOV AL,byte ptr [ESI + 0x1]         ; 004bac8e | g_VersionControlSession.primary_username[1] | g_VersionControlSession.primary_username[3]
    ADD ESI,0x2                         ; 004bac91
    MOV byte ptr [EDI + 0x1],AL         ; 004bac94
    ADD EDI,0x2                         ; 004bac97
    CMP AL,0x0                          ; 004bac9a
    JNZ 0x004bac86                      ; 004bac9c
        ;   XREF to: 004bac86 (CONDITIONAL_JUMP)  ; LAB_004bac86
    POP EDI                             ; 004bac9e
        ;   Label: LAB_004bac9e
    LEA EAX,[ESP + 0x1f4]               ; 004bac9f
    PUSH EAX                            ; 004baca6
    LEA EAX,[ESP + 0x678]               ; 004baca7
    PUSH EAX                            ; 004bacae
    CALL engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00 ; 004bacaf
        ;   XREF to: 004b2d00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList * this_ptr, CCheckOutItem * new_entry)
    ADD ESP,0x8                         ; 004bacb4
    TEST EAX,EAX                        ; 004bacb7
    JNZ 0x004bacfb                      ; 004bacb9
        ;   XREF to: 004bacfb (CONDITIONAL_JUMP)  ; LAB_004bacfb
    MOV EDI,dword ptr [ESP + 0x67c]     ; 004bacbb
    TEST EDI,EDI                        ; 004bacc2
    JZ 0x004bace2                       ; 004bacc4
        ;   XREF to: 004bace2 (CONDITIONAL_JUMP)  ; LAB_004bace2
    PUSH 0xc4                           ; 004bacc6
    PUSH 0x62604b                       ; 004baccb | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004bacd0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bacd1
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bacd6
    XOR EAX,EAX                         ; 004bacd9
    MOV dword ptr [ESP + 0x67c],EAX     ; 004bacdb
    PUSH 0x626960                       ; 004bace2 | = "Out of memory...Restart the applicati..."
        ;   Label: LAB_004bace2
    MOV EDX,dword ptr [0x00678a60]      ; 004bace7 | g_CEditorToolsPtr
    PUSH EDX                            ; 004baced | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004bacee
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bacf3
    JMP 0x004baa34                      ; 004bacf6
        ;   XREF to: 004baa34 (UNCONDITIONAL_JUMP)  ; LAB_004baa34
    LEA EAX,[ESP + 0x67c]               ; 004bacfb
        ;   Label: LAB_004bacfb
    PUSH EAX                            ; 004bad02
    LEA EAX,[ESP + 0x678]               ; 004bad03
    PUSH EAX                            ; 004bad0a
    CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 ; 004bad0b
        ;   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList * this_ptr, _FILE * * file_handle)
    ADD ESP,0x8                         ; 004bad10
    TEST EAX,EAX                        ; 004bad13
    JZ 0x004baa34                       ; 004bad15
        ;   XREF to: 004baa34 (CONDITIONAL_JUMP)  ; LAB_004baa34
    MOV ECX,dword ptr [ESP + 0x67c]     ; 004bad1b
    TEST ECX,ECX                        ; 004bad22
    JZ 0x004bad42                       ; 004bad24
        ;   XREF to: 004bad42 (CONDITIONAL_JUMP)  ; LAB_004bad42
    PUSH 0xc4                           ; 004bad26
    PUSH 0x62604b                       ; 004bad2b | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004bad30
    XOR ESI,ESI                         ; 004bad31
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004bad33
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004bad38
    MOV dword ptr [ESP + 0x67c],ESI     ; 004bad3b
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004bad42
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004bad42
    PUSH EBP                            ; 004bad47
    PUSH 0x6269ae                       ; 004bad48 | = "Getting %s..."
    MOV EDI,dword ptr [0x00678a60]      ; 004bad4d | g_CEditorToolsPtr
    PUSH EDI                            ; 004bad53 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bad54
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bad59
    PUSH EBP                            ; 004bad5c
    MOV EAX,dword ptr [ESP + 0x684]     ; 004bad5d
    PUSH EAX                            ; 004bad64
    CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 ; 004bad65
        ;   XREF to: 004b3220 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)
    ADD ESP,0x8                         ; 004bad6a
    TEST EAX,EAX                        ; 004bad6d
    JZ 0x004badcb                       ; 004bad6f
        ;   XREF to: 004badcb (CONDITIONAL_JUMP)  ; LAB_004badcb
    LEA EAX,[ESP + 0x460]               ; 004bad71
        ;   Label: LAB_004bad71
    PUSH EAX                            ; 004bad78
    PUSH 0x6269bc                       ; 004bad79 | = "Clearing read-only bit for %s..."
    MOV ECX,dword ptr [0x00678a60]      ; 004bad7e | g_CEditorToolsPtr
    PUSH ECX                            ; 004bad84 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bad85
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bad8a
    PUSH EBP                            ; 004bad8d
    PUSH 0x0                            ; 004bad8e
    CALL engine_dosio.cpp_getFileSizeWithFinder_FUN_00481960 ; 004bad90
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSizeWithFinder_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004bad95
    MOV EBX,EAX                         ; 004bad98
    TEST EAX,EAX                        ; 004bad9a
    JL 0x004badb2                       ; 004bad9c
        ;   XREF to: 004badb2 (CONDITIONAL_JUMP)  ; LAB_004badb2
    TEST AL,0x8                         ; 004bad9e
    JZ 0x004badb2                       ; 004bada0
        ;   XREF to: 004badb2 (CONDITIONAL_JUMP)  ; LAB_004badb2
    AND AL,0xf7                         ; 004bada2
    PUSH EAX                            ; 004bada4
    PUSH EBP                            ; 004bada5
    CALL engine_dosio.cpp_setFileAttributes_FUN_004819f0 ; 004bada6
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004badab
    TEST EAX,EAX                        ; 004badae
    JZ 0x004badde                       ; 004badb0
        ;   XREF to: 004badde (CONDITIONAL_JUMP)  ; LAB_004badde
    TEST EBX,EBX                        ; 004badb2
        ;   Label: LAB_004badb2
    JL 0x004badde                       ; 004badb4
        ;   XREF to: 004badde (CONDITIONAL_JUMP)  ; LAB_004badde
    LEA EAX,[ESP + 0x674]               ; 004badb6
    PUSH EAX                            ; 004badbd
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004badbe
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004badc3
    JMP 0x004baa7f                      ; 004badc6
        ;   XREF to: 004baa7f (UNCONDITIONAL_JUMP)  ; LAB_004baa7f
    PUSH EBP                            ; 004badcb
        ;   Label: LAB_004badcb
    MOV EDX,dword ptr [ESP + 0x684]     ; 004badcc
    PUSH EDX                            ; 004badd3
    CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 ; 004badd4
        ;   XREF to: 004b35a0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004badd9
    JMP 0x004bad71                      ; 004baddc
        ;   XREF to: 004bad71 (UNCONDITIONAL_JUMP)  ; LAB_004bad71
    PUSH EBP                            ; 004badde
        ;   Label: LAB_004badde
    PUSH 0x6269dd                       ; 004baddf | = "Error turning off read-only bit for %s"
    MOV EBX,dword ptr [0x00678a60]      ; 004bade4 | g_CEditorToolsPtr
    PUSH EBX                            ; 004badea | g_CEditorToolsInstance
    JMP 0x004baa2c                      ; 004badeb
        ;   XREF to: 004baa2c (UNCONDITIONAL_JUMP)  ; LAB_004baa2c
    MOV EAX,dword ptr [ESP + 0x6a0]     ; 004badf0
        ;   Label: LAB_004badf0
    MOV dword ptr [EAX + 0x13880c],0x1  ; 004badf7
    PUSH 0x0                            ; 004bae01
    MOV EBX,dword ptr [EAX + 0x138810]  ; 004bae03
    LEA EAX,[ESP + 0x360]               ; 004bae09
    PUSH EAX                            ; 004bae10
    MOV ECX,dword ptr [ESP + 0x6a8]     ; 004bae11
    PUSH ECX                            ; 004bae18
    CALL dword ptr [EBX]                ; 004bae19
    ADD ESP,0xc                         ; 004bae1b
    MOV EAX,dword ptr [ESP + 0x6a0]     ; 004bae1e
    MOV dword ptr [EAX + 0x13880c],0x0  ; 004bae25
    LEA EAX,[ESP + 0x664]               ; 004bae2f
    PUSH EAX                            ; 004bae36
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004bae37
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004bae3c
    LEA EAX,[ESP + 0x664]               ; 004bae3f
    PUSH EAX                            ; 004bae46
    MOV EBX,dword ptr [ESP + 0x6a4]     ; 004bae47
    PUSH EBX                            ; 004bae4e
    CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 ; 004bae4f
        ;   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004bae54
    LEA EAX,[ESP + 0x35c]               ; 004bae57
    PUSH EAX                            ; 004bae5e
    LEA EAX,[ESP + 0x668]               ; 004bae5f
    PUSH EAX                            ; 004bae66
    PUSH EBX                            ; 004bae67
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004bae68
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    ADD ESP,0xc                         ; 004bae6d
    TEST EAX,EAX                        ; 004bae70
    JL 0x004bae96                       ; 004bae72
        ;   XREF to: 004bae96 (CONDITIONAL_JUMP)  ; LAB_004bae96
    PUSH EAX                            ; 004bae74
    LEA EAX,[ESP + 0x668]               ; 004bae75
    PUSH EAX                            ; 004bae7c
    CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0 ; 004bae7d
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 004bae82
    LEA EAX,[ESP + 0x664]               ; 004bae85
    PUSH EAX                            ; 004bae8c
    PUSH EBX                            ; 004bae8d
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004bae8e
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004bae93
    CMP dword ptr [0x00680cdc],0x0      ; 004bae96 | g_CDemonPodPtr
        ;   Label: LAB_004bae96
    JZ 0x004baed3                       ; 004bae9d
        ;   XREF to: 004baed3 (CONDITIONAL_JUMP)  ; LAB_004baed3
    PUSH 0x62759a                       ; 004bae9f | = "Remounting all pods..."
    MOV EAX,[0x00678a60]                ; 004baea4 | g_CEditorToolsPtr
    PUSH EAX                            ; 004baea9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004baeaa
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004baeaf
    MOV EDX,dword ptr [0x00680cdc]      ; 004baeb2 | g_CDemonPodPtr
    PUSH EDX                            ; 004baeb8 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 004baeb9
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
    ADD ESP,0x4                         ; 004baebe
    MOV EAX,[0x00680cdc]                ; 004baec1 | g_CDemonPodPtr
    PUSH EAX                            ; 004baec6 | g_CDemonPodInstance
    MOV EBX,dword ptr [EAX + 0x194]     ; 004baec7 | g_CDemonPodInstance.vtable
    CALL dword ptr [EBX + 0x4]          ; 004baecd
    ADD ESP,0x4                         ; 004baed0
    PUSH 0x0                            ; 004baed3
        ;   Label: LAB_004baed3
    LEA EAX,[ESP + 0x668]               ; 004baed5
    PUSH EAX                            ; 004baedc
    MOV EBP,0x1                         ; 004baedd
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004baee2
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004baee7
    MOV EAX,EBP                         ; 004baeea
    ADD ESP,0x68c                       ; 004baeec
    POP EBP                             ; 004baef2
    POP EDI                             ; 004baef3
    POP ESI                             ; 004baef4
    POP EBX                             ; 004baef5
    RET                                 ; 004baef6

