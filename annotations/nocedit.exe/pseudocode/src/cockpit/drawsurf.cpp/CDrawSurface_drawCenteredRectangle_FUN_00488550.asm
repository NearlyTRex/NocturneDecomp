; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550 (CDrawSurface *this_ptr,int center_x,int center_y,int width,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488550
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCenteredRectangle_FUN_00488550
    PUSH ESI                            ; 00488551
    PUSH EBP                            ; 00488552
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00488553
    MOV ECX,dword ptr [ESP + 0x20]      ; 00488557
    MOV EDX,EBX                         ; 0048855b
    MOV EAX,EBX                         ; 0048855d
    SAR EDX,0x1f                        ; 0048855f
    SUB EAX,EDX                         ; 00488562
    SAR EAX,0x1                         ; 00488564
    ADD EAX,dword ptr [ESP + 0x14]      ; 00488566
    TEST BL,0x1                         ; 0048856a
    JZ 0x004885bc                       ; 0048856d
        ;   XREF to: 004885bc (CONDITIONAL_JUMP)  ; LAB_004885bc
    MOV ESI,EAX                         ; 0048856f
        ;   Label: LAB_0048856f
    MOV EDX,ECX                         ; 00488571
    MOV EAX,ECX                         ; 00488573
    SAR EDX,0x1f                        ; 00488575
    SUB EAX,EDX                         ; 00488578
    SAR EAX,0x1                         ; 0048857a
    ADD EAX,dword ptr [ESP + 0x18]      ; 0048857c
    TEST CL,0x1                         ; 00488580
    JZ 0x004885bf                       ; 00488583
        ;   XREF to: 004885bf (CONDITIONAL_JUMP)  ; LAB_004885bf
    PUSH EAX                            ; 00488585
        ;   Label: LAB_00488585
    MOV EDX,ECX                         ; 00488586
    MOV EAX,ECX                         ; 00488588
    SAR EDX,0x1f                        ; 0048858a
    SUB EAX,EDX                         ; 0048858d
    SAR EAX,0x1                         ; 0048858f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00488591
    MOV EDX,EBX                         ; 00488595
    SUB ECX,EAX                         ; 00488597
    MOV EAX,EBX                         ; 00488599
    SAR EDX,0x1f                        ; 0048859b
    SUB EAX,EDX                         ; 0048859e
    SAR EAX,0x1                         ; 004885a0
    PUSH ESI                            ; 004885a2
    PUSH ECX                            ; 004885a3
    MOV ECX,dword ptr [ESP + 0x20]      ; 004885a4
    SUB ECX,EAX                         ; 004885a8
    PUSH ECX                            ; 004885aa
    MOV EBP,dword ptr [ESP + 0x20]      ; 004885ab
    PUSH EBP                            ; 004885af
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0 ; 004885b0
        ;   XREF to: 004884d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 004885b5
    POP EBP                             ; 004885b8
    POP ESI                             ; 004885b9
    POP EBX                             ; 004885ba
    RET                                 ; 004885bb
    DEC EAX                             ; 004885bc
        ;   Label: LAB_004885bc
    JMP 0x0048856f                      ; 004885bd
        ;   XREF to: 0048856f (UNCONDITIONAL_JUMP)  ; LAB_0048856f
    DEC EAX                             ; 004885bf
        ;   Label: LAB_004885bf
    JMP 0x00488585                      ; 004885c0
        ;   XREF to: 00488585 (UNCONDITIONAL_JUMP)  ; LAB_00488585

