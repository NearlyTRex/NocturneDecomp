; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromTriPolygons_FUN_004fa900(CMorph *this_ptr,int model_index,int vertex_count,CVector3i *vertices,int face_count ,SMRGLHeaderPrimitive *faces,SMRGLTextureModel *texture_list,int *texture_index_list)
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
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0
;   core_morph.cpp_CMorphModel_free_FUN_004f9a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa900
        ;   Label: core_morph.cpp_CMorph_setupModelFromTriPolygons_FUN_004fa900
    PUSH ESI                            ; 004fa901
    PUSH EDI                            ; 004fa902
    PUSH EBP                            ; 004fa903
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fa904
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fa908
    SUB EAX,EDX                         ; 004fa90f
    SHL EAX,0x6                         ; 004fa911
    ADD EAX,EDX                         ; 004fa914
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fa916
    SHL EAX,0x3                         ; 004fa91a
    ADD EBX,EAX                         ; 004fa91d
    PUSH EBX                            ; 004fa91f
    CALL core_morph.cpp_CMorphModel_free_FUN_004f9a70 ; 004fa920
        ;   XREF to: 004f9a70 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_004f9a70(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 004fa925
    MOV EDX,dword ptr [ESP + 0x30]      ; 004fa928
    PUSH EDX                            ; 004fa92c
    MOV ECX,dword ptr [ESP + 0x30]      ; 004fa92d
    PUSH ECX                            ; 004fa931
    PUSH 0x3c                           ; 004fa932
    MOV ESI,dword ptr [ESP + 0x34]      ; 004fa934
    PUSH ESI                            ; 004fa938
    MOV EDI,dword ptr [ESP + 0x34]      ; 004fa939
    PUSH EDI                            ; 004fa93d
    MOV EBP,dword ptr [ESP + 0x34]      ; 004fa93e
    PUSH EBP                            ; 004fa942
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fa943
    PUSH EAX                            ; 004fa947
    PUSH EBX                            ; 004fa948
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0 ; 004fa949
        ;   XREF to: 004f9ad0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004f9ad0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 004fa94e
    POP EBP                             ; 004fa951
    POP EDI                             ; 004fa952
    POP ESI                             ; 004fa953
    POP EBX                             ; 004fa954
    RET                                 ; 004fa955

