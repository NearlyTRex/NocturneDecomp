; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_draw3DBorder_FUN_00476260(int left,int top,int width,int height,int border_style_flag)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   border_style_flag
;
; XREF[3]:
;   shape_edittool.cpp_CEdCheck_render_FUN_00477390 at 00477436
;   shape_edittool.cpp_CEdScrollBar_render_FUN_00476580 at 00476615
;   shape_edittool.cpp_FUN_00476f40 at 00476f5c
;
; Referenced Globals:
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00403bd0
;   engine_2d.c_drawVLine_FUN_00403ce0
;   engine_2d.c_fillRectColor_FUN_00403e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476260
        ;   Label: shape_edittool.cpp_draw3DBorder_FUN_00476260
    PUSH ESI                            ; 00476261
    PUSH EDI                            ; 00476262
    PUSH EBP                            ; 00476263
    MOV EDI,dword ptr [ESP + 0x14]      ; 00476264
    MOV EBP,dword ptr [ESP + 0x18]      ; 00476268
    MOV ESI,dword ptr [ESP + 0x24]      ; 0047626c
    TEST ESI,ESI                        ; 00476270
    JZ 0x004762f5                       ; 00476272
        ;   XREF to: 004762f5 (CONDITIONAL_JUMP)  ; LAB_004762f5
    MOV EBX,0xf8                        ; 00476278
    MOV dword ptr [0x01c00c70],EBX      ; 0047627d | DAT_01c00c70
        ;   Label: LAB_0047627d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00476283
    DEC EBX                             ; 00476287
    PUSH EBX                            ; 00476288
    PUSH EBP                            ; 00476289
    PUSH EDI                            ; 0047628a
    CALL engine_2d.c_drawHLine_FUN_00403bd0 ; 0047628b
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00403bd0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 00476290
    MOV EBX,dword ptr [ESP + 0x20]      ; 00476293
    DEC EBX                             ; 00476297
    PUSH EBX                            ; 00476298
    PUSH EBP                            ; 00476299
    PUSH EDI                            ; 0047629a
    CALL engine_2d.c_drawVLine_FUN_00403ce0 ; 0047629b
        ;   XREF to: 00403ce0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403ce0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004762a0
    TEST ESI,ESI                        ; 004762a3
    JZ 0x004762fc                       ; 004762a5
        ;   XREF to: 004762fc (CONDITIONAL_JUMP)  ; LAB_004762fc
    MOV EBX,0xff                        ; 004762a7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004762ac
        ;   Label: LAB_004762ac
    MOV dword ptr [0x01c00c70],EBX      ; 004762b0 | DAT_01c00c70
    DEC ESI                             ; 004762b6
    MOV EBX,dword ptr [ESP + 0x20]      ; 004762b7
    PUSH ESI                            ; 004762bb
    DEC EBX                             ; 004762bc
    PUSH EBX                            ; 004762bd
    PUSH EDI                            ; 004762be
    CALL engine_2d.c_drawHLine_FUN_00403bd0 ; 004762bf
        ;   XREF to: 00403bd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawHLine_FUN_00403bd0(int x1, int y, int x2)
    ADD ESP,0xc                         ; 004762c4
    PUSH EBX                            ; 004762c7
    PUSH EBP                            ; 004762c8
    PUSH ESI                            ; 004762c9
    CALL engine_2d.c_drawVLine_FUN_00403ce0 ; 004762ca
        ;   XREF to: 00403ce0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawVLine_FUN_00403ce0(int x, int y1, int y2)
    ADD ESP,0xc                         ; 004762cf
    MOV EBX,dword ptr [ESP + 0x20]      ; 004762d2
    PUSH 0x7                            ; 004762d6
    SUB EBX,0x2                         ; 004762d8
    PUSH EBX                            ; 004762db
    MOV EBX,dword ptr [ESP + 0x24]      ; 004762dc
    SUB EBX,0x2                         ; 004762e0
    PUSH EBX                            ; 004762e3
    INC EBP                             ; 004762e4
    PUSH EBP                            ; 004762e5
    INC EDI                             ; 004762e6
    PUSH EDI                            ; 004762e7
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004762e8
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004762ed
    POP EBP                             ; 004762f0
    POP EDI                             ; 004762f1
    POP ESI                             ; 004762f2
    POP EBX                             ; 004762f3
    RET                                 ; 004762f4
    MOV EBX,0xff                        ; 004762f5
        ;   Label: LAB_004762f5
    JMP 0x0047627d                      ; 004762fa
        ;   XREF to: 0047627d (UNCONDITIONAL_JUMP)  ; LAB_0047627d
    MOV EBX,0xf8                        ; 004762fc
        ;   Label: LAB_004762fc
    JMP 0x004762ac                      ; 00476301
        ;   XREF to: 004762ac (UNCONDITIONAL_JUMP)  ; LAB_004762ac

