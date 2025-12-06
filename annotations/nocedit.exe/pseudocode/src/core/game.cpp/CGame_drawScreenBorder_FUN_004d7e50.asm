; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da4e3
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011b0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004d7e50
        ;   Label: core_game.cpp_CGame_drawScreenBorder_FUN_004d7e50
    MOV EAX,[0x00679394]                ; 004d7e52 | int g_WindowWidth
    PUSH EDX                            ; 004d7e57
    DEC EAX                             ; 004d7e58
    PUSH EAX                            ; 004d7e59
    PUSH EDX                            ; 004d7e5a
    PUSH EDX                            ; 004d7e5b
    MOV dword ptr [0x02d02570],EDX      ; 004d7e5c | int g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d7e62 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d7e67
    MOV EAX,[0x00679394]                ; 004d7e6a | int g_WindowWidth
    PUSH 0x1                            ; 004d7e6f
    SUB EAX,0x2                         ; 004d7e71
    PUSH EAX                            ; 004d7e74
    PUSH 0x1                            ; 004d7e75
    PUSH 0x1                            ; 004d7e77
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d7e79 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 004d7e7e | int g_WindowHeight
    ADD ESP,0x10                        ; 004d7e83
    DEC EAX                             ; 004d7e86
    MOV EDX,dword ptr [0x00679394]      ; 004d7e87 | int g_WindowWidth
    PUSH EAX                            ; 004d7e8d
    DEC EDX                             ; 004d7e8e
    PUSH EDX                            ; 004d7e8f
    PUSH EAX                            ; 004d7e90
    PUSH 0x0                            ; 004d7e91
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d7e93 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 004d7e98 | int g_WindowHeight
    ADD ESP,0x10                        ; 004d7e9d
    SUB EAX,0x2                         ; 004d7ea0
    MOV EDX,dword ptr [0x00679394]      ; 004d7ea3 | int g_WindowWidth
    PUSH EAX                            ; 004d7ea9
    SUB EDX,0x2                         ; 004d7eaa
    PUSH EDX                            ; 004d7ead
    PUSH EAX                            ; 004d7eae
    PUSH 0x1                            ; 004d7eaf
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d7eb1 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 004d7eb6 | int g_WindowHeight
    ADD ESP,0x10                        ; 004d7ebb
    SUB EAX,0x2                         ; 004d7ebe
    PUSH EAX                            ; 004d7ec1
    PUSH 0x0                            ; 004d7ec2
    PUSH 0x1                            ; 004d7ec4
    PUSH 0x0                            ; 004d7ec6
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d7ec8 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 004d7ecd | int g_WindowHeight
    ADD ESP,0x10                        ; 004d7ed2
    SUB EAX,0x3                         ; 004d7ed5
    PUSH EAX                            ; 004d7ed8
    PUSH 0x1                            ; 004d7ed9
    PUSH 0x2                            ; 004d7edb
    PUSH 0x1                            ; 004d7edd
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d7edf | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 004d7ee4 | int g_WindowHeight
    ADD ESP,0x10                        ; 004d7ee9
    SUB EAX,0x2                         ; 004d7eec
    PUSH EAX                            ; 004d7eef
    MOV EAX,[0x00679394]                ; 004d7ef0 | int g_WindowWidth
    DEC EAX                             ; 004d7ef5
    PUSH EAX                            ; 004d7ef6
    PUSH 0x1                            ; 004d7ef7
    PUSH EAX                            ; 004d7ef9
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d7efa | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x00679398]                ; 004d7eff | int g_WindowHeight
    ADD ESP,0x10                        ; 004d7f04
    SUB EAX,0x3                         ; 004d7f07
    PUSH EAX                            ; 004d7f0a
    MOV EAX,[0x00679394]                ; 004d7f0b | int g_WindowWidth
    SUB EAX,0x2                         ; 004d7f10
    PUSH EAX                            ; 004d7f13
    PUSH 0x2                            ; 004d7f14
    PUSH EAX                            ; 004d7f16
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d7f17 | void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004d7f1c
    RET                                 ; 004d7f1f

