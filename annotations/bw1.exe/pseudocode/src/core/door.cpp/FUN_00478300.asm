; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_00478300(CDemonActor *param_1,int param_2)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478300
        ;   Label: core_door.cpp_FUN_00478300
    SUB ESP,0x30                        ; 00478301
    MOV EBX,dword ptr [ESP + 0x38]      ; 00478304
    CMP dword ptr [ESP + 0x3c],0x0      ; 00478308
    JZ 0x00478318                       ; 0047830d
        ;   XREF to: 00478318 (CONDITIONAL_JUMP)  ; LAB_00478318
    CMP dword ptr [EBX + 0x9c8],0x2     ; 0047830f
    JGE 0x0047831d                      ; 00478316
        ;   XREF to: 0047831d (CONDITIONAL_JUMP)  ; LAB_0047831d
    ADD ESP,0x30                        ; 00478318
        ;   Label: LAB_00478318
    POP EBX                             ; 0047831b
    RET                                 ; 0047831c
    PUSH EDI                            ; 0047831d
        ;   Label: LAB_0047831d
    PUSH ESI                            ; 0047831e
    PUSH EBX                            ; 0047831f
    MOV dword ptr [EBX + 0x9c8],0x3     ; 00478320
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0047832a
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047832f
    PUSH 0x0                            ; 00478332
    MOV EAX,dword ptr [EBX + 0x154]     ; 00478334
    PUSH EBX                            ; 0047833a
    LEA ESI,[ESP + 0x10]                ; 0047833b
    LEA EDI,[ESP + 0x28]                ; 0047833f
    CALL dword ptr [EAX + 0x1c]         ; 00478343
    MOV ECX,0x6                         ; 00478346
    ADD ESP,0x4                         ; 0047834b
    LEA EAX,[ESP + 0x24]                ; 0047834e
    LEA ESI,[ESP + 0xc]                 ; 00478352
    PUSH EAX                            ; 00478356
    MOVSD.REP ES:EDI,ESI                ; 00478357
    CALL core_box.cpp_FUN_004207b0      ; 00478359
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0047835e
    TEST EAX,EAX                        ; 00478361
    JZ 0x00478378                       ; 00478363
        ;   XREF to: 00478378 (CONDITIONAL_JUMP)  ; LAB_00478378
    PUSH -0x1                           ; 00478365
    LEA EAX,[EBX + 0x158]               ; 00478367
    PUSH 0x0                            ; 0047836d
    PUSH EAX                            ; 0047836f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 00478370
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00478375
    PUSH EBX                            ; 00478378
        ;   Label: LAB_00478378
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 00478379
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047837e
    POP ESI                             ; 00478381
    POP EDI                             ; 00478382
    ADD ESP,0x30                        ; 00478383
    POP EBX                             ; 00478386
    RET                                 ; 00478387

