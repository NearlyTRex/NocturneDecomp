; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0(CDrawSurface *this_ptr,char *param_2,int param_3)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_0046a4f0 at 0046a500
;   cockpit_drawsurf.cpp_FUN_0046a510 at 0046a561
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a4d0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046a4d1
    MOV ECX,dword ptr [ESP + 0x10]      ; 0046a4d5
    MOV EAX,dword ptr [EDX]             ; 0046a4d9
    PUSH ECX                            ; 0046a4db
    DEC EAX                             ; 0046a4dc
    PUSH EAX                            ; 0046a4dd
    PUSH 0x0                            ; 0046a4de
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046a4e0
    PUSH EBX                            ; 0046a4e4
    PUSH EDX                            ; 0046a4e5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220 ; 0046a4e6
        ;   XREF to: 0046a220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 0046a4eb
    POP EBX                             ; 0046a4ee
    RET                                 ; 0046a4ef

