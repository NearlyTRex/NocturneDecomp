; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 at 00469e56
;   cockpit_drawsurf.cpp_FUN_00469e70 at 00469eca
;   core_script.cpp_CScript_renderEditor_FUN_00529210 at 00529353
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469e10
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10
    PUSH ESI                            ; 00469e11
    PUSH 0x0                            ; 00469e12
    PUSH 0x0                            ; 00469e14
    MOV EDX,dword ptr [ESP + 0x20]      ; 00469e16
    PUSH EDX                            ; 00469e1a
    PUSH 0x0                            ; 00469e1b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00469e1d
    PUSH ECX                            ; 00469e21
    MOV EBX,dword ptr [ESP + 0x24]      ; 00469e22
    PUSH EBX                            ; 00469e26
    MOV ESI,dword ptr [ESP + 0x24]      ; 00469e27
    PUSH ESI                            ; 00469e2b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 ; 00469e2c
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00469e31
    POP ESI                             ; 00469e34
    POP EBX                             ; 00469e35
    RET                                 ; 00469e36

