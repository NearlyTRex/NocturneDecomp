; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 0048115e
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543d99
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0047f860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047f8c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047f8c4
    DEC EAX                             ; 0047f8c7
    PUSH EAX                            ; 0047f8c8
    MOV EAX,dword ptr [EDX]             ; 0047f8c9
    DEC EAX                             ; 0047f8cb
    PUSH EAX                            ; 0047f8cc
    PUSH 0x0                            ; 0047f8cd
    PUSH 0x0                            ; 0047f8cf
    PUSH EDX                            ; 0047f8d1
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0047f860 ; 0047f8d2
        ;   XREF to: 0047f860 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0047f860(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0047f8d7
    RET                                 ; 0047f8da

