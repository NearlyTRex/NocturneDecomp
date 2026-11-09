; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   top_right_x
; int              Stack[0xc]:4   top_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468b80 at 00468cb5
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 004666e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004666e4
    PUSH EDX                            ; 004666e8
    ADD EAX,EDX                         ; 004666e9
    PUSH EAX                            ; 004666eb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004666ec
    SUB EAX,EDX                         ; 004666f0
    PUSH EAX                            ; 004666f2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004666f3
    PUSH EDX                            ; 004666f7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0 ; 004666f8
        ;   XREF to: 004665c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 004666fd
    RET                                 ; 00466700

