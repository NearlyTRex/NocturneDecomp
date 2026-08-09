; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0(CDrawSurface *this_ptr,char *text,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0045e130 at 0045e181
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_0045e110 at 0045e120
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e0f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045e0f1
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045e0f5
    MOV EAX,dword ptr [EDX]             ; 0045e0f9
    PUSH ECX                            ; 0045e0fb
    DEC EAX                             ; 0045e0fc
    PUSH EAX                            ; 0045e0fd
    PUSH 0x0                            ; 0045e0fe
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045e100
    PUSH EBX                            ; 0045e104
    PUSH EDX                            ; 0045e105
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40 ; 0045e106
        ;   XREF to: 0045de40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 0045e10b
    POP EBX                             ; 0045e10e
    RET                                 ; 0045e10f

