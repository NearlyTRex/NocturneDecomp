; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004889b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedCenteredRectangle_FUN_004889b0
    PUSH ESI                            ; 004889b1
    PUSH EBP                            ; 004889b2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004889b3
    MOV ECX,dword ptr [ESP + 0x20]      ; 004889b7
    MOV EDX,EBX                         ; 004889bb
    MOV EAX,EBX                         ; 004889bd
    SAR EDX,0x1f                        ; 004889bf
    SUB EAX,EDX                         ; 004889c2
    SAR EAX,0x1                         ; 004889c4
    ADD EAX,dword ptr [ESP + 0x14]      ; 004889c6
    TEST BL,0x1                         ; 004889ca
    JZ 0x00488a1c                       ; 004889cd
        ;   XREF to: 00488a1c (CONDITIONAL_JUMP)  ; LAB_00488a1c
    MOV ESI,EAX                         ; 004889cf
        ;   Label: LAB_004889cf
    MOV EDX,ECX                         ; 004889d1
    MOV EAX,ECX                         ; 004889d3
    SAR EDX,0x1f                        ; 004889d5
    SUB EAX,EDX                         ; 004889d8
    SAR EAX,0x1                         ; 004889da
    ADD EAX,dword ptr [ESP + 0x18]      ; 004889dc
    TEST CL,0x1                         ; 004889e0
    JZ 0x00488a1f                       ; 004889e3
        ;   XREF to: 00488a1f (CONDITIONAL_JUMP)  ; LAB_00488a1f
    PUSH EAX                            ; 004889e5
        ;   Label: LAB_004889e5
    MOV EDX,ECX                         ; 004889e6
    MOV EAX,ECX                         ; 004889e8
    SAR EDX,0x1f                        ; 004889ea
    SUB EAX,EDX                         ; 004889ed
    SAR EAX,0x1                         ; 004889ef
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004889f1
    MOV EDX,EBX                         ; 004889f5
    SUB ECX,EAX                         ; 004889f7
    MOV EAX,EBX                         ; 004889f9
    SAR EDX,0x1f                        ; 004889fb
    SUB EAX,EDX                         ; 004889fe
    SAR EAX,0x1                         ; 00488a00
    PUSH ESI                            ; 00488a02
    PUSH ECX                            ; 00488a03
    MOV ECX,dword ptr [ESP + 0x20]      ; 00488a04
    SUB ECX,EAX                         ; 00488a08
    PUSH ECX                            ; 00488a0a
    MOV EBP,dword ptr [ESP + 0x20]      ; 00488a0b
    PUSH EBP                            ; 00488a0f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0 ; 00488a10
        ;   XREF to: 004887a0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 00488a15
    POP EBP                             ; 00488a18
    POP ESI                             ; 00488a19
    POP EBX                             ; 00488a1a
    RET                                 ; 00488a1b
    DEC EAX                             ; 00488a1c
        ;   Label: LAB_00488a1c
    JMP 0x004889cf                      ; 00488a1d
        ;   XREF to: 004889cf (UNCONDITIONAL_JUMP)  ; LAB_004889cf
    DEC EAX                             ; 00488a1f
        ;   Label: LAB_00488a1f
    JMP 0x004889e5                      ; 00488a20
        ;   XREF to: 004889e5 (UNCONDITIONAL_JUMP)  ; LAB_004889e5

