; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_004674b0(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; Referenced Globals:
;   int g_INT_0060b270 = 0x1
;   float g_FLOAT_0060b274 = 0.1000000
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_00467610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004674b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_004674b0
    PUSH ESI                            ; 004674b1
    PUSH EDI                            ; 004674b2
    PUSH EBP                            ; 004674b3
    SUB ESP,0x4                         ; 004674b4
    MOV EDX,0x1                         ; 004674b7
    MOV ESI,dword ptr [ESP + 0x28]      ; 004674bc
    MOV EDI,dword ptr [ESP + 0x24]      ; 004674c0
    PUSH ESI                            ; 004674c4
    MOV EBP,dword ptr [ESP + 0x24]      ; 004674c5
    MOV EAX,[0x0060b274]                ; 004674c9 | g_FLOAT_0060b274
    PUSH EDI                            ; 004674ce
    MOV EBX,dword ptr [0x0060b270]      ; 004674cf | g_INT_0060b270
    MOV dword ptr [ESP + 0x8],EAX       ; 004674d5
    PUSH EBP                            ; 004674d9
    MOV EAX,dword ptr [ESP + 0x28]      ; 004674da
    MOV dword ptr [0x0060b270],EDX      ; 004674de | g_INT_0060b270
    PUSH EAX                            ; 004674e4
    MOV EDX,dword ptr [ESP + 0x28]      ; 004674e5
    XOR ECX,ECX                         ; 004674e9
    PUSH EDX                            ; 004674eb
    MOV dword ptr [0x0060b274],ECX      ; 004674ec | g_FLOAT_0060b274
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_00467610 ; 004674f2
        ;   XREF to: 00467610 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_00467610(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004674f7
    MOV EAX,dword ptr [ESP]             ; 004674fa
    MOV dword ptr [0x0060b270],EBX      ; 004674fd | g_INT_0060b270
    MOV [0x0060b274],EAX                ; 00467503 | g_FLOAT_0060b274
    ADD ESP,0x4                         ; 00467508
    POP EBP                             ; 0046750b
    POP EDI                             ; 0046750c
    POP ESI                             ; 0046750d
    POP EBX                             ; 0046750e
    RET                                 ; 0046750f

