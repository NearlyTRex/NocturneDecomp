; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820(CDrawSurface * this_ptr, int x, int y, int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489e4f
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 00487820
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
    MOV EAX,dword ptr [ESP + 0xc]       ; 00487824
    PUSH EDX                            ; 00487828
    ADD EAX,EDX                         ; 00487829
    PUSH EAX                            ; 0048782b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048782c
    ADD EAX,EDX                         ; 00487830
    PUSH EAX                            ; 00487832
    MOV EDX,dword ptr [ESP + 0x10]      ; 00487833
    PUSH EDX                            ; 00487837
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 ; 00487838 | void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
        ;   XREF to: 00487730 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0048783d
    RET                                 ; 00487840

