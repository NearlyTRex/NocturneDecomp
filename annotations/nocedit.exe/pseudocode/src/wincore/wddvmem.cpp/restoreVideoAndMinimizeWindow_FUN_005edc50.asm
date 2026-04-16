; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_005edc50(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 at 005f3282
;
; Referenced Globals:
;   SHOW_WINDOW_FUNC* g_ShowWindowFunc = 00211c06
;   int g_ExternalRendererActive
;   int g_GraphicsResetFlag
;   HWND g_MainWindowHandle
;
; Called Functions:
;   ShowWindow
;   wincore_windll.cpp_restoreVideoMode_FUN_005b75b0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f6b878],0x0      ; 005edc50 | g_ExternalRendererActive
        ;   Label: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005edc50
    JZ 0x005edc62                       ; 005edc57
        ;   XREF to: 005edc62 (CONDITIONAL_JUMP)  ; LAB_005edc62
    CMP dword ptr [0x03f95938],0x0      ; 005edc59 | g_GraphicsResetFlag
    JNZ 0x005edc63                      ; 005edc60
        ;   XREF to: 005edc63 (CONDITIONAL_JUMP)  ; LAB_005edc63
    RET                                 ; 005edc62
        ;   Label: LAB_005edc62
    PUSH EBX                            ; 005edc63
        ;   Label: LAB_005edc63
    CALL wincore_windll.cpp_restoreVideoMode_FUN_005b75b0 ; 005edc64
        ;   XREF to: 005b75b0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_restoreVideoMode_FUN_005b75b0()
    PUSH 0x6                            ; 005edc69
    MOV EBX,dword ptr [0x03f98468]      ; 005edc6b | g_MainWindowHandle
    PUSH EBX                            ; 005edc71
    CALL dword ptr CS:[0x6114f4]        ; 005edc72 | g_ShowWindowFunc
    POP EBX                             ; 005edc79
    RET                                 ; 005edc7a

