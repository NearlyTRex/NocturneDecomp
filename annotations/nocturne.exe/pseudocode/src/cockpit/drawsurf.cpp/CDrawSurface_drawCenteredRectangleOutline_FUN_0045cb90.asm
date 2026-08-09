; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_0045cb90(CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cb90
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangleOutline_FUN_0045cb90
    PUSH ESI                            ; 0045cb91
    PUSH EBP                            ; 0045cb92
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045cb93
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cb97
    MOV EDX,EBX                         ; 0045cb9b
    MOV EAX,EBX                         ; 0045cb9d
    SAR EDX,0x1f                        ; 0045cb9f
    SUB EAX,EDX                         ; 0045cba2
    SAR EAX,0x1                         ; 0045cba4
    ADD EAX,dword ptr [ESP + 0x14]      ; 0045cba6
    TEST BL,0x1                         ; 0045cbaa
    JZ 0x0045cbfc                       ; 0045cbad
        ;   XREF to: 0045cbfc (CONDITIONAL_JUMP)  ; LAB_0045cbfc
    MOV ESI,EAX                         ; 0045cbaf
        ;   Label: LAB_0045cbaf
    MOV EDX,ECX                         ; 0045cbb1
    MOV EAX,ECX                         ; 0045cbb3
    SAR EDX,0x1f                        ; 0045cbb5
    SUB EAX,EDX                         ; 0045cbb8
    SAR EAX,0x1                         ; 0045cbba
    ADD EAX,dword ptr [ESP + 0x18]      ; 0045cbbc
    TEST CL,0x1                         ; 0045cbc0
    JZ 0x0045cbff                       ; 0045cbc3
        ;   XREF to: 0045cbff (CONDITIONAL_JUMP)  ; LAB_0045cbff
    PUSH EAX                            ; 0045cbc5
        ;   Label: LAB_0045cbc5
    MOV EDX,ECX                         ; 0045cbc6
    MOV EAX,ECX                         ; 0045cbc8
    SAR EDX,0x1f                        ; 0045cbca
    SUB EAX,EDX                         ; 0045cbcd
    SAR EAX,0x1                         ; 0045cbcf
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045cbd1
    MOV EDX,EBX                         ; 0045cbd5
    SUB ECX,EAX                         ; 0045cbd7
    MOV EAX,EBX                         ; 0045cbd9
    SAR EDX,0x1f                        ; 0045cbdb
    SUB EAX,EDX                         ; 0045cbde
    SAR EAX,0x1                         ; 0045cbe0
    PUSH ESI                            ; 0045cbe2
    PUSH ECX                            ; 0045cbe3
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cbe4
    SUB ECX,EAX                         ; 0045cbe8
    PUSH ECX                            ; 0045cbea
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045cbeb
    PUSH EBP                            ; 0045cbef
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10 ; 0045cbf0
        ;   XREF to: 0045cb10 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0045cbf5
    POP EBP                             ; 0045cbf8
    POP ESI                             ; 0045cbf9
    POP EBX                             ; 0045cbfa
    RET                                 ; 0045cbfb
    DEC EAX                             ; 0045cbfc
        ;   Label: LAB_0045cbfc
    JMP 0x0045cbaf                      ; 0045cbfd
        ;   XREF to: 0045cbaf (UNCONDITIONAL_JUMP)  ; LAB_0045cbaf
    DEC EAX                             ; 0045cbff
        ;   Label: LAB_0045cbff
    JMP 0x0045cbc5                      ; 0045cc00
        ;   XREF to: 0045cbc5 (UNCONDITIONAL_JUMP)  ; LAB_0045cbc5

