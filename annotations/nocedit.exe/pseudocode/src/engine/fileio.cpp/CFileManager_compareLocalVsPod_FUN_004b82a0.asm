; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(CFileManager *this_ptr,char *pod_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; char[2048]       Stack[-0x1208]:2048  local_1208
; CPodFile         Stack[-0xa08]:1068  local_a08
; CPickList        Stack[-0x5dc]:936  local_5dc
; SFoundFileInfo   Stack[-0x234]:532  local_234
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be491
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb34f
;   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 at 004b97ef
;
; Referenced Globals:
;   TerminatedCString s_pod_0062822a
;   TerminatedCString s_Select_POD_file_to_compa_00628230
;   TerminatedCString s_Can_t_mount_s_to_compare_0062825c
;   TerminatedCString s_s_No_local_file_00628277
;   TerminatedCString s_s_Local_file_is_newer_00628288
;   TerminatedCString s_s_Local_file_is_older_0062829f
;   TerminatedCString s_s_Local_file_has_differe_006282b6
;   TerminatedCString s_s_same_006282d7
;   TerminatedCString s_Comparing_files_in_s_006282df
;   TerminatedCString s_anon_006282f7
;   TerminatedCString s_d_files_in_sync_with_loc_00628310
;   TerminatedCString s_d_files_in_pod_don_t_exi_00628333
;   TerminatedCString s_d_files_with_local_file__00628358
;   TerminatedCString s_d_files_with_local_file__00628389
;   TerminatedCString s_d_sizeMismatch_006283ba
;   ... and 4 more
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_findFileNormally_FUN_004817c0
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b82a0
        ;   Label: engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
    PUSH EDI                            ; 004b82a1
    PUSH EBP                            ; 004b82a2
    SUB ESP,0x11fc                      ; 004b82a3
    MOV ESI,dword ptr [ESP + 0x1210]    ; 004b82a9
    TEST ESI,ESI                        ; 004b82b0
    JNZ 0x004b82e1                      ; 004b82b2
        ;   XREF to: 004b82e1 (CONDITIONAL_JUMP)  ; LAB_004b82e1
    PUSH ESI                            ; 004b82b4
    LEA EAX,[ESP + 0x4]                 ; 004b82b5
    PUSH EAX                            ; 004b82b9
    PUSH 0x62822a                       ; 004b82ba | = "*.pod"
    PUSH 0x628230                       ; 004b82bf | = "Select POD file to compare with local..."
    MOV EDX,dword ptr [0x00678a60]      ; 004b82c4 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b82ca | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 004b82cb
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * title_text, char * search_pattern, char * initial_path, ...)
    ADD ESP,0x14                        ; 004b82d0
    TEST EAX,EAX                        ; 004b82d3
    JNZ 0x004b82fd                      ; 004b82d5
        ;   XREF to: 004b82fd (CONDITIONAL_JUMP)  ; LAB_004b82fd
    ADD ESP,0x11fc                      ; 004b82d7
    POP EBP                             ; 004b82dd
    POP EDI                             ; 004b82de
    POP ESI                             ; 004b82df
    RET                                 ; 004b82e0
    MOV EDI,ESP                         ; 004b82e1
        ;   Label: LAB_004b82e1
    PUSH EDI                            ; 004b82e3
    MOV AL,byte ptr [ESI]               ; 004b82e4
        ;   Label: LAB_004b82e4
    MOV byte ptr [EDI],AL               ; 004b82e6
    CMP AL,0x0                          ; 004b82e8
    JZ 0x004b82fc                       ; 004b82ea
        ;   XREF to: 004b82fc (CONDITIONAL_JUMP)  ; LAB_004b82fc
    MOV AL,byte ptr [ESI + 0x1]         ; 004b82ec
    ADD ESI,0x2                         ; 004b82ef
    MOV byte ptr [EDI + 0x1],AL         ; 004b82f2
    ADD EDI,0x2                         ; 004b82f5
    CMP AL,0x0                          ; 004b82f8
    JNZ 0x004b82e4                      ; 004b82fa
        ;   XREF to: 004b82e4 (CONDITIONAL_JUMP)  ; LAB_004b82e4
    POP EDI                             ; 004b82fc
        ;   Label: LAB_004b82fc
    LEA EAX,[ESP + 0x800]               ; 004b82fd
        ;   Label: LAB_004b82fd
    PUSH EAX                            ; 004b8304
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b8305
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004b830a
    MOV EAX,ESP                         ; 004b830d
    PUSH EAX                            ; 004b830f
    LEA EAX,[ESP + 0x804]               ; 004b8310
    PUSH EAX                            ; 004b8317
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b8318
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b831d
    TEST EAX,EAX                        ; 004b8320
    JZ 0x004b8555                       ; 004b8322
        ;   XREF to: 004b8555 (CONDITIONAL_JUMP)  ; LAB_004b8555
    PUSH EBX                            ; 004b8328
    LEA EAX,[ESP + 0xc30]               ; 004b8329
    PUSH EAX                            ; 004b8330
    XOR EBX,EBX                         ; 004b8331
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b8333
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b8338
    XOR EBP,EBP                         ; 004b833b
    MOV EDX,dword ptr [ESP + 0xc14]     ; 004b833d
    MOV dword ptr [ESP + 0x11f8],EBX    ; 004b8344
    MOV dword ptr [ESP + 0x11ec],EBX    ; 004b834b
    MOV dword ptr [ESP + 0x11fc],EBX    ; 004b8352
    MOV dword ptr [ESP + 0x11f4],EBX    ; 004b8359
    MOV dword ptr [ESP + 0x11f0],EBX    ; 004b8360
    TEST EDX,EDX                        ; 004b8367
    JLE 0x004b8419                      ; 004b8369
        ;   XREF to: 004b8419 (CONDITIONAL_JUMP)  ; LAB_004b8419
    MOV ESI,dword ptr [ESP + 0xc18]     ; 004b836f
        ;   Label: LAB_004b836f
    LEA EDI,[ESP + 0xfd8]               ; 004b8376
    MOV ESI,dword ptr [ESI + EBX*0x1]   ; 004b837d
    PUSH EDI                            ; 004b8380
    MOV AL,byte ptr [ESI]               ; 004b8381
        ;   Label: LAB_004b8381
    MOV byte ptr [EDI],AL               ; 004b8383
    CMP AL,0x0                          ; 004b8385
    JZ 0x004b8399                       ; 004b8387
        ;   XREF to: 004b8399 (CONDITIONAL_JUMP)  ; LAB_004b8399
    MOV AL,byte ptr [ESI + 0x1]         ; 004b8389
    ADD ESI,0x2                         ; 004b838c
    MOV byte ptr [EDI + 0x1],AL         ; 004b838f
    ADD EDI,0x2                         ; 004b8392
    CMP AL,0x0                          ; 004b8395
    JNZ 0x004b8381                      ; 004b8397
        ;   XREF to: 004b8381 (CONDITIONAL_JUMP)  ; LAB_004b8381
    POP EDI                             ; 004b8399
        ;   Label: LAB_004b8399
    LEA EAX,[ESP + 0xfd8]               ; 004b839a
    PUSH EAX                            ; 004b83a1
    CALL engine_dosio.c_findFileNormally_FUN_004817c0 ; 004b83a2
        ;   XREF to: 004817c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
    ADD ESP,0x4                         ; 004b83a7
    TEST EAX,EAX                        ; 004b83aa
    JZ 0x004b8588                       ; 004b83ac
        ;   XREF to: 004b8588 (CONDITIONAL_JUMP)  ; LAB_004b8588
    MOV EDX,dword ptr [ESP + 0xc18]     ; 004b83b2
    ADD EDX,EBX                         ; 004b83b9
    MOV EAX,dword ptr [EDX + 0xc]       ; 004b83bb
    MOV ESI,dword ptr [ESP + 0x11e4]    ; 004b83be
    ADD EAX,0x2                         ; 004b83c5
    CMP EAX,ESI                         ; 004b83c8
    JNC 0x004b85c3                      ; 004b83ca
        ;   XREF to: 004b85c3 (CONDITIONAL_JUMP)  ; LAB_004b85c3
    LEA EAX,[ESP + 0xfd8]               ; 004b83d0
    PUSH EAX                            ; 004b83d7
    PUSH 0x628288                       ; 004b83d8 | = "%s\tLocal file is newer"
    LEA EAX,[ESP + 0xc]                 ; 004b83dd
    PUSH EAX                            ; 004b83e1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b83e2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b83e7
    LEA EAX,[ESP + 0x4]                 ; 004b83ea
    PUSH EAX                            ; 004b83ee
    LEA EAX,[ESP + 0xc34]               ; 004b83ef
    PUSH EAX                            ; 004b83f6
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b83f7
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b83fc
    INC dword ptr [ESP + 0x11fc]        ; 004b83ff
    MOV ECX,dword ptr [ESP + 0xc14]     ; 004b8406
        ;   Label: LAB_004b8406
    INC EBP                             ; 004b840d
    ADD EBX,0x14                        ; 004b840e
    CMP EBP,ECX                         ; 004b8411
    JL 0x004b836f                       ; 004b8413
        ;   XREF to: 004b836f (CONDITIONAL_JUMP)  ; LAB_004b836f
    LEA EAX,[ESP + 0x808]               ; 004b8419
        ;   Label: LAB_004b8419
    PUSH EAX                            ; 004b8420
    PUSH 0x6282df                       ; 004b8421 | = "Comparing files in:\n%s\n"
    LEA EAX,[ESP + 0xc]                 ; 004b8426
    PUSH EAX                            ; 004b842a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b842b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b8430
    LEA EBX,[ESP + 0x4]                 ; 004b8433
    PUSH 0x6282f7                       ; 004b8437 | = "-----------------------\n"
    ADD EBX,EAX                         ; 004b843c
    PUSH EBX                            ; 004b843e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b843f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004b8444
    MOV ESI,dword ptr [ESP + 0x11f8]    ; 004b8447
    ADD EBX,EAX                         ; 004b844e
    TEST ESI,ESI                        ; 004b8450
    JLE 0x004b8465                      ; 004b8452
        ;   XREF to: 004b8465 (CONDITIONAL_JUMP)  ; LAB_004b8465
    PUSH ESI                            ; 004b8454
    PUSH 0x628310                       ; 004b8455 | = "%d files in sync with local files\n"
    PUSH EBX                            ; 004b845a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b845b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b8460
    ADD EBX,EAX                         ; 004b8463
    MOV EBP,dword ptr [ESP + 0x11ec]    ; 004b8465
        ;   Label: LAB_004b8465
    TEST EBP,EBP                        ; 004b846c
    JLE 0x004b8481                      ; 004b846e
        ;   XREF to: 004b8481 (CONDITIONAL_JUMP)  ; LAB_004b8481
    PUSH EBP                            ; 004b8470
    PUSH 0x628333                       ; 004b8471 | = "%d files in pod don't exist locally\n"
    PUSH EBX                            ; 004b8476
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b8477
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b847c
    ADD EBX,EAX                         ; 004b847f
    MOV EDX,dword ptr [ESP + 0x11fc]    ; 004b8481
        ;   Label: LAB_004b8481
    TEST EDX,EDX                        ; 004b8488
    JLE 0x004b849d                      ; 004b848a
        ;   XREF to: 004b849d (CONDITIONAL_JUMP)  ; LAB_004b849d
    PUSH EDX                            ; 004b848c
    PUSH 0x628358                       ; 004b848d | = "%d files with local file newer than f..."
    PUSH EBX                            ; 004b8492
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b8493
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b8498
    ADD EBX,EAX                         ; 004b849b
    MOV ESI,dword ptr [ESP + 0x11f4]    ; 004b849d
        ;   Label: LAB_004b849d
    TEST ESI,ESI                        ; 004b84a4
    JLE 0x004b84b9                      ; 004b84a6
        ;   XREF to: 004b84b9 (CONDITIONAL_JUMP)  ; LAB_004b84b9
    PUSH ESI                            ; 004b84a8
    PUSH 0x628389                       ; 004b84a9 | = "%d files with local file older than f..."
    PUSH EBX                            ; 004b84ae
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b84af
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b84b4
    ADD EBX,EAX                         ; 004b84b7
    MOV EBP,dword ptr [ESP + 0x11f0]    ; 004b84b9
        ;   Label: LAB_004b84b9
    TEST EBP,EBP                        ; 004b84c0
    JLE 0x004b84d5                      ; 004b84c2
        ;   XREF to: 004b84d5 (CONDITIONAL_JUMP)  ; LAB_004b84d5
    PUSH EBP                            ; 004b84c4
    PUSH 0x6283ba                       ; 004b84c5 | = "%d sizeMismatch\n"
    PUSH EBX                            ; 004b84ca
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b84cb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b84d0
    ADD EBX,EAX                         ; 004b84d3
    PUSH 0x6283cb                       ; 004b84d5 | = "-----------------------\n"
        ;   Label: LAB_004b84d5
    PUSH EBX                            ; 004b84da
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b84db
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 004b84e0
    MOV EDX,dword ptr [ESP + 0xc14]     ; 004b84e3
    PUSH EDX                            ; 004b84ea
    PUSH 0x6283e4                       ; 004b84eb | = "%d total files in pod"
    ADD EBX,EAX                         ; 004b84f0
    PUSH EBX                            ; 004b84f2
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b84f3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b84f8
    PUSH 0x1                            ; 004b84fb
    LEA EAX,[ESP + 0xc34]               ; 004b84fd
    PUSH EAX                            ; 004b8504
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 004b8505
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 004b850a
    PUSH 0x0                            ; 004b850d
    PUSH -0x1                           ; 004b850f
    LEA EAX,[ESP + 0xc]                 ; 004b8511
    PUSH EAX                            ; 004b8515
    LEA EAX,[ESP + 0xc3c]               ; 004b8516
    PUSH EAX                            ; 004b851d
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b851e
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b8523
    PUSH 0x0                            ; 004b8526
    LEA EAX,[ESP + 0xc34]               ; 004b8528
    PUSH EAX                            ; 004b852f
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b8530
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8535
    PUSH 0x0                            ; 004b8538
    LEA EAX,[ESP + 0x808]               ; 004b853a
    PUSH EAX                            ; 004b8541
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b8542
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b8547
    POP EBX                             ; 004b854a
    ADD ESP,0x11fc                      ; 004b854b
    POP EBP                             ; 004b8551
    POP EDI                             ; 004b8552
    POP ESI                             ; 004b8553
    RET                                 ; 004b8554
    MOV EAX,ESP                         ; 004b8555
        ;   Label: LAB_004b8555
    PUSH EAX                            ; 004b8557
    PUSH 0x62825c                       ; 004b8558 | = "Can't mount %s to compare!"
    MOV ECX,dword ptr [0x00678a60]      ; 004b855d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004b8563 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b8564
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b8569
    PUSH 0x0                            ; 004b856c
    LEA EAX,[ESP + 0x804]               ; 004b856e
    PUSH EAX                            ; 004b8575
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b8576
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b857b
    ADD ESP,0x11fc                      ; 004b857e
    POP EBP                             ; 004b8584
    POP EDI                             ; 004b8585
    POP ESI                             ; 004b8586
    RET                                 ; 004b8587
    LEA EAX,[ESP + 0xfd8]               ; 004b8588
        ;   Label: LAB_004b8588
    PUSH EAX                            ; 004b858f
    PUSH 0x628277                       ; 004b8590 | = "%s\tNo local file"
    LEA EAX,[ESP + 0xc]                 ; 004b8595
    PUSH EAX                            ; 004b8599
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b859a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b859f
    LEA EAX,[ESP + 0x4]                 ; 004b85a2
    PUSH EAX                            ; 004b85a6
    LEA EAX,[ESP + 0xc34]               ; 004b85a7
    PUSH EAX                            ; 004b85ae
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b85af
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b85b4
    INC dword ptr [ESP + 0x11ec]        ; 004b85b7
    JMP 0x004b8406                      ; 004b85be
        ;   XREF to: 004b8406 (UNCONDITIONAL_JUMP)  ; LAB_004b8406
    MOV EAX,dword ptr [EDX + 0xc]       ; 004b85c3
        ;   Label: LAB_004b85c3
    SUB EAX,0x2                         ; 004b85c6
    CMP EAX,ESI                         ; 004b85c9
    JA 0x004b8614                       ; 004b85cb
        ;   XREF to: 004b8614 (CONDITIONAL_JUMP)  ; LAB_004b8614
    MOV EAX,dword ptr [ESP + 0x11dc]    ; 004b85cd
    CMP EAX,dword ptr [EDX + 0x4]       ; 004b85d4
    JZ 0x004b864f                       ; 004b85d7
        ;   XREF to: 004b864f (CONDITIONAL_JUMP)  ; LAB_004b864f
    LEA EAX,[ESP + 0xfd8]               ; 004b85d9
    PUSH EAX                            ; 004b85e0
    PUSH 0x6282b6                       ; 004b85e1 | = "%s\tLocal file has different size"
    LEA EAX,[ESP + 0xc]                 ; 004b85e6
    PUSH EAX                            ; 004b85ea
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b85eb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b85f0
    LEA EAX,[ESP + 0x4]                 ; 004b85f3
    PUSH EAX                            ; 004b85f7
    LEA EAX,[ESP + 0xc34]               ; 004b85f8
    PUSH EAX                            ; 004b85ff
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b8600
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8605
    INC dword ptr [ESP + 0x11f0]        ; 004b8608
    JMP 0x004b8406                      ; 004b860f
        ;   XREF to: 004b8406 (UNCONDITIONAL_JUMP)  ; LAB_004b8406
    LEA EAX,[ESP + 0xfd8]               ; 004b8614
        ;   Label: LAB_004b8614
    PUSH EAX                            ; 004b861b
    PUSH 0x62829f                       ; 004b861c | = "%s\tLocal file is older"
    LEA EAX,[ESP + 0xc]                 ; 004b8621
    PUSH EAX                            ; 004b8625
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b8626
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b862b
    LEA EAX,[ESP + 0x4]                 ; 004b862e
    PUSH EAX                            ; 004b8632
    LEA EAX,[ESP + 0xc34]               ; 004b8633
    PUSH EAX                            ; 004b863a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b863b
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b8640
    INC dword ptr [ESP + 0x11f4]        ; 004b8643
    JMP 0x004b8406                      ; 004b864a
        ;   XREF to: 004b8406 (UNCONDITIONAL_JUMP)  ; LAB_004b8406
    LEA EAX,[ESP + 0xfd8]               ; 004b864f
        ;   Label: LAB_004b864f
    PUSH EAX                            ; 004b8656
    PUSH 0x6282d7                       ; 004b8657 | = "%s\tsame"
    LEA EAX,[ESP + 0xc]                 ; 004b865c
    PUSH EAX                            ; 004b8660
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b8661
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b8666
    LEA EAX,[ESP + 0x4]                 ; 004b8669
    PUSH EAX                            ; 004b866d
    LEA EAX,[ESP + 0xc34]               ; 004b866e
    PUSH EAX                            ; 004b8675
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b8676
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b867b
    INC dword ptr [ESP + 0x11f8]        ; 004b867e
    JMP 0x004b8406                      ; 004b8685
        ;   XREF to: 004b8406 (UNCONDITIONAL_JUMP)  ; LAB_004b8406

