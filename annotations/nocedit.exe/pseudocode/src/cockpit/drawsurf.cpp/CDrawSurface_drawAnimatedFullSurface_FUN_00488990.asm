; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a67e
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00488990
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990
    MOV EAX,dword ptr [EDX + 0x4]       ; 00488994
    DEC EAX                             ; 00488997
    PUSH EAX                            ; 00488998
    MOV EAX,dword ptr [EDX]             ; 00488999
    DEC EAX                             ; 0048899b
    PUSH EAX                            ; 0048899c
    PUSH 0x0                            ; 0048899d
    PUSH 0x0                            ; 0048899f
    PUSH EDX                            ; 004889a1
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 ; 004889a2
        ;   XREF to: 004887a0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004889a7
    RET                                 ; 004889aa

