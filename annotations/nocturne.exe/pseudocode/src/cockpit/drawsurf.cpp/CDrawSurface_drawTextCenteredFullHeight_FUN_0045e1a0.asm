; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0(CDrawSurface *this_ptr,char *text,int x)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_0045e1f0 at 0045e241
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightWrapper_FUN_0045e1d0 at 0045e1e0
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e1a0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045e1a1
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045e1a5
    DEC EAX                             ; 0045e1a8
    PUSH EAX                            ; 0045e1a9
    PUSH 0x0                            ; 0045e1aa
    MOV ECX,dword ptr [ESP + 0x18]      ; 0045e1ac
    PUSH ECX                            ; 0045e1b0
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045e1b1
    PUSH EBX                            ; 0045e1b5
    PUSH EDX                            ; 0045e1b6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20 ; 0045e1b7
        ;   XREF to: 0045df20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20(CDrawSurface * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x14                        ; 0045e1bc
    POP EBX                             ; 0045e1bf
    RET                                 ; 0045e1c0

