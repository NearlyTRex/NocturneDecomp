; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_ammobox_cpp_FUN_0040e780(CDemonActor *param_1)
;
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

    PUSH EBX                            ; 0040e780
        ;   Label: core_ammobox.cpp_FUN_0040e780
    PUSH ESI                            ; 0040e781
    PUSH EDI                            ; 0040e782
    PUSH EBP                            ; 0040e783
    MOV EBP,ESP                         ; 0040e784
    SUB ESP,0x34                        ; 0040e786
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040e789
    PUSH EBX                            ; 0040e78c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0040e78d
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e792
    PUSH 0x0                            ; 0040e795
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040e797
    PUSH EBX                            ; 0040e79d
    LEA ESI,[EBP + -0x1c]               ; 0040e79e
    LEA EDI,[EBP + -0x34]               ; 0040e7a1
    CALL dword ptr [EAX + 0x24]         ; 0040e7a4
    MOV ECX,0x6                         ; 0040e7a7
    ADD ESP,0x4                         ; 0040e7ac
    LEA EAX,[EBP + -0x34]               ; 0040e7af
    LEA ESI,[EBP + -0x1c]               ; 0040e7b2
    PUSH EAX                            ; 0040e7b5
    MOVSD.REP ES:EDI,ESI                ; 0040e7b6
    CALL core_box.cpp_FUN_0041a840      ; 0040e7b8
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0040e7bd
    MOV EDI,EAX                         ; 0040e7c0
    TEST EAX,EAX                        ; 0040e7c2
    JNZ 0x0040e7d8                      ; 0040e7c4
        ;   XREF to: 0040e7d8 (CONDITIONAL_JUMP)  ; LAB_0040e7d8
    PUSH EBX                            ; 0040e7c6
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0040e7c7
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e7cc
    MOV EAX,EDI                         ; 0040e7cf
    MOV ESP,EBP                         ; 0040e7d1
    POP EBP                             ; 0040e7d3
    POP EDI                             ; 0040e7d4
    POP ESI                             ; 0040e7d5
    POP EBX                             ; 0040e7d6
    RET                                 ; 0040e7d7
    PUSH -0x1                           ; 0040e7d8
        ;   Label: LAB_0040e7d8
    LEA ESI,[EBX + 0x2b4]               ; 0040e7da
    PUSH ESI                            ; 0040e7e0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0040e7e1
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 0040e7e6
    DEC EAX                             ; 0040e7ec
    MOV dword ptr [EBP + -0x4],EAX      ; 0040e7ed
    ADD ESP,0x4                         ; 0040e7f0
    FILD dword ptr [EBP + -0x4]         ; 0040e7f3
    FMUL float ptr [EBX + 0x478]        ; 0040e7f6
    SUB ESP,0x4                         ; 0040e7fc
    FSTP float ptr [ESP]                ; 0040e7ff
    PUSH ESI                            ; 0040e802
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0040e803
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040e808
    PUSH EBX                            ; 0040e80b
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0040e80c
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e811
    MOV EAX,EDI                         ; 0040e814
    MOV ESP,EBP                         ; 0040e816
    POP EBP                             ; 0040e818
    POP EDI                             ; 0040e819
    POP ESI                             ; 0040e81a
    POP EBX                             ; 0040e81b
    RET                                 ; 0040e81c

