; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[1]:
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005232d0 at 005232fd
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005226a0
        ;   Label: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0
    PUSH ESI                            ; 005226a1
    MOV EDX,dword ptr [ESP + 0x14]      ; 005226a2
    MOV EAX,dword ptr [EDX + 0x104]     ; 005226a6
    PUSH EAX                            ; 005226ac
    PUSH 0x0                            ; 005226ad
    MOV ECX,dword ptr [ESP + 0x20]      ; 005226af
    PUSH ECX                            ; 005226b3
    PUSH EDX                            ; 005226b4
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0 ; 005226b5
        ;   XREF to: 004672b0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 005226ba
    PUSH EAX                            ; 005226bd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005226be
    PUSH EBX                            ; 005226c2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005226c3
    PUSH ESI                            ; 005226c7
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540 ; 005226c8
        ;   XREF to: 00522540 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_00522540(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 005226cd
    POP ESI                             ; 005226d0
    POP EBX                             ; 005226d1
    RET                                 ; 005226d2

