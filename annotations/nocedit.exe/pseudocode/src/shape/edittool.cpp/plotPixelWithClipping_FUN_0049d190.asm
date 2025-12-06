; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_plotPixelWithClipping_FUN_0049d190(int x_coord, int y_coord, int use_clipping)
;
; Parameters:
; int              Stack[0x4]:4   x_coord
; int              Stack[0x8]:4   y_coord
; int              Stack[0xc]:4   use_clipping
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049d190
        ;   Label: shape_edittool.cpp_plotPixelWithClipping_FUN_0049d190
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049d194
    TEST EDX,EDX                        ; 0049d198
    JL 0x0049d1d7                       ; 0049d19a | LAB_0049d1d7
        ;   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 0049d19c
    JL 0x0049d1d7                       ; 0049d19e | LAB_0049d1d7
        ;   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679394]      ; 0049d1a0 | int g_WindowWidth
    JGE 0x0049d1d7                      ; 0049d1a6 | LAB_0049d1d7
        ;   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679398]      ; 0049d1a8 | int g_WindowHeight
    JGE 0x0049d1d7                      ; 0049d1ae | LAB_0049d1d7
        ;   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0xc],0x0       ; 0049d1b0
    JZ 0x0049d1d8                       ; 0049d1b5 | LAB_0049d1d8
        ;   XREF to: 0049d1d8 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x02d02558]      ; 0049d1b7 | int g_ClipLeft
    JL 0x0049d1d7                       ; 0049d1bd | LAB_0049d1d7
        ;   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x02d02560]      ; 0049d1bf | int g_ClipRight
    JGE 0x0049d1d7                      ; 0049d1c5 | LAB_0049d1d7
        ;   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d0255c]      ; 0049d1c7 | int g_ClipTop
    JL 0x0049d1d7                       ; 0049d1cd | LAB_0049d1d7
        ;   XREF to: 0049d1d7 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x02d02564]      ; 0049d1cf | int g_ClipBottom
    JL 0x0049d1d8                       ; 0049d1d5 | LAB_0049d1d8
        ;   XREF to: 0049d1d8 (CONDITIONAL_JUMP)
    RET                                 ; 0049d1d7
        ;   Label: LAB_0049d1d7
    PUSH EAX                            ; 0049d1d8
        ;   Label: LAB_0049d1d8
    PUSH EDX                            ; 0049d1d9
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0049d1da | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0049d1df
    RET                                 ; 0049d1e2

