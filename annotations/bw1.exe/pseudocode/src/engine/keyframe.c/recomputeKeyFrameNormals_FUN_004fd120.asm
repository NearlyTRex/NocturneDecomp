; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_keyframe_c_recomputeKeyFrameNormals_FUN_004fd120(SMRGLPrimitiveTriangle *primitive_list)
;
; Parameters:
; SMRGLPrimitiveTriangle * Stack[0x4]:4   primitive_list
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004fc800
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0
;   engine_model.c_FUN_0051fee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd120
        ;   Label: engine_keyframe.c_recomputeKeyFrameNormals_FUN_004fd120
    PUSH ESI                            ; 004fd121
    PUSH EDI                            ; 004fd122
    PUSH EBP                            ; 004fd123
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fd124
    MOV EBX,EAX                         ; 004fd128
    MOV EDX,dword ptr [EAX]             ; 004fd12a
    XOR ESI,ESI                         ; 004fd12c
    XOR EDI,EDI                         ; 004fd12e
    TEST EDX,EDX                        ; 004fd130
    JZ 0x004fd145                       ; 004fd132
        ;   XREF to: 004fd145 (CONDITIONAL_JUMP)  ; LAB_004fd145
    CMP dword ptr [EBX],0x2             ; 004fd134
        ;   Label: LAB_004fd134
    JNZ 0x004fd13c                      ; 004fd137
        ;   XREF to: 004fd13c (CONDITIONAL_JUMP)  ; LAB_004fd13c
    LEA ESI,[EBX + 0xc]                 ; 004fd139
    MOV EAX,dword ptr [EBX]             ; 004fd13c
        ;   Label: LAB_004fd13c
    CMP EAX,0x18                        ; 004fd13e
    JNZ 0x004fd1a5                      ; 004fd141
        ;   XREF to: 004fd1a5 (CONDITIONAL_JUMP)  ; LAB_004fd1a5
    MOV EDI,EBX                         ; 004fd143
        ;   Label: LAB_004fd143
    TEST ESI,ESI                        ; 004fd145
        ;   Label: LAB_004fd145
    JNZ 0x004fd16b                      ; 004fd147
        ;   XREF to: 004fd16b (CONDITIONAL_JUMP)  ; LAB_004fd16b
    MOV EBP,0x5e6adb                    ; 004fd149
    MOV EAX,0x1f5                       ; 004fd14e
    PUSH 0x5e6af0                       ; 004fd153
    MOV dword ptr [0x01d1d400],EBP      ; 004fd158 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004fd15e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004fd163
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004fd168
    TEST EDI,EDI                        ; 004fd16b
        ;   Label: LAB_004fd16b
    JZ 0x004fd1cf                       ; 004fd16d
        ;   XREF to: 004fd1cf (CONDITIONAL_JUMP)  ; LAB_004fd1cf
    MOV EAX,dword ptr [EBX]             ; 004fd16f
        ;   Label: LAB_004fd16f
    CMP EAX,0x19                        ; 004fd171
    JNC 0x004fd200                      ; 004fd174
        ;   XREF to: 004fd200 (CONDITIONAL_JUMP)  ; LAB_004fd200
    CMP EAX,0x18                        ; 004fd17a
    JNZ 0x004fd189                      ; 004fd17d
        ;   XREF to: 004fd189 (CONDITIONAL_JUMP)  ; LAB_004fd189
    PUSH EBX                            ; 004fd17f
        ;   Label: LAB_004fd17f
    PUSH ESI                            ; 004fd180
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0 ; 004fd181
        ;   XREF to: 004fc9c0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    ADD ESP,0x8                         ; 004fd186
        ;   Label: LAB_004fd186
    PUSH EBX                            ; 004fd189
        ;   Label: LAB_004fd189
    CALL engine_model.c_FUN_0051fee0    ; 004fd18a
        ;   XREF to: 0051fee0 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_0051fee0(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004fd18f
    SHL EAX,0x2                         ; 004fd192
    ADD EBX,EAX                         ; 004fd195
    MOV EBP,dword ptr [EBX]             ; 004fd197
    ADD ESP,0x4                         ; 004fd199
    TEST EBP,EBP                        ; 004fd19c
    JNZ 0x004fd16f                      ; 004fd19e
        ;   XREF to: 004fd16f (CONDITIONAL_JUMP)  ; LAB_004fd16f
    POP EBP                             ; 004fd1a0
    POP EDI                             ; 004fd1a1
    POP ESI                             ; 004fd1a2
    POP EBX                             ; 004fd1a3
    RET                                 ; 004fd1a4
    CMP EAX,0x29                        ; 004fd1a5
        ;   Label: LAB_004fd1a5
    JZ 0x004fd143                       ; 004fd1a8
        ;   XREF to: 004fd143 (CONDITIONAL_JUMP)  ; LAB_004fd143
    CMP EAX,0x19                        ; 004fd1aa
    JZ 0x004fd143                       ; 004fd1ad
        ;   XREF to: 004fd143 (CONDITIONAL_JUMP)  ; LAB_004fd143
    PUSH EBX                            ; 004fd1af
    CALL engine_model.c_FUN_0051fee0    ; 004fd1b0
        ;   XREF to: 0051fee0 (UNCONDITIONAL_CALL)  ; int engine_model.c_FUN_0051fee0(SMRGLHeaderExtended * header)
    SHR EAX,0x2                         ; 004fd1b5
    SHL EAX,0x2                         ; 004fd1b8
    ADD EBX,EAX                         ; 004fd1bb
    MOV ECX,dword ptr [EBX]             ; 004fd1bd
    ADD ESP,0x4                         ; 004fd1bf
    TEST ECX,ECX                        ; 004fd1c2
    JNZ 0x004fd134                      ; 004fd1c4
        ;   XREF to: 004fd134 (CONDITIONAL_JUMP)  ; LAB_004fd134
    JMP 0x004fd145                      ; 004fd1ca
        ;   XREF to: 004fd145 (UNCONDITIONAL_JUMP)  ; LAB_004fd145
    MOV EDX,0x5e6b1b                    ; 004fd1cf
        ;   Label: LAB_004fd1cf
    MOV ECX,0x1f6                       ; 004fd1d4
    PUSH 0x5e6b30                       ; 004fd1d9
    MOV dword ptr [0x01d1d400],EDX      ; 004fd1de | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004fd1e4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004fd1ea
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004fd1ef
    JMP 0x004fd16f                      ; 004fd1f2
        ;   XREF to: 004fd16f (UNCONDITIONAL_JUMP)  ; LAB_004fd16f
    PUSH EBX                            ; 004fd1f7
        ;   Label: LAB_004fd1f7
    PUSH ESI                            ; 004fd1f8
    CALL engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004fc800 ; 004fd1f9
        ;   XREF to: 004fc800 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculatePackedSurfaceNormal_FUN_004fc800(CVector3i * vertex_data, SMRGLPrimitiveTriangleIndex * texture)
    JMP 0x004fd186                      ; 004fd1fe
        ;   XREF to: 004fd186 (UNCONDITIONAL_JUMP)  ; LAB_004fd186
    JBE 0x004fd1f7                      ; 004fd200
        ;   XREF to: 004fd1f7 (CONDITIONAL_JUMP)  ; LAB_004fd1f7
        ;   Label: LAB_004fd200
    CMP EAX,0x29                        ; 004fd202
    JZ 0x004fd17f                       ; 004fd205
        ;   XREF to: 004fd17f (CONDITIONAL_JUMP)  ; LAB_004fd17f
    JMP 0x004fd189                      ; 004fd20b
        ;   XREF to: 004fd189 (UNCONDITIONAL_JUMP)  ; LAB_004fd189

