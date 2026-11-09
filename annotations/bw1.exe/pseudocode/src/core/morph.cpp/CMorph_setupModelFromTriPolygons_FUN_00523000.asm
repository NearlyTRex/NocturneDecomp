; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_00523000(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureModel *texture_list,int *texture_index_list)
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
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0
;   core_morph.cpp_CMorphModel_free_FUN_00522170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523000
        ;   Label: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_00523000
    PUSH ESI                            ; 00523001
    PUSH EDI                            ; 00523002
    PUSH EBP                            ; 00523003
    MOV EDX,dword ptr [ESP + 0x18]      ; 00523004
    LEA EAX,[EDX*0x4 + 0x0]             ; 00523008
    SUB EAX,EDX                         ; 0052300f
    SHL EAX,0x6                         ; 00523011
    ADD EAX,EDX                         ; 00523014
    MOV EBX,dword ptr [ESP + 0x14]      ; 00523016
    SHL EAX,0x3                         ; 0052301a
    ADD EBX,EAX                         ; 0052301d
    PUSH EBX                            ; 0052301f
    CALL core_morph.cpp_CMorphModel_free_FUN_00522170 ; 00523020
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_00522170(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 00523025
    MOV EDX,dword ptr [ESP + 0x30]      ; 00523028
    PUSH EDX                            ; 0052302c
    MOV ECX,dword ptr [ESP + 0x30]      ; 0052302d
    PUSH ECX                            ; 00523031
    PUSH 0x3c                           ; 00523032
    MOV ESI,dword ptr [ESP + 0x34]      ; 00523034
    PUSH ESI                            ; 00523038
    MOV EDI,dword ptr [ESP + 0x34]      ; 00523039
    PUSH EDI                            ; 0052303d
    MOV EBP,dword ptr [ESP + 0x34]      ; 0052303e
    PUSH EBP                            ; 00523042
    MOV EAX,dword ptr [ESP + 0x34]      ; 00523043
    PUSH EAX                            ; 00523047
    PUSH EBX                            ; 00523048
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0 ; 00523049
        ;   XREF to: 005221d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 0052304e
    POP EBP                             ; 00523051
    POP EDI                             ; 00523052
    POP ESI                             ; 00523053
    POP EBX                             ; 00523054
    RET                                 ; 00523055

