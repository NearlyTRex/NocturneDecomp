; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_004683e0(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_00468410 at 00468426
;   cockpit_drawsurf.cpp_FUN_00468440 at 0046849a
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004683e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004683e0
    PUSH ESI                            ; 004683e1
    PUSH 0x2                            ; 004683e2
    PUSH 0x0                            ; 004683e4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004683e6
    PUSH EDX                            ; 004683ea
    PUSH 0x0                            ; 004683eb
    MOV ECX,dword ptr [ESP + 0x24]      ; 004683ed
    PUSH ECX                            ; 004683f1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004683f2
    PUSH EBX                            ; 004683f6
    MOV ESI,dword ptr [ESP + 0x24]      ; 004683f7
    PUSH ESI                            ; 004683fb
    CALL cockpit_drawsurf.cpp_FUN_00467f70 ; 004683fc
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f70(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00468401
    POP ESI                             ; 00468404
    POP EBX                             ; 00468405
    RET                                 ; 00468406

