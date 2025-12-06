; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeledit.cpp_CDeformableModel_save_FUN_0058f040(CDeformableModel * this_ptr, char * filename)
;
; Parameters:
; CDeformableModel * Stack[0xc]:4   this_ptr
; char *           Stack[0x10]:4   filename
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00598ecb
;
; Referenced Globals:
;   TerminatedCString s_s_s_already_exists_in_a__0064a0c6
;   TerminatedCString s_Saving_model_to_s_0064b160
;   TerminatedCString s_models_0064b176
;   TerminatedCString s_wt_0064b17d
;   TerminatedCString s_models_0064b180
;   TerminatedCString s_core_skeledit_cpp_0064b187
;   TerminatedCString s_CDeformableModel_save_Ca_0064b19c
;   TerminatedCString s_core_skeledit_cpp_0064b1c5
;   TerminatedCString s_Saved_model_to_s_OK_0064b1da
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_pod.cpp_CPod_locateFile_FUN_005512f0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH 0x24                           ; 0058f040
        ;   Label: core_skeledit.cpp_CDeformableModel_save_FUN_0058f040
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058f045 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 0058f04a
    PUSH ESI                            ; 0058f04b
    PUSH EBP                            ; 0058f04c
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058f04d
    PUSH EBX                            ; 0058f051
    PUSH 0x64b160                       ; 0058f052 | = "Saving model to %s..." | s_Saving_model_to_s_0064b160 = Saving model to %s...
    MOV EDX,dword ptr [0x00678a60]      ; 0058f057 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 0058f05d | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058f05e | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058f063
    PUSH 0x0                            ; 0058f066
    PUSH EBX                            ; 0058f068
    PUSH 0x64b176                       ; 0058f069 | = "models" | s_models_0064b176 = models
    MOV ECX,dword ptr [0x00680cdc]      ; 0058f06e | CDemonPod g_CDemonPodInstance | CDemonPod * g_CDemonPodPtr
    PUSH ECX                            ; 0058f074 | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_locateFile_FUN_005512f0 ; 0058f075 | CPodFile * engine_pod.cpp_CPod_locateFile_FUN_005512f0(CPod * this_ptr, char * base_path, char * filename, int * file_index_out)
        ;   XREF to: 005512f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0058f07a
    TEST EAX,EAX                        ; 0058f07d
    JZ 0x0058f09f                       ; 0058f07f | LAB_0058f09f
        ;   XREF to: 0058f09f (CONDITIONAL_JUMP)
    ADD EAX,0x4                         ; 0058f081
    PUSH EAX                            ; 0058f084
    PUSH EBX                            ; 0058f085
    PUSH 0x64b176                       ; 0058f086 | = "models" | s_models_0064b176 = models
    PUSH 0x64a0c6                       ; 0058f08b | = "%s\\%s already exists in a mounted po..." | s_s_s_already_exists_in_a__0064a0c6 = %s\%s already exists in a mounted pod file:
        ; %s
        ; I'm still saving it to the local file,
        ; but just thought you would want to know about the
        ; one in the pod.
    MOV ESI,dword ptr [0x00678a60]      ; 0058f090 | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 0058f096 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 0058f097 | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0058f09c
    PUSH 0x64b17d                       ; 0058f09f | = "wt" | s_wt_0064b17d = wt
        ;   Label: LAB_0058f09f
    PUSH EBX                            ; 0058f0a4
    PUSH 0x64b180                       ; 0058f0a5 | = "models" | s_models_0064b180 = models
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0058f0aa | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058f0af
    MOV ESI,EAX                         ; 0058f0b2
    TEST EAX,EAX                        ; 0058f0b4
    JZ 0x0058f0f2                       ; 0058f0b6 | LAB_0058f0f2
        ;   XREF to: 0058f0f2 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0058f0b8
        ;   Label: LAB_0058f0b8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058f0b9
    PUSH EAX                            ; 0058f0bd
    CALL core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120 ; 0058f0be | void core_skeledit.cpp_CDeformableModel_saveStream_FUN_0058f120(CDeformableModel * this_ptr)
        ;   XREF to: 0058f120 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058f0c3
    PUSH 0xb2e                          ; 0058f0c6
    PUSH 0x64b1c5                       ; 0058f0cb | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064b1c5 = ..\core\skeledit.cpp
    PUSH ESI                            ; 0058f0d0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058f0d1 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058f0d6
    PUSH EBX                            ; 0058f0d9
    PUSH 0x64b1da                       ; 0058f0da | = "Saved model to %s OK" | s_Saved_model_to_s_OK_0064b1da = Saved model to %s OK
    MOV EDX,dword ptr [0x00678a60]      ; 0058f0df | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 0058f0e5 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 0058f0e6 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0058f0eb
    POP EBP                             ; 0058f0ee
    POP ESI                             ; 0058f0ef
    POP EBX                             ; 0058f0f0
    RET                                 ; 0058f0f1
    PUSH EDI                            ; 0058f0f2
        ;   Label: LAB_0058f0f2
    PUSH EBX                            ; 0058f0f3
    MOV EDI,0x64b187                    ; 0058f0f4 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064b187 = ..\core\skeledit.cpp
    MOV EBP,0xb2c                       ; 0058f0f9
    PUSH 0x64b19c                       ; 0058f0fe | = "CDeformableModel::save - Can't create %s" | s_CDeformableModel_save_Ca_0064b19c = CDeformableModel::save - Can't create %s
    MOV dword ptr [0x02f0ca48],EDI      ; 0058f103 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0058f109 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058f10f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058f114
    POP EDI                             ; 0058f117
    JMP 0x0058f0b8                      ; 0058f118 | LAB_0058f0b8
        ;   XREF to: 0058f0b8 (UNCONDITIONAL_JUMP)

