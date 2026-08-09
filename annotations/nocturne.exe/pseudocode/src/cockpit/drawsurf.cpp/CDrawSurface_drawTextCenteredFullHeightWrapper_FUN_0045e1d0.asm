; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_0045e1d0(CDrawSurface *this_ptr,int x,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e1d0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_0045e1d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045e1d1
    PUSH EDX                            ; 0045e1d5
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045e1d6
    PUSH ECX                            ; 0045e1da
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045e1db
    PUSH EBX                            ; 0045e1df
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0 ; 0045e1e0
        ;   XREF to: 0045e1a0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0(CDrawSurface * this_ptr, char * text, int x)
    ADD ESP,0xc                         ; 0045e1e5
    POP EBX                             ; 0045e1e8
    RET                                 ; 0045e1e9

