; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ecc10(void)
;
;
; XREF[1]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 00401020
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_006576b4
;   TerminatedCString s_wincore_wddvmem_cpp_006576cb
;   TerminatedCString s_WDDVMEM_Fatal_out_of_fra_006576e2
;   TerminatedCString s_wincore_wddvmem_cpp_0065770e
;   TerminatedCString s_wincore_wddvmem_cpp_00657725
;   TerminatedCString s_WDDVMEM_Fatal_out_of_Z_b_0065773c
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void* g_BackBuffer
;   void* g_SoftwareZBuffer
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ddraw.c_DirectDrawCreate
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ecc10
        ;   Label: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10
    PUSH ESI                            ; 005ecc11
    PUSH EDI                            ; 005ecc12
    PUSH EBP                            ; 005ecc13
    MOV ECX,dword ptr [0x00679394]      ; 005ecc14 | g_WindowWidth
    IMUL ECX,dword ptr [0x00679398]     ; 005ecc1a | g_WindowHeight
    MOV EAX,[0x0067939c]                ; 005ecc21 | g_BitsPerPixel
    MOV EDX,EAX                         ; 005ecc26
    SAR EDX,0x1f                        ; 005ecc28
    SHL EDX,0x3                         ; 005ecc2b
    SBB EAX,EDX                         ; 005ecc2e
    SAR EAX,0x3                         ; 005ecc30
    IMUL EAX,ECX                        ; 005ecc33
    PUSH 0xe9                           ; 005ecc36
    PUSH 0x6576b4                       ; 005ecc3b | = "..\\wincore\\wddvmem.cpp"
    PUSH EAX                            ; 005ecc40
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005ecc41
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ecc46
    MOV [0x00688010],EAX                ; 005ecc49 | g_BackBuffer
    TEST EAX,EAX                        ; 005ecc4e
    JZ 0x005ecd4b                       ; 005ecc50
        ;   XREF to: 005ecd4b (CONDITIONAL_JUMP)  ; LAB_005ecd4b
    MOV EAX,[0x00679394]                ; 005ecc56 | g_WindowWidth
        ;   Label: LAB_005ecc56
    IMUL EAX,dword ptr [0x00679398]     ; 005ecc5b | g_WindowHeight
    PUSH 0xee                           ; 005ecc62
    SHL EAX,0x2                         ; 005ecc67
    PUSH 0x65770e                       ; 005ecc6a | = "..\\wincore\\wddvmem.cpp"
    ADD EAX,0x40                        ; 005ecc6f
    PUSH EAX                            ; 005ecc72
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005ecc73
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ecc78
    MOV [0x03f95930],EAX                ; 005ecc7b | g_SoftwareFrameBuffer
    TEST EAX,EAX                        ; 005ecc80
    JNZ 0x005ecca7                      ; 005ecc82
        ;   XREF to: 005ecca7 (CONDITIONAL_JUMP)  ; LAB_005ecca7
    MOV EDI,0x657725                    ; 005ecc84 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0xef                        ; 005ecc89
    PUSH 0x65773c                       ; 005ecc8e | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x02f0ca48],EDI      ; 005ecc93 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005ecc99 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ecc9f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ecca4
    MOV EAX,[0x03f95930]                ; 005ecca7 | g_SoftwareFrameBuffer
        ;   Label: LAB_005ecca7
    ADD EAX,0x10                        ; 005eccac
    AND AL,0xf0                         ; 005eccaf
    MOV [0x0077262c],EAX                ; 005eccb1 | g_SoftwareZBuffer
    MOV EAX,[0x03f9592c]                ; 005eccb6 | g_DirectDrawUnknown
    TEST EAX,EAX                        ; 005eccbb
    JZ 0x005ecccd                       ; 005eccbd
        ;   XREF to: 005ecccd (CONDITIONAL_JUMP)  ; LAB_005ecccd
    PUSH EAX                            ; 005eccbf
    MOV EDX,dword ptr [EAX]             ; 005eccc0
    CALL dword ptr [EDX + 0x8]          ; 005eccc2
    XOR EDX,EDX                         ; 005eccc5
    MOV dword ptr [0x03f9592c],EDX      ; 005eccc7 | g_DirectDrawUnknown
    MOV ECX,dword ptr [0x03f95928]      ; 005ecccd | g_SoftwareRenderSurface
        ;   Label: LAB_005ecccd
    TEST ECX,ECX                        ; 005eccd3
    JZ 0x005ecce5                       ; 005eccd5
        ;   XREF to: 005ecce5 (CONDITIONAL_JUMP)  ; LAB_005ecce5
    PUSH ECX                            ; 005eccd7
    MOV EDX,dword ptr [ECX]             ; 005eccd8
    XOR EBX,EBX                         ; 005eccda
    CALL dword ptr [EDX + 0x8]          ; 005eccdc
    MOV dword ptr [0x03f95928],EBX      ; 005eccdf | g_SoftwareRenderSurface
    MOV ESI,dword ptr [0x03f95924]      ; 005ecce5 | g_DirectDrawSurface
        ;   Label: LAB_005ecce5
    TEST ESI,ESI                        ; 005ecceb
    JZ 0x005eccfd                       ; 005ecced
        ;   XREF to: 005eccfd (CONDITIONAL_JUMP)  ; LAB_005eccfd
    PUSH ESI                            ; 005eccef
    MOV EDX,dword ptr [ESI]             ; 005eccf0
    XOR EDI,EDI                         ; 005eccf2
    CALL dword ptr [EDX + 0x8]          ; 005eccf4
    MOV dword ptr [0x03f95924],EDI      ; 005eccf7 | g_DirectDrawSurface
    MOV EBP,dword ptr [0x03f95920]      ; 005eccfd | g_DirectDrawObject
        ;   Label: LAB_005eccfd
    TEST EBP,EBP                        ; 005ecd03
    JZ 0x005ecd20                       ; 005ecd05
        ;   XREF to: 005ecd20 (CONDITIONAL_JUMP)  ; LAB_005ecd20
    PUSH EBP                            ; 005ecd07
    MOV EDX,dword ptr [EBP]             ; 005ecd08
    CALL dword ptr [EDX + 0x4c]         ; 005ecd0b
    MOV EAX,[0x03f95920]                ; 005ecd0e | g_DirectDrawObject
    PUSH EAX                            ; 005ecd13
    MOV EDX,dword ptr [EAX]             ; 005ecd14
    CALL dword ptr [EDX + 0x8]          ; 005ecd16
    XOR EAX,EAX                         ; 005ecd19
    MOV [0x03f95920],EAX                ; 005ecd1b | g_DirectDrawObject
    PUSH 0x0                            ; 005ecd20
        ;   Label: LAB_005ecd20
    PUSH 0x3f95920                      ; 005ecd22 | g_DirectDrawObject
    PUSH 0x0                            ; 005ecd27
    CALL crt_ddraw.c_DirectDrawCreate   ; 005ecd29
        ;   XREF to: 00610ece (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lpGUID, LPDIRECTDRAW * lplpDD, IUnknown * pUnkOuter)
    TEST EAX,EAX                        ; 005ecd2e
    JZ 0x005ecd73                       ; 005ecd30
        ;   XREF to: 005ecd73 (CONDITIONAL_JUMP)  ; LAB_005ecd73
    MOV EBX,dword ptr [0x03f98468]      ; 005ecd32 | g_MainWindowHandle
        ;   Label: LAB_005ecd32
    PUSH EBX                            ; 005ecd38
    CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 ; 005ecd39
        ;   XREF to: 005b6750 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)
    MOV EAX,0x1                         ; 005ecd3e
    ADD ESP,0x4                         ; 005ecd43
    POP EBP                             ; 005ecd46
    POP EDI                             ; 005ecd47
    POP ESI                             ; 005ecd48
    POP EBX                             ; 005ecd49
    RET                                 ; 005ecd4a
    MOV ECX,0x6576cb                    ; 005ecd4b | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_005ecd4b
    MOV EBX,0xea                        ; 005ecd50
    PUSH 0x6576e2                       ; 005ecd55 | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005ecd5a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005ecd60 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ecd66
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ecd6b
    JMP 0x005ecc56                      ; 005ecd6e
        ;   XREF to: 005ecc56 (UNCONDITIONAL_JUMP)  ; LAB_005ecc56
    PUSH 0x11                           ; 005ecd73
        ;   Label: LAB_005ecd73
    MOV ECX,dword ptr [0x03f98468]      ; 005ecd75 | g_MainWindowHandle
    MOV EAX,[0x03f95920]                ; 005ecd7b | g_DirectDrawObject
    PUSH ECX                            ; 005ecd80
    MOV EDX,dword ptr [EAX]             ; 005ecd81
    PUSH EAX                            ; 005ecd83
    CALL dword ptr [EDX + 0x50]         ; 005ecd84
    JMP 0x005ecd32                      ; 005ecd87
        ;   XREF to: 005ecd32 (UNCONDITIONAL_JUMP)  ; LAB_005ecd32

