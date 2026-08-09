; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredSolidRectangle_FUN_0045cd00(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cd00
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredSolidRectangle_FUN_0045cd00
    PUSH ESI                            ; 0045cd01
    PUSH EBP                            ; 0045cd02
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045cd03
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cd07
    MOV EDX,EBX                         ; 0045cd0b
    MOV EAX,EBX                         ; 0045cd0d
    SAR EDX,0x1f                        ; 0045cd0f
    SUB EAX,EDX                         ; 0045cd12
    SAR EAX,0x1                         ; 0045cd14
    ADD EAX,dword ptr [ESP + 0x14]      ; 0045cd16
    TEST BL,0x1                         ; 0045cd1a
    JZ 0x0045cd6c                       ; 0045cd1d
        ;   XREF to: 0045cd6c (CONDITIONAL_JUMP)  ; LAB_0045cd6c
    MOV ESI,EAX                         ; 0045cd1f
        ;   Label: LAB_0045cd1f
    MOV EDX,ECX                         ; 0045cd21
    MOV EAX,ECX                         ; 0045cd23
    SAR EDX,0x1f                        ; 0045cd25
    SUB EAX,EDX                         ; 0045cd28
    SAR EAX,0x1                         ; 0045cd2a
    ADD EAX,dword ptr [ESP + 0x18]      ; 0045cd2c
    TEST CL,0x1                         ; 0045cd30
    JZ 0x0045cd6f                       ; 0045cd33
        ;   XREF to: 0045cd6f (CONDITIONAL_JUMP)  ; LAB_0045cd6f
    PUSH EAX                            ; 0045cd35
        ;   Label: LAB_0045cd35
    MOV EDX,ECX                         ; 0045cd36
    MOV EAX,ECX                         ; 0045cd38
    SAR EDX,0x1f                        ; 0045cd3a
    SUB EAX,EDX                         ; 0045cd3d
    SAR EAX,0x1                         ; 0045cd3f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045cd41
    MOV EDX,EBX                         ; 0045cd45
    SUB ECX,EAX                         ; 0045cd47
    MOV EAX,EBX                         ; 0045cd49
    SAR EDX,0x1f                        ; 0045cd4b
    SUB EAX,EDX                         ; 0045cd4e
    SAR EAX,0x1                         ; 0045cd50
    PUSH ESI                            ; 0045cd52
    PUSH ECX                            ; 0045cd53
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cd54
    SUB ECX,EAX                         ; 0045cd58
    PUSH ECX                            ; 0045cd5a
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045cd5b
    PUSH EBP                            ; 0045cd5f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70 ; 0045cd60
        ;   XREF to: 0045cc70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_0045cc70(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0045cd65
    POP EBP                             ; 0045cd68
    POP ESI                             ; 0045cd69
    POP EBX                             ; 0045cd6a
    RET                                 ; 0045cd6b
    DEC EAX                             ; 0045cd6c
        ;   Label: LAB_0045cd6c
    JMP 0x0045cd1f                      ; 0045cd6d
        ;   XREF to: 0045cd1f (UNCONDITIONAL_JUMP)  ; LAB_0045cd1f
    DEC EAX                             ; 0045cd6f
        ;   Label: LAB_0045cd6f
    JMP 0x0045cd35                      ; 0045cd70
        ;   XREF to: 0045cd35 (UNCONDITIONAL_JUMP)  ; LAB_0045cd35

