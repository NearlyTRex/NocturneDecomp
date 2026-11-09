; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_005b4c60(HWND notify_window,int play_state)
;
; Parameters:
; HWND             Stack[0x4]:4   notify_window
; int              Stack[0x8]:4   play_state
;
; Referenced Globals:
;   undefined4 DAT_02c9d29c
;   undefined4 DAT_02c9d2a8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b4c60
        ;   Label: wincore_winvideo.cpp_toggleMoviePlayback_FUN_005b4c60
    PUSH EDI                            ; 005b4c61
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b4c62
    CMP dword ptr [0x02c9d29c],0x0      ; 005b4c66 | DAT_02c9d29c
    SETZ AL                             ; 005b4c6d
    AND EAX,0xff                        ; 005b4c70
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b4c75
    MOV [0x02c9d29c],EAX                ; 005b4c79 | DAT_02c9d29c
    TEST EBX,EBX                        ; 005b4c7e
    JZ 0x005b4ca4                       ; 005b4c80
        ;   XREF to: 005b4ca4 (CONDITIONAL_JUMP)  ; LAB_005b4ca4
    TEST EAX,EAX                        ; 005b4c82
    JZ 0x005b4caa                       ; 005b4c84
        ;   XREF to: 005b4caa (CONDITIONAL_JUMP)  ; LAB_005b4caa
    MOV EDI,dword ptr [0x02c9d2a8]      ; 005b4c86 | DAT_02c9d2a8
    TEST EDI,EDI                        ; 005b4c8c
    JZ 0x005b4cb7                       ; 005b4c8e
        ;   XREF to: 005b4cb7 (CONDITIONAL_JUMP)  ; LAB_005b4cb7
    PUSH EDX                            ; 005b4c90
    PUSH 0x0                            ; 005b4c91
    PUSH 0x0                            ; 005b4c93
    PUSH 0x5fa043                       ; 005b4c95
    CALL dword ptr CS:[0x5d044c]        ; 005b4c9a
        ;   Label: LAB_005b4c9a
    POP EDI                             ; 005b4ca1
    POP EBX                             ; 005b4ca2
    RET                                 ; 005b4ca3
    MOV dword ptr [0x02c9d29c],EBX      ; 005b4ca4 | DAT_02c9d29c
        ;   Label: LAB_005b4ca4
    PUSH 0x0                            ; 005b4caa
        ;   Label: LAB_005b4caa
    PUSH 0x0                            ; 005b4cac
    PUSH 0x0                            ; 005b4cae
    PUSH 0x5fa075                       ; 005b4cb0
    JMP 0x005b4c9a                      ; 005b4cb5
        ;   XREF to: 005b4c9a (UNCONDITIONAL_JUMP)  ; LAB_005b4c9a
    PUSH EDX                            ; 005b4cb7
        ;   Label: LAB_005b4cb7
    PUSH EDI                            ; 005b4cb8
    PUSH EDI                            ; 005b4cb9
    PUSH 0x5fa05e                       ; 005b4cba
    CALL dword ptr CS:[0x5d044c]        ; 005b4cbf
    POP EDI                             ; 005b4cc6
    POP EBX                             ; 005b4cc7
    RET                                 ; 005b4cc8

