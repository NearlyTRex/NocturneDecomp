; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00480af0 at 00480b4a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480a90
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90
    PUSH ESI                            ; 00480a91
    PUSH 0x4                            ; 00480a92
    PUSH 0x0                            ; 00480a94
    MOV EDX,dword ptr [ESP + 0x20]      ; 00480a96
    PUSH EDX                            ; 00480a9a
    PUSH 0x0                            ; 00480a9b
    MOV ECX,dword ptr [ESP + 0x24]      ; 00480a9d
    PUSH ECX                            ; 00480aa1
    MOV EBX,dword ptr [ESP + 0x24]      ; 00480aa2
    PUSH EBX                            ; 00480aa6
    MOV ESI,dword ptr [ESP + 0x24]      ; 00480aa7
    PUSH ESI                            ; 00480aab
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 ; 00480aac
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00480ab1
    POP ESI                             ; 00480ab4
    POP EBX                             ; 00480ab5
    RET                                 ; 00480ab6

