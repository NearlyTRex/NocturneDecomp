; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)
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
;   core_morph.cpp_CMorphModel_free_FUN_004df290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e00b0
        ;   Label: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004e00b0
    PUSH ESI                            ; 004e00b1
    PUSH EDI                            ; 004e00b2
    PUSH EBP                            ; 004e00b3
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e00b4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e00b8
    SUB EAX,EDX                         ; 004e00bf
    SHL EAX,0x6                         ; 004e00c1
    ADD EAX,EDX                         ; 004e00c4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e00c6
    SHL EAX,0x3                         ; 004e00ca
    ADD EBX,EAX                         ; 004e00cd
    PUSH EBX                            ; 004e00cf
    CALL core_morph.cpp_CMorphModel_free_FUN_004df290 ; 004e00d0
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_004df290(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 004e00d5
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e00d8
    PUSH EDX                            ; 004e00dc
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e00dd
    PUSH ECX                            ; 004e00e1
    PUSH 0x3c                           ; 004e00e2
    MOV ESI,dword ptr [ESP + 0x34]      ; 004e00e4
    PUSH ESI                            ; 004e00e8
    MOV EDI,dword ptr [ESP + 0x34]      ; 004e00e9
    PUSH EDI                            ; 004e00ed
    MOV EBP,dword ptr [ESP + 0x34]      ; 004e00ee
    PUSH EBP                            ; 004e00f2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e00f3
    PUSH EAX                            ; 004e00f7
    PUSH EBX                            ; 004e00f8
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0 ; 004e00f9
        ;   XREF to: 004df2f0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 004e00fe
    POP EBP                             ; 004e0101
    POP EDI                             ; 004e0102
    POP ESI                             ; 004e0103
    POP EBX                             ; 004e0104
    RET                                 ; 004e0105

