; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_00467350(CDrawSurface *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0 at 004673c2
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90
;   cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_004670b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467350
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00467350
    PUSH ESI                            ; 00467351
    PUSH EDI                            ; 00467352
    PUSH EBP                            ; 00467353
    MOV EBX,dword ptr [ESP + 0x14]      ; 00467354
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00467358
    MOV ESI,dword ptr [ESP + 0x20]      ; 0046735c
    MOV EDI,dword ptr [ESP + 0x24]      ; 00467360
    PUSH ESI                            ; 00467364
    PUSH EBP                            ; 00467365
    MOV EDX,dword ptr [ESP + 0x20]      ; 00467366
    PUSH EDX                            ; 0046736a
    PUSH EBX                            ; 0046736b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90 ; 0046736c
        ;   XREF to: 00466f90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90(CDrawSurface * this_ptr, int start_x, int y, int end_x)
    ADD ESP,0x10                        ; 00467371
    PUSH ESI                            ; 00467374
    PUSH EDI                            ; 00467375
    MOV ECX,dword ptr [ESP + 0x20]      ; 00467376
    PUSH ECX                            ; 0046737a
    PUSH EBX                            ; 0046737b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90 ; 0046737c
        ;   XREF to: 00466f90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90(CDrawSurface * this_ptr, int start_x, int y, int end_x)
    ADD ESP,0x10                        ; 00467381
    PUSH EDI                            ; 00467384
    PUSH EBP                            ; 00467385
    MOV EAX,dword ptr [ESP + 0x20]      ; 00467386
    PUSH EAX                            ; 0046738a
    PUSH EBX                            ; 0046738b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_004670b0 ; 0046738c
        ;   XREF to: 004670b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_004670b0(CDrawSurface * this_ptr, int x, int start_y, int end_y)
    ADD ESP,0x10                        ; 00467391
    PUSH EDI                            ; 00467394
    PUSH EBP                            ; 00467395
    PUSH ESI                            ; 00467396
    PUSH EBX                            ; 00467397
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_004670b0 ; 00467398
        ;   XREF to: 004670b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_004670b0(CDrawSurface * this_ptr, int x, int start_y, int end_y)
    ADD ESP,0x10                        ; 0046739d
    POP EBP                             ; 004673a0
    POP EDI                             ; 004673a1
    POP ESI                             ; 004673a2
    POP EBX                             ; 004673a3
    RET                                 ; 004673a4

