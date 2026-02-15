; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_allocateRenderBuffers_FUN_005ecac0(void)
;
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
;   void* g_SoftwareFrameBuffer
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005ecac0
        ;   Label: wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005ecac0
    PUSH EBP                            ; 005ecac1
    MOV ECX,dword ptr [0x00679394]      ; 005ecac2 | g_WindowWidth
    IMUL ECX,dword ptr [0x00679398]     ; 005ecac8 | g_WindowHeight
    MOV EAX,[0x0067939c]                ; 005ecacf | g_BitsPerPixel
    MOV EDX,EAX                         ; 005ecad4
    SAR EDX,0x1f                        ; 005ecad6
    SHL EDX,0x3                         ; 005ecad9
    SBB EAX,EDX                         ; 005ecadc
    SAR EAX,0x3                         ; 005ecade
    IMUL EAX,ECX                        ; 005ecae1
    PUSH 0xe9                           ; 005ecae4
    PUSH 0x6576b4                       ; 005ecae9 | = "..\\wincore\\wddvmem.cpp"
    PUSH EAX                            ; 005ecaee
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005ecaef
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ecaf4
    MOV [0x00688010],EAX                ; 005ecaf7 | g_BackBuffer
    TEST EAX,EAX                        ; 005ecafc
    JNZ 0x005ecb25                      ; 005ecafe
        ;   XREF to: 005ecb25 (CONDITIONAL_JUMP)  ; LAB_005ecb25
    PUSH EBX                            ; 005ecb00
    MOV ECX,0x6576cb                    ; 005ecb01 | = "..\\wincore\\wddvmem.cpp"
    MOV EBX,0xea                        ; 005ecb06
    PUSH 0x6576e2                       ; 005ecb0b | = "WDDVMEM: Fatal - out of frame buffer ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005ecb10 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005ecb16 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ecb1c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ecb21
    POP EBX                             ; 005ecb24
    MOV EAX,[0x00679394]                ; 005ecb25 | g_WindowWidth
        ;   Label: LAB_005ecb25
    IMUL EAX,dword ptr [0x00679398]     ; 005ecb2a | g_WindowHeight
    PUSH 0xee                           ; 005ecb31
    SHL EAX,0x2                         ; 005ecb36
    PUSH 0x65770e                       ; 005ecb39 | = "..\\wincore\\wddvmem.cpp"
    ADD EAX,0x40                        ; 005ecb3e
    PUSH EAX                            ; 005ecb41
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005ecb42
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ecb47
    MOV [0x03f95930],EAX                ; 005ecb4a | g_SoftwareFrameBuffer
    TEST EAX,EAX                        ; 005ecb4f
    JZ 0x005ecb65                       ; 005ecb51
        ;   XREF to: 005ecb65 (CONDITIONAL_JUMP)  ; LAB_005ecb65
    MOV EAX,[0x03f95930]                ; 005ecb53 | g_SoftwareFrameBuffer
    ADD EAX,0x10                        ; 005ecb58
    AND AL,0xf0                         ; 005ecb5b
    MOV [0x0077262c],EAX                ; 005ecb5d | g_SoftwareZBuffer
    POP EBP                             ; 005ecb62
    POP EDI                             ; 005ecb63
    RET                                 ; 005ecb64
    MOV EDI,0x657725                    ; 005ecb65 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_005ecb65
    MOV EBP,0xef                        ; 005ecb6a
    PUSH 0x65773c                       ; 005ecb6f | = "WDDVMEM: Fatal - out of Z buffer memory"
    MOV dword ptr [0x02f0ca48],EDI      ; 005ecb74 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005ecb7a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ecb80
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ecb85
    MOV EAX,[0x03f95930]                ; 005ecb88 | g_SoftwareFrameBuffer
    ADD EAX,0x10                        ; 005ecb8d
    AND AL,0xf0                         ; 005ecb90
    MOV [0x0077262c],EAX                ; 005ecb92 | g_SoftwareZBuffer
    POP EBP                             ; 005ecb97
    POP EDI                             ; 005ecb98
    RET                                 ; 005ecb99

