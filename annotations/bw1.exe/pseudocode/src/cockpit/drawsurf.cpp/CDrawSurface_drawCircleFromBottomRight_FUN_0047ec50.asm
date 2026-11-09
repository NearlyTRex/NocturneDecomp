; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_right_x
; int              Stack[0xc]:4   bottom_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 004811ee
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ec50
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047ec54
    PUSH EDX                            ; 0047ec58
    SUB EAX,EDX                         ; 0047ec59
    PUSH EAX                            ; 0047ec5b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047ec5c
    SUB EAX,EDX                         ; 0047ec60
    PUSH EAX                            ; 0047ec62
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ec63
    PUSH EDX                            ; 0047ec67
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0 ; 0047ec68
        ;   XREF to: 0047ead0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0047ec6d
    RET                                 ; 0047ec70

