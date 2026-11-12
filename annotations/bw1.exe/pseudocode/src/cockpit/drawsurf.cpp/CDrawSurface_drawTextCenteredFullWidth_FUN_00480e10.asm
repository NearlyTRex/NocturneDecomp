; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10(CDrawSurface *this_ptr,char *param_2,int param_3)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00480e50 at 00480ea1
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00480e30 at 00480e40
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480e10
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00480e11
    MOV ECX,dword ptr [ESP + 0x10]      ; 00480e15
    MOV EAX,dword ptr [EDX]             ; 00480e19
    PUSH ECX                            ; 00480e1b
    DEC EAX                             ; 00480e1c
    PUSH EAX                            ; 00480e1d
    PUSH 0x0                            ; 00480e1e
    MOV EBX,dword ptr [ESP + 0x18]      ; 00480e20
    PUSH EBX                            ; 00480e24
    PUSH EDX                            ; 00480e25
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60 ; 00480e26
        ;   XREF to: 00480b60 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 00480e2b
    POP EBX                             ; 00480e2e
    RET                                 ; 00480e2f

