; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawTextCenteredColor_FUN_004026c0(char * text, int left_x, int right_x, int y_pos)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   left_x
; int              Stack[0xc]:4   right_x
; int              Stack[0x10]:4   y_pos
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 004893a1
;   engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730 at 0040278a
;   engine_2d.c_drawTextCenteredXYColor_FUN_00402700 at 00402716
;
; Called Functions:
;   engine_2d.c_drawTextColor_FUN_00402430
;   engine_2d.c_getStringWidth_FUN_004018a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004026c0
        ;   Label: engine_2d.c_drawTextCenteredColor_FUN_004026c0
    PUSH ESI                            ; 004026c1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004026c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004026c6
    PUSH EDX                            ; 004026ca
    MOV ESI,dword ptr [ESP + 0x10]      ; 004026cb
    MOV ECX,dword ptr [ESP + 0x18]      ; 004026cf
    PUSH ESI                            ; 004026d3
    ADD EBX,ECX                         ; 004026d4
    CALL engine_2d.c_getStringWidth_FUN_004018a0 ; 004026d6
        ;   XREF to: 004018a0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018a0(char * text)
    LEA EDX,[EBX + 0x1]                 ; 004026db
    SUB EDX,EAX                         ; 004026de
    INC EDX                             ; 004026e0
    MOV EAX,EDX                         ; 004026e1
    SAR EDX,0x1f                        ; 004026e3
    SUB EAX,EDX                         ; 004026e6
    SAR EAX,0x1                         ; 004026e8
    ADD ESP,0x4                         ; 004026ea
    PUSH EAX                            ; 004026ed
    PUSH ESI                            ; 004026ee
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 004026ef
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 004026f4
    POP ESI                             ; 004026f7
    POP EBX                             ; 004026f8
    RET                                 ; 004026f9

