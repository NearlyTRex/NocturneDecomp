; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_CFileManager_undoCheckout_FUN_004bc2b0(CFileManager *this_ptr,CCheckOutItem *checkout_item,char *source_path)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; CCheckOutItem *  Stack[0x8]:4   checkout_item
; char *           Stack[0xc]:4   source_path
; Local Variables:
; CPickList        Stack[-0x7bc]:936  local_7bc
; char[500]        Stack[-0x414]:500  local_414
; char[260]        Stack[-0x220]:260  local_220
; char[260]        Stack[-0x11c]:260  local_11c
; CStrList         Stack[-0x18]:16  local_18
;
; Referenced Globals:
;   TerminatedCString s_anon_00626a5d
;   TerminatedCString s_Select_file_to_undo_chec_00626a5f
;   TerminatedCString s_Remounting_all_pods_0062759a
;   TerminatedCString s_pod_00628fb9
;   TerminatedCString s_Select_file_to_undo_chec_00628fbf
;   TerminatedCString s_Delete_local_files_and_m_00628fdd
;   TerminatedCString s_Delete_local_files_but_d_00628ffa
;   TerminatedCString s_Keep_files_extracted_and_0062901d
;   TerminatedCString s_Undo_checkout_on_s_00629045
;   TerminatedCString s_Delete_local_files_00629059
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsInstance
;   CDemonPod g_CDemonPodInstance
;   undefined4 DAT_030e5224
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
;   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
;   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0
;   engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
;   engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0
;   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0
;   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620
;   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
;   engine_pod.cpp_CPod_cleanup_FUN_00550c80
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc2b0
        ;   Label: engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0
    PUSH ESI                            ; 004bc2b1
    SUB ESP,0x7b4                       ; 004bc2b2
    MOV EBX,dword ptr [ESP + 0x7c0]     ; 004bc2b8
    MOV ESI,dword ptr [ESP + 0x7c4]     ; 004bc2bf
    PUSH EBX                            ; 004bc2c6
    CALL engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 ; 004bc2c7
        ;   XREF to: 004bccf0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0(CFileManager * this_ptr)
    ADD ESP,0x4                         ; 004bc2cc
    TEST EAX,EAX                        ; 004bc2cf
    JNZ 0x004bc2e0                      ; 004bc2d1
        ;   XREF to: 004bc2e0 (CONDITIONAL_JUMP)  ; LAB_004bc2e0
    XOR EBX,EBX                         ; 004bc2d3
        ;   Label: LAB_004bc2d3
    MOV EAX,EBX                         ; 004bc2d5
    ADD ESP,0x7b4                       ; 004bc2d7
    POP ESI                             ; 004bc2dd
    POP EBX                             ; 004bc2de
    RET                                 ; 004bc2df
    PUSH 0x628fb9                       ; 004bc2e0 | = "*.pod"
        ;   Label: LAB_004bc2e0
    PUSH 0x628fbf                       ; 004bc2e5 | = "Select file to undo check out"
    LEA EAX,[ESP + 0x6a8]               ; 004bc2ea
    PUSH EAX                            ; 004bc2f1
    MOV EDX,dword ptr [ESP + 0x7d4]     ; 004bc2f2
    PUSH EDX                            ; 004bc2f9
    PUSH ESI                            ; 004bc2fa
    CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 ; 004bc2fb
        ;   XREF to: 004b3f50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * preselected_filename, char * out_buffer, char * dialog_title, ...)
    ADD ESP,0x14                        ; 004bc300
    TEST EAX,EAX                        ; 004bc303
    JZ 0x004bc2d3                       ; 004bc305
        ;   XREF to: 004bc2d3 (CONDITIONAL_JUMP)  ; LAB_004bc2d3
    PUSH 0x626a5d                       ; 004bc307 | = "*"
    PUSH 0x626a5f                       ; 004bc30c | = "Select file to undo check out"
    LEA EAX,[ESP + 0x5a4]               ; 004bc311
    PUSH EAX                            ; 004bc318
    LEA EAX,[ESP + 0x6ac]               ; 004bc319
    PUSH EAX                            ; 004bc320
    PUSH ESI                            ; 004bc321
    CALL engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 ; 004bc322
        ;   XREF to: 004b3f50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * preselected_filename, char * out_buffer, char * dialog_title, ...)
    ADD ESP,0x14                        ; 004bc327
    TEST EAX,EAX                        ; 004bc32a
    JZ 0x004bc2d3                       ; 004bc32c
        ;   XREF to: 004bc2d3 (CONDITIONAL_JUMP)  ; LAB_004bc2d3
    LEA EAX,[ESP + 0x59c]               ; 004bc32e
    PUSH EAX                            ; 004bc335
    PUSH ESI                            ; 004bc336
    CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 ; 004bc337
        ;   XREF to: 004b35a0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, void * unused_param)
    ADD ESP,0x8                         ; 004bc33c
    TEST EAX,EAX                        ; 004bc33f
    JZ 0x004bc2d3                       ; 004bc341
        ;   XREF to: 004bc2d3 (CONDITIONAL_JUMP)  ; LAB_004bc2d3
    LEA EAX,[ESP + 0x59c]               ; 004bc343
    PUSH EAX                            ; 004bc34a
    PUSH ESI                            ; 004bc34b
    CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 ; 004bc34c
        ;   XREF to: 004b3220 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220(char * base_directory, char * filename)
    ADD ESP,0x8                         ; 004bc351
    TEST EAX,EAX                        ; 004bc354
    JZ 0x004bc2d3                       ; 004bc356
        ;   XREF to: 004bc2d3 (CONDITIONAL_JUMP)  ; LAB_004bc2d3
    LEA EAX,[ESP + 0x7a4]               ; 004bc35c
    PUSH EAX                            ; 004bc363
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004bc364
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004bc369
    LEA EAX,[ESP + 0x7a4]               ; 004bc36c
    PUSH EAX                            ; 004bc373
    PUSH EBX                            ; 004bc374
    CALL engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 ; 004bc375
        ;   XREF to: 004ba4f0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004bc37a
    LEA EAX,[ESP + 0x6a0]               ; 004bc37d
    PUSH EAX                            ; 004bc384
    LEA EAX,[ESP + 0x7a8]               ; 004bc385
    PUSH EAX                            ; 004bc38c
    PUSH EBX                            ; 004bc38d
    CALL engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0 ; 004bc38e
        ;   XREF to: 004ba6c0 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_findPodInList_FUN_004ba6c0(CFileManager * this_ptr, CStrList * pod_list, char * target_filename)
    ADD ESP,0xc                         ; 004bc393
    TEST EAX,EAX                        ; 004bc396
    JL 0x004bc42d                       ; 004bc398
        ;   XREF to: 004bc42d (CONDITIONAL_JUMP)  ; LAB_004bc42d
    PUSH 0x629059                       ; 004bc39e | = "Delete local files?"
    MOV ECX,dword ptr [0x00678a60]      ; 004bc3a3 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bc3a9 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 004bc3aa
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004bc3af
    TEST EAX,EAX                        ; 004bc3b2
    JZ 0x004bc3cf                       ; 004bc3b4
        ;   XREF to: 004bc3cf (CONDITIONAL_JUMP)  ; LAB_004bc3cf
    LEA EAX,[ESP + 0x6a0]               ; 004bc3b6
    PUSH EAX                            ; 004bc3bd
    PUSH EBX                            ; 004bc3be
    CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 ; 004bc3bf
        ;   XREF to: 004bca50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bc3c4
    TEST EAX,EAX                        ; 004bc3c7
    JZ 0x004bc574                       ; 004bc3c9
        ;   XREF to: 004bc574 (CONDITIONAL_JUMP)  ; LAB_004bc574
    CMP dword ptr [0x00680cdc],0x0      ; 004bc3cf | g_CDemonPodPtr
        ;   Label: LAB_004bc3cf
    JZ 0x004bc40f                       ; 004bc3d6
        ;   XREF to: 004bc40f (CONDITIONAL_JUMP)  ; LAB_004bc40f
    PUSH EDI                            ; 004bc3d8
    PUSH 0x62759a                       ; 004bc3d9 | = "Remounting all pods..."
    MOV ESI,dword ptr [0x00678a60]      ; 004bc3de | g_CEditorToolsPtr
    PUSH ESI                            ; 004bc3e4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004bc3e5
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bc3ea
    MOV EDI,dword ptr [0x00680cdc]      ; 004bc3ed | g_CDemonPodPtr
    PUSH EDI                            ; 004bc3f3 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 004bc3f4
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
    ADD ESP,0x4                         ; 004bc3f9
    MOV EAX,[0x00680cdc]                ; 004bc3fc | g_CDemonPodPtr
    PUSH EAX                            ; 004bc401 | g_CDemonPodInstance
    MOV EBX,dword ptr [EAX + 0x194]     ; 004bc402 | DAT_030e5224
    CALL dword ptr [EBX + 0x4]          ; 004bc408
    ADD ESP,0x4                         ; 004bc40b
    POP EDI                             ; 004bc40e
    XOR EBX,EBX                         ; 004bc40f
        ;   Label: LAB_004bc40f
    PUSH EBX                            ; 004bc411
    LEA EAX,[ESP + 0x7a8]               ; 004bc412
    PUSH EAX                            ; 004bc419
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bc41a
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc41f
    MOV EAX,EBX                         ; 004bc422
    ADD ESP,0x7b4                       ; 004bc424
    POP ESI                             ; 004bc42a
    POP EBX                             ; 004bc42b
    RET                                 ; 004bc42c
    MOV EAX,ESP                         ; 004bc42d
        ;   Label: LAB_004bc42d
    PUSH EAX                            ; 004bc42f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004bc430
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004bc435
    PUSH 0x628fdd                       ; 004bc438 | = "Delete local files and mount"
    LEA EAX,[ESP + 0x4]                 ; 004bc43d
    PUSH EAX                            ; 004bc441
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bc442
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bc447
    PUSH 0x628ffa                       ; 004bc44a | = "Delete local files but don't mount"
    LEA EAX,[ESP + 0x4]                 ; 004bc44f
    PUSH EAX                            ; 004bc453
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bc454
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bc459
    PUSH 0x62901d                       ; 004bc45c | = "Keep files extracted and pod dismounted"
    LEA EAX,[ESP + 0x4]                 ; 004bc461
    PUSH EAX                            ; 004bc465
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bc466
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bc46b
    LEA EAX,[ESP + 0x6a0]               ; 004bc46e
    PUSH EAX                            ; 004bc475
    PUSH 0x629045                       ; 004bc476 | = "Undo checkout on %s"
    LEA EAX,[ESP + 0x3b0]               ; 004bc47b
    PUSH EAX                            ; 004bc482
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004bc483
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bc488
    PUSH 0x0                            ; 004bc48b
    PUSH -0x1                           ; 004bc48d
    LEA EAX,[ESP + 0x3b0]               ; 004bc48f
    PUSH EAX                            ; 004bc496
    LEA EAX,[ESP + 0xc]                 ; 004bc497
    PUSH EAX                            ; 004bc49b
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004bc49c
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004bc4a1
    MOV ESI,EAX                         ; 004bc4a4
    TEST EAX,EAX                        ; 004bc4a6
    JZ 0x004bc4dc                       ; 004bc4a8
        ;   XREF to: 004bc4dc (CONDITIONAL_JUMP)  ; LAB_004bc4dc
    CMP ESI,0x1                         ; 004bc4aa
        ;   Label: LAB_004bc4aa
    JNZ 0x004bc4c8                      ; 004bc4ad
        ;   XREF to: 004bc4c8 (CONDITIONAL_JUMP)  ; LAB_004bc4c8
    LEA EAX,[ESP + 0x6a0]               ; 004bc4af
    PUSH EAX                            ; 004bc4b6
    PUSH EBX                            ; 004bc4b7
    CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 ; 004bc4b8
        ;   XREF to: 004bca50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bc4bd
    TEST EAX,EAX                        ; 004bc4c0
    JZ 0x004bc548                       ; 004bc4c2
        ;   XREF to: 004bc548 (CONDITIONAL_JUMP)  ; LAB_004bc548
    PUSH 0x0                            ; 004bc4c8
        ;   Label: LAB_004bc4c8
    LEA EAX,[ESP + 0x4]                 ; 004bc4ca
    PUSH EAX                            ; 004bc4ce
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bc4cf
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc4d4
    JMP 0x004bc3cf                      ; 004bc4d7
        ;   XREF to: 004bc3cf (UNCONDITIONAL_JUMP)  ; LAB_004bc3cf
    LEA EAX,[ESP + 0x6a0]               ; 004bc4dc
        ;   Label: LAB_004bc4dc
    PUSH EAX                            ; 004bc4e3
    PUSH EBX                            ; 004bc4e4
    CALL engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50 ; 004bc4e5
        ;   XREF to: 004bca50 (UNCONDITIONAL_CALL)  ; int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004bc4ea
    TEST EAX,EAX                        ; 004bc4ed
    JZ 0x004bc51c                       ; 004bc4ef
        ;   XREF to: 004bc51c (CONDITIONAL_JUMP)  ; LAB_004bc51c
    LEA EAX,[ESP + 0x6a0]               ; 004bc4f1
    PUSH EAX                            ; 004bc4f8
    LEA EAX,[ESP + 0x7a8]               ; 004bc4f9
    PUSH EAX                            ; 004bc500
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004bc501
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004bc506
    LEA EAX,[ESP + 0x7a4]               ; 004bc509
    PUSH EAX                            ; 004bc510
    PUSH EBX                            ; 004bc511
    CALL engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 ; 004bc512
        ;   XREF to: 004ba620 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620(CFileManager * this_ptr, CStrList * pod_list)
    ADD ESP,0x8                         ; 004bc517
    JMP 0x004bc4aa                      ; 004bc51a
        ;   XREF to: 004bc4aa (UNCONDITIONAL_JUMP)  ; LAB_004bc4aa
    PUSH EAX                            ; 004bc51c
        ;   Label: LAB_004bc51c
    LEA EAX,[ESP + 0x4]                 ; 004bc51d
    PUSH EAX                            ; 004bc521
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bc522
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc527
    PUSH ESI                            ; 004bc52a
    LEA EAX,[ESP + 0x7a8]               ; 004bc52b
    PUSH EAX                            ; 004bc532
    XOR EBX,EBX                         ; 004bc533
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bc535
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc53a
    MOV EAX,EBX                         ; 004bc53d
    ADD ESP,0x7b4                       ; 004bc53f
    POP ESI                             ; 004bc545
    POP EBX                             ; 004bc546
    RET                                 ; 004bc547
    PUSH EAX                            ; 004bc548
        ;   Label: LAB_004bc548
    LEA EAX,[ESP + 0x4]                 ; 004bc549
    PUSH EAX                            ; 004bc54d
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004bc54e
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc553
    XOR EBX,EBX                         ; 004bc556
    PUSH EBX                            ; 004bc558
    LEA EAX,[ESP + 0x7a8]               ; 004bc559
    PUSH EAX                            ; 004bc560
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bc561
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc566
    MOV EAX,EBX                         ; 004bc569
    ADD ESP,0x7b4                       ; 004bc56b
    POP ESI                             ; 004bc571
    POP EBX                             ; 004bc572
    RET                                 ; 004bc573
    PUSH EAX                            ; 004bc574
        ;   Label: LAB_004bc574
    LEA EAX,[ESP + 0x7a8]               ; 004bc575
    PUSH EAX                            ; 004bc57c
    XOR EBX,EBX                         ; 004bc57d
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 ; 004bc57f
        ;   XREF to: 004a2a40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004a2a40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc584
    MOV EAX,EBX                         ; 004bc587
    ADD ESP,0x7b4                       ; 004bc589
    POP ESI                             ; 004bc58f
    POP EBX                             ; 004bc590
    RET                                 ; 004bc591

