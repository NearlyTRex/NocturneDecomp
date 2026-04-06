; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920(CCheckOutItem *this_ptr,char *filename)
;
; Parameters:
; CCheckOutItem *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; char[500]        Stack[-0x584]:500  local_584
; CCheckOutItem    Stack[-0x390]:360  local_390
; char[260]        Stack[-0x228]:260  local_228
; char[256]        Stack[-0x124]:256  local_124
; CCheckOutList    Stack[-0x24]:8  local_24
; _FILE *          Stack[-0x1c]:4  local_1c
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
;   ... and 19 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_errno.c__errno_FUN_00601450
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_setvbuf_FUN_00601490
;   crt_string.c__stricmp_FUN_005fe7f0
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.c_getFileSizeWithFinder_FUN_00481960
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_setFileAttributes_FUN_004819f0
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
;   engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
;   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
;   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
;   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3920
        ;   Label: engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
    PUSH ESI                            ; 004b3921
    PUSH EDI                            ; 004b3922
    PUSH EBP                            ; 004b3923
    SUB ESP,0x574                       ; 004b3924
    MOV EBP,dword ptr [ESP + 0x58c]     ; 004b392a
    XOR EDX,EDX                         ; 004b3931
    MOV dword ptr [ESP + 0x568],EDX     ; 004b3933
    CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 ; 004b393a
        ;   XREF to: 004b1c00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00()
    TEST EAX,EAX                        ; 004b393f
    JNZ 0x004b3955                      ; 004b3941
        ;   XREF to: 004b3955 (CONDITIONAL_JUMP)  ; LAB_004b3955
    MOV EBP,0xffffffff                  ; 004b3943
    MOV EAX,EBP                         ; 004b3948
    ADD ESP,0x574                       ; 004b394a
    POP EBP                             ; 004b3950
    POP EDI                             ; 004b3951
    POP ESI                             ; 004b3952
    POP EBX                             ; 004b3953
    RET                                 ; 004b3954
    LEA EAX,[ESP + 0x560]               ; 004b3955
        ;   Label: LAB_004b3955
    XOR ECX,ECX                         ; 004b395c
    PUSH EAX                            ; 004b395e
    MOV dword ptr [ESP + 0x564],ECX     ; 004b395f
    MOV dword ptr [ESP + 0x568],ECX     ; 004b3966
    CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 ; 004b396d
        ;   XREF to: 004b2890 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3972
    TEST EAX,EAX                        ; 004b3975
    JZ 0x004b3b41                       ; 004b3977
        ;   XREF to: 004b3b41 (CONDITIONAL_JUMP)  ; LAB_004b3b41
    PUSH EBP                            ; 004b397d
    LEA EAX,[ESP + 0x564]               ; 004b397e
    PUSH EAX                            ; 004b3985
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b3986
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b398b
    TEST EAX,EAX                        ; 004b398e
    JGE 0x004b3b60                      ; 004b3990
        ;   XREF to: 004b3b60 (CONDITIONAL_JUMP)  ; LAB_004b3b60
    PUSH EBP                            ; 004b3996
    XOR ESI,ESI                         ; 004b3997
    PUSH ESI                            ; 004b3999
    MOV dword ptr [0x02d12bf0],ESI      ; 004b399a | g_VersionControlSession.overwrite_own_choice
    MOV dword ptr [0x02d12bf4],ESI      ; 004b39a0 | g_VersionControlSession.overwrite_writeable_choice
    CALL engine_dosio.c_getFileSizeWithFinder_FUN_00481960 ; 004b39a6
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSizeWithFinder_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004b39ab
    TEST EAX,EAX                        ; 004b39ae
    JL 0x004b39ba                       ; 004b39b0
        ;   XREF to: 004b39ba (CONDITIONAL_JUMP)  ; LAB_004b39ba
    TEST AL,0x8                         ; 004b39b2
    JZ 0x004b3bee                       ; 004b39b4
        ;   XREF to: 004b3bee (CONDITIONAL_JUMP)  ; LAB_004b3bee
    MOV EAX,0x1                         ; 004b39ba
        ;   Label: LAB_004b39ba
    TEST EAX,EAX                        ; 004b39bf
        ;   Label: LAB_004b39bf
    JLE 0x004b3c18                      ; 004b39c1
        ;   XREF to: 004b3c18 (CONDITIONAL_JUMP)  ; LAB_004b3c18
    MOV dword ptr [ESP + 0x56c],0xffffffff ; 004b39c7
    CMP byte ptr [0x02d12bf8],0x0       ; 004b39d2 | g_VersionControlSession.network_username[0]
    JZ 0x004b39fc                       ; 004b39d9
        ;   XREF to: 004b39fc (CONDITIONAL_JUMP)  ; LAB_004b39fc
    PUSH 0x6268c6                       ; 004b39db | = "Logging on as version control user..."
    MOV EDX,dword ptr [0x00678a60]      ; 004b39e0 | g_CEditorToolsPtr
    PUSH EDX                            ; 004b39e6 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b39e7
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b39ec
    CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770 ; 004b39ef
        ;   XREF to: 004b2770 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770()
    TEST EAX,EAX                        ; 004b39f4
    JZ 0x004b3af1                       ; 004b39f6
        ;   XREF to: 004b3af1 (CONDITIONAL_JUMP)  ; LAB_004b3af1
    MOV DL,byte ptr [0x02d12ac8]        ; 004b39fc | g_VersionControlDirectory
        ;   Label: LAB_004b39fc
    LEA EDI,[ESP + 0x35c]               ; 004b3a02
    TEST DL,DL                          ; 004b3a09
    JZ 0x004b3c37                       ; 004b3a0b
        ;   XREF to: 004b3c37 (CONDITIONAL_JUMP)  ; LAB_004b3c37
    LEA EAX,[ESP + 0x460]               ; 004b3a11
        ;   Label: LAB_004b3a11
    PUSH EAX                            ; 004b3a18
    LEA EAX,[ESP + 0x574]               ; 004b3a19
    PUSH EAX                            ; 004b3a20
    PUSH 0x2d12ac8                      ; 004b3a21 | g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b3a26
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004b3a2b
    PUSH 0x0                            ; 004b3a2e
    PUSH 0x0                            ; 004b3a30
    LEA EAX,[ESP + 0x468]               ; 004b3a32
    PUSH EAX                            ; 004b3a39
    LEA EAX,[ESP + 0x57c]               ; 004b3a3a
    PUSH EAX                            ; 004b3a41
    PUSH EDI                            ; 004b3a42
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b3a43
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b3a48
    MOV ESI,0x626096                    ; 004b3a4b | = "checkout.txt"
    PUSH EDI                            ; 004b3a50
    SUB ECX,ECX                         ; 004b3a51
    DEC ECX                             ; 004b3a53
    MOV AL,0x0                          ; 004b3a54
    SCASB.REPNE ES:EDI                  ; 004b3a56
    DEC EDI                             ; 004b3a58
    MOV AL,byte ptr [ESI]               ; 004b3a59 | = "checkout.txt" | s_eckout.txt_00626098
        ;   Label: LAB_004b3a59
    MOV byte ptr [EDI],AL               ; 004b3a5b
    CMP AL,0x0                          ; 004b3a5d
    JZ 0x004b3a71                       ; 004b3a5f
        ;   XREF to: 004b3a71 (CONDITIONAL_JUMP)  ; LAB_004b3a71
    MOV AL,byte ptr [ESI + 0x1]         ; 004b3a61 | s_heckout.txt_00626097 | s_ckout.txt_00626099
    ADD ESI,0x2                         ; 004b3a64
    MOV byte ptr [EDI + 0x1],AL         ; 004b3a67
    ADD EDI,0x2                         ; 004b3a6a
    CMP AL,0x0                          ; 004b3a6d
    JNZ 0x004b3a59                      ; 004b3a6f
        ;   XREF to: 004b3a59 (CONDITIONAL_JUMP)  ; LAB_004b3a59
    POP EDI                             ; 004b3a71
        ;   Label: LAB_004b3a71
    PUSH EBP                            ; 004b3a72
    PUSH 0x6268ec                       ; 004b3a73 | = "Marking %s as checked out..."
    MOV ESI,dword ptr [0x00678a60]      ; 004b3a78 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b3a7e | g_CEditorToolsInstance
    LEA EDI,[ESP + 0x368]               ; 004b3a7f
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b3a86
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b3a8b
    XOR ESI,ESI                         ; 004b3a8e
    PUSH 0x153                          ; 004b3a90
        ;   Label: LAB_004b3a90
    PUSH 0x626129                       ; 004b3a95 | = "..\\engine\\fileio.cpp"
    PUSH 0x626909                       ; 004b3a9a | = "r+t"
    PUSH 0x0                            ; 004b3a9f
    PUSH EDI                            ; 004b3aa1
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b3aa2
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004b3aa7
    ADD ESP,0x14                        ; 004b3aa9
    TEST EAX,EAX                        ; 004b3aac
    JZ 0x004b3c5f                       ; 004b3aae
        ;   XREF to: 004b3c5f (CONDITIONAL_JUMP)  ; LAB_004b3c5f
    PUSH 0x400                          ; 004b3ab4
    PUSH 0x0                            ; 004b3ab9
    PUSH 0x0                            ; 004b3abb
    PUSH EAX                            ; 004b3abd
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b3abe
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(_FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004b3ac3
    MOV dword ptr [ESP + 0x568],EBX     ; 004b3ac6
        ;   Label: LAB_004b3ac6
    TEST EBX,EBX                        ; 004b3acd
    JNZ 0x004b3c86                      ; 004b3acf
        ;   XREF to: 004b3c86 (CONDITIONAL_JUMP)  ; LAB_004b3c86
    LEA EAX,[ESP + 0x35c]               ; 004b3ad5
    PUSH EAX                            ; 004b3adc
    PUSH 0x62690d                       ; 004b3add | = "Can't access %s."
    MOV ESI,dword ptr [0x00678a60]      ; 004b3ae2 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b3ae8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b3ae9
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   Label: LAB_004b3ae9
    ADD ESP,0xc                         ; 004b3aee
    MOV EDI,dword ptr [ESP + 0x568]     ; 004b3af1
        ;   Label: LAB_004b3af1
    TEST EDI,EDI                        ; 004b3af8
    JZ 0x004b3b18                       ; 004b3afa
        ;   XREF to: 004b3b18 (CONDITIONAL_JUMP)  ; LAB_004b3b18
    PUSH 0xc4                           ; 004b3afc
    PUSH 0x62604b                       ; 004b3b01 | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b3b06
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3b07
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b3b0c
    XOR EAX,EAX                         ; 004b3b0f
    MOV dword ptr [ESP + 0x568],EAX     ; 004b3b11
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004b3b18
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004b3b18
    LEA EAX,[ESP + 0x560]               ; 004b3b1d
    PUSH EAX                            ; 004b3b24
    MOV EBP,dword ptr [ESP + 0x570]     ; 004b3b25
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3b2c
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3b31
    MOV EAX,EBP                         ; 004b3b34
    ADD ESP,0x574                       ; 004b3b36
    POP EBP                             ; 004b3b3c
    POP EDI                             ; 004b3b3d
    POP ESI                             ; 004b3b3e
    POP EBX                             ; 004b3b3f
    RET                                 ; 004b3b40
    LEA EAX,[ESP + 0x560]               ; 004b3b41
        ;   Label: LAB_004b3b41
    PUSH EAX                            ; 004b3b48
    XOR EBP,EBP                         ; 004b3b49
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3b4b
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3b50
    MOV EAX,EBP                         ; 004b3b53
    ADD ESP,0x574                       ; 004b3b55
    POP EBP                             ; 004b3b5b
    POP EDI                             ; 004b3b5c
    POP ESI                             ; 004b3b5d
    POP EBX                             ; 004b3b5e
    RET                                 ; 004b3b5f
    MOV EBX,EAX                         ; 004b3b60
        ;   Label: LAB_004b3b60
    SHL EAX,0x2                         ; 004b3b62
    SUB EAX,EBX                         ; 004b3b65
    SHL EAX,0x3                         ; 004b3b67
    MOV ESI,EAX                         ; 004b3b6a
    SHL ESI,0x4                         ; 004b3b6c
    SUB ESI,EAX                         ; 004b3b6f
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b3b71
    ADD EAX,ESI                         ; 004b3b78
    PUSH 0x2d12bd0                      ; 004b3b7a | g_VersionControlSession
    ADD EAX,0x104                       ; 004b3b7f
    PUSH EAX                            ; 004b3b84
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b3b85
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b3b8a
    MOV EBX,EAX                         ; 004b3b8d
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b3b8f
    ADD EAX,ESI                         ; 004b3b96
    TEST EBX,EBX                        ; 004b3b98
    JNZ 0x004b3bd0                      ; 004b3b9a
        ;   XREF to: 004b3bd0 (CONDITIONAL_JUMP)  ; LAB_004b3bd0
    PUSH EAX                            ; 004b3b9c
    PUSH 0x626884                       ; 004b3b9d | = "You already have %s checked out"
    MOV EBP,dword ptr [0x00678a60]      ; 004b3ba2 | g_CEditorToolsPtr
    PUSH EBP                            ; 004b3ba8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b3ba9
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b3bae
    LEA EAX,[ESP + 0x560]               ; 004b3bb1
        ;   Label: LAB_004b3bb1
    PUSH EAX                            ; 004b3bb8
    XOR EBP,EBP                         ; 004b3bb9
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3bbb
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3bc0
    MOV EAX,EBP                         ; 004b3bc3
    ADD ESP,0x574                       ; 004b3bc5
    POP EBP                             ; 004b3bcb
    POP EDI                             ; 004b3bcc
    POP ESI                             ; 004b3bcd
    POP EBX                             ; 004b3bce
    RET                                 ; 004b3bcf
    LEA EBX,[EAX + 0x104]               ; 004b3bd0
        ;   Label: LAB_004b3bd0
    PUSH EBX                            ; 004b3bd6
    PUSH EAX                            ; 004b3bd7
    PUSH 0x6268a4                       ; 004b3bd8 | = "%s is currently checked out by %s"
    MOV EDI,dword ptr [0x00678a60]      ; 004b3bdd | g_CEditorToolsPtr
    PUSH EDI                            ; 004b3be3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b3be4
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b3be9
    JMP 0x004b3bb1                      ; 004b3bec
        ;   XREF to: 004b3bb1 (UNCONDITIONAL_JUMP)  ; LAB_004b3bb1
    PUSH EBP                            ; 004b3bee
        ;   Label: LAB_004b3bee
    PUSH 0x62654c                       ; 004b3bef | = "A writable copy of %s exists.  Replac..."
    LEA EAX,[ESP + 0x8]                 ; 004b3bf4
    PUSH EAX                            ; 004b3bf8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004b3bf9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b3bfe
    PUSH 0x2d12bf4                      ; 004b3c01 | g_VersionControlSession.overwrite_writeable_choice
    LEA EAX,[ESP + 0x4]                 ; 004b3c06
    PUSH EAX                            ; 004b3c0a
    CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90 ; 004b3c0b
        ;   XREF to: 004b2f90 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char * dialog_title, int * overwrite_state)
    ADD ESP,0x8                         ; 004b3c10
    JMP 0x004b39bf                      ; 004b3c13
        ;   XREF to: 004b39bf (UNCONDITIONAL_JUMP)  ; LAB_004b39bf
    MOV EBP,EAX                         ; 004b3c18
        ;   Label: LAB_004b3c18
    LEA EAX,[ESP + 0x560]               ; 004b3c1a
    PUSH EAX                            ; 004b3c21
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3c22
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3c27
    MOV EAX,EBP                         ; 004b3c2a
    ADD ESP,0x574                       ; 004b3c2c
    POP EBP                             ; 004b3c32
    POP EDI                             ; 004b3c33
    POP ESI                             ; 004b3c34
    POP EBX                             ; 004b3c35
    RET                                 ; 004b3c36
    MOV ECX,0x626060                    ; 004b3c37 | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004b3c37
    MOV EBX,0xdd                        ; 004b3c3c
    PUSH 0x626075                       ; 004b3c41 | = "versionControlDirectory not set!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004b3c46 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004b3c4c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b3c52
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b3c57
    JMP 0x004b3a11                      ; 004b3c5a
        ;   XREF to: 004b3a11 (UNCONDITIONAL_JUMP)  ; LAB_004b3a11
    CALL crt_errno.c__errno_FUN_00601450 ; 004b3c5f
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_00601450()
        ;   Label: LAB_004b3c5f
    CMP dword ptr [EAX],0x6             ; 004b3c64
    JNZ 0x004b3c7f                      ; 004b3c67
        ;   XREF to: 004b3c7f (CONDITIONAL_JUMP)  ; LAB_004b3c7f
    PUSH 0x1f4                          ; 004b3c69
    INC ESI                             ; 004b3c6e
    CALL dword ptr CS:[0x611644]        ; 004b3c6f | g_SleepFunc
    CMP ESI,0xa                         ; 004b3c76
    JL 0x004b3a90                       ; 004b3c79
        ;   XREF to: 004b3a90 (CONDITIONAL_JUMP)  ; LAB_004b3a90
    XOR EBX,EBX                         ; 004b3c7f
        ;   Label: LAB_004b3c7f
    JMP 0x004b3ac6                      ; 004b3c81
        ;   XREF to: 004b3ac6 (UNCONDITIONAL_JUMP)  ; LAB_004b3ac6
    LEA EAX,[ESP + 0x568]               ; 004b3c86
        ;   Label: LAB_004b3c86
    PUSH EAX                            ; 004b3c8d
    LEA EAX,[ESP + 0x564]               ; 004b3c8e
    PUSH EAX                            ; 004b3c95
    CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 ; 004b3c96
        ;   XREF to: 004b2a60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList * this_ptr, _FILE * * file)
    ADD ESP,0x8                         ; 004b3c9b
    TEST EAX,EAX                        ; 004b3c9e
    JNZ 0x004b3cd2                      ; 004b3ca0
        ;   XREF to: 004b3cd2 (CONDITIONAL_JUMP)  ; LAB_004b3cd2
    MOV ECX,dword ptr [ESP + 0x568]     ; 004b3ca2
    TEST ECX,ECX                        ; 004b3ca9
    JZ 0x004b3af1                       ; 004b3cab
        ;   XREF to: 004b3af1 (CONDITIONAL_JUMP)  ; LAB_004b3af1
    PUSH 0xc4                           ; 004b3cb1
    PUSH 0x62604b                       ; 004b3cb6 | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004b3cbb
    XOR ESI,ESI                         ; 004b3cbc
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3cbe
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b3cc3
    MOV dword ptr [ESP + 0x568],ESI     ; 004b3cc6
    JMP 0x004b3b18                      ; 004b3ccd
        ;   XREF to: 004b3b18 (UNCONDITIONAL_JUMP)  ; LAB_004b3b18
    PUSH EBP                            ; 004b3cd2
        ;   Label: LAB_004b3cd2
    LEA EAX,[ESP + 0x564]               ; 004b3cd3
    PUSH EAX                            ; 004b3cda
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b3cdb
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b3ce0
    MOV EDI,EAX                         ; 004b3ce3
    TEST EAX,EAX                        ; 004b3ce5
    JL 0x004b3d9f                       ; 004b3ce7
        ;   XREF to: 004b3d9f (CONDITIONAL_JUMP)  ; LAB_004b3d9f
    MOV ESI,dword ptr [ESP + 0x568]     ; 004b3ced
    TEST ESI,ESI                        ; 004b3cf4
    JZ 0x004b3d14                       ; 004b3cf6
        ;   XREF to: 004b3d14 (CONDITIONAL_JUMP)  ; LAB_004b3d14
    PUSH 0xc4                           ; 004b3cf8
    PUSH 0x62604b                       ; 004b3cfd | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004b3d02
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3d03
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b3d08
    XOR EAX,EAX                         ; 004b3d0b
    MOV dword ptr [ESP + 0x568],EAX     ; 004b3d0d
    LEA EAX,[EDI*0x4 + 0x0]             ; 004b3d14
        ;   Label: LAB_004b3d14
    SUB EAX,EDI                         ; 004b3d1b
    SHL EAX,0x3                         ; 004b3d1d
    MOV ESI,EAX                         ; 004b3d20
    SHL ESI,0x4                         ; 004b3d22
    SUB ESI,EAX                         ; 004b3d25
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b3d27
    ADD EAX,ESI                         ; 004b3d2e
    PUSH 0x2d12bd0                      ; 004b3d30 | g_VersionControlSession
    ADD EAX,0x104                       ; 004b3d35
    PUSH EAX                            ; 004b3d3a
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004b3d3b
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b3d40
    MOV EBX,EAX                         ; 004b3d43
    MOV EAX,dword ptr [ESP + 0x564]     ; 004b3d45
    ADD EAX,ESI                         ; 004b3d4c
    TEST EBX,EBX                        ; 004b3d4e
    JNZ 0x004b3d75                      ; 004b3d50
        ;   XREF to: 004b3d75 (CONDITIONAL_JUMP)  ; LAB_004b3d75
    PUSH EAX                            ; 004b3d52
    PUSH 0x62691e                       ; 004b3d53 | = "You already have %s checked out"
    MOV ECX,dword ptr [0x00678a60]      ; 004b3d58 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b3d5e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b3d5f
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b3d64
    XOR EBX,EBX                         ; 004b3d67
    MOV dword ptr [ESP + 0x56c],EBX     ; 004b3d69
    JMP 0x004b3af1                      ; 004b3d70
        ;   XREF to: 004b3af1 (UNCONDITIONAL_JUMP)  ; LAB_004b3af1
    LEA EBX,[EAX + 0x104]               ; 004b3d75
        ;   Label: LAB_004b3d75
    PUSH EBX                            ; 004b3d7b
    PUSH EAX                            ; 004b3d7c
    PUSH 0x62693e                       ; 004b3d7d | = "%s is currently checked out by %s"
    MOV EDX,dword ptr [0x00678a60]      ; 004b3d82 | g_CEditorToolsPtr
    PUSH EDX                            ; 004b3d88 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b3d89
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b3d8e
    XOR EBX,EBX                         ; 004b3d91
    MOV dword ptr [ESP + 0x56c],EBX     ; 004b3d93
    JMP 0x004b3af1                      ; 004b3d9a
        ;   XREF to: 004b3af1 (UNCONDITIONAL_JUMP)  ; LAB_004b3af1
    LEA EDI,[ESP + 0x1f4]               ; 004b3d9f
        ;   Label: LAB_004b3d9f
    MOV ESI,EBP                         ; 004b3da6
    PUSH EDI                            ; 004b3da8
    MOV AL,byte ptr [ESI]               ; 004b3da9
        ;   Label: LAB_004b3da9
    MOV byte ptr [EDI],AL               ; 004b3dab
    CMP AL,0x0                          ; 004b3dad
    JZ 0x004b3dc1                       ; 004b3daf
        ;   XREF to: 004b3dc1 (CONDITIONAL_JUMP)  ; LAB_004b3dc1
    MOV AL,byte ptr [ESI + 0x1]         ; 004b3db1
    ADD ESI,0x2                         ; 004b3db4
    MOV byte ptr [EDI + 0x1],AL         ; 004b3db7
    ADD EDI,0x2                         ; 004b3dba
    CMP AL,0x0                          ; 004b3dbd
    JNZ 0x004b3da9                      ; 004b3dbf
        ;   XREF to: 004b3da9 (CONDITIONAL_JUMP)  ; LAB_004b3da9
    POP EDI                             ; 004b3dc1
        ;   Label: LAB_004b3dc1
    MOV ESI,0x2d12bd0                   ; 004b3dc2 | g_VersionControlSession
    LEA EDI,[ESP + 0x2f8]               ; 004b3dc7
    PUSH EDI                            ; 004b3dce
    MOV AL,byte ptr [ESI]               ; 004b3dcf | g_VersionControlSession | g_VersionControlSession.primary_username[2]
        ;   Label: LAB_004b3dcf
    MOV byte ptr [EDI],AL               ; 004b3dd1
    CMP AL,0x0                          ; 004b3dd3
    JZ 0x004b3de7                       ; 004b3dd5
        ;   XREF to: 004b3de7 (CONDITIONAL_JUMP)  ; LAB_004b3de7
    MOV AL,byte ptr [ESI + 0x1]         ; 004b3dd7 | g_VersionControlSession.primary_username[1] | g_VersionControlSession.primary_username[3]
    ADD ESI,0x2                         ; 004b3dda
    MOV byte ptr [EDI + 0x1],AL         ; 004b3ddd
    ADD EDI,0x2                         ; 004b3de0
    CMP AL,0x0                          ; 004b3de3
    JNZ 0x004b3dcf                      ; 004b3de5
        ;   XREF to: 004b3dcf (CONDITIONAL_JUMP)  ; LAB_004b3dcf
    POP EDI                             ; 004b3de7
        ;   Label: LAB_004b3de7
    LEA EAX,[ESP + 0x1f4]               ; 004b3de8
    PUSH EAX                            ; 004b3def
    LEA EAX,[ESP + 0x564]               ; 004b3df0
    PUSH EAX                            ; 004b3df7
    CALL engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00 ; 004b3df8
        ;   XREF to: 004b2d00 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList * this_ptr, CCheckOutItem * new_entry)
    ADD ESP,0x8                         ; 004b3dfd
    TEST EAX,EAX                        ; 004b3e00
    JNZ 0x004b3e44                      ; 004b3e02
        ;   XREF to: 004b3e44 (CONDITIONAL_JUMP)  ; LAB_004b3e44
    MOV EDI,dword ptr [ESP + 0x568]     ; 004b3e04
    TEST EDI,EDI                        ; 004b3e0b
    JZ 0x004b3e2b                       ; 004b3e0d
        ;   XREF to: 004b3e2b (CONDITIONAL_JUMP)  ; LAB_004b3e2b
    PUSH 0xc4                           ; 004b3e0f
    PUSH 0x62604b                       ; 004b3e14 | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b3e19
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3e1a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b3e1f
    XOR EAX,EAX                         ; 004b3e22
    MOV dword ptr [ESP + 0x568],EAX     ; 004b3e24
    PUSH 0x626960                       ; 004b3e2b | = "Out of memory...Restart the applicati..."
        ;   Label: LAB_004b3e2b
    MOV EDX,dword ptr [0x00678a60]      ; 004b3e30 | g_CEditorToolsPtr
    PUSH EDX                            ; 004b3e36 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b3e37
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b3e3c
    JMP 0x004b3af1                      ; 004b3e3f
        ;   XREF to: 004b3af1 (UNCONDITIONAL_JUMP)  ; LAB_004b3af1
    LEA EAX,[ESP + 0x568]               ; 004b3e44
        ;   Label: LAB_004b3e44
    PUSH EAX                            ; 004b3e4b
    LEA EAX,[ESP + 0x564]               ; 004b3e4c
    PUSH EAX                            ; 004b3e53
    CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 ; 004b3e54
        ;   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList * this_ptr, _FILE * * file_handle)
    ADD ESP,0x8                         ; 004b3e59
    TEST EAX,EAX                        ; 004b3e5c
    JZ 0x004b3af1                       ; 004b3e5e
        ;   XREF to: 004b3af1 (CONDITIONAL_JUMP)  ; LAB_004b3af1
    MOV ECX,dword ptr [ESP + 0x568]     ; 004b3e64
    TEST ECX,ECX                        ; 004b3e6b
    JZ 0x004b3e8b                       ; 004b3e6d
        ;   XREF to: 004b3e8b (CONDITIONAL_JUMP)  ; LAB_004b3e8b
    PUSH 0xc4                           ; 004b3e6f
    PUSH 0x62604b                       ; 004b3e74 | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004b3e79
    XOR ESI,ESI                         ; 004b3e7a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3e7c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b3e81
    MOV dword ptr [ESP + 0x568],ESI     ; 004b3e84
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004b3e8b
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004b3e8b
    PUSH EBP                            ; 004b3e90
    PUSH 0x6269ae                       ; 004b3e91 | = "Getting %s..."
    MOV EDI,dword ptr [0x00678a60]      ; 004b3e96 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b3e9c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b3e9d
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b3ea2
    PUSH EBP                            ; 004b3ea5
    MOV EAX,dword ptr [ESP + 0x58c]     ; 004b3ea6
    PUSH EAX                            ; 004b3ead
    CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 ; 004b3eae
        ;   XREF to: 004b3220 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)
    ADD ESP,0x8                         ; 004b3eb3
    TEST EAX,EAX                        ; 004b3eb6
    JNZ 0x004b3ecb                      ; 004b3eb8
        ;   XREF to: 004b3ecb (CONDITIONAL_JUMP)  ; LAB_004b3ecb
    PUSH EBP                            ; 004b3eba
    MOV EDX,dword ptr [ESP + 0x58c]     ; 004b3ebb
    PUSH EDX                            ; 004b3ec2
    CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 ; 004b3ec3
        ;   XREF to: 004b35a0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b3ec8
    LEA EAX,[ESP + 0x35c]               ; 004b3ecb
        ;   Label: LAB_004b3ecb
    PUSH EAX                            ; 004b3ed2
    PUSH 0x6269bc                       ; 004b3ed3 | = "Clearing read-only bit for %s..."
    MOV ECX,dword ptr [0x00678a60]      ; 004b3ed8 | g_CEditorToolsPtr
    PUSH ECX                            ; 004b3ede | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b3edf
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b3ee4
    PUSH EBP                            ; 004b3ee7
    PUSH 0x0                            ; 004b3ee8
    CALL engine_dosio.c_getFileSizeWithFinder_FUN_00481960 ; 004b3eea
        ;   XREF to: 00481960 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSizeWithFinder_FUN_00481960(char * directory, char * filename)
    ADD ESP,0x8                         ; 004b3eef
    MOV EBX,EAX                         ; 004b3ef2
    TEST EAX,EAX                        ; 004b3ef4
    JL 0x004b3f0c                       ; 004b3ef6
        ;   XREF to: 004b3f0c (CONDITIONAL_JUMP)  ; LAB_004b3f0c
    TEST AL,0x8                         ; 004b3ef8
    JZ 0x004b3f0c                       ; 004b3efa
        ;   XREF to: 004b3f0c (CONDITIONAL_JUMP)  ; LAB_004b3f0c
    AND AL,0xf7                         ; 004b3efc
    PUSH EAX                            ; 004b3efe
    PUSH EBP                            ; 004b3eff
    CALL engine_dosio.c_setFileAttributes_FUN_004819f0 ; 004b3f00
        ;   XREF to: 004819f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_setFileAttributes_FUN_004819f0(char * filename, byte flags)
    ADD ESP,0x8                         ; 004b3f05
    TEST EAX,EAX                        ; 004b3f08
    JZ 0x004b3f32                       ; 004b3f0a
        ;   XREF to: 004b3f32 (CONDITIONAL_JUMP)  ; LAB_004b3f32
    TEST EBX,EBX                        ; 004b3f0c
        ;   Label: LAB_004b3f0c
    JL 0x004b3f32                       ; 004b3f0e
        ;   XREF to: 004b3f32 (CONDITIONAL_JUMP)  ; LAB_004b3f32
    LEA EAX,[ESP + 0x560]               ; 004b3f10
    PUSH EAX                            ; 004b3f17
    MOV EBP,0x1                         ; 004b3f18
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3f1d
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3f22
    MOV EAX,EBP                         ; 004b3f25
    ADD ESP,0x574                       ; 004b3f27
    POP EBP                             ; 004b3f2d
    POP EDI                             ; 004b3f2e
    POP ESI                             ; 004b3f2f
    POP EBX                             ; 004b3f30
    RET                                 ; 004b3f31
    PUSH EBP                            ; 004b3f32
        ;   Label: LAB_004b3f32
    PUSH 0x6269dd                       ; 004b3f33 | = "Error turning off read-only bit for %s"
    MOV EBX,dword ptr [0x00678a60]      ; 004b3f38 | g_CEditorToolsPtr
    PUSH EBX                            ; 004b3f3e | g_CEditorToolsInstance
    JMP 0x004b3ae9                      ; 004b3f3f
        ;   XREF to: 004b3ae9 (UNCONDITIONAL_JUMP)  ; LAB_004b3ae9

