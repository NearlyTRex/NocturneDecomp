; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770(CDrawSurface *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0 at 00466663
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466770
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_00466770
    PUSH ESI                            ; 00466771
    PUSH EDI                            ; 00466772
    PUSH EBP                            ; 00466773
    MOV EBX,dword ptr [ESP + 0x14]      ; 00466774
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00466778
    MOV EDX,dword ptr [ESP + 0x24]      ; 0046677c
    MOV ESI,dword ptr [ESP + 0x18]      ; 00466780
    ADD EDI,EDX                         ; 00466784
    MOV ECX,dword ptr [ESP + 0x20]      ; 00466786
    PUSH EDI                            ; 0046678a
    ADD ESI,ECX                         ; 0046678b
    PUSH ESI                            ; 0046678d
    PUSH EBX                            ; 0046678e
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 0046678f
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00466794
    MOV EBP,dword ptr [ESP + 0x18]      ; 00466797
    PUSH EDI                            ; 0046679b
    SUB EBP,dword ptr [ESP + 0x24]      ; 0046679c
    PUSH EBP                            ; 004667a0
    PUSH EBX                            ; 004667a1
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004667a2
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004667a7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004667aa
    SUB EDI,dword ptr [ESP + 0x24]      ; 004667ae
    PUSH EDI                            ; 004667b2
    PUSH ESI                            ; 004667b3
    PUSH EBX                            ; 004667b4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004667b5
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004667ba
    PUSH EDI                            ; 004667bd
    PUSH EBP                            ; 004667be
    PUSH EBX                            ; 004667bf
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004667c0
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004667c5
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004667c8
    MOV EDX,dword ptr [ESP + 0x20]      ; 004667cc
    MOV EDI,dword ptr [ESP + 0x18]      ; 004667d0
    ADD ESI,EDX                         ; 004667d4
    MOV ECX,dword ptr [ESP + 0x24]      ; 004667d6
    PUSH ESI                            ; 004667da
    ADD EDI,ECX                         ; 004667db
    PUSH EDI                            ; 004667dd
    PUSH EBX                            ; 004667de
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004667df
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004667e4
    MOV EBP,dword ptr [ESP + 0x24]      ; 004667e7
    PUSH ESI                            ; 004667eb
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004667ec
    SUB ESI,EBP                         ; 004667f0
    PUSH ESI                            ; 004667f2
    PUSH EBX                            ; 004667f3
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004667f4
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004667f9
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004667fc
    SUB EBP,dword ptr [ESP + 0x20]      ; 00466800
    PUSH EBP                            ; 00466804
    PUSH EDI                            ; 00466805
    PUSH EBX                            ; 00466806
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00466807
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046680c
    PUSH EBP                            ; 0046680f
    PUSH ESI                            ; 00466810
    PUSH EBX                            ; 00466811
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00466812
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00466817
    POP EBP                             ; 0046681a
    POP EDI                             ; 0046681b
    POP ESI                             ; 0046681c
    POP EBX                             ; 0046681d
    RET                                 ; 0046681e

