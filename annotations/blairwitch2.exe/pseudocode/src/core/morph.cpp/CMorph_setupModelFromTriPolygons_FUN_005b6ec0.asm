; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_005b6ec0(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureModel *texture_list,int *texture_index_list)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; int              Stack[0xc]:4   vertex_count
; CVector3i *      Stack[0x10]:4   vertices
; int              Stack[0x14]:4   face_count
; SMRGLHeaderPrimitive * Stack[0x18]:4   faces
; SMRGLTextureModel * Stack[0x1c]:4   texture_list
; int *            Stack[0x20]:4   texture_index_list
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090
;   core_morph.cpp_CMorphModel_free_FUN_005b6030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6ec0
        ;   Label: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_005b6ec0
    PUSH ESI                            ; 005b6ec1
    PUSH EDI                            ; 005b6ec2
    PUSH EBP                            ; 005b6ec3
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b6ec4
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b6ec8
    SUB EAX,EDX                         ; 005b6ecf
    SHL EAX,0x6                         ; 005b6ed1
    ADD EAX,EDX                         ; 005b6ed4
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b6ed6
    SHL EAX,0x3                         ; 005b6eda
    ADD EBX,EAX                         ; 005b6edd
    PUSH EBX                            ; 005b6edf
    CALL core_morph.cpp_CMorphModel_free_FUN_005b6030 ; 005b6ee0
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_005b6030(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 005b6ee5
    MOV EDX,dword ptr [ESP + 0x30]      ; 005b6ee8
    PUSH EDX                            ; 005b6eec
    MOV ECX,dword ptr [ESP + 0x30]      ; 005b6eed
    PUSH ECX                            ; 005b6ef1
    PUSH 0x3c                           ; 005b6ef2
    MOV ESI,dword ptr [ESP + 0x34]      ; 005b6ef4
    PUSH ESI                            ; 005b6ef8
    MOV EDI,dword ptr [ESP + 0x34]      ; 005b6ef9
    PUSH EDI                            ; 005b6efd
    MOV EBP,dword ptr [ESP + 0x34]      ; 005b6efe
    PUSH EBP                            ; 005b6f02
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b6f03
    PUSH EAX                            ; 005b6f07
    PUSH EBX                            ; 005b6f08
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090 ; 005b6f09
        ;   XREF to: 005b6090 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 005b6f0e
    POP EBP                             ; 005b6f11
    POP EDI                             ; 005b6f12
    POP ESI                             ; 005b6f13
    POP EBX                             ; 005b6f14
    RET                                 ; 005b6f15

