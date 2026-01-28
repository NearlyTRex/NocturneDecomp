; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDrawSurface * __cdecl cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0 (CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface)
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
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489d8c
;   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 at 00559dbe
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486ea0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
    PUSH ESI                            ; 00486ea1
    PUSH EDI                            ; 00486ea2
    PUSH EBP                            ; 00486ea3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00486ea4
    MOV EDX,dword ptr [ESP + 0x28]      ; 00486ea8
    PUSH EDX                            ; 00486eac
    MOV ECX,dword ptr [ESP + 0x28]      ; 00486ead
    PUSH ECX                            ; 00486eb1
    MOV ESI,dword ptr [ESP + 0x28]      ; 00486eb2
    PUSH ESI                            ; 00486eb6
    MOV EDI,dword ptr [ESP + 0x28]      ; 00486eb7
    PUSH EDI                            ; 00486ebb
    MOV EBP,dword ptr [ESP + 0x28]      ; 00486ebc
    PUSH EBP                            ; 00486ec0
    PUSH EBX                            ; 00486ec1
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0 ; 00486ec2
        ;   XREF to: 00486ee0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00486ec7
    MOV EAX,EBX                         ; 00486eca
    POP EBP                             ; 00486ecc
    POP EDI                             ; 00486ecd
    POP ESI                             ; 00486ece
    POP EBX                             ; 00486ecf
    RET                                 ; 00486ed0

