; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_0045cfd0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045ecbe
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045cfd0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_0045cfd0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045cfd4
    DEC EAX                             ; 0045cfd7
    PUSH EAX                            ; 0045cfd8
    MOV EAX,dword ptr [EDX]             ; 0045cfd9
    DEC EAX                             ; 0045cfdb
    PUSH EAX                            ; 0045cfdc
    PUSH 0x0                            ; 0045cfdd
    PUSH 0x0                            ; 0045cfdf
    PUSH EDX                            ; 0045cfe1
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0 ; 0045cfe2
        ;   XREF to: 0045cde0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_0045cde0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0045cfe7
    RET                                 ; 0045cfea

