; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_3d_c_FUN_00406b80(SMRGLHeaderPrimitive *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;   engine_matrix.c_normalizeVector3DFixed_FUN_004cde10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406b80
        ;   Label: engine_3d.c_FUN_00406b80
    PUSH ESI                            ; 00406b81
    PUSH EDI                            ; 00406b82
    PUSH EBP                            ; 00406b83
    SUB ESP,0x18                        ; 00406b84
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00406b87
    MOV EAX,dword ptr [EBX + 0x8]       ; 00406b8b
    MOV dword ptr [ESP],EAX             ; 00406b8e
    MOV EAX,dword ptr [EBX + 0xc]       ; 00406b91
    MOV dword ptr [ESP + 0x4],EAX       ; 00406b94
    MOV EAX,dword ptr [EBX + 0x10]      ; 00406b98
    MOV dword ptr [ESP + 0x8],EAX       ; 00406b9b
    MOV EAX,ESP                         ; 00406b9f
    PUSH EAX                            ; 00406ba1
    LEA ESI,[ESP + 0x10]                ; 00406ba2
    LEA EDI,[ESP + 0x4]                 ; 00406ba6
    CALL engine_matrix.c_normalizeVector3DFixed_FUN_004cde10 ; 00406baa
        ;   XREF to: 004cde10 (UNCONDITIONAL_CALL)  ; CVector3i * engine_matrix.c_normalizeVector3DFixed_FUN_004cde10(CVector3i * input_vector, CVector3i * output_vector)
    LEA ESI,[ESP + 0x10]                ; 00406baf
    ADD ESP,0x4                         ; 00406bb3
    MOVSD ES:EDI,ESI                    ; 00406bb6
    MOVSD ES:EDI,ESI                    ; 00406bb7
    MOVSD ES:EDI,ESI                    ; 00406bb8
    LEA ESI,[EBX + 0x18]                ; 00406bb9
    LEA EAX,[EBX + 0x8]                 ; 00406bbc
    PUSH EAX                            ; 00406bbf
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00406bc0
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406bc5
    TEST EAX,EAX                        ; 00406bc8
    JZ 0x00406c14                       ; 00406bca
        ;   XREF to: 00406c14 (CONDITIONAL_JUMP)  ; LAB_00406c14
    CMP dword ptr [0x01c03948],0x0      ; 00406bcc | DAT_01c03948
    JNZ 0x00406c33                      ; 00406bd3
        ;   XREF to: 00406c33 (CONDITIONAL_JUMP)  ; LAB_00406c33
    CMP dword ptr [0x005b7624],0x20     ; 00406bd5 | DAT_005b7624
    JNZ 0x00406c27                      ; 00406bdc
        ;   XREF to: 00406c27 (CONDITIONAL_JUMP)  ; LAB_00406c27
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406bde | DAT_01c00c7c
    MOV EDI,0x1                         ; 00406be8
        ;   Label: LAB_00406be8
    MOV EBP,0x2                         ; 00406bed
    PUSH EBX                            ; 00406bf2
    MOV dword ptr [0x01c039a0],EDI      ; 00406bf3 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00406bf9 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00406bff
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406c04
    PUSH ESI                            ; 00406c07
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406c08
    PUSH EAX                            ; 00406c0b
    CALL engine_clipper.c_FUN_00432cd0  ; 00406c0c
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00406c11
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406c14
        ;   Label: LAB_00406c14
    LEA EAX,[EBX + 0x18]                ; 00406c17
    SHL ESI,0x2                         ; 00406c1a
    ADD EAX,ESI                         ; 00406c1d
    ADD ESP,0x18                        ; 00406c1f
    POP EBP                             ; 00406c22
    POP EDI                             ; 00406c23
    POP ESI                             ; 00406c24
    POP EBX                             ; 00406c25
    RET                                 ; 00406c26
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406c27 | DAT_01c00c7c
        ;   Label: LAB_00406c27
    JMP 0x00406be8                      ; 00406c31
        ;   XREF to: 00406be8 (UNCONDITIONAL_JUMP)  ; LAB_00406be8
    CMP dword ptr [0x005b7624],0x20     ; 00406c33 | DAT_005b7624
        ;   Label: LAB_00406c33
    JNZ 0x00406c48                      ; 00406c3a
        ;   XREF to: 00406c48 (CONDITIONAL_JUMP)  ; LAB_00406c48
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406c3c | DAT_01c00c7c
    JMP 0x00406be8                      ; 00406c46
        ;   XREF to: 00406be8 (UNCONDITIONAL_JUMP)  ; LAB_00406be8
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406c48 | DAT_01c00c7c
        ;   Label: LAB_00406c48
    JMP 0x00406be8                      ; 00406c52
        ;   XREF to: 00406be8 (UNCONDITIONAL_JUMP)  ; LAB_00406be8

