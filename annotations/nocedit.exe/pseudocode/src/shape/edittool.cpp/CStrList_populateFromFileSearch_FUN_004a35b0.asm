; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList * this_ptr, char * directory_path, char * file_pattern)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   directory_path
; char *           Stack[0xc]:4   file_pattern
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined1       Stack[-0x744]:1  local_744
; undefined4       Stack[-0x640]:4  local_640
; undefined4       Stack[-0x638]:4  local_638
; undefined1       Stack[-0x528]:1  local_528
; undefined4       Stack[-0x424]:4  local_424
; undefined4       Stack[-0x420]:4  local_420
; undefined1       Stack[-0x414]:1  local_414
; undefined1       Stack[-0x310]:1  local_310
; undefined1       Stack[-0x30f]:1  local_30f
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x20f]:1  local_20f
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f2e3
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 at 0049f2a1
;
; Referenced Globals:
;   TerminatedCString s_s_s_006239df
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_memmove_FUN_005fe5e0
;   engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70
;   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
;   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
;   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
;   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
;   engine_pod.cpp_CPod_initSearch_FUN_00550ea0
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a35b0
        ;   Label: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
    PUSH ESI                            ; 004a35b1
    PUSH EDI                            ; 004a35b2
    PUSH EBP                            ; 004a35b3
    SUB ESP,0x834                       ; 004a35b4
    MOV EBX,dword ptr [ESP + 0x848]     ; 004a35ba
    MOV ESI,dword ptr [ESP + 0x84c]     ; 004a35c1
    MOV EDI,dword ptr [ESP + 0x850]     ; 004a35c8
    TEST ESI,ESI                        ; 004a35cf
    JZ 0x004a377d                       ; 004a35d1
        ;   XREF to: 004a377d (CONDITIONAL_JUMP)  ; LAB_004a377d
    CMP byte ptr [ESI],0x0              ; 004a35d7
    JZ 0x004a377d                       ; 004a35da
        ;   XREF to: 004a377d (CONDITIONAL_JUMP)  ; LAB_004a377d
    PUSH EDI                            ; 004a35e0
    PUSH ESI                            ; 004a35e1
    PUSH 0x6239df                       ; 004a35e2 | = "%s\\%s"
    LEA ECX,[ESP + 0x540]               ; 004a35e7
    PUSH ECX                            ; 004a35ee
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004a35ef
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a35f4
    MOV EDX,dword ptr [0x00680cdc]      ; 004a35f7 | g_CDemonPodInstance | g_CDemonPodPtr
        ;   Label: LAB_004a35f7
    TEST EDX,EDX                        ; 004a35fd
    JZ 0x004a36e1                       ; 004a35ff
        ;   XREF to: 004a36e1 (CONDITIONAL_JUMP)  ; LAB_004a36e1
    MOV ECX,ESP                         ; 004a3605
    PUSH ECX                            ; 004a3607
    LEA ECX,[ESP + 0x538]               ; 004a3608
    PUSH ECX                            ; 004a360f
    PUSH EDX                            ; 004a3610 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_initSearch_FUN_00550ea0 ; 004a3611
        ;   XREF to: 00550ea0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_initSearch_FUN_00550ea0(CPod * this_ptr, char * search_pattern, CPodSearchContext * search_context)
    ADD ESP,0xc                         ; 004a3616
    CMP byte ptr [ESP],0x0              ; 004a3619
    JZ 0x004a36e1                       ; 004a361d
        ;   XREF to: 004a36e1 (CONDITIONAL_JUMP)  ; LAB_004a36e1
    LEA ECX,[ESP + 0x634]               ; 004a3623
        ;   Label: LAB_004a3623
    PUSH ECX                            ; 004a362a
    LEA ECX,[ESP + 0x738]               ; 004a362b
    PUSH ECX                            ; 004a3632
    PUSH 0x0                            ; 004a3633
    PUSH 0x0                            ; 004a3635
    LEA ECX,[ESP + 0x10]                ; 004a3637
    PUSH ECX                            ; 004a363b
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004a363c
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3641
    CMP byte ptr [ESP + 0x634],0x2e     ; 004a3644
    JNZ 0x004a3678                      ; 004a364c
        ;   XREF to: 004a3678 (CONDITIONAL_JUMP)  ; LAB_004a3678
    LEA EDI,[ESP + 0x634]               ; 004a364e
    SUB ECX,ECX                         ; 004a3655
    DEC ECX                             ; 004a3657
    XOR EAX,EAX                         ; 004a3658
    SCASB.REPNE ES:EDI                  ; 004a365a
    NOT ECX                             ; 004a365c
    DEC ECX                             ; 004a365e
    PUSH ECX                            ; 004a365f
    LEA ECX,[ESP + 0x639]               ; 004a3660
    PUSH ECX                            ; 004a3667
    LEA ECX,[ESP + 0x63c]               ; 004a3668
    PUSH ECX                            ; 004a366f
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004a3670
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004a3675
    LEA ECX,[ESP + 0x634]               ; 004a3678
        ;   Label: LAB_004a3678
    PUSH ECX                            ; 004a367f
    LEA ECX,[ESP + 0x738]               ; 004a3680
    PUSH ECX                            ; 004a3687
    PUSH 0x0                            ; 004a3688
    PUSH 0x0                            ; 004a368a
    LEA ECX,[ESP + 0x440]               ; 004a368c
    PUSH ECX                            ; 004a3693
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004a3694
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a3699
    MOV ESI,dword ptr [ESP + 0x20c]     ; 004a369c
    PUSH ESI                            ; 004a36a3
    MOV EDI,dword ptr [ESP + 0x208]     ; 004a36a4
    PUSH EDI                            ; 004a36ab
    LEA ECX,[ESP + 0x108]               ; 004a36ac
    PUSH ECX                            ; 004a36b3
    LEA ECX,[ESP + 0x43c]               ; 004a36b4
    PUSH ECX                            ; 004a36bb
    PUSH EBX                            ; 004a36bc
    CALL shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 ; 004a36bd
        ;   XREF to: 004a3360 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList * this_ptr, char * search_key, char * file_path, int file_size)
    ADD ESP,0x14                        ; 004a36c2
    MOV ECX,ESP                         ; 004a36c5
    PUSH ECX                            ; 004a36c7
    MOV EBP,dword ptr [0x00680cdc]      ; 004a36c8 | g_CDemonPodPtr
    PUSH EBP                            ; 004a36ce | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0 ; 004a36cf
        ;   XREF to: 00550ef0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0(CPod * this_ptr, CPodSearchContext * search_context)
    ADD ESP,0x8                         ; 004a36d4
    CMP byte ptr [ESP],0x0              ; 004a36d7
    JNZ 0x004a3623                      ; 004a36db
        ;   XREF to: 004a3623 (CONDITIONAL_JUMP)  ; LAB_004a3623
    LEA ECX,[ESP + 0x31c]               ; 004a36e1
        ;   Label: LAB_004a36e1
    PUSH ECX                            ; 004a36e8
    CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30 ; 004a36e9
        ;   XREF to: 00481c30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_ctor_FUN_00481c30(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a36ee
    LEA ECX,[ESP + 0x534]               ; 004a36f1
    PUSH ECX                            ; 004a36f8
    LEA ECX,[ESP + 0x320]               ; 004a36f9
    PUSH ECX                            ; 004a3700
    CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70 ; 004a3701
        ;   XREF to: 00481c70 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_openSearch_FUN_00481c70(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 004a3706
    CMP byte ptr [ESP + 0x31c],0x0      ; 004a3709
    JZ 0x004a3750                       ; 004a3711
        ;   XREF to: 004a3750 (CONDITIONAL_JUMP)  ; LAB_004a3750
    MOV EAX,dword ptr [ESP + 0x424]     ; 004a3713
        ;   Label: LAB_004a3713
    PUSH EAX                            ; 004a371a
    MOV EDX,dword ptr [ESP + 0x424]     ; 004a371b
    PUSH EDX                            ; 004a3722
    PUSH 0x0                            ; 004a3723
    LEA ECX,[ESP + 0x328]               ; 004a3725
    PUSH ECX                            ; 004a372c
    PUSH EBX                            ; 004a372d
    CALL shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 ; 004a372e
        ;   XREF to: 004a3360 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList * this_ptr, char * search_key, char * file_path, int file_size)
    ADD ESP,0x14                        ; 004a3733
    LEA ECX,[ESP + 0x31c]               ; 004a3736
    PUSH ECX                            ; 004a373d
    CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 ; 004a373e
        ;   XREF to: 00481cf0 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_CFileFinder_findNext_FUN_00481cf0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a3743
    CMP byte ptr [ESP + 0x31c],0x0      ; 004a3746
    JNZ 0x004a3713                      ; 004a374e
        ;   XREF to: 004a3713 (CONDITIONAL_JUMP)  ; LAB_004a3713
    LEA ECX,[ESP + 0x31c]               ; 004a3750
        ;   Label: LAB_004a3750
    PUSH ECX                            ; 004a3757
    CALL engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70 ; 004a3758
        ;   XREF to: 00481d70 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_CFileFinder_closeSearch_FUN_00481d70(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004a375d
    PUSH 0x0                            ; 004a3760
    LEA ECX,[ESP + 0x320]               ; 004a3762
    PUSH ECX                            ; 004a3769
    CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50 ; 004a376a
        ;   XREF to: 00481c50 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.c_CFileFinder_dtor_FUN_00481c50(CFileFinder * this_ptr, uint d1)
    ADD ESP,0x8                         ; 004a376f
    ADD ESP,0x834                       ; 004a3772
    POP EBP                             ; 004a3778
    POP EDI                             ; 004a3779
    POP ESI                             ; 004a377a
    POP EBX                             ; 004a377b
    RET                                 ; 004a377c
    MOV ESI,EDI                         ; 004a377d
        ;   Label: LAB_004a377d
    LEA EDI,[ESP + 0x534]               ; 004a377f
    PUSH EDI                            ; 004a3786
    MOV AL,byte ptr [ESI]               ; 004a3787
        ;   Label: LAB_004a3787
    MOV byte ptr [EDI],AL               ; 004a3789
    CMP AL,0x0                          ; 004a378b
    JZ 0x004a379f                       ; 004a378d
        ;   XREF to: 004a379f (CONDITIONAL_JUMP)  ; LAB_004a379f
    MOV AL,byte ptr [ESI + 0x1]         ; 004a378f
    ADD ESI,0x2                         ; 004a3792
    MOV byte ptr [EDI + 0x1],AL         ; 004a3795
    ADD EDI,0x2                         ; 004a3798
    CMP AL,0x0                          ; 004a379b
    JNZ 0x004a3787                      ; 004a379d
        ;   XREF to: 004a3787 (CONDITIONAL_JUMP)  ; LAB_004a3787
    POP EDI                             ; 004a379f
        ;   Label: LAB_004a379f
    JMP 0x004a35f7                      ; 004a37a0
        ;   XREF to: 004a35f7 (UNCONDITIONAL_JUMP)  ; LAB_004a35f7

