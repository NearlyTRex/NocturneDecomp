; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004efa60(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
;   core_morph.cpp_CMorph_render_FUN_004e0820
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efa60
        ;   Label: FUN_004efa60
    SUB ESP,0x18                        ; 004efa61
    MOV EBX,dword ptr [ESP + 0x20]      ; 004efa64
    FLD float ptr [EBX + 0x202a8]       ; 004efa68
    FLD1                                ; 004efa6e
    FCOMPP                              ; 004efa70
    FNSTSW AX                           ; 004efa72
    SAHF                                ; 004efa74
    JC 0x004efa80                       ; 004efa75
        ;   XREF to: 004efa80 (CONDITIONAL_JUMP)  ; LAB_004efa80
    CMP dword ptr [EBX + 0x2404],0x0    ; 004efa77
    JZ 0x004efa87                       ; 004efa7e
        ;   XREF to: 004efa87 (CONDITIONAL_JUMP)  ; LAB_004efa87
    XOR EAX,EAX                         ; 004efa80
        ;   Label: LAB_004efa80
    ADD ESP,0x18                        ; 004efa82
    POP EBX                             ; 004efa85
    RET                                 ; 004efa86
    PUSH EDI                            ; 004efa87
        ;   Label: LAB_004efa87
    PUSH ESI                            ; 004efa88
    PUSH EBX                            ; 004efa89
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004efa8a
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 004efa8f
    PUSH 0x0                            ; 004efa92
    LEA EAX,[ESP + 0xc]                 ; 004efa94
    PUSH EAX                            ; 004efa98
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004efa99
    PUSH EBX                            ; 004efa9f
    CALL dword ptr [ESI + 0x14]         ; 004efaa0
    ADD ESP,0x8                         ; 004efaa3
    PUSH EAX                            ; 004efaa6
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004efaa7
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 004efaac
    MOV EDI,EAX                         ; 004efaaf
    TEST EAX,EAX                        ; 004efab1
    JZ 0x004efaca                       ; 004efab3
        ;   XREF to: 004efaca (CONDITIONAL_JUMP)  ; LAB_004efaca
    TEST dword ptr [EBX + 0x202a8],0x7fffffff ; 004efab5
    JNZ 0x004efadc                      ; 004efabf
        ;   XREF to: 004efadc (CONDITIONAL_JUMP)  ; LAB_004efadc
    PUSH EBX                            ; 004efac1
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 ; 004efac2
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20()
    ADD ESP,0x4                         ; 004efac7
    PUSH EBX                            ; 004efaca
        ;   Label: LAB_004efaca
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004efacb
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004efad0
    MOV EAX,EDI                         ; 004efad3
    POP ESI                             ; 004efad5
    POP EDI                             ; 004efad6
    ADD ESP,0x18                        ; 004efad7
    POP EBX                             ; 004efada
    RET                                 ; 004efadb
    PUSH 0x0                            ; 004efadc
        ;   Label: LAB_004efadc
    LEA EAX,[EBX + 0x150]               ; 004efade
    PUSH EAX                            ; 004efae4
    PUSH 0x0                            ; 004efae5
    LEA ESI,[EBX + 0x1f67c]             ; 004efae7
    PUSH ESI                            ; 004efaed
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 004efaee
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340()
    ADD ESP,0x10                        ; 004efaf3
    MOV EAX,dword ptr [EBX + 0x1f678]   ; 004efaf6
    PUSH 0x0                            ; 004efafc
    ADD EAX,0x150                       ; 004efafe
    PUSH EAX                            ; 004efb03
    PUSH 0x1                            ; 004efb04
    PUSH ESI                            ; 004efb06
    CALL core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 ; 004efb07
        ;   XREF to: 004e0340 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340()
    ADD ESP,0x10                        ; 004efb0c
    PUSH dword ptr [EBX + 0x202a8]      ; 004efb0f
    PUSH ESI                            ; 004efb15
    CALL core_morph.cpp_CMorph_render_FUN_004e0820 ; 004efb16
        ;   XREF to: 004e0820 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_render_FUN_004e0820()
    ADD ESP,0x8                         ; 004efb1b
    PUSH EBX                            ; 004efb1e
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004efb1f
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 004efb24
    MOV EAX,EDI                         ; 004efb27
    POP ESI                             ; 004efb29
    POP EDI                             ; 004efb2a
    ADD ESP,0x18                        ; 004efb2b
    POP EBX                             ; 004efb2e
    RET                                 ; 004efb2f

