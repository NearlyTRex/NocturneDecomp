; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280(CDrawSurface *this_ptr,int x,int y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a86f
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 00468280
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280
    MOV EAX,dword ptr [ESP + 0xc]       ; 00468284
    PUSH EDX                            ; 00468288
    ADD EAX,EDX                         ; 00468289
    PUSH EAX                            ; 0046828b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046828c
    ADD EAX,EDX                         ; 00468290
    PUSH EAX                            ; 00468292
    MOV EDX,dword ptr [ESP + 0x10]      ; 00468293
    PUSH EDX                            ; 00468297
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190 ; 00468298
        ;   XREF to: 00468190 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0046829d
    RET                                 ; 004682a0

