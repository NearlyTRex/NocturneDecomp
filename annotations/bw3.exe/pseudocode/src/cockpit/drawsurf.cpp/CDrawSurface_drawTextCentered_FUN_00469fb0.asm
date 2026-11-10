; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_00469fb0(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00469fe0 at 00469ff6
;   cockpit_drawsurf.cpp_FUN_0046a010 at 0046a06a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469fb0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00469fb0
    PUSH ESI                            ; 00469fb1
    PUSH 0x2                            ; 00469fb2
    PUSH 0x0                            ; 00469fb4
    MOV EDX,dword ptr [ESP + 0x20]      ; 00469fb6
    PUSH EDX                            ; 00469fba
    PUSH 0x0                            ; 00469fbb
    MOV ECX,dword ptr [ESP + 0x24]      ; 00469fbd
    PUSH ECX                            ; 00469fc1
    MOV EBX,dword ptr [ESP + 0x24]      ; 00469fc2
    PUSH EBX                            ; 00469fc6
    MOV ESI,dword ptr [ESP + 0x24]      ; 00469fc7
    PUSH ESI                            ; 00469fcb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 ; 00469fcc
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00469fd1
    POP ESI                             ; 00469fd4
    POP EBX                             ; 00469fd5
    RET                                 ; 00469fd6

