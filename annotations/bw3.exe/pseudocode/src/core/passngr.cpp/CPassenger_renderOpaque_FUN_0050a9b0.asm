; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_passngr_cpp_CPassenger_renderOpaque_FUN_0050a9b0(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
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

    PUSH EBX                            ; 0050a9b0
        ;   Label: core_passngr.cpp_CPassenger_renderOpaque_FUN_0050a9b0
    SUB ESP,0x30                        ; 0050a9b1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0050a9b4
    FLD float ptr [EBX + 0x21400]       ; 0050a9b8
    FLD1                                ; 0050a9be
    FCOMPP                              ; 0050a9c0
    FNSTSW AX                           ; 0050a9c2
    SAHF                                ; 0050a9c4
    JC 0x0050a9d0                       ; 0050a9c5
        ;   XREF to: 0050a9d0 (CONDITIONAL_JUMP)  ; LAB_0050a9d0
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0050a9c7
    JZ 0x0050a9d7                       ; 0050a9ce
        ;   XREF to: 0050a9d7 (CONDITIONAL_JUMP)  ; LAB_0050a9d7
    XOR EAX,EAX                         ; 0050a9d0
        ;   Label: LAB_0050a9d0
    ADD ESP,0x30                        ; 0050a9d2
    POP EBX                             ; 0050a9d5
    RET                                 ; 0050a9d6
    PUSH EDI                            ; 0050a9d7
        ;   Label: LAB_0050a9d7
    PUSH ESI                            ; 0050a9d8
    PUSH EBX                            ; 0050a9d9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0050a9da
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050a9df
    PUSH 0x0                            ; 0050a9e2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050a9e4
    PUSH EBX                            ; 0050a9ea
    LEA ESI,[ESP + 0x10]                ; 0050a9eb
    LEA EDI,[ESP + 0x28]                ; 0050a9ef
    CALL dword ptr [EAX + 0x1c]         ; 0050a9f3
    MOV ECX,0x6                         ; 0050a9f6
    ADD ESP,0x4                         ; 0050a9fb
    LEA EAX,[ESP + 0x24]                ; 0050a9fe
    LEA ESI,[ESP + 0xc]                 ; 0050aa02
    PUSH EAX                            ; 0050aa06
    MOVSD.REP ES:EDI,ESI                ; 0050aa07
    CALL core_box.cpp_FUN_0041daf0      ; 0050aa09
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0050aa0e
    MOV EDI,EAX                         ; 0050aa11
    TEST EAX,EAX                        ; 0050aa13
    JZ 0x0050aa2c                       ; 0050aa15
        ;   XREF to: 0050aa2c (CONDITIONAL_JUMP)  ; LAB_0050aa2c
    TEST dword ptr [EBX + 0x21400],0x7fffffff ; 0050aa17
    JNZ 0x0050aa3e                      ; 0050aa21
        ;   XREF to: 0050aa3e (CONDITIONAL_JUMP)  ; LAB_0050aa3e
    PUSH EBX                            ; 0050aa23
    CALL core_charactr.cpp_FUN_0042d8e0 ; 0050aa24
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 0050aa29
    PUSH EBX                            ; 0050aa2c
        ;   Label: LAB_0050aa2c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0050aa2d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050aa32
    MOV EAX,EDI                         ; 0050aa35
    POP ESI                             ; 0050aa37
    POP EDI                             ; 0050aa38
    ADD ESP,0x30                        ; 0050aa39
    POP EBX                             ; 0050aa3c
    RET                                 ; 0050aa3d
    PUSH 0x0                            ; 0050aa3e
        ;   Label: LAB_0050aa3e
    LEA EAX,[EBX + 0x158]               ; 0050aa40
    PUSH EAX                            ; 0050aa46
    PUSH 0x0                            ; 0050aa47
    LEA ESI,[EBX + 0x207d4]             ; 0050aa49
    PUSH ESI                            ; 0050aa4f
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 0050aa50
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0050aa55
    MOV EAX,dword ptr [EBX + 0x207d0]   ; 0050aa58
    PUSH 0x0                            ; 0050aa5e
    ADD EAX,0x158                       ; 0050aa60
    PUSH EAX                            ; 0050aa65
    PUSH 0x1                            ; 0050aa66
    PUSH ESI                            ; 0050aa68
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 ; 0050aa69
        ;   XREF to: 004fab90 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr, int part_index)
    ADD ESP,0x10                        ; 0050aa6e
    PUSH dword ptr [EBX + 0x21400]      ; 0050aa71
    PUSH ESI                            ; 0050aa77
    CALL core_morph.cpp_CMorph_render_FUN_004fb0e0 ; 0050aa78
        ;   XREF to: 004fb0e0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_render_FUN_004fb0e0(CMorph * this_ptr, float morph_t)
    ADD ESP,0x8                         ; 0050aa7d
    PUSH EBX                            ; 0050aa80
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0050aa81
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050aa86
    MOV EAX,EDI                         ; 0050aa89
    POP ESI                             ; 0050aa8b
    POP EDI                             ; 0050aa8c
    ADD ESP,0x30                        ; 0050aa8d
    POP EBX                             ; 0050aa90
    RET                                 ; 0050aa91

