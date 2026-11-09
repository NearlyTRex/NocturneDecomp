; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grave_cpp_FUN_004cf4e0(CDemonActor *param_1,int param_2)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf4e0
        ;   Label: core_grave.cpp_FUN_004cf4e0
    SUB ESP,0x30                        ; 004cf4e1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004cf4e4
    CMP dword ptr [ESP + 0x3c],0x0      ; 004cf4e8
    JZ 0x004cf56f                       ; 004cf4ed
        ;   XREF to: 004cf56f (CONDITIONAL_JUMP)  ; LAB_004cf56f
    CMP dword ptr [EBX + 0x2dc],0x0     ; 004cf4f3
    JNZ 0x004cf50f                      ; 004cf4fa
        ;   XREF to: 004cf50f (CONDITIONAL_JUMP)  ; LAB_004cf50f
    CMP dword ptr [EBX + 0x2e0],0x2     ; 004cf4fc
    JNZ 0x004cf56f                      ; 004cf503
        ;   XREF to: 004cf56f (CONDITIONAL_JUMP)  ; LAB_004cf56f
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004cf505
    PUSH EDI                            ; 004cf50f
        ;   Label: LAB_004cf50f
    PUSH ESI                            ; 004cf510
    PUSH EBX                            ; 004cf511
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 004cf512
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cf517
    PUSH 0x0                            ; 004cf51a
    MOV EAX,dword ptr [EBX + 0x154]     ; 004cf51c
    PUSH EBX                            ; 004cf522
    LEA ESI,[ESP + 0x10]                ; 004cf523
    LEA EDI,[ESP + 0x28]                ; 004cf527
    CALL dword ptr [EAX + 0x1c]         ; 004cf52b
    MOV ECX,0x6                         ; 004cf52e
    ADD ESP,0x4                         ; 004cf533
    LEA EAX,[ESP + 0x24]                ; 004cf536
    LEA ESI,[ESP + 0xc]                 ; 004cf53a
    PUSH EAX                            ; 004cf53e
    MOVSD.REP ES:EDI,ESI                ; 004cf53f
    CALL core_box.cpp_FUN_0041daf0      ; 004cf541
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004cf546
    TEST EAX,EAX                        ; 004cf549
    JZ 0x004cf564                       ; 004cf54b
        ;   XREF to: 004cf564 (CONDITIONAL_JUMP)  ; LAB_004cf564
    PUSH -0x1                           ; 004cf54d
    LEA EAX,[EBX + 0x158]               ; 004cf54f
    PUSH dword ptr [EBX + 0x2d4]        ; 004cf555
    PUSH EAX                            ; 004cf55b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 004cf55c
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004cf561
    PUSH EBX                            ; 004cf564
        ;   Label: LAB_004cf564
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 004cf565
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cf56a
    POP ESI                             ; 004cf56d
    POP EDI                             ; 004cf56e
    ADD ESP,0x30                        ; 004cf56f
        ;   Label: LAB_004cf56f
    POP EBX                             ; 004cf572
    RET                                 ; 004cf573

