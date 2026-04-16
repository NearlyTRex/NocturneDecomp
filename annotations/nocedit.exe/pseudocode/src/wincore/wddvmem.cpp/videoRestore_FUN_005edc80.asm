; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005edc80(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 at 005edaed
;   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 at 005f325c
;
; Referenced Globals:
;   SET_FOCUS_FUNC* g_SetFocusFunc = 00211bd4
;   TerminatedCString s_wincore_wddvmem_cpp_00657a60
;   TerminatedCString s_videoRestore_Unable_to_s_00657a77
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_ExternalRendererActive
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;   int g_GraphicsResetFlag
;   HWND g_MainWindowHandle
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ddraw.c_DirectDrawCreate
;   SetFocus
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
;   wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005edc80
        ;   Label: wincore_wddvmem.cpp_videoRestore_FUN_005edc80
    PUSH ESI                            ; 005edc81
    PUSH EBP                            ; 005edc82
    CMP dword ptr [0x03f6b878],0x0      ; 005edc83 | g_ExternalRendererActive
    JZ 0x005edd97                       ; 005edc8a
        ;   XREF to: 005edd97 (CONDITIONAL_JUMP)  ; LAB_005edd97
    CMP dword ptr [0x03f95938],0x0      ; 005edc90 | g_GraphicsResetFlag
    JZ 0x005edd97                       ; 005edc97
        ;   XREF to: 005edd97 (CONDITIONAL_JUMP)  ; LAB_005edd97
    MOV EDX,dword ptr [0x0067939c]      ; 005edc9d | g_BitsPerPixel
    PUSH EDX                            ; 005edca3
    MOV ECX,dword ptr [0x00679398]      ; 005edca4 | g_WindowHeight
    PUSH ECX                            ; 005edcaa
    MOV EBX,dword ptr [0x00679394]      ; 005edcab | g_WindowWidth
    PUSH EBX                            ; 005edcb1
    CALL wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460 ; 005edcb2
        ;   XREF to: 005b7460 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005edcb7
    TEST EAX,EAX                        ; 005edcba
    JNZ 0x005edd61                      ; 005edcbc
        ;   XREF to: 005edd61 (CONDITIONAL_JUMP)  ; LAB_005edd61
    PUSH EDI                            ; 005edcc2
    MOV EDI,dword ptr [0x03f9592c]      ; 005edcc3 | g_DirectDrawUnknown
    MOV [0x03f6b878],EAX                ; 005edcc9 | g_ExternalRendererActive
    TEST EDI,EDI                        ; 005edcce
    JZ 0x005edce0                       ; 005edcd0
        ;   XREF to: 005edce0 (CONDITIONAL_JUMP)  ; LAB_005edce0
    PUSH EDI                            ; 005edcd2
    MOV EDX,dword ptr [EDI]             ; 005edcd3
    XOR EBP,EBP                         ; 005edcd5
    CALL dword ptr [EDX + 0x8]          ; 005edcd7
    MOV dword ptr [0x03f9592c],EBP      ; 005edcda | g_DirectDrawUnknown
    MOV EAX,[0x03f95928]                ; 005edce0 | g_SoftwareRenderSurface
        ;   Label: LAB_005edce0
    TEST EAX,EAX                        ; 005edce5
    JZ 0x005edcf7                       ; 005edce7
        ;   XREF to: 005edcf7 (CONDITIONAL_JUMP)  ; LAB_005edcf7
    PUSH EAX                            ; 005edce9
    MOV EDX,dword ptr [EAX]             ; 005edcea
    CALL dword ptr [EDX + 0x8]          ; 005edcec
    XOR EDX,EDX                         ; 005edcef
    MOV dword ptr [0x03f95928],EDX      ; 005edcf1 | g_SoftwareRenderSurface
    MOV ECX,dword ptr [0x03f95924]      ; 005edcf7 | g_DirectDrawSurface
        ;   Label: LAB_005edcf7
    TEST ECX,ECX                        ; 005edcfd
    JZ 0x005edd0f                       ; 005edcff
        ;   XREF to: 005edd0f (CONDITIONAL_JUMP)  ; LAB_005edd0f
    PUSH ECX                            ; 005edd01
    MOV EDX,dword ptr [ECX]             ; 005edd02
    XOR EBX,EBX                         ; 005edd04
    CALL dword ptr [EDX + 0x8]          ; 005edd06
    MOV dword ptr [0x03f95924],EBX      ; 005edd09 | g_DirectDrawSurface
    MOV ESI,dword ptr [0x03f95920]      ; 005edd0f | g_DirectDrawObject
        ;   Label: LAB_005edd0f
    TEST ESI,ESI                        ; 005edd15
    JZ 0x005edd32                       ; 005edd17
        ;   XREF to: 005edd32 (CONDITIONAL_JUMP)  ; LAB_005edd32
    PUSH ESI                            ; 005edd19
    MOV EDX,dword ptr [ESI]             ; 005edd1a
    CALL dword ptr [EDX + 0x4c]         ; 005edd1c
    MOV EAX,[0x03f95920]                ; 005edd1f | g_DirectDrawObject
    PUSH EAX                            ; 005edd24
    MOV EDX,dword ptr [EAX]             ; 005edd25
    XOR EDI,EDI                         ; 005edd27
    CALL dword ptr [EDX + 0x8]          ; 005edd29
    MOV dword ptr [0x03f95920],EDI      ; 005edd2c | g_DirectDrawObject
    PUSH 0x0                            ; 005edd32
        ;   Label: LAB_005edd32
    PUSH 0x3f95920                      ; 005edd34 | g_DirectDrawObject
    PUSH 0x0                            ; 005edd39
    CALL crt_ddraw.c_DirectDrawCreate   ; 005edd3b
        ;   XREF to: 00610ece (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lpGUID, LPDIRECTDRAW * lplpDD, IUnknown * pUnkOuter)
    TEST EAX,EAX                        ; 005edd40
    JZ 0x005edd81                       ; 005edd42
        ;   XREF to: 005edd81 (CONDITIONAL_JUMP)  ; LAB_005edd81
    MOV EAX,[0x0067939c]                ; 005edd44 | g_BitsPerPixel
        ;   Label: LAB_005edd44
    PUSH EAX                            ; 005edd49
    MOV EDX,dword ptr [0x00679398]      ; 005edd4a | g_WindowHeight
    PUSH EDX                            ; 005edd50
    MOV ECX,dword ptr [0x00679394]      ; 005edd51 | g_WindowWidth
    PUSH ECX                            ; 005edd57
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 005edd58
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005edd5d
    POP EDI                             ; 005edd60
    MOV EBX,dword ptr [0x03f98468]      ; 005edd61 | g_MainWindowHandle
        ;   Label: LAB_005edd61
    PUSH EBX                            ; 005edd67
    CALL dword ptr CS:[0x6114e8]        ; 005edd68 | g_SetFocusFunc
    POP EBP                             ; 005edd6f
        ;   Label: LAB_005edd6f
    POP ESI                             ; 005edd70
    POP EBX                             ; 005edd71
    LEA EAX,[EAX]                       ; 005edd72
    LEA EDX,[EDX]                       ; 005edd78
    MOV EAX,EAX                         ; 005edd7e
    PUSH 0x11                           ; 005edd81
        ;   Label: LAB_005edd81
    MOV EBP,dword ptr [0x03f98468]      ; 005edd83 | g_MainWindowHandle
    MOV EAX,[0x03f95920]                ; 005edd89 | g_DirectDrawObject
    PUSH EBP                            ; 005edd8e
    MOV EDX,dword ptr [EAX]             ; 005edd8f
    PUSH EAX                            ; 005edd91
    CALL dword ptr [EDX + 0x50]         ; 005edd92
    JMP 0x005edd44                      ; 005edd95
        ;   XREF to: 005edd44 (UNCONDITIONAL_JUMP)  ; LAB_005edd44
    MOV EBX,dword ptr [0x03f95924]      ; 005edd97 | g_DirectDrawSurface
        ;   Label: LAB_005edd97
    TEST EBX,EBX                        ; 005edd9d
    JZ 0x005edd6f                       ; 005edd9f
        ;   XREF to: 005edd6f (CONDITIONAL_JUMP)  ; LAB_005edd6f
    PUSH EBX                            ; 005edda1
    MOV EDX,dword ptr [EBX]             ; 005edda2
    CALL dword ptr [EDX + 0x6c]         ; 005edda4
    MOV EAX,[0x03f95928]                ; 005edda7 | g_SoftwareRenderSurface
    PUSH EAX                            ; 005eddac
    MOV EDX,dword ptr [EAX]             ; 005eddad
    CALL dword ptr [EDX + 0x6c]         ; 005eddaf
    MOV ESI,dword ptr [0x03f9592c]      ; 005eddb2 | g_DirectDrawUnknown
    TEST ESI,ESI                        ; 005eddb8
    JZ 0x005edd6f                       ; 005eddba
        ;   XREF to: 005edd6f (CONDITIONAL_JUMP)  ; LAB_005edd6f
    PUSH ESI                            ; 005eddbc
    MOV EAX,[0x03f95924]                ; 005eddbd | g_DirectDrawSurface
    PUSH EAX                            ; 005eddc2
    MOV EDX,dword ptr [EAX]             ; 005eddc3
    CALL dword ptr [EDX + 0x7c]         ; 005eddc5
    TEST EAX,EAX                        ; 005eddc8
    JZ 0x005edd6f                       ; 005eddca
        ;   XREF to: 005edd6f (CONDITIONAL_JUMP)  ; LAB_005edd6f
    MOV EBP,0x657a60                    ; 005eddcc | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0x3e7                       ; 005eddd1
    PUSH 0x657a77                       ; 005eddd6 | = "videoRestore - Unable to set front bu..."
    MOV dword ptr [0x02f0ca48],EBP      ; 005edddb | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005edde1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005edde6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005eddeb
    POP EBP                             ; 005eddee
    POP ESI                             ; 005eddef
    POP EBX                             ; 005eddf0
    RET                                 ; 005eddf1

