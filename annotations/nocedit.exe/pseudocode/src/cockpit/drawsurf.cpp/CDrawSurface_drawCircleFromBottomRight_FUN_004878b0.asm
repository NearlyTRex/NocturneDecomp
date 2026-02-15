; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0(CDrawSurface *this_ptr,int bottom_right_x,int bottom_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_right_x
; int              Stack[0xc]:4   bottom_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489e8e
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 004878b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004878b4
    PUSH EDX                            ; 004878b8
    SUB EAX,EDX                         ; 004878b9
    PUSH EAX                            ; 004878bb
    MOV EAX,dword ptr [ESP + 0x10]      ; 004878bc
    SUB EAX,EDX                         ; 004878c0
    PUSH EAX                            ; 004878c2
    MOV EDX,dword ptr [ESP + 0x10]      ; 004878c3
    PUSH EDX                            ; 004878c7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 ; 004878c8
        ;   XREF to: 00487730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 004878cd
    RET                                 ; 004878d0

