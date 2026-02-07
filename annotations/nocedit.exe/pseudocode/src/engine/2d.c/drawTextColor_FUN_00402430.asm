; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_drawTextColor_FUN_00402430(char *text,int x,int y)
;
; Parameters:
; char *           Stack[0x4]:4   text
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; XREF[13]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 at 00489339
;   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0 at 0040261b
;   engine_2d.c_drawTextCenteredColor_FUN_004026c0 at 004026ef
;   engine_2d.c_drawTextColorFormatted_FUN_004024c0 at 00402511
;   engine_2d.c_drawTextColorWrapper_FUN_004024a0 at 004024b0
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402530 at 00402552
;   shape_design.c_displayPalette_FUN_00461560 at 004615fe
;   shape_design.c_findClosestPolygonToMouse_FUN_00466250 at 004665f5
;   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 at 00464b68
;   shape_design.c_polygonToolModeManager_FUN_00464c90 at 004650bb
;   ... and 3 more
;
; Referenced Globals:
;   int g_TextWrapEnabled = 0x1
;   int g_CurrentTextColor = 0xf8
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   engine_2d.c_drawTextMultilineColor_FUN_00401f40
;   engine_2d.c_drawTextWrappedColor_FUN_00401eb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00402430
        ;   Label: engine_2d.c_drawTextColor_FUN_00402430
    PUSH EDI                            ; 00402431
    PUSH EBP                            ; 00402432
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402433
    MOV EAX,dword ptr [ESP + 0x14]      ; 00402437
    MOV ECX,dword ptr [ESP + 0x18]      ; 0040243b
    CMP dword ptr [0x0066df74],0x0      ; 0040243f | g_TextWrapEnabled
    JZ 0x0040246e                       ; 00402446
        ;   XREF to: 0040246e (CONDITIONAL_JUMP)  ; LAB_0040246e
    PUSH EBX                            ; 00402448
    MOV EBX,dword ptr [0x0066df78]      ; 00402449 | g_CurrentTextColor
    PUSH EBX                            ; 0040244f
    MOV ESI,dword ptr [0x02d02564]      ; 00402450 | g_ClipBottom
    PUSH ESI                            ; 00402456
    MOV EDI,dword ptr [0x02d02560]      ; 00402457 | g_ClipRight
    PUSH EDI                            ; 0040245d
    PUSH ECX                            ; 0040245e
    PUSH EAX                            ; 0040245f
    PUSH EDX                            ; 00402460
    CALL engine_2d.c_drawTextWrappedColor_FUN_00401eb0 ; 00402461
        ;   XREF to: 00401eb0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextWrappedColor_FUN_00401eb0(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x18                        ; 00402466
    POP EBX                             ; 00402469
    POP EBP                             ; 0040246a
    POP EDI                             ; 0040246b
    POP ESI                             ; 0040246c
    RET                                 ; 0040246d
    MOV ESI,dword ptr [0x0066df78]      ; 0040246e | g_CurrentTextColor
        ;   Label: LAB_0040246e
    PUSH ESI                            ; 00402474
    MOV EDI,dword ptr [0x02d02564]      ; 00402475 | g_ClipBottom
    PUSH EDI                            ; 0040247b
    MOV EBP,dword ptr [0x02d02560]      ; 0040247c | g_ClipRight
    PUSH EBP                            ; 00402482
    PUSH ECX                            ; 00402483
    PUSH EAX                            ; 00402484
    PUSH EDX                            ; 00402485
    CALL engine_2d.c_drawTextMultilineColor_FUN_00401f40 ; 00402486
        ;   XREF to: 00401f40 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextMultilineColor_FUN_00401f40(char * text, int x_start, int y_start, int x_max, ...)
    ADD ESP,0x18                        ; 0040248b
    POP EBP                             ; 0040248e
    POP EDI                             ; 0040248f
    POP ESI                             ; 00402490
    RET                                 ; 00402491

