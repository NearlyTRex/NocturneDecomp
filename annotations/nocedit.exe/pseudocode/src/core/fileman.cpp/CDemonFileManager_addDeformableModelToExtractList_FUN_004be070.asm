; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070(CDemonFileManager *this_ptr,char *model_filename)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_filename
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdfb0
;
; Referenced Globals:
;   TerminatedCString s_Adding_files_for_s_to_ex_006296fa
;   TerminatedCString s_models_s_00629721
;   TerminatedCString s_core_fileman_cpp_0062972c
;   TerminatedCString s_core_fileman_cpp_00629740
;   TerminatedCString s_Out_of_memory_00629754
;   TerminatedCString s_core_fileman_cpp_00629763
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0
;   core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270
;   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;   shape_memdbg.cpp_debugFreeChecked_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be070
        ;   Label: core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
    PUSH ESI                            ; 004be071
    PUSH EBP                            ; 004be072
    MOV ESI,dword ptr [ESP + 0x14]      ; 004be073
    PUSH ESI                            ; 004be077
    PUSH 0x6296fa                       ; 004be078 | = "Adding files for %s to extract list..."
    MOV EDX,dword ptr [0x00678a60]      ; 004be07d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004be083 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004be084
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004be089
    PUSH ESI                            ; 004be08c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004be08d
    PUSH 0x629721                       ; 004be091 | = "models\\%s\n"
    MOV ECX,dword ptr [EAX]             ; 004be096
    PUSH ECX                            ; 004be098
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004be099
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004be09e
    PUSH 0x143                          ; 004be0a1
    PUSH 0x62972c                       ; 004be0a6 | = "..\\core\\fileman.cpp"
    PUSH 0x9000                         ; 004be0ab
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004be0b0
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004be0b5
    TEST EAX,EAX                        ; 004be0b8
    JNZ 0x004be11f                      ; 004be0ba
        ;   XREF to: 004be11f (CONDITIONAL_JUMP)  ; LAB_004be11f
    MOV EBX,EAX                         ; 004be0bc
        ;   Label: LAB_004be0bc
    TEST EAX,EAX                        ; 004be0be
    JNZ 0x004be0e7                      ; 004be0c0
        ;   XREF to: 004be0e7 (CONDITIONAL_JUMP)  ; LAB_004be0e7
    PUSH EDI                            ; 004be0c2
    MOV EDI,0x629740                    ; 004be0c3 | = "..\\core\\fileman.cpp"
    MOV EBP,0x144                       ; 004be0c8
    PUSH 0x629754                       ; 004be0cd | = "Out of memory."
    MOV dword ptr [0x02f0ca48],EDI      ; 004be0d2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004be0d8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004be0de
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004be0e3
    POP EDI                             ; 004be0e6
    PUSH ESI                            ; 004be0e7
        ;   Label: LAB_004be0e7
    PUSH EBX                            ; 004be0e8
    CALL core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0 ; 004be0e9
        ;   XREF to: 0059b8d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004be0ee
    MOV EAX,dword ptr [ESP + 0x10]      ; 004be0f1
    MOV EDX,dword ptr [EAX]             ; 004be0f5
    PUSH EDX                            ; 004be0f7
    PUSH EBX                            ; 004be0f8
    MOV ESI,0x147                       ; 004be0f9
    CALL core_skeledit.cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0 ; 004be0fe
        ;   XREF to: 0058a2b0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0(CDeformableModel * this_ptr, _FILE * file_handle)
    MOV ECX,0x629763                    ; 004be103 | = "..\\core\\fileman.cpp"
    ADD ESP,0x8                         ; 004be108
    MOV dword ptr [0x02f0d944],ESI      ; 004be10b | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 004be111 | g_CurrentDebugFilename
    TEST EBX,EBX                        ; 004be117
    JNZ 0x004be12a                      ; 004be119
        ;   XREF to: 004be12a (CONDITIONAL_JUMP)  ; LAB_004be12a
    POP EBP                             ; 004be11b
    POP ESI                             ; 004be11c
    POP EBX                             ; 004be11d
    RET                                 ; 004be11e
    PUSH EAX                            ; 004be11f
        ;   Label: LAB_004be11f
    CALL core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160 ; 004be120
        ;   XREF to: 0059a160 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 004be125
    JMP 0x004be0bc                      ; 004be128
        ;   XREF to: 004be0bc (UNCONDITIONAL_JUMP)  ; LAB_004be0bc
    PUSH 0x0                            ; 004be12a
        ;   Label: LAB_004be12a
    PUSH EBX                            ; 004be12c
    CALL core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270 ; 004be12d
        ;   XREF to: 0059a270 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270(CDeformableModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be132
    PUSH EAX                            ; 004be135
    CALL shape_memdbg.cpp_debugFreeChecked_FUN_0050f210 ; 004be136
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFreeChecked_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004be13b
    POP EBP                             ; 004be13e
    POP ESI                             ; 004be13f
    POP EBX                             ; 004be140
    RET                                 ; 004be141

