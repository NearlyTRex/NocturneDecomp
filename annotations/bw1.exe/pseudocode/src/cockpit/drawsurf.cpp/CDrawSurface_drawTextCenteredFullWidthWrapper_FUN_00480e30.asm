; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00480e30(CDrawSurface *this_ptr,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480e30
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00480e30
    MOV EDX,dword ptr [ESP + 0xc]       ; 00480e31
    PUSH EDX                            ; 00480e35
    MOV ECX,dword ptr [ESP + 0x14]      ; 00480e36
    PUSH ECX                            ; 00480e3a
    MOV EBX,dword ptr [ESP + 0x10]      ; 00480e3b
    PUSH EBX                            ; 00480e3f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10 ; 00480e40
        ;   XREF to: 00480e10 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10(CDrawSurface * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 00480e45
    POP EBX                             ; 00480e48
    RET                                 ; 00480e49

