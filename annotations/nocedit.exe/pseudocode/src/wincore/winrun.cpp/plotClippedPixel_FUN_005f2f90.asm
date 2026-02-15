; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_plotClippedPixel_FUN_005f2f90(int x_coord,int y_coord)
;
; Parameters:
; int              Stack[0x4]:4   x_coord
; int              Stack[0x8]:4   y_coord
;
; Referenced Globals:
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

    MOV EDX,dword ptr [ESP + 0x4]       ; 005f2f90
        ;   Label: wincore_winrun.cpp_plotClippedPixel_FUN_005f2f90
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f2f94
    CMP EDX,dword ptr [0x02d02558]      ; 005f2f98 | g_ClipLeft
    JLE 0x005f2fb8                      ; 005f2f9e
        ;   XREF to: 005f2fb8 (CONDITIONAL_JUMP)  ; LAB_005f2fb8
    CMP EAX,dword ptr [0x02d0255c]      ; 005f2fa0 | g_ClipTop
    JLE 0x005f2fb8                      ; 005f2fa6
        ;   XREF to: 005f2fb8 (CONDITIONAL_JUMP)  ; LAB_005f2fb8
    CMP EDX,dword ptr [0x02d02560]      ; 005f2fa8 | g_ClipRight
    JGE 0x005f2fb8                      ; 005f2fae
        ;   XREF to: 005f2fb8 (CONDITIONAL_JUMP)  ; LAB_005f2fb8
    CMP EAX,dword ptr [0x02d02564]      ; 005f2fb0 | g_ClipBottom
    JL 0x005f2fb9                       ; 005f2fb6
        ;   XREF to: 005f2fb9 (CONDITIONAL_JUMP)  ; LAB_005f2fb9
    RET                                 ; 005f2fb8
        ;   Label: LAB_005f2fb8
    PUSH EAX                            ; 005f2fb9
        ;   Label: LAB_005f2fb9
    PUSH EDX                            ; 005f2fba
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 005f2fbb
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 005f2fc0
    RET                                 ; 005f2fc3

