; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_draw3DBorder_FUN_004a58f0(int left,int top,int width,int height,int border_style_flag)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   border_style_flag
;
; XREF[3]:
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 at 004a6610
;   shape_edittool.cpp_CEdCheck_render_FUN_004a6c00 at 004a6ca6
;   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 at 004a5de3
;
; Referenced Globals:
;   int g_ButtonFaceColor
;   int g_HighlightColor
;   int g_BackgroundColor2
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402ee0
;   engine_2d.c_drawVLine_FUN_00402ff0
;   engine_2d.c_fillRectColor_FUN_00403170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a58f0
        ;   Label: shape_edittool.cpp_draw3DBorder_FUN_004a58f0
    PUSH ESI                            ; 004a58f1
    PUSH EDI                            ; 004a58f2
    PUSH EBP                            ; 004a58f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a58f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a58f8
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a58fc
    TEST ESI,ESI                        ; 004a5900
    JZ 0x004a598c                       ; 004a5902
        ;   XREF to: 004a598c (CONDITIONAL_JUMP)  ; LAB_004a598c
    MOV EBX,dword ptr [0x02cf2af4]      ; 004a5908 | g_BackgroundColor2
    MOV dword ptr [0x02d02570],EBX      ; 004a590e | g_ActiveRenderColor
        ;   Label: LAB_004a590e
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a5914
    DEC EBX                             ; 004a5918
    PUSH EBX                            ; 004a5919
    PUSH EDI                            ; 004a591a
    PUSH EBP                            ; 004a591b
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a591c
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004a5921
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a5924
    DEC EBX                             ; 004a5928
    PUSH EBX                            ; 004a5929
    PUSH EDI                            ; 004a592a
    PUSH EBP                            ; 004a592b
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 004a592c
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004a5931
    TEST ESI,ESI                        ; 004a5934
    JZ 0x004a5997                       ; 004a5936
        ;   XREF to: 004a5997 (CONDITIONAL_JUMP)  ; LAB_004a5997
    MOV EBX,dword ptr [0x02cf2af0]      ; 004a5938 | g_HighlightColor
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a593e
        ;   Label: LAB_004a593e
    MOV dword ptr [0x02d02570],EBX      ; 004a5942 | g_ActiveRenderColor
    DEC ESI                             ; 004a5948
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a5949
    PUSH ESI                            ; 004a594d
    DEC EBX                             ; 004a594e
    PUSH EBX                            ; 004a594f
    PUSH EBP                            ; 004a5950
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a5951
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004a5956
    PUSH EBX                            ; 004a5959
    PUSH EDI                            ; 004a595a
    PUSH ESI                            ; 004a595b
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 004a595c
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004a5961
    MOV EDX,dword ptr [0x02cf2ae4]      ; 004a5964 | g_ButtonFaceColor
    MOV EBX,dword ptr [ESP + 0x20]      ; 004a596a
    PUSH EDX                            ; 004a596e
    SUB EBX,0x2                         ; 004a596f
    PUSH EBX                            ; 004a5972
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a5973
    SUB EBX,0x2                         ; 004a5977
    PUSH EBX                            ; 004a597a
    INC EDI                             ; 004a597b
    PUSH EDI                            ; 004a597c
    INC EBP                             ; 004a597d
    PUSH EBP                            ; 004a597e
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004a597f
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004a5984
    POP EBP                             ; 004a5987
    POP EDI                             ; 004a5988
    POP ESI                             ; 004a5989
    POP EBX                             ; 004a598a
    RET                                 ; 004a598b
    MOV EBX,dword ptr [0x02cf2af0]      ; 004a598c | g_HighlightColor
        ;   Label: LAB_004a598c
    JMP 0x004a590e                      ; 004a5992
        ;   XREF to: 004a590e (UNCONDITIONAL_JUMP)  ; LAB_004a590e
    MOV EBX,dword ptr [0x02cf2af4]      ; 004a5997 | g_BackgroundColor2
        ;   Label: LAB_004a5997
    JMP 0x004a593e                      ; 004a599d
        ;   XREF to: 004a593e (UNCONDITIONAL_JUMP)  ; LAB_004a593e

