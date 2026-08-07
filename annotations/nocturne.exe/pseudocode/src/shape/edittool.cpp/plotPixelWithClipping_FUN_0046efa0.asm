; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_plotPixelWithClipping_FUN_0046efa0(int x_coord,int y_coord,int use_clipping)
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
;   engine_2d.c_plotPixel_FUN_00401530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046efa0
        ;   Label: shape_edittool.cpp_plotPixelWithClipping_FUN_0046efa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046efa4
    TEST EDX,EDX                        ; 0046efa8
    JL 0x0046efe7                       ; 0046efaa
        ;   XREF to: 0046efe7 (CONDITIONAL_JUMP)  ; LAB_0046efe7
    TEST EAX,EAX                        ; 0046efac
    JL 0x0046efe7                       ; 0046efae
        ;   XREF to: 0046efe7 (CONDITIONAL_JUMP)  ; LAB_0046efe7
    CMP EDX,dword ptr [0x005b761c]      ; 0046efb0 | g_WindowWidth
    JGE 0x0046efe7                      ; 0046efb6
        ;   XREF to: 0046efe7 (CONDITIONAL_JUMP)  ; LAB_0046efe7
    CMP EAX,dword ptr [0x005b7620]      ; 0046efb8 | g_WindowHeight
    JGE 0x0046efe7                      ; 0046efbe
        ;   XREF to: 0046efe7 (CONDITIONAL_JUMP)  ; LAB_0046efe7
    CMP dword ptr [ESP + 0xc],0x0       ; 0046efc0
    JZ 0x0046efe8                       ; 0046efc5
        ;   XREF to: 0046efe8 (CONDITIONAL_JUMP)  ; LAB_0046efe8
    CMP EDX,dword ptr [0x01c00c58]      ; 0046efc7 | g_ClipLeft
    JL 0x0046efe7                       ; 0046efcd
        ;   XREF to: 0046efe7 (CONDITIONAL_JUMP)  ; LAB_0046efe7
    CMP EDX,dword ptr [0x01c00c60]      ; 0046efcf | g_ClipRight
    JGE 0x0046efe7                      ; 0046efd5
        ;   XREF to: 0046efe7 (CONDITIONAL_JUMP)  ; LAB_0046efe7
    CMP EAX,dword ptr [0x01c00c5c]      ; 0046efd7 | g_ClipTop
    JL 0x0046efe7                       ; 0046efdd
        ;   XREF to: 0046efe7 (CONDITIONAL_JUMP)  ; LAB_0046efe7
    CMP EAX,dword ptr [0x01c00c64]      ; 0046efdf | g_ClipBottom
    JL 0x0046efe8                       ; 0046efe5
        ;   XREF to: 0046efe8 (CONDITIONAL_JUMP)  ; LAB_0046efe8
    RET                                 ; 0046efe7
        ;   Label: LAB_0046efe7
    PUSH EAX                            ; 0046efe8
        ;   Label: LAB_0046efe8
    PUSH EDX                            ; 0046efe9
    CALL engine_2d.c_plotPixel_FUN_00401530 ; 0046efea
        ;   XREF to: 00401530 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401530(int x, int y)
    ADD ESP,0x8                         ; 0046efef
    RET                                 ; 0046eff2

