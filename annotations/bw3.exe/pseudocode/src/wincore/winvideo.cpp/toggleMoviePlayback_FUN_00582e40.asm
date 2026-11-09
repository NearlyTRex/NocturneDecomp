; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_00582e40(HWND notify_window,int play_state)
;
; Parameters:
; HWND             Stack[0x4]:4   notify_window
; int              Stack[0x8]:4   play_state
;
; Referenced Globals:
;   undefined4 DAT_02d22fac
;   undefined4 DAT_02d22fb8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582e40
        ;   Label: wincore_winvideo.cpp_toggleMoviePlayback_FUN_00582e40
    PUSH EDI                            ; 00582e41
    MOV EDX,dword ptr [ESP + 0xc]       ; 00582e42
    CMP dword ptr [0x02d22fac],0x0      ; 00582e46 | DAT_02d22fac
    SETZ AL                             ; 00582e4d
    AND EAX,0xff                        ; 00582e50
    MOV EBX,dword ptr [ESP + 0x10]      ; 00582e55
    MOV [0x02d22fac],EAX                ; 00582e59 | DAT_02d22fac
    TEST EBX,EBX                        ; 00582e5e
    JZ 0x00582e84                       ; 00582e60
        ;   XREF to: 00582e84 (CONDITIONAL_JUMP)  ; LAB_00582e84
    TEST EAX,EAX                        ; 00582e62
    JZ 0x00582e8a                       ; 00582e64
        ;   XREF to: 00582e8a (CONDITIONAL_JUMP)  ; LAB_00582e8a
    MOV EDI,dword ptr [0x02d22fb8]      ; 00582e66 | DAT_02d22fb8
    TEST EDI,EDI                        ; 00582e6c
    JZ 0x00582e97                       ; 00582e6e
        ;   XREF to: 00582e97 (CONDITIONAL_JUMP)  ; LAB_00582e97
    PUSH EDX                            ; 00582e70
    PUSH 0x0                            ; 00582e71
    PUSH 0x0                            ; 00582e73
    PUSH 0x5d806e                       ; 00582e75
    CALL dword ptr CS:[0x5b344c]        ; 00582e7a
        ;   Label: LAB_00582e7a
    POP EDI                             ; 00582e81
    POP EBX                             ; 00582e82
    RET                                 ; 00582e83
    MOV dword ptr [0x02d22fac],EBX      ; 00582e84 | DAT_02d22fac
        ;   Label: LAB_00582e84
    PUSH 0x0                            ; 00582e8a
        ;   Label: LAB_00582e8a
    PUSH 0x0                            ; 00582e8c
    PUSH 0x0                            ; 00582e8e
    PUSH 0x5d80a0                       ; 00582e90
    JMP 0x00582e7a                      ; 00582e95
        ;   XREF to: 00582e7a (UNCONDITIONAL_JUMP)  ; LAB_00582e7a
    PUSH EDX                            ; 00582e97
        ;   Label: LAB_00582e97
    PUSH EDI                            ; 00582e98
    PUSH EDI                            ; 00582e99
    PUSH 0x5d8089                       ; 00582e9a
    CALL dword ptr CS:[0x5b344c]        ; 00582e9f
    POP EDI                             ; 00582ea6
    POP EBX                             ; 00582ea7
    RET                                 ; 00582ea8

