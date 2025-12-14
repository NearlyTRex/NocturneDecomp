; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880(CDrawSurface * this_ptr, int bottom_left_x, int bottom_left_y, int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bottom_left_x
; int              Stack[0xc]:4   bottom_left_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489e78
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 00487880
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
    MOV EAX,dword ptr [ESP + 0xc]       ; 00487884
    PUSH EDX                            ; 00487888
    SUB EAX,EDX                         ; 00487889
    PUSH EAX                            ; 0048788b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048788c
    ADD EAX,EDX                         ; 00487890
    PUSH EAX                            ; 00487892
    MOV EDX,dword ptr [ESP + 0x10]      ; 00487893
    PUSH EDX                            ; 00487897
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 ; 00487898
        ;   XREF to: 00487730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0048789d
    RET                                 ; 004878a0

