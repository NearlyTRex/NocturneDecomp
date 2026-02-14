; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489760
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_00489760
    PUSH ESI                            ; 00489761
    MOV EDX,dword ptr [ESP + 0x14]      ; 00489762
    PUSH EDX                            ; 00489766
    MOV ECX,dword ptr [ESP + 0x14]      ; 00489767
    PUSH ECX                            ; 0048976b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0048976c
    PUSH EBX                            ; 00489770
    MOV ESI,dword ptr [ESP + 0x18]      ; 00489771
    PUSH ESI                            ; 00489775
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730 ; 00489776
        ;   XREF to: 00489730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0048977b
    POP ESI                             ; 0048977e
    POP EBX                             ; 0048977f
    RET                                 ; 00489780

