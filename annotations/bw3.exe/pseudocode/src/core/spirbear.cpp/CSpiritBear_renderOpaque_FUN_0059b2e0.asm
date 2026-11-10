; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spirbear_cpp_CSpiritBear_renderOpaque_FUN_0059b2e0(CSpiritBear *this_ptr)
;
; Parameters:
; CSpiritBear *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042d8e0
;   core_morph.cpp_CMorph_render_FUN_004fb0e0
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b2e0
        ;   Label: core_spirbear.cpp_CSpiritBear_renderOpaque_FUN_0059b2e0
    SUB ESP,0x30                        ; 0059b2e1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0059b2e4
    FLD float ptr [EBX + 0x34da0]       ; 0059b2e8
    FLD1                                ; 0059b2ee
    FCOMPP                              ; 0059b2f0
    FNSTSW AX                           ; 0059b2f2
    SAHF                                ; 0059b2f4
    JC 0x0059b300                       ; 0059b2f5
        ;   XREF to: 0059b300 (CONDITIONAL_JUMP)  ; LAB_0059b300
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0059b2f7
    JZ 0x0059b307                       ; 0059b2fe
        ;   XREF to: 0059b307 (CONDITIONAL_JUMP)  ; LAB_0059b307
    XOR EAX,EAX                         ; 0059b300
        ;   Label: LAB_0059b300
    ADD ESP,0x30                        ; 0059b302
    POP EBX                             ; 0059b305
    RET                                 ; 0059b306
    PUSH EDI                            ; 0059b307
        ;   Label: LAB_0059b307
    PUSH ESI                            ; 0059b308
    PUSH EBX                            ; 0059b309
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0059b30a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059b30f
    PUSH 0x0                            ; 0059b312
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059b314
    PUSH EBX                            ; 0059b31a
    LEA ESI,[ESP + 0x10]                ; 0059b31b
    LEA EDI,[ESP + 0x28]                ; 0059b31f
    CALL dword ptr [EAX + 0x1c]         ; 0059b323
    MOV ECX,0x6                         ; 0059b326
    ADD ESP,0x4                         ; 0059b32b
    LEA EAX,[ESP + 0x24]                ; 0059b32e
    LEA ESI,[ESP + 0xc]                 ; 0059b332
    PUSH EAX                            ; 0059b336
    MOVSD.REP ES:EDI,ESI                ; 0059b337
    CALL core_box.cpp_FUN_0041daf0      ; 0059b339
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0059b33e
    MOV EDI,EAX                         ; 0059b341
    TEST EAX,EAX                        ; 0059b343
    JZ 0x0059b35c                       ; 0059b345
        ;   XREF to: 0059b35c (CONDITIONAL_JUMP)  ; LAB_0059b35c
    TEST dword ptr [EBX + 0x34da0],0x7fffffff ; 0059b347
    JNZ 0x0059b36e                      ; 0059b351
        ;   XREF to: 0059b36e (CONDITIONAL_JUMP)  ; LAB_0059b36e
    PUSH EBX                            ; 0059b353
    CALL core_charactr.cpp_FUN_0042d8e0 ; 0059b354
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 0059b359
    PUSH EBX                            ; 0059b35c
        ;   Label: LAB_0059b35c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0059b35d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059b362
    MOV EAX,EDI                         ; 0059b365
    POP ESI                             ; 0059b367
    POP EDI                             ; 0059b368
    ADD ESP,0x30                        ; 0059b369
    POP EBX                             ; 0059b36c
    RET                                 ; 0059b36d
    PUSH 0x0                            ; 0059b36e
        ;   Label: LAB_0059b36e
    LEA EAX,[EBX + 0x158]               ; 0059b370
    PUSH EAX                            ; 0059b376
    PUSH 0x0                            ; 0059b377
    LEA ESI,[EBX + 0x34174]             ; 0059b379
    PUSH ESI                            ; 0059b37f
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 0059b380
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0059b385
    MOV EAX,dword ptr [EBX + 0x34170]   ; 0059b388
    PUSH 0x0                            ; 0059b38e
    ADD EAX,0x158                       ; 0059b390
    PUSH EAX                            ; 0059b395
    PUSH 0x1                            ; 0059b396
    PUSH ESI                            ; 0059b398
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 0059b399
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0059b39e
    PUSH dword ptr [EBX + 0x34da0]      ; 0059b3a1
    PUSH ESI                            ; 0059b3a7
    CALL core_morph.cpp_CMorph_render_FUN_004fb0e0 ; 0059b3a8
        ;   XREF to: 004fb0e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004fb0e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 0059b3ad
    PUSH EBX                            ; 0059b3b0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0059b3b1
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0059b3b6
    MOV EAX,EDI                         ; 0059b3b9
    POP ESI                             ; 0059b3bb
    POP EDI                             ; 0059b3bc
    ADD ESP,0x30                        ; 0059b3bd
    POP EBX                             ; 0059b3c0
    RET                                 ; 0059b3c1

