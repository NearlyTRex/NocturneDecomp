; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winvideo_cpp_toggleMoviePlayback_FUN_00591120(HWND notify_window,int play_state)
;
; Parameters:
; HWND             Stack[0x4]:4   notify_window
; int              Stack[0x8]:4   play_state
;
; Referenced Globals:
;   undefined4 DAT_02665a4c
;   undefined4 DAT_02665a58
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591120
        ;   Label: wincore_winvideo.cpp_toggleMoviePlayback_FUN_00591120
    PUSH EDI                            ; 00591121
    MOV EDX,dword ptr [ESP + 0xc]       ; 00591122
    CMP dword ptr [0x02665a4c],0x0      ; 00591126 | DAT_02665a4c
    SETZ AL                             ; 0059112d
    AND EAX,0xff                        ; 00591130
    MOV EBX,dword ptr [ESP + 0x10]      ; 00591135
    MOV [0x02665a4c],EAX                ; 00591139 | DAT_02665a4c
    TEST EBX,EBX                        ; 0059113e
    JZ 0x00591164                       ; 00591140
        ;   XREF to: 00591164 (CONDITIONAL_JUMP)  ; LAB_00591164
    TEST EAX,EAX                        ; 00591142
    JZ 0x0059116a                       ; 00591144
        ;   XREF to: 0059116a (CONDITIONAL_JUMP)  ; LAB_0059116a
    MOV EDI,dword ptr [0x02665a58]      ; 00591146 | DAT_02665a58
    TEST EDI,EDI                        ; 0059114c
    JZ 0x00591177                       ; 0059114e
        ;   XREF to: 00591177 (CONDITIONAL_JUMP)  ; LAB_00591177
    PUSH EDX                            ; 00591150
    PUSH 0x0                            ; 00591151
    PUSH 0x0                            ; 00591153
    PUSH 0x5eec71                       ; 00591155
    CALL dword ptr CS:[0x5c8440]        ; 0059115a
        ;   Label: LAB_0059115a
    POP EDI                             ; 00591161
    POP EBX                             ; 00591162
    RET                                 ; 00591163
    MOV dword ptr [0x02665a4c],EBX      ; 00591164 | DAT_02665a4c
        ;   Label: LAB_00591164
    PUSH 0x0                            ; 0059116a
        ;   Label: LAB_0059116a
    PUSH 0x0                            ; 0059116c
    PUSH 0x0                            ; 0059116e
    PUSH 0x5eeca3                       ; 00591170
    JMP 0x0059115a                      ; 00591175
        ;   XREF to: 0059115a (UNCONDITIONAL_JUMP)  ; LAB_0059115a
    PUSH EDX                            ; 00591177
        ;   Label: LAB_00591177
    PUSH EDI                            ; 00591178
    PUSH EDI                            ; 00591179
    PUSH 0x5eec8c                       ; 0059117a
    CALL dword ptr CS:[0x5c8440]        ; 0059117f
    POP EDI                             ; 00591186
    POP EBX                             ; 00591187
    RET                                 ; 00591188

