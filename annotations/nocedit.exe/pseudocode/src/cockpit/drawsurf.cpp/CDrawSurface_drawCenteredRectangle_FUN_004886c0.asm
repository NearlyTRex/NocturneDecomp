; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0(CDrawSurface * this_ptr, int center_x, int center_y, int width, int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004886c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_004886c0
    PUSH ESI                            ; 004886c1
    PUSH EBP                            ; 004886c2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004886c3
    MOV ECX,dword ptr [ESP + 0x20]      ; 004886c7
    MOV EDX,EBX                         ; 004886cb
    MOV EAX,EBX                         ; 004886cd
    SAR EDX,0x1f                        ; 004886cf
    SUB EAX,EDX                         ; 004886d2
    SAR EAX,0x1                         ; 004886d4
    ADD EAX,dword ptr [ESP + 0x14]      ; 004886d6
    TEST BL,0x1                         ; 004886da
    JZ 0x0048872c                       ; 004886dd | LAB_0048872c
        ;   XREF to: 0048872c (CONDITIONAL_JUMP)
    MOV ESI,EAX                         ; 004886df
        ;   Label: LAB_004886df
    MOV EDX,ECX                         ; 004886e1
    MOV EAX,ECX                         ; 004886e3
    SAR EDX,0x1f                        ; 004886e5
    SUB EAX,EDX                         ; 004886e8
    SAR EAX,0x1                         ; 004886ea
    ADD EAX,dword ptr [ESP + 0x18]      ; 004886ec
    TEST CL,0x1                         ; 004886f0
    JZ 0x0048872f                       ; 004886f3 | LAB_0048872f
        ;   XREF to: 0048872f (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004886f5
        ;   Label: LAB_004886f5
    MOV EDX,ECX                         ; 004886f6
    MOV EAX,ECX                         ; 004886f8
    SAR EDX,0x1f                        ; 004886fa
    SUB EAX,EDX                         ; 004886fd
    SAR EAX,0x1                         ; 004886ff
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00488701
    MOV EDX,EBX                         ; 00488705
    SUB ECX,EAX                         ; 00488707
    MOV EAX,EBX                         ; 00488709
    SAR EDX,0x1f                        ; 0048870b
    SUB EAX,EDX                         ; 0048870e
    SAR EAX,0x1                         ; 00488710
    PUSH ESI                            ; 00488712
    PUSH ECX                            ; 00488713
    MOV ECX,dword ptr [ESP + 0x20]      ; 00488714
    SUB ECX,EAX                         ; 00488718
    PUSH ECX                            ; 0048871a
    MOV EBP,dword ptr [ESP + 0x20]      ; 0048871b
    PUSH EBP                            ; 0048871f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630 ; 00488720 | void cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
        ;   XREF to: 00488630 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00488725
    POP EBP                             ; 00488728
    POP ESI                             ; 00488729
    POP EBX                             ; 0048872a
    RET                                 ; 0048872b
    DEC EAX                             ; 0048872c
        ;   Label: LAB_0048872c
    JMP 0x004886df                      ; 0048872d | LAB_004886df
        ;   XREF to: 004886df (UNCONDITIONAL_JUMP)
    DEC EAX                             ; 0048872f
        ;   Label: LAB_0048872f
    JMP 0x004886f5                      ; 00488730 | LAB_004886f5
        ;   XREF to: 004886f5 (UNCONDITIONAL_JUMP)

