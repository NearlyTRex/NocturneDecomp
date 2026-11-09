; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00480820(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00480880 at 004808da
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480820
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00480820
    PUSH ESI                            ; 00480821
    PUSH 0x1                            ; 00480822
    PUSH 0x0                            ; 00480824
    MOV EDX,dword ptr [ESP + 0x20]      ; 00480826
    PUSH EDX                            ; 0048082a
    PUSH 0x0                            ; 0048082b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048082d
    PUSH ECX                            ; 00480831
    MOV EBX,dword ptr [ESP + 0x24]      ; 00480832
    PUSH EBX                            ; 00480836
    MOV ESI,dword ptr [ESP + 0x24]      ; 00480837
    PUSH ESI                            ; 0048083b
    CALL cockpit_drawsurf.cpp_FUN_00480480 ; 0048083c
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00480480(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00480841
    POP ESI                             ; 00480844
    POP EBX                             ; 00480845
    RET                                 ; 00480846

