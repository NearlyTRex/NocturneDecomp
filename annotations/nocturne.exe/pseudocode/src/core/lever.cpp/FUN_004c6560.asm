; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_lever_cpp_FUN_004c6560(int param_1)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6560
        ;   Label: core_lever.cpp_FUN_004c6560
    PUSH ESI                            ; 004c6561
    PUSH EDI                            ; 004c6562
    PUSH EBP                            ; 004c6563
    MOV EBP,ESP                         ; 004c6564
    SUB ESP,0x1c                        ; 004c6566
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c6569
    PUSH EBX                            ; 004c656c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004c656d
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 004c6572
    PUSH 0x0                            ; 004c6575
    LEA ESI,[EBP + -0x1c]               ; 004c6577
    PUSH ESI                            ; 004c657a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c657b
    PUSH EBX                            ; 004c6581
    CALL dword ptr [EAX + 0x14]         ; 004c6582
    ADD ESP,0x8                         ; 004c6585
    PUSH EAX                            ; 004c6588
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004c6589
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 004c658e
    MOV EDI,EAX                         ; 004c6591
    TEST EAX,EAX                        ; 004c6593
    JNZ 0x004c65a9                      ; 004c6595
        ;   XREF to: 004c65a9 (CONDITIONAL_JUMP)  ; LAB_004c65a9
    PUSH EBX                            ; 004c6597
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004c6598
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004c659d
    MOV EAX,EDI                         ; 004c65a0
    MOV ESP,EBP                         ; 004c65a2
    POP EBP                             ; 004c65a4
    POP EDI                             ; 004c65a5
    POP ESI                             ; 004c65a6
    POP EBX                             ; 004c65a7
    RET                                 ; 004c65a8
    PUSH -0x1                           ; 004c65a9
        ;   Label: LAB_004c65a9
    LEA ESI,[EBX + 0x150]               ; 004c65ab
    PUSH ESI                            ; 004c65b1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004c65b2
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x100]     ; 004c65b7
    DEC EAX                             ; 004c65bd
    MOV dword ptr [EBP + -0x4],EAX      ; 004c65be
    ADD ESP,0x4                         ; 004c65c1
    FILD dword ptr [EBP + -0x4]         ; 004c65c4
    FMUL float ptr [EBX + 0x2d4]        ; 004c65c7
    SUB ESP,0x4                         ; 004c65cd
    FSTP float ptr [ESP]                ; 004c65d0
    PUSH ESI                            ; 004c65d3
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 004c65d4
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 004c65d9
    PUSH EBX                            ; 004c65dc
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004c65dd
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004c65e2
    MOV EAX,EDI                         ; 004c65e5
    MOV ESP,EBP                         ; 004c65e7
    POP EBP                             ; 004c65e9
    POP EDI                             ; 004c65ea
    POP ESI                             ; 004c65eb
    POP EBX                             ; 004c65ec
    RET                                 ; 004c65ed

