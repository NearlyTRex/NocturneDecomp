; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_0045dcd0(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dcd0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredWrapper_FUN_0045dcd0
    PUSH ESI                            ; 0045dcd1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045dcd2
    PUSH EDX                            ; 0045dcd6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0045dcd7
    PUSH ECX                            ; 0045dcdb
    MOV EBX,dword ptr [ESP + 0x20]      ; 0045dcdc
    PUSH EBX                            ; 0045dce0
    MOV ESI,dword ptr [ESP + 0x18]      ; 0045dce1
    PUSH ESI                            ; 0045dce5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0 ; 0045dce6
        ;   XREF to: 0045dca0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0045dceb
    POP ESI                             ; 0045dcee
    POP EBX                             ; 0045dcef
    RET                                 ; 0045dcf0

