; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_tvbat_cpp_FUN_00575fe0(CDemonActor *param_1)
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

    PUSH EBX                            ; 00575fe0
        ;   Label: core_tvbat.cpp_FUN_00575fe0
    SUB ESP,0x30                        ; 00575fe1
    MOV EBX,dword ptr [ESP + 0x38]      ; 00575fe4
    CMP dword ptr [EBX + 0xd210],0x3    ; 00575fe8
    JNZ 0x00575ff8                      ; 00575fef
        ;   XREF to: 00575ff8 (CONDITIONAL_JUMP)  ; LAB_00575ff8
    XOR EAX,EAX                         ; 00575ff1
    ADD ESP,0x30                        ; 00575ff3
    POP EBX                             ; 00575ff6
    RET                                 ; 00575ff7
    PUSH EDI                            ; 00575ff8
        ;   Label: LAB_00575ff8
    PUSH ESI                            ; 00575ff9
    PUSH EBX                            ; 00575ffa
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00575ffb
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00576000
    PUSH 0x0                            ; 00576003
    MOV EAX,dword ptr [EBX + 0x154]     ; 00576005
    PUSH EBX                            ; 0057600b
    LEA ESI,[ESP + 0x10]                ; 0057600c
    LEA EDI,[ESP + 0x28]                ; 00576010
    CALL dword ptr [EAX + 0x1c]         ; 00576014
    MOV ECX,0x6                         ; 00576017
    ADD ESP,0x4                         ; 0057601c
    LEA EAX,[ESP + 0x24]                ; 0057601f
    LEA ESI,[ESP + 0xc]                 ; 00576023
    PUSH EAX                            ; 00576027
    MOVSD.REP ES:EDI,ESI                ; 00576028
    CALL core_box.cpp_FUN_0041daf0      ; 0057602a
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0057602f
    MOV ESI,EAX                         ; 00576032
    TEST EAX,EAX                        ; 00576034
    JZ 0x0057604f                       ; 00576036
        ;   XREF to: 0057604f (CONDITIONAL_JUMP)  ; LAB_0057604f
    PUSH -0x1                           ; 00576038
    LEA EAX,[EBX + 0xd058]              ; 0057603a
    PUSH dword ptr [EBX + 0xd054]       ; 00576040
    PUSH EAX                            ; 00576046
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00576047
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0057604c
    PUSH EBX                            ; 0057604f
        ;   Label: LAB_0057604f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00576050
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00576055
    MOV EAX,ESI                         ; 00576058
    POP ESI                             ; 0057605a
    POP EDI                             ; 0057605b
    ADD ESP,0x30                        ; 0057605c
    POP EBX                             ; 0057605f
    RET                                 ; 00576060

