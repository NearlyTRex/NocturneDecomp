; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[1]:
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190 at 005b71bd
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6560
        ;   Label: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560
    PUSH ESI                            ; 005b6561
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b6562
    MOV EAX,dword ptr [EDX + 0x104]     ; 005b6566
    PUSH EAX                            ; 005b656c
    PUSH 0x0                            ; 005b656d
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b656f
    PUSH ECX                            ; 005b6573
    PUSH EDX                            ; 005b6574
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0 ; 005b6575
        ;   XREF to: 0044e6e0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 005b657a
    PUSH EAX                            ; 005b657d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b657e
    PUSH EBX                            ; 005b6582
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b6583
    PUSH ESI                            ; 005b6587
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400 ; 005b6588
        ;   XREF to: 005b6400 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 005b658d
    POP ESI                             ; 005b6590
    POP EBX                             ; 005b6591
    RET                                 ; 005b6592

