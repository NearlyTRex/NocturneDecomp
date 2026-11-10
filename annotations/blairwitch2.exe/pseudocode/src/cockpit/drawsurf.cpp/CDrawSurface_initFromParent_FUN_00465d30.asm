; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrawSurface * __cdecl cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00465d30(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface)
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
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468bdc
;   core_script.cpp_CScript_renderEditor_FUN_00521af0 at 00521b2e
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00465d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465d30
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30
    PUSH ESI                            ; 00465d31
    PUSH EDI                            ; 00465d32
    PUSH EBP                            ; 00465d33
    MOV EBX,dword ptr [ESP + 0x14]      ; 00465d34
    MOV EDX,dword ptr [ESP + 0x28]      ; 00465d38
    PUSH EDX                            ; 00465d3c
    MOV ECX,dword ptr [ESP + 0x28]      ; 00465d3d
    PUSH ECX                            ; 00465d41
    MOV ESI,dword ptr [ESP + 0x28]      ; 00465d42
    PUSH ESI                            ; 00465d46
    MOV EDI,dword ptr [ESP + 0x28]      ; 00465d47
    PUSH EDI                            ; 00465d4b
    MOV EBP,dword ptr [ESP + 0x28]      ; 00465d4c
    PUSH EBP                            ; 00465d50
    PUSH EBX                            ; 00465d51
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00465d70 ; 00465d52
        ;   XREF to: 00465d70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00465d70(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00465d57
    MOV EAX,EBX                         ; 00465d5a
    POP EBP                             ; 00465d5c
    POP EDI                             ; 00465d5d
    POP ESI                             ; 00465d5e
    POP EBX                             ; 00465d5f
    RET                                 ; 00465d60

