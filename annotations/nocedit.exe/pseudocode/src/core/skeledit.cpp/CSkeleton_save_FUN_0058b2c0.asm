; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CSkeleton_save_FUN_0058b2c0(CSkeleton *this_ptr,char *filename)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Referenced Globals:
;   TerminatedCString s_s_s_already_exists_in_a__0064a0c6
;   TerminatedCString s_Saving_skeleton_to_s_0064a5ce
;   TerminatedCString s_data_0064a5e7
;   TerminatedCString s_wt_0064a5ec
;   TerminatedCString s_data_0064a5ef
;   TerminatedCString s_core_skeledit_cpp_0064a5f4
;   TerminatedCString s_CSkeleton_save_Can_t_cre_0064a609
;   TerminatedCString s_core_skeledit_cpp_0064a62b
;   TerminatedCString s_Saved_skeleton_to_s_OK_0064a640
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
;   engine_dosio.cpp_getFile_FUN_00481a50
;   engine_pod.cpp_CPod_locateFile_FUN_005512f0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    NOP                                 ; 0058b2c0
        ;   Label: core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0
    NOP                                 ; 0058b2c1
    NOP                                 ; 0058b2c2
    NOP                                 ; 0058b2c3
    NOP                                 ; 0058b2c4
    NOP                                 ; 0058b2c5
    NOP                                 ; 0058b2c6
    NOP                                 ; 0058b2c7
    NOP                                 ; 0058b2c8
    NOP                                 ; 0058b2c9
    PUSH EBX                            ; 0058b2ca
    PUSH ESI                            ; 0058b2cb
    PUSH EBP                            ; 0058b2cc
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058b2cd
    PUSH EBX                            ; 0058b2d1
    PUSH 0x64a5ce                       ; 0058b2d2 | = "Saving skeleton to %s..."
    MOV EDX,dword ptr [0x00678a60]      ; 0058b2d7 | g_CEditorToolsPtr
    PUSH EDX                            ; 0058b2dd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058b2de
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058b2e3
    PUSH 0x0                            ; 0058b2e6
    PUSH EBX                            ; 0058b2e8
    PUSH 0x64a5e7                       ; 0058b2e9 | = "data"
    MOV ECX,dword ptr [0x00680cdc]      ; 0058b2ee | g_CDemonPodPtr
    PUSH ECX                            ; 0058b2f4 | g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0 ; 0058b2f5
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
    ADD ESP,0x10                        ; 0058b2fa
    TEST EAX,EAX                        ; 0058b2fd
    JZ 0x0058b31f                       ; 0058b2ff
        ;   XREF to: 0058b31f (CONDITIONAL_JUMP)  ; LAB_0058b31f
    ADD EAX,0x4                         ; 0058b301
    PUSH EAX                            ; 0058b304
    PUSH EBX                            ; 0058b305
    PUSH 0x64a5e7                       ; 0058b306 | = "data"
    PUSH 0x64a0c6                       ; 0058b30b | = "%s\\%s already exists in a mounted po..."
    MOV ESI,dword ptr [0x00678a60]      ; 0058b310 | g_CEditorToolsPtr
    PUSH ESI                            ; 0058b316 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0058b317
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x14                        ; 0058b31c
    PUSH 0x64a5ec                       ; 0058b31f | = "wt"
        ;   Label: LAB_0058b31f
    PUSH EBX                            ; 0058b324
    PUSH 0x64a5ef                       ; 0058b325 | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 0058b32a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0058b32f
    MOV ESI,EAX                         ; 0058b332
    TEST EAX,EAX                        ; 0058b334
    JZ 0x0058b372                       ; 0058b336
        ;   XREF to: 0058b372 (CONDITIONAL_JUMP)  ; LAB_0058b372
    PUSH ESI                            ; 0058b338
        ;   Label: LAB_0058b338
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058b339
    PUSH EAX                            ; 0058b33d
    CALL core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0 ; 0058b33e
        ;   XREF to: 0058b3a0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0058b343
    PUSH 0x459                          ; 0058b346
    PUSH 0x64a62b                       ; 0058b34b | = "..\\core\\skeledit.cpp"
    PUSH ESI                            ; 0058b350
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058b351
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0058b356
    PUSH EBX                            ; 0058b359
    PUSH 0x64a640                       ; 0058b35a | = "Saved skeleton to %s OK"
    MOV EDX,dword ptr [0x00678a60]      ; 0058b35f | g_CEditorToolsPtr
    PUSH EDX                            ; 0058b365 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058b366
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 0058b36b
    POP EBP                             ; 0058b36e
    POP ESI                             ; 0058b36f
    POP EBX                             ; 0058b370
    RET                                 ; 0058b371
    PUSH EDI                            ; 0058b372
        ;   Label: LAB_0058b372
    PUSH EBX                            ; 0058b373
    MOV EDI,0x64a5f4                    ; 0058b374 | = "..\\core\\skeledit.cpp"
    MOV EBP,0x457                       ; 0058b379
    PUSH 0x64a609                       ; 0058b37e | = "CSkeleton::save - Can't create %s"
    MOV dword ptr [0x02f0ca48],EDI      ; 0058b383 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0058b389 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058b38f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058b394
    POP EDI                             ; 0058b397
    JMP 0x0058b338                      ; 0058b398
        ;   XREF to: 0058b338 (UNCONDITIONAL_JUMP)  ; LAB_0058b338

