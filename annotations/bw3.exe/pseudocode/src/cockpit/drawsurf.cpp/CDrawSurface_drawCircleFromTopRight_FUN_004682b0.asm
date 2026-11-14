; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   top_right_x
; int              Stack[0xc]:4   top_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046a885
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 004682b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004682b4
    PUSH EDX                            ; 004682b8
    ADD EAX,EDX                         ; 004682b9
    PUSH EAX                            ; 004682bb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004682bc
    SUB EAX,EDX                         ; 004682c0
    PUSH EAX                            ; 004682c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004682c3
    PUSH EDX                            ; 004682c7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190 ; 004682c8
        ;   XREF to: 00468190 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 004682cd
    RET                                 ; 004682d0

