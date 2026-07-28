; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_0045bd50(CDrawSurface *this_ptr,int center_x,int center_y,int radius)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   center_y
; int              Stack[0x10]:4   radius
;
; XREF[5]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0045bea0 at 0045beb8
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0045bed0 at 0045bee8
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0045be40 at 0045be58
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0045be70 at 0045be88
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e469
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bd50
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0045bd50
    PUSH ESI                            ; 0045bd51
    PUSH EDI                            ; 0045bd52
    PUSH EBP                            ; 0045bd53
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045bd54
    TEST EBP,EBP                        ; 0045bd58
    JLE 0x0045bdb4                      ; 0045bd5a
        ;   XREF to: 0045bdb4 (CONDITIONAL_JUMP)  ; LAB_0045bdb4
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045bd5c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045bd60
    MOV EAX,dword ptr [EAX + 0x8]       ; 0045bd64
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045bd67
    ADD EDX,EAX                         ; 0045bd6b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045bd6d
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045bd71
    MOV ESI,dword ptr [EBX + 0x10]      ; 0045bd75
    MOV EAX,dword ptr [EAX + 0xc]       ; 0045bd78
    MOV dword ptr [ESP + 0x18],EDX      ; 0045bd7b
    ADD ECX,EAX                         ; 0045bd7f
    LEA EAX,[EDX + EBP*0x1]             ; 0045bd81
    MOV dword ptr [ESP + 0x1c],ECX      ; 0045bd84
    CMP EAX,ESI                         ; 0045bd88
    JGE 0x0045bd96                      ; 0045bd8a
        ;   XREF to: 0045bd96 (CONDITIONAL_JUMP)  ; LAB_0045bd96
    MOV EDI,dword ptr [EBX + 0x14]      ; 0045bd8c
    LEA EAX,[ECX + EBP*0x1]             ; 0045bd8f
    CMP EAX,EDI                         ; 0045bd92
    JL 0x0045bdb4                       ; 0045bd94
        ;   XREF to: 0045bdb4 (CONDITIONAL_JUMP)  ; LAB_0045bdb4
    MOV EBX,dword ptr [ESP + 0x14]      ; 0045bd96
        ;   Label: LAB_0045bd96
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045bd9a
    MOV EDX,dword ptr [EBX + 0x18]      ; 0045bd9e
    SUB EAX,EBP                         ; 0045bda1
    CMP EAX,EDX                         ; 0045bda3
    JLE 0x0045bdb9                      ; 0045bda5
        ;   XREF to: 0045bdb9 (CONDITIONAL_JUMP)  ; LAB_0045bdb9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045bda7
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0045bdab
    SUB EAX,EBP                         ; 0045bdae
    CMP EAX,ECX                         ; 0045bdb0
    JLE 0x0045bdb9                      ; 0045bdb2
        ;   XREF to: 0045bdb9 (CONDITIONAL_JUMP)  ; LAB_0045bdb9
    POP EBP                             ; 0045bdb4
        ;   Label: LAB_0045bdb4
    POP EDI                             ; 0045bdb5
    POP ESI                             ; 0045bdb6
    POP EBX                             ; 0045bdb7
    RET                                 ; 0045bdb8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045bdb9
        ;   Label: LAB_0045bdb9
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045bdbd
    SUB EBX,dword ptr [EAX + 0x8]       ; 0045bdc1
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045bdc4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045bdc8
    SUB ESI,dword ptr [EAX + 0xc]       ; 0045bdcc
    PUSH EBP                            ; 0045bdcf
    MOV dword ptr [ESP + 0x20],ESI      ; 0045bdd0
    XOR ESI,ESI                         ; 0045bdd4
    PUSH ESI                            ; 0045bdd6
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045bdd7
    MOV dword ptr [ESP + 0x20],EBX      ; 0045bddb
    PUSH EAX                            ; 0045bddf
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045bde0
    PUSH EDX                            ; 0045bde4
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045bde5
    MOV EDI,0x1                         ; 0045bde9
    PUSH ECX                            ; 0045bdee
    SUB EDI,EBP                         ; 0045bdef
    MOV EBX,EBP                         ; 0045bdf1
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00 ; 0045bdf3
        ;   XREF to: 0045bf00 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0045bdf8
    TEST EBP,EBP                        ; 0045bdfb
    JLE 0x0045bdb4                      ; 0045bdfd
        ;   XREF to: 0045bdb4 (CONDITIONAL_JUMP)  ; LAB_0045bdb4
    MOV EBP,0x1                         ; 0045bdff
    INC ESI                             ; 0045be04
        ;   Label: LAB_0045be04
    ADD EBP,0x2                         ; 0045be05
    TEST EDI,EDI                        ; 0045be08
    JL 0x0045be35                       ; 0045be0a
        ;   XREF to: 0045be35 (CONDITIONAL_JUMP)  ; LAB_0045be35
    MOV EAX,ESI                         ; 0045be0c
    DEC EBX                             ; 0045be0e
    SUB EAX,EBX                         ; 0045be0f
    ADD EAX,EAX                         ; 0045be11
    INC EAX                             ; 0045be13
    ADD EDI,EAX                         ; 0045be14
    PUSH EBX                            ; 0045be16
        ;   Label: LAB_0045be16
    PUSH ESI                            ; 0045be17
    MOV EAX,dword ptr [ESP + 0x24]      ; 0045be18
    PUSH EAX                            ; 0045be1c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045be1d
    PUSH EDX                            ; 0045be21
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045be22
    PUSH ECX                            ; 0045be26
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00 ; 0045be27
        ;   XREF to: 0045bf00 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleCornerPoints_FUN_0045bf00(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0045be2c
    CMP ESI,EBX                         ; 0045be2f
    JGE 0x0045bdb4                      ; 0045be31
        ;   XREF to: 0045bdb4 (CONDITIONAL_JUMP)  ; LAB_0045bdb4
    JMP 0x0045be04                      ; 0045be33
        ;   XREF to: 0045be04 (UNCONDITIONAL_JUMP)  ; LAB_0045be04
    ADD EDI,EBP                         ; 0045be35
        ;   Label: LAB_0045be35
    JMP 0x0045be16                      ; 0045be37
        ;   XREF to: 0045be16 (UNCONDITIONAL_JUMP)  ; LAB_0045be16

