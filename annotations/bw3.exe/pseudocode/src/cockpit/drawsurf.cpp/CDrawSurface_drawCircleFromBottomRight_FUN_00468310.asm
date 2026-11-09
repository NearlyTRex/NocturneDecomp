; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00468310(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_right_x
; int              Stack[0xc]:4   bottom_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a8ae
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 00468310
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00468310
    MOV EAX,dword ptr [ESP + 0xc]       ; 00468314
    PUSH EDX                            ; 00468318
    SUB EAX,EDX                         ; 00468319
    PUSH EAX                            ; 0046831b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046831c
    SUB EAX,EDX                         ; 00468320
    PUSH EAX                            ; 00468322
    MOV EDX,dword ptr [ESP + 0x10]      ; 00468323
    PUSH EDX                            ; 00468327
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190 ; 00468328
        ;   XREF to: 00468190 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0046832d
    RET                                 ; 00468330

