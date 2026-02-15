; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20(CDrawSurface *this_ptr,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40 at 00489c86
;   core_script.cpp_CScript_renderEditor_FUN_00559d80 at 00559f6d
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00489c20
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
    MOV EAX,dword ptr [EDX + 0x4]       ; 00489c24
    DEC EAX                             ; 00489c27
    PUSH EAX                            ; 00489c28
    MOV EAX,dword ptr [EDX]             ; 00489c29
    PUSH 0x0                            ; 00489c2b
    DEC EAX                             ; 00489c2d
    PUSH EAX                            ; 00489c2e
    PUSH 0x0                            ; 00489c2f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00489c31
    PUSH ECX                            ; 00489c35
    PUSH EDX                            ; 00489c36
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0 ; 00489c37
        ;   XREF to: 004899c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x18                        ; 00489c3c
    RET                                 ; 00489c3f

