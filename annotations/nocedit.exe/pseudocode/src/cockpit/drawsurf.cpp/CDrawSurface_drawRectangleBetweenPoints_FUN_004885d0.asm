; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int border_width,int border_height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; int              Stack[0x18]:4   border_width
; int              Stack[0x1c]:4   border_height
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004885d0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0
    PUSH ESI                            ; 004885d1
    MOV ECX,dword ptr [ESP + 0x10]      ; 004885d2
    MOV EBX,dword ptr [ESP + 0x18]      ; 004885d6
    MOV EDX,dword ptr [ESP + 0x14]      ; 004885da
    ADD EDX,ECX                         ; 004885de
    MOV ECX,dword ptr [ESP + 0x20]      ; 004885e0
    INC EDX                             ; 004885e4
    SUB EDX,ECX                         ; 004885e5
    MOV EAX,EDX                         ; 004885e7
    SAR EDX,0x1f                        ; 004885e9
    SUB EAX,EDX                         ; 004885ec
    SAR EAX,0x1                         ; 004885ee
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004885f0
    ADD EDX,EBX                         ; 004885f4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004885f6
    INC EDX                             ; 004885fa
    SUB EDX,EBX                         ; 004885fb
    MOV ECX,EAX                         ; 004885fd
    MOV EAX,EDX                         ; 004885ff
    SAR EDX,0x1f                        ; 00488601
    SUB EAX,EDX                         ; 00488604
    SAR EAX,0x1                         ; 00488606
    LEA EDX,[EBX + EAX*0x1 + -0x1]      ; 00488608
    PUSH EDX                            ; 0048860c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0048860d
    ADD EDX,ECX                         ; 00488611
    DEC EDX                             ; 00488613
    PUSH EDX                            ; 00488614
    PUSH EAX                            ; 00488615
    PUSH ECX                            ; 00488616
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00488617
    PUSH ESI                            ; 0048861b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0 ; 0048861c
        ;   XREF to: 004884d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00488621
    POP ESI                             ; 00488624
    POP EBX                             ; 00488625
    RET                                 ; 00488626

