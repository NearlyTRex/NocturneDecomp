; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0(CSkeleton * this_ptr, FILE * file_handle)
;
; Parameters:
; CSkeleton *      Stack[0xc]:4   this_ptr
; FILE *           Stack[0x10]:4   file_handle
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
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_pod.cpp_CPod_locateFile_FUN_005512f0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH 0x24                           ; 0058b2c0
        ;   Label: core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058b2c5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 0058b2ca
    PUSH ESI                            ; 0058b2cb
    PUSH EBP                            ; 0058b2cc
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058b2cd
    PUSH EBX                            ; 0058b2d1
    PUSH 0x64a5ce                       ; 0058b2d2 | = "Saving skeleton to %s..." | s_Saving_skeleton_to_s_0064a5ce = Saving skeleton to %s...
    MOV EDX,dword ptr [0x00678a60]      ; 0058b2d7 | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 0058b2dd | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058b2de | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058b2e3
    PUSH 0x0                            ; 0058b2e6
    PUSH EBX                            ; 0058b2e8
    PUSH 0x64a5e7                       ; 0058b2e9 | = "data" | s_data_0064a5e7 = data
    MOV ECX,dword ptr [0x00680cdc]      ; 0058b2ee | CDemonPod * g_CDemonPodPtr
    PUSH ECX                            ; 0058b2f4 | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0 ; 0058b2f5 | CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0058b2fa
    TEST EAX,EAX                        ; 0058b2fd
    JZ 0x0058b31f                       ; 0058b2ff | LAB_0058b31f
        ;   XREF to: 0058b31f (CONDITIONAL_JUMP)
    ADD EAX,0x4                         ; 0058b301
    PUSH EAX                            ; 0058b304
    PUSH EBX                            ; 0058b305
    PUSH 0x64a5e7                       ; 0058b306 | = "data" | s_data_0064a5e7 = data
    PUSH 0x64a0c6                       ; 0058b30b | = "%s\\%s already exists in a mounted po..." | s_s_s_already_exists_in_a__0064a0c6 = %s\%s already exists in a mounted pod file:
        ; %s
        ; I'm still saving it to the local file,
        ; but just thought you would want to know about the
        ; one in the pod.
    MOV ESI,dword ptr [0x00678a60]      ; 0058b310 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 0058b316 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0058b317 | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0058b31c
    PUSH 0x64a5ec                       ; 0058b31f | = "wt" | s_wt_0064a5ec = wt
        ;   Label: LAB_0058b31f
    PUSH EBX                            ; 0058b324
    PUSH 0x64a5ef                       ; 0058b325 | = "data" | s_data_0064a5ef = data
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0058b32a | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058b32f
    MOV ESI,EAX                         ; 0058b332
    TEST EAX,EAX                        ; 0058b334
    JZ 0x0058b372                       ; 0058b336 | LAB_0058b372
        ;   XREF to: 0058b372 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0058b338
        ;   Label: LAB_0058b338
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058b339
    PUSH EAX                            ; 0058b33d
    CALL core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0 ; 0058b33e | void core_skeledit.cpp_CSkeleton_saveStream_FUN_0058b3a0(CSkeleton * this_ptr, FILE * file_handle)
        ;   XREF to: 0058b3a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058b343
    PUSH 0x459                          ; 0058b346
    PUSH 0x64a62b                       ; 0058b34b | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064a62b = ..\core\skeledit.cpp
    PUSH ESI                            ; 0058b350
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058b351 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058b356
    PUSH EBX                            ; 0058b359
    PUSH 0x64a640                       ; 0058b35a | = "Saved skeleton to %s OK" | s_Saved_skeleton_to_s_OK_0064a640 = Saved skeleton to %s OK
    MOV EDX,dword ptr [0x00678a60]      ; 0058b35f | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 0058b365 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058b366 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058b36b
    POP EBP                             ; 0058b36e
    POP ESI                             ; 0058b36f
    POP EBX                             ; 0058b370
    RET                                 ; 0058b371
    PUSH EDI                            ; 0058b372
        ;   Label: LAB_0058b372
    PUSH EBX                            ; 0058b373
    MOV EDI,0x64a5f4                    ; 0058b374 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064a5f4 = ..\core\skeledit.cpp
    MOV EBP,0x457                       ; 0058b379
    PUSH 0x64a609                       ; 0058b37e | = "CSkeleton::save - Can't create %s" | s_CSkeleton_save_Can_t_cre_0064a609 = CSkeleton::save - Can't create %s
    MOV dword ptr [0x02f0ca48],EDI      ; 0058b383 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0058b389 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058b38f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058b394
    POP EDI                             ; 0058b397
    JMP 0x0058b338                      ; 0058b398 | LAB_0058b338
        ;   XREF to: 0058b338 (UNCONDITIONAL_JUMP)

