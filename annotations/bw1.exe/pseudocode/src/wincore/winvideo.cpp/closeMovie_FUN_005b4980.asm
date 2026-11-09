; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_closeMovie_FUN_005b4980(HWND window_handle)
;
; Parameters:
; HWND             Stack[0x4]:4   window_handle
;
; XREF[3]:
;   wincore_winrun.cpp_FUN_005b27d0 at 005b2b83
;   wincore_winvideo.cpp_FUN_005b4cd0 at 005b4d4b
;   wincore_winvideo.cpp_openMovie_FUN_005b49d0 at 005b49eb
;
; Referenced Globals:
;   void* PTR_mciSendStringA_005d044c = 001d0900
;   void* PTR_InvalidateRect_005d04cc = 001d0b2e
;   void* PTR_UpdateWindow_005d0514 = 001d0c4a
;   TerminatedCString s_close_mov_005f9fe1
;   undefined4 DAT_02c9d29c
;   undefined4 DAT_02c9d2a0
;
; Called Functions:
;   InvalidateRect
;   mciSendStringA
;   UpdateWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c9d2a0],0x0      ; 005b4980 | DAT_02c9d2a0
        ;   Label: wincore_winvideo.cpp_closeMovie_FUN_005b4980
    JNZ 0x005b498a                      ; 005b4987
        ;   XREF to: 005b498a (CONDITIONAL_JUMP)  ; LAB_005b498a
    RET                                 ; 005b4989
    PUSH ESI                            ; 005b498a
        ;   Label: LAB_005b498a
    PUSH 0x0                            ; 005b498b
    PUSH 0x0                            ; 005b498d
    PUSH 0x0                            ; 005b498f
    PUSH 0x5f9fe1                       ; 005b4991 | = "close mov"
    CALL dword ptr CS:[0x5d044c]        ; 005b4996 | PTR_mciSendStringA_005d044c
    PUSH 0x1                            ; 005b499d
    XOR ECX,ECX                         ; 005b499f
    PUSH ECX                            ; 005b49a1
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b49a2
    PUSH ESI                            ; 005b49a6
    MOV dword ptr [0x02c9d29c],ECX      ; 005b49a7 | DAT_02c9d29c
    MOV dword ptr [0x02c9d2a0],ECX      ; 005b49ad | DAT_02c9d2a0
    CALL dword ptr CS:[0x5d04cc]        ; 005b49b3 | PTR_InvalidateRect_005d04cc
    PUSH ESI                            ; 005b49ba
    CALL dword ptr CS:[0x5d0514]        ; 005b49bb | PTR_UpdateWindow_005d0514
    POP ESI                             ; 005b49c2
    RET                                 ; 005b49c3

