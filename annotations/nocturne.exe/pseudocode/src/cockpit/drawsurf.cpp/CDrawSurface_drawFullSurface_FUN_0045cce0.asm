; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawFullSurface_FUN_0045cce0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045cce0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawFullSurface_FUN_0045cce0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045cce4
    DEC EAX                             ; 0045cce7
    PUSH EAX                            ; 0045cce8
    MOV EAX,dword ptr [EDX]             ; 0045cce9
    DEC EAX                             ; 0045cceb
    PUSH EAX                            ; 0045ccec
    PUSH 0x0                            ; 0045cced
    PUSH 0x0                            ; 0045ccef
    PUSH EDX                            ; 0045ccf1
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70 ; 0045ccf2
        ;   XREF to: 0045cc70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0045ccf7
    RET                                 ; 0045ccfa

