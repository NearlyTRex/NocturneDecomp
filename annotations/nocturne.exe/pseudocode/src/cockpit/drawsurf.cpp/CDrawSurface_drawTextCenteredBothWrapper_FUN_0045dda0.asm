; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_0045dda0(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0045dd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dda0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_0045dda0
    PUSH ESI                            ; 0045dda1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045dda2
    PUSH EDX                            ; 0045dda6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045dda7
    PUSH ECX                            ; 0045ddab
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045ddac
    PUSH EBX                            ; 0045ddb0
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045ddb1
    PUSH ESI                            ; 0045ddb5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0045dd70 ; 0045ddb6
        ;   XREF to: 0045dd70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0045dd70(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0045ddbb
    POP ESI                             ; 0045ddbe
    POP EBX                             ; 0045ddbf
    RET                                 ; 0045ddc0

