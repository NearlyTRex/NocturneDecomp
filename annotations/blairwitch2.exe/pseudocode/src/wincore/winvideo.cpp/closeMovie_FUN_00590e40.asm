; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_closeMovie_FUN_00590e40(HWND window_handle)
;
; Parameters:
; HWND             Stack[0x4]:4   window_handle
;
; XREF[3]:
;   wincore_winrun.cpp_FUN_0058ed90 at 0058f11d
;   wincore_winvideo.cpp_FUN_00591190 at 0059120b
;   wincore_winvideo.cpp_openMovie_FUN_00590e90 at 00590eab
;
; Referenced Globals:
;   void* PTR_mciSendStringA_005c8440 = 001c88e8
;   void* PTR_InvalidateRect_005c84bc = 001c8b06
;   void* PTR_UpdateWindow_005c8504 = 001c8c22
;   TerminatedCString s_close_mov_005eec0f
;   undefined4 DAT_02665a4c
;   undefined4 DAT_02665a50
;
; Called Functions:
;   InvalidateRect
;   mciSendStringA
;   UpdateWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02665a50],0x0      ; 00590e40 | DAT_02665a50
        ;   Label: wincore_winvideo.cpp_closeMovie_FUN_00590e40
    JNZ 0x00590e4a                      ; 00590e47
        ;   XREF to: 00590e4a (CONDITIONAL_JUMP)  ; LAB_00590e4a
    RET                                 ; 00590e49
    PUSH ESI                            ; 00590e4a
        ;   Label: LAB_00590e4a
    PUSH 0x0                            ; 00590e4b
    PUSH 0x0                            ; 00590e4d
    PUSH 0x0                            ; 00590e4f
    PUSH 0x5eec0f                       ; 00590e51 | = "close mov"
    CALL dword ptr CS:[0x5c8440]        ; 00590e56 | PTR_mciSendStringA_005c8440
    PUSH 0x1                            ; 00590e5d
    XOR ECX,ECX                         ; 00590e5f
    PUSH ECX                            ; 00590e61
    MOV ESI,dword ptr [ESP + 0x10]      ; 00590e62
    PUSH ESI                            ; 00590e66
    MOV dword ptr [0x02665a4c],ECX      ; 00590e67 | DAT_02665a4c
    MOV dword ptr [0x02665a50],ECX      ; 00590e6d | DAT_02665a50
    CALL dword ptr CS:[0x5c84bc]        ; 00590e73 | PTR_InvalidateRect_005c84bc
    PUSH ESI                            ; 00590e7a
    CALL dword ptr CS:[0x5c8504]        ; 00590e7b | PTR_UpdateWindow_005c8504
    POP ESI                             ; 00590e82
    RET                                 ; 00590e83

