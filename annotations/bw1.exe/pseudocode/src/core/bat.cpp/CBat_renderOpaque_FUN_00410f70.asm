; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bat_cpp_CBat_renderOpaque_FUN_00410f70(CBat *this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410f70
        ;   Label: core_bat.cpp_CBat_renderOpaque_FUN_00410f70
    PUSH ESI                            ; 00410f71
    PUSH EDI                            ; 00410f72
    SUB ESP,0x30                        ; 00410f73
    MOV EBX,dword ptr [ESP + 0x40]      ; 00410f76
    PUSH EBX                            ; 00410f7a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 00410f7b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410f80
    PUSH 0x0                            ; 00410f83
    MOV EAX,dword ptr [EBX + 0x154]     ; 00410f85
    PUSH EBX                            ; 00410f8b
    LEA ESI,[ESP + 0x8]                 ; 00410f8c
    LEA EDI,[ESP + 0x20]                ; 00410f90
    CALL dword ptr [EAX + 0x1c]         ; 00410f94
    MOV ECX,0x6                         ; 00410f97
    ADD ESP,0x4                         ; 00410f9c
    LEA EAX,[ESP + 0x1c]                ; 00410f9f
    LEA ESI,[ESP + 0x4]                 ; 00410fa3
    PUSH EAX                            ; 00410fa7
    MOVSD.REP ES:EDI,ESI                ; 00410fa8
    CALL core_box.cpp_FUN_004207b0      ; 00410faa
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 00410faf
    MOV ESI,EAX                         ; 00410fb2
    TEST EAX,EAX                        ; 00410fb4
    JNZ 0x00410fca                      ; 00410fb6
        ;   XREF to: 00410fca (CONDITIONAL_JUMP)  ; LAB_00410fca
    PUSH EBX                            ; 00410fb8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00410fb9
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410fbe
    MOV EAX,ESI                         ; 00410fc1
    ADD ESP,0x30                        ; 00410fc3
    POP EDI                             ; 00410fc6
    POP ESI                             ; 00410fc7
    POP EBX                             ; 00410fc8
    RET                                 ; 00410fc9
    PUSH -0x1                           ; 00410fca
        ;   Label: LAB_00410fca
    LEA EAX,[EBX + 0x188]               ; 00410fcc
    PUSH dword ptr [EBX + 0x184]        ; 00410fd2
    PUSH EAX                            ; 00410fd8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 00410fd9
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00410fde
    PUSH EBX                            ; 00410fe1
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00410fe2
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00410fe7
    MOV EAX,ESI                         ; 00410fea
    ADD ESP,0x30                        ; 00410fec
    POP EDI                             ; 00410fef
    POP ESI                             ; 00410ff0
    POP EBX                             ; 00410ff1
    RET                                 ; 00410ff2

