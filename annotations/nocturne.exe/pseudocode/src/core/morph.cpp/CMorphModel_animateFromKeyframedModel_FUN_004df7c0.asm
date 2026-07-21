; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
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
        ;   XREF to: 00453080 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080()
    ADD ESP,0x8                         ; 004df7da
    PUSH EAX                            ; 004df7dd
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004df7de
    PUSH EBX                            ; 004df7e2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004df7e3
    PUSH ESI                            ; 004df7e7
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660 ; 004df7e8
        ;   XREF to: 004df660 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660()
    ADD ESP,0x14                        ; 004df7ed
    POP ESI                             ; 004df7f0
    POP EBX                             ; 004df7f1
    RET                                 ; 004df7f2

