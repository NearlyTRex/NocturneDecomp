; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; CKeyFramedModel * Stack[0x8]:4   model_ptr
; int              Stack[0xc]:4   frame_index
;
; XREF[2]:
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_005b70d0 at 005b70f7
;   core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0 at 005b6ff0
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b63b0
        ;   Label: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0
    PUSH EBP                            ; 005b63b1
    MOV EBP,ESP                         ; 005b63b2
    MOV EBX,dword ptr [EBP + 0x10]      ; 005b63b4
    MOV EAX,dword ptr [EBX + 0x118]     ; 005b63b7
    PUSH EAX                            ; 005b63bd
    LEA EAX,[EBX + 0x124]               ; 005b63be
    PUSH EAX                            ; 005b63c4
    PUSH 0x48                           ; 005b63c5
    MOV EAX,dword ptr [EBX + 0x114]     ; 005b63c7
    PUSH EAX                            ; 005b63cd
    MOV EAX,dword ptr [EBX + 0x110]     ; 005b63ce
    PUSH EAX                            ; 005b63d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 005b63d5
    PUSH EDX                            ; 005b63d8
    PUSH EBX                            ; 005b63d9
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0 ; 005b63da
        ;   XREF to: 0044e6e0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 005b63df
    PUSH EAX                            ; 005b63e2
    MOV EAX,dword ptr [EBX + 0x104]     ; 005b63e3
    PUSH EAX                            ; 005b63e9
    MOV ECX,dword ptr [EBP + 0xc]       ; 005b63ea
    PUSH ECX                            ; 005b63ed
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090 ; 005b63ee
        ;   XREF to: 005b6090 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005b6090(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 005b63f3
    POP EBP                             ; 005b63f6
    POP EBX                             ; 005b63f7
    RET                                 ; 005b63f8

