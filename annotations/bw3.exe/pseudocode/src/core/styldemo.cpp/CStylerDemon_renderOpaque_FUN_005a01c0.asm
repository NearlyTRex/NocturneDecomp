; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_styldemo_cpp_CStylerDemon_renderOpaque_FUN_005a01c0(CStylerDemon *this_ptr)
;
; Parameters:
; CStylerDemon *   Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 005a01c0
        ;   Label: core_styldemo.cpp_CStylerDemon_renderOpaque_FUN_005a01c0
    SUB ESP,0x30                        ; 005a01c1
    MOV EBX,dword ptr [ESP + 0x38]      ; 005a01c4
    FLD float ptr [EBX + 0xdc98]        ; 005a01c8
    FLD1                                ; 005a01ce
    FCOMPP                              ; 005a01d0
    FNSTSW AX                           ; 005a01d2
    SAHF                                ; 005a01d4
    JC 0x005a01e0                       ; 005a01d5
        ;   XREF to: 005a01e0 (CONDITIONAL_JUMP)  ; LAB_005a01e0
    CMP dword ptr [EBX + 0x24fc],0x0    ; 005a01d7
    JZ 0x005a01e7                       ; 005a01de
        ;   XREF to: 005a01e7 (CONDITIONAL_JUMP)  ; LAB_005a01e7
    XOR EAX,EAX                         ; 005a01e0
        ;   Label: LAB_005a01e0
    ADD ESP,0x30                        ; 005a01e2
    POP EBX                             ; 005a01e5
    RET                                 ; 005a01e6
    PUSH EDI                            ; 005a01e7
        ;   Label: LAB_005a01e7
    PUSH ESI                            ; 005a01e8
    PUSH EBX                            ; 005a01e9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 005a01ea
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a01ef
    PUSH 0x0                            ; 005a01f2
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a01f4
    PUSH EBX                            ; 005a01fa
    LEA ESI,[ESP + 0x10]                ; 005a01fb
    LEA EDI,[ESP + 0x28]                ; 005a01ff
    CALL dword ptr [EAX + 0x1c]         ; 005a0203
    MOV ECX,0x6                         ; 005a0206
    ADD ESP,0x4                         ; 005a020b
    LEA EAX,[ESP + 0x24]                ; 005a020e
    LEA ESI,[ESP + 0xc]                 ; 005a0212
    PUSH EAX                            ; 005a0216
    MOVSD.REP ES:EDI,ESI                ; 005a0217
    CALL core_box.cpp_FUN_0041daf0      ; 005a0219
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 005a021e
    MOV EDI,EAX                         ; 005a0221
    TEST EAX,EAX                        ; 005a0223
    JZ 0x005a023c                       ; 005a0225
        ;   XREF to: 005a023c (CONDITIONAL_JUMP)  ; LAB_005a023c
    TEST dword ptr [EBX + 0xdc98],0x7fffffff ; 005a0227
    JNZ 0x005a024e                      ; 005a0231
        ;   XREF to: 005a024e (CONDITIONAL_JUMP)  ; LAB_005a024e
    PUSH EBX                            ; 005a0233
    CALL core_charactr.cpp_FUN_0042d8e0 ; 005a0234
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 005a0239
    PUSH EBX                            ; 005a023c
        ;   Label: LAB_005a023c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005a023d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a0242
    MOV EAX,EDI                         ; 005a0245
    POP ESI                             ; 005a0247
    POP EDI                             ; 005a0248
    ADD ESP,0x30                        ; 005a0249
    POP EBX                             ; 005a024c
    RET                                 ; 005a024d
    PUSH 0x0                            ; 005a024e
        ;   Label: LAB_005a024e
    LEA EAX,[EBX + 0x158]               ; 005a0250
    PUSH EAX                            ; 005a0256
    PUSH 0x0                            ; 005a0257
    LEA ESI,[EBX + 0xd064]              ; 005a0259
    PUSH ESI                            ; 005a025f
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 005a0260
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 005a0265
    MOV EAX,dword ptr [EBX + 0xd060]    ; 005a0268
    PUSH 0x0                            ; 005a026e
    ADD EAX,0x158                       ; 005a0270
    PUSH EAX                            ; 005a0275
    PUSH 0x1                            ; 005a0276
    PUSH ESI                            ; 005a0278
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 005a0279
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 005a027e
    PUSH dword ptr [EBX + 0xdc98]       ; 005a0281
    PUSH ESI                            ; 005a0287
    CALL core_morph.cpp_CMorph_render_FUN_004fb0e0 ; 005a0288
        ;   XREF to: 004fb0e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004fb0e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 005a028d
    PUSH EBX                            ; 005a0290
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 005a0291
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a0296
    MOV EAX,EDI                         ; 005a0299
    POP ESI                             ; 005a029b
    POP EDI                             ; 005a029c
    ADD ESP,0x30                        ; 005a029d
    POP EBX                             ; 005a02a0
    RET                                 ; 005a02a1

