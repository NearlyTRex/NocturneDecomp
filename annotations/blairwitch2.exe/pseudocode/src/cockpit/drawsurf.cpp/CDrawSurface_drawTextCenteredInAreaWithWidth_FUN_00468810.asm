; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
; int              Stack[0x18]:4   height
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70 at 00468a87
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880 at 004688eb
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468810
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810
    PUSH ESI                            ; 00468811
    PUSH EDI                            ; 00468812
    PUSH EBP                            ; 00468813
    PUSH 0x7                            ; 00468814
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00468816
    PUSH EDX                            ; 0046881a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0046881b
    PUSH ECX                            ; 0046881f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00468820
    PUSH EBX                            ; 00468824
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00468825
    PUSH ESI                            ; 00468829
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0046882a
    PUSH EDI                            ; 0046882e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0046882f
    PUSH EBP                            ; 00468833
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 ; 00468834
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00468839
    POP EBP                             ; 0046883c
    POP EDI                             ; 0046883d
    POP ESI                             ; 0046883e
    POP EBX                             ; 0046883f
    RET                                 ; 00468840

