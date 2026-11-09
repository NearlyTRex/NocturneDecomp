; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00468310(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468370 at 004683ca
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468310
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00468310
    PUSH ESI                            ; 00468311
    PUSH 0x1                            ; 00468312
    PUSH 0x0                            ; 00468314
    MOV EDX,dword ptr [ESP + 0x20]      ; 00468316
    PUSH EDX                            ; 0046831a
    PUSH 0x0                            ; 0046831b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046831d
    PUSH ECX                            ; 00468321
    MOV EBX,dword ptr [ESP + 0x24]      ; 00468322
    PUSH EBX                            ; 00468326
    MOV ESI,dword ptr [ESP + 0x24]      ; 00468327
    PUSH ESI                            ; 0046832b
    CALL cockpit_drawsurf.cpp_FUN_00467f70 ; 0046832c
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f70(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00468331
    POP ESI                             ; 00468334
    POP EBX                             ; 00468335
    RET                                 ; 00468336

