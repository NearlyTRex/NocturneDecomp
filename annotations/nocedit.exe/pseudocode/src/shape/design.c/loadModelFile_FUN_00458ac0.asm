; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_design.c_loadModelFile_FUN_00458ac0(char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; Local Variables:
; undefined1       Stack[-0x170]:1  local_170
; undefined1       Stack[-0x11c]:1  local_11c
; undefined1       Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x73]:1  local_73
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_promptForModelNameAndLoad_FUN_00458a10 at 00458a9f
;   shape_meshlod.cpp_testLodGeneration_FUN_0051ed60 at 0051ed87
;
; Referenced Globals:
;   TerminatedCString s_Loading_model_0061a9d1
;   TerminatedCString s_BIN_0061a9e2
;   TerminatedCString s_S3D_0061a9e7
;   TerminatedCString s_rt_0061a9ec
;   TerminatedCString s_models_0061a9ef
;   TerminatedCString s_FILE_ERROR_Nothing_chang_0061a9f6
;   TerminatedCString s_d_0061aa13
;   TerminatedCString s_ERROR_Too_many_vertices__0061aa17
;   char s_EmptyChar_0061aa4e = \x00
;   TerminatedCString s_shape_design_c_0061aa4f
;   undefined4 s_\\shape\\design.c_0061aa51
;   TerminatedCString s_f_f_f_0061aa61
;   TerminatedCString s_d_0061aa6b
;   TerminatedCString s_ERROR_Too_many_polygons__0061aa6f
;   char s_EmptyChar_0061aaa3 = \x00
;   ... and 48 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c_strcmp_FUN_005fef20
;   crt_string.c_strtok_FUN_005fff50
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_design.c_calculateVertexNormals_FUN_0045be40
;   shape_design.c_loadModelBinary_FUN_00458170
;   shape_design.c_loadS3DModelFile_FUN_004593a0
;   shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458ac0
        ;   Label: shape_design.c_loadModelFile_FUN_00458ac0
    PUSH ESI                            ; 00458ac1
    PUSH EDI                            ; 00458ac2
    PUSH EBP                            ; 00458ac3
    MOV EBP,ESP                         ; 00458ac4
    SUB ESP,0x160                       ; 00458ac6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00458acc | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0x0                            ; 00458ad1
    PUSH 0x0                            ; 00458ad3
    MOV ESI,0x61a9d1                    ; 00458ad5 | = "Loading model..." | s_Loading_model_0061a9d1 = Loading model...
    PUSH ESI                            ; 00458ada | = "Loading model..." | s_Loading_model_0061a9d1 = Loading model...
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00458adb | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458ae0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00458ae3 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBP + 0x14]      ; 00458ae8
    LEA EDI,[EBP + -0x64]               ; 00458aeb
    PUSH EDI                            ; 00458aee
    MOV AL,byte ptr [ESI]               ; 00458aef
        ;   Label: LAB_00458aef
    MOV byte ptr [EDI],AL               ; 00458af1
    CMP AL,0x0                          ; 00458af3
    JZ 0x00458b07                       ; 00458af5 | LAB_00458b07
        ;   XREF to: 00458b07 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00458af7
    ADD ESI,0x2                         ; 00458afa
    MOV byte ptr [EDI + 0x1],AL         ; 00458afd
    ADD EDI,0x2                         ; 00458b00
    CMP AL,0x0                          ; 00458b03
    JNZ 0x00458aef                      ; 00458b05 | LAB_00458aef
        ;   XREF to: 00458aef (CONDITIONAL_JUMP)
    POP EDI                             ; 00458b07
        ;   Label: LAB_00458b07
    MOV dword ptr [EBP + -0x10],0x0     ; 00458b08
    JMP 0x00458b17                      ; 00458b0f | LAB_00458b17
        ;   XREF to: 00458b17 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 00458b11
        ;   Label: LAB_00458b11
    INC dword ptr [EBP + -0x10]         ; 00458b14
    LEA EDI,[EBP + -0x64]               ; 00458b17
        ;   Label: LAB_00458b17
    SUB ECX,ECX                         ; 00458b1a
    DEC ECX                             ; 00458b1c
    XOR EAX,EAX                         ; 00458b1d
    SCASB.REPNE ES:EDI                  ; 00458b1f
    NOT ECX                             ; 00458b21
    DEC ECX                             ; 00458b23
    CMP ECX,dword ptr [EBP + -0x10]     ; 00458b24
    JBE 0x00458b47                      ; 00458b27 | LAB_00458b47
        ;   XREF to: 00458b47 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 00458b29
    MOV AL,byte ptr [EAX + EBP*0x1 + -0x64] ; 00458b2c
    AND EAX,0xff                        ; 00458b30
    PUSH EAX                            ; 00458b35
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 00458b36 | int crt_ctype.c_toupper_FUN_005ff9e0(int c)
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00458b3b
    MOV EDX,dword ptr [EBP + -0x10]     ; 00458b3e
    MOV byte ptr [EDX + EBP*0x1 + -0x64],AL ; 00458b41
    JMP 0x00458b11                      ; 00458b45 | LAB_00458b11
        ;   XREF to: 00458b11 (UNCONDITIONAL_JUMP)
    MOV EDX,0x2e                        ; 00458b47
        ;   Label: LAB_00458b47
    LEA ESI,[EBP + -0x64]               ; 00458b4c
    MOV AL,byte ptr [ESI]               ; 00458b4f
        ;   Label: LAB_00458b4f
    CMP AL,DL                           ; 00458b51
    JZ 0x00458b67                       ; 00458b53 | LAB_00458b67
        ;   XREF to: 00458b67 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 00458b55
    JZ 0x00458b65                       ; 00458b57 | LAB_00458b65
        ;   XREF to: 00458b65 (CONDITIONAL_JUMP)
    INC ESI                             ; 00458b59
    MOV AL,byte ptr [ESI]               ; 00458b5a
    CMP AL,DL                           ; 00458b5c
    JZ 0x00458b67                       ; 00458b5e | LAB_00458b67
        ;   XREF to: 00458b67 (CONDITIONAL_JUMP)
    INC ESI                             ; 00458b60
    CMP AL,0x0                          ; 00458b61
    JNZ 0x00458b4f                      ; 00458b63 | LAB_00458b4f
        ;   XREF to: 00458b4f (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 00458b65
        ;   Label: LAB_00458b65
    MOV dword ptr [EBP + -0x4],ESI      ; 00458b67
        ;   Label: LAB_00458b67
    CMP dword ptr [EBP + -0x4],0x0      ; 00458b6a
    JZ 0x00458c50                       ; 00458b6e | LAB_00458c50
        ;   XREF to: 00458c50 (CONDITIONAL_JUMP)
    MOV EAX,0x61a9e2                    ; 00458b74 | = ".BIN" | s_BIN_0061a9e2 = .BIN
    PUSH EAX                            ; 00458b79 | = ".BIN" | s_BIN_0061a9e2 = .BIN
    MOV EAX,dword ptr [EBP + -0x4]      ; 00458b7a
    PUSH EAX                            ; 00458b7d
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00458b7e | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00458b83
    TEST EAX,EAX                        ; 00458b86
    JNZ 0x00458be2                      ; 00458b88 | LAB_00458be2
        ;   XREF to: 00458be2 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x64]               ; 00458b8a
    PUSH EAX                            ; 00458b8d
    CALL shape_design.c_loadModelBinary_FUN_00458170 ; 00458b8e | int shape_design.c_loadModelBinary_FUN_00458170(char * filename)
        ;   XREF to: 00458170 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00458b93
    MOV dword ptr [EBP + -0x68],EAX     ; 00458b96
    CMP dword ptr [EBP + -0x68],0x0     ; 00458b99
    JZ 0x00458bd7                       ; 00458b9d | LAB_00458bd7
        ;   XREF to: 00458bd7 (CONDITIONAL_JUMP)
    LEA ESI,[EBP + -0x64]               ; 00458b9f
    MOV EDI,0x66eda8                    ; 00458ba2 | char[80] g_LoadedModelName
    PUSH EDI                            ; 00458ba7 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 00458ba8
        ;   Label: LAB_00458ba8
    MOV byte ptr [EDI],AL               ; 00458baa | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 00458bac
    JZ 0x00458bc0                       ; 00458bae | LAB_00458bc0
        ;   XREF to: 00458bc0 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00458bb0
    ADD ESI,0x2                         ; 00458bb3
    MOV byte ptr [EDI + 0x1],AL         ; 00458bb6 | s__0066eda9
    ADD EDI,0x2                         ; 00458bb9
    CMP AL,0x0                          ; 00458bbc
    JNZ 0x00458ba8                      ; 00458bbe | LAB_00458ba8
        ;   XREF to: 00458ba8 (CONDITIONAL_JUMP)
    POP EDI                             ; 00458bc0
        ;   Label: LAB_00458bc0
    MOV dword ptr [0x01e528a8],0x0      ; 00458bc1 | int g_PolygonOptimizationPasses
    MOV ESI,dword ptr [0x01e528a8]      ; 00458bcb | int g_PolygonOptimizationPasses
    MOV dword ptr [0x01e528a4],ESI      ; 00458bd1 | int g_VertexOptimizationPasses
    MOV EAX,dword ptr [EBP + -0x68]     ; 00458bd7
        ;   Label: LAB_00458bd7
    MOV dword ptr [EBP + -0x14],EAX     ; 00458bda
    JMP 0x0045934e                      ; 00458bdd | LAB_0045934e
        ;   XREF to: 0045934e (UNCONDITIONAL_JUMP)
    MOV EAX,0x61a9e7                    ; 00458be2 | = ".S3D" | s_S3D_0061a9e7 = .S3D
        ;   Label: LAB_00458be2
    PUSH EAX                            ; 00458be7 | = ".S3D" | s_S3D_0061a9e7 = .S3D
    MOV EAX,dword ptr [EBP + -0x4]      ; 00458be8
    PUSH EAX                            ; 00458beb
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00458bec | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00458bf1
    TEST EAX,EAX                        ; 00458bf4
    JNZ 0x00458c50                      ; 00458bf6 | LAB_00458c50
        ;   XREF to: 00458c50 (CONDITIONAL_JUMP)
    LEA EAX,[EBP + -0x64]               ; 00458bf8
    PUSH EAX                            ; 00458bfb
    CALL shape_design.c_loadS3DModelFile_FUN_004593a0 ; 00458bfc | int shape_design.c_loadS3DModelFile_FUN_004593a0(char * filename)
        ;   XREF to: 004593a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00458c01
    MOV dword ptr [EBP + -0x6c],EAX     ; 00458c04
    CMP dword ptr [EBP + -0x6c],0x0     ; 00458c07
    JZ 0x00458c45                       ; 00458c0b | LAB_00458c45
        ;   XREF to: 00458c45 (CONDITIONAL_JUMP)
    LEA ESI,[EBP + -0x64]               ; 00458c0d
    MOV EDI,0x66eda8                    ; 00458c10 | char[80] g_LoadedModelName
    PUSH EDI                            ; 00458c15 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 00458c16
        ;   Label: LAB_00458c16
    MOV byte ptr [EDI],AL               ; 00458c18 | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 00458c1a
    JZ 0x00458c2e                       ; 00458c1c | LAB_00458c2e
        ;   XREF to: 00458c2e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00458c1e
    ADD ESI,0x2                         ; 00458c21
    MOV byte ptr [EDI + 0x1],AL         ; 00458c24 | s__0066eda9
    ADD EDI,0x2                         ; 00458c27
    CMP AL,0x0                          ; 00458c2a
    JNZ 0x00458c16                      ; 00458c2c | LAB_00458c16
        ;   XREF to: 00458c16 (CONDITIONAL_JUMP)
    POP EDI                             ; 00458c2e
        ;   Label: LAB_00458c2e
    MOV dword ptr [0x01e528a8],0x0      ; 00458c2f | int g_PolygonOptimizationPasses
    MOV ESI,dword ptr [0x01e528a8]      ; 00458c39 | int g_PolygonOptimizationPasses
    MOV dword ptr [0x01e528a4],ESI      ; 00458c3f | int g_VertexOptimizationPasses
    MOV EAX,dword ptr [EBP + -0x6c]     ; 00458c45
        ;   Label: LAB_00458c45
    MOV dword ptr [EBP + -0x14],EAX     ; 00458c48
    JMP 0x0045934e                      ; 00458c4b | LAB_0045934e
        ;   XREF to: 0045934e (UNCONDITIONAL_JUMP)
    MOV EAX,0x61a9ec                    ; 00458c50 | = "rt" | s_rt_0061a9ec = rt
        ;   Label: LAB_00458c50
    PUSH EAX                            ; 00458c55 | = "rt" | s_rt_0061a9ec = rt
    LEA EAX,[EBP + -0x64]               ; 00458c56
    PUSH EAX                            ; 00458c59
    MOV EAX,0x61a9ef                    ; 00458c5a | = "models" | s_models_0061a9ef = models
    PUSH EAX                            ; 00458c5f | = "models" | s_models_0061a9ef = models
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00458c60 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458c65
    MOV dword ptr [EBP + -0x8],EAX      ; 00458c68
    CMP dword ptr [EBP + -0x8],0x0      ; 00458c6b
    JNZ 0x00458c9e                      ; 00458c6f | LAB_00458c9e
        ;   XREF to: 00458c9e (CONDITIONAL_JUMP)
    PUSH 0x16                           ; 00458c71
    PUSH 0x0                            ; 00458c73
    MOV EAX,0x61a9f6                    ; 00458c75 | = "FILE ERROR! Nothing changed!" | s_FILE_ERROR_Nothing_chang_0061a9f6 = FILE ERROR! Nothing changed!
    PUSH EAX                            ; 00458c7a | = "FILE ERROR! Nothing changed!" | s_FILE_ERROR_Nothing_chang_0061a9f6 = FILE ERROR! Nothing changed!
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00458c7b | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458c80
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00458c83 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00458c88 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00458c8d | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x14],0x0     ; 00458c92
    JMP 0x0045934e                      ; 00458c99 | LAB_0045934e
        ;   XREF to: 0045934e (UNCONDITIONAL_JUMP)
    LEA ESI,[EBP + -0x64]               ; 00458c9e
        ;   Label: LAB_00458c9e
    MOV EDI,0x66eda8                    ; 00458ca1 | char[80] g_LoadedModelName
    PUSH EDI                            ; 00458ca6 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 00458ca7
        ;   Label: LAB_00458ca7
    MOV byte ptr [EDI],AL               ; 00458ca9 | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 00458cab
    JZ 0x00458cbf                       ; 00458cad | LAB_00458cbf
        ;   XREF to: 00458cbf (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00458caf
    ADD ESI,0x2                         ; 00458cb2
    MOV byte ptr [EDI + 0x1],AL         ; 00458cb5 | s__0066eda9
    ADD EDI,0x2                         ; 00458cb8
    CMP AL,0x0                          ; 00458cbb
    JNZ 0x00458ca7                      ; 00458cbd | LAB_00458ca7
        ;   XREF to: 00458ca7 (CONDITIONAL_JUMP)
    POP EDI                             ; 00458cbf
        ;   Label: LAB_00458cbf
    MOV dword ptr [0x01e528a8],0x0      ; 00458cc0 | int g_PolygonOptimizationPasses
    MOV ESI,dword ptr [0x01e528a8]      ; 00458cca | int g_PolygonOptimizationPasses
    MOV dword ptr [0x01e528a4],ESI      ; 00458cd0 | int g_VertexOptimizationPasses
    MOV ESI,0x1626408                   ; 00458cd6 | int g_VertexCount
    PUSH ESI                            ; 00458cdb | int g_VertexCount
    MOV ESI,0x61aa13                    ; 00458cdc | = "%d\n" | s_d_0061aa13 = %d

    PUSH ESI                            ; 00458ce1 | = "%d\n" | s_d_0061aa13 = %d

    MOV ESI,dword ptr [EBP + -0x8]      ; 00458ce2
    PUSH ESI                            ; 00458ce5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00458ce6 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458ceb
    CMP dword ptr [0x01626408],0x4e20   ; 00458cee | int g_VertexCount
    JLE 0x00458dae                      ; 00458cf8 | LAB_00458dae
        ;   XREF to: 00458dae (CONDITIONAL_JUMP)
    PUSH 0x4e20                         ; 00458cfe
    PUSH dword ptr [0x01626408]         ; 00458d03 | int g_VertexCount
    MOV ESI,0x61aa17                    ; 00458d09 | = "ERROR: Too many vertices! (npoints:%d..." | s_ERROR_Too_many_vertices__0061aa17 = ERROR: Too many vertices! (npoints:%d > MAX_POINTS:%d)
    PUSH ESI                            ; 00458d0e | = "ERROR: Too many vertices! (npoints:%d..." | s_ERROR_Too_many_vertices__0061aa17 = ERROR: Too many vertices! (npoints:%d > MAX_POINTS:%d)
    LEA ESI,[EBP + 0xffffff44]          ; 00458d0f
    PUSH ESI                            ; 00458d15
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00458d16 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00458d1b
    PUSH 0x16                           ; 00458d1e
    PUSH 0x0                            ; 00458d20
    LEA ESI,[EBP + 0xffffff44]          ; 00458d22
    PUSH ESI                            ; 00458d28
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00458d29 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458d2e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00458d31 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00458d36 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    MOV ESI,0x61aa4e                    ; 00458d3b | char s_EmptyChar_0061aa4e
    MOV EDI,0x66eda8                    ; 00458d40 | char[80] g_LoadedModelName
    PUSH EDI                            ; 00458d45 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 00458d46 | char s_EmptyChar_0061aa4e
        ;   Label: LAB_00458d46
    MOV byte ptr [EDI],AL               ; 00458d48 | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 00458d4a
    JZ 0x00458d5e                       ; 00458d4c | LAB_00458d5e
        ;   XREF to: 00458d5e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00458d4e | = "..\\shape\\design.c" | s_shape_design_c_0061aa4f = ..\shape\design.c
    ADD ESI,0x2                         ; 00458d51
    MOV byte ptr [EDI + 0x1],AL         ; 00458d54 | s__0066eda9
    ADD EDI,0x2                         ; 00458d57
    CMP AL,0x0                          ; 00458d5a
    JNZ 0x00458d46                      ; 00458d5c | LAB_00458d46
        ;   XREF to: 00458d46 (CONDITIONAL_JUMP)
    POP EDI                             ; 00458d5e
        ;   Label: LAB_00458d5e
    MOV dword ptr [0x01e528a0],0x0      ; 00458d5f | int g_PartsCount
    MOV ESI,dword ptr [0x01e528a0]      ; 00458d69 | int g_PartsCount
    MOV dword ptr [0x016e990c],ESI      ; 00458d6f | int g_PolygonCount
    MOV ESI,dword ptr [0x016e990c]      ; 00458d75 | int g_PolygonCount
    MOV dword ptr [0x01626408],ESI      ; 00458d7b | int g_VertexCount
    MOV dword ptr [0x01e528b8],0xffffffff ; 00458d81 | int g_SelectedPolygonIndex
    PUSH 0x329                          ; 00458d8b
    MOV ESI,0x61aa4f                    ; 00458d90 | = "..\\shape\\design.c" | s_shape_design_c_0061aa4f = ..\shape\design.c
    PUSH ESI                            ; 00458d95 | = "..\\shape\\design.c" | s_shape_design_c_0061aa4f = ..\shape\design.c
    MOV ESI,dword ptr [EBP + -0x8]      ; 00458d96
    PUSH ESI                            ; 00458d99
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00458d9a | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458d9f
    MOV dword ptr [EBP + -0x14],0x0     ; 00458da2
    JMP 0x0045934e                      ; 00458da9 | LAB_0045934e
        ;   XREF to: 0045934e (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x10],0x0     ; 00458dae
        ;   Label: LAB_00458dae
    JMP 0x00458dbd                      ; 00458db5 | LAB_00458dbd
        ;   XREF to: 00458dbd (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 00458db7
        ;   Label: LAB_00458db7
    INC dword ptr [EBP + -0x10]         ; 00458dba
    MOV EAX,dword ptr [EBP + -0x10]     ; 00458dbd
        ;   Label: LAB_00458dbd
    CMP EAX,dword ptr [0x01626408]      ; 00458dc0 | int g_VertexCount
    JGE 0x00458e06                      ; 00458dc6 | LAB_00458e06
        ;   XREF to: 00458e06 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00458dc8
    MOV EDX,0x162640c                   ; 00458dcc | SVertexData[20000] g_LoadedVertices
    ADD EAX,EDX                         ; 00458dd1
    ADD EAX,0x8                         ; 00458dd3
    PUSH EAX                            ; 00458dd6
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00458dd7
    MOV EDX,0x162640c                   ; 00458ddb | SVertexData[20000] g_LoadedVertices
    ADD EAX,EDX                         ; 00458de0
    ADD EAX,0x4                         ; 00458de2
    PUSH EAX                            ; 00458de5
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00458de6
    MOV EDX,0x162640c                   ; 00458dea | SVertexData[20000] g_LoadedVertices
    ADD EAX,EDX                         ; 00458def
    PUSH EAX                            ; 00458df1
    MOV EAX,0x61aa61                    ; 00458df2 | = "%f,%f,%f\n" | s_f_f_f_0061aa61 = %f,%f,%f

    PUSH EAX                            ; 00458df7 | = "%f,%f,%f\n" | s_f_f_f_0061aa61 = %f,%f,%f

    MOV EAX,dword ptr [EBP + -0x8]      ; 00458df8
    PUSH EAX                            ; 00458dfb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00458dfc | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00458e01
    JMP 0x00458db7                      ; 00458e04 | LAB_00458db7
        ;   XREF to: 00458db7 (UNCONDITIONAL_JUMP)
    MOV EAX,0x16e990c                   ; 00458e06 | int g_PolygonCount
        ;   Label: LAB_00458e06
    PUSH EAX                            ; 00458e0b | int g_PolygonCount
    MOV EAX,0x61aa6b                    ; 00458e0c | = "%d\n" | s_d_0061aa6b = %d

    PUSH EAX                            ; 00458e11 | = "%d\n" | s_d_0061aa6b = %d

    MOV EAX,dword ptr [EBP + -0x8]      ; 00458e12
    PUSH EAX                            ; 00458e15
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00458e16 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458e1b
    CMP dword ptr [0x016e990c],0x4e20   ; 00458e1e | int g_PolygonCount
    JLE 0x00458ede                      ; 00458e28 | LAB_00458ede
        ;   XREF to: 00458ede (CONDITIONAL_JUMP)
    PUSH 0x4e20                         ; 00458e2e
    PUSH dword ptr [0x016e990c]         ; 00458e33 | int g_PolygonCount
    MOV ESI,0x61aa6f                    ; 00458e39 | = "ERROR: Too many polygons! (npoly:%d >..." | s_ERROR_Too_many_polygons__0061aa6f = ERROR: Too many polygons! (npoly:%d > MAX_POLYS:%d)
    PUSH ESI                            ; 00458e3e | = "ERROR: Too many polygons! (npoly:%d >..." | s_ERROR_Too_many_polygons__0061aa6f = ERROR: Too many polygons! (npoly:%d > MAX_POLYS:%d)
    LEA ESI,[EBP + 0xfffffef4]          ; 00458e3f
    PUSH ESI                            ; 00458e45
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00458e46 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00458e4b
    PUSH 0x16                           ; 00458e4e
    PUSH 0x0                            ; 00458e50
    LEA ESI,[EBP + 0xfffffef4]          ; 00458e52
    PUSH ESI                            ; 00458e58
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00458e59 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458e5e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00458e61 | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00458e66 | int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
    MOV ESI,0x61aaa3                    ; 00458e6b | char s_EmptyChar_0061aaa3
    MOV EDI,0x66eda8                    ; 00458e70 | char[80] g_LoadedModelName
    PUSH EDI                            ; 00458e75 | char[80] g_LoadedModelName
    MOV AL,byte ptr [ESI]               ; 00458e76 | char s_EmptyChar_0061aaa3
        ;   Label: LAB_00458e76
    MOV byte ptr [EDI],AL               ; 00458e78 | char[80] g_LoadedModelName
    CMP AL,0x0                          ; 00458e7a
    JZ 0x00458e8e                       ; 00458e7c | LAB_00458e8e
        ;   XREF to: 00458e8e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00458e7e | = "..\\shape\\design.c" | s_shape_design_c_0061aaa4 = ..\shape\design.c
    ADD ESI,0x2                         ; 00458e81
    MOV byte ptr [EDI + 0x1],AL         ; 00458e84 | s__0066eda9
    ADD EDI,0x2                         ; 00458e87
    CMP AL,0x0                          ; 00458e8a
    JNZ 0x00458e76                      ; 00458e8c | LAB_00458e76
        ;   XREF to: 00458e76 (CONDITIONAL_JUMP)
    POP EDI                             ; 00458e8e
        ;   Label: LAB_00458e8e
    MOV dword ptr [0x01e528a0],0x0      ; 00458e8f | int g_PartsCount
    MOV ESI,dword ptr [0x01e528a0]      ; 00458e99 | int g_PartsCount
    MOV dword ptr [0x016e990c],ESI      ; 00458e9f | int g_PolygonCount
    MOV ESI,dword ptr [0x016e990c]      ; 00458ea5 | int g_PolygonCount
    MOV dword ptr [0x01626408],ESI      ; 00458eab | int g_VertexCount
    MOV dword ptr [0x01e528b8],0xffffffff ; 00458eb1 | int g_SelectedPolygonIndex
    PUSH 0x33b                          ; 00458ebb
    MOV ESI,0x61aaa4                    ; 00458ec0 | = "..\\shape\\design.c" | s_shape_design_c_0061aaa4 = ..\shape\design.c
    PUSH ESI                            ; 00458ec5 | = "..\\shape\\design.c" | s_shape_design_c_0061aaa4 = ..\shape\design.c
    MOV ESI,dword ptr [EBP + -0x8]      ; 00458ec6
    PUSH ESI                            ; 00458ec9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00458eca | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458ecf
    MOV dword ptr [EBP + -0x14],0x0     ; 00458ed2
    JMP 0x0045934e                      ; 00458ed9 | LAB_0045934e
        ;   XREF to: 0045934e (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x10],0x0     ; 00458ede
        ;   Label: LAB_00458ede
    JMP 0x00458eed                      ; 00458ee5 | LAB_00458eed
        ;   XREF to: 00458eed (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 00458ee7
        ;   Label: LAB_00458ee7
    INC dword ptr [EBP + -0x10]         ; 00458eea
    MOV EAX,dword ptr [EBP + -0x10]     ; 00458eed
        ;   Label: LAB_00458eed
    CMP EAX,dword ptr [0x016e990c]      ; 00458ef0 | int g_PolygonCount
    JGE 0x004591ab                      ; 00458ef6 | LAB_004591ab
        ;   XREF to: 004591ab (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 00458efc
    PUSH EAX                            ; 00458eff
    PUSH 0x51                           ; 00458f00
    LEA EAX,[EBP + 0xfffffea0]          ; 00458f02
    PUSH EAX                            ; 00458f08
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00458f09 | char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00458f0e
    MOV EAX,0x61aab6                    ; 00458f11 | = "," | s_anon_0061aab6 = ,
    PUSH EAX                            ; 00458f16 | = "," | s_anon_0061aab6 = ,
    LEA EAX,[EBP + 0xfffffea0]          ; 00458f17
    PUSH EAX                            ; 00458f1d
    CALL crt_string.c_strtok_FUN_005fff50 ; 00458f1e | char * crt_string.c_strtok_FUN_005fff50(char * str, char * delimiters)
        ;   XREF to: 005fff50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00458f23
    MOV dword ptr [EBP + -0x4],EAX      ; 00458f26
    MOV EAX,dword ptr [EBP + -0x4]      ; 00458f29
    PUSH EAX                            ; 00458f2c
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00458f2d | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00458f32
    IMUL ESI,dword ptr [EBP + -0x10],0x184 ; 00458f35
    MOV dword ptr [ESI + 0x16e9910],EAX ; 00458f3c | SShapeEditorPolygon[20000] g_ModelPolygonData
    MOV EAX,0x61aab8                    ; 00458f42 | = "," | s_anon_0061aab8 = ,
    PUSH EAX                            ; 00458f47 | = "," | s_anon_0061aab8 = ,
    PUSH 0x0                            ; 00458f48
    CALL crt_string.c_strtok_FUN_005fff50 ; 00458f4a | char * crt_string.c_strtok_FUN_005fff50(char * str, char * delimiters)
        ;   XREF to: 005fff50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00458f4f
    MOV dword ptr [EBP + -0x4],EAX      ; 00458f52
    MOV EAX,dword ptr [EBP + -0x4]      ; 00458f55
    PUSH EAX                            ; 00458f58
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 00458f59 | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00458f5e
    IMUL ESI,dword ptr [EBP + -0x10],0x184 ; 00458f61
    MOV dword ptr [ESI + 0x16e99b4],EAX ; 00458f68 | DAT_016e99b4
    MOV EAX,0x61aaba                    ; 00458f6e | = ",\n" | s_anon_0061aaba = ,

    PUSH EAX                            ; 00458f73 | = ",\n" | s_anon_0061aaba = ,

    PUSH 0x0                            ; 00458f74
    CALL crt_string.c_strtok_FUN_005fff50 ; 00458f76 | char * crt_string.c_strtok_FUN_005fff50(char * str, char * delimiters)
        ;   XREF to: 005fff50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00458f7b
    MOV dword ptr [EBP + -0x4],EAX      ; 00458f7e
    MOV ESI,dword ptr [EBP + -0x4]      ; 00458f81
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00458f84
    MOV EDI,0x16e9910                   ; 00458f8b | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDI                         ; 00458f90
    LEA EDI,[EAX + 0x4]                 ; 00458f92
    PUSH EDI                            ; 00458f95
    MOV AL,byte ptr [ESI]               ; 00458f96
        ;   Label: LAB_00458f96
    MOV byte ptr [EDI],AL               ; 00458f98 | DAT_016e9914
    CMP AL,0x0                          ; 00458f9a
    JZ 0x00458fae                       ; 00458f9c | LAB_00458fae
        ;   XREF to: 00458fae (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00458f9e
    ADD ESI,0x2                         ; 00458fa1
    MOV byte ptr [EDI + 0x1],AL         ; 00458fa4 | DAT_016e9915
    ADD EDI,0x2                         ; 00458fa7
    CMP AL,0x0                          ; 00458faa
    JNZ 0x00458f96                      ; 00458fac | LAB_00458f96
        ;   XREF to: 00458f96 (CONDITIONAL_JUMP)
    POP EDI                             ; 00458fae
        ;   Label: LAB_00458fae
    MOV EAX,0x61aabd                    ; 00458faf | = ",\n" | s_anon_0061aabd = ,

    PUSH EAX                            ; 00458fb4 | = ",\n" | s_anon_0061aabd = ,

    PUSH 0x0                            ; 00458fb5
    CALL crt_string.c_strtok_FUN_005fff50 ; 00458fb7 | char * crt_string.c_strtok_FUN_005fff50(char * str, char * delimiters)
        ;   XREF to: 005fff50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00458fbc
    MOV dword ptr [EBP + -0x4],EAX      ; 00458fbf
    CMP dword ptr [EBP + -0x4],0x0      ; 00458fc2
    JZ 0x00458ff8                       ; 00458fc6 | LAB_00458ff8
        ;   XREF to: 00458ff8 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + -0x4]      ; 00458fc8
    IMUL EDI,dword ptr [EBP + -0x10],0x184 ; 00458fcb
    MOV EAX,0x16e9910                   ; 00458fd2 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EDI,EAX                         ; 00458fd7
    ADD EDI,0x54                        ; 00458fd9
    PUSH EDI                            ; 00458fdc
    MOV AL,byte ptr [ESI]               ; 00458fdd
        ;   Label: LAB_00458fdd
    MOV byte ptr [EDI],AL               ; 00458fdf | DAT_016e9964
    CMP AL,0x0                          ; 00458fe1
    JZ 0x00458ff5                       ; 00458fe3 | LAB_00458ff5
        ;   XREF to: 00458ff5 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00458fe5
    ADD ESI,0x2                         ; 00458fe8
    MOV byte ptr [EDI + 0x1],AL         ; 00458feb | DAT_016e9965
    ADD EDI,0x2                         ; 00458fee
    CMP AL,0x0                          ; 00458ff1
    JNZ 0x00458fdd                      ; 00458ff3 | LAB_00458fdd
        ;   XREF to: 00458fdd (CONDITIONAL_JUMP)
    POP EDI                             ; 00458ff5
        ;   Label: LAB_00458ff5
    JMP 0x00459006                      ; 00458ff6 | LAB_00459006
        ;   XREF to: 00459006 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00458ff8
        ;   Label: LAB_00458ff8
    MOV byte ptr [EAX + 0x16e9964],0x0  ; 00458fff | DAT_016e9964
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00459006
        ;   Label: LAB_00459006
    CMP byte ptr [EAX + 0x16e9914],0x78 ; 0045900d | DAT_016e9914
    JNZ 0x00459026                      ; 00459014 | LAB_00459026
        ;   XREF to: 00459026 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00459016
    CMP byte ptr [EAX + 0x16e9915],0x0  ; 0045901d | DAT_016e9915
    JZ 0x00459028                       ; 00459024 | LAB_00459028
        ;   XREF to: 00459028 (CONDITIONAL_JUMP)
    JMP 0x00459036                      ; 00459026 | LAB_00459036
        ;   Label: LAB_00459026
        ;   XREF to: 00459036 (UNCONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00459028
        ;   Label: LAB_00459028
    MOV byte ptr [EAX + 0x16e9914],0x0  ; 0045902f | DAT_016e9914
    MOV dword ptr [EBP + -0xc],0x0      ; 00459036
        ;   Label: LAB_00459036
    JMP 0x00459045                      ; 0045903d | LAB_00459045
        ;   XREF to: 00459045 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045903f
        ;   Label: LAB_0045903f
    INC dword ptr [EBP + -0xc]          ; 00459042
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00459045
        ;   Label: LAB_00459045
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045904c
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045904f | DAT_016e99b4
    JGE 0x004591a6                      ; 00459055 | LAB_004591a6
        ;   XREF to: 004591a6 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 0045905b
    MOV EDX,0x16e9910                   ; 00459062 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 00459067
    MOV EDX,dword ptr [EBP + -0xc]      ; 00459069
    SHL EDX,0x2                         ; 0045906c
    ADD EAX,0x138                       ; 0045906f
    ADD EAX,EDX                         ; 00459074
    PUSH EAX                            ; 00459076
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00459077
    MOV EDX,0x16e9910                   ; 0045907e | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 00459083
    MOV EDX,dword ptr [EBP + -0xc]      ; 00459085
    SHL EDX,0x2                         ; 00459088
    ADD EAX,0xf8                        ; 0045908b
    ADD EAX,EDX                         ; 00459090
    PUSH EAX                            ; 00459092
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00459093
    MOV EDX,0x16e9910                   ; 0045909a | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045909f
    MOV EDX,dword ptr [EBP + -0xc]      ; 004590a1
    SHL EDX,0x2                         ; 004590a4
    ADD EAX,0xb8                        ; 004590a7
    ADD EAX,EDX                         ; 004590ac
    PUSH EAX                            ; 004590ae
    MOV EAX,0x61aac0                    ; 004590af | = "%d,%f,%f\n" | s_d_f_f_0061aac0 = %d,%f,%f

    PUSH EAX                            ; 004590b4 | = "%d,%f,%f\n" | s_d_f_f_0061aac0 = %d,%f,%f

    MOV EAX,dword ptr [EBP + -0x8]      ; 004590b5
    PUSH EAX                            ; 004590b8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004590b9 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004590be
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 004590c1
    MOV EAX,dword ptr [EBP + -0xc]      ; 004590c8
    SHL EAX,0x2                         ; 004590cb
    ADD EAX,EDX                         ; 004590ce
    FLD float ptr [EAX + 0x16e9a08]     ; 004590d0 | DAT_016e9a08
    FLDZ                                ; 004590d6
    FCOMPP                              ; 004590d8
    FNSTSW AX                           ; 004590da
    SAHF                                ; 004590dc
    JBE 0x004590f8                      ; 004590dd | LAB_004590f8
        ;   XREF to: 004590f8 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 004590df
    MOV EAX,dword ptr [EBP + -0xc]      ; 004590e6
    SHL EAX,0x2                         ; 004590e9
    ADD EAX,EDX                         ; 004590ec
    MOV dword ptr [EAX + 0x16e9a08],0x0 ; 004590ee | DAT_016e9a08
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 004590f8
        ;   Label: LAB_004590f8
    MOV EAX,dword ptr [EBP + -0xc]      ; 004590ff
    SHL EAX,0x2                         ; 00459102
    ADD EAX,EDX                         ; 00459105
    FLD float ptr [EAX + 0x16e9a48]     ; 00459107 | DAT_016e9a48
    FLDZ                                ; 0045910d
    FCOMPP                              ; 0045910f
    FNSTSW AX                           ; 00459111
    SAHF                                ; 00459113
    JBE 0x0045912f                      ; 00459114 | LAB_0045912f
        ;   XREF to: 0045912f (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00459116
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045911d
    SHL EAX,0x2                         ; 00459120
    ADD EAX,EDX                         ; 00459123
    MOV dword ptr [EAX + 0x16e9a48],0x0 ; 00459125 | DAT_016e9a48
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 0045912f
        ;   Label: LAB_0045912f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459136
    SHL EAX,0x2                         ; 00459139
    ADD EAX,EDX                         ; 0045913c
    FLD float ptr [EAX + 0x16e9a08]     ; 0045913e | DAT_016e9a08
    FCOMP double ptr [0x0061aace]       ; 00459144 | double DOUBLE_0061aace
    FNSTSW AX                           ; 0045914a
    SAHF                                ; 0045914c
    JBE 0x00459168                      ; 0045914d | LAB_00459168
        ;   XREF to: 00459168 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 0045914f
    MOV EAX,dword ptr [EBP + -0xc]      ; 00459156
    SHL EAX,0x2                         ; 00459159
    ADD EAX,EDX                         ; 0045915c
    MOV dword ptr [EAX + 0x16e9a08],0x437fffef ; 0045915e | DAT_016e9a08
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00459168
        ;   Label: LAB_00459168
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045916f
    SHL EAX,0x2                         ; 00459172
    ADD EAX,EDX                         ; 00459175
    FLD float ptr [EAX + 0x16e9a48]     ; 00459177 | DAT_016e9a48
    FCOMP double ptr [0x0061aad6]       ; 0045917d | double DOUBLE_0061aad6
    FNSTSW AX                           ; 00459183
    SAHF                                ; 00459185
    JBE 0x004591a1                      ; 00459186 | LAB_004591a1
        ;   XREF to: 004591a1 (CONDITIONAL_JUMP)
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00459188
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045918f
    SHL EAX,0x2                         ; 00459192
    ADD EAX,EDX                         ; 00459195
    MOV dword ptr [EAX + 0x16e9a48],0x437fffef ; 00459197 | DAT_016e9a48
    JMP 0x0045903f                      ; 004591a1 | LAB_0045903f
        ;   Label: LAB_004591a1
        ;   XREF to: 0045903f (UNCONDITIONAL_JUMP)
    JMP 0x00458ee7                      ; 004591a6 | LAB_00458ee7
        ;   Label: LAB_004591a6
        ;   XREF to: 00458ee7 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x01e528a0],0x0      ; 004591ab | int g_PartsCount
        ;   Label: LAB_004591ab
    MOV EAX,0x1e528a0                   ; 004591b5 | int g_PartsCount
    PUSH EAX                            ; 004591ba | int g_PartsCount
    MOV EAX,0x61aade                    ; 004591bb | = "%d\n" | s_d_0061aade = %d

    PUSH EAX                            ; 004591c0 | = "%d\n" | s_d_0061aade = %d

    MOV EAX,dword ptr [EBP + -0x8]      ; 004591c1
    PUSH EAX                            ; 004591c4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004591c5 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004591ca
    MOV dword ptr [EBP + -0x10],0x0     ; 004591cd
    JMP 0x004591dc                      ; 004591d4 | LAB_004591dc
        ;   XREF to: 004591dc (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 004591d6
        ;   Label: LAB_004591d6
    INC dword ptr [EBP + -0x10]         ; 004591d9
    MOV EAX,dword ptr [EBP + -0x10]     ; 004591dc
        ;   Label: LAB_004591dc
    CMP EAX,dword ptr [0x01e528a0]      ; 004591df | int g_PartsCount
    JGE 0x00459207                      ; 004591e5 | LAB_00459207
        ;   XREF to: 00459207 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 004591e7
    MOV EDX,0x1e50190                   ; 004591eb | SModelPartName[500] g_ModelPartNames
    ADD EAX,EDX                         ; 004591f0
    PUSH EAX                            ; 004591f2
    MOV EAX,0x61aae2                    ; 004591f3 | = "%s\n" | s_s_0061aae2 = %s

    PUSH EAX                            ; 004591f8 | = "%s\n" | s_s_0061aae2 = %s

    MOV EAX,dword ptr [EBP + -0x8]      ; 004591f9
    PUSH EAX                            ; 004591fc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004591fd | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00459202
    JMP 0x004591d6                      ; 00459205 | LAB_004591d6
        ;   XREF to: 004591d6 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x10],0x0     ; 00459207
        ;   Label: LAB_00459207
    JMP 0x00459216                      ; 0045920e | LAB_00459216
        ;   XREF to: 00459216 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 00459210
        ;   Label: LAB_00459210
    INC dword ptr [EBP + -0x10]         ; 00459213
    MOV EAX,dword ptr [EBP + -0x10]     ; 00459216
        ;   Label: LAB_00459216
    CMP EAX,dword ptr [0x016e990c]      ; 00459219 | int g_PolygonCount
    JGE 0x00459249                      ; 0045921f | LAB_00459249
        ;   XREF to: 00459249 (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00459221
    MOV EDX,0x16e9910                   ; 00459228 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045922d
    ADD EAX,0x178                       ; 0045922f
    PUSH EAX                            ; 00459234
    MOV EAX,0x61aae6                    ; 00459235 | = "%d\n" | s_d_0061aae6 = %d

    PUSH EAX                            ; 0045923a | = "%d\n" | s_d_0061aae6 = %d

    MOV EAX,dword ptr [EBP + -0x8]      ; 0045923b
    PUSH EAX                            ; 0045923e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0045923f | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00459244
    JMP 0x00459210                      ; 00459247 | LAB_00459210
        ;   XREF to: 00459210 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x01e528a0],0x0      ; 00459249 | int g_PartsCount
        ;   Label: LAB_00459249
    JNZ 0x004592ad                      ; 00459250 | LAB_004592ad
        ;   XREF to: 004592ad (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x10],0x0     ; 00459252
    JMP 0x00459261                      ; 00459259 | LAB_00459261
        ;   XREF to: 00459261 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045925b
        ;   Label: LAB_0045925b
    INC dword ptr [EBP + -0x10]         ; 0045925e
    MOV EAX,dword ptr [EBP + -0x10]     ; 00459261
        ;   Label: LAB_00459261
    CMP EAX,dword ptr [0x016e990c]      ; 00459264 | int g_PolygonCount
    JGE 0x0045927f                      ; 0045926a | LAB_0045927f
        ;   XREF to: 0045927f (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 0045926c
    MOV dword ptr [EAX + 0x16e9a88],0x0 ; 00459273 | DAT_016e9a88
    JMP 0x0045925b                      ; 0045927d | LAB_0045925b
        ;   XREF to: 0045925b (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x01e528a0],0x1      ; 0045927f | int g_PartsCount
        ;   Label: LAB_0045927f
    MOV ESI,0x61aaea                    ; 00459289 | = "BODY" | s_BODY_0061aaea = BODY
    MOV EDI,0x1e50190                   ; 0045928e | SModelPartName[500] g_ModelPartNames
    PUSH EDI                            ; 00459293 | SModelPartName[500] g_ModelPartNames
    MOV AL,byte ptr [ESI]               ; 00459294 | = "BODY" | s_BODY_0061aaea = BODY
        ;   Label: LAB_00459294
    MOV byte ptr [EDI],AL               ; 00459296 | SModelPartName[500] g_ModelPartNames
    CMP AL,0x0                          ; 00459298
    JZ 0x004592ac                       ; 0045929a | LAB_004592ac
        ;   XREF to: 004592ac (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0045929c | DAT_0061aaeb
    ADD ESI,0x2                         ; 0045929f
    MOV byte ptr [EDI + 0x1],AL         ; 004592a2 | DAT_01e50191
    ADD EDI,0x2                         ; 004592a5
    CMP AL,0x0                          ; 004592a8
    JNZ 0x00459294                      ; 004592aa | LAB_00459294
        ;   XREF to: 00459294 (CONDITIONAL_JUMP)
    POP EDI                             ; 004592ac
        ;   Label: LAB_004592ac
    MOV dword ptr [EBP + -0x10],0x0     ; 004592ad
        ;   Label: LAB_004592ad
    JMP 0x004592bc                      ; 004592b4 | LAB_004592bc
        ;   XREF to: 004592bc (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x10]     ; 004592b6
        ;   Label: LAB_004592b6
    INC dword ptr [EBP + -0x10]         ; 004592b9
    MOV EAX,dword ptr [EBP + -0x10]     ; 004592bc
        ;   Label: LAB_004592bc
    CMP EAX,dword ptr [0x016e990c]      ; 004592bf | int g_PolygonCount
    JGE 0x0045931a                      ; 004592c5 | LAB_0045931a
        ;   XREF to: 0045931a (CONDITIONAL_JUMP)
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 004592c7
    MOV dword ptr [EAX + 0x16e9a8c],0x0 ; 004592ce | DAT_016e9a8c
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 004592d8
    MOV EDX,0x16e9910                   ; 004592df | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 004592e4
    ADD EAX,0x17c                       ; 004592e6
    PUSH EAX                            ; 004592eb
    MOV EAX,0x61aaef                    ; 004592ec | = "%d\n" | s_d_0061aaef = %d

    PUSH EAX                            ; 004592f1 | = "%d\n" | s_d_0061aaef = %d

    MOV EAX,dword ptr [EBP + -0x8]      ; 004592f2
    PUSH EAX                            ; 004592f5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004592f6 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004592fb
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 004592fe
    IMUL EDX,dword ptr [EBP + -0x10],0x184 ; 00459305
    MOV EAX,dword ptr [EAX + 0x16e9a8c] ; 0045930c | DAT_016e9a8c
    MOV dword ptr [EDX + 0x16e9a90],EAX ; 00459312 | DAT_016e9a90
    JMP 0x004592b6                      ; 00459318 | LAB_004592b6
        ;   XREF to: 004592b6 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045931a
        ;   Label: LAB_0045931a
    PUSH EAX                            ; 0045931d
    CALL shape_design.c_parseSpatialTreeFromFile_FUN_004580a0 ; 0045931e | STreeNode * shape_design.c_parseSpatialTreeFromFile_FUN_004580a0(FILE * file)
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00459323
    MOV [0x01e66150],EAX                ; 00459326 | STreeNode * g_SpatialTreeRoot
    PUSH 0x371                          ; 0045932b
    MOV EAX,0x61aaf3                    ; 00459330 | = "..\\shape\\design.c" | s_shape_design_c_0061aaf3 = ..\shape\design.c
    PUSH EAX                            ; 00459335 | = "..\\shape\\design.c" | s_shape_design_c_0061aaf3 = ..\shape\design.c
    MOV EAX,dword ptr [EBP + -0x8]      ; 00459336
    PUSH EAX                            ; 00459339
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0045933a | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0045933f
    CALL shape_design.c_calculateVertexNormals_FUN_0045be40 ; 00459342 | void shape_design.c_calculateVertexNormals_FUN_0045be40()
        ;   XREF to: 0045be40 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBP + -0x14],0x1     ; 00459347
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045934e
        ;   Label: LAB_0045934e
    MOV ESP,EBP                         ; 00459351
    POP EBP                             ; 00459353
    POP EDI                             ; 00459354
    POP ESI                             ; 00459355
    POP EBX                             ; 00459356
    RET                                 ; 00459357

