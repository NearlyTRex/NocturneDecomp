; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_right_x
; int              Stack[0xc]:4   bottom_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468cde
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 00466740
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740
    MOV EAX,dword ptr [ESP + 0xc]       ; 00466744
    PUSH EDX                            ; 00466748
    SUB EAX,EDX                         ; 00466749
    PUSH EAX                            ; 0046674b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046674c
    SUB EAX,EDX                         ; 00466750
    PUSH EAX                            ; 00466752
    MOV EDX,dword ptr [ESP + 0x10]      ; 00466753
    PUSH EDX                            ; 00466757
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0 ; 00466758
        ;   XREF to: 004665c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0046675d
    RET                                 ; 00466760

