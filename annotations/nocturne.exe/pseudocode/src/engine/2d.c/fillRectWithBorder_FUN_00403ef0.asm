; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403ef0(int x1,int y1,int x2,int y2,int fill_color,int border_color)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; int              Stack[0x14]:4   fill_color
; int              Stack[0x18]:4   border_color
;
; XREF[6]:
;   core_game.cpp_CGame_renderOverlay_FUN_0049ab50 at 0049ae38
;   core_game.cpp_drawHealthBar_FUN_0049aab0 at 0049aafc
;   core_menu.cpp_adjustMouseSensitivity_FUN_004cfbc0 at 004cfd0a
;   shape_edittool.cpp_CEdScrollBar_render_FUN_00476580 at 004765b1
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760 at 004718ab
;   shape_edittool.cpp_FUN_004722b0 at 0047237b
;
; Referenced Globals:
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   engine_2d.c_drawRect_FUN_00403e10
;   engine_2d.c_fillRectColor_FUN_00403e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403ef0
        ;   Label: engine_2d.c_fillRectWithBorder_FUN_00403ef0
    PUSH ESI                            ; 00403ef1
    PUSH EDI                            ; 00403ef2
    MOV EDX,dword ptr [ESP + 0x20]      ; 00403ef3
    PUSH EDX                            ; 00403ef7
    MOV ECX,dword ptr [ESP + 0x20]      ; 00403ef8
    PUSH ECX                            ; 00403efc
    MOV EBX,dword ptr [ESP + 0x20]      ; 00403efd
    PUSH EBX                            ; 00403f01
    MOV ESI,dword ptr [ESP + 0x20]      ; 00403f02
    PUSH ESI                            ; 00403f06
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403f07
    PUSH EDI                            ; 00403f0b
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 00403f0c
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00403f11
    MOV EAX,dword ptr [ESP + 0x24]      ; 00403f14
    MOV EBX,dword ptr [0x01c00c70]      ; 00403f18 | DAT_01c00c70
    MOV [0x01c00c70],EAX                ; 00403f1e | DAT_01c00c70
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403f23
    INC EAX                             ; 00403f27
    PUSH EAX                            ; 00403f28
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403f29
    INC EAX                             ; 00403f2d
    PUSH EAX                            ; 00403f2e
    LEA EAX,[ESI + -0x1]                ; 00403f2f
    PUSH EAX                            ; 00403f32
    LEA EAX,[EDI + -0x1]                ; 00403f33
    PUSH EAX                            ; 00403f36
    CALL engine_2d.c_drawRect_FUN_00403e10 ; 00403f37
        ;   XREF to: 00403e10 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawRect_FUN_00403e10(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00403f3c
    MOV dword ptr [0x01c00c70],EBX      ; 00403f3f | DAT_01c00c70
    POP EDI                             ; 00403f45
    POP ESI                             ; 00403f46
    POP EBX                             ; 00403f47
    RET                                 ; 00403f48

