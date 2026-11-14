; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0047ec80(CDrawSurface *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0 at 0047eb73
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ec80
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0047ec80
    PUSH ESI                            ; 0047ec81
    PUSH EDI                            ; 0047ec82
    PUSH EBP                            ; 0047ec83
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047ec84
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047ec88
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047ec8c
    MOV ESI,dword ptr [ESP + 0x18]      ; 0047ec90
    ADD EDI,EDX                         ; 0047ec94
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047ec96
    PUSH EDI                            ; 0047ec9a
    ADD ESI,ECX                         ; 0047ec9b
    PUSH ESI                            ; 0047ec9d
    PUSH EBX                            ; 0047ec9e
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047ec9f
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047eca4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047eca7
    PUSH EDI                            ; 0047ecab
    SUB EBP,dword ptr [ESP + 0x24]      ; 0047ecac
    PUSH EBP                            ; 0047ecb0
    PUSH EBX                            ; 0047ecb1
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047ecb2
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047ecb7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0047ecba
    SUB EDI,dword ptr [ESP + 0x24]      ; 0047ecbe
    PUSH EDI                            ; 0047ecc2
    PUSH ESI                            ; 0047ecc3
    PUSH EBX                            ; 0047ecc4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047ecc5
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047ecca
    PUSH EDI                            ; 0047eccd
    PUSH EBP                            ; 0047ecce
    PUSH EBX                            ; 0047eccf
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047ecd0
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047ecd5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0047ecd8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047ecdc
    MOV EDI,dword ptr [ESP + 0x18]      ; 0047ece0
    ADD ESI,EDX                         ; 0047ece4
    MOV ECX,dword ptr [ESP + 0x24]      ; 0047ece6
    PUSH ESI                            ; 0047ecea
    ADD EDI,ECX                         ; 0047eceb
    PUSH EDI                            ; 0047eced
    PUSH EBX                            ; 0047ecee
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047ecef
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047ecf4
    MOV EBP,dword ptr [ESP + 0x24]      ; 0047ecf7
    PUSH ESI                            ; 0047ecfb
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0047ecfc
    SUB ESI,EBP                         ; 0047ed00
    PUSH ESI                            ; 0047ed02
    PUSH EBX                            ; 0047ed03
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047ed04
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047ed09
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047ed0c
    SUB EBP,dword ptr [ESP + 0x20]      ; 0047ed10
    PUSH EBP                            ; 0047ed14
    PUSH EDI                            ; 0047ed15
    PUSH EBX                            ; 0047ed16
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047ed17
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047ed1c
    PUSH EBP                            ; 0047ed1f
    PUSH ESI                            ; 0047ed20
    PUSH EBX                            ; 0047ed21
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0047ed22
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0047ed27
    POP EBP                             ; 0047ed2a
    POP EDI                             ; 0047ed2b
    POP ESI                             ; 0047ed2c
    POP EBX                             ; 0047ed2d
    RET                                 ; 0047ed2e

