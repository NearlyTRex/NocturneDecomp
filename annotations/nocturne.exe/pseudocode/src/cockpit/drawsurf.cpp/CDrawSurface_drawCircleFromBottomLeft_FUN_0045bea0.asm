; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_left_x
; int              Stack[0xc]:4   bottom_left_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e4b8
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0045bea0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045bea4
    PUSH EDX                            ; 0045bea8
    SUB EAX,EDX                         ; 0045bea9
    PUSH EAX                            ; 0045beab
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045beac
    ADD EAX,EDX                         ; 0045beb0
    PUSH EAX                            ; 0045beb2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045beb3
    PUSH EDX                            ; 0045beb7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045beb8
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0045bebd
    RET                                 ; 0045bec0

