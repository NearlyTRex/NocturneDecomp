; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   top_right_x
; int              Stack[0xc]:4   top_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e4a5
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0045be70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045be74
    PUSH EDX                            ; 0045be78
    ADD EAX,EDX                         ; 0045be79
    PUSH EAX                            ; 0045be7b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045be7c
    SUB EAX,EDX                         ; 0045be80
    PUSH EAX                            ; 0045be82
    MOV EDX,dword ptr [ESP + 0x10]      ; 0045be83
    PUSH EDX                            ; 0045be87
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50 ; 0045be88
        ;   XREF to: 0045bd50 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0045be8d
    RET                                 ; 0045be90

