; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromQuadPolygons_FUN_0052b3d0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureLod *texture_lod,int *texture_index_list)
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
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_0052a580
;   core_morph.cpp_CMorphModel_free_FUN_0052a510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b3d0
        ;   Label: core_morph.cpp_CMorph_setupModelFromQuadPolygons_FUN_0052b3d0
    PUSH ESI                            ; 0052b3d1
    PUSH EDI                            ; 0052b3d2
    PUSH EBP                            ; 0052b3d3
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052b3d4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b3d8
    SUB EAX,EDX                         ; 0052b3df
    SHL EAX,0x6                         ; 0052b3e1
    ADD EAX,EDX                         ; 0052b3e4
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052b3e6
    SHL EAX,0x3                         ; 0052b3ea
    ADD EBX,EAX                         ; 0052b3ed
    PUSH EBX                            ; 0052b3ef
    CALL core_morph.cpp_CMorphModel_free_FUN_0052a510 ; 0052b3f0
        ;   XREF to: 0052a510 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_0052a510(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 0052b3f5
    MOV EDX,dword ptr [ESP + 0x30]      ; 0052b3f8
    PUSH EDX                            ; 0052b3fc
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052b3fd
    PUSH ECX                            ; 0052b401
    PUSH 0x48                           ; 0052b402
    MOV ESI,dword ptr [ESP + 0x34]      ; 0052b404
    PUSH ESI                            ; 0052b408
    MOV EDI,dword ptr [ESP + 0x34]      ; 0052b409
    PUSH EDI                            ; 0052b40d
    MOV EBP,dword ptr [ESP + 0x34]      ; 0052b40e
    PUSH EBP                            ; 0052b412
    MOV EAX,dword ptr [ESP + 0x34]      ; 0052b413
    PUSH EAX                            ; 0052b417
    PUSH EBX                            ; 0052b418
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_0052a580 ; 0052b419
        ;   XREF to: 0052a580 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_0052a580(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 0052b41e
    POP EBP                             ; 0052b421
    POP EDI                             ; 0052b422
    POP ESI                             ; 0052b423
    POP EBX                             ; 0052b424
    RET                                 ; 0052b425

