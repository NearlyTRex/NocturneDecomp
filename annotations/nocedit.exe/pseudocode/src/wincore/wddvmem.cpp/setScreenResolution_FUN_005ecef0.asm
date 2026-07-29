; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(int width,int height,int bits_per_pixel)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
;
; XREF[9]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047cc3c
;   core_game.cpp_CGame_setGameRes_FUN_004dade0 at 004dae0f
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 at 004daefb
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507bee
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 00401047
;   shape_meshlod.cpp_testLodGeneration_FUN_0051ed60 at 0051ed6f
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0 at 005ed571
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0 at 005ed421
;   wincore_wddvmem.cpp_videoRestore_FUN_005edc80 at 005edd58
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_006576b4
;   TerminatedCString s_wincore_wddvmem_cpp_006576cb
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_006576e2
;   TerminatedCString s_wincore_wddvmem_cpp_0065770e
;   TerminatedCString s_wincore_wddvmem_cpp_00657725
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_0065773c
;   TerminatedCString s_wincore_wddvmem_cpp_00657764
;   TerminatedCString s_wincore_wddvmem_cpp_0065777b
;   TerminatedCString s_wincore_wddvmem_cpp_00657792
;   TerminatedCString s_setScreenResolution_Crea_006577a9
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void* g_BackBuffer
;   void* g_SoftwareZBuffer
;   ... and 12 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   engine_2d.c_setupViewportAndClipping_FUN_00401800
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ecef0
        ;   Label: wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
    PUSH ESI                            ; 005ecef1
    PUSH EDI                            ; 005ecef2
    PUSH EBP                            ; 005ecef3
    SUB ESP,0x74                        ; 005ecef4
    MOV EBX,dword ptr [ESP + 0x90]      ; 005ecef7
    MOV EDX,dword ptr [0x03f9592c]      ; 005ecefe | g_DirectDrawUnknown
    TEST EDX,EDX                        ; 005ecf04
    JNZ 0x005ed0af                      ; 005ecf06
        ;   XREF to: 005ed0af (CONDITIONAL_JUMP)  ; LAB_005ed0af
    MOV ESI,dword ptr [0x03f95928]      ; 005ecf0c | g_SoftwareRenderSurface
        ;   Label: LAB_005ecf0c
    TEST ESI,ESI                        ; 005ecf12
    JZ 0x005ecf24                       ; 005ecf14
        ;   XREF to: 005ecf24 (CONDITIONAL_JUMP)  ; LAB_005ecf24
    PUSH ESI                            ; 005ecf16
    MOV EDX,dword ptr [ESI]             ; 005ecf17
    XOR EDI,EDI                         ; 005ecf19
    CALL dword ptr [EDX + 0x8]          ; 005ecf1b
    MOV dword ptr [0x03f95928],EDI      ; 005ecf1e | g_SoftwareRenderSurface
    MOV EBP,dword ptr [0x03f95924]      ; 005ecf24 | g_DirectDrawSurface
        ;   Label: LAB_005ecf24
    TEST EBP,EBP                        ; 005ecf2a
    JZ 0x005ecf3c                       ; 005ecf2c
        ;   XREF to: 005ecf3c (CONDITIONAL_JUMP)  ; LAB_005ecf3c
    PUSH EBP                            ; 005ecf2e
    MOV EDX,dword ptr [EBP]             ; 005ecf2f
    CALL dword ptr [EDX + 0x8]          ; 005ecf32
    XOR EAX,EAX                         ; 005ecf35
    MOV [0x03f95924],EAX                ; 005ecf37 | g_DirectDrawSurface
    CMP EBX,0x8                         ; 005ecf3c
        ;   Label: LAB_005ecf3c
    JZ 0x005ecf4f                       ; 005ecf3f
        ;   XREF to: 005ecf4f (CONDITIONAL_JUMP)  ; LAB_005ecf4f
    CMP EBX,0x10                        ; 005ecf41
    JZ 0x005ecf4f                       ; 005ecf44
        ;   XREF to: 005ecf4f (CONDITIONAL_JUMP)  ; LAB_005ecf4f
    CMP EBX,0x20                        ; 005ecf46
    JNZ 0x005ed0a5                      ; 005ecf49
        ;   XREF to: 005ed0a5 (CONDITIONAL_JUMP)  ; LAB_005ed0a5
    MOV EAX,dword ptr [ESP + 0x88]      ; 005ecf4f
        ;   Label: LAB_005ecf4f
    MOV ECX,dword ptr [0x00688010]      ; 005ecf56 | g_BackBuffer
    MOV dword ptr [0x0067939c],EBX      ; 005ecf5c | g_BitsPerPixel
    XOR EDX,EDX                         ; 005ecf62
    MOV [0x00679394],EAX                ; 005ecf64 | g_WindowWidth
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005ecf69
    MOV dword ptr [0x03f9593c],EDX      ; 005ecf70 | g_UseSoftwareRendering
    MOV [0x00679398],EAX                ; 005ecf76 | g_WindowHeight
    TEST ECX,ECX                        ; 005ecf7b
    JZ 0x005ecf9a                       ; 005ecf7d
        ;   XREF to: 005ecf9a (CONDITIONAL_JUMP)  ; LAB_005ecf9a
    PUSH 0xff                           ; 005ecf7f
    PUSH 0x657764                       ; 005ecf84 | = "..\\wincore\\wddvmem.cpp"
    PUSH ECX                            ; 005ecf89
    XOR EDI,EDI                         ; 005ecf8a
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005ecf8c
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ecf91
    MOV dword ptr [0x00688010],EDI      ; 005ecf94 | g_BackBuffer
    MOV EBP,dword ptr [0x03f95930]      ; 005ecf9a | g_SoftwareFrameBuffer
        ;   Label: LAB_005ecf9a
    TEST EBP,EBP                        ; 005ecfa0
    JZ 0x005ecfbf                       ; 005ecfa2
        ;   XREF to: 005ecfbf (CONDITIONAL_JUMP)  ; LAB_005ecfbf
    PUSH 0x107                          ; 005ecfa4
    PUSH 0x65777b                       ; 005ecfa9 | = "..\\wincore\\wddvmem.cpp"
    PUSH EBP                            ; 005ecfae
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005ecfaf
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    XOR EDX,EDX                         ; 005ecfb4
    ADD ESP,0xc                         ; 005ecfb6
    MOV dword ptr [0x0077262c],EDX      ; 005ecfb9 | g_SoftwareZBuffer
    MOV EAX,[0x00679394]                ; 005ecfbf | g_WindowWidth
        ;   Label: LAB_005ecfbf
    MOV ECX,dword ptr [0x00679398]      ; 005ecfc4 | g_WindowHeight
    IMUL ECX,EAX                        ; 005ecfca
    MOV EAX,[0x0067939c]                ; 005ecfcd | g_BitsPerPixel
    MOV EDX,EAX                         ; 005ecfd2
    SAR EDX,0x1f                        ; 005ecfd4
    SHL EDX,0x3                         ; 005ecfd7
    SBB EAX,EDX                         ; 005ecfda
    SAR EAX,0x3                         ; 005ecfdc
    IMUL EAX,ECX                        ; 005ecfdf
    PUSH 0xe9                           ; 005ecfe2
    PUSH 0x6576b4                       ; 005ecfe7 | = "..\\wincore\\wddvmem.cpp"
    PUSH EAX                            ; 005ecfec
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005ecfed
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ecff2
    MOV [0x00688010],EAX                ; 005ecff5 | g_BackBuffer
    TEST EAX,EAX                        ; 005ecffa
    JNZ 0x005ed021                      ; 005ecffc
        ;   XREF to: 005ed021 (CONDITIONAL_JUMP)  ; LAB_005ed021
    MOV ESI,0x6576cb                    ; 005ecffe | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0xea                        ; 005ed003
    PUSH 0x6576e2                       ; 005ed008 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005ed00d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005ed013 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed019
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ed01e
    MOV EAX,[0x00679394]                ; 005ed021 | g_WindowWidth
        ;   Label: LAB_005ed021
    IMUL EAX,dword ptr [0x00679398]     ; 005ed026 | g_WindowHeight
    PUSH 0xee                           ; 005ed02d
    SHL EAX,0x2                         ; 005ed032
    PUSH 0x65770e                       ; 005ed035 | = "..\\wincore\\wddvmem.cpp"
    ADD EAX,0x40                        ; 005ed03a
    PUSH EAX                            ; 005ed03d
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005ed03e
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ed043
    MOV [0x03f95930],EAX                ; 005ed046 | g_SoftwareFrameBuffer
    TEST EAX,EAX                        ; 005ed04b
    JNZ 0x005ed071                      ; 005ed04d
        ;   XREF to: 005ed071 (CONDITIONAL_JUMP)  ; LAB_005ed071
    MOV EAX,0x657725                    ; 005ed04f | = "..\\wincore\\wddvmem.cpp"
    MOV EDX,0xef                        ; 005ed054
    PUSH 0x65773c                       ; 005ed059 | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV [0x02f0ca48],EAX                ; 005ed05e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005ed063 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed069
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ed06e
    MOV EAX,[0x03f95930]                ; 005ed071 | g_SoftwareFrameBuffer
        ;   Label: LAB_005ed071
    PUSH EBX                            ; 005ed076
    MOV ECX,dword ptr [ESP + 0x90]      ; 005ed077
    ADD EAX,0x10                        ; 005ed07e
    PUSH ECX                            ; 005ed081
    MOV ESI,dword ptr [ESP + 0x90]      ; 005ed082
    AND AL,0xf0                         ; 005ed089
    PUSH ESI                            ; 005ed08b
    MOV [0x0077262c],EAX                ; 005ed08c | g_SoftwareZBuffer
    MOV EAX,[0x03f95920]                ; 005ed091 | g_DirectDrawObject
    PUSH EAX                            ; 005ed096
    MOV EDX,dword ptr [EAX]             ; 005ed097
    CALL dword ptr [EDX + 0x54]         ; 005ed099
    TEST EAX,EAX                        ; 005ed09c
    JZ 0x005ed0e8                       ; 005ed09e
        ;   XREF to: 005ed0e8 (CONDITIONAL_JUMP)  ; LAB_005ed0e8
    CMP EBX,0x20                        ; 005ed0a0
    JZ 0x005ed0c4                       ; 005ed0a3
        ;   XREF to: 005ed0c4 (CONDITIONAL_JUMP)  ; LAB_005ed0c4
    XOR EAX,EAX                         ; 005ed0a5
        ;   Label: LAB_005ed0a5
    ADD ESP,0x74                        ; 005ed0a7
    POP EBP                             ; 005ed0aa
    POP EDI                             ; 005ed0ab
    POP ESI                             ; 005ed0ac
    POP EBX                             ; 005ed0ad
    RET                                 ; 005ed0ae
    MOV EAX,EDX                         ; 005ed0af
        ;   Label: LAB_005ed0af
    PUSH EAX                            ; 005ed0b1
    MOV EDX,dword ptr [EDX]             ; 005ed0b2
    CALL dword ptr [EDX + 0x8]          ; 005ed0b4
    XOR ECX,ECX                         ; 005ed0b7
    MOV dword ptr [0x03f9592c],ECX      ; 005ed0b9 | g_DirectDrawUnknown
    JMP 0x005ecf0c                      ; 005ed0bf
        ;   XREF to: 005ecf0c (UNCONDITIONAL_JUMP)  ; LAB_005ecf0c
    PUSH 0x18                           ; 005ed0c4
        ;   Label: LAB_005ed0c4
    MOV EDI,dword ptr [ESP + 0x90]      ; 005ed0c6
    PUSH EDI                            ; 005ed0cd
    MOV EAX,[0x03f95920]                ; 005ed0ce | g_DirectDrawObject
    PUSH ESI                            ; 005ed0d3
    MOV EDX,dword ptr [EAX]             ; 005ed0d4
    PUSH EAX                            ; 005ed0d6
    CALL dword ptr [EDX + 0x54]         ; 005ed0d7
    TEST EAX,EAX                        ; 005ed0da
    JNZ 0x005ed0a5                      ; 005ed0dc
        ;   XREF to: 005ed0a5 (CONDITIONAL_JUMP)  ; LAB_005ed0a5
    MOV dword ptr [0x03f9593c],0x1      ; 005ed0de | g_UseSoftwareRendering
    PUSH 0x6c                           ; 005ed0e8
        ;   Label: LAB_005ed0e8
    PUSH 0x0                            ; 005ed0ea
    LEA EAX,[ESP + 0x8]                 ; 005ed0ec
    PUSH EAX                            ; 005ed0f0
    MOV EBX,0x6218                      ; 005ed0f1
    MOV ESI,0x2                         ; 005ed0f6
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ed0fb
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV EDX,0x6c                        ; 005ed100
    ADD ESP,0xc                         ; 005ed105
    MOV ECX,0x21                        ; 005ed108
    MOV EAX,[0x03f95920]                ; 005ed10d | g_DirectDrawObject
    PUSH 0x0                            ; 005ed112
    MOV dword ptr [ESP + 0x4],EDX       ; 005ed114
    MOV dword ptr [ESP + 0x8],ECX       ; 005ed118
    MOV dword ptr [ESP + 0x6c],EBX      ; 005ed11c
    PUSH 0x3f95924                      ; 005ed120 | g_DirectDrawSurface
    LEA EDX,[ESP + 0x8]                 ; 005ed125
    MOV dword ptr [ESP + 0x1c],ESI      ; 005ed129
    PUSH EDX                            ; 005ed12d
    MOV ECX,dword ptr [EAX]             ; 005ed12e
    PUSH EAX                            ; 005ed130
    CALL dword ptr [ECX + 0x18]         ; 005ed131
    TEST EAX,EAX                        ; 005ed134
    JZ 0x005ed184                       ; 005ed136
        ;   XREF to: 005ed184 (CONDITIONAL_JUMP)  ; LAB_005ed184
    PUSH 0x0                            ; 005ed138
    MOV EDI,0x1                         ; 005ed13a
    LEA EDX,[ESP + 0x4]                 ; 005ed13f
    PUSH 0x3f95924                      ; 005ed143 | g_DirectDrawSurface
    MOV EAX,[0x03f95920]                ; 005ed148 | g_DirectDrawObject
    MOV dword ptr [ESP + 0x1c],EDI      ; 005ed14d
    PUSH EDX                            ; 005ed151
    MOV ECX,dword ptr [EAX]             ; 005ed152
    PUSH EAX                            ; 005ed154
    CALL dword ptr [ECX + 0x18]         ; 005ed155
    TEST EAX,EAX                        ; 005ed158
    JZ 0x005ed184                       ; 005ed15a
        ;   XREF to: 005ed184 (CONDITIONAL_JUMP)  ; LAB_005ed184
    PUSH 0x0                            ; 005ed15c
    MOV EBP,0xa18                       ; 005ed15e
    LEA EDX,[ESP + 0x4]                 ; 005ed163
    PUSH 0x3f95924                      ; 005ed167 | g_DirectDrawSurface
    MOV EAX,[0x03f95920]                ; 005ed16c | g_DirectDrawObject
    MOV dword ptr [ESP + 0x70],EBP      ; 005ed171
    PUSH EDX                            ; 005ed175
    MOV ECX,dword ptr [EAX]             ; 005ed176
    PUSH EAX                            ; 005ed178
    CALL dword ptr [ECX + 0x18]         ; 005ed179
    TEST EAX,EAX                        ; 005ed17c
    JNZ 0x005ed0a5                      ; 005ed17e
        ;   XREF to: 005ed0a5 (CONDITIONAL_JUMP)  ; LAB_005ed0a5
    PUSH 0x4                            ; 005ed184
        ;   Label: LAB_005ed184
    PUSH 0x0                            ; 005ed186
    LEA EAX,[ESP + 0x74]                ; 005ed188
    PUSH EAX                            ; 005ed18c
    CALL crt_memory.c_memset_FUN_005fde40 ; 005ed18d
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005ed192
    PUSH 0x3f95928                      ; 005ed195 | g_SoftwareRenderSurface
    LEA ECX,[ESP + 0x70]                ; 005ed19a
    MOV EAX,0x4                         ; 005ed19e
    PUSH ECX                            ; 005ed1a3
    MOV dword ptr [ESP + 0x74],EAX      ; 005ed1a4
    MOV EAX,[0x03f95924]                ; 005ed1a8 | g_DirectDrawSurface
    PUSH EAX                            ; 005ed1ad
    MOV EDX,dword ptr [EAX]             ; 005ed1ae
    CALL dword ptr [EDX + 0x30]         ; 005ed1b0
    TEST EAX,EAX                        ; 005ed1b3
    JNZ 0x005ed272                      ; 005ed1b5
        ;   XREF to: 005ed272 (CONDITIONAL_JUMP)  ; LAB_005ed272
    MOV EDX,dword ptr [0x00679398]      ; 005ed1bb | g_WindowHeight
    XOR ECX,ECX                         ; 005ed1c1
    TEST EDX,EDX                        ; 005ed1c3
    JLE 0x005ed230                      ; 005ed1c5
        ;   XREF to: 005ed230 (CONDITIONAL_JUMP)  ; LAB_005ed230
    MOV EAX,[0x0067939c]                ; 005ed1c7 | g_BitsPerPixel
    MOV EDX,EAX                         ; 005ed1cc
    SAR EDX,0x1f                        ; 005ed1ce
    SHL EDX,0x3                         ; 005ed1d1
    SBB EAX,EDX                         ; 005ed1d4
    SAR EAX,0x3                         ; 005ed1d6
    MOV EDI,EAX                         ; 005ed1d9
    MOV EAX,[0x00679394]                ; 005ed1db | g_WindowWidth
    SHL EAX,0x2                         ; 005ed1e0
    MOV dword ptr [ESP + 0x70],EAX      ; 005ed1e3
    IMUL EDX,dword ptr [0x00679394],0x0 ; 005ed1e7 | g_WindowWidth
    MOV EBX,dword ptr [0x00688010]      ; 005ed1ee | g_BackBuffer
    MOV EBP,dword ptr [0x00679398]      ; 005ed1f4 | g_WindowHeight
    XOR EAX,EAX                         ; 005ed1fa
    MOV ESI,dword ptr [0x00679394]      ; 005ed1fc | g_WindowWidth
        ;   Label: LAB_005ed1fc
    IMUL ESI,ECX                        ; 005ed202
    IMUL ESI,EDI                        ; 005ed205
    ADD ESI,EBX                         ; 005ed208
    MOV dword ptr [EAX + 0x2cf6a9c],ESI ; 005ed20a | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV ESI,dword ptr [0x0077262c]      ; 005ed210 | g_SoftwareZBuffer
    ADD EAX,0x4                         ; 005ed216
    ADD ESI,EDX                         ; 005ed219
    MOV dword ptr [EAX + 0x2cf7d58],ESI ; 005ed21b | g_ZBufferScanlineArray | g_ZBufferScanlineArray[1]
    MOV ESI,dword ptr [ESP + 0x70]      ; 005ed221
    INC ECX                             ; 005ed225
    ADD EDX,ESI                         ; 005ed226
    CMP ECX,EBP                         ; 005ed228
    JL 0x005ed1fc                       ; 005ed22a
        ;   XREF to: 005ed1fc (CONDITIONAL_JUMP)  ; LAB_005ed1fc
    LEA EAX,[EAX]                       ; 005ed22c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005ed230
        ;   Label: LAB_005ed230
    DEC EAX                             ; 005ed237
    PUSH EAX                            ; 005ed238
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005ed239
    DEC EAX                             ; 005ed240
    PUSH EAX                            ; 005ed241
    PUSH 0x0                            ; 005ed242
    PUSH 0x0                            ; 005ed244
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401800 ; 005ed246
        ;   XREF to: 00401800 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401800(int left, int top, int right, int bottom)
    ADD ESP,0x10                        ; 005ed24b
    XOR ESI,ESI                         ; 005ed24e
    CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 ; 005ed250
        ;   XREF to: 005ed8f0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0()
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 005ed255
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_005ed255
    INC ESI                             ; 005ed25a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005ed25b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CMP ESI,0x3                         ; 005ed260
    JL 0x005ed255                       ; 005ed263
        ;   XREF to: 005ed255 (CONDITIONAL_JUMP)  ; LAB_005ed255
    MOV EAX,0x1                         ; 005ed265
    ADD ESP,0x74                        ; 005ed26a
    POP EBP                             ; 005ed26d
    POP EDI                             ; 005ed26e
    POP ESI                             ; 005ed26f
    POP EBX                             ; 005ed270
    RET                                 ; 005ed271
    MOV ECX,0x657792                    ; 005ed272 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_005ed272
    MOV EBX,0x1d7                       ; 005ed277
    PUSH 0x6577a9                       ; 005ed27c | = "setScreenResolution - Create back buf..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005ed281 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005ed287 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ed28d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ed292
    XOR EAX,EAX                         ; 005ed295
    ADD ESP,0x74                        ; 005ed297
    POP EBP                             ; 005ed29a
    POP EDI                             ; 005ed29b
    POP ESI                             ; 005ed29c
    POP EBX                             ; 005ed29d
    RET                                 ; 005ed29e

