; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20(CDrawSurface *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468f80 at 00468f92
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00468b60
;   cockpit_drawsurf.cpp_FUN_00468c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468f20
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20
    PUSH ESI                            ; 00468f21
    PUSH EDI                            ; 00468f22
    PUSH EBP                            ; 00468f23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00468f24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00468f28
    MOV ESI,dword ptr [ESP + 0x20]      ; 00468f2c
    MOV EDI,dword ptr [ESP + 0x24]      ; 00468f30
    PUSH ESI                            ; 00468f34
    PUSH EBP                            ; 00468f35
    MOV EDX,dword ptr [ESP + 0x20]      ; 00468f36
    PUSH EDX                            ; 00468f3a
    PUSH EBX                            ; 00468f3b
    CALL cockpit_drawsurf.cpp_FUN_00468b60 ; 00468f3c
        ;   XREF to: 00468b60 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00468b60(CDrawSurface * this_ptr, int start_x, int y, int end_x)
    ADD ESP,0x10                        ; 00468f41
    PUSH ESI                            ; 00468f44
    PUSH EDI                            ; 00468f45
    MOV ECX,dword ptr [ESP + 0x20]      ; 00468f46
    PUSH ECX                            ; 00468f4a
    PUSH EBX                            ; 00468f4b
    CALL cockpit_drawsurf.cpp_FUN_00468b60 ; 00468f4c
        ;   XREF to: 00468b60 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00468b60(CDrawSurface * this_ptr, int start_x, int y, int end_x)
    ADD ESP,0x10                        ; 00468f51
    PUSH EDI                            ; 00468f54
    PUSH EBP                            ; 00468f55
    MOV EAX,dword ptr [ESP + 0x20]      ; 00468f56
    PUSH EAX                            ; 00468f5a
    PUSH EBX                            ; 00468f5b
    CALL cockpit_drawsurf.cpp_FUN_00468c80 ; 00468f5c
        ;   XREF to: 00468c80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00468c80(CDrawSurface * this_ptr, int x, int start_y, int end_y)
    ADD ESP,0x10                        ; 00468f61
    PUSH EDI                            ; 00468f64
    PUSH EBP                            ; 00468f65
    PUSH ESI                            ; 00468f66
    PUSH EBX                            ; 00468f67
    CALL cockpit_drawsurf.cpp_FUN_00468c80 ; 00468f68
        ;   XREF to: 00468c80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00468c80(CDrawSurface * this_ptr, int x, int start_y, int end_y)
    ADD ESP,0x10                        ; 00468f6d
    POP EBP                             ; 00468f70
    POP EDI                             ; 00468f71
    POP ESI                             ; 00468f72
    POP EBX                             ; 00468f73
    RET                                 ; 00468f74

