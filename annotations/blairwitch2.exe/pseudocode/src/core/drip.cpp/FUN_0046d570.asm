; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_drip_cpp_FUN_0046d570(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d570
        ;   Label: core_drip.cpp_FUN_0046d570
    PUSH ESI                            ; 0046d571
    PUSH EDI                            ; 0046d572
    SUB ESP,0x30                        ; 0046d573
    MOV EBX,dword ptr [ESP + 0x40]      ; 0046d576
    PUSH EBX                            ; 0046d57a
    MOV dword ptr [EBX + 0x494],0x0     ; 0046d57b
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0046d585
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0046d58a
    PUSH 0x0                            ; 0046d58d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046d58f
    PUSH EBX                            ; 0046d595
    LEA ESI,[ESP + 0x8]                 ; 0046d596
    LEA EDI,[ESP + 0x20]                ; 0046d59a
    CALL dword ptr [EAX + 0x24]         ; 0046d59e
    MOV ECX,0x6                         ; 0046d5a1
    ADD ESP,0x4                         ; 0046d5a6
    LEA EAX,[ESP + 0x1c]                ; 0046d5a9
    LEA ESI,[ESP + 0x4]                 ; 0046d5ad
    PUSH EAX                            ; 0046d5b1
    MOVSD.REP ES:EDI,ESI                ; 0046d5b2
    CALL core_box.cpp_FUN_0041a840      ; 0046d5b4
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0046d5b9
    MOV ESI,EAX                         ; 0046d5bc
    TEST EAX,EAX                        ; 0046d5be
    JNZ 0x0046d5d4                      ; 0046d5c0
        ;   XREF to: 0046d5d4 (CONDITIONAL_JUMP)  ; LAB_0046d5d4
    PUSH EBX                            ; 0046d5c2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0046d5c3
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0046d5c8
    MOV EAX,ESI                         ; 0046d5cb
    ADD ESP,0x30                        ; 0046d5cd
    POP EDI                             ; 0046d5d0
    POP ESI                             ; 0046d5d1
    POP EBX                             ; 0046d5d2
    RET                                 ; 0046d5d3
    PUSH -0x1                           ; 0046d5d4
        ;   Label: LAB_0046d5d4
    LEA EAX,[EBX + 0x2b4]               ; 0046d5d6
    PUSH 0x0                            ; 0046d5dc
    PUSH EAX                            ; 0046d5de
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0046d5df
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0046d5e4
    MOV dword ptr [EBX + 0x494],0x1     ; 0046d5e7
    PUSH EBX                            ; 0046d5f1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0046d5f2
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0046d5f7
    MOV EAX,ESI                         ; 0046d5fa
    ADD ESP,0x30                        ; 0046d5fc
    POP EDI                             ; 0046d5ff
    POP ESI                             ; 0046d600
    POP EBX                             ; 0046d601
    RET                                 ; 0046d602

