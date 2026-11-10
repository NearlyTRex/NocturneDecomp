; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_left_x
; int              Stack[0xc]:4   bottom_left_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468cc8
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 00466710
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710
    MOV EAX,dword ptr [ESP + 0xc]       ; 00466714
    PUSH EDX                            ; 00466718
    SUB EAX,EDX                         ; 00466719
    PUSH EAX                            ; 0046671b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046671c
    ADD EAX,EDX                         ; 00466720
    PUSH EAX                            ; 00466722
    MOV EDX,dword ptr [ESP + 0x10]      ; 00466723
    PUSH EDX                            ; 00466727
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0 ; 00466728
        ;   XREF to: 004665c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0046672d
    RET                                 ; 00466730

