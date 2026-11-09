; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrawSurface * __cdecl cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface)
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
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a7ac
;   core_script.cpp_FUN_00529210 at 0052924e
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00467940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467900
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900
    PUSH ESI                            ; 00467901
    PUSH EDI                            ; 00467902
    PUSH EBP                            ; 00467903
    MOV EBX,dword ptr [ESP + 0x14]      ; 00467904
    MOV EDX,dword ptr [ESP + 0x28]      ; 00467908
    PUSH EDX                            ; 0046790c
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046790d
    PUSH ECX                            ; 00467911
    MOV ESI,dword ptr [ESP + 0x28]      ; 00467912
    PUSH ESI                            ; 00467916
    MOV EDI,dword ptr [ESP + 0x28]      ; 00467917
    PUSH EDI                            ; 0046791b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0046791c
    PUSH EBP                            ; 00467920
    PUSH EBX                            ; 00467921
    CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00467940 ; 00467922
        ;   XREF to: 00467940 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00467940(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00467927
    MOV EAX,EBX                         ; 0046792a
    POP EBP                             ; 0046792c
    POP EDI                             ; 0046792d
    POP ESI                             ; 0046792e
    POP EBX                             ; 0046792f
    RET                                 ; 00467930

