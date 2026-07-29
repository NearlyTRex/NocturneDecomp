; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_0055a4a0(HWND notify_window,int play_state)
;
; Parameters:
; HWND             Stack[0x4]:4   notify_window
; int              Stack[0x8]:4   play_state
;
; Referenced Globals:
;   void* PTR_mciSendStringA_005753e0 = 00175816
;   TerminatedCString s_play_mov_fullscreen_noti_005981f1
;   TerminatedCString s_play_mov_window_notify_0059820c
;   TerminatedCString s_pause_mov_00598223
;   undefined4 DAT_02de3120
;   undefined4 DAT_02de312c
;
; Called Functions:
;   mciSendStringA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a4a0
        ;   Label: wincore_winvideo.cpp_toggleMoviePlayback_FUN_0055a4a0
    PUSH EDI                            ; 0055a4a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055a4a2
    CMP dword ptr [0x02de3120],0x0      ; 0055a4a6 | DAT_02de3120
    SETZ AL                             ; 0055a4ad
    AND EAX,0xff                        ; 0055a4b0
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055a4b5
    MOV [0x02de3120],EAX                ; 0055a4b9 | DAT_02de3120
    TEST EBX,EBX                        ; 0055a4be
    JZ 0x0055a4e4                       ; 0055a4c0
        ;   XREF to: 0055a4e4 (CONDITIONAL_JUMP)  ; LAB_0055a4e4
    TEST EAX,EAX                        ; 0055a4c2
    JZ 0x0055a4ea                       ; 0055a4c4
        ;   XREF to: 0055a4ea (CONDITIONAL_JUMP)  ; LAB_0055a4ea
    MOV EDI,dword ptr [0x02de312c]      ; 0055a4c6 | DAT_02de312c
    TEST EDI,EDI                        ; 0055a4cc
    JZ 0x0055a4f7                       ; 0055a4ce
        ;   XREF to: 0055a4f7 (CONDITIONAL_JUMP)  ; LAB_0055a4f7
    PUSH EDX                            ; 0055a4d0
    PUSH 0x0                            ; 0055a4d1
    PUSH 0x0                            ; 0055a4d3
    PUSH 0x5981f1                       ; 0055a4d5 | = "play mov fullscreen notify"
    CALL dword ptr CS:[0x5753e0]        ; 0055a4da | PTR_mciSendStringA_005753e0
        ;   Label: LAB_0055a4da
    POP EDI                             ; 0055a4e1
    POP EBX                             ; 0055a4e2
    RET                                 ; 0055a4e3
    MOV dword ptr [0x02de3120],EBX      ; 0055a4e4 | DAT_02de3120
        ;   Label: LAB_0055a4e4
    PUSH 0x0                            ; 0055a4ea
        ;   Label: LAB_0055a4ea
    PUSH 0x0                            ; 0055a4ec
    PUSH 0x0                            ; 0055a4ee
    PUSH 0x598223                       ; 0055a4f0 | = "pause mov"
    JMP 0x0055a4da                      ; 0055a4f5
        ;   XREF to: 0055a4da (UNCONDITIONAL_JUMP)  ; LAB_0055a4da
    PUSH EDX                            ; 0055a4f7
        ;   Label: LAB_0055a4f7
    PUSH EDI                            ; 0055a4f8
    PUSH EDI                            ; 0055a4f9
    PUSH 0x59820c                       ; 0055a4fa | = "play mov window notify"
    CALL dword ptr CS:[0x5753e0]        ; 0055a4ff | PTR_mciSendStringA_005753e0
    POP EDI                             ; 0055a506
    POP EBX                             ; 0055a507
    RET                                 ; 0055a508

