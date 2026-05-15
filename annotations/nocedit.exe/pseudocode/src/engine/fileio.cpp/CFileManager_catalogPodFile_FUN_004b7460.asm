; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager *this_ptr,char *pod_filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   pod_filename
; Local Variables:
; CPodFile         Stack[-0xd00]:1068  local_d00
; CPickList        Stack[-0x8d4]:936  local_8d4
; char[512]        Stack[-0x52c]:512  local_52c
; char             Stack[-0x32c]:1  local_32c
; undefined1[255]  Stack[-0x32b]:255  local_32b
; char[256]        Stack[-0x22c]:256  local_22c
; char[256]        Stack[-0x12c]:256  local_12c
; char[32]         Stack[-0x2c]:32  local_2c
;
; XREF[2]:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 at 004be446
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b6b30
;
; Referenced Globals:
;   TerminatedCString s_pod_00627d97
;   TerminatedCString s_Select_POD_file_to_catal_00627d9d
;   TerminatedCString s_Can_t_mount_s_to_catalog_00627db8
;   TerminatedCString s_m_d_y_I_M_S_p_00627dd9
;   TerminatedCString s_s_s_s_d_s_00627dee
;   TerminatedCString s_Contents_of_pod_file_s_00627dfd
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_memmove_FUN_005fe5e0
;   crt_string.c_strupr_FUN_00600770
;   crt_time.c__localtime_FUN_00600288
;   crt_time.c__strftime_FUN_006002d4
;   engine_dosio.cpp_splitPath_FUN_00481f20
;   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
;   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
;   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b7460
        ;   Label: engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
    PUSH EDI                            ; 004b7461
    PUSH EBP                            ; 004b7462
    SUB ESP,0xcf4                       ; 004b7463
    MOV ESI,dword ptr [ESP + 0xd08]     ; 004b7469
    TEST ESI,ESI                        ; 004b7470
    JNZ 0x004b74a4                      ; 004b7472
        ;   XREF to: 004b74a4 (CONDITIONAL_JUMP)  ; LAB_004b74a4
    PUSH ESI                            ; 004b7474
    LEA EAX,[ESP + 0x7d8]               ; 004b7475
    PUSH EAX                            ; 004b747c
    PUSH 0x627d97                       ; 004b747d | = "*.pod"
    PUSH 0x627d9d                       ; 004b7482 | = "Select POD file to catalog"
    MOV EDX,dword ptr [0x00678a60]      ; 004b7487 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004b748d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 004b748e
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * title_text, char * search_pattern, char * initial_path, ...)
    ADD ESP,0x14                        ; 004b7493
    TEST EAX,EAX                        ; 004b7496
    JNZ 0x004b74c5                      ; 004b7498
        ;   XREF to: 004b74c5 (CONDITIONAL_JUMP)  ; LAB_004b74c5
    ADD ESP,0xcf4                       ; 004b749a
    POP EBP                             ; 004b74a0
    POP EDI                             ; 004b74a1
    POP ESI                             ; 004b74a2
    RET                                 ; 004b74a3
    LEA EDI,[ESP + 0x7d4]               ; 004b74a4
        ;   Label: LAB_004b74a4
    PUSH EDI                            ; 004b74ab
    MOV AL,byte ptr [ESI]               ; 004b74ac
        ;   Label: LAB_004b74ac
    MOV byte ptr [EDI],AL               ; 004b74ae
    CMP AL,0x0                          ; 004b74b0
    JZ 0x004b74c4                       ; 004b74b2
        ;   XREF to: 004b74c4 (CONDITIONAL_JUMP)  ; LAB_004b74c4
    MOV AL,byte ptr [ESI + 0x1]         ; 004b74b4
    ADD ESI,0x2                         ; 004b74b7
    MOV byte ptr [EDI + 0x1],AL         ; 004b74ba
    ADD EDI,0x2                         ; 004b74bd
    CMP AL,0x0                          ; 004b74c0
    JNZ 0x004b74ac                      ; 004b74c2
        ;   XREF to: 004b74ac (CONDITIONAL_JUMP)  ; LAB_004b74ac
    POP EDI                             ; 004b74c4
        ;   Label: LAB_004b74c4
    MOV EAX,ESP                         ; 004b74c5
        ;   Label: LAB_004b74c5
    PUSH EAX                            ; 004b74c7
    CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0 ; 004b74c8
        ;   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 004b74cd
    LEA EAX,[ESP + 0x7d4]               ; 004b74d0
    PUSH EAX                            ; 004b74d7
    LEA EAX,[ESP + 0x4]                 ; 004b74d8
    PUSH EAX                            ; 004b74dc
    CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 ; 004b74dd
        ;   XREF to: 0054f650 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650(CPodFile * this_ptr, char * pod_filename)
    ADD ESP,0x8                         ; 004b74e2
    TEST EAX,EAX                        ; 004b74e5
    JZ 0x004b768f                       ; 004b74e7
        ;   XREF to: 004b768f (CONDITIONAL_JUMP)  ; LAB_004b768f
    PUSH EBX                            ; 004b74ed
    LEA EAX,[ESP + 0x430]               ; 004b74ee
    PUSH EAX                            ; 004b74f5
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004b74f6
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004b74fb
    PUSH 0x1                            ; 004b74fe
    LEA EAX,[ESP + 0x434]               ; 004b7500
    PUSH EAX                            ; 004b7507
    CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10 ; 004b7508
        ;   XREF to: 004a3e10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList * this_ptr, int result_value)
    ADD ESP,0x8                         ; 004b750d
    MOV EBX,dword ptr [ESP + 0x414]     ; 004b7510
    XOR ESI,ESI                         ; 004b7517
    TEST EBX,EBX                        ; 004b7519
    JLE 0x004b762d                      ; 004b751b
        ;   XREF to: 004b762d (CONDITIONAL_JUMP)  ; LAB_004b762d
    XOR EBX,EBX                         ; 004b7521
    MOV EAX,dword ptr [ESP + 0x418]     ; 004b7523
        ;   Label: LAB_004b7523
    ADD EAX,EBX                         ; 004b752a
    ADD EAX,0xc                         ; 004b752c
    PUSH EAX                            ; 004b752f
    CALL crt_time.c__localtime_FUN_00600288 ; 004b7530
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 004b7535
    PUSH EAX                            ; 004b7538
    PUSH 0x627dd9                       ; 004b7539 | = "%m/%d/%y %I:%M:%S %p"
    PUSH 0x1e                           ; 004b753e
    LEA EAX,[ESP + 0xce4]               ; 004b7540
    PUSH EAX                            ; 004b7547
    CALL crt_time.c__strftime_FUN_006002d4 ; 004b7548
        ;   XREF to: 006002d4 (UNCONDITIONAL_CALL)  ; uint crt_time.c__strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, _tm * time_ptr)
    ADD ESP,0x10                        ; 004b754d
    LEA EAX,[ESP + 0x9d8]               ; 004b7550
    PUSH EAX                            ; 004b7557
    LEA EAX,[ESP + 0xbdc]               ; 004b7558
    PUSH EAX                            ; 004b755f
    LEA EAX,[ESP + 0xae0]               ; 004b7560
    PUSH EAX                            ; 004b7567
    MOV EAX,dword ptr [ESP + 0x424]     ; 004b7568
    PUSH 0x0                            ; 004b756f
    MOV EDX,dword ptr [EBX + EAX*0x1]   ; 004b7571
    PUSH EDX                            ; 004b7574
    CALL engine_dosio.cpp_splitPath_FUN_00481f20 ; 004b7575
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b757a
    CMP byte ptr [ESP + 0x9d8],0x2e     ; 004b757d
    JNZ 0x004b75b1                      ; 004b7585
        ;   XREF to: 004b75b1 (CONDITIONAL_JUMP)  ; LAB_004b75b1
    LEA EDI,[ESP + 0x9d8]               ; 004b7587
    SUB ECX,ECX                         ; 004b758e
    DEC ECX                             ; 004b7590
    XOR EAX,EAX                         ; 004b7591
    SCASB.REPNE ES:EDI                  ; 004b7593
    NOT ECX                             ; 004b7595
    DEC ECX                             ; 004b7597
    PUSH ECX                            ; 004b7598
    LEA EAX,[ESP + 0x9dd]               ; 004b7599
    PUSH EAX                            ; 004b75a0
    LEA EAX,[ESP + 0x9e0]               ; 004b75a1
    PUSH EAX                            ; 004b75a8
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b75a9
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b75ae
    LEA EAX,[ESP + 0xcd8]               ; 004b75b1
        ;   Label: LAB_004b75b1
    PUSH EAX                            ; 004b75b8
    MOV EAX,dword ptr [ESP + 0x41c]     ; 004b75b9
    MOV EDI,dword ptr [EBX + EAX*0x1 + 0x4] ; 004b75c0
    PUSH EDI                            ; 004b75c4
    LEA EAX,[ESP + 0x9e0]               ; 004b75c5
    PUSH EAX                            ; 004b75cc
    LEA EAX,[ESP + 0xbe4]               ; 004b75cd
    PUSH EAX                            ; 004b75d4
    LEA EAX,[ESP + 0xae8]               ; 004b75d5
    PUSH EAX                            ; 004b75dc
    PUSH 0x627dee                       ; 004b75dd | = "%s\t%s\t%s\t%d\t%s"
    LEA EAX,[ESP + 0x7f0]               ; 004b75e2
    PUSH EAX                            ; 004b75e9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b75ea
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x1c                        ; 004b75ef
    LEA EAX,[ESP + 0x7d8]               ; 004b75f2
    PUSH EAX                            ; 004b75f9
    CALL crt_string.c_strupr_FUN_00600770 ; 004b75fa
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    ADD ESP,0x4                         ; 004b75ff
    LEA EAX,[ESP + 0x7d8]               ; 004b7602
    PUSH EAX                            ; 004b7609
    LEA EAX,[ESP + 0x434]               ; 004b760a
    PUSH EAX                            ; 004b7611
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004b7612
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004b7617
    INC ESI                             ; 004b761a
    MOV EBP,dword ptr [ESP + 0x414]     ; 004b761b
    ADD EBX,0x14                        ; 004b7622
    CMP ESI,EBP                         ; 004b7625
    JL 0x004b7523                       ; 004b7627
        ;   XREF to: 004b7523 (CONDITIONAL_JUMP)  ; LAB_004b7523
    LEA EAX,[ESP + 0x8]                 ; 004b762d
        ;   Label: LAB_004b762d
    PUSH EAX                            ; 004b7631
    PUSH 0x627dfd                       ; 004b7632 | = "Contents of pod file:\n%s"
    LEA EAX,[ESP + 0x7e0]               ; 004b7637
    PUSH EAX                            ; 004b763e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b763f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b7644
    PUSH 0x0                            ; 004b7647
    PUSH -0x1                           ; 004b7649
    LEA EAX,[ESP + 0x7e0]               ; 004b764b
    PUSH EAX                            ; 004b7652
    LEA EAX,[ESP + 0x43c]               ; 004b7653
    PUSH EAX                            ; 004b765a
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004b765b
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 004b7660
    PUSH 0x0                            ; 004b7663
    LEA EAX,[ESP + 0x434]               ; 004b7665
    PUSH EAX                            ; 004b766c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004b766d
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b7672
    PUSH 0x0                            ; 004b7675
    LEA EAX,[ESP + 0x8]                 ; 004b7677
    PUSH EAX                            ; 004b767b
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b767c
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b7681
    POP EBX                             ; 004b7684
    ADD ESP,0xcf4                       ; 004b7685
    POP EBP                             ; 004b768b
    POP EDI                             ; 004b768c
    POP ESI                             ; 004b768d
    RET                                 ; 004b768e
    LEA EAX,[ESP + 0x7d4]               ; 004b768f
        ;   Label: LAB_004b768f
    PUSH EAX                            ; 004b7696
    PUSH 0x627db8                       ; 004b7697 | = "Can't mount %s to catalog files!"
    MOV ECX,dword ptr [0x00678a60]      ; 004b769c | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 004b76a2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004b76a3
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b76a8
    PUSH 0x0                            ; 004b76ab
    LEA EAX,[ESP + 0x4]                 ; 004b76ad
    PUSH EAX                            ; 004b76b1
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610 ; 004b76b2
        ;   XREF to: 0054f610 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0054f610(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b76b7
    ADD ESP,0xcf4                       ; 004b76ba
    POP EBP                             ; 004b76c0
    POP EDI                             ; 004b76c1
    POP ESI                             ; 004b76c2
    RET                                 ; 004b76c3

