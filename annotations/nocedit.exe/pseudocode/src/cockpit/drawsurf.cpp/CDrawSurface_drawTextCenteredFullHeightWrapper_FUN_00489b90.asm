; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90(CDrawSurface *this_ptr,int x,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489b90
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_00489b90
    MOV EDX,dword ptr [ESP + 0xc]       ; 00489b91
    PUSH EDX                            ; 00489b95
    MOV ECX,dword ptr [ESP + 0x14]      ; 00489b96
    PUSH ECX                            ; 00489b9a
    MOV EBX,dword ptr [ESP + 0x10]      ; 00489b9b
    PUSH EBX                            ; 00489b9f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60 ; 00489ba0
        ;   XREF to: 00489b60 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60(CDrawSurface * this_ptr, char * text, int x)
    ADD ESP,0xc                         ; 00489ba5
    POP EBX                             ; 00489ba8
    RET                                 ; 00489ba9

