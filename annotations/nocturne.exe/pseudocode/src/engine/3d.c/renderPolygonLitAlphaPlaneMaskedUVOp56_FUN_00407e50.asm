; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005b762c
;   undefined4 DAT_005b763c
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_01c00c7c
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

    PUSH EBP                            ; 00407e50
        ;   Label: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00407e51
    ADD EAX,0x8                         ; 00407e55
    MOV EBP,dword ptr [ESP + 0x8]       ; 00407e58
    PUSH EAX                            ; 00407e5c
    ADD EBP,0x18                        ; 00407e5d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00407e60
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00407e65
    TEST EAX,EAX                        ; 00407e68
    JZ 0x00407fe3                       ; 00407e6a
        ;   XREF to: 00407fe3 (CONDITIONAL_JUMP)  ; LAB_00407fe3
    CMP dword ptr [0x01c03948],0x0      ; 00407e70 | DAT_01c03948
    JNZ 0x00407f5d                      ; 00407e77
        ;   XREF to: 00407f5d (CONDITIONAL_JUMP)  ; LAB_00407f5d
    CMP dword ptr [0x005b7624],0x20     ; 00407e7d | DAT_005b7624
    JNZ 0x00407f4e                      ; 00407e84
        ;   XREF to: 00407f4e (CONDITIONAL_JUMP)  ; LAB_00407f4e
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00407e8a | DAT_01c00c7c
    PUSH EDI                            ; 00407e94
        ;   Label: LAB_00407e94
    PUSH ESI                            ; 00407e95
    PUSH EBX                            ; 00407e96
    MOV EBX,dword ptr [ESP + 0x14]      ; 00407e97
    MOV ECX,0xd3                        ; 00407e9b
    PUSH EBX                            ; 00407ea0
    MOV dword ptr [0x01c039a0],ECX      ; 00407ea1 | DAT_01c039a0
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00407ea7
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    MOV ESI,dword ptr [0x005b763c]      ; 00407eac | DAT_005b763c
    ADD ESP,0x4                         ; 00407eb2
    CMP ESI,0xff                        ; 00407eb5
    JL 0x00407f84                       ; 00407ebb
        ;   XREF to: 00407f84 (CONDITIONAL_JUMP)  ; LAB_00407f84
    MOV EDI,0x1                         ; 00407ec1
        ;   Label: LAB_00407ec1
    MOV ECX,EBP                         ; 00407ec6
    XOR EBX,EBX                         ; 00407ec8
    XOR ESI,ESI                         ; 00407eca
    MOV dword ptr [0x01c039a4],EDI      ; 00407ecc | DAT_01c039a4
    XOR EDI,EDI                         ; 00407ed2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407ed4
        ;   Label: LAB_00407ed4
    MOV EAX,dword ptr [EAX + 0x4]       ; 00407ed8
    LEA EAX,[EAX + EAX*0x2]             ; 00407edb
    CMP EBX,EAX                         ; 00407ede
    JGE 0x00407fd2                      ; 00407ee0
        ;   XREF to: 00407fd2 (CONDITIONAL_JUMP)  ; LAB_00407fd2
    MOV EAX,dword ptr [ECX]             ; 00407ee6
    MOV dword ptr [ESI + 0x6b029c],EAX  ; 00407ee8 | DAT_006b029c | DAT_006b02a0
    MOV EBP,dword ptr [0x005b762c]      ; 00407eee | DAT_005b762c
    MOV EAX,dword ptr [ECX + 0x4]       ; 00407ef4
    MOV EDX,dword ptr [ECX + 0x8]       ; 00407ef7
    CMP EBP,0x40                        ; 00407efa
    JG 0x00407f97                       ; 00407efd
        ;   XREF to: 00407f97 (CONDITIONAL_JUMP)  ; LAB_00407f97
    CMP EAX,0x40000                     ; 00407f03
    JGE 0x00407f0f                      ; 00407f08
        ;   XREF to: 00407f0f (CONDITIONAL_JUMP)  ; LAB_00407f0f
    MOV EAX,0x40000                     ; 00407f0a
    CMP EDX,0x40000                     ; 00407f0f
        ;   Label: LAB_00407f0f
    JGE 0x00407f1c                      ; 00407f15
        ;   XREF to: 00407f1c (CONDITIONAL_JUMP)  ; LAB_00407f1c
    MOV EDX,0x40000                     ; 00407f17
    CMP EAX,0xfbffff                    ; 00407f1c
        ;   Label: LAB_00407f1c
    JLE 0x00407f28                      ; 00407f21
        ;   XREF to: 00407f28 (CONDITIONAL_JUMP)  ; LAB_00407f28
    MOV EAX,0xfbffff                    ; 00407f23
    CMP EDX,0xfbffff                    ; 00407f28
        ;   Label: LAB_00407f28
    JG 0x00407f90                       ; 00407f2e
        ;   XREF to: 00407f90 (CONDITIONAL_JUMP)  ; LAB_00407f90
    IMUL EBP,dword ptr [ECX],0x30       ; 00407f30
        ;   Label: LAB_00407f30
    MOV dword ptr [EBP + 0x5c502c],EAX  ; 00407f33 | DAT_005c502c
    IMUL EAX,dword ptr [ECX],0x30       ; 00407f39
    ADD ESI,0x4                         ; 00407f3c
    INC EDI                             ; 00407f3f
    ADD EBX,0x3                         ; 00407f40
    ADD ECX,0xc                         ; 00407f43
    MOV dword ptr [EAX + 0x5c5030],EDX  ; 00407f46 | DAT_005c5030
    JMP 0x00407ed4                      ; 00407f4c
        ;   XREF to: 00407ed4 (UNCONDITIONAL_JUMP)  ; LAB_00407ed4
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407f4e | DAT_01c00c7c
        ;   Label: LAB_00407f4e
    JMP 0x00407e94                      ; 00407f58
        ;   XREF to: 00407e94 (UNCONDITIONAL_JUMP)  ; LAB_00407e94
    CMP dword ptr [0x005b7624],0x20     ; 00407f5d | DAT_005b7624
        ;   Label: LAB_00407f5d
    JNZ 0x00407f75                      ; 00407f64
        ;   XREF to: 00407f75 (CONDITIONAL_JUMP)  ; LAB_00407f75
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407f66 | DAT_01c00c7c
    JMP 0x00407e94                      ; 00407f70
        ;   XREF to: 00407e94 (UNCONDITIONAL_JUMP)  ; LAB_00407e94
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407f75 | DAT_01c00c7c
        ;   Label: LAB_00407f75
    JMP 0x00407e94                      ; 00407f7f
        ;   XREF to: 00407e94 (UNCONDITIONAL_JUMP)  ; LAB_00407e94
    OR byte ptr [0x01c039a0],0x20       ; 00407f84 | DAT_01c039a0
        ;   Label: LAB_00407f84
    JMP 0x00407ec1                      ; 00407f8b
        ;   XREF to: 00407ec1 (UNCONDITIONAL_JUMP)  ; LAB_00407ec1
    MOV EDX,0xfbffff                    ; 00407f90
        ;   Label: LAB_00407f90
    JMP 0x00407f30                      ; 00407f95
        ;   XREF to: 00407f30 (UNCONDITIONAL_JUMP)  ; LAB_00407f30
    CMP EAX,0x10000                     ; 00407f97
        ;   Label: LAB_00407f97
    JGE 0x00407fa3                      ; 00407f9c
        ;   XREF to: 00407fa3 (CONDITIONAL_JUMP)  ; LAB_00407fa3
    MOV EAX,0x10000                     ; 00407f9e
    CMP EDX,0x10000                     ; 00407fa3
        ;   Label: LAB_00407fa3
    JGE 0x00407fb0                      ; 00407fa9
        ;   XREF to: 00407fb0 (CONDITIONAL_JUMP)  ; LAB_00407fb0
    MOV EDX,0x10000                     ; 00407fab
    CMP EAX,0xfeffff                    ; 00407fb0
        ;   Label: LAB_00407fb0
    JLE 0x00407fbc                      ; 00407fb5
        ;   XREF to: 00407fbc (CONDITIONAL_JUMP)  ; LAB_00407fbc
    MOV EAX,0xfeffff                    ; 00407fb7
    CMP EDX,0xfeffff                    ; 00407fbc
        ;   Label: LAB_00407fbc
    JLE 0x00407f30                      ; 00407fc2
        ;   XREF to: 00407f30 (CONDITIONAL_JUMP)  ; LAB_00407f30
    MOV EDX,0xfeffff                    ; 00407fc8
    JMP 0x00407f30                      ; 00407fcd
        ;   XREF to: 00407f30 (UNCONDITIONAL_JUMP)  ; LAB_00407f30
    PUSH 0x6b029c                       ; 00407fd2 | DAT_006b029c
        ;   Label: LAB_00407fd2
    PUSH EDI                            ; 00407fd7
    CALL engine_clipper.c_FUN_00432cd0  ; 00407fd8
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00407fdd
    POP EBX                             ; 00407fe0
    POP ESI                             ; 00407fe1
    POP EDI                             ; 00407fe2
    MOV EDX,dword ptr [ESP + 0x8]       ; 00407fe3
        ;   Label: LAB_00407fe3
    MOV EDX,dword ptr [EDX + 0x4]       ; 00407fe7
    LEA EAX,[EDX*0x4 + 0x0]             ; 00407fea
    SUB EAX,EDX                         ; 00407ff1
    LEA EDX,[EAX*0x4 + 0x0]             ; 00407ff3
    MOV EAX,dword ptr [ESP + 0x8]       ; 00407ffa
    ADD EAX,0x18                        ; 00407ffe
    ADD EAX,EDX                         ; 00408001
    POP EBP                             ; 00408003
    RET                                 ; 00408004

