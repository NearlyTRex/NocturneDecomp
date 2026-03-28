; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0(CDrawSurface *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_00488550 at 004885b0
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0 at 0048861c
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530 at 00488542
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110
;   cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004884d0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
    PUSH ESI                            ; 004884d1
    PUSH EDI                            ; 004884d2
    PUSH EBP                            ; 004884d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004884d4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004884d8
    MOV ESI,dword ptr [ESP + 0x20]      ; 004884dc
    MOV EDI,dword ptr [ESP + 0x24]      ; 004884e0
    PUSH ESI                            ; 004884e4
    PUSH EBP                            ; 004884e5
    MOV EDX,dword ptr [ESP + 0x20]      ; 004884e6
    PUSH EDX                            ; 004884ea
    PUSH EBX                            ; 004884eb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 ; 004884ec
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(CDrawSurface * this_ptr, int start_x, int y, int end_x)
    ADD ESP,0x10                        ; 004884f1
    PUSH ESI                            ; 004884f4
    PUSH EDI                            ; 004884f5
    MOV ECX,dword ptr [ESP + 0x20]      ; 004884f6
    PUSH ECX                            ; 004884fa
    PUSH EBX                            ; 004884fb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 ; 004884fc
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110(CDrawSurface * this_ptr, int start_x, int y, int end_x)
    ADD ESP,0x10                        ; 00488501
    PUSH EDI                            ; 00488504
    PUSH EBP                            ; 00488505
    MOV EAX,dword ptr [ESP + 0x20]      ; 00488506
    PUSH EAX                            ; 0048850a
    PUSH EBX                            ; 0048850b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230 ; 0048850c
        ;   XREF to: 00488230 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230(CDrawSurface * this_ptr, int x, int start_y, int end_y)
    ADD ESP,0x10                        ; 00488511
    PUSH EDI                            ; 00488514
    PUSH EBP                            ; 00488515
    PUSH ESI                            ; 00488516
    PUSH EBX                            ; 00488517
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230 ; 00488518
        ;   XREF to: 00488230 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230(CDrawSurface * this_ptr, int x, int start_y, int end_y)
    ADD ESP,0x10                        ; 0048851d
    POP EBP                             ; 00488520
    POP EDI                             ; 00488521
    POP ESI                             ; 00488522
    POP EBX                             ; 00488523
    RET                                 ; 00488524

