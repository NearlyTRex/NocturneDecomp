; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00403f40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00403f40
        ;   Label: engine_3d.c_renderPolygonTexturedNormalizedUVLitOp14_FUN_00403f40
    PUSH EBP                            ; 00403f41
    MOV EBP,dword ptr [ESP + 0xc]       ; 00403f42
    LEA ESI,[EBP + 0x18]                ; 00403f46
    LEA EAX,[EBP + 0x8]                 ; 00403f49
    PUSH EAX                            ; 00403f4c
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00403f4d
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00403f52
    TEST EAX,EAX                        ; 00403f55
    JZ 0x0040401c                       ; 00403f57
        ;   XREF to: 0040401c (CONDITIONAL_JUMP)  ; LAB_0040401c
    CMP dword ptr [0x01c38b40],0x0      ; 00403f5d | DAT_01c38b40
    JNZ 0x00403fe8                      ; 00403f64
        ;   XREF to: 00403fe8 (CONDITIONAL_JUMP)  ; LAB_00403fe8
    CMP dword ptr [0x006141c0],0x20     ; 00403f6a | DAT_006141c0
    JNZ 0x00403fdc                      ; 00403f71
        ;   XREF to: 00403fdc (CONDITIONAL_JUMP)  ; LAB_00403fdc
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00403f73 | DAT_01c35e6c
    PUSH EDI                            ; 00403f7d
        ;   Label: LAB_00403f7d
    PUSH EBX                            ; 00403f7e
    MOV EBX,0x1                         ; 00403f7f
    MOV EDI,0x2                         ; 00403f84
    PUSH EBP                            ; 00403f89
    MOV dword ptr [0x01c38b54],EBX      ; 00403f8a | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDI      ; 00403f90 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 00403f96
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00403a20()
    ADD ESP,0x4                         ; 00403f9b
    MOV EAX,ESI                         ; 00403f9e
    XOR EBX,EBX                         ; 00403fa0
    XOR EDX,EDX                         ; 00403fa2
    XOR ECX,ECX                         ; 00403fa4
    MOV ESI,dword ptr [EBP + 0x4]       ; 00403fa6
        ;   Label: LAB_00403fa6
    LEA ESI,[ESI + ESI*0x2]             ; 00403fa9
    CMP EDX,ESI                         ; 00403fac
    JGE 0x0040400c                      ; 00403fae
        ;   XREF to: 0040400c (CONDITIONAL_JUMP)  ; LAB_0040400c
    MOV ESI,dword ptr [EAX]             ; 00403fb0
    MOV dword ptr [ECX + 0x70ca98],ESI  ; 00403fb2 | DAT_0070ca98 | DAT_0070ca9c
    IMUL EDI,ESI,0x30                   ; 00403fb8
    MOV ESI,dword ptr [EAX + 0x4]       ; 00403fbb
    MOV dword ptr [EDI + 0x62202c],ESI  ; 00403fbe | DAT_0062202c
    IMUL EDI,dword ptr [EAX],0x30       ; 00403fc4
    ADD EAX,0xc                         ; 00403fc7
    ADD ECX,0x4                         ; 00403fca
    INC EBX                             ; 00403fcd
    MOV ESI,dword ptr [EAX + -0x4]      ; 00403fce
    ADD EDX,0x3                         ; 00403fd1
    MOV dword ptr [EDI + 0x622030],ESI  ; 00403fd4 | DAT_00622030
    JMP 0x00403fa6                      ; 00403fda
        ;   XREF to: 00403fa6 (UNCONDITIONAL_JUMP)  ; LAB_00403fa6
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00403fdc | DAT_01c35e6c
        ;   Label: LAB_00403fdc
    JMP 0x00403f7d                      ; 00403fe6
        ;   XREF to: 00403f7d (UNCONDITIONAL_JUMP)  ; LAB_00403f7d
    CMP dword ptr [0x006141c0],0x20     ; 00403fe8 | DAT_006141c0
        ;   Label: LAB_00403fe8
    JNZ 0x00403ffd                      ; 00403fef
        ;   XREF to: 00403ffd (CONDITIONAL_JUMP)  ; LAB_00403ffd
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00403ff1 | DAT_01c35e6c
    JMP 0x00403f7d                      ; 00403ffb
        ;   XREF to: 00403f7d (UNCONDITIONAL_JUMP)  ; LAB_00403f7d
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00403ffd | DAT_01c35e6c
        ;   Label: LAB_00403ffd
    JMP 0x00403f7d                      ; 00404007
        ;   XREF to: 00403f7d (UNCONDITIONAL_JUMP)  ; LAB_00403f7d
    PUSH 0x70ca98                       ; 0040400c | DAT_0070ca98
        ;   Label: LAB_0040400c
    PUSH EBX                            ; 00404011
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404012
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404017
    POP EBX                             ; 0040401a
    POP EDI                             ; 0040401b
    MOV EDX,dword ptr [EBP + 0x4]       ; 0040401c
        ;   Label: LAB_0040401c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040401f
    SUB EAX,EDX                         ; 00404026
    LEA EDX,[EAX*0x4 + 0x0]             ; 00404028
    LEA EAX,[EBP + 0x18]                ; 0040402f
    ADD EAX,EDX                         ; 00404032
    POP EBP                             ; 00404034
    POP ESI                             ; 00404035
    RET                                 ; 00404036

