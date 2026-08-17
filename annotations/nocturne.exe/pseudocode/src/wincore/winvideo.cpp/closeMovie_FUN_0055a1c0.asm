; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_closeMovie_FUN_0055a1c0(HWND window_handle)
;
; Parameters:
; HWND             Stack[0x4]:4   window_handle
;
; XREF[3]:
;   wincore_winrun.cpp_mainWindowProc_FUN_00558d90 at 00559081
;   wincore_winvideo.cpp_openMovie_FUN_0055a210 at 0055a22b
;   wincore_winvideo.cpp_playMovie_FUN_0055a510 at 0055a58b
;
; Referenced Globals:
;   void* PTR_mciSendStringA_005753e0 = 00175816
;   void* PTR_InvalidateRect_0057543c = 001759a8
;   void* PTR_UpdateWindow_00575484 = 00175ac4
;   TerminatedCString s_close_mov_0059818f
;   undefined4 DAT_02de3120
;   undefined4 DAT_02de3124
;
; Called Functions:
;   InvalidateRect
;   mciSendStringA
;   UpdateWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02de3124],0x0      ; 0055a1c0 | DAT_02de3124
        ;   Label: wincore_winvideo.cpp_closeMovie_FUN_0055a1c0
    JNZ 0x0055a1ca                      ; 0055a1c7
        ;   XREF to: 0055a1ca (CONDITIONAL_JUMP)  ; LAB_0055a1ca
    RET                                 ; 0055a1c9
    PUSH ESI                            ; 0055a1ca
        ;   Label: LAB_0055a1ca
    PUSH 0x0                            ; 0055a1cb
    PUSH 0x0                            ; 0055a1cd
    PUSH 0x0                            ; 0055a1cf
    PUSH 0x59818f                       ; 0055a1d1 | = "close mov"
    CALL dword ptr CS:[0x5753e0]        ; 0055a1d6 | PTR_mciSendStringA_005753e0
    PUSH 0x1                            ; 0055a1dd
    XOR ECX,ECX                         ; 0055a1df
    PUSH ECX                            ; 0055a1e1
    MOV ESI,dword ptr [ESP + 0x10]      ; 0055a1e2
    PUSH ESI                            ; 0055a1e6
    MOV dword ptr [0x02de3120],ECX      ; 0055a1e7 | DAT_02de3120
    MOV dword ptr [0x02de3124],ECX      ; 0055a1ed | DAT_02de3124
    CALL dword ptr CS:[0x57543c]        ; 0055a1f3 | PTR_InvalidateRect_0057543c
    PUSH ESI                            ; 0055a1fa
    CALL dword ptr CS:[0x575484]        ; 0055a1fb | PTR_UpdateWindow_00575484
    POP ESI                             ; 0055a202
    RET                                 ; 0055a203

