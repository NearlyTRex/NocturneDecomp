; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_fillRectWithBorder_FUN_00403200(int x1,int y1,int x2,int y2,int fill_color,int border_color)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; int              Stack[0x14]:4   fill_color
; int              Stack[0x18]:4   border_color
;
; XREF[8]:
;   core_actor.cpp_CActorPropertyList_render_FUN_0040e850 at 0040e910
;   core_game.cpp_CGame_renderOverlay_FUN_004d8040 at 004d8328
;   core_game.cpp_drawHealthBar_FUN_004d7fa0 at 004d7fec
;   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 at 0051090a
;   core_msnedit.cpp_FUN_00536e20 at 00536ef9
;   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 at 004a5c4b
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 at 004a104c
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 at 004a0676
;
; Referenced Globals:
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawRect_FUN_00403120
;   engine_2d.c_fillRectColor_FUN_00403170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403200
        ;   Label: engine_2d.c_fillRectWithBorder_FUN_00403200
    PUSH ESI                            ; 00403201
    PUSH EDI                            ; 00403202
    MOV EDX,dword ptr [ESP + 0x20]      ; 00403203
    PUSH EDX                            ; 00403207
    MOV ECX,dword ptr [ESP + 0x20]      ; 00403208
    PUSH ECX                            ; 0040320c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0040320d
    PUSH EBX                            ; 00403211
    MOV ESI,dword ptr [ESP + 0x20]      ; 00403212
    PUSH ESI                            ; 00403216
    MOV EDI,dword ptr [ESP + 0x20]      ; 00403217
    PUSH EDI                            ; 0040321b
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 0040321c
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00403221
    MOV EAX,dword ptr [ESP + 0x24]      ; 00403224
    MOV EBX,dword ptr [0x02d02570]      ; 00403228 | g_ActiveRenderColor
    MOV [0x02d02570],EAX                ; 0040322e | g_ActiveRenderColor
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403233
    INC EAX                             ; 00403237
    PUSH EAX                            ; 00403238
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00403239
    INC EAX                             ; 0040323d
    PUSH EAX                            ; 0040323e
    LEA EAX,[ESI + -0x1]                ; 0040323f
    PUSH EAX                            ; 00403242
    LEA EAX,[EDI + -0x1]                ; 00403243
    PUSH EAX                            ; 00403246
    CALL engine_2d.c_drawRect_FUN_00403120 ; 00403247
        ;   XREF to: 00403120 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawRect_FUN_00403120(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0040324c
    MOV dword ptr [0x02d02570],EBX      ; 0040324f | g_ActiveRenderColor
    POP EDI                             ; 00403255
    POP ESI                             ; 00403256
    POP EBX                             ; 00403257
    RET                                 ; 00403258

