; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00403f70(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_007303e0
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403f70
        ;   Label: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00403f70
    PUSH ESI                            ; 00403f71
    PUSH EDI                            ; 00403f72
    PUSH EBP                            ; 00403f73
    MOV EBP,dword ptr [0x007303e0]      ; 00403f74 | DAT_007303e0
    MOV EDI,dword ptr [ESP + 0x14]      ; 00403f7a
    MOV EDX,dword ptr [0x01c6e2a0]      ; 00403f7e | DAT_01c6e2a0
    LEA ESI,[EDI + 0x18]                ; 00403f84
    TEST EDX,EDX                        ; 00403f87
    JNZ 0x00404013                      ; 00403f89
        ;   XREF to: 00404013 (CONDITIONAL_JUMP)  ; LAB_00404013
    CMP dword ptr [0x005fba20],0x20     ; 00403f8f | DAT_005fba20
    JNZ 0x00404007                      ; 00403f96
        ;   XREF to: 00404007 (CONDITIONAL_JUMP)  ; LAB_00404007
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00403f98 | DAT_01c6b5cc
    MOV EAX,0x1                         ; 00403fa2
        ;   Label: LAB_00403fa2
    PUSH EDI                            ; 00403fa7
    XOR EDX,EDX                         ; 00403fa8
    XOR EBX,EBX                         ; 00403faa
    MOV [0x01c6e2b4],EAX                ; 00403fac | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 00403fb1 | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 00403fb7
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    MOV ECX,0x730418                    ; 00403fbc
    ADD ESP,0x4                         ; 00403fc1
    MOV EAX,ESI                         ; 00403fc4
    MOV EDX,dword ptr [EDI + 0x4]       ; 00403fc6
        ;   Label: LAB_00403fc6
    LEA EDX,[EDX + EDX*0x2]             ; 00403fc9
    MOV EBP,dword ptr [0x007303e0]      ; 00403fcc | DAT_007303e0
    CMP EBX,EDX                         ; 00403fd2
    JGE 0x0040403a                      ; 00403fd4
        ;   XREF to: 0040403a (CONDITIONAL_JUMP)  ; LAB_0040403a
    MOV EDX,dword ptr [EAX]             ; 00403fd6
    ADD EDX,EBP                         ; 00403fd8
    MOV dword ptr [ECX],EDX             ; 00403fda
    MOV EDX,dword ptr [EAX]             ; 00403fdc
    ADD EDX,EBP                         ; 00403fde
    IMUL EDX,EDX,0x30                   ; 00403fe0
    MOV ESI,dword ptr [EAX + 0x4]       ; 00403fe3
    MOV dword ptr [EDX + 0x60b02c],ESI  ; 00403fe6
    MOV EDX,dword ptr [EAX]             ; 00403fec
    ADD EDX,EBP                         ; 00403fee
    IMUL ESI,EDX,0x30                   ; 00403ff0
    ADD EAX,0xc                         ; 00403ff3
    ADD ECX,0x4                         ; 00403ff6
    MOV EDX,dword ptr [EAX + -0x4]      ; 00403ff9
    ADD EBX,0x3                         ; 00403ffc
    MOV dword ptr [ESI + 0x60b030],EDX  ; 00403fff
    JMP 0x00403fc6                      ; 00404005
        ;   XREF to: 00403fc6 (UNCONDITIONAL_JUMP)  ; LAB_00403fc6
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404007 | DAT_01c6b5cc
        ;   Label: LAB_00404007
    JMP 0x00403fa2                      ; 00404011
        ;   XREF to: 00403fa2 (UNCONDITIONAL_JUMP)  ; LAB_00403fa2
    CMP dword ptr [0x005fba20],0x20     ; 00404013 | DAT_005fba20
        ;   Label: LAB_00404013
    JNZ 0x0040402b                      ; 0040401a
        ;   XREF to: 0040402b (CONDITIONAL_JUMP)  ; LAB_0040402b
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0040401c | DAT_01c6b5cc
    JMP 0x00403fa2                      ; 00404026
        ;   XREF to: 00403fa2 (UNCONDITIONAL_JUMP)  ; LAB_00403fa2
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0040402b | DAT_01c6b5cc
        ;   Label: LAB_0040402b
    JMP 0x00403fa2                      ; 00404035
        ;   XREF to: 00403fa2 (UNCONDITIONAL_JUMP)  ; LAB_00403fa2
    PUSH 0x730418                       ; 0040403a
        ;   Label: LAB_0040403a
    MOV ECX,dword ptr [EDI + 0x4]       ; 0040403f
    PUSH ECX                            ; 00404042
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00404043
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    MOV EDX,dword ptr [EDI + 0x4]       ; 00404048
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040404b
    ADD EDI,0x18                        ; 00404052
    SUB EAX,EDX                         ; 00404055
    MOV EBP,dword ptr [0x007303e0]      ; 00404057 | DAT_007303e0
    SHL EAX,0x2                         ; 0040405d
    ADD ESP,0x8                         ; 00404060
    ADD EAX,EDI                         ; 00404063
    POP EBP                             ; 00404065
    POP EDI                             ; 00404066
    POP ESI                             ; 00404067
    POP EBX                             ; 00404068
    RET                                 ; 00404069

