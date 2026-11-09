; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_0047ebf0(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   top_right_x
; int              Stack[0xc]:4   top_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 004811c5
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ebf0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0047ebf0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047ebf4
    PUSH EDX                            ; 0047ebf8
    ADD EAX,EDX                         ; 0047ebf9
    PUSH EAX                            ; 0047ebfb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047ebfc
    SUB EAX,EDX                         ; 0047ec00
    PUSH EAX                            ; 0047ec02
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047ec03
    PUSH EDX                            ; 0047ec07
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0 ; 0047ec08
        ;   XREF to: 0047ead0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0047ec0d
    RET                                 ; 0047ec10

