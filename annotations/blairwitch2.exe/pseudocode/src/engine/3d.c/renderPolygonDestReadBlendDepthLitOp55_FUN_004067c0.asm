; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_006141d8
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

    PUSH EBX                            ; 004067c0
        ;   Label: engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067c0
    PUSH ESI                            ; 004067c1
    PUSH EBP                            ; 004067c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004067c3
    LEA ESI,[EBX + 0x18]                ; 004067c7
    LEA EAX,[EBX + 0x8]                 ; 004067ca
    PUSH EAX                            ; 004067cd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004067ce
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 004067d3
    TEST EAX,EAX                        ; 004067d6
    JZ 0x00406840                       ; 004067d8
        ;   XREF to: 00406840 (CONDITIONAL_JUMP)  ; LAB_00406840
    CMP dword ptr [0x01c38b40],0x0      ; 004067da | DAT_01c38b40
    JNZ 0x0040685b                      ; 004067e1
        ;   XREF to: 0040685b (CONDITIONAL_JUMP)  ; LAB_0040685b
    CMP dword ptr [0x006141c0],0x20     ; 004067e7 | DAT_006141c0
    JNZ 0x0040684f                      ; 004067ee
        ;   XREF to: 0040684f (CONDITIONAL_JUMP)  ; LAB_0040684f
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004067f0 | DAT_01c35e6c
    PUSH EDI                            ; 004067fa
        ;   Label: LAB_004067fa
    MOV EDI,0xc3                        ; 004067fb
    MOV EBP,dword ptr [0x006141d8]      ; 00406800 | DAT_006141d8
    MOV dword ptr [0x01c38b54],EDI      ; 00406806 | DAT_01c38b54
    CMP EBP,0xff                        ; 0040680c
    JGE 0x0040681e                      ; 00406812
        ;   XREF to: 0040681e (CONDITIONAL_JUMP)  ; LAB_0040681e
    MOV dword ptr [0x01c38b54],0xe3     ; 00406814 | DAT_01c38b54
    MOV EDX,0x1                         ; 0040681e
        ;   Label: LAB_0040681e
    PUSH EBX                            ; 00406823
    MOV dword ptr [0x01c38b58],EDX      ; 00406824 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 0040682a
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00403a20()
    ADD ESP,0x4                         ; 0040682f
    PUSH ESI                            ; 00406832
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406833
    PUSH ECX                            ; 00406836
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00406837
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040683c
    POP EDI                             ; 0040683f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406840
        ;   Label: LAB_00406840
    LEA EAX,[EBX + 0x18]                ; 00406843
    SHL ESI,0x2                         ; 00406846
    ADD EAX,ESI                         ; 00406849
    POP EBP                             ; 0040684b
    POP ESI                             ; 0040684c
    POP EBX                             ; 0040684d
    RET                                 ; 0040684e
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040684f | DAT_01c35e6c
        ;   Label: LAB_0040684f
    JMP 0x004067fa                      ; 00406859
        ;   XREF to: 004067fa (UNCONDITIONAL_JUMP)  ; LAB_004067fa
    CMP dword ptr [0x006141c0],0x20     ; 0040685b | DAT_006141c0
        ;   Label: LAB_0040685b
    JNZ 0x00406870                      ; 00406862
        ;   XREF to: 00406870 (CONDITIONAL_JUMP)  ; LAB_00406870
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406864 | DAT_01c35e6c
    JMP 0x004067fa                      ; 0040686e
        ;   XREF to: 004067fa (UNCONDITIONAL_JUMP)  ; LAB_004067fa
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406870 | DAT_01c35e6c
        ;   Label: LAB_00406870
    JMP 0x004067fa                      ; 0040687a
        ;   XREF to: 004067fa (UNCONDITIONAL_JUMP)  ; LAB_004067fa

