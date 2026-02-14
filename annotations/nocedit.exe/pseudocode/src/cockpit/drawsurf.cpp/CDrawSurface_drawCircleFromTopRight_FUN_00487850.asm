; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850(CDrawSurface *this_ptr,int top_right_x,int top_right_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   top_right_x
; int              Stack[0xc]:4   top_right_y
; int              Stack[0x10]:4   radius
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489e65
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 00487850
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
    MOV EAX,dword ptr [ESP + 0xc]       ; 00487854
    PUSH EDX                            ; 00487858
    ADD EAX,EDX                         ; 00487859
    PUSH EAX                            ; 0048785b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048785c
    SUB EAX,EDX                         ; 00487860
    PUSH EAX                            ; 00487862
    MOV EDX,dword ptr [ESP + 0x10]      ; 00487863
    PUSH EDX                            ; 00487867
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 ; 00487868
        ;   XREF to: 00487730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0048786d
    RET                                 ; 00487870

