; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0(CDemonRaytrace * this_ptr, char * filename)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x224]:1  local_224
; undefined1       Stack[-0x124]:1  local_124
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[2]:
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569d38
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005793d4
;
; Referenced Globals:
;   TerminatedCString s_rb_00622916
;   TerminatedCString s_data_00622919
;   TerminatedCString s_core_dtrace_cpp_0062291e
;   TerminatedCString s_data_s_00622931
;   TerminatedCString s_Old_GEO_file_s_exists_in_00622939
;   TerminatedCString s_core_dtrace_cpp_0062299b
;   TerminatedCString s_rb_006229ae
;   TerminatedCString s_core_dtrace_cpp_006229b2
;   TerminatedCString s_Can_t_rewrite_POD_file_f_006229c5
;   TerminatedCString s_core_dtrace_cpp_006229f0
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   undefined4 DAT_02cee5ac
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
;   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
;   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_findFile_FUN_00481760
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494de0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
    PUSH ESI                            ; 00494de1
    PUSH EDI                            ; 00494de2
    PUSH EBP                            ; 00494de3
    SUB ESP,0x214                       ; 00494de4
    MOV EDI,dword ptr [ESP + 0x228]     ; 00494dea
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00494df1
    PUSH 0x622916                       ; 00494df8 | = "rb" | s_rb_00622916 = rb
    PUSH ESI                            ; 00494dfd
    PUSH 0x622919                       ; 00494dfe | = "data" | s_data_00622919 = data
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00494e03 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    MOV EBX,EAX                         ; 00494e08
    ADD ESP,0xc                         ; 00494e0a
    TEST EAX,EAX                        ; 00494e0d
    JNZ 0x00494e1c                      ; 00494e0f | LAB_00494e1c
        ;   XREF to: 00494e1c (CONDITIONAL_JUMP)
    ADD ESP,0x214                       ; 00494e11
    POP EBP                             ; 00494e17
    POP EDI                             ; 00494e18
    POP ESI                             ; 00494e19
    POP EBX                             ; 00494e1a
    RET                                 ; 00494e1b
    PUSH EAX                            ; 00494e1c
        ;   Label: LAB_00494e1c
    PUSH EDI                            ; 00494e1d
    CALL core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 ; 00494e1e | void core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace * this_ptr, FILE * file_handle)
        ;   XREF to: 004947a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00494e23
    PUSH 0x212                          ; 00494e26
    PUSH 0x62291e                       ; 00494e2b | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_0062291e = ..\core\dtrace.cpp
    PUSH EBX                            ; 00494e30
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00494e31 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x02cee5ac]      ; 00494e36 | undefined4 DAT_02cee5ac
    ADD ESP,0xc                         ; 00494e3c
    CMP EDX,0x1                         ; 00494e3f
    JNZ 0x00494f1b                      ; 00494e42 | LAB_00494f1b
        ;   XREF to: 00494f1b (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00494e48
    PUSH 0x622931                       ; 00494e49 | = "data\\%s" | s_data_s_00622931 = data\%s
    LEA EAX,[ESP + 0x8]                 ; 00494e4e
    PUSH EAX                            ; 00494e52
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00494e53 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00494e58
    MOV EAX,ESP                         ; 00494e5b
    PUSH EAX                            ; 00494e5d
    CALL engine_dosio.c_findFile_FUN_00481760 ; 00494e5e | int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00494e63
    TEST EAX,EAX                        ; 00494e66
    JZ 0x00494f2b                       ; 00494e68 | LAB_00494f2b
        ;   XREF to: 00494f2b (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x208],0x0     ; 00494e6e
    JZ 0x00494f2b                       ; 00494e76 | LAB_00494f2b
        ;   XREF to: 00494f2b (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x100]               ; 00494e7c
    PUSH EAX                            ; 00494e83
    PUSH ESI                            ; 00494e84
    PUSH 0x622939                       ; 00494e85 | = "Old .GEO file %s exists in file:\n%s\..." | s_Old_GEO_file_s_exists_in_00622939 = Old .GEO file %s exists in file:
        ; %s
        ; Shall I patch it?
        ; If you're not sure what this means, type N.
    MOV EBX,dword ptr [0x00678a60]      ; 00494e8a | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 00494e90 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 00494e91 | int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00494e96
    TEST EAX,EAX                        ; 00494e99
    JZ 0x00494f1b                       ; 00494e9b | LAB_00494f1b
        ;   XREF to: 00494f1b (CONDITIONAL_JUMP)
    PUSH 0x21d                          ; 00494ea1
    PUSH 0x62299b                       ; 00494ea6 | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_0062299b = ..\core\dtrace.cpp
    PUSH 0x6229ae                       ; 00494eab | = "rb+" | s_rb_006229ae = rb+
    PUSH 0x0                            ; 00494eb0
    LEA EAX,[ESP + 0x110]               ; 00494eb2
    PUSH EAX                            ; 00494eb9
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00494eba | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00494ebf
    MOV EBX,EAX                         ; 00494ec2
    TEST EAX,EAX                        ; 00494ec4
    JNZ 0x00494eeb                      ; 00494ec6 | LAB_00494eeb
        ;   XREF to: 00494eeb (CONDITIONAL_JUMP)
    MOV ESI,0x6229b2                    ; 00494ec8 | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_006229b2 = ..\core\dtrace.cpp
    MOV EBP,0x21e                       ; 00494ecd
    PUSH 0x6229c5                       ; 00494ed2 | = "Can't rewrite .POD file for unknown r..." | s_Can_t_rewrite_POD_file_f_006229c5 = Can't rewrite .POD file for unknown reason
    MOV dword ptr [0x02f0ca48],ESI      ; 00494ed7 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00494edd | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00494ee3 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00494ee8
    PUSH 0x0                            ; 00494eeb
        ;   Label: LAB_00494eeb
    MOV EAX,dword ptr [ESP + 0x204]     ; 00494eed
    PUSH EAX                            ; 00494ef4
    PUSH EBX                            ; 00494ef5
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00494ef6 | int crt_stdio.c_fseek_FUN_005ffacc(FILE * file, long offset, int whence)
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00494efb
    PUSH EBX                            ; 00494efe
    PUSH EDI                            ; 00494eff
    CALL core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50 ; 00494f00 | void core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50(CDemonRaytrace * this_ptr, FILE * file_handle)
        ;   XREF to: 00494f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00494f05
    PUSH 0x221                          ; 00494f08
    PUSH 0x6229f0                       ; 00494f0d | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_006229f0 = ..\core\dtrace.cpp
    PUSH EBX                            ; 00494f12
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00494f13 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00494f18
    MOV EAX,0x1                         ; 00494f1b
        ;   Label: LAB_00494f1b
    ADD ESP,0x214                       ; 00494f20
    POP EBP                             ; 00494f26
    POP EDI                             ; 00494f27
    POP ESI                             ; 00494f28
    POP EBX                             ; 00494f29
    RET                                 ; 00494f2a
    PUSH ESI                            ; 00494f2b
        ;   Label: LAB_00494f2b
    PUSH EDI                            ; 00494f2c
    CALL core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040 ; 00494f2d | void core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040(CDemonRaytrace * this_ptr, char * filename)
        ;   XREF to: 00495040 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00494f32
    MOV EAX,0x1                         ; 00494f35
    ADD ESP,0x214                       ; 00494f3a
    POP EBP                             ; 00494f40
    POP EDI                             ; 00494f41
    POP ESI                             ; 00494f42
    POP EBX                             ; 00494f43
    RET                                 ; 00494f44

