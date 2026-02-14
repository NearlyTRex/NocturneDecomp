; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0(CDrawSurface *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 at 004877d3
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004878e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
    PUSH ESI                            ; 004878e1
    PUSH EDI                            ; 004878e2
    PUSH EBP                            ; 004878e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004878e4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004878e8
    MOV EDX,dword ptr [ESP + 0x24]      ; 004878ec
    MOV ESI,dword ptr [ESP + 0x18]      ; 004878f0
    ADD EDI,EDX                         ; 004878f4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004878f6
    PUSH EDI                            ; 004878fa
    ADD ESI,ECX                         ; 004878fb
    PUSH ESI                            ; 004878fd
    PUSH EBX                            ; 004878fe
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 004878ff
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00487904
    MOV EBP,dword ptr [ESP + 0x18]      ; 00487907
    PUSH EDI                            ; 0048790b
    SUB EBP,dword ptr [ESP + 0x24]      ; 0048790c
    PUSH EBP                            ; 00487910
    PUSH EBX                            ; 00487911
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487912
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00487917
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048791a
    SUB EDI,dword ptr [ESP + 0x24]      ; 0048791e
    PUSH EDI                            ; 00487922
    PUSH ESI                            ; 00487923
    PUSH EBX                            ; 00487924
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487925
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048792a
    PUSH EDI                            ; 0048792d
    PUSH EBP                            ; 0048792e
    PUSH EBX                            ; 0048792f
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487930
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00487935
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00487938
    MOV EDX,dword ptr [ESP + 0x20]      ; 0048793c
    MOV EDI,dword ptr [ESP + 0x18]      ; 00487940
    ADD ESI,EDX                         ; 00487944
    MOV ECX,dword ptr [ESP + 0x24]      ; 00487946
    PUSH ESI                            ; 0048794a
    ADD EDI,ECX                         ; 0048794b
    PUSH EDI                            ; 0048794d
    PUSH EBX                            ; 0048794e
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048794f
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00487954
    MOV EBP,dword ptr [ESP + 0x24]      ; 00487957
    PUSH ESI                            ; 0048795b
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048795c
    SUB ESI,EBP                         ; 00487960
    PUSH ESI                            ; 00487962
    PUSH EBX                            ; 00487963
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487964
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00487969
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048796c
    SUB EBP,dword ptr [ESP + 0x20]      ; 00487970
    PUSH EBP                            ; 00487974
    PUSH EDI                            ; 00487975
    PUSH EBX                            ; 00487976
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487977
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048797c
    PUSH EBP                            ; 0048797f
    PUSH ESI                            ; 00487980
    PUSH EBX                            ; 00487981
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487982
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00487987
    POP EBP                             ; 0048798a
    POP EDI                             ; 0048798b
    POP ESI                             ; 0048798c
    POP EBX                             ; 0048798d
    RET                                 ; 0048798e

