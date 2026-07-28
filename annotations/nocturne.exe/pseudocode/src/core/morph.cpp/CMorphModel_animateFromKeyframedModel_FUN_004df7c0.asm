; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0(CMorphModel *this_ptr,int part_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[1]:
;   core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_004e0380 at 004e03ad
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df7c0
        ;   Label: core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0
    PUSH ESI                            ; 004df7c1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004df7c2
    MOV EAX,dword ptr [EDX + 0x104]     ; 004df7c6
    PUSH EAX                            ; 004df7cc
    PUSH 0x0                            ; 004df7cd
    MOV ECX,dword ptr [ESP + 0x20]      ; 004df7cf
    PUSH ECX                            ; 004df7d3
    PUSH EDX                            ; 004df7d4
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080 ; 004df7d5
        ;   XREF to: 00453080 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 004df7da
    PUSH EAX                            ; 004df7dd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004df7de
    PUSH EBX                            ; 004df7e2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004df7e3
    PUSH ESI                            ; 004df7e7
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660 ; 004df7e8
        ;   XREF to: 004df660 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 004df7ed
    POP ESI                             ; 004df7f0
    POP EBX                             ; 004df7f1
    RET                                 ; 004df7f2

