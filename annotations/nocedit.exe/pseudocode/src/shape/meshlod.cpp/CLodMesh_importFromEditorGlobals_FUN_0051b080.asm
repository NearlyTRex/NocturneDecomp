; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_testLodGeneration_FUN_0051ed60 at 0051ed92
;
; Referenced Globals:
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 DAT_01626420
;   undefined4 DAT_01626424
;   undefined4 DAT_01626428
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;   undefined4 DAT_016e99d0
;   undefined4 DAT_016e99d4
;   ... and 9 more
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
;   shape_meshlod.cpp_CLodMesh_findOrAddLodTexture_FUN_00518790
;   shape_meshlod.cpp_CLodMesh_free_FUN_00515970
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b080
        ;   Label: shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080
    PUSH ESI                            ; 0051b081
    PUSH EDI                            ; 0051b082
    PUSH EBP                            ; 0051b083
    SUB ESP,0x10                        ; 0051b084
    MOV EDX,dword ptr [ESP + 0x24]      ; 0051b087
    PUSH EDX                            ; 0051b08b
    XOR EDI,EDI                         ; 0051b08c
    XOR ESI,ESI                         ; 0051b08e
    CALL shape_meshlod.cpp_CLodMesh_free_FUN_00515970 ; 0051b090
        ;   XREF to: 00515970 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_free_FUN_00515970(CLodMesh * this_ptr)
    MOV ECX,dword ptr [0x016e990c]      ; 0051b095 | g_PolygonCount
    ADD ESP,0x4                         ; 0051b09b
    TEST ECX,ECX                        ; 0051b09e
    JLE 0x0051b0e1                      ; 0051b0a0
        ;   XREF to: 0051b0e1 (CONDITIONAL_JUMP)  ; LAB_0051b0e1
    XOR EBX,EBX                         ; 0051b0a2
    MOV EAX,dword ptr [EBX + 0x16e99b4] ; 0051b0a4 | DAT_016e99b4 | DAT_016e9b38
        ;   Label: LAB_0051b0a4
    SUB EAX,0x2                         ; 0051b0aa
    ADD EDI,EAX                         ; 0051b0ad
    CMP byte ptr [EBX + 0x16e9914],0x0  ; 0051b0af | DAT_016e9914 | DAT_016e9a98
    JZ 0x0051b0d0                       ; 0051b0b6
        ;   XREF to: 0051b0d0 (CONDITIONAL_JUMP)  ; LAB_0051b0d0
    MOV EAX,0x16e9910                   ; 0051b0b8 | g_ModelPolygonData
    ADD EAX,EBX                         ; 0051b0bd
    ADD EAX,0x4                         ; 0051b0bf | DAT_016e9914 | DAT_016e9a98
    PUSH EAX                            ; 0051b0c2 | DAT_016e9914 | DAT_016e9a98
    MOV EBP,dword ptr [ESP + 0x28]      ; 0051b0c3
    PUSH EBP                            ; 0051b0c7
    CALL shape_meshlod.cpp_CLodMesh_findOrAddLodTexture_FUN_00518790 ; 0051b0c8
        ;   XREF to: 00518790 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findOrAddLodTexture_FUN_00518790(CLodMesh * this_ptr, char * texture_filename)
    ADD ESP,0x8                         ; 0051b0cd
    MOV EBP,dword ptr [0x016e990c]      ; 0051b0d0 | g_PolygonCount
        ;   Label: LAB_0051b0d0
    INC ESI                             ; 0051b0d6
    ADD EBX,0x184                       ; 0051b0d7
    CMP ESI,EBP                         ; 0051b0dd
    JL 0x0051b0a4                       ; 0051b0df
        ;   XREF to: 0051b0a4 (CONDITIONAL_JUMP)  ; LAB_0051b0a4
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051b0e1
        ;   Label: LAB_0051b0e1
    MOV EDX,dword ptr [EAX + 0x10]      ; 0051b0e5
    PUSH EDX                            ; 0051b0e8
    PUSH EDI                            ; 0051b0e9
    MOV ECX,dword ptr [0x01626408]      ; 0051b0ea | g_VertexCount
    PUSH ECX                            ; 0051b0f0
    PUSH EAX                            ; 0051b0f1
    MOV EBX,EAX                         ; 0051b0f2
    CALL shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0 ; 0051b0f4
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh * this_ptr, int vertex_count, int tri_count, int lod_texture_count)
    MOV EAX,EBX                         ; 0051b0f9
    XOR ESI,ESI                         ; 0051b0fb
    MOV EDI,dword ptr [EAX]             ; 0051b0fd
    ADD ESP,0x10                        ; 0051b0ff
    TEST EDI,EDI                        ; 0051b102
    JLE 0x0051b150                      ; 0051b104
        ;   XREF to: 0051b150 (CONDITIONAL_JUMP)  ; LAB_0051b150
    XOR EAX,EAX                         ; 0051b106
    XOR EBX,EBX                         ; 0051b108
    MOV EDI,dword ptr [ESP + 0x24]      ; 0051b10a
        ;   Label: LAB_0051b10a
    MOV EDI,dword ptr [EDI + 0x4]       ; 0051b10e
    MOV EDX,dword ptr [EAX + 0x162640c] ; 0051b111 | g_LoadedVertices | DAT_01626420
    MOV dword ptr [EDI + EBX*0x1],EDX   ; 0051b117
    MOV EDI,dword ptr [ESP + 0x24]      ; 0051b11a
    MOV EDI,dword ptr [EDI + 0x4]       ; 0051b11e
    MOV EDX,dword ptr [EAX + 0x1626410] ; 0051b121 | DAT_01626410 | DAT_01626424
    MOV dword ptr [EDI + EBX*0x1 + 0x4],EDX ; 0051b127
    MOV EDI,dword ptr [ESP + 0x24]      ; 0051b12b
    MOV EDI,dword ptr [EDI + 0x4]       ; 0051b12f
    MOV EDX,dword ptr [EAX + 0x1626414] ; 0051b132 | g_LoadedVertices[0].vertex.z | DAT_01626428
    MOV dword ptr [EDI + EBX*0x1 + 0x8],EDX ; 0051b138
    MOV EDI,dword ptr [ESP + 0x24]      ; 0051b13c
    ADD EBX,0x4c4                       ; 0051b140
    INC ESI                             ; 0051b146
    MOV EDX,dword ptr [EDI]             ; 0051b147
    ADD EAX,0x14                        ; 0051b149
    CMP ESI,EDX                         ; 0051b14c
    JL 0x0051b10a                       ; 0051b14e
        ;   XREF to: 0051b10a (CONDITIONAL_JUMP)  ; LAB_0051b10a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051b150
        ;   Label: LAB_0051b150
    XOR ECX,ECX                         ; 0051b154
    MOV ESI,dword ptr [0x016e990c]      ; 0051b156 | g_PolygonCount
    MOV dword ptr [ESP + 0x8],ECX       ; 0051b15c
    MOV dword ptr [ESP + 0x4],ECX       ; 0051b160
    MOV dword ptr [EAX + 0x10],0x0      ; 0051b164
    TEST ESI,ESI                        ; 0051b16b
    JLE 0x0051b261                      ; 0051b16d
        ;   XREF to: 0051b261 (CONDITIONAL_JUMP)  ; LAB_0051b261
    IMUL EDI,dword ptr [ESP + 0x4],0x184 ; 0051b173
        ;   Label: LAB_0051b173
    IMUL EBP,dword ptr [ESP + 0x8],0x8c ; 0051b17b
    MOV EAX,0x2                         ; 0051b183
    MOV dword ptr [ESP + 0xc],EAX       ; 0051b188
    MOV EBX,dword ptr [EDI + 0x16e99b4] ; 0051b18c | DAT_016e99b4
    LEA ESI,[EDI + 0x8]                 ; 0051b192
    CMP EBX,EAX                         ; 0051b195
    JLE 0x0051b24a                      ; 0051b197
        ;   XREF to: 0051b24a (CONDITIONAL_JUMP)  ; LAB_0051b24a
    MOV EAX,0x16e9910                   ; 0051b19d | g_ModelPolygonData
    ADD EAX,EDI                         ; 0051b1a2
    ADD EAX,0x4                         ; 0051b1a4
    MOV dword ptr [ESP],EAX             ; 0051b1a7
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051b1aa
        ;   Label: LAB_0051b1aa
    MOV EBX,dword ptr [ESP + 0x24]      ; 0051b1ae
    MOV DL,byte ptr [EDI + 0x16e9914]   ; 0051b1b2 | DAT_016e9914
    INC ECX                             ; 0051b1b8
    MOV EBX,dword ptr [EBX + 0xc]       ; 0051b1b9
    MOV dword ptr [ESP + 0x8],ECX       ; 0051b1bc
    ADD EBX,EBP                         ; 0051b1c0
    ADD EBP,0x8c                        ; 0051b1c2
    TEST DL,DL                          ; 0051b1c8
    JNZ 0x0051b28b                      ; 0051b1ca
        ;   XREF to: 0051b28b (CONDITIONAL_JUMP)  ; LAB_0051b28b
    MOV dword ptr [EBX],0xffffffff      ; 0051b1d0
    MOV EAX,dword ptr [EDI + 0x16e9a88] ; 0051b1d6 | DAT_016e9a88
        ;   Label: LAB_0051b1d6
    MOV dword ptr [EBX + 0x4],EAX       ; 0051b1dc
    MOV EAX,dword ptr [EDI + 0x16e99c8] ; 0051b1df | DAT_016e99c8
    MOV dword ptr [EBX + 0x10],EAX      ; 0051b1e5
    MOV EAX,dword ptr [EDI + 0x16e9a08] ; 0051b1e8 | DAT_016e9a08
    MOV dword ptr [EBX + 0x1c],EAX      ; 0051b1ee
    MOV EAX,dword ptr [EDI + 0x16e9a48] ; 0051b1f1 | DAT_016e9a48
    MOV dword ptr [EBX + 0x20],EAX      ; 0051b1f7
    MOV EAX,dword ptr [ESI + 0x16e99c4] ; 0051b1fa | DAT_016e99cc | DAT_016e99d0
    MOV dword ptr [EBX + 0x14],EAX      ; 0051b200
    MOV EAX,dword ptr [ESI + 0x16e9a04] ; 0051b203 | DAT_016e9a0c | DAT_016e9a10
    MOV dword ptr [EBX + 0x24],EAX      ; 0051b209
    MOV EAX,dword ptr [ESI + 0x16e9a44] ; 0051b20c | DAT_016e9a4c | DAT_016e9a50
    MOV dword ptr [EBX + 0x28],EAX      ; 0051b212
    MOV EAX,dword ptr [ESI + 0x16e99c8] ; 0051b215 | DAT_016e99d0 | DAT_016e99d4
    ADD ESI,0x4                         ; 0051b21b
    MOV dword ptr [EBX + 0x18],EAX      ; 0051b21e
    FLD float ptr [ESI + 0x16e9a04]     ; 0051b221 | DAT_016e9a10
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051b227
    FSTP float ptr [EBX + 0x2c]         ; 0051b22b
    FLD float ptr [ESI + 0x16e9a44]     ; 0051b22e | DAT_016e9a50
    INC EAX                             ; 0051b234
    FSTP float ptr [EBX + 0x30]         ; 0051b235
    MOV EDX,dword ptr [EDI + 0x16e99b4] ; 0051b238 | DAT_016e99b4
    MOV dword ptr [ESP + 0xc],EAX       ; 0051b23e
    CMP EAX,EDX                         ; 0051b242
    JL 0x0051b1aa                       ; 0051b244
        ;   XREF to: 0051b1aa (CONDITIONAL_JUMP)  ; LAB_0051b1aa
    MOV EDI,dword ptr [ESP + 0x4]       ; 0051b24a
        ;   Label: LAB_0051b24a
    INC EDI                             ; 0051b24e
    MOV EBP,dword ptr [0x016e990c]      ; 0051b24f | g_PolygonCount
    MOV dword ptr [ESP + 0x4],EDI       ; 0051b255
    CMP EDI,EBP                         ; 0051b259
    JL 0x0051b173                       ; 0051b25b
        ;   XREF to: 0051b173 (CONDITIONAL_JUMP)  ; LAB_0051b173
    MOV EAX,dword ptr [ESP + 0x24]      ; 0051b261
        ;   Label: LAB_0051b261
    MOV dword ptr [EAX + 0x18],0x2      ; 0051b265
    MOV dword ptr [EAX + 0x1c],0x2      ; 0051b26c
    PUSH EAX                            ; 0051b273
    MOV dword ptr [EAX + 0x20],0x0      ; 0051b274
    CALL shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 ; 0051b27b
        ;   XREF to: 0051b330 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b280
    ADD ESP,0x10                        ; 0051b283
    POP EBP                             ; 0051b286
    POP EDI                             ; 0051b287
    POP ESI                             ; 0051b288
    POP EBX                             ; 0051b289
    RET                                 ; 0051b28a
    MOV EAX,dword ptr [ESP]             ; 0051b28b
        ;   Label: LAB_0051b28b
    PUSH EAX                            ; 0051b28e
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051b28f
    PUSH EDX                            ; 0051b293
    CALL shape_meshlod.cpp_CLodMesh_findOrAddLodTexture_FUN_00518790 ; 0051b294
        ;   XREF to: 00518790 (UNCONDITIONAL_CALL)  ; int shape_meshlod.cpp_CLodMesh_findOrAddLodTexture_FUN_00518790(CLodMesh * this_ptr, char * texture_filename)
    ADD ESP,0x8                         ; 0051b299
    MOV dword ptr [EBX],EAX             ; 0051b29c
    JMP 0x0051b1d6                      ; 0051b29e
        ;   XREF to: 0051b1d6 (UNCONDITIONAL_JUMP)  ; LAB_0051b1d6

