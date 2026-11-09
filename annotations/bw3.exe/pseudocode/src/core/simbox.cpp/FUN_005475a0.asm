; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_simbox_cpp_FUN_005475a0(CDemonActor *param_1)
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

    PUSH EBX                            ; 005475a0
        ;   Label: core_simbox.cpp_FUN_005475a0
    PUSH ESI                            ; 005475a1
    PUSH EDI                            ; 005475a2
    SUB ESP,0x30                        ; 005475a3
    MOV EBX,dword ptr [ESP + 0x40]      ; 005475a6
    PUSH EBX                            ; 005475aa
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005475ab
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005475b0
    PUSH 0x0                            ; 005475b3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005475b5
    PUSH EBX                            ; 005475bb
    LEA ESI,[ESP + 0x8]                 ; 005475bc
    LEA EDI,[ESP + 0x20]                ; 005475c0
    CALL dword ptr [EAX + 0x1c]         ; 005475c4
    MOV ECX,0x6                         ; 005475c7
    ADD ESP,0x4                         ; 005475cc
    LEA EAX,[ESP + 0x1c]                ; 005475cf
    LEA ESI,[ESP + 0x4]                 ; 005475d3
    PUSH EAX                            ; 005475d7
    MOVSD.REP ES:EDI,ESI                ; 005475d8
    CALL core_box.cpp_FUN_0041daf0      ; 005475da
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005475df
    MOV ESI,EAX                         ; 005475e2
    TEST EAX,EAX                        ; 005475e4
    JNZ 0x005475fa                      ; 005475e6
        ;   XREF to: 005475fa (CONDITIONAL_JUMP)  ; LAB_005475fa
    PUSH EBX                            ; 005475e8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005475e9
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005475ee
    MOV EAX,ESI                         ; 005475f1
    ADD ESP,0x30                        ; 005475f3
    POP EDI                             ; 005475f6
    POP ESI                             ; 005475f7
    POP EBX                             ; 005475f8
    RET                                 ; 005475f9
    PUSH -0x1                           ; 005475fa
        ;   Label: LAB_005475fa
    LEA EAX,[EBX + 0x158]               ; 005475fc
    PUSH 0x0                            ; 00547602
    PUSH EAX                            ; 00547604
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00547605
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0054760a
    PUSH EBX                            ; 0054760d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0054760e
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00547613
    MOV EAX,ESI                         ; 00547616
    ADD ESP,0x30                        ; 00547618
    POP EDI                             ; 0054761b
    POP ESI                             ; 0054761c
    POP EBX                             ; 0054761d
    RET                                 ; 0054761e

