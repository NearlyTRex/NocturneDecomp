; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e43e
;   core_script.cpp_FUN_004fe9d0 at 004feb69
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045cb70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045cb74
    DEC EAX                             ; 0045cb77
    PUSH EAX                            ; 0045cb78
    MOV EAX,dword ptr [EDX]             ; 0045cb79
    DEC EAX                             ; 0045cb7b
    PUSH EAX                            ; 0045cb7c
    PUSH 0x0                            ; 0045cb7d
    PUSH 0x0                            ; 0045cb7f
    PUSH EDX                            ; 0045cb81
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10 ; 0045cb82
        ;   XREF to: 0045cb10 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0045cb87
    RET                                 ; 0045cb8a

