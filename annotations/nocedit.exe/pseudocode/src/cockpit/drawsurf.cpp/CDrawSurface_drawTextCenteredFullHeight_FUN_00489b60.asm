; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60 (CDrawSurface *this_ptr,char *text,int x)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0 at 00489c01
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90 at 00489ba0
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489b60
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00489b61
    MOV EAX,dword ptr [EDX + 0x4]       ; 00489b65
    DEC EAX                             ; 00489b68
    PUSH EAX                            ; 00489b69
    PUSH 0x0                            ; 00489b6a
    MOV ECX,dword ptr [ESP + 0x18]      ; 00489b6c
    PUSH ECX                            ; 00489b70
    MOV EBX,dword ptr [ESP + 0x18]      ; 00489b71
    PUSH EBX                            ; 00489b75
    PUSH EDX                            ; 00489b76
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0 ; 00489b77
        ;   XREF to: 004898e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0(CDrawSurface * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x14                        ; 00489b7c
    POP EBX                             ; 00489b7f
    RET                                 ; 00489b80

