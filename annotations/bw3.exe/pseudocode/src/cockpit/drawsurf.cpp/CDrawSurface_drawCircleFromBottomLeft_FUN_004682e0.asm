; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0(CDrawSurface *this_ptr,int bottom_left_x,int bottom_left_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_left_x
; int              Stack[0xc]:4   bottom_left_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a898
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 004682e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004682e4
    PUSH EDX                            ; 004682e8
    SUB EAX,EDX                         ; 004682e9
    PUSH EAX                            ; 004682eb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004682ec
    ADD EAX,EDX                         ; 004682f0
    PUSH EAX                            ; 004682f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004682f3
    PUSH EDX                            ; 004682f7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190 ; 004682f8
        ;   XREF to: 00468190 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 004682fd
    RET                                 ; 00468300

