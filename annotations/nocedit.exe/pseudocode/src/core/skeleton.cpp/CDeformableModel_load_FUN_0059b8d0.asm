; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(CDeformableModel *this_ptr,char *filename)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 at 004be0e9
;   core_skeleton.cpp_getDeformableModel_FUN_005a1cf0 at 005a1d9d
;
; Referenced Globals:
;   TerminatedCString s_rt_0064e860
;   TerminatedCString s_models_0064e863
;   TerminatedCString s_core_skeleton_cpp_0064e86a
;   TerminatedCString s_CDeformableModel_load_Ca_0064e87f
;   TerminatedCString s_core_skeleton_cpp_0064e8a6
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b8d0
        ;   Label: core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0
    PUSH ESI                            ; 0059b8d1
    PUSH EDI                            ; 0059b8d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059b8d3
    MOV EDI,dword ptr [ESP + 0x10]      ; 0059b8d7
    MOV ESI,EBX                         ; 0059b8db
    ADD EDI,0x8fb0                      ; 0059b8dd
    PUSH EDI                            ; 0059b8e3
    MOV AL,byte ptr [ESI]               ; 0059b8e4
        ;   Label: LAB_0059b8e4
    MOV byte ptr [EDI],AL               ; 0059b8e6
    CMP AL,0x0                          ; 0059b8e8
    JZ 0x0059b8fc                       ; 0059b8ea
        ;   XREF to: 0059b8fc (CONDITIONAL_JUMP)  ; LAB_0059b8fc
    MOV AL,byte ptr [ESI + 0x1]         ; 0059b8ec
    ADD ESI,0x2                         ; 0059b8ef
    MOV byte ptr [EDI + 0x1],AL         ; 0059b8f2
    ADD EDI,0x2                         ; 0059b8f5
    CMP AL,0x0                          ; 0059b8f8
    JNZ 0x0059b8e4                      ; 0059b8fa
        ;   XREF to: 0059b8e4 (CONDITIONAL_JUMP)  ; LAB_0059b8e4
    POP EDI                             ; 0059b8fc
        ;   Label: LAB_0059b8fc
    PUSH 0x64e860                       ; 0059b8fd | = "rt"
    PUSH EBX                            ; 0059b902
    PUSH 0x64e863                       ; 0059b903 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0059b908
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0059b90d
    MOV EDI,EAX                         ; 0059b910
    TEST EAX,EAX                        ; 0059b912
    JZ 0x0059b93b                       ; 0059b914
        ;   XREF to: 0059b93b (CONDITIONAL_JUMP)  ; LAB_0059b93b
    PUSH EDI                            ; 0059b916
        ;   Label: LAB_0059b916
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059b917
    PUSH EBX                            ; 0059b91b
    CALL core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 ; 0059b91c
        ;   XREF to: 0059b970 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970(CDeformableModel * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0059b921
    PUSH 0x4b4                          ; 0059b924
    PUSH 0x64e8a6                       ; 0059b929 | = "..\\core\\skeleton.cpp"
    PUSH EDI                            ; 0059b92e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0059b92f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0059b934
    POP EDI                             ; 0059b937
    POP ESI                             ; 0059b938
    POP EBX                             ; 0059b939
    RET                                 ; 0059b93a
    PUSH EBX                            ; 0059b93b
        ;   Label: LAB_0059b93b
    MOV EDX,0x64e86a                    ; 0059b93c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x4b2                       ; 0059b941
    PUSH 0x64e87f                       ; 0059b946 | = "CDeformableModel::load - Can't open %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 0059b94b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0059b951 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059b957
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0059b95c
    JMP 0x0059b916                      ; 0059b95f
        ;   XREF to: 0059b916 (UNCONDITIONAL_JUMP)  ; LAB_0059b916

