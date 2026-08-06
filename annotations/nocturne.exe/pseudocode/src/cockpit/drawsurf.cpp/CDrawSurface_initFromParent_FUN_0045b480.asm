; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrawSurface * __cdecl cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_0045b480(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; CDrawSurface *   Stack[0x18]:4   parent_surface
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e3cc
;   core_script.cpp_CScript_FUN_004fe9d0 at 004fea0e
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b480
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0045b480
    PUSH ESI                            ; 0045b481
    PUSH EDI                            ; 0045b482
    PUSH EBP                            ; 0045b483
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045b484
    MOV EDX,dword ptr [ESP + 0x28]      ; 0045b488
    PUSH EDX                            ; 0045b48c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0045b48d
    PUSH ECX                            ; 0045b491
    MOV ESI,dword ptr [ESP + 0x28]      ; 0045b492
    PUSH ESI                            ; 0045b496
    MOV EDI,dword ptr [ESP + 0x28]      ; 0045b497
    PUSH EDI                            ; 0045b49b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0045b49c
    PUSH EBP                            ; 0045b4a0
    PUSH EBX                            ; 0045b4a1
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0 ; 0045b4a2
        ;   XREF to: 0045b4c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0045b4a7
    MOV EAX,EBX                         ; 0045b4aa
    POP EBP                             ; 0045b4ac
    POP EDI                             ; 0045b4ad
    POP ESI                             ; 0045b4ae
    POP EBX                             ; 0045b4af
    RET                                 ; 0045b4b0

