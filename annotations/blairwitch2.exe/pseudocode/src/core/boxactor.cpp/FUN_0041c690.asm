; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_FUN_0041c690(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_partibox.cpp_FUN_005ad300 at 005ad342
;   core_spirmine.cpp_FUN_005ad910 at 005ad916
;
; Referenced Globals:
;   undefined4 DAT_0060b27c
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
;   engine_matrix.c_pop_FUN_0046b4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c690
        ;   Label: core_boxactor.cpp_FUN_0041c690
    PUSH EBP                            ; 0041c691
    SUB ESP,0x30                        ; 0041c692
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0041c695
    LEA EAX,[EBX + 0x2b4]               ; 0041c699
    PUSH EAX                            ; 0041c69f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0041c6a0
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 0041c6a5
    ADD ESP,0x4                         ; 0041c6ab
    CMP EDX,0x1                         ; 0041c6ae
    JGE 0x0041c6bb                      ; 0041c6b1
        ;   XREF to: 0041c6bb (CONDITIONAL_JUMP)  ; LAB_0041c6bb
    XOR EAX,EAX                         ; 0041c6b3
    ADD ESP,0x30                        ; 0041c6b5
    POP EBP                             ; 0041c6b8
    POP EBX                             ; 0041c6b9
    RET                                 ; 0041c6ba
    PUSH EDI                            ; 0041c6bb
        ;   Label: LAB_0041c6bb
    PUSH ESI                            ; 0041c6bc
    LEA EAX,[EBX + 0x20]                ; 0041c6bd
    PUSH EAX                            ; 0041c6c0
    MOV ECX,dword ptr [0x0060b27c]      ; 0041c6c1 | DAT_0060b27c
    PUSH ECX                            ; 0041c6c7
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0041c6c8
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041c6cd
    PUSH 0x0                            ; 0041c6d0
    LEA EAX,[EBX + 0x30]                ; 0041c6d2
    PUSH EAX                            ; 0041c6d5
    MOV ESI,dword ptr [0x0060b27c]      ; 0041c6d6 | DAT_0060b27c
    PUSH ESI                            ; 0041c6dc
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0041c6dd
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0041c6e2
    PUSH 0x0                            ; 0041c6e5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041c6e7
    PUSH EBX                            ; 0041c6ed
    LEA ESI,[ESP + 0x10]                ; 0041c6ee
    LEA EDI,[ESP + 0x28]                ; 0041c6f2
    CALL dword ptr [EAX + 0x24]         ; 0041c6f6
    MOV ECX,0x6                         ; 0041c6f9
    ADD ESP,0x4                         ; 0041c6fe
    LEA EAX,[ESP + 0x24]                ; 0041c701
    LEA ESI,[ESP + 0xc]                 ; 0041c705
    PUSH EAX                            ; 0041c709
    MOVSD.REP ES:EDI,ESI                ; 0041c70a
    CALL core_box.cpp_FUN_0041a840      ; 0041c70c
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0041c711
    PUSH 0xffff                         ; 0041c714
    MOV EDI,dword ptr [0x0060b280]      ; 0041c719 | DAT_0060b280
    PUSH EDI                            ; 0041c71f
    MOV ESI,EAX                         ; 0041c720
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0 ; 0041c722
        ;   XREF to: 0046b8e0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EBP,dword ptr [EBX + 0x758]     ; 0041c727
    ADD ESP,0x8                         ; 0041c72d
    TEST EBP,EBP                        ; 0041c730
    JZ 0x0041c743                       ; 0041c732
        ;   XREF to: 0041c743 (CONDITIONAL_JUMP)  ; LAB_0041c743
    MOV EAX,[0x0061b5a8]                ; 0041c734 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac98],0x1  ; 0041c739
    TEST ESI,ESI                        ; 0041c743
        ;   Label: LAB_0041c743
    JZ 0x0041c75e                       ; 0041c745
        ;   XREF to: 0041c75e (CONDITIONAL_JUMP)  ; LAB_0041c75e
    PUSH -0x1                           ; 0041c747
    LEA EAX,[EBX + 0x2b4]               ; 0041c749
    PUSH dword ptr [EBX + 0x46c]        ; 0041c74f
    PUSH EAX                            ; 0041c755
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0041c756
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041c75b
    CMP dword ptr [EBX + 0x758],0x0     ; 0041c75e
        ;   Label: LAB_0041c75e
    JZ 0x0041c776                       ; 0041c765
        ;   XREF to: 0041c776 (CONDITIONAL_JUMP)  ; LAB_0041c776
    MOV EAX,[0x0061b5a8]                ; 0041c767 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 0041c76c
    MOV EDX,dword ptr [0x0060b27c]      ; 0041c776 | DAT_0060b27c
        ;   Label: LAB_0041c776
    PUSH EDX                            ; 0041c77c
    CALL engine_matrix.c_pop_FUN_0046b4a0 ; 0041c77d
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0041c782
    MOV EAX,ESI                         ; 0041c785
    POP ESI                             ; 0041c787
    POP EDI                             ; 0041c788
    ADD ESP,0x30                        ; 0041c789
    POP EBP                             ; 0041c78c
    POP EBX                             ; 0041c78d
    RET                                 ; 0041c78e

