; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_drawScreenBorder_FUN_0049a960(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049cff1
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004015a0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0049a960
        ;   Label: core_game.cpp_CGame_drawScreenBorder_FUN_0049a960
    MOV EAX,[0x005b761c]                ; 0049a962 | g_WindowWidth
    PUSH EDX                            ; 0049a967
    DEC EAX                             ; 0049a968
    PUSH EAX                            ; 0049a969
    PUSH EDX                            ; 0049a96a
    PUSH EDX                            ; 0049a96b
    MOV dword ptr [0x01c00c70],EDX      ; 0049a96c | DAT_01c00c70
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a972
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0049a977
    MOV EAX,[0x005b761c]                ; 0049a97a | g_WindowWidth
    PUSH 0x1                            ; 0049a97f
    SUB EAX,0x2                         ; 0049a981
    PUSH EAX                            ; 0049a984
    PUSH 0x1                            ; 0049a985
    PUSH 0x1                            ; 0049a987
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a989
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x005b7620]                ; 0049a98e | g_WindowHeight
    ADD ESP,0x10                        ; 0049a993
    DEC EAX                             ; 0049a996
    MOV EDX,dword ptr [0x005b761c]      ; 0049a997 | g_WindowWidth
    PUSH EAX                            ; 0049a99d
    DEC EDX                             ; 0049a99e
    PUSH EDX                            ; 0049a99f
    PUSH EAX                            ; 0049a9a0
    PUSH 0x0                            ; 0049a9a1
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a9a3
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x005b7620]                ; 0049a9a8 | g_WindowHeight
    ADD ESP,0x10                        ; 0049a9ad
    SUB EAX,0x2                         ; 0049a9b0
    MOV EDX,dword ptr [0x005b761c]      ; 0049a9b3 | g_WindowWidth
    PUSH EAX                            ; 0049a9b9
    SUB EDX,0x2                         ; 0049a9ba
    PUSH EDX                            ; 0049a9bd
    PUSH EAX                            ; 0049a9be
    PUSH 0x1                            ; 0049a9bf
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a9c1
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x005b7620]                ; 0049a9c6 | g_WindowHeight
    ADD ESP,0x10                        ; 0049a9cb
    SUB EAX,0x2                         ; 0049a9ce
    PUSH EAX                            ; 0049a9d1
    PUSH 0x0                            ; 0049a9d2
    PUSH 0x1                            ; 0049a9d4
    PUSH 0x0                            ; 0049a9d6
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a9d8
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x005b7620]                ; 0049a9dd | g_WindowHeight
    ADD ESP,0x10                        ; 0049a9e2
    SUB EAX,0x3                         ; 0049a9e5
    PUSH EAX                            ; 0049a9e8
    PUSH 0x1                            ; 0049a9e9
    PUSH 0x2                            ; 0049a9eb
    PUSH 0x1                            ; 0049a9ed
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049a9ef
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x005b7620]                ; 0049a9f4 | g_WindowHeight
    ADD ESP,0x10                        ; 0049a9f9
    SUB EAX,0x2                         ; 0049a9fc
    PUSH EAX                            ; 0049a9ff
    MOV EAX,[0x005b761c]                ; 0049aa00 | g_WindowWidth
    DEC EAX                             ; 0049aa05
    PUSH EAX                            ; 0049aa06
    PUSH 0x1                            ; 0049aa07
    PUSH EAX                            ; 0049aa09
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049aa0a
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,[0x005b7620]                ; 0049aa0f | g_WindowHeight
    ADD ESP,0x10                        ; 0049aa14
    SUB EAX,0x3                         ; 0049aa17
    PUSH EAX                            ; 0049aa1a
    MOV EAX,[0x005b761c]                ; 0049aa1b | g_WindowWidth
    SUB EAX,0x2                         ; 0049aa20
    PUSH EAX                            ; 0049aa23
    PUSH 0x2                            ; 0049aa24
    PUSH EAX                            ; 0049aa26
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049aa27
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0049aa2c
    RET                                 ; 0049aa2f

