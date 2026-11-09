; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0047ebc0(CDrawSurface *this_ptr,int x,int y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 004811af
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ebc0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0047ebc0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047ebc4
    PUSH EDX                            ; 0047ebc8
    ADD EAX,EDX                         ; 0047ebc9
    PUSH EAX                            ; 0047ebcb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047ebcc
    ADD EAX,EDX                         ; 0047ebd0
    PUSH EAX                            ; 0047ebd2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ebd3
    PUSH EDX                            ; 0047ebd7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0 ; 0047ebd8
        ;   XREF to: 0047ead0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0047ebdd
    RET                                 ; 0047ebe0

