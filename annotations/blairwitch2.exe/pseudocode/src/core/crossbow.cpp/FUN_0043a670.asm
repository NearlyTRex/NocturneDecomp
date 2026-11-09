; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_crossbow_cpp_FUN_0043a670(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_crossbow.cpp_FUN_0043ae10
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a670
        ;   Label: core_crossbow.cpp_FUN_0043a670
    PUSH ESI                            ; 0043a671
    PUSH EDI                            ; 0043a672
    SUB ESP,0x34                        ; 0043a673
    MOV EBX,dword ptr [ESP + 0x44]      ; 0043a676
    PUSH EBX                            ; 0043a67a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0043a67b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043a680
    PUSH 0x0                            ; 0043a683
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0043a685
    PUSH EBX                            ; 0043a68b
    LEA ESI,[ESP + 0x20]                ; 0043a68c
    LEA EDI,[ESP + 0x8]                 ; 0043a690
    CALL dword ptr [EAX + 0x24]         ; 0043a694
    MOV ECX,0x6                         ; 0043a697
    ADD ESP,0x4                         ; 0043a69c
    LEA EAX,[ESP + 0x4]                 ; 0043a69f
    LEA ESI,[ESP + 0x1c]                ; 0043a6a3
    PUSH EAX                            ; 0043a6a7
    MOVSD.REP ES:EDI,ESI                ; 0043a6a8
    CALL core_box.cpp_FUN_0041a840      ; 0043a6aa
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0043a6af
    MOV ESI,EAX                         ; 0043a6b2
    TEST EAX,EAX                        ; 0043a6b4
    JNZ 0x0043a6ca                      ; 0043a6b6
        ;   XREF to: 0043a6ca (CONDITIONAL_JUMP)  ; LAB_0043a6ca
    PUSH EBX                            ; 0043a6b8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0043a6b9
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043a6be
    MOV EAX,ESI                         ; 0043a6c1
    ADD ESP,0x34                        ; 0043a6c3
    POP EDI                             ; 0043a6c6
    POP ESI                             ; 0043a6c7
    POP EBX                             ; 0043a6c8
    RET                                 ; 0043a6c9
    PUSH -0x1                           ; 0043a6ca
        ;   Label: LAB_0043a6ca
    PUSH EBX                            ; 0043a6cc
    CALL core_crossbow.cpp_FUN_0043ae10 ; 0043a6cd
        ;   XREF to: 0043ae10 (UNCONDITIONAL_CALL)  ; undefined core_crossbow.cpp_FUN_0043ae10()
    MOV dword ptr [ESP + 0x38],EAX      ; 0043a6d2
    FLD float ptr [ESP + 0x38]          ; 0043a6d6
    ADD ESP,0x4                         ; 0043a6da
    SUB ESP,0x4                         ; 0043a6dd
    LEA EAX,[EBX + 0x2b4]               ; 0043a6e0
    FSTP float ptr [ESP]                ; 0043a6e6
    PUSH EAX                            ; 0043a6e9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0043a6ea
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0043a6ef
    PUSH EBX                            ; 0043a6f2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0043a6f3
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0043a6f8
    MOV EAX,ESI                         ; 0043a6fb
    ADD ESP,0x34                        ; 0043a6fd
    POP EDI                             ; 0043a700
    POP ESI                             ; 0043a701
    POP EBX                             ; 0043a702
    RET                                 ; 0043a703

