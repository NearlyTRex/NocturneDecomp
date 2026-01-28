; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0 (CDrawSurface *this_ptr,int y,int height,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   height
; char *           Stack[0x10]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489ad0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00489ad1
    PUSH EDX                            ; 00489ad5
    MOV ECX,dword ptr [ESP + 0x14]      ; 00489ad6
    PUSH ECX                            ; 00489ada
    MOV EBX,dword ptr [ESP + 0x10]      ; 00489adb
    PUSH EBX                            ; 00489adf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0 ; 00489ae0
        ;   XREF to: 00489ab0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0(CDrawSurface * this_ptr, int y, int height, char * text)
    ADD ESP,0xc                         ; 00489ae5
    POP EBX                             ; 00489ae8
    RET                                 ; 00489ae9

