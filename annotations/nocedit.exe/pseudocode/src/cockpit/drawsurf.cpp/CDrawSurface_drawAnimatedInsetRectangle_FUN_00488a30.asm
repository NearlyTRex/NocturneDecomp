; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30 (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; int              Stack[0x18]:4   inset_x
; int              Stack[0x1c]:4   inset_y
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488a30
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30
    PUSH ESI                            ; 00488a31
    MOV ECX,dword ptr [ESP + 0x10]      ; 00488a32
    MOV EBX,dword ptr [ESP + 0x18]      ; 00488a36
    MOV EDX,dword ptr [ESP + 0x14]      ; 00488a3a
    ADD EDX,ECX                         ; 00488a3e
    MOV ECX,dword ptr [ESP + 0x20]      ; 00488a40
    INC EDX                             ; 00488a44
    SUB EDX,ECX                         ; 00488a45
    MOV EAX,EDX                         ; 00488a47
    SAR EDX,0x1f                        ; 00488a49
    SUB EAX,EDX                         ; 00488a4c
    SAR EAX,0x1                         ; 00488a4e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00488a50
    ADD EDX,EBX                         ; 00488a54
    MOV EBX,dword ptr [ESP + 0x24]      ; 00488a56
    INC EDX                             ; 00488a5a
    SUB EDX,EBX                         ; 00488a5b
    MOV ECX,EAX                         ; 00488a5d
    MOV EAX,EDX                         ; 00488a5f
    SAR EDX,0x1f                        ; 00488a61
    SUB EAX,EDX                         ; 00488a64
    SAR EAX,0x1                         ; 00488a66
    LEA EDX,[EBX + EAX*0x1 + -0x1]      ; 00488a68
    PUSH EDX                            ; 00488a6c
    MOV EDX,dword ptr [ESP + 0x24]      ; 00488a6d
    ADD EDX,ECX                         ; 00488a71
    DEC EDX                             ; 00488a73
    PUSH EDX                            ; 00488a74
    PUSH EAX                            ; 00488a75
    PUSH ECX                            ; 00488a76
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00488a77
    PUSH ESI                            ; 00488a7b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 ; 00488a7c
        ;   XREF to: 004887a0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 00488a81
    POP ESI                             ; 00488a84
    POP EBX                             ; 00488a85
    RET                                 ; 00488a86

