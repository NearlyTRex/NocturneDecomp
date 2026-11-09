; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00466960(CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00466820 at 004668a7
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466960
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00466960
    PUSH ESI                            ; 00466961
    PUSH EDI                            ; 00466962
    PUSH EBP                            ; 00466963
    SUB ESP,0x10                        ; 00466964
    MOV EDI,dword ptr [ESP + 0x28]      ; 00466967
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046696b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0046696f
    MOV ESI,dword ptr [ESP + 0x34]      ; 00466973
    MOV EDX,0x1                         ; 00466977
    MOV EAX,dword ptr [ESP + 0x24]      ; 0046697c
    MOV dword ptr [ESP],EDX             ; 00466980
    MOV ECX,dword ptr [EAX + 0x8]       ; 00466983
    MOV EDX,dword ptr [EAX + 0xc]       ; 00466986
    SUB EDI,ECX                         ; 00466989
    SUB EBX,EDX                         ; 0046698b
    SUB ESI,EDX                         ; 0046698d
    SUB EBP,ECX                         ; 0046698f
    CMP EBX,ESI                         ; 00466991
    JLE 0x004669a1                      ; 00466993
        ;   XREF to: 004669a1 (CONDITIONAL_JUMP)  ; LAB_004669a1
    MOV EAX,EDI                         ; 00466995
    MOV EDI,EBP                         ; 00466997
    MOV EBP,EAX                         ; 00466999
    MOV EAX,EBX                         ; 0046699b
    MOV EBX,ESI                         ; 0046699d
    MOV ESI,EAX                         ; 0046699f
    SUB ESI,EBX                         ; 004669a1
        ;   Label: LAB_004669a1
    SUB EBP,EDI                         ; 004669a3
    MOV dword ptr [ESP + 0xc],ESI       ; 004669a5
    TEST EBP,EBP                        ; 004669a9
    JL 0x004669fb                       ; 004669ab
        ;   XREF to: 004669fb (CONDITIONAL_JUMP)  ; LAB_004669fb
    MOV ESI,EDI                         ; 004669ad
        ;   Label: LAB_004669ad
    MOV EDI,dword ptr [ESP + 0xc]       ; 004669af
    CMP EBP,EDI                         ; 004669b3
    JLE 0x00466a07                      ; 004669b5
        ;   XREF to: 00466a07 (CONDITIONAL_JUMP)  ; LAB_00466a07
    XOR EAX,EAX                         ; 004669b7
    ADD EDI,EDI                         ; 004669b9
    MOV dword ptr [ESP + 0x4],EAX       ; 004669bb
    SUB EDI,EBP                         ; 004669bf
    TEST EBP,EBP                        ; 004669c1
    JL 0x004669f3                       ; 004669c3
        ;   XREF to: 004669f3 (CONDITIONAL_JUMP)  ; LAB_004669f3
    PUSH EBX                            ; 004669c5
        ;   Label: LAB_004669c5
    PUSH ESI                            ; 004669c6
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004669c7
    PUSH EDX                            ; 004669cb
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004669cc
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004669d1
    TEST EDI,EDI                        ; 004669d4
    JLE 0x004669db                      ; 004669d6
        ;   XREF to: 004669db (CONDITIONAL_JUMP)  ; LAB_004669db
    INC EBX                             ; 004669d8
    SUB EDI,EBP                         ; 004669d9
    MOV EAX,dword ptr [ESP]             ; 004669db
        ;   Label: LAB_004669db
    MOV ECX,dword ptr [ESP + 0x4]       ; 004669de
    MOV EDX,dword ptr [ESP + 0xc]       ; 004669e2
    INC ECX                             ; 004669e6
    ADD ESI,EAX                         ; 004669e7
    ADD EDI,EDX                         ; 004669e9
    MOV dword ptr [ESP + 0x4],ECX       ; 004669eb
    CMP EBP,ECX                         ; 004669ef
    JGE 0x004669c5                      ; 004669f1
        ;   XREF to: 004669c5 (CONDITIONAL_JUMP)  ; LAB_004669c5
    ADD ESP,0x10                        ; 004669f3
        ;   Label: LAB_004669f3
    POP EBP                             ; 004669f6
    POP EDI                             ; 004669f7
    POP ESI                             ; 004669f8
    POP EBX                             ; 004669f9
    RET                                 ; 004669fa
    MOV ECX,0xffffffff                  ; 004669fb
        ;   Label: LAB_004669fb
    NEG EBP                             ; 00466a00
    MOV dword ptr [ESP],ECX             ; 00466a02
    JMP 0x004669ad                      ; 00466a05
        ;   XREF to: 004669ad (UNCONDITIONAL_JUMP)  ; LAB_004669ad
    MOV EAX,dword ptr [ESP + 0xc]       ; 00466a07
        ;   Label: LAB_00466a07
    XOR EDX,EDX                         ; 00466a0b
    LEA EDI,[EBP + EBP*0x1]             ; 00466a0d
    MOV dword ptr [ESP + 0x8],EDX       ; 00466a11
    SUB EDI,EAX                         ; 00466a15
    TEST EAX,EAX                        ; 00466a17
    JL 0x004669f3                       ; 00466a19
        ;   XREF to: 004669f3 (CONDITIONAL_JUMP)  ; LAB_004669f3
    PUSH EBX                            ; 00466a1b
        ;   Label: LAB_00466a1b
    PUSH ESI                            ; 00466a1c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00466a1d
    PUSH EAX                            ; 00466a21
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00466a22
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00466a27
    TEST EDI,EDI                        ; 00466a2a
    JLE 0x00466a39                      ; 00466a2c
        ;   XREF to: 00466a39 (CONDITIONAL_JUMP)  ; LAB_00466a39
    MOV ECX,dword ptr [ESP + 0xc]       ; 00466a2e
    MOV EDX,dword ptr [ESP]             ; 00466a32
    SUB EDI,ECX                         ; 00466a35
    ADD ESI,EDX                         ; 00466a37
    MOV EDX,dword ptr [ESP + 0x8]       ; 00466a39
        ;   Label: LAB_00466a39
    MOV ECX,dword ptr [ESP + 0xc]       ; 00466a3d
    INC EBX                             ; 00466a41
    INC EDX                             ; 00466a42
    ADD EDI,EBP                         ; 00466a43
    MOV dword ptr [ESP + 0x8],EDX       ; 00466a45
    CMP EDX,ECX                         ; 00466a49
    JG 0x004669f3                       ; 00466a4b
        ;   XREF to: 004669f3 (CONDITIONAL_JUMP)  ; LAB_004669f3
    JMP 0x00466a1b                      ; 00466a4d
        ;   XREF to: 00466a1b (UNCONDITIONAL_JUMP)  ; LAB_00466a1b

