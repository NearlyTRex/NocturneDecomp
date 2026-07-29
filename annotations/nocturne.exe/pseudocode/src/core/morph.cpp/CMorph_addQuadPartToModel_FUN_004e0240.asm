; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addQuadPartToModel_FUN_004e0240(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; int              Stack[0xc]:4   vertex_count
; CVector3i *      Stack[0x10]:4   vertices
; int              Stack[0x14]:4   face_count
; SMRGLHeaderPrimitive * Stack[0x18]:4   faces
; SMRGLTextureLod * Stack[0x1c]:4   texture_lod
; int *            Stack[0x20]:4   texture_index_list
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0240
        ;   Label: core_morph.cpp_CMorph_addQuadPartToModel_FUN_004e0240
    PUSH ESI                            ; 004e0241
    PUSH EDI                            ; 004e0242
    PUSH EBP                            ; 004e0243
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e0244
    PUSH EDX                            ; 004e0248
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e0249
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004e024d
    PUSH ECX                            ; 004e0251
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004e0252
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e0256
    PUSH 0x48                           ; 004e025a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004e025c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e0260
    PUSH EBX                            ; 004e0267
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004e0268
    SUB EAX,EDX                         ; 004e026c
    PUSH ESI                            ; 004e026e
    SHL EAX,0x6                         ; 004e026f
    PUSH EDI                            ; 004e0272
    ADD EAX,EDX                         ; 004e0273
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e0275
    SHL EAX,0x3                         ; 004e0279
    PUSH EBP                            ; 004e027c
    ADD EAX,EDX                         ; 004e027d
    PUSH EAX                            ; 004e027f
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0 ; 004e0280
        ;   XREF to: 004df2f0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 004e0285
    POP EBP                             ; 004e0288
    POP EDI                             ; 004e0289
    POP ESI                             ; 004e028a
    POP EBX                             ; 004e028b
    RET                                 ; 004e028c

