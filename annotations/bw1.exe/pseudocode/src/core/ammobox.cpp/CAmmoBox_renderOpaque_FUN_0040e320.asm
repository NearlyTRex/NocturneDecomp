; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammobox_cpp_CAmmoBox_renderOpaque_FUN_0040e320(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e320
        ;   Label: core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e320
    PUSH ESI                            ; 0040e321
    PUSH EDI                            ; 0040e322
    PUSH EBP                            ; 0040e323
    MOV EBP,ESP                         ; 0040e324
    SUB ESP,0x34                        ; 0040e326
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040e329
    PUSH EBX                            ; 0040e32c
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0040e32d
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e332
    PUSH 0x0                            ; 0040e335
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040e337
    PUSH EBX                            ; 0040e33d
    LEA ESI,[EBP + -0x1c]               ; 0040e33e
    LEA EDI,[EBP + -0x34]               ; 0040e341
    CALL dword ptr [EAX + 0x1c]         ; 0040e344
    MOV ECX,0x6                         ; 0040e347
    ADD ESP,0x4                         ; 0040e34c
    LEA EAX,[EBP + -0x34]               ; 0040e34f
    LEA ESI,[EBP + -0x1c]               ; 0040e352
    PUSH EAX                            ; 0040e355
    MOVSD.REP ES:EDI,ESI                ; 0040e356
    CALL core_box.cpp_FUN_004207b0      ; 0040e358
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0040e35d
    MOV EDI,EAX                         ; 0040e360
    TEST EAX,EAX                        ; 0040e362
    JNZ 0x0040e378                      ; 0040e364
        ;   XREF to: 0040e378 (CONDITIONAL_JUMP)  ; LAB_0040e378
    PUSH EBX                            ; 0040e366
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0040e367
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e36c
    MOV EAX,EDI                         ; 0040e36f
    MOV ESP,EBP                         ; 0040e371
    POP EBP                             ; 0040e373
    POP EDI                             ; 0040e374
    POP ESI                             ; 0040e375
    POP EBX                             ; 0040e376
    RET                                 ; 0040e377
    PUSH -0x1                           ; 0040e378
        ;   Label: LAB_0040e378
    LEA ESI,[EBX + 0x158]               ; 0040e37a
    PUSH ESI                            ; 0040e380
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0040e381
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 0040e386
    DEC EAX                             ; 0040e38c
    MOV dword ptr [EBP + -0x4],EAX      ; 0040e38d
    ADD ESP,0x4                         ; 0040e390
    FILD dword ptr [EBP + -0x4]         ; 0040e393
    FMUL float ptr [EBX + 0x31c]        ; 0040e396
    SUB ESP,0x4                         ; 0040e39c
    FSTP float ptr [ESP]                ; 0040e39f
    PUSH ESI                            ; 0040e3a2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 0040e3a3
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040e3a8
    PUSH EBX                            ; 0040e3ab
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0040e3ac
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e3b1
    MOV EAX,EDI                         ; 0040e3b4
    MOV ESP,EBP                         ; 0040e3b6
    POP EBP                             ; 0040e3b8
    POP EDI                             ; 0040e3b9
    POP ESI                             ; 0040e3ba
    POP EBX                             ; 0040e3bb
    RET                                 ; 0040e3bc

