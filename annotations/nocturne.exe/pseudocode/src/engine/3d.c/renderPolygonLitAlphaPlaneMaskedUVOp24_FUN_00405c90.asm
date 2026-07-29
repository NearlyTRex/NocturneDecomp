; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; XREF[2]:
;   engine_3d.c_FUN_00405b40 at 00405bbb
;   engine_3d.c_FUN_00408fc0 at 00409159
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b0264
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c038f4
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405c90
        ;   Label: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90
    PUSH EDI                            ; 00405c91
    PUSH EBP                            ; 00405c92
    MOV EBP,dword ptr [0x006b0264]      ; 00405c93 | DAT_006b0264
    MOV EDI,dword ptr [ESP + 0x10]      ; 00405c99
    LEA ESI,[EDI + 0x18]                ; 00405c9d
    LEA EAX,[EDI + 0x8]                 ; 00405ca0
    PUSH EAX                            ; 00405ca3
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00405ca4
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405ca9
    TEST EAX,EAX                        ; 00405cac
    JNZ 0x00405cd2                      ; 00405cae
        ;   XREF to: 00405cd2 (CONDITIONAL_JUMP)  ; LAB_00405cd2
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405cb0
        ;   Label: LAB_00405cb0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00405cb3
    SUB EAX,EDX                         ; 00405cba
    LEA EDX,[EAX*0x4 + 0x0]             ; 00405cbc
    LEA EAX,[EDI + 0x18]                ; 00405cc3
    MOV EBP,dword ptr [0x006b0264]      ; 00405cc6 | DAT_006b0264
    ADD EAX,EDX                         ; 00405ccc
    POP EBP                             ; 00405cce
    POP EDI                             ; 00405ccf
    POP ESI                             ; 00405cd0
    RET                                 ; 00405cd1
    PUSH EDI                            ; 00405cd2
        ;   Label: LAB_00405cd2
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00405cd3
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [0x01c038f4]      ; 00405cd8 | DAT_01c038f4
    ADD ESP,0x4                         ; 00405cde
    TEST EDX,EDX                        ; 00405ce1
    JZ 0x00405da7                       ; 00405ce3
        ;   XREF to: 00405da7 (CONDITIONAL_JUMP)  ; LAB_00405da7
    MOV EDX,dword ptr [0x01c03948]      ; 00405ce9 | DAT_01c03948
    MOV EBP,dword ptr [0x006b0264]      ; 00405cef | DAT_006b0264
    TEST EDX,EDX                        ; 00405cf5
    JNZ 0x00405d80                      ; 00405cf7
        ;   XREF to: 00405d80 (CONDITIONAL_JUMP)  ; LAB_00405d80
    CMP dword ptr [0x005b7624],0x20     ; 00405cfd | DAT_005b7624
    JNZ 0x00405d74                      ; 00405d04
        ;   XREF to: 00405d74 (CONDITIONAL_JUMP)  ; LAB_00405d74
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00405d06 | DAT_01c00c7c
        ;   Label: LAB_00405d06
    PUSH EBX                            ; 00405d10
        ;   Label: LAB_00405d10
    MOV EAX,0x1                         ; 00405d11
    MOV EDX,0xd9                        ; 00405d16
    MOV EBX,0x6b029c                    ; 00405d1b | DAT_006b029c
    XOR ECX,ECX                         ; 00405d20
    MOV [0x01c039a4],EAX                ; 00405d22 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDX      ; 00405d27 | DAT_01c039a0
    MOV EAX,ESI                         ; 00405d2d
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405d2f
        ;   Label: LAB_00405d2f
    LEA EDX,[EDX + EDX*0x2]             ; 00405d32
    MOV dword ptr [0x006b0264],EBP      ; 00405d35 | DAT_006b0264
    CMP ECX,EDX                         ; 00405d3b
    JGE 0x00405deb                      ; 00405d3d
        ;   XREF to: 00405deb (CONDITIONAL_JUMP)  ; LAB_00405deb
    MOV EDX,dword ptr [EAX]             ; 00405d43
    ADD EDX,EBP                         ; 00405d45
    MOV dword ptr [EBX],EDX             ; 00405d47 | DAT_006b029c | DAT_006b02a0
    MOV EDX,dword ptr [EAX]             ; 00405d49
    ADD EDX,EBP                         ; 00405d4b
    IMUL EDX,EDX,0x30                   ; 00405d4d
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405d50
    MOV dword ptr [EDX + 0x5c502c],ESI  ; 00405d53 | DAT_005c502c
    MOV EDX,dword ptr [EAX]             ; 00405d59
    ADD EDX,EBP                         ; 00405d5b
    IMUL ESI,EDX,0x30                   ; 00405d5d
    ADD EAX,0xc                         ; 00405d60
    ADD EBX,0x4                         ; 00405d63
    MOV EDX,dword ptr [EAX + -0x4]      ; 00405d66
    ADD ECX,0x3                         ; 00405d69
    MOV dword ptr [ESI + 0x5c5030],EDX  ; 00405d6c | DAT_005c5030
    JMP 0x00405d2f                      ; 00405d72
        ;   XREF to: 00405d2f (UNCONDITIONAL_JUMP)  ; LAB_00405d2f
    MOV dword ptr [0x01c00c7c],0x530322 ; 00405d74 | DAT_01c00c7c
        ;   Label: LAB_00405d74
    JMP 0x00405d10                      ; 00405d7e
        ;   XREF to: 00405d10 (UNCONDITIONAL_JUMP)  ; LAB_00405d10
    CMP dword ptr [0x005b7624],0x20     ; 00405d80 | DAT_005b7624
        ;   Label: LAB_00405d80
    JNZ 0x00405d98                      ; 00405d87
        ;   XREF to: 00405d98 (CONDITIONAL_JUMP)  ; LAB_00405d98
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00405d89 | DAT_01c00c7c
    JMP 0x00405d10                      ; 00405d93
        ;   XREF to: 00405d10 (UNCONDITIONAL_JUMP)  ; LAB_00405d10
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00405d98 | DAT_01c00c7c
        ;   Label: LAB_00405d98
    JMP 0x00405d10                      ; 00405da2
        ;   XREF to: 00405d10 (UNCONDITIONAL_JUMP)  ; LAB_00405d10
    MOV ECX,dword ptr [0x01c03948]      ; 00405da7 | DAT_01c03948
        ;   Label: LAB_00405da7
    MOV EBP,dword ptr [0x006b0264]      ; 00405dad | DAT_006b0264
    TEST ECX,ECX                        ; 00405db3
    JNZ 0x00405dd3                      ; 00405db5
        ;   XREF to: 00405dd3 (CONDITIONAL_JUMP)  ; LAB_00405dd3
    CMP dword ptr [0x005b7624],0x20     ; 00405db7 | DAT_005b7624
    JZ 0x00405d06                       ; 00405dbe
        ;   XREF to: 00405d06 (CONDITIONAL_JUMP)  ; LAB_00405d06
    MOV dword ptr [0x01c00c7c],0x530322 ; 00405dc4 | DAT_01c00c7c
    JMP 0x00405d10                      ; 00405dce
        ;   XREF to: 00405d10 (UNCONDITIONAL_JUMP)  ; LAB_00405d10
    CMP dword ptr [0x005b7624],0x20     ; 00405dd3 | DAT_005b7624
        ;   Label: LAB_00405dd3
    JNZ 0x00405d98                      ; 00405dda
        ;   XREF to: 00405d98 (CONDITIONAL_JUMP)  ; LAB_00405d98
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00405ddc | DAT_01c00c7c
    JMP 0x00405d10                      ; 00405de6
        ;   XREF to: 00405d10 (UNCONDITIONAL_JUMP)  ; LAB_00405d10
    PUSH 0x6b029c                       ; 00405deb | DAT_006b029c
        ;   Label: LAB_00405deb
    MOV ECX,dword ptr [EDI + 0x4]       ; 00405df0
    PUSH ECX                            ; 00405df3
    CALL engine_clipper.c_FUN_00432cd0  ; 00405df4
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00405df9
    POP EBX                             ; 00405dfc
    JMP 0x00405cb0                      ; 00405dfd
        ;   XREF to: 00405cb0 (UNCONDITIONAL_JUMP)  ; LAB_00405cb0

