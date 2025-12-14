; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900(int x, int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00409900
        ;   Label: core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900
    MOV EDX,dword ptr [ESP + 0x8]       ; 00409904
    TEST EAX,EAX                        ; 00409908
    JL 0x00409920                       ; 0040990a
        ;   XREF to: 00409920 (CONDITIONAL_JUMP)  ; LAB_00409920
    TEST EDX,EDX                        ; 0040990c
    JL 0x00409920                       ; 0040990e
        ;   XREF to: 00409920 (CONDITIONAL_JUMP)  ; LAB_00409920
    CMP EAX,dword ptr [0x00679394]      ; 00409910 | g_WindowWidth
    JGE 0x00409920                      ; 00409916
        ;   XREF to: 00409920 (CONDITIONAL_JUMP)  ; LAB_00409920
    CMP EDX,dword ptr [0x00679398]      ; 00409918 | g_WindowHeight
    JL 0x00409921                       ; 0040991e
        ;   XREF to: 00409921 (CONDITIONAL_JUMP)  ; LAB_00409921
    RET                                 ; 00409920
        ;   Label: LAB_00409920
    PUSH EDX                            ; 00409921
        ;   Label: LAB_00409921
    PUSH EAX                            ; 00409922
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409923
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409928
    RET                                 ; 0040992b

