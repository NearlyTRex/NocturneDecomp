; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640(CDrawSurface *this_ptr,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660 at 0046a6a6
;   core_script.cpp_CScript_renderEditor_FUN_00529210 at 005293fd
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0046a3e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046a640
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046a644
    DEC EAX                             ; 0046a647
    PUSH EAX                            ; 0046a648
    MOV EAX,dword ptr [EDX]             ; 0046a649
    PUSH 0x0                            ; 0046a64b
    DEC EAX                             ; 0046a64d
    PUSH EAX                            ; 0046a64e
    PUSH 0x0                            ; 0046a64f
    MOV ECX,dword ptr [ESP + 0x18]      ; 0046a651
    PUSH ECX                            ; 0046a655
    PUSH EDX                            ; 0046a656
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0046a3e0 ; 0046a657
        ;   XREF to: 0046a3e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0046a3e0(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x18                        ; 0046a65c
    RET                                 ; 0046a65f

