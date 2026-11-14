; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)
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
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490 at 005224df
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005ea659
;   TerminatedCString s_CMorphModel_addPart_too_005ea66b
;   TerminatedCString s_core_morph_cpp_005ea692
;   TerminatedCString s_CMorphModel_setup_out_of_005ea6a4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540
;   core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005228c0
;   crt_memory.c_realloc_FUN_005c10d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522340
        ;   Label: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340
    PUSH ESI                            ; 00522341
    PUSH EDI                            ; 00522342
    PUSH EBP                            ; 00522343
    MOV EBX,dword ptr [ESP + 0x14]      ; 00522344
    CMP dword ptr [EBX],0x5             ; 00522348
    JGE 0x00522430                      ; 0052234b
        ;   XREF to: 00522430 (CONDITIONAL_JUMP)  ; LAB_00522430
    MOV EAX,dword ptr [EBX]             ; 00522351
        ;   Label: LAB_00522351
    SHL EAX,0x4                         ; 00522353
    LEA EDX,[EBX + EAX*0x1]             ; 00522356
    MOV EAX,dword ptr [EBX + 0x54]      ; 00522359
    MOV dword ptr [EDX + 0xc],EAX       ; 0052235c
    MOV EAX,dword ptr [EBX]             ; 0052235f
    SHL EAX,0x4                         ; 00522361
    MOV EDX,dword ptr [ESP + 0x18]      ; 00522364
    MOV dword ptr [EBX + EAX*0x1 + 0x4],EDX ; 00522368
    MOV EAX,dword ptr [EBX]             ; 0052236c
    SHL EAX,0x4                         ; 0052236e
    LEA EDX,[EBX + EAX*0x1]             ; 00522371
    MOV EAX,dword ptr [EBX + 0x5c]      ; 00522374
    MOV dword ptr [EDX + 0x10],EAX      ; 00522377
    MOV EAX,dword ptr [EBX]             ; 0052237a
    SHL EAX,0x4                         ; 0052237c
    MOV EDX,dword ptr [ESP + 0x20]      ; 0052237f
    MOV dword ptr [EBX + EAX*0x1 + 0x8],EDX ; 00522383
    MOV EAX,dword ptr [EBX]             ; 00522387
    SHL EAX,0x4                         ; 00522389
    MOV EDI,dword ptr [EBX + 0x54]      ; 0052238c
    ADD EDI,dword ptr [EBX + EAX*0x1 + 0x4] ; 0052238f
    MOV EAX,dword ptr [EBX]             ; 00522393
    MOV dword ptr [EBX + 0x54],EDI      ; 00522395
    SHL EAX,0x4                         ; 00522398
    MOV EBP,dword ptr [EBX + 0x5c]      ; 0052239b
    ADD EBP,dword ptr [EBX + EAX*0x1 + 0x8] ; 0052239e
    MOV EAX,dword ptr [EBX + 0x54]      ; 005223a2
    SHL EAX,0x4                         ; 005223a5
    PUSH EAX                            ; 005223a8
    MOV EAX,dword ptr [EBX + 0x58]      ; 005223a9
    PUSH EAX                            ; 005223ac
    MOV dword ptr [EBX + 0x5c],EBP      ; 005223ad
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 005223b0
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x58],EAX      ; 005223b5
    MOV EAX,dword ptr [EBX + 0x5c]      ; 005223b8
    SHL EAX,0x2                         ; 005223bb
    MOV EDX,EAX                         ; 005223be
    SHL EAX,0x4                         ; 005223c0
    ADD ESP,0x8                         ; 005223c3
    SUB EAX,EDX                         ; 005223c6
    PUSH EAX                            ; 005223c8
    MOV EDX,dword ptr [EBX + 0x60]      ; 005223c9
    PUSH EDX                            ; 005223cc
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 005223cd
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005223d2
    MOV ECX,dword ptr [EBX]             ; 005223d5
    MOV dword ptr [EBX + 0x60],EAX      ; 005223d7
    INC ECX                             ; 005223da
    MOV ESI,dword ptr [EBX + 0x58]      ; 005223db
    MOV dword ptr [EBX],ECX             ; 005223de
    TEST ESI,ESI                        ; 005223e0
    JNZ 0x00522458                      ; 005223e2
        ;   XREF to: 00522458 (CONDITIONAL_JUMP)  ; LAB_00522458
    MOV EBP,0x5ea692                    ; 005223e4 | = "..\\core\\morph.cpp"
        ;   Label: LAB_005223e4
    MOV EAX,0xc5                        ; 005223e9
    PUSH 0x5ea6a4                       ; 005223ee | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x01d1d400],EBP      ; 005223f3 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005223f9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005223fe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00522403
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00522406
        ;   Label: LAB_00522406
    TEST EDX,EDX                        ; 0052240a
    JZ 0x00522423                       ; 0052240c
        ;   XREF to: 00522423 (CONDITIONAL_JUMP)  ; LAB_00522423
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052240e
    PUSH ECX                            ; 00522412
    PUSH 0x0                            ; 00522413
    MOV EAX,dword ptr [EBX]             ; 00522415
    PUSH EDX                            ; 00522417
    DEC EAX                             ; 00522418
    PUSH EAX                            ; 00522419
    PUSH EBX                            ; 0052241a
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540 ; 0052241b
        ;   XREF to: 00522540 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 00522420
    MOV EDI,dword ptr [ESP + 0x24]      ; 00522423
        ;   Label: LAB_00522423
    TEST EDI,EDI                        ; 00522427
    JNZ 0x00522460                      ; 00522429
        ;   XREF to: 00522460 (CONDITIONAL_JUMP)  ; LAB_00522460
    POP EBP                             ; 0052242b
    POP EDI                             ; 0052242c
    POP ESI                             ; 0052242d
    POP EBX                             ; 0052242e
    RET                                 ; 0052242f
    MOV ECX,0x5ea659                    ; 00522430 | = "..\\core\\morph.cpp"
        ;   Label: LAB_00522430
    MOV ESI,0xac                        ; 00522435
    PUSH 0x5ea66b                       ; 0052243a | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x01d1d400],ECX      ; 0052243f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00522445 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052244b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00522450
    JMP 0x00522351                      ; 00522453
        ;   XREF to: 00522351 (UNCONDITIONAL_JUMP)  ; LAB_00522351
    CMP dword ptr [EBX + 0x60],0x0      ; 00522458
        ;   Label: LAB_00522458
    JZ 0x005223e4                       ; 0052245c
        ;   XREF to: 005223e4 (CONDITIONAL_JUMP)  ; LAB_005223e4
    JMP 0x00522406                      ; 0052245e
        ;   XREF to: 00522406 (UNCONDITIONAL_JUMP)  ; LAB_00522406
    MOV EBP,dword ptr [ESP + 0x20]      ; 00522460
        ;   Label: LAB_00522460
    PUSH EBP                            ; 00522464
    PUSH 0x0                            ; 00522465
    MOV EAX,dword ptr [ESP + 0x34]      ; 00522467
    PUSH EAX                            ; 0052246b
    MOV EDX,dword ptr [ESP + 0x34]      ; 0052246c
    PUSH EDX                            ; 00522470
    MOV EAX,dword ptr [EBX]             ; 00522471
    PUSH EDI                            ; 00522473
    DEC EAX                             ; 00522474
    PUSH EAX                            ; 00522475
    PUSH EBX                            ; 00522476
    CALL core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005228c0 ; 00522477
        ;   XREF to: 005228c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005228c0(CMorphModel * this_ptr, int part_index, SInputFace * face_data, STextureSet * texture_sets, ...)
    ADD ESP,0x1c                        ; 0052247c
    POP EBP                             ; 0052247f
    POP EDI                             ; 00522480
    POP ESI                             ; 00522481
    POP EBX                             ; 00522482
    RET                                 ; 00522483

