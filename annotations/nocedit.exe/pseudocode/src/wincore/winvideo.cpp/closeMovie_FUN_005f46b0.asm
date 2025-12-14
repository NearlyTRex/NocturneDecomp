; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winvideo.cpp_closeMovie_FUN_005f46b0(HWND window_handle)
;
; Parameters:
; typedef HWND HWND__ * Stack[0x4]:4   window_handle
;
; XREF[3]:
;   wincore_winrun.cpp_mainWindowProc_FUN_005f3150 at 005f349c
;   wincore_winvideo.cpp_openMovie_FUN_005f4700 at 005f471b
;   wincore_winvideo.cpp_playMovie_FUN_005f4a00 at 005f4a91
;
; Referenced Globals:
;   mciSendStringA* mciSendStringA = 00211850
;   InvalidateRect* InvalidateRect = 00211b0c
;   UpdateWindow* UpdateWindow = 00211c28
;   TerminatedCString s_close_mov_006581ee
;   DWORD g_MovieHandle
;   int g_MoviePlaying
;
; Called Functions:
;   InvalidateRect
;   mciSendStringA
;   UpdateWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x03f99504],0x0      ; 005f46b0 | g_MoviePlaying
        ;   Label: wincore_winvideo.cpp_closeMovie_FUN_005f46b0
    JNZ 0x005f46ba                      ; 005f46b7
        ;   XREF to: 005f46ba (CONDITIONAL_JUMP)  ; LAB_005f46ba
    RET                                 ; 005f46b9
    PUSH ESI                            ; 005f46ba
        ;   Label: LAB_005f46ba
    PUSH 0x0                            ; 005f46bb
    PUSH 0x0                            ; 005f46bd
    PUSH 0x0                            ; 005f46bf
    PUSH 0x6581ee                       ; 005f46c1 | = "close mov"
    CALL dword ptr CS:[0x611410]        ; 005f46c6 | mciSendStringA
    PUSH 0x1                            ; 005f46cd
    XOR ECX,ECX                         ; 005f46cf
    PUSH ECX                            ; 005f46d1
    MOV ESI,dword ptr [ESP + 0x10]      ; 005f46d2
    PUSH ESI                            ; 005f46d6
    MOV dword ptr [0x03f99500],ECX      ; 005f46d7 | g_MovieHandle
    MOV dword ptr [0x03f99504],ECX      ; 005f46dd | g_MoviePlaying
    CALL dword ptr CS:[0x6114b4]        ; 005f46e3 | InvalidateRect
    PUSH ESI                            ; 005f46ea
    CALL dword ptr CS:[0x6114fc]        ; 005f46eb | UpdateWindow
    POP ESI                             ; 005f46f2
    RET                                 ; 005f46f3

