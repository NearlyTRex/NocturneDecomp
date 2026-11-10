; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80(CDrawSurface *this_ptr,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0 at 00480fe6
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543ded
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00480f80
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80
    MOV EAX,dword ptr [EDX + 0x4]       ; 00480f84
    DEC EAX                             ; 00480f87
    PUSH EAX                            ; 00480f88
    MOV EAX,dword ptr [EDX]             ; 00480f89
    PUSH 0x0                            ; 00480f8b
    DEC EAX                             ; 00480f8d
    PUSH EAX                            ; 00480f8e
    PUSH 0x0                            ; 00480f8f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00480f91
    PUSH ECX                            ; 00480f95
    PUSH EDX                            ; 00480f96
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20 ; 00480f97
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x18                        ; 00480f9c
    RET                                 ; 00480f9f

