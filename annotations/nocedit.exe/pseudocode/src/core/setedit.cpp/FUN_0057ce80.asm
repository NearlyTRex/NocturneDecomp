; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_FUN_0057ce80(void)
;
; Local Variables:
; undefined4       Stack[-0x2670]:4  local_2670
; undefined1       Stack[-0xf0]:1  local_f0
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_FUN_0057d340 at 0057d4a0
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_00647cb5
;   TerminatedCString s_core_setedit_cpp_00647cc9
;   TerminatedCString s_core_setedit_cpp_00647cdd
;   TerminatedCString s_Out_of_memory_00647cf1
;   TerminatedCString s_s_raw_00647cff
;   TerminatedCString s_wb_00647d06
;   TerminatedCString s_backdrop_00647d09
;   TerminatedCString s_core_setedit_cpp_00647d12
;   TerminatedCString s_Unable_to_write_backdrop_00647d26
;   TerminatedCString s_core_setedit_cpp_00647d3f
;   TerminatedCString s_s_act_00647d53
;   TerminatedCString s_wb_00647d5a
;   TerminatedCString s_backdrop_00647d5d
;   TerminatedCString s_core_setedit_cpp_00647d66
;   TerminatedCString s_Unable_to_write_act_00647d7a
;   ... and 21 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_fwrite_FUN_005fdc00
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
;   engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ce80
        ;   Label: core_setedit.cpp_FUN_0057ce80
    PUSH ESI                            ; 0057ce81
    PUSH EDI                            ; 0057ce82
    PUSH EBP                            ; 0057ce83
    SUB ESP,0x2660                      ; 0057ce84
    XOR EDX,EDX                         ; 0057ce8a
    MOV EAX,[0x00679394]                ; 0057ce8c | g_WindowWidth
    MOV dword ptr [ESP + 0x2650],EDX    ; 0057ce91
    MOV dword ptr [ESP + 0x264c],EAX    ; 0057ce98
    MOV EAX,[0x00679398]                ; 0057ce9f | g_WindowHeight
    MOV EBX,dword ptr [ESP + 0x264c]    ; 0057cea4
    MOV dword ptr [ESP + 0x2648],EAX    ; 0057ceab
    MOV EAX,dword ptr [ESP + 0x2688]    ; 0057ceb2
    MOV dword ptr [ESP + 0x2654],EDX    ; 0057ceb9
    CMP EAX,EBX                         ; 0057cec0
    JGE 0x0057ced8                      ; 0057cec2
        ;   XREF to: 0057ced8 (CONDITIONAL_JUMP)  ; LAB_0057ced8
    MOV EAX,dword ptr [ESP + 0x268c]    ; 0057cec4
    CMP EAX,dword ptr [ESP + 0x2648]    ; 0057cecb
    JL 0x0057cfd8                       ; 0057ced2
        ;   XREF to: 0057cfd8 (CONDITIONAL_JUMP)  ; LAB_0057cfd8
    MOV ESI,dword ptr [ESP + 0x268c]    ; 0057ced8
        ;   Label: LAB_0057ced8
    MOV EDI,dword ptr [ESP + 0x2688]    ; 0057cedf
    ADD ESI,0x3                         ; 0057cee6
    IMUL ESI,EDI                        ; 0057cee9
    PUSH 0xbac                          ; 0057ceec
    PUSH 0x647cb5                       ; 0057cef1 | = "..\\core\\setedit.cpp"
    SHL ESI,0x2                         ; 0057cef6
    PUSH ESI                            ; 0057cef9
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0057cefa
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057ceff
    PUSH 0xbad                          ; 0057cf02
    PUSH 0x647cc9                       ; 0057cf07 | = "..\\core\\setedit.cpp"
    PUSH ESI                            ; 0057cf0c
    MOV EBX,EAX                         ; 0057cf0d
    MOV dword ptr [ESP + 0x2660],EAX    ; 0057cf0f
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0057cf16
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057cf1b
    MOV dword ptr [ESP + 0x2650],EAX    ; 0057cf1e
    TEST EBX,EBX                        ; 0057cf25
    JNZ 0x0057d2c7                      ; 0057cf27
        ;   XREF to: 0057d2c7 (CONDITIONAL_JUMP)  ; LAB_0057d2c7
    MOV EBP,0x647cdd                    ; 0057cf2d | = "..\\core\\setedit.cpp"
        ;   Label: LAB_0057cf2d
    MOV EAX,0xbaf                       ; 0057cf32
    PUSH 0x647cf1                       ; 0057cf37 | = "Out of memory"
    MOV dword ptr [0x02f0ca48],EBP      ; 0057cf3c | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0057cf42 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057cf47
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057cf4c
    CMP dword ptr [ESP + 0x268c],0x0    ; 0057cf4f
        ;   Label: LAB_0057cf4f
    JLE 0x0057cfc0                      ; 0057cf57
        ;   XREF to: 0057cfc0 (CONDITIONAL_JUMP)  ; LAB_0057cfc0
    IMUL EAX,dword ptr [ESP + 0x2688],0x0 ; 0057cf59
    MOV EDI,dword ptr [ESP + 0x2688]    ; 0057cf61
    MOV EDX,dword ptr [ESP + 0x2654]    ; 0057cf68
    MOV ESI,dword ptr [ESP + 0x268c]    ; 0057cf6f
    SHL EDI,0x2                         ; 0057cf76
    SHL ESI,0x2                         ; 0057cf79
    MOV EBP,EDI                         ; 0057cf7c
    MOV ECX,dword ptr [ESP + 0x2650]    ; 0057cf7e
    ADD EDX,EAX                         ; 0057cf85
    ADD ECX,EAX                         ; 0057cf87
    XOR EAX,EAX                         ; 0057cf89
    ADD EAX,0x4                         ; 0057cf8b
        ;   Label: LAB_0057cf8b
    MOV EBX,dword ptr [EAX + 0x2cf6a98] ; 0057cf8e | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EBX ; 0057cf94
    MOV dword ptr [EAX + 0x2cf6a98],EDX ; 0057cf98 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EBX,dword ptr [EAX + 0x2cf7d58] ; 0057cf9e | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    ADD EDX,EBP                         ; 0057cfa4
    MOV dword ptr [ESP + EAX*0x1 + 0x12bc],EBX ; 0057cfa6
    MOV dword ptr [EAX + 0x2cf7d58],ECX ; 0057cfad | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    ADD ECX,EDI                         ; 0057cfb3
    CMP EAX,ESI                         ; 0057cfb5
    JL 0x0057cf8b                       ; 0057cfb7
        ;   XREF to: 0057cf8b (CONDITIONAL_JUMP)  ; LAB_0057cf8b
    LEA EAX,[EAX]                       ; 0057cfb9
    NOP                                 ; 0057cfbf
    MOV EAX,dword ptr [ESP + 0x2688]    ; 0057cfc0
        ;   Label: LAB_0057cfc0
    MOV [0x00679394],EAX                ; 0057cfc7 | g_WindowWidth
    MOV EAX,dword ptr [ESP + 0x268c]    ; 0057cfcc
    MOV [0x00679398],EAX                ; 0057cfd3 | g_WindowHeight
    MOV EAX,dword ptr [ESP + 0x268c]    ; 0057cfd8
        ;   Label: LAB_0057cfd8
    DEC EAX                             ; 0057cfdf
    PUSH EAX                            ; 0057cfe0
    MOV EAX,dword ptr [ESP + 0x268c]    ; 0057cfe1
    DEC EAX                             ; 0057cfe8
    PUSH EAX                            ; 0057cfe9
    PUSH 0x0                            ; 0057cfea
    PUSH 0x0                            ; 0057cfec
    MOV EBX,dword ptr [0x006703ec]      ; 0057cfee | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EBX                            ; 0057cff4 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890 ; 0057cff5
        ;   XREF to: 0048c890 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0057cffa
    MOV EDI,dword ptr [ESP + 0x2678]    ; 0057cffd
    PUSH EDI                            ; 0057d004
    LEA EAX,[ESP + 0x2624]              ; 0057d005
    MOV ESI,0x1                         ; 0057d00c
    PUSH EAX                            ; 0057d011
    MOV dword ptr [0x03277d14],ESI      ; 0057d012 | g_CDemonRaytraceInstance
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0057d018
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0057d01d
    MOV EBP,dword ptr [ESP + 0x2674]    ; 0057d020
    PUSH EBP                            ; 0057d027
    MOV EAX,[0x006703ec]                ; 0057d028 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EAX                            ; 0057d02d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150 ; 0057d02e
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150(CDemonRenderer * this_ptr, CVector3i * point_ptr)
    ADD ESP,0x8                         ; 0057d033
    MOV EDX,dword ptr [0x006703ec]      ; 0057d036 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH dword ptr [ESP + 0x2690]       ; 0057d03c
    PUSH EDX                            ; 0057d043 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670 ; 0057d044
        ;   XREF to: 0048c670 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0048c670(CDemonRenderer * this_ptr, float scale_factor)
    ADD ESP,0x8                         ; 0057d049
    LEA EAX,[ESP + 0x2620]              ; 0057d04c
    PUSH EAX                            ; 0057d053
    MOV ECX,dword ptr [0x006703ec]      ; 0057d054 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0057d05a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200 ; 0057d05b
        ;   XREF to: 0048c200 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0057d060
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0057d063
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4 ; 0057d068
        ;   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4()
    PUSH 0x0                            ; 0057d06d
    MOV EBX,dword ptr [0x006810c8]      ; 0057d06f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH 0x461c3f9a                     ; 0057d075
    PUSH EBX                            ; 0057d07a | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 ; 0057d07b
        ;   XREF to: 0056a190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(CDemonSet * this_ptr, float frustum_param, int render_mode)
    ADD ESP,0xc                         ; 0057d080
    MOV ESI,dword ptr [ESP + 0x267c]    ; 0057d083
    PUSH ESI                            ; 0057d08a
    PUSH 0x647cff                       ; 0057d08b | = "%s.raw"
    LEA EAX,[ESP + 0x2588]              ; 0057d090
    PUSH EAX                            ; 0057d097
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057d098
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d09d
    PUSH 0x647d06                       ; 0057d0a0 | = "wb"
    LEA EAX,[ESP + 0x2584]              ; 0057d0a5
    PUSH EAX                            ; 0057d0ac
    PUSH 0x647d09                       ; 0057d0ad | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057d0b2
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057d0b7
    MOV dword ptr [ESP + 0x265c],EAX    ; 0057d0ba
    TEST EAX,EAX                        ; 0057d0c1
    JNZ 0x0057d0e8                      ; 0057d0c3
        ;   XREF to: 0057d0e8 (CONDITIONAL_JUMP)  ; LAB_0057d0e8
    MOV EDI,0x647d12                    ; 0057d0c5 | = "..\\core\\setedit.cpp"
    MOV EBP,0xbd9                       ; 0057d0ca
    PUSH 0x647d26                       ; 0057d0cf | = "Unable to write backdrop"
    MOV dword ptr [0x02f0ca48],EDI      ; 0057d0d4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0057d0da | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057d0e0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057d0e5
    MOV EAX,dword ptr [ESP + 0x2684]    ; 0057d0e8
        ;   Label: LAB_0057d0e8
    XOR EBP,EBP                         ; 0057d0ef
    TEST EAX,EAX                        ; 0057d0f1
    JLE 0x0057d162                      ; 0057d0f3
        ;   XREF to: 0057d162 (CONDITIONAL_JUMP)  ; LAB_0057d162
    MOV dword ptr [ESP + 0x2658],EBP    ; 0057d0f5
    MOV EBX,dword ptr [ESP + 0x2658]    ; 0057d0fc
        ;   Label: LAB_0057d0fc
    MOV EAX,dword ptr [ESP + 0x2680]    ; 0057d103
    XOR ESI,ESI                         ; 0057d10a
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 0057d10c | g_ScreenBufferArray | g_ScreenBufferArray[1]
    TEST EAX,EAX                        ; 0057d112
    JLE 0x0057d145                      ; 0057d114
        ;   XREF to: 0057d145 (CONDITIONAL_JUMP)  ; LAB_0057d145
    CMP ESI,dword ptr [ESP + 0x2688]    ; 0057d116
        ;   Label: LAB_0057d116
    JL 0x0057d2d4                       ; 0057d11d
        ;   XREF to: 0057d2d4 (CONDITIONAL_JUMP)  ; LAB_0057d2d4
    XOR EAX,EAX                         ; 0057d123
        ;   Label: LAB_0057d123
    MOV EDI,dword ptr [ESP + 0x265c]    ; 0057d125
        ;   Label: LAB_0057d125
    PUSH EDI                            ; 0057d12c
    PUSH EAX                            ; 0057d12d
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0057d12e
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0057d133
    INC ESI                             ; 0057d136
    MOV EAX,dword ptr [ESP + 0x2680]    ; 0057d137
    ADD EBX,0x4                         ; 0057d13e
    CMP ESI,EAX                         ; 0057d141
    JL 0x0057d116                       ; 0057d143
        ;   XREF to: 0057d116 (CONDITIONAL_JUMP)  ; LAB_0057d116
    MOV EDX,dword ptr [ESP + 0x2658]    ; 0057d145
        ;   Label: LAB_0057d145
    MOV ECX,dword ptr [ESP + 0x2684]    ; 0057d14c
    ADD EDX,0x4                         ; 0057d153
    INC EBP                             ; 0057d156
    MOV dword ptr [ESP + 0x2658],EDX    ; 0057d157
    CMP EBP,ECX                         ; 0057d15e
    JL 0x0057d0fc                       ; 0057d160
        ;   XREF to: 0057d0fc (CONDITIONAL_JUMP)  ; LAB_0057d0fc
    PUSH 0xbeb                          ; 0057d162
        ;   Label: LAB_0057d162
    PUSH 0x647d3f                       ; 0057d167 | = "..\\core\\setedit.cpp"
    MOV EBX,dword ptr [ESP + 0x2664]    ; 0057d16c
    PUSH EBX                            ; 0057d173
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057d174
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057d179
    MOV ESI,dword ptr [ESP + 0x267c]    ; 0057d17c
    PUSH ESI                            ; 0057d183
    PUSH 0x647d53                       ; 0057d184 | = "%s.act"
    LEA EAX,[ESP + 0x25d8]              ; 0057d189
    PUSH EAX                            ; 0057d190
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0057d191
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057d196
    PUSH 0x647d5a                       ; 0057d199 | = "wb"
    LEA EAX,[ESP + 0x25d4]              ; 0057d19e
    PUSH EAX                            ; 0057d1a5
    PUSH 0x647d5d                       ; 0057d1a6 | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0057d1ab
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057d1b0
    MOV dword ptr [ESP + 0x265c],EAX    ; 0057d1b3
    TEST EAX,EAX                        ; 0057d1ba
    JNZ 0x0057d1e1                      ; 0057d1bc
        ;   XREF to: 0057d1e1 (CONDITIONAL_JUMP)  ; LAB_0057d1e1
    MOV EDI,0x647d66                    ; 0057d1be | = "..\\core\\setedit.cpp"
    MOV EBP,0xbef                       ; 0057d1c3
    PUSH 0x647d7a                       ; 0057d1c8 | = "Unable to write act"
    MOV dword ptr [0x02f0ca48],EDI      ; 0057d1cd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0057d1d3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0057d1d9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0057d1de
    MOV EAX,dword ptr [ESP + 0x265c]    ; 0057d1e1
        ;   Label: LAB_0057d1e1
    PUSH EAX                            ; 0057d1e8
    PUSH 0x3                            ; 0057d1e9
    PUSH 0x100                          ; 0057d1eb
    PUSH 0x2d01f48                      ; 0057d1f0 | g_SourcePaletteData
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0057d1f5
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0057d1fa
    PUSH 0xbf1                          ; 0057d1fd
    PUSH 0x647d8e                       ; 0057d202 | = "..\\core\\setedit.cpp"
    MOV EDX,dword ptr [ESP + 0x2664]    ; 0057d207
    PUSH EDX                            ; 0057d20e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0057d20f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0057d214
    MOV ECX,dword ptr [0x006703ec]      ; 0057d217 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 0057d21d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 ; 0057d21e
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480()
    ADD ESP,0x4                         ; 0057d223
    CMP dword ptr [ESP + 0x2654],0x0    ; 0057d226
    JZ 0x0057d2bc                       ; 0057d22e
        ;   XREF to: 0057d2bc (CONDITIONAL_JUMP)  ; LAB_0057d2bc
    MOV ESI,dword ptr [ESP + 0x268c]    ; 0057d234
    TEST ESI,ESI                        ; 0057d23b
    JLE 0x0057d270                      ; 0057d23d
        ;   XREF to: 0057d270 (CONDITIONAL_JUMP)  ; LAB_0057d270
    LEA ECX,[ESI*0x4 + 0x0]             ; 0057d23f
    XOR EAX,EAX                         ; 0057d246
    ADD EAX,0x4                         ; 0057d248
        ;   Label: LAB_0057d248
    MOV EDX,dword ptr [ESP + EAX*0x1 + -0x4] ; 0057d24b
    MOV dword ptr [EAX + 0x2cf6a98],EDX ; 0057d24f | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EDX,dword ptr [ESP + EAX*0x1 + 0x12bc] ; 0057d255
    MOV dword ptr [EAX + 0x2cf7d58],EDX ; 0057d25c | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    CMP EAX,ECX                         ; 0057d262
    JL 0x0057d248                       ; 0057d264
        ;   XREF to: 0057d248 (CONDITIONAL_JUMP)  ; LAB_0057d248
    LEA EAX,[EAX]                       ; 0057d266
    LEA EDX,[EDX]                       ; 0057d26c
    PUSH 0xbfc                          ; 0057d270
        ;   Label: LAB_0057d270
    PUSH 0x647da2                       ; 0057d275 | = "..\\core\\setedit.cpp"
    MOV EDX,dword ptr [ESP + 0x265c]    ; 0057d27a
    PUSH EDX                            ; 0057d281
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0057d282
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057d287
    PUSH 0xbfd                          ; 0057d28a
    PUSH 0x647db6                       ; 0057d28f | = "..\\core\\setedit.cpp"
    MOV ECX,dword ptr [ESP + 0x2658]    ; 0057d294
    PUSH ECX                            ; 0057d29b
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0057d29c
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0057d2a1
    MOV EAX,dword ptr [ESP + 0x264c]    ; 0057d2a4
    MOV [0x00679394],EAX                ; 0057d2ab | g_WindowWidth
    MOV EAX,dword ptr [ESP + 0x2648]    ; 0057d2b0
    MOV [0x00679398],EAX                ; 0057d2b7 | g_WindowHeight
    ADD ESP,0x2660                      ; 0057d2bc
        ;   Label: LAB_0057d2bc
    POP EBP                             ; 0057d2c2
    POP EDI                             ; 0057d2c3
    POP ESI                             ; 0057d2c4
    POP EBX                             ; 0057d2c5
    RET                                 ; 0057d2c6
    TEST EAX,EAX                        ; 0057d2c7
        ;   Label: LAB_0057d2c7
    JZ 0x0057cf2d                       ; 0057d2c9
        ;   XREF to: 0057cf2d (CONDITIONAL_JUMP)  ; LAB_0057cf2d
    JMP 0x0057cf4f                      ; 0057d2cf
        ;   XREF to: 0057cf4f (UNCONDITIONAL_JUMP)  ; LAB_0057cf4f
    CMP EBP,dword ptr [ESP + 0x268c]    ; 0057d2d4
        ;   Label: LAB_0057d2d4
    JGE 0x0057d123                      ; 0057d2db
        ;   XREF to: 0057d123 (CONDITIONAL_JUMP)  ; LAB_0057d123
    MOV CL,byte ptr [0x02d01f24]        ; 0057d2e1 | g_RedBitPosition
    MOV EDX,dword ptr [EBX]             ; 0057d2e7
    MOV EDI,dword ptr [EBX]             ; 0057d2e9
    SHR EDX,CL                          ; 0057d2eb
    MOV CL,byte ptr [0x02d01f30]        ; 0057d2ed | g_GreenBitPosition
    MOV EAX,dword ptr [EBX]             ; 0057d2f3
    SHR EDI,CL                          ; 0057d2f5
    MOV CL,byte ptr [0x02d01f3c]        ; 0057d2f7 | g_BlueBitPosition
    AND EDX,0xff                        ; 0057d2fd
    SHR EAX,CL                          ; 0057d303
    AND EDI,0xff                        ; 0057d305
    AND EAX,0xff                        ; 0057d30b
    MOV ECX,EDX                         ; 0057d310
    MOV EDX,EDI                         ; 0057d312
    SHR ECX,0x3                         ; 0057d314
    SHR EDX,0x3                         ; 0057d317
    SHL ECX,0xa                         ; 0057d31a
    SHL EDX,0x5                         ; 0057d31d
    SHR EAX,0x3                         ; 0057d320
    ADD EDX,ECX                         ; 0057d323
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x2cf9020] ; 0057d325 | g_ColorCubeLookup
    AND EAX,0xff                        ; 0057d32c
    JMP 0x0057d125                      ; 0057d331
        ;   XREF to: 0057d125 (UNCONDITIONAL_JUMP)  ; LAB_0057d125

