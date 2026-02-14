; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_00489590(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 at 0048964a
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0 at 004895d6
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489590
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
    PUSH ESI                            ; 00489591
    PUSH 0x2                            ; 00489592
    PUSH 0x0                            ; 00489594
    MOV EDX,dword ptr [ESP + 0x20]      ; 00489596
    PUSH EDX                            ; 0048959a
    PUSH 0x0                            ; 0048959b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0048959d
    PUSH ECX                            ; 004895a1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004895a2
    PUSH EBX                            ; 004895a6
    MOV ESI,dword ptr [ESP + 0x24]      ; 004895a7
    PUSH ESI                            ; 004895ab
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 ; 004895ac
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 004895b1
    POP ESI                             ; 004895b4
    POP EBX                             ; 004895b5
    RET                                 ; 004895b6

