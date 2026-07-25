; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70(int *param_1)
;
;
; XREF[2]:
;   FUN_0045e370 at 0045e43e
;   FUN_004fe9d0 at 004feb69
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045cb70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045cb74
    DEC EAX                             ; 0045cb77
    PUSH EAX                            ; 0045cb78
    MOV EAX,dword ptr [EDX]             ; 0045cb79
    DEC EAX                             ; 0045cb7b
    PUSH EAX                            ; 0045cb7c
    PUSH 0x0                            ; 0045cb7d
    PUSH 0x0                            ; 0045cb7f
    PUSH EDX                            ; 0045cb81
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10 ; 0045cb82
        ;   XREF to: 0045cb10 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10()
    ADD ESP,0x14                        ; 0045cb87
    RET                                 ; 0045cb8a

