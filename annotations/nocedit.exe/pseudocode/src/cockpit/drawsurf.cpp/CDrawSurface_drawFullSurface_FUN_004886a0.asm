; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawFullSurface_FUN_004886a0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004886a0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawFullSurface_FUN_004886a0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004886a4
    DEC EAX                             ; 004886a7
    PUSH EAX                            ; 004886a8
    MOV EAX,dword ptr [EDX]             ; 004886a9
    DEC EAX                             ; 004886ab
    PUSH EAX                            ; 004886ac
    PUSH 0x0                            ; 004886ad
    PUSH 0x0                            ; 004886af
    PUSH EDX                            ; 004886b1
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630 ; 004886b2
        ;   XREF to: 00488630 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004886b7
    RET                                 ; 004886ba

