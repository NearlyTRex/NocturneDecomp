; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0(CDrawSurface *this_ptr,char *text,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0 at 00489b41
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0 at 00489ae0
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489ab0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00489ab1
    MOV ECX,dword ptr [ESP + 0x10]      ; 00489ab5
    MOV EAX,dword ptr [EDX]             ; 00489ab9
    PUSH ECX                            ; 00489abb
    DEC EAX                             ; 00489abc
    PUSH EAX                            ; 00489abd
    PUSH 0x0                            ; 00489abe
    MOV EBX,dword ptr [ESP + 0x18]      ; 00489ac0
    PUSH EBX                            ; 00489ac4
    PUSH EDX                            ; 00489ac5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800 ; 00489ac6
        ;   XREF to: 00489800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 00489acb
    POP EBX                             ; 00489ace
    RET                                 ; 00489acf

