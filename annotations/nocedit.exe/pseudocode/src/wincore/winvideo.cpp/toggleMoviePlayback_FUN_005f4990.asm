; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winvideo.cpp_toggleMoviePlayback_FUN_005f4990(HWND notify_window, int play_state)
;
; Parameters:
; typedef HWND HWND__ * Stack[0x4]:4   notify_window
; int              Stack[0x8]:4   play_state
;
; Referenced Globals:
;   mciSendStringA* mciSendStringA = 00211850
;   TerminatedCString s_play_mov_fullscreen_noti_00658250
;   TerminatedCString s_play_mov_window_notify_0065826b
;   TerminatedCString s_pause_mov_00658282
;   DWORD g_MovieHandle
;   int g_FullscreenMovie
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f4990
        ;   Label: wincore_winvideo.cpp_toggleMoviePlayback_FUN_005f4990
    PUSH EDI                            ; 005f4991
    MOV EDX,dword ptr [ESP + 0xc]       ; 005f4992
    CMP dword ptr [0x03f99500],0x0      ; 005f4996 | DWORD g_MovieHandle
    SETZ AL                             ; 005f499d
    AND EAX,0xff                        ; 005f49a0
    MOV EBX,dword ptr [ESP + 0x10]      ; 005f49a5
    MOV [0x03f99500],EAX                ; 005f49a9 | DWORD g_MovieHandle
    TEST EBX,EBX                        ; 005f49ae
    JZ 0x005f49d4                       ; 005f49b0 | LAB_005f49d4
        ;   XREF to: 005f49d4 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005f49b2
    JZ 0x005f49da                       ; 005f49b4 | LAB_005f49da
        ;   XREF to: 005f49da (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x03f9950c]      ; 005f49b6 | int g_FullscreenMovie
    TEST EDI,EDI                        ; 005f49bc
    JZ 0x005f49e7                       ; 005f49be | LAB_005f49e7
        ;   XREF to: 005f49e7 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 005f49c0
    PUSH 0x0                            ; 005f49c1
    PUSH 0x0                            ; 005f49c3
    PUSH 0x658250                       ; 005f49c5 | = "play mov fullscreen notify" | s_play_mov_fullscreen_noti_00658250 = play mov fullscreen notify
    CALL dword ptr CS:[0x611410]        ; 005f49ca | mciSendStringA * mciSendStringA
        ;   Label: LAB_005f49ca
    POP EDI                             ; 005f49d1
    POP EBX                             ; 005f49d2
    RET                                 ; 005f49d3
    MOV dword ptr [0x03f99500],EBX      ; 005f49d4 | DWORD g_MovieHandle
        ;   Label: LAB_005f49d4
    PUSH 0x0                            ; 005f49da
        ;   Label: LAB_005f49da
    PUSH 0x0                            ; 005f49dc
    PUSH 0x0                            ; 005f49de
    PUSH 0x658282                       ; 005f49e0 | = "pause mov" | s_pause_mov_00658282 = pause mov
    JMP 0x005f49ca                      ; 005f49e5 | LAB_005f49ca
        ;   XREF to: 005f49ca (UNCONDITIONAL_JUMP)
    PUSH EDX                            ; 005f49e7
        ;   Label: LAB_005f49e7
    PUSH EDI                            ; 005f49e8
    PUSH EDI                            ; 005f49e9
    PUSH 0x65826b                       ; 005f49ea | = "play mov window notify" | s_play_mov_window_notify_0065826b = play mov window notify
    CALL dword ptr CS:[0x611410]        ; 005f49ef | mciSendStringA * mciSendStringA
    POP EDI                             ; 005f49f6
    POP EBX                             ; 005f49f7
    RET                                 ; 005f49f8

