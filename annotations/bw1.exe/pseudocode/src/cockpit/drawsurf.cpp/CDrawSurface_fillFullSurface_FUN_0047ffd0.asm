; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 00481147
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543c55
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0047fe30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047ffd0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047ffd4
    DEC EAX                             ; 0047ffd7
    PUSH EAX                            ; 0047ffd8
    MOV EAX,dword ptr [EDX]             ; 0047ffd9
    DEC EAX                             ; 0047ffdb
    PUSH EAX                            ; 0047ffdc
    PUSH 0x0                            ; 0047ffdd
    PUSH 0x0                            ; 0047ffdf
    PUSH EDX                            ; 0047ffe1
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0047fe30 ; 0047ffe2
        ;   XREF to: 0047fe30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0047fe30(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0047ffe7
    RET                                 ; 0047ffea

