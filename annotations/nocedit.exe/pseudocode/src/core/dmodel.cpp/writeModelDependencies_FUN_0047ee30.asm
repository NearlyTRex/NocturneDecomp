; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_writeModelDependencies_FUN_0047ee30(FILE * dependency_file, char * model_filename)
;
; Parameters:
; FILE *           Stack[0x4]:4   dependency_file
; char *           Stack[0x8]:4   model_filename
;
; XREF[2]:
;   core_fileman.cpp_CDemonFileManager_addKeyframeModelToExtractList_FUN_004be230 at 004be257
;   core_setedit.cpp_CDemonSet_FUN_00584e70 at 00585093
;
; Referenced Globals:
;   TerminatedCString s_models_s_00620f2e
;   TerminatedCString s_core_dmodel_cpp_00620f39
;   TerminatedCString s_core_dmodel_cpp_00620f4c
;   TerminatedCString s_Out_of_memory_00620f5f
;   TerminatedCString s_core_dmodel_cpp_00620f6e
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
;   core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ee30
        ;   Label: core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
    PUSH EBP                            ; 0047ee31
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ee32
    PUSH EDX                            ; 0047ee36
    PUSH 0x620f2e                       ; 0047ee37 | = "models\\%s\n"
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047ee3c
    PUSH ECX                            ; 0047ee40
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047ee41
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0047ee46
    PUSH 0xe8a                          ; 0047ee49
    PUSH 0x620f39                       ; 0047ee4e | = "..\\core\\dmodel.cpp"
    PUSH 0x56d8                         ; 0047ee53
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0047ee58
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0047ee5d
    TEST EAX,EAX                        ; 0047ee60
    JNZ 0x0047eecc                      ; 0047ee62
        ;   XREF to: 0047eecc (CONDITIONAL_JUMP)  ; LAB_0047eecc
    MOV EBX,EAX                         ; 0047ee64
        ;   Label: LAB_0047ee64
    TEST EAX,EAX                        ; 0047ee66
    JNZ 0x0047ee91                      ; 0047ee68
        ;   XREF to: 0047ee91 (CONDITIONAL_JUMP)  ; LAB_0047ee91
    PUSH EDI                            ; 0047ee6a
    PUSH ESI                            ; 0047ee6b
    MOV ESI,0x620f4c                    ; 0047ee6c | = "..\\core\\dmodel.cpp"
    MOV EDI,0xe8b                       ; 0047ee71
    PUSH 0x620f5f                       ; 0047ee76 | = "Out of memory."
    MOV dword ptr [0x02f0ca48],ESI      ; 0047ee7b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0047ee81 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0047ee87
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0047ee8c
    POP ESI                             ; 0047ee8f
    POP EDI                             ; 0047ee90
    MOV EBP,dword ptr [ESP + 0x10]      ; 0047ee91
        ;   Label: LAB_0047ee91
    PUSH EBP                            ; 0047ee95
    PUSH EBX                            ; 0047ee96
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 ; 0047ee97
        ;   XREF to: 00476db0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0047ee9c
    PUSH 0x0                            ; 0047ee9f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047eea1
    PUSH EAX                            ; 0047eea5
    PUSH EBX                            ; 0047eea6
    CALL core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00 ; 0047eea7
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)
    MOV EDX,0x620f6e                    ; 0047eeac | = "..\\core\\dmodel.cpp"
    MOV ECX,0xe8e                       ; 0047eeb1
    ADD ESP,0xc                         ; 0047eeb6
    MOV dword ptr [0x0067d20c],EDX      ; 0047eeb9 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 0047eebf | g_CurrentDebugLine
    TEST EBX,EBX                        ; 0047eec5
    JNZ 0x0047eed7                      ; 0047eec7
        ;   XREF to: 0047eed7 (CONDITIONAL_JUMP)  ; LAB_0047eed7
    POP EBP                             ; 0047eec9
    POP EBX                             ; 0047eeca
    RET                                 ; 0047eecb
    PUSH EAX                            ; 0047eecc
        ;   Label: LAB_0047eecc
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0 ; 0047eecd
        ;   XREF to: 00476cf0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0047eed2
    JMP 0x0047ee64                      ; 0047eed5
        ;   XREF to: 0047ee64 (UNCONDITIONAL_JUMP)  ; LAB_0047ee64
    PUSH 0x0                            ; 0047eed7
        ;   Label: LAB_0047eed7
    PUSH EBX                            ; 0047eed9
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90 ; 0047eeda
        ;   XREF to: 00476d90 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel * this_ptr)
    ADD ESP,0x8                         ; 0047eedf
    PUSH EAX                            ; 0047eee2
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0047eee3
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0047eee8
    POP EBP                             ; 0047eeeb
    POP EBX                             ; 0047eeec
    RET                                 ; 0047eeed

