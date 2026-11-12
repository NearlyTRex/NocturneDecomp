; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40(CDrawSurface *this_ptr,char *text,int x,int y,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00480ca0 at 00480d03
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480c40
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40
    PUSH ESI                            ; 00480c41
    PUSH EDI                            ; 00480c42
    PUSH 0x6                            ; 00480c43
    MOV EDX,dword ptr [ESP + 0x24]      ; 00480c45
    PUSH EDX                            ; 00480c49
    MOV ECX,dword ptr [ESP + 0x24]      ; 00480c4a
    PUSH ECX                            ; 00480c4e
    PUSH 0x0                            ; 00480c4f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00480c51
    PUSH EBX                            ; 00480c55
    MOV ESI,dword ptr [ESP + 0x28]      ; 00480c56
    PUSH ESI                            ; 00480c5a
    MOV EDI,dword ptr [ESP + 0x28]      ; 00480c5b
    PUSH EDI                            ; 00480c5f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 ; 00480c60
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00480c65
    POP EDI                             ; 00480c68
    POP ESI                             ; 00480c69
    POP EBX                             ; 00480c6a
    RET                                 ; 00480c6b

