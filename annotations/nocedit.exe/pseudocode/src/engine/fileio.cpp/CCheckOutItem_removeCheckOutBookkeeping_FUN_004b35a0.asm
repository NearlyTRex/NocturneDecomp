; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, void * unused_param)
;
; Parameters:
; CCheckOutItem *  Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   unused_param
; Local Variables:
; undefined        Stack[-0x224]:1  local_224
; undefined1       Stack[-0x223]:1  local_223
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[6]:
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3ec3
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b456e
;   engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0 at 004b41fe
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb44c
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004badd4
;   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 at 004bc337
;
; Referenced Globals:
;   Sleep* Sleep = 00212228
;   TerminatedCString s_engine_fileio_cpp_0062604b
;   TerminatedCString s_engine_fileio_cpp_00626060
;   TerminatedCString s_versionControlDirectory__00626075
;   TerminatedCString s_checkout_txt_00626096
;   undefined4 s_heckout.txt_00626097
;   undefined4 s_eckout.txt_00626098
;   undefined4 s_ckout.txt_00626099
;   TerminatedCString s_engine_fileio_cpp_00626129
;   TerminatedCString s_engine_fileio_cpp_006266f4
;   TerminatedCString s_removeCheckOutBookkeepin_00626709
;   TerminatedCString s_Logging_on_as_version_co_0062673b
;   TerminatedCString s_Marking_s_as_no_longer_c_00626761
;   TerminatedCString s_r_t_00626785
;   TerminatedCString s_Can_t_access_s_00626789
;   ... and 9 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_errno.c_errno_FUN_00601450
;   crt_stdio.c_setvbuf_FUN_00601490
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
;   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
;   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
;   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
;   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
;   engine_fileio.cpp_logOffVersionControl_FUN_004b2830
;   engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b35a0
        ;   Label: engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
    PUSH ESI                            ; 004b35a1
    PUSH EDI                            ; 004b35a2
    PUSH EBP                            ; 004b35a3
    SUB ESP,0x214                       ; 004b35a4
    MOV EBP,dword ptr [ESP + 0x22c]     ; 004b35aa
    XOR EDX,EDX                         ; 004b35b1
    MOV AH,byte ptr [0x02d12bd0]        ; 004b35b3 | g_VersionControlSession
    MOV dword ptr [ESP + 0x20c],EDX     ; 004b35b9
    TEST AH,AH                          ; 004b35c0
    JZ 0x004b3715                       ; 004b35c2
        ;   XREF to: 004b3715 (CONDITIONAL_JUMP)  ; LAB_004b3715
    CMP byte ptr [0x02d12bf8],0x0       ; 004b35c8 | g_VersionControlSession.network_username[0]
        ;   Label: LAB_004b35c8
    JZ 0x004b35f2                       ; 004b35cf
        ;   XREF to: 004b35f2 (CONDITIONAL_JUMP)  ; LAB_004b35f2
    PUSH 0x62673b                       ; 004b35d1 | = "Logging on as version control user..."
    MOV ESI,dword ptr [0x00678a60]      ; 004b35d6 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b35dc | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b35dd
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0x8                         ; 004b35e2
    CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770 ; 004b35e5
        ;   XREF to: 004b2770 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770()
    TEST EAX,EAX                        ; 004b35ea
    JZ 0x004b36da                       ; 004b35ec
        ;   XREF to: 004b36da (CONDITIONAL_JUMP)  ; LAB_004b36da
    PUSH EBP                            ; 004b35f2
        ;   Label: LAB_004b35f2
    PUSH 0x626761                       ; 004b35f3 | = "Marking %s as no longer checked out"
    MOV EDI,dword ptr [0x00678a60]      ; 004b35f8 | g_CEditorToolsPtr
    PUSH EDI                            ; 004b35fe | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b35ff
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    LEA EDI,[ESP + 0xc]                 ; 004b3604
    MOV DH,byte ptr [0x02d12ac8]        ; 004b3608 | g_VersionControlDirectory
    ADD ESP,0xc                         ; 004b360e
    TEST DH,DH                          ; 004b3611
    JZ 0x004b373d                       ; 004b3613
        ;   XREF to: 004b373d (CONDITIONAL_JUMP)  ; LAB_004b373d
    LEA EAX,[ESP + 0x104]               ; 004b3619
        ;   Label: LAB_004b3619
    PUSH EAX                            ; 004b3620
    LEA EAX,[ESP + 0x214]               ; 004b3621
    PUSH EAX                            ; 004b3628
    PUSH 0x2d12ac8                      ; 004b3629 | g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b362e
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004b3633
    PUSH 0x0                            ; 004b3636
    PUSH 0x0                            ; 004b3638
    LEA EAX,[ESP + 0x10c]               ; 004b363a
    PUSH EAX                            ; 004b3641
    LEA EAX,[ESP + 0x21c]               ; 004b3642
    PUSH EAX                            ; 004b3649
    PUSH EDI                            ; 004b364a
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b364b
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b3650
    MOV ESI,0x626096                    ; 004b3653 | = "checkout.txt"
    PUSH EDI                            ; 004b3658
    SUB ECX,ECX                         ; 004b3659
    DEC ECX                             ; 004b365b
    MOV AL,0x0                          ; 004b365c
    SCASB.REPNE ES:EDI                  ; 004b365e
    DEC EDI                             ; 004b3660
    MOV AL,byte ptr [ESI]               ; 004b3661 | = "checkout.txt" | s_eckout.txt_00626098
        ;   Label: LAB_004b3661
    MOV byte ptr [EDI],AL               ; 004b3663
    CMP AL,0x0                          ; 004b3665
    JZ 0x004b3679                       ; 004b3667
        ;   XREF to: 004b3679 (CONDITIONAL_JUMP)  ; LAB_004b3679
    MOV AL,byte ptr [ESI + 0x1]         ; 004b3669 | s_heckout.txt_00626097 | s_ckout.txt_00626099
    ADD ESI,0x2                         ; 004b366c
    MOV byte ptr [EDI + 0x1],AL         ; 004b366f
    ADD EDI,0x2                         ; 004b3672
    CMP AL,0x0                          ; 004b3675
    JNZ 0x004b3661                      ; 004b3677
        ;   XREF to: 004b3661 (CONDITIONAL_JUMP)  ; LAB_004b3661
    POP EDI                             ; 004b3679
        ;   Label: LAB_004b3679
    MOV EDI,ESP                         ; 004b367a
    XOR ESI,ESI                         ; 004b367c
    PUSH 0x153                          ; 004b367e
        ;   Label: LAB_004b367e
    PUSH 0x626129                       ; 004b3683 | = "..\\engine\\fileio.cpp"
    PUSH 0x626785                       ; 004b3688 | = "r+t"
    PUSH 0x0                            ; 004b368d
    PUSH EDI                            ; 004b368f
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b3690
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004b3695
    ADD ESP,0x14                        ; 004b3697
    TEST EAX,EAX                        ; 004b369a
    JZ 0x004b3764                       ; 004b369c
        ;   XREF to: 004b3764 (CONDITIONAL_JUMP)  ; LAB_004b3764
    PUSH 0x400                          ; 004b36a2
    PUSH 0x0                            ; 004b36a7
    PUSH 0x0                            ; 004b36a9
    PUSH EAX                            ; 004b36ab
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b36ac
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004b36b1
    MOV dword ptr [ESP + 0x20c],EBX     ; 004b36b4
        ;   Label: LAB_004b36b4
    TEST EBX,EBX                        ; 004b36bb
    JNZ 0x004b378b                      ; 004b36bd
        ;   XREF to: 004b378b (CONDITIONAL_JUMP)  ; LAB_004b378b
    MOV EAX,ESP                         ; 004b36c3
    PUSH EAX                            ; 004b36c5
    PUSH 0x626789                       ; 004b36c6 | = "Can't access %s."
    MOV EBX,dword ptr [0x00678a60]      ; 004b36cb | g_CEditorToolsPtr
    PUSH EBX                            ; 004b36d1 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b36d2
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b36d7
    MOV ESI,dword ptr [ESP + 0x20c]     ; 004b36da
        ;   Label: LAB_004b36da
    TEST ESI,ESI                        ; 004b36e1
    JZ 0x004b3701                       ; 004b36e3
        ;   XREF to: 004b3701 (CONDITIONAL_JUMP)  ; LAB_004b3701
    PUSH 0xc4                           ; 004b36e5
    PUSH 0x62604b                       ; 004b36ea | = "..\\engine\\fileio.cpp"
    PUSH ESI                            ; 004b36ef
    XOR EBP,EBP                         ; 004b36f0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b36f2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b36f7
    MOV dword ptr [ESP + 0x20c],EBP     ; 004b36fa
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004b3701
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004b3701
    XOR EBX,EBX                         ; 004b3706
    MOV EAX,EBX                         ; 004b3708
    ADD ESP,0x214                       ; 004b370a
        ;   Label: LAB_004b370a
    POP EBP                             ; 004b3710
    POP EDI                             ; 004b3711
    POP ESI                             ; 004b3712
    POP EBX                             ; 004b3713
    RET                                 ; 004b3714
    MOV ECX,0x6266f4                    ; 004b3715 | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004b3715
    MOV EBX,0x402                       ; 004b371a
    PUSH 0x626709                       ; 004b371f | = "removeCheckOutBookkeeping - don't kno..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004b3724 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004b372a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b3730
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b3735
    JMP 0x004b35c8                      ; 004b3738
        ;   XREF to: 004b35c8 (UNCONDITIONAL_JUMP)  ; LAB_004b35c8
    MOV EAX,0x626060                    ; 004b373d | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004b373d
    MOV EDX,0xdd                        ; 004b3742
    PUSH 0x626075                       ; 004b3747 | = "versionControlDirectory not set!"
    MOV [0x02f0ca48],EAX                ; 004b374c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004b3751 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b3757
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b375c
    JMP 0x004b3619                      ; 004b375f
        ;   XREF to: 004b3619 (UNCONDITIONAL_JUMP)  ; LAB_004b3619
    CALL crt_errno.c_errno_FUN_00601450 ; 004b3764
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c_errno_FUN_00601450()
        ;   Label: LAB_004b3764
    CMP dword ptr [EAX],0x6             ; 004b3769
    JNZ 0x004b3784                      ; 004b376c
        ;   XREF to: 004b3784 (CONDITIONAL_JUMP)  ; LAB_004b3784
    PUSH 0x1f4                          ; 004b376e
    INC ESI                             ; 004b3773
    CALL dword ptr CS:[0x611644]        ; 004b3774 | Sleep
    CMP ESI,0xa                         ; 004b377b
    JL 0x004b367e                       ; 004b377e
        ;   XREF to: 004b367e (CONDITIONAL_JUMP)  ; LAB_004b367e
    XOR EBX,EBX                         ; 004b3784
        ;   Label: LAB_004b3784
    JMP 0x004b36b4                      ; 004b3786
        ;   XREF to: 004b36b4 (UNCONDITIONAL_JUMP)  ; LAB_004b36b4
    LEA EAX,[ESP + 0x20c]               ; 004b378b
        ;   Label: LAB_004b378b
    PUSH EAX                            ; 004b3792
    LEA EAX,[ESP + 0x208]               ; 004b3793
    XOR EBX,EBX                         ; 004b379a
    PUSH EAX                            ; 004b379c
    MOV dword ptr [ESP + 0x20c],EBX     ; 004b379d
    MOV dword ptr [ESP + 0x210],EBX     ; 004b37a4
    CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 ; 004b37ab
        ;   XREF to: 004b2a60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60(CCheckOutList * this_ptr, FILE * * file)
    ADD ESP,0x8                         ; 004b37b0
    TEST EAX,EAX                        ; 004b37b3
    JZ 0x004b3859                       ; 004b37b5
        ;   XREF to: 004b3859 (CONDITIONAL_JUMP)  ; LAB_004b3859
    PUSH EBP                            ; 004b37bb
    LEA EAX,[ESP + 0x208]               ; 004b37bc
    PUSH EAX                            ; 004b37c3
    CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60 ; 004b37c4
        ;   XREF to: 004b2e60 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60(CCheckOutList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004b37c9
    TEST EAX,EAX                        ; 004b37cc
    JL 0x004b386e                       ; 004b37ce
        ;   XREF to: 004b386e (CONDITIONAL_JUMP)  ; LAB_004b386e
    PUSH EAX                            ; 004b37d4
    LEA EAX,[ESP + 0x208]               ; 004b37d5
    PUSH EAX                            ; 004b37dc
    CALL engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70 ; 004b37dd
        ;   XREF to: 004b2d70 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList * this_ptr, int entry_index)
    ADD ESP,0x8                         ; 004b37e2
    TEST EAX,EAX                        ; 004b37e5
    JZ 0x004b38cf                       ; 004b37e7
        ;   XREF to: 004b38cf (CONDITIONAL_JUMP)  ; LAB_004b38cf
    LEA EAX,[ESP + 0x20c]               ; 004b37ed
    PUSH EAX                            ; 004b37f4
    LEA EAX,[ESP + 0x208]               ; 004b37f5
    PUSH EAX                            ; 004b37fc
    CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 ; 004b37fd
        ;   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0(CCheckOutList * this_ptr, FILE * * file_handle)
    ADD ESP,0x8                         ; 004b3802
    TEST EAX,EAX                        ; 004b3805
    JZ 0x004b3908                       ; 004b3807
        ;   XREF to: 004b3908 (CONDITIONAL_JUMP)  ; LAB_004b3908
    MOV ECX,dword ptr [ESP + 0x20c]     ; 004b380d
    TEST ECX,ECX                        ; 004b3814
    JZ 0x004b3832                       ; 004b3816
        ;   XREF to: 004b3832 (CONDITIONAL_JUMP)  ; LAB_004b3832
    PUSH 0xc4                           ; 004b3818
    PUSH 0x62604b                       ; 004b381d | = "..\\engine\\fileio.cpp"
    PUSH ECX                            ; 004b3822
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3823
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b3828
    MOV dword ptr [ESP + 0x20c],EBX     ; 004b382b
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004b3832
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004b3832
    LEA EAX,[ESP + 0x204]               ; 004b3837
    PUSH EAX                            ; 004b383e
    MOV EBX,0x1                         ; 004b383f
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3844
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3849
    MOV EAX,EBX                         ; 004b384c
    ADD ESP,0x214                       ; 004b384e
    POP EBP                             ; 004b3854
    POP EDI                             ; 004b3855
    POP ESI                             ; 004b3856
    POP EBX                             ; 004b3857
    RET                                 ; 004b3858
    LEA EAX,[ESP + 0x204]               ; 004b3859
        ;   Label: LAB_004b3859
    PUSH EAX                            ; 004b3860
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3861
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3866
    JMP 0x004b36da                      ; 004b3869
        ;   XREF to: 004b36da (UNCONDITIONAL_JUMP)  ; LAB_004b36da
    MOV EDI,dword ptr [ESP + 0x20c]     ; 004b386e
        ;   Label: LAB_004b386e
    TEST EDI,EDI                        ; 004b3875
    JZ 0x004b3893                       ; 004b3877
        ;   XREF to: 004b3893 (CONDITIONAL_JUMP)  ; LAB_004b3893
    PUSH 0xc4                           ; 004b3879
    PUSH 0x62604b                       ; 004b387e | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b3883
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b3884
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b3889
    MOV dword ptr [ESP + 0x20c],EBX     ; 004b388c
    CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830 ; 004b3893
        ;   XREF to: 004b2830 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_logOffVersionControl_FUN_004b2830()
        ;   Label: LAB_004b3893
    PUSH EBP                            ; 004b3898
    PUSH 0x62679a                       ; 004b3899 | = "Tried to undo checkout on %s, but you..."
    MOV ECX,dword ptr [0x00678a60]      ; 004b389e | g_CEditorToolsPtr
    PUSH ECX                            ; 004b38a4 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 004b38a5
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b38aa
    LEA EAX,[ESP + 0x204]               ; 004b38ad
    PUSH EAX                            ; 004b38b4
    MOV EBX,0x1                         ; 004b38b5
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b38ba
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b38bf
    MOV EAX,EBX                         ; 004b38c2
    ADD ESP,0x214                       ; 004b38c4
    POP EBP                             ; 004b38ca
    POP EDI                             ; 004b38cb
    POP ESI                             ; 004b38cc
    POP EBX                             ; 004b38cd
    RET                                 ; 004b38ce
    MOV EDI,dword ptr [ESP + 0x20c]     ; 004b38cf
        ;   Label: LAB_004b38cf
    TEST EDI,EDI                        ; 004b38d6
    JZ 0x004b38f4                       ; 004b38d8
        ;   XREF to: 004b38f4 (CONDITIONAL_JUMP)  ; LAB_004b38f4
    PUSH 0xc4                           ; 004b38da
    PUSH 0x62604b                       ; 004b38df | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b38e4
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004b38e5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004b38ea
    MOV dword ptr [ESP + 0x20c],EBX     ; 004b38ed
    PUSH 0x626836                       ; 004b38f4 | = "Out of memory...Restart the applicati..."
        ;   Label: LAB_004b38f4
    MOV EDX,dword ptr [0x00678a60]      ; 004b38f9 | g_CEditorToolsPtr
    PUSH EDX                            ; 004b38ff | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b3900
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004b3905
    LEA EAX,[ESP + 0x204]               ; 004b3908
        ;   Label: LAB_004b3908
    PUSH EAX                            ; 004b390f
    CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860 ; 004b3910
        ;   XREF to: 004b2860 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList * this_ptr)
    ADD ESP,0x4                         ; 004b3915
    JMP 0x004b36da                      ; 004b3918
        ;   XREF to: 004b36da (UNCONDITIONAL_JUMP)  ; LAB_004b36da

