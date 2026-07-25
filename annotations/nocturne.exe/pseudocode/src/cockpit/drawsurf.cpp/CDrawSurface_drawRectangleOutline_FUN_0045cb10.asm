; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_0045cb90 at 0045cbf0
;   FUN_0045cc10 at 0045cc5c
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0045cb70 at 0045cb82
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730
;   cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cb10
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
    PUSH ESI                            ; 0045cb11
    PUSH EDI                            ; 0045cb12
    PUSH EBP                            ; 0045cb13
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045cb14
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0045cb18
    MOV ESI,dword ptr [ESP + 0x20]      ; 0045cb1c
    MOV EDI,dword ptr [ESP + 0x24]      ; 0045cb20
    PUSH ESI                            ; 0045cb24
    PUSH EBP                            ; 0045cb25
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045cb26
    PUSH EDX                            ; 0045cb2a
    PUSH EBX                            ; 0045cb2b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730 ; 0045cb2c
        ;   XREF to: 0045c730 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730()
    ADD ESP,0x10                        ; 0045cb31
    PUSH ESI                            ; 0045cb34
    PUSH EDI                            ; 0045cb35
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cb36
    PUSH ECX                            ; 0045cb3a
    PUSH EBX                            ; 0045cb3b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730 ; 0045cb3c
        ;   XREF to: 0045c730 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_0045c730()
    ADD ESP,0x10                        ; 0045cb41
    PUSH EDI                            ; 0045cb44
    PUSH EBP                            ; 0045cb45
    MOV EAX,dword ptr [ESP + 0x20]      ; 0045cb46
    PUSH EAX                            ; 0045cb4a
    PUSH EBX                            ; 0045cb4b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850 ; 0045cb4c
        ;   XREF to: 0045c850 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850()
    ADD ESP,0x10                        ; 0045cb51
    PUSH EDI                            ; 0045cb54
    PUSH EBP                            ; 0045cb55
    PUSH ESI                            ; 0045cb56
    PUSH EBX                            ; 0045cb57
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850 ; 0045cb58
        ;   XREF to: 0045c850 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_0045c850()
    ADD ESP,0x10                        ; 0045cb5d
    POP EBP                             ; 0045cb60
    POP EDI                             ; 0045cb61
    POP ESI                             ; 0045cb62
    POP EBX                             ; 0045cb63
    RET                                 ; 0045cb64

