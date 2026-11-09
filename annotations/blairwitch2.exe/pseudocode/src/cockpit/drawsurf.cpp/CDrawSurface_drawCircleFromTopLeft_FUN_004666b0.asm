; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0(CDrawSurface *this_ptr,int x,int y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468b80 at 00468c9f
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 004666b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004666b4
    PUSH EDX                            ; 004666b8
    ADD EAX,EDX                         ; 004666b9
    PUSH EAX                            ; 004666bb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004666bc
    ADD EAX,EDX                         ; 004666c0
    PUSH EAX                            ; 004666c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004666c3
    PUSH EDX                            ; 004666c7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0 ; 004666c8
        ;   XREF to: 004665c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 004666cd
    RET                                 ; 004666d0

