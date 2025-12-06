; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
;
; XREF[8]:
;   engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610 at 004b5616
;   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 at 004b5594
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 at 00501e92
;   engine_model.c_getMRGLBounds_FUN_00528140 at 00528554
;   engine_palette.cpp_CPaletteManager_FUN_00545060 at 00545108
;   shape_design.c_centerKeyframeModels_FUN_004681a0 at 004681f5
;   shape_design.c_loadModelBinary_FUN_00458170 at 00458886
;   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 at 0048ff24
;
; Referenced Globals:
;   undefined4 s_t_00639a2e
;   TerminatedCString s_models_00639aab
;   TerminatedCString s_Unable_to_get_file_size__00639ab2
;   TerminatedCString s_engine_model_c_00639ace
;   TerminatedCString s_rb_00639ae0
;   TerminatedCString s_models_00639ae3
;   TerminatedCString s_Unable_to_open_model_s_00639aea
;   TerminatedCString s_engine_model_c_00639b03
;   TerminatedCString s_engine_model_c_00639b15
;   TerminatedCString s_Out_of_model_memory_s_00639b27
;   TerminatedCString s_engine_model_c_00639b3f
;   TerminatedCString s_Model_file_read_error_s_00639b51
;   TerminatedCString s_engine_model_c_00639b6b
;   TerminatedCString s_engine_model_c_00639b7d
;   TerminatedCString s_Invalid_model_s_00639b8f
;   ... and 3 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_boss.c_modelStructNotSupported_FUN_0041db80
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527ec0
        ;   Label: engine_model.c_loadModelFile_FUN_00527ec0
    PUSH ESI                            ; 00527ec1
    PUSH EBP                            ; 00527ec2
    SUB ESP,0x50                        ; 00527ec3
    MOV EBX,dword ptr [ESP + 0x60]      ; 00527ec6
    MOV DL,0x2e                         ; 00527eca
    MOV ESI,EBX                         ; 00527ecc
    MOV AL,byte ptr [ESI]               ; 00527ece
        ;   Label: LAB_00527ece
    CMP AL,DL                           ; 00527ed0
    JZ 0x00527ee6                       ; 00527ed2 | LAB_00527ee6
        ;   XREF to: 00527ee6 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 00527ed4
    JZ 0x00527ee4                       ; 00527ed6 | LAB_00527ee4
        ;   XREF to: 00527ee4 (CONDITIONAL_JUMP)
    INC ESI                             ; 00527ed8
    MOV AL,byte ptr [ESI]               ; 00527ed9
    CMP AL,DL                           ; 00527edb
    JZ 0x00527ee6                       ; 00527edd | LAB_00527ee6
        ;   XREF to: 00527ee6 (CONDITIONAL_JUMP)
    INC ESI                             ; 00527edf
    CMP AL,0x0                          ; 00527ee0
    JNZ 0x00527ece                      ; 00527ee2 | LAB_00527ece
        ;   XREF to: 00527ece (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 00527ee4
        ;   Label: LAB_00527ee4
    TEST ESI,ESI                        ; 00527ee6
        ;   Label: LAB_00527ee6
    JNZ 0x0052807b                      ; 00527ee8 | LAB_0052807b
        ;   XREF to: 0052807b (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00527eee
        ;   Label: LAB_00527eee
    PUSH EBX                            ; 00527eef
    PUSH 0x639aab                       ; 00527ef0 | = "models" | s_models_00639aab = models
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00527ef5 | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00527efa
    MOV EDI,EAX                         ; 00527efd
    TEST EAX,EAX                        ; 00527eff
    JNZ 0x00527f39                      ; 00527f01 | LAB_00527f39
        ;   XREF to: 00527f39 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00527f03
    PUSH 0x639ab2                       ; 00527f04 | = "Unable to get file size: %s" | s_Unable_to_get_file_size__00639ab2 = Unable to get file size: %s
    LEA EAX,[ESP + 0xc]                 ; 00527f09
    PUSH EAX                            ; 00527f0d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00527f0e | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EDX,0x639ace                    ; 00527f13 | = "..\\engine\\model.c" | s_engine_model_c_00639ace = ..\engine\model.c
    ADD ESP,0xc                         ; 00527f18
    LEA EAX,[ESP + 0x4]                 ; 00527f1b
    MOV ECX,0xf0                        ; 00527f1f
    PUSH EAX                            ; 00527f24
    MOV dword ptr [0x02f0ca48],EDX      ; 00527f25 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00527f2b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00527f31 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00527f36
    PUSH 0x639ae0                       ; 00527f39 | = "rb" | s_rb_00639ae0 = rb
        ;   Label: LAB_00527f39
    PUSH EBX                            ; 00527f3e
    PUSH 0x639ae3                       ; 00527f3f | = "models" | s_models_00639ae3 = models
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00527f44 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00527f49
    MOV EBP,EAX                         ; 00527f4c
    TEST EAX,EAX                        ; 00527f4e
    JNZ 0x00527f87                      ; 00527f50 | LAB_00527f87
        ;   XREF to: 00527f87 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00527f52
    PUSH 0x639aea                       ; 00527f53 | = "Unable to open model: %s" | s_Unable_to_open_model_s_00639aea = Unable to open model: %s
    LEA EAX,[ESP + 0xc]                 ; 00527f58
    PUSH EAX                            ; 00527f5c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00527f5d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0xf5                        ; 00527f62
    ADD ESP,0xc                         ; 00527f67
    MOV [0x02f0ca4c],EAX                ; 00527f6a | int g_CurrentLineNumber
    LEA EAX,[ESP + 0x4]                 ; 00527f6f
    MOV ESI,0x639b03                    ; 00527f73 | = "..\\engine\\model.c" | s_engine_model_c_00639b03 = ..\engine\model.c
    PUSH EAX                            ; 00527f78
    MOV dword ptr [0x02f0ca48],ESI      ; 00527f79 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00527f7f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00527f84
    PUSH 0xf8                           ; 00527f87
        ;   Label: LAB_00527f87
    PUSH 0x639b15                       ; 00527f8c | = "..\\engine\\model.c" | s_engine_model_c_00639b15 = ..\engine\model.c
    PUSH EDI                            ; 00527f91
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00527f92 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00527f97
    MOV ESI,EAX                         ; 00527f9a
    TEST EAX,EAX                        ; 00527f9c
    JNZ 0x00527fd6                      ; 00527f9e | LAB_00527fd6
        ;   XREF to: 00527fd6 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00527fa0
    PUSH 0x639b27                       ; 00527fa1 | = "Out of model memory: %s" | s_Out_of_model_memory_s_00639b27 = Out of model memory: %s
    LEA EAX,[ESP + 0xc]                 ; 00527fa6
    PUSH EAX                            ; 00527faa
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00527fab | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EDX,0x639b3f                    ; 00527fb0 | = "..\\engine\\model.c" | s_engine_model_c_00639b3f = ..\engine\model.c
    ADD ESP,0xc                         ; 00527fb5
    LEA EAX,[ESP + 0x4]                 ; 00527fb8
    MOV ECX,0x100                       ; 00527fbc
    PUSH EAX                            ; 00527fc1
    MOV dword ptr [0x02f0ca48],EDX      ; 00527fc2 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00527fc8 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00527fce | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00527fd3
    PUSH EBP                            ; 00527fd6
        ;   Label: LAB_00527fd6
    PUSH EDI                            ; 00527fd7
    PUSH 0x1                            ; 00527fd8
    PUSH ESI                            ; 00527fda
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00527fdb | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00527fe0
    CMP EAX,EDI                         ; 00527fe3
    JZ 0x0052801c                       ; 00527fe5 | LAB_0052801c
        ;   XREF to: 0052801c (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00527fe7
    PUSH 0x639b51                       ; 00527fe8 | = "Model file read error: %s" | s_Model_file_read_error_s_00639b51 = Model file read error: %s
    LEA EAX,[ESP + 0xc]                 ; 00527fed
    PUSH EAX                            ; 00527ff1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00527ff2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0x107                       ; 00527ff7
    ADD ESP,0xc                         ; 00527ffc
    MOV [0x02f0ca4c],EAX                ; 00527fff | int g_CurrentLineNumber
    LEA EAX,[ESP + 0x4]                 ; 00528004
    MOV EDI,0x639b6b                    ; 00528008 | = "..\\engine\\model.c" | s_engine_model_c_00639b6b = ..\engine\model.c
    PUSH EAX                            ; 0052800d
    MOV dword ptr [0x02f0ca48],EDI      ; 0052800e | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00528014 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00528019
    PUSH 0x109                          ; 0052801c
        ;   Label: LAB_0052801c
    PUSH 0x639b7d                       ; 00528021 | = "..\\engine\\model.c" | s_engine_model_c_00639b7d = ..\engine\model.c
    PUSH EBP                            ; 00528026
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00528027 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    MOV AH,byte ptr [ESI]               ; 0052802c
    ADD ESP,0xc                         ; 0052802e
    CMP AH,0x14                         ; 00528031
    JZ 0x00528071                       ; 00528034 | LAB_00528071
        ;   XREF to: 00528071 (CONDITIONAL_JUMP)
    CMP AH,0x20                         ; 00528036
    JZ 0x00528071                       ; 00528039 | LAB_00528071
        ;   XREF to: 00528071 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0052803b
    PUSH 0x639b8f                       ; 0052803c | = "Invalid model: %s" | s_Invalid_model_s_00639b8f = Invalid model: %s
    LEA EAX,[ESP + 0xc]                 ; 00528041
    PUSH EAX                            ; 00528045
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00528046 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EDX,0x639ba1                    ; 0052804b | = "..\\engine\\model.c" | s_engine_model_c_00639ba1 = ..\engine\model.c
    ADD ESP,0xc                         ; 00528050
    LEA EAX,[ESP + 0x4]                 ; 00528053
    MOV ECX,0x10d                       ; 00528057
    PUSH EAX                            ; 0052805c
    MOV dword ptr [0x02f0ca48],EDX      ; 0052805d | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00528063 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00528069 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052806e
    MOV EAX,ESI                         ; 00528071
        ;   Label: LAB_00528071
    POP EDI                             ; 00528073
    ADD ESP,0x50                        ; 00528074
    POP EBP                             ; 00528077
    POP ESI                             ; 00528078
    POP EBX                             ; 00528079
    RET                                 ; 0052807a
    XOR EAX,EAX                         ; 0052807b
        ;   Label: LAB_0052807b
    MOV AL,byte ptr [ESI + 0x1]         ; 0052807d
    PUSH EAX                            ; 00528080
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00528081 | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00528086
    CMP EAX,0x54                        ; 00528089
    JNZ 0x00527eee                      ; 0052808c | LAB_00527eee
        ;   XREF to: 00527eee (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00528092
    CALL engine_boss.c_modelStructNotSupported_FUN_0041db80 ; 00528093 | SMRGLHeaderExtended * engine_boss.c_modelStructNotSupported_FUN_0041db80(SMRGLHeaderExtended * header)
        ;   XREF to: 0041db80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00528098
    ADD ESP,0x50                        ; 0052809b
    POP EBP                             ; 0052809e
    POP ESI                             ; 0052809f
    POP EBX                             ; 005280a0
    RET                                 ; 005280a1

