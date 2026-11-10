; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046a8db
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469e40
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
    PUSH ESI                            ; 00469e41
    MOV EDX,dword ptr [ESP + 0x14]      ; 00469e42
    PUSH EDX                            ; 00469e46
    MOV ECX,dword ptr [ESP + 0x14]      ; 00469e47
    PUSH ECX                            ; 00469e4b
    MOV EBX,dword ptr [ESP + 0x20]      ; 00469e4c
    PUSH EBX                            ; 00469e50
    MOV ESI,dword ptr [ESP + 0x18]      ; 00469e51
    PUSH ESI                            ; 00469e55
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10 ; 00469e56
        ;   XREF to: 00469e10 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00469e5b
    POP ESI                             ; 00469e5e
    POP EBX                             ; 00469e5f
    RET                                 ; 00469e60

