; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_004808f0(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00480920 at 00480936
;   cockpit_drawsurf.cpp_FUN_00480950 at 004809aa
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004808f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0
    PUSH ESI                            ; 004808f1
    PUSH 0x2                            ; 004808f2
    PUSH 0x0                            ; 004808f4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004808f6
    PUSH EDX                            ; 004808fa
    PUSH 0x0                            ; 004808fb
    MOV ECX,dword ptr [ESP + 0x24]      ; 004808fd
    PUSH ECX                            ; 00480901
    MOV EBX,dword ptr [ESP + 0x24]      ; 00480902
    PUSH EBX                            ; 00480906
    MOV ESI,dword ptr [ESP + 0x24]      ; 00480907
    PUSH ESI                            ; 0048090b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 ; 0048090c
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00480911
    POP ESI                             ; 00480914
    POP EBX                             ; 00480915
    RET                                 ; 00480916

