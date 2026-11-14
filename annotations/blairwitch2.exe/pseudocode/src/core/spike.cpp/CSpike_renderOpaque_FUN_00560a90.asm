; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spike_cpp_CSpike_renderOpaque_FUN_00560a90(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560a90
        ;   Label: core_spike.cpp_CSpike_renderOpaque_FUN_00560a90
    PUSH ESI                            ; 00560a91
    PUSH EDI                            ; 00560a92
    SUB ESP,0x30                        ; 00560a93
    MOV EBX,dword ptr [ESP + 0x40]      ; 00560a96
    PUSH EBX                            ; 00560a9a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00560a9b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00560aa0
    PUSH 0x0                            ; 00560aa3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00560aa5
    PUSH EBX                            ; 00560aab
    LEA ESI,[ESP + 0x8]                 ; 00560aac
    LEA EDI,[ESP + 0x20]                ; 00560ab0
    CALL dword ptr [EAX + 0x24]         ; 00560ab4
    MOV ECX,0x6                         ; 00560ab7
    ADD ESP,0x4                         ; 00560abc
    LEA EAX,[ESP + 0x1c]                ; 00560abf
    LEA ESI,[ESP + 0x4]                 ; 00560ac3
    PUSH EAX                            ; 00560ac7
    MOVSD.REP ES:EDI,ESI                ; 00560ac8
    CALL core_box.cpp_FUN_0041a840      ; 00560aca
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00560acf
    MOV ESI,EAX                         ; 00560ad2
    TEST EAX,EAX                        ; 00560ad4
    JNZ 0x00560aea                      ; 00560ad6
        ;   XREF to: 00560aea (CONDITIONAL_JUMP)  ; LAB_00560aea
    PUSH EBX                            ; 00560ad8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00560ad9
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00560ade
    MOV EAX,ESI                         ; 00560ae1
    ADD ESP,0x30                        ; 00560ae3
    POP EDI                             ; 00560ae6
    POP ESI                             ; 00560ae7
    POP EBX                             ; 00560ae8
    RET                                 ; 00560ae9
    PUSH -0x1                           ; 00560aea
        ;   Label: LAB_00560aea
    LEA EAX,[EBX + 0x2b4]               ; 00560aec
    PUSH 0x0                            ; 00560af2
    PUSH EAX                            ; 00560af4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00560af5
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00560afa
    PUSH EBX                            ; 00560afd
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00560afe
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00560b03
    MOV EAX,ESI                         ; 00560b06
    ADD ESP,0x30                        ; 00560b08
    POP EDI                             ; 00560b0b
    POP ESI                             ; 00560b0c
    POP EBX                             ; 00560b0d
    RET                                 ; 00560b0e

