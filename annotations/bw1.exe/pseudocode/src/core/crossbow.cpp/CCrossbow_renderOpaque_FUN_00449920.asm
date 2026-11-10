; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_crossbow_cpp_CCrossbow_renderOpaque_FUN_00449920(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0044a0c0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449920
        ;   Label: core_crossbow.cpp_CCrossbow_renderOpaque_FUN_00449920
    PUSH ESI                            ; 00449921
    PUSH EDI                            ; 00449922
    SUB ESP,0x34                        ; 00449923
    MOV EBX,dword ptr [ESP + 0x44]      ; 00449926
    PUSH EBX                            ; 0044992a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0044992b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00449930
    PUSH 0x0                            ; 00449933
    MOV EAX,dword ptr [EBX + 0x154]     ; 00449935
    PUSH EBX                            ; 0044993b
    LEA ESI,[ESP + 0x20]                ; 0044993c
    LEA EDI,[ESP + 0x8]                 ; 00449940
    CALL dword ptr [EAX + 0x1c]         ; 00449944
    MOV ECX,0x6                         ; 00449947
    ADD ESP,0x4                         ; 0044994c
    LEA EAX,[ESP + 0x4]                 ; 0044994f
    LEA ESI,[ESP + 0x1c]                ; 00449953
    PUSH EAX                            ; 00449957
    MOVSD.REP ES:EDI,ESI                ; 00449958
    CALL core_box.cpp_FUN_004207b0      ; 0044995a
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0044995f
    MOV ESI,EAX                         ; 00449962
    TEST EAX,EAX                        ; 00449964
    JNZ 0x0044997a                      ; 00449966
        ;   XREF to: 0044997a (CONDITIONAL_JUMP)  ; LAB_0044997a
    PUSH EBX                            ; 00449968
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00449969
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0044996e
    MOV EAX,ESI                         ; 00449971
    ADD ESP,0x34                        ; 00449973
    POP EDI                             ; 00449976
    POP ESI                             ; 00449977
    POP EBX                             ; 00449978
    RET                                 ; 00449979
    PUSH -0x1                           ; 0044997a
        ;   Label: LAB_0044997a
    PUSH EBX                            ; 0044997c
    CALL core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0044a0c0 ; 0044997d
        ;   XREF to: 0044a0c0 (UNCONDITIONAL_CALL)  ; float core_crossbow.cpp_CCrossbow_getCurFrame_FUN_0044a0c0(CCrossbow * this_ptr)
    MOV dword ptr [ESP + 0x38],EAX      ; 00449982
    FLD float ptr [ESP + 0x38]          ; 00449986
    ADD ESP,0x4                         ; 0044998a
    SUB ESP,0x4                         ; 0044998d
    LEA EAX,[EBX + 0x158]               ; 00449990
    FSTP float ptr [ESP]                ; 00449996
    PUSH EAX                            ; 00449999
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 0044999a
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0044999f
    PUSH EBX                            ; 004499a2
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004499a3
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004499a8
    MOV EAX,ESI                         ; 004499ab
    ADD ESP,0x34                        ; 004499ad
    POP EDI                             ; 004499b0
    POP ESI                             ; 004499b1
    POP EBX                             ; 004499b2
    RET                                 ; 004499b3

