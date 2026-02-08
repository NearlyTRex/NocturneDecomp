; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_model_c_loadModelChunk_FUN_00528970(char *filename,int model_size)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   model_size
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
;
; XREF[1]:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 at 00501d98
;
; Referenced Globals:
;   TerminatedCString s_rb_00639c60
;   TerminatedCString s_models_00639c63
;   TerminatedCString s_Unable_to_open_model_s_00639c6a
;   TerminatedCString s_engine_model_c_00639c83
;   TerminatedCString s_engine_model_c_00639c95
;   TerminatedCString s_Out_of_partial_model_mem_00639ca7
;   TerminatedCString s_engine_model_c_00639cc5
;   TerminatedCString s_engine_model_c_00639cd7
;   TerminatedCString s_Model_read_hose_00639ce9
;   TerminatedCString s_engine_model_c_00639cf9
;   TerminatedCString s_engine_model_c_00639d0b
;   TerminatedCString s_Bad_model_00639d1d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fread_FUN_005fd990
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528970
        ;   Label: engine_model.c_loadModelChunk_FUN_00528970
    PUSH ESI                            ; 00528971
    PUSH EDI                            ; 00528972
    PUSH EBP                            ; 00528973
    SUB ESP,0x50                        ; 00528974
    MOV EBP,dword ptr [ESP + 0x64]      ; 00528977
    MOV ESI,dword ptr [ESP + 0x68]      ; 0052897b
    PUSH 0x639c60                       ; 0052897f | = "rb"
    PUSH EBP                            ; 00528984
    PUSH 0x639c63                       ; 00528985 | = "models"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0052898a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0052898f
    MOV EDI,EAX                         ; 00528992
    TEST EAX,EAX                        ; 00528994
    JZ 0x00528a4f                       ; 00528996
        ;   XREF to: 00528a4f (CONDITIONAL_JUMP)  ; LAB_00528a4f
    PUSH 0x2e6                          ; 0052899c
        ;   Label: LAB_0052899c
    PUSH 0x639c95                       ; 005289a1 | = "..\\engine\\model.c"
    LEA EAX,[ESI + 0x4]                 ; 005289a6
    PUSH EAX                            ; 005289a9
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005289aa
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005289af
    MOV EBX,EAX                         ; 005289b2
    TEST EAX,EAX                        ; 005289b4
    JNZ 0x005289eb                      ; 005289b6
        ;   XREF to: 005289eb (CONDITIONAL_JUMP)  ; LAB_005289eb
    PUSH EBP                            ; 005289b8
    PUSH 0x639ca7                       ; 005289b9 | = "Out of partial model mem : %s"
    LEA EAX,[ESP + 0x8]                 ; 005289be
    PUSH EAX                            ; 005289c2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005289c3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x2ee                       ; 005289c8
    ADD ESP,0xc                         ; 005289cd
    MOV [0x02f0ca4c],EAX                ; 005289d0 | g_CurrentLineNumber
    MOV EAX,ESP                         ; 005289d5
    MOV EBP,0x639cc5                    ; 005289d7 | = "..\\engine\\model.c"
    PUSH EAX                            ; 005289dc
    MOV dword ptr [0x02f0ca48],EBP      ; 005289dd | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005289e3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005289e8
    PUSH EDI                            ; 005289eb
        ;   Label: LAB_005289eb
    PUSH ESI                            ; 005289ec
    PUSH 0x1                            ; 005289ed
    PUSH EBX                            ; 005289ef
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005289f0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 005289f5
    CMP EAX,ESI                         ; 005289f8
    JZ 0x00528a1f                       ; 005289fa
        ;   XREF to: 00528a1f (CONDITIONAL_JUMP)  ; LAB_00528a1f
    MOV EDX,0x639cd7                    ; 005289fc | = "..\\engine\\model.c"
    MOV ECX,0x2f3                       ; 00528a01
    PUSH 0x639ce9                       ; 00528a06 | = "Model read hose"
    MOV dword ptr [0x02f0ca48],EDX      ; 00528a0b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00528a11 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00528a17
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00528a1c
    PUSH 0x2f4                          ; 00528a1f
        ;   Label: LAB_00528a1f
    PUSH 0x639cf9                       ; 00528a24 | = "..\\engine\\model.c"
    PUSH EDI                            ; 00528a29
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00528a2a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    MOV AH,byte ptr [EBX]               ; 00528a2f
    ADD ESP,0xc                         ; 00528a31
    CMP AH,0x14                         ; 00528a34
    JZ 0x00528a3e                       ; 00528a37
        ;   XREF to: 00528a3e (CONDITIONAL_JUMP)  ; LAB_00528a3e
    CMP AH,0x20                         ; 00528a39
    JNZ 0x00528a88                      ; 00528a3c
        ;   XREF to: 00528a88 (CONDITIONAL_JUMP)  ; LAB_00528a88
    MOV EAX,EBX                         ; 00528a3e
        ;   Label: LAB_00528a3e
    MOV dword ptr [ESI + EBX*0x1],0x0   ; 00528a40
    ADD ESP,0x50                        ; 00528a47
    POP EBP                             ; 00528a4a
    POP EDI                             ; 00528a4b
    POP ESI                             ; 00528a4c
    POP EBX                             ; 00528a4d
    RET                                 ; 00528a4e
    PUSH EBP                            ; 00528a4f
        ;   Label: LAB_00528a4f
    PUSH 0x639c6a                       ; 00528a50 | = "Unable to open model: %s"
    LEA EAX,[ESP + 0x8]                 ; 00528a55
    PUSH EAX                            ; 00528a59
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00528a5a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x639c83                    ; 00528a5f | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 00528a64
    MOV EAX,ESP                         ; 00528a67
    MOV ECX,0x2e3                       ; 00528a69
    PUSH EAX                            ; 00528a6e
    MOV dword ptr [0x02f0ca48],EDX      ; 00528a6f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00528a75 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00528a7b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00528a80
    JMP 0x0052899c                      ; 00528a83
        ;   XREF to: 0052899c (UNCONDITIONAL_JUMP)  ; LAB_0052899c
    MOV EDI,0x639d0b                    ; 00528a88 | = "..\\engine\\model.c"
        ;   Label: LAB_00528a88
    MOV EBP,0x2f6                       ; 00528a8d
    PUSH 0x639d1d                       ; 00528a92 | = "Bad model!"
    MOV dword ptr [0x02f0ca48],EDI      ; 00528a97 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00528a9d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00528aa3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00528aa8
    MOV EAX,EBX                         ; 00528aab
    MOV dword ptr [ESI + EBX*0x1],0x0   ; 00528aad
    ADD ESP,0x50                        ; 00528ab4
    POP EBP                             ; 00528ab7
    POP EDI                             ; 00528ab8
    POP ESI                             ; 00528ab9
    POP EBX                             ; 00528aba
    RET                                 ; 00528abb

