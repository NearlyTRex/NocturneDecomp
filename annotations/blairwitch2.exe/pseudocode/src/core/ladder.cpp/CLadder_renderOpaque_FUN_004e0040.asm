; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_004e0040(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0040
        ;   Label: core_ladder.cpp_CLadder_renderOpaque_FUN_004e0040
    SUB ESP,0x30                        ; 004e0041
    MOV EBX,dword ptr [ESP + 0x38]      ; 004e0044
    LEA EAX,[EBX + 0x2b4]               ; 004e0048
    PUSH EAX                            ; 004e004e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004e004f
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 004e0054
    ADD ESP,0x4                         ; 004e005a
    CMP EDX,0x1                         ; 004e005d
    JGE 0x004e0069                      ; 004e0060
        ;   XREF to: 004e0069 (CONDITIONAL_JUMP)  ; LAB_004e0069
    XOR EAX,EAX                         ; 004e0062
    ADD ESP,0x30                        ; 004e0064
    POP EBX                             ; 004e0067
    RET                                 ; 004e0068
    PUSH EDI                            ; 004e0069
        ;   Label: LAB_004e0069
    PUSH ESI                            ; 004e006a
    PUSH EBX                            ; 004e006b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004e006c
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e0071
    PUSH 0x0                            ; 004e0074
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e0076
    PUSH EBX                            ; 004e007c
    LEA ESI,[ESP + 0x28]                ; 004e007d
    LEA EDI,[ESP + 0x10]                ; 004e0081
    CALL dword ptr [EAX + 0x24]         ; 004e0085
    MOV ECX,0x6                         ; 004e0088
    ADD ESP,0x4                         ; 004e008d
    LEA EAX,[ESP + 0xc]                 ; 004e0090
    LEA ESI,[ESP + 0x24]                ; 004e0094
    PUSH EAX                            ; 004e0098
    MOVSD.REP ES:EDI,ESI                ; 004e0099
    CALL core_box.cpp_FUN_0041a840      ; 004e009b
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004e00a0
    MOV ESI,EAX                         ; 004e00a3
    TEST EAX,EAX                        ; 004e00a5
    JZ 0x004e00bc                       ; 004e00a7
        ;   XREF to: 004e00bc (CONDITIONAL_JUMP)  ; LAB_004e00bc
    PUSH -0x1                           ; 004e00a9
    LEA EAX,[EBX + 0x2b4]               ; 004e00ab
    PUSH 0x0                            ; 004e00b1
    PUSH EAX                            ; 004e00b3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004e00b4
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004e00b9
    PUSH EBX                            ; 004e00bc
        ;   Label: LAB_004e00bc
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004e00bd
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e00c2
    MOV EAX,ESI                         ; 004e00c5
    POP ESI                             ; 004e00c7
    POP EDI                             ; 004e00c8
    ADD ESP,0x30                        ; 004e00c9
    POP EBX                             ; 004e00cc
    RET                                 ; 004e00cd

