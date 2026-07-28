; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e4fb
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045da60
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60
    PUSH ESI                            ; 0045da61
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045da62
    PUSH EDX                            ; 0045da66
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045da67
    PUSH ECX                            ; 0045da6b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045da6c
    PUSH EBX                            ; 0045da70
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045da71
    PUSH ESI                            ; 0045da75
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30 ; 0045da76
        ;   XREF to: 0045da30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0045da7b
    POP ESI                             ; 0045da7e
    POP EBX                             ; 0045da7f
    RET                                 ; 0045da80

