; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_0045dc00(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e540
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_0045dbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dc00
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_0045dc00
    PUSH ESI                            ; 0045dc01
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045dc02
    PUSH EDX                            ; 0045dc06
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045dc07
    PUSH ECX                            ; 0045dc0b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045dc0c
    PUSH EBX                            ; 0045dc10
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045dc11
    PUSH ESI                            ; 0045dc15
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_0045dbd0 ; 0045dc16
        ;   XREF to: 0045dbd0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_0045dbd0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0045dc1b
    POP ESI                             ; 0045dc1e
    POP EBX                             ; 0045dc1f
    RET                                 ; 0045dc20

