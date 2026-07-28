; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0045be40(CDrawSurface *this_ptr,int x,int y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e48f
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0045be40
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0045be40
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045be44
    PUSH EDX                            ; 0045be48
    ADD EAX,EDX                         ; 0045be49
    PUSH EAX                            ; 0045be4b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045be4c
    ADD EAX,EDX                         ; 0045be50
    PUSH EAX                            ; 0045be52
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045be53
    PUSH EDX                            ; 0045be57
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045be58
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0045be5d
    RET                                 ; 0045be60

