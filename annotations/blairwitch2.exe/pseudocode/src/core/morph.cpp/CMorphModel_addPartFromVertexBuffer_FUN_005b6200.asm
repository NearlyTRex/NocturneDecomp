; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; CVector3i *      Stack[0xc]:4   skinned_vertices
; int              Stack[0x10]:4   tri_count
; SInputFace *     Stack[0x14]:4   tri_data
; STextureSet *    Stack[0x18]:4   texture_sets
; int *            Stack[0x1c]:4   index_data
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350 at 005b639f
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005f153e
;   TerminatedCString s_CMorphModel_addPart_too_005f1550
;   TerminatedCString s_core_morph_cpp_005f1577
;   TerminatedCString s_CMorphModel_setup_out_of_005f1589
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
;   core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780
;   crt_memory.c_realloc_FUN_005b8ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6200
        ;   Label: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200
    PUSH ESI                            ; 005b6201
    PUSH EDI                            ; 005b6202
    PUSH EBP                            ; 005b6203
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b6204
    CMP dword ptr [EBX],0x5             ; 005b6208
    JGE 0x005b62f0                      ; 005b620b
        ;   XREF to: 005b62f0 (CONDITIONAL_JUMP)  ; LAB_005b62f0
    MOV EAX,dword ptr [EBX]             ; 005b6211
        ;   Label: LAB_005b6211
    SHL EAX,0x4                         ; 005b6213
    LEA EDX,[EBX + EAX*0x1]             ; 005b6216
    MOV EAX,dword ptr [EBX + 0x54]      ; 005b6219
    MOV dword ptr [EDX + 0xc],EAX       ; 005b621c
    MOV EAX,dword ptr [EBX]             ; 005b621f
    SHL EAX,0x4                         ; 005b6221
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b6224
    MOV dword ptr [EBX + EAX*0x1 + 0x4],EDX ; 005b6228
    MOV EAX,dword ptr [EBX]             ; 005b622c
    SHL EAX,0x4                         ; 005b622e
    LEA EDX,[EBX + EAX*0x1]             ; 005b6231
    MOV EAX,dword ptr [EBX + 0x5c]      ; 005b6234
    MOV dword ptr [EDX + 0x10],EAX      ; 005b6237
    MOV EAX,dword ptr [EBX]             ; 005b623a
    SHL EAX,0x4                         ; 005b623c
    MOV EDX,dword ptr [ESP + 0x20]      ; 005b623f
    MOV dword ptr [EBX + EAX*0x1 + 0x8],EDX ; 005b6243
    MOV EAX,dword ptr [EBX]             ; 005b6247
    SHL EAX,0x4                         ; 005b6249
    MOV EDI,dword ptr [EBX + 0x54]      ; 005b624c
    ADD EDI,dword ptr [EBX + EAX*0x1 + 0x4] ; 005b624f
    MOV EAX,dword ptr [EBX]             ; 005b6253
    MOV dword ptr [EBX + 0x54],EDI      ; 005b6255
    SHL EAX,0x4                         ; 005b6258
    MOV EBP,dword ptr [EBX + 0x5c]      ; 005b625b
    ADD EBP,dword ptr [EBX + EAX*0x1 + 0x8] ; 005b625e
    MOV EAX,dword ptr [EBX + 0x54]      ; 005b6262
    SHL EAX,0x4                         ; 005b6265
    PUSH EAX                            ; 005b6268
    MOV EAX,dword ptr [EBX + 0x58]      ; 005b6269
    PUSH EAX                            ; 005b626c
    MOV dword ptr [EBX + 0x5c],EBP      ; 005b626d
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 005b6270
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x58],EAX      ; 005b6275
    MOV EAX,dword ptr [EBX + 0x5c]      ; 005b6278
    SHL EAX,0x2                         ; 005b627b
    MOV EDX,EAX                         ; 005b627e
    SHL EAX,0x4                         ; 005b6280
    ADD ESP,0x8                         ; 005b6283
    SUB EAX,EDX                         ; 005b6286
    PUSH EAX                            ; 005b6288
    MOV EDX,dword ptr [EBX + 0x60]      ; 005b6289
    PUSH EDX                            ; 005b628c
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 005b628d
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005b6292
    MOV ECX,dword ptr [EBX]             ; 005b6295
    MOV dword ptr [EBX + 0x60],EAX      ; 005b6297
    INC ECX                             ; 005b629a
    MOV ESI,dword ptr [EBX + 0x58]      ; 005b629b
    MOV dword ptr [EBX],ECX             ; 005b629e
    TEST ESI,ESI                        ; 005b62a0
    JNZ 0x005b6318                      ; 005b62a2
        ;   XREF to: 005b6318 (CONDITIONAL_JUMP)  ; LAB_005b6318
    MOV EBP,0x5f1577                    ; 005b62a4 | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b62a4
    MOV EAX,0xc5                        ; 005b62a9
    PUSH 0x5f1589                       ; 005b62ae | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x01d046a0],EBP      ; 005b62b3 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005b62b9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b62be
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b62c3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b62c6
        ;   Label: LAB_005b62c6
    TEST EDX,EDX                        ; 005b62ca
    JZ 0x005b62e3                       ; 005b62cc
        ;   XREF to: 005b62e3 (CONDITIONAL_JUMP)  ; LAB_005b62e3
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b62ce
    PUSH ECX                            ; 005b62d2
    PUSH 0x0                            ; 005b62d3
    MOV EAX,dword ptr [EBX]             ; 005b62d5
    PUSH EDX                            ; 005b62d7
    DEC EAX                             ; 005b62d8
    PUSH EAX                            ; 005b62d9
    PUSH EBX                            ; 005b62da
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400 ; 005b62db
        ;   XREF to: 005b6400 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 005b62e0
    MOV EDI,dword ptr [ESP + 0x24]      ; 005b62e3
        ;   Label: LAB_005b62e3
    TEST EDI,EDI                        ; 005b62e7
    JNZ 0x005b6320                      ; 005b62e9
        ;   XREF to: 005b6320 (CONDITIONAL_JUMP)  ; LAB_005b6320
    POP EBP                             ; 005b62eb
    POP EDI                             ; 005b62ec
    POP ESI                             ; 005b62ed
    POP EBX                             ; 005b62ee
    RET                                 ; 005b62ef
    MOV ECX,0x5f153e                    ; 005b62f0 | = "..\\core\\morph.cpp"
        ;   Label: LAB_005b62f0
    MOV ESI,0xac                        ; 005b62f5
    PUSH 0x5f1550                       ; 005b62fa | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x01d046a0],ECX      ; 005b62ff | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005b6305 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b630b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b6310
    JMP 0x005b6211                      ; 005b6313
        ;   XREF to: 005b6211 (UNCONDITIONAL_JUMP)  ; LAB_005b6211
    CMP dword ptr [EBX + 0x60],0x0      ; 005b6318
        ;   Label: LAB_005b6318
    JZ 0x005b62a4                       ; 005b631c
        ;   XREF to: 005b62a4 (CONDITIONAL_JUMP)  ; LAB_005b62a4
    JMP 0x005b62c6                      ; 005b631e
        ;   XREF to: 005b62c6 (UNCONDITIONAL_JUMP)  ; LAB_005b62c6
    MOV EBP,dword ptr [ESP + 0x20]      ; 005b6320
        ;   Label: LAB_005b6320
    PUSH EBP                            ; 005b6324
    PUSH 0x0                            ; 005b6325
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b6327
    PUSH EAX                            ; 005b632b
    MOV EDX,dword ptr [ESP + 0x34]      ; 005b632c
    PUSH EDX                            ; 005b6330
    MOV EAX,dword ptr [EBX]             ; 005b6331
    PUSH EDI                            ; 005b6333
    DEC EAX                             ; 005b6334
    PUSH EAX                            ; 005b6335
    PUSH EBX                            ; 005b6336
    CALL core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780 ; 005b6337
        ;   XREF to: 005b6780 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780(CMorphModel * this_ptr, int part_index, SInputFace * face_data, STextureSet * texture_sets, ...)
    ADD ESP,0x1c                        ; 005b633c
    POP EBP                             ; 005b633f
    POP EDI                             ; 005b6340
    POP ESI                             ; 005b6341
    POP EBX                             ; 005b6342
    RET                                 ; 005b6343

