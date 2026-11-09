; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0(CMorphModel *this_ptr,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; CKeyFramedModel * Stack[0x8]:4   model_ptr
; int              Stack[0xc]:4   frame_index
;
; XREF[2]:
;   core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210 at 00523237
;   core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_00523100 at 00523130
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005224f0
        ;   Label: core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0
    PUSH EBP                            ; 005224f1
    MOV EBP,ESP                         ; 005224f2
    MOV EBX,dword ptr [EBP + 0x10]      ; 005224f4
    MOV EAX,dword ptr [EBX + 0x118]     ; 005224f7
    PUSH EAX                            ; 005224fd
    LEA EAX,[EBX + 0x124]               ; 005224fe
    PUSH EAX                            ; 00522504
    PUSH 0x48                           ; 00522505
    MOV EAX,dword ptr [EBX + 0x114]     ; 00522507
    PUSH EAX                            ; 0052250d
    MOV EAX,dword ptr [EBX + 0x110]     ; 0052250e
    PUSH EAX                            ; 00522514
    MOV EDX,dword ptr [EBP + 0x14]      ; 00522515
    PUSH EDX                            ; 00522518
    PUSH EBX                            ; 00522519
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0 ; 0052251a
        ;   XREF to: 004672b0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 0052251f
    PUSH EAX                            ; 00522522
    MOV EAX,dword ptr [EBX + 0x104]     ; 00522523
    PUSH EAX                            ; 00522529
    MOV ECX,dword ptr [EBP + 0xc]       ; 0052252a
    PUSH ECX                            ; 0052252d
    CALL core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0 ; 0052252e
        ;   XREF to: 005221d0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_005221d0(CMorphModel * this_ptr, int vertex_count, CVector3i * vertex_data, int poly_count, ...)
    ADD ESP,0x20                        ; 00522533
    POP EBP                             ; 00522536
    POP EBX                             ; 00522537
    RET                                 ; 00522538

