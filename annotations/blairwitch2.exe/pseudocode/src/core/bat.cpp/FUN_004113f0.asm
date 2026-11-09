; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bat_cpp_FUN_004113f0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004113f0
        ;   Label: core_bat.cpp_FUN_004113f0
    PUSH ESI                            ; 004113f1
    PUSH EDI                            ; 004113f2
    SUB ESP,0x30                        ; 004113f3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004113f6
    PUSH EBX                            ; 004113fa
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004113fb
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00411400
    PUSH 0x0                            ; 00411403
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00411405
    PUSH EBX                            ; 0041140b
    LEA ESI,[ESP + 0x8]                 ; 0041140c
    LEA EDI,[ESP + 0x20]                ; 00411410
    CALL dword ptr [EAX + 0x24]         ; 00411414
    MOV ECX,0x6                         ; 00411417
    ADD ESP,0x4                         ; 0041141c
    LEA EAX,[ESP + 0x1c]                ; 0041141f
    LEA ESI,[ESP + 0x4]                 ; 00411423
    PUSH EAX                            ; 00411427
    MOVSD.REP ES:EDI,ESI                ; 00411428
    CALL core_box.cpp_FUN_0041a840      ; 0041142a
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0041142f
    MOV ESI,EAX                         ; 00411432
    TEST EAX,EAX                        ; 00411434
    JNZ 0x0041144a                      ; 00411436
        ;   XREF to: 0041144a (CONDITIONAL_JUMP)  ; LAB_0041144a
    PUSH EBX                            ; 00411438
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00411439
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041143e
    MOV EAX,ESI                         ; 00411441
    ADD ESP,0x30                        ; 00411443
    POP EDI                             ; 00411446
    POP ESI                             ; 00411447
    POP EBX                             ; 00411448
    RET                                 ; 00411449
    PUSH -0x1                           ; 0041144a
        ;   Label: LAB_0041144a
    LEA EAX,[EBX + 0x2e4]               ; 0041144c
    PUSH dword ptr [EBX + 0x2e0]        ; 00411452
    PUSH EAX                            ; 00411458
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 00411459
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041145e
    PUSH EBX                            ; 00411461
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00411462
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00411467
    MOV EAX,ESI                         ; 0041146a
    ADD ESP,0x30                        ; 0041146c
    POP EDI                             ; 0041146f
    POP ESI                             ; 00411470
    POP EBX                             ; 00411471
    RET                                 ; 00411472

