; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fileman_cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (CDemonFileManager *file_manager_ptr,char *cloth_filename)
;
; Parameters:
; CDemonFileManager * Stack[0x4]:4   file_manager_ptr
; char *           Stack[0x8]:4   cloth_filename
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bdf81
;
; Referenced Globals:
;   TerminatedCString s_Adding_files_for_s_to_ex_00629777
;   TerminatedCString s_core_fileman_cpp_0062979e
;   TerminatedCString s_core_fileman_cpp_006297b2
;   TerminatedCString s_Can_t_allocate_cloth_006297c6
;   TerminatedCString s_models_s_006297db
;   TerminatedCString s_core_fileman_cpp_006297e6
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   char* g_CurrentDebugFilename = 0067d200
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_cloth.cpp_CCloth_addFilesToExtract_FUN_0043e0a0
;   core_cloth.cpp_CCloth_ctor_FUN_00438ba0
;   core_cloth.cpp_CCloth_dtor_FUN_00438c00
;   core_cloth.cpp_CCloth_load_FUN_00438cf0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be150
        ;   Label: core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
    PUSH ESI                            ; 004be151
    PUSH EBP                            ; 004be152
    MOV ESI,dword ptr [ESP + 0x14]      ; 004be153
    PUSH ESI                            ; 004be157
    PUSH 0x629777                       ; 004be158 | = "Adding files for %s to extract list..."
    MOV EDX,dword ptr [0x00678a60]      ; 004be15d | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 004be163 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004be164
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
    ADD ESP,0xc                         ; 004be169
    PUSH 0x153                          ; 004be16c
    PUSH 0x62979e                       ; 004be171 | = "..\\core\\fileman.cpp"
    PUSH 0x3fe70                        ; 004be176
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004be17b
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004be180
    TEST EAX,EAX                        ; 004be183
    JNZ 0x004be203                      ; 004be185
        ;   XREF to: 004be203 (CONDITIONAL_JUMP)  ; LAB_004be203
    MOV EBX,EAX                         ; 004be18b
        ;   Label: LAB_004be18b
    TEST EAX,EAX                        ; 004be18d
    JNZ 0x004be1b6                      ; 004be18f
        ;   XREF to: 004be1b6 (CONDITIONAL_JUMP)  ; LAB_004be1b6
    PUSH EDI                            ; 004be191
    MOV ECX,0x6297b2                    ; 004be192 | = "..\\core\\fileman.cpp"
    MOV EDI,0x154                       ; 004be197
    PUSH 0x6297c6                       ; 004be19c | = "Can't allocate cloth"
    MOV dword ptr [0x02f0ca48],ECX      ; 004be1a1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004be1a7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004be1ad
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004be1b2
    POP EDI                             ; 004be1b5
    PUSH ESI                            ; 004be1b6
        ;   Label: LAB_004be1b6
    PUSH EBX                            ; 004be1b7
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 004be1b8
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004be1bd
    PUSH ESI                            ; 004be1c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004be1c1
    PUSH 0x6297db                       ; 004be1c5 | = "models\\%s\n"
    MOV EBP,dword ptr [EAX]             ; 004be1ca
    PUSH EBP                            ; 004be1cc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004be1cd
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004be1d2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004be1d5
    MOV EDX,dword ptr [EAX]             ; 004be1d9
    PUSH EDX                            ; 004be1db
    PUSH EBX                            ; 004be1dc
    MOV ESI,0x158                       ; 004be1dd
    CALL core_cloth.cpp_CCloth_addFilesToExtract_FUN_0043e0a0 ; 004be1e2
        ;   XREF to: 0043e0a0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_addFilesToExtract_FUN_0043e0a0(CCloth * this_ptr, _FILE * file_handle)
    MOV ECX,0x6297e6                    ; 004be1e7 | = "..\\core\\fileman.cpp"
    ADD ESP,0x8                         ; 004be1ec
    MOV dword ptr [0x02f0d944],ESI      ; 004be1ef | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 004be1f5 | g_CurrentDebugFilename
    TEST EBX,EBX                        ; 004be1fb
    JNZ 0x004be211                      ; 004be1fd
        ;   XREF to: 004be211 (CONDITIONAL_JUMP)  ; LAB_004be211
    POP EBP                             ; 004be1ff
    POP ESI                             ; 004be200
    POP EBX                             ; 004be201
    RET                                 ; 004be202
    PUSH EAX                            ; 004be203
        ;   Label: LAB_004be203
    CALL core_cloth.cpp_CCloth_ctor_FUN_00438ba0 ; 004be204
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00438ba0(CCloth * this_ptr)
    ADD ESP,0x4                         ; 004be209
    JMP 0x004be18b                      ; 004be20c
        ;   XREF to: 004be18b (UNCONDITIONAL_JUMP)  ; LAB_004be18b
    PUSH 0x0                            ; 004be211
        ;   Label: LAB_004be211
    PUSH EBX                            ; 004be213
    CALL core_cloth.cpp_CCloth_dtor_FUN_00438c00 ; 004be214
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00438c00(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be219
    PUSH EAX                            ; 004be21c
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 004be21d
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 004be222
    POP EBP                             ; 004be225
    POP ESI                             ; 004be226
    POP EBX                             ; 004be227
    RET                                 ; 004be228

