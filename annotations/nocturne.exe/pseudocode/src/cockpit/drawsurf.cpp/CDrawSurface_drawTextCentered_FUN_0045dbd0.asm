; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_0045dbd0(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0045dc30 at 0045dc8a
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_0045dc00 at 0045dc16
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dbd0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_0045dbd0
    PUSH ESI                            ; 0045dbd1
    PUSH 0x2                            ; 0045dbd2
    PUSH 0x0                            ; 0045dbd4
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045dbd6
    PUSH EDX                            ; 0045dbda
    PUSH 0x0                            ; 0045dbdb
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045dbdd
    PUSH ECX                            ; 0045dbe1
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045dbe2
    PUSH EBX                            ; 0045dbe6
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045dbe7
    PUSH ESI                            ; 0045dbeb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045dbec
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0045dbf1
    POP ESI                             ; 0045dbf4
    POP EBX                             ; 0045dbf5
    RET                                 ; 0045dbf6

