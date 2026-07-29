; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_0045bfb0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_0045d6d0 at 0045d700
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e456
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440
;   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bfb0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0045bfb0
    PUSH ESI                            ; 0045bfb1
    PUSH EDI                            ; 0045bfb2
    PUSH EBP                            ; 0045bfb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045bfb4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045bfb8
    MOV EAX,dword ptr [EBX + 0x8]       ; 0045bfbc
    ADD EDX,EAX                         ; 0045bfbf
    MOV dword ptr [ESP + 0x18],EDX      ; 0045bfc1
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045bfc5
    MOV EAX,dword ptr [EBX + 0xc]       ; 0045bfc9
    ADD ECX,EAX                         ; 0045bfcc
    MOV dword ptr [ESP + 0x1c],ECX      ; 0045bfce
    MOV ESI,dword ptr [ESP + 0x20]      ; 0045bfd2
    MOV EAX,dword ptr [EBX + 0x8]       ; 0045bfd6
    ADD ESI,EAX                         ; 0045bfd9
    MOV dword ptr [ESP + 0x20],ESI      ; 0045bfdb
    MOV EDI,dword ptr [ESP + 0x24]      ; 0045bfdf
    MOV EAX,dword ptr [EBX + 0xc]       ; 0045bfe3
    ADD EDI,EAX                         ; 0045bfe6
    MOV dword ptr [ESP + 0x24],EDI      ; 0045bfe8
    MOV EBP,dword ptr [EBX + 0x1c]      ; 0045bfec
    PUSH EBP                            ; 0045bfef
    MOV EAX,dword ptr [EBX + 0x18]      ; 0045bff0
    PUSH EAX                            ; 0045bff3
    MOV EDX,dword ptr [EBX + 0x14]      ; 0045bff4
    PUSH EDX                            ; 0045bff7
    MOV ECX,dword ptr [EBX + 0x10]      ; 0045bff8
    PUSH ECX                            ; 0045bffb
    LEA EAX,[ESP + 0x34]                ; 0045bffc
    PUSH EAX                            ; 0045c000
    LEA EAX,[ESP + 0x34]                ; 0045c001
    PUSH EAX                            ; 0045c005
    LEA EAX,[ESP + 0x34]                ; 0045c006
    PUSH EAX                            ; 0045c00a
    LEA EAX,[ESP + 0x34]                ; 0045c00b
    PUSH EAX                            ; 0045c00f
    PUSH EBX                            ; 0045c010
    CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440 ; 0045c011
        ;   XREF to: 0045c440 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_0045c440(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, ...)
    ADD ESP,0x24                        ; 0045c016
    TEST EAX,EAX                        ; 0045c019
    JNZ 0x0045c022                      ; 0045c01b
        ;   XREF to: 0045c022 (CONDITIONAL_JUMP)  ; LAB_0045c022
    POP EBP                             ; 0045c01d
    POP EDI                             ; 0045c01e
    POP ESI                             ; 0045c01f
    POP EBX                             ; 0045c020
    RET                                 ; 0045c021
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045c022
        ;   Label: LAB_0045c022
    PUSH ESI                            ; 0045c026
    MOV EDI,dword ptr [ESP + 0x24]      ; 0045c027
    PUSH EDI                            ; 0045c02b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0045c02c
    PUSH EBP                            ; 0045c030
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045c031
    PUSH EAX                            ; 0045c035
    PUSH EBX                            ; 0045c036
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0 ; 0045c037
        ;   XREF to: 0045c0f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_0045c0f0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0045c03c
    POP EBP                             ; 0045c03f
    POP EDI                             ; 0045c040
    POP ESI                             ; 0045c041
    POP EBX                             ; 0045c042
    RET                                 ; 0045c043

