; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_right_x
; int              Stack[0xc]:4   bottom_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e4ce
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0045bed0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045bed4
    PUSH EDX                            ; 0045bed8
    SUB EAX,EDX                         ; 0045bed9
    PUSH EAX                            ; 0045bedb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045bedc
    SUB EAX,EDX                         ; 0045bee0
    PUSH EAX                            ; 0045bee2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045bee3
    PUSH EDX                            ; 0045bee7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045bee8
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0045beed
    RET                                 ; 0045bef0

