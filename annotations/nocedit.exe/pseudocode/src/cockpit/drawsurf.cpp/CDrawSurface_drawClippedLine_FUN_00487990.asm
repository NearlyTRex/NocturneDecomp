; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090 at 004890c0
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489e16
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
;   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487990
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
    PUSH ESI                            ; 00487991
    PUSH EDI                            ; 00487992
    PUSH EBP                            ; 00487993
    MOV EBX,dword ptr [ESP + 0x14]      ; 00487994
    MOV EDX,dword ptr [ESP + 0x18]      ; 00487998
    MOV EAX,dword ptr [EBX + 0x8]       ; 0048799c
    ADD EDX,EAX                         ; 0048799f
    MOV dword ptr [ESP + 0x18],EDX      ; 004879a1
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004879a5
    MOV EAX,dword ptr [EBX + 0xc]       ; 004879a9
    ADD ECX,EAX                         ; 004879ac
    MOV dword ptr [ESP + 0x1c],ECX      ; 004879ae
    MOV ESI,dword ptr [ESP + 0x20]      ; 004879b2
    MOV EAX,dword ptr [EBX + 0x8]       ; 004879b6
    ADD ESI,EAX                         ; 004879b9
    MOV dword ptr [ESP + 0x20],ESI      ; 004879bb
    MOV EDI,dword ptr [ESP + 0x24]      ; 004879bf
    MOV EAX,dword ptr [EBX + 0xc]       ; 004879c3
    ADD EDI,EAX                         ; 004879c6
    MOV dword ptr [ESP + 0x24],EDI      ; 004879c8
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004879cc
    PUSH EBP                            ; 004879cf
    MOV EAX,dword ptr [EBX + 0x18]      ; 004879d0
    PUSH EAX                            ; 004879d3
    MOV EDX,dword ptr [EBX + 0x14]      ; 004879d4
    PUSH EDX                            ; 004879d7
    MOV ECX,dword ptr [EBX + 0x10]      ; 004879d8
    PUSH ECX                            ; 004879db
    LEA EAX,[ESP + 0x34]                ; 004879dc
    PUSH EAX                            ; 004879e0
    LEA EAX,[ESP + 0x34]                ; 004879e1
    PUSH EAX                            ; 004879e5
    LEA EAX,[ESP + 0x34]                ; 004879e6
    PUSH EAX                            ; 004879ea
    LEA EAX,[ESP + 0x34]                ; 004879eb
    PUSH EAX                            ; 004879ef
    PUSH EBX                            ; 004879f0
    CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20 ; 004879f1
        ;   XREF to: 00487e20 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20(CDrawSurface * this_ptr, int * x1, int * y1, int * x2, ...)
    ADD ESP,0x24                        ; 004879f6
    TEST EAX,EAX                        ; 004879f9
    JNZ 0x00487a02                      ; 004879fb
        ;   XREF to: 00487a02 (CONDITIONAL_JUMP)  ; LAB_00487a02
    POP EBP                             ; 004879fd
    POP EDI                             ; 004879fe
    POP ESI                             ; 004879ff
    POP EBX                             ; 00487a00
    RET                                 ; 00487a01
    MOV ESI,dword ptr [ESP + 0x24]      ; 00487a02
        ;   Label: LAB_00487a02
    PUSH ESI                            ; 00487a06
    MOV EDI,dword ptr [ESP + 0x24]      ; 00487a07
    PUSH EDI                            ; 00487a0b
    MOV EBP,dword ptr [ESP + 0x24]      ; 00487a0c
    PUSH EBP                            ; 00487a10
    MOV EAX,dword ptr [ESP + 0x24]      ; 00487a11
    PUSH EAX                            ; 00487a15
    PUSH EBX                            ; 00487a16
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0 ; 00487a17
        ;   XREF to: 00487ad0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 00487a1c
    POP EBP                             ; 00487a1f
    POP EDI                             ; 00487a20
    POP ESI                             ; 00487a21
    POP EBX                             ; 00487a22
    RET                                 ; 00487a23

