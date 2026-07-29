; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addTriPartToModel_FUN_004e01f0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)
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

    PUSH EBX                            ; 004e01f0
        ;   Label: core_morph.cpp_CMorph_addTriPartToModel_FUN_004e01f0
    PUSH ESI                            ; 004e01f1
    PUSH EDI                            ; 004e01f2
    PUSH EBP                            ; 004e01f3
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e01f4
    PUSH EDX                            ; 004e01f8
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e01f9
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004e01fd
    PUSH ECX                            ; 004e0201
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004e0202
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e0206
    PUSH 0x3c                           ; 004e020a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004e020c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e0210
    PUSH EBX                            ; 004e0217
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004e0218
    SUB EAX,EDX                         ; 004e021c
    PUSH ESI                            ; 004e021e
    SHL EAX,0x6                         ; 004e021f
    PUSH EDI                            ; 004e0222
    ADD EAX,EDX                         ; 004e0223
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e0225
    SHL EAX,0x3                         ; 004e0229
    PUSH EBP                            ; 004e022c
    ADD EAX,EDX                         ; 004e022d
    PUSH EAX                            ; 004e022f
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0 ; 004e0230
        ;   XREF to: 004df2f0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 004e0235
    POP EBP                             ; 004e0238
    POP EDI                             ; 004e0239
    POP ESI                             ; 004e023a
    POP EBX                             ; 004e023b
    RET                                 ; 004e023c

