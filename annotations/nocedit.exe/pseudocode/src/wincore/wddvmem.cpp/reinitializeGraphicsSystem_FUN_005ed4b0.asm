; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0(void)
;
;
; XREF[1]:
;   engine_2d.c_reinitializeGraphicsSystem_FUN_005ed4b0 at 00402a80
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   int g_FullscreenMode
;   IDirectDraw* g_DirectDrawObject
;   IDirectDrawSurface* g_DirectDrawSurface
;   IDirectDrawSurface* g_SoftwareRenderSurface
;   IUnknown* g_DirectDrawUnknown
;   int g_GraphicsResetFlag
;   HWND g_MainWindowHandle
;
; Called Functions:
;   crt_ddraw.c_DirectDrawCreate
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
;   wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005ed4b0
        ;   Label: wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_005ed4b0
    XOR EDX,EDX                         ; 005ed4b1
    MOV ECX,dword ptr [0x03f6b878]      ; 005ed4b3 | g_FullscreenMode
    MOV dword ptr [0x03f95938],EDX      ; 005ed4b9 | g_GraphicsResetFlag
    TEST ECX,ECX                        ; 005ed4bf
    JNZ 0x005ed4c5                      ; 005ed4c1
        ;   XREF to: 005ed4c5 (CONDITIONAL_JUMP)  ; LAB_005ed4c5
    POP EBP                             ; 005ed4c3
    RET                                 ; 005ed4c4
    PUSH EDI                            ; 005ed4c5
        ;   Label: LAB_005ed4c5
    PUSH ESI                            ; 005ed4c6
    PUSH EBX                            ; 005ed4c7
    CALL wincore_windll.cpp_restoreVideoMode_FUN_005b75b0 ; 005ed4c8
        ;   XREF to: 005b75b0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_restoreVideoMode_FUN_005b75b0()
    MOV EBX,dword ptr [0x03f9592c]      ; 005ed4cd | g_DirectDrawUnknown
    TEST EBX,EBX                        ; 005ed4d3
    JZ 0x005ed4e5                       ; 005ed4d5
        ;   XREF to: 005ed4e5 (CONDITIONAL_JUMP)  ; LAB_005ed4e5
    PUSH EBX                            ; 005ed4d7
    MOV EDX,dword ptr [EBX]             ; 005ed4d8
    XOR ESI,ESI                         ; 005ed4da
    CALL dword ptr [EDX + 0x8]          ; 005ed4dc
    MOV dword ptr [0x03f9592c],ESI      ; 005ed4df | g_DirectDrawUnknown
    MOV EDI,dword ptr [0x03f95928]      ; 005ed4e5 | g_SoftwareRenderSurface
        ;   Label: LAB_005ed4e5
    TEST EDI,EDI                        ; 005ed4eb
    JZ 0x005ed4fd                       ; 005ed4ed
        ;   XREF to: 005ed4fd (CONDITIONAL_JUMP)  ; LAB_005ed4fd
    PUSH EDI                            ; 005ed4ef
    MOV EDX,dword ptr [EDI]             ; 005ed4f0
    XOR EBP,EBP                         ; 005ed4f2
    CALL dword ptr [EDX + 0x8]          ; 005ed4f4
    MOV dword ptr [0x03f95928],EBP      ; 005ed4f7 | g_SoftwareRenderSurface
    MOV EAX,[0x03f95924]                ; 005ed4fd | g_DirectDrawSurface
        ;   Label: LAB_005ed4fd
    TEST EAX,EAX                        ; 005ed502
    JZ 0x005ed514                       ; 005ed504
        ;   XREF to: 005ed514 (CONDITIONAL_JUMP)  ; LAB_005ed514
    PUSH EAX                            ; 005ed506
    MOV EDX,dword ptr [EAX]             ; 005ed507
    CALL dword ptr [EDX + 0x8]          ; 005ed509
    XOR EDX,EDX                         ; 005ed50c
    MOV dword ptr [0x03f95924],EDX      ; 005ed50e | g_DirectDrawSurface
    MOV ECX,dword ptr [0x03f95920]      ; 005ed514 | g_DirectDrawObject
        ;   Label: LAB_005ed514
    TEST ECX,ECX                        ; 005ed51a
    JZ 0x005ed537                       ; 005ed51c
        ;   XREF to: 005ed537 (CONDITIONAL_JUMP)  ; LAB_005ed537
    PUSH ECX                            ; 005ed51e
    MOV EDX,dword ptr [ECX]             ; 005ed51f
    CALL dword ptr [EDX + 0x4c]         ; 005ed521
    MOV EAX,[0x03f95920]                ; 005ed524 | g_DirectDrawObject
    PUSH EAX                            ; 005ed529
    MOV EDX,dword ptr [EAX]             ; 005ed52a
    XOR EBX,EBX                         ; 005ed52c
    CALL dword ptr [EDX + 0x8]          ; 005ed52e
    MOV dword ptr [0x03f95920],EBX      ; 005ed531 | g_DirectDrawObject
    PUSH 0x0                            ; 005ed537
        ;   Label: LAB_005ed537
    PUSH 0x3f95920                      ; 005ed539 | g_DirectDrawObject
    PUSH 0x0                            ; 005ed53e
    CALL crt_ddraw.c_DirectDrawCreate   ; 005ed540
        ;   XREF to: 00610ece (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lpGUID, LPDIRECTDRAW * lplpDD, IUnknown * pUnkOuter)
    TEST EAX,EAX                        ; 005ed545
    JNZ 0x005ed55d                      ; 005ed547
        ;   XREF to: 005ed55d (CONDITIONAL_JUMP)  ; LAB_005ed55d
    PUSH 0x11                           ; 005ed549
    MOV ESI,dword ptr [0x03f98468]      ; 005ed54b | g_MainWindowHandle
    MOV EAX,[0x03f95920]                ; 005ed551 | g_DirectDrawObject
    PUSH ESI                            ; 005ed556
    MOV EDX,dword ptr [EAX]             ; 005ed557
    PUSH EAX                            ; 005ed559
    CALL dword ptr [EDX + 0x50]         ; 005ed55a
    MOV EDI,dword ptr [0x0067939c]      ; 005ed55d | g_BitsPerPixel
        ;   Label: LAB_005ed55d
    PUSH EDI                            ; 005ed563
    MOV EBP,dword ptr [0x00679398]      ; 005ed564 | g_WindowHeight
    PUSH EBP                            ; 005ed56a
    MOV EAX,[0x00679394]                ; 005ed56b | g_WindowWidth
    PUSH EAX                            ; 005ed570
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 005ed571
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 005ed576
    POP EBX                             ; 005ed579
    POP ESI                             ; 005ed57a
    POP EDI                             ; 005ed57b
    POP EBP                             ; 005ed57c
    RET                                 ; 005ed57d

