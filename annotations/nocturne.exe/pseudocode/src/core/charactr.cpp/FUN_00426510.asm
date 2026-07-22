; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00426510(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   FUN_0047a000 at 0047a021
;   FUN_004eece0 at 004eed01
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426510
        ;   Label: core_charactr.cpp_FUN_00426510
    SUB ESP,0x18                        ; 00426511
    MOV EBX,dword ptr [ESP + 0x20]      ; 00426514
    CMP dword ptr [EBX + 0x2404],0x0    ; 00426518
    JNZ 0x00426526                      ; 0042651f
        ;   XREF to: 00426526 (CONDITIONAL_JUMP)  ; LAB_00426526
    ADD ESP,0x18                        ; 00426521
    POP EBX                             ; 00426524
    RET                                 ; 00426525
    PUSH EBX                            ; 00426526
        ;   Label: LAB_00426526
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 00426527
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 0042652c
    PUSH 0x0                            ; 0042652f
    LEA EDX,[ESP + 0x4]                 ; 00426531
    PUSH EDX                            ; 00426535
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00426536
    PUSH EBX                            ; 0042653c
    CALL dword ptr [EAX + 0x14]         ; 0042653d
    ADD ESP,0x8                         ; 00426540
    PUSH EAX                            ; 00426543
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00426544
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 00426549
    TEST EAX,EAX                        ; 0042654c
    JZ 0x00426559                       ; 0042654e
        ;   XREF to: 00426559 (CONDITIONAL_JUMP)  ; LAB_00426559
    PUSH EBX                            ; 00426550
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20 ; 00426551
        ;   XREF to: 00425c20 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20()
    ADD ESP,0x4                         ; 00426556
    PUSH EBX                            ; 00426559
        ;   Label: LAB_00426559
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0042655a
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 0042655f
    ADD ESP,0x18                        ; 00426562
    POP EBX                             ; 00426565
    RET                                 ; 00426566

