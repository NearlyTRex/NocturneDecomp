; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_werewolf_cpp_FUN_0057f440(CWerewolf *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7b4f
;   undefined4 DAT_005d7b53
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_charactr.cpp_FUN_0042f510
;   core_werewolf.cpp_FUN_0057ee80
;   core_xform.cpp_FUN_00583b10
;   core_xform.cpp_FUN_00584450
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057f440
        ;   Label: core_werewolf.cpp_FUN_0057f440
    PUSH EBP                            ; 0057f441
    SUB ESP,0x60                        ; 0057f442
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0057f445
    CMP dword ptr [EBX + 0x27bc],0x0    ; 0057f449
    JZ 0x0057f57c                       ; 0057f450
        ;   XREF to: 0057f57c (CONDITIONAL_JUMP)  ; LAB_0057f57c
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 0057f456
    JNZ 0x0057f57c                      ; 0057f45d
        ;   XREF to: 0057f57c (CONDITIONAL_JUMP)  ; LAB_0057f57c
    FLD float ptr [EBX + 0xd098]        ; 0057f463
    FLD1                                ; 0057f469
    FCOMPP                              ; 0057f46b
    FNSTSW AX                           ; 0057f46d
    SAHF                                ; 0057f46f
    JC 0x0057f584                       ; 0057f470
        ;   XREF to: 0057f584 (CONDITIONAL_JUMP)  ; LAB_0057f584
    FLD float ptr [EBX + 0xd098]        ; 0057f476
        ;   Label: LAB_0057f476
    FCOMP double ptr [0x005d7b53]       ; 0057f47c | DAT_005d7b53
    FNSTSW AX                           ; 0057f482
    SAHF                                ; 0057f484
    JA 0x0057f59b                       ; 0057f485
        ;   XREF to: 0057f59b (CONDITIONAL_JUMP)  ; LAB_0057f59b
    CMP dword ptr [EBX + 0x27bc],0x0    ; 0057f48b
    JZ 0x0057f567                       ; 0057f492
        ;   XREF to: 0057f567 (CONDITIONAL_JUMP)  ; LAB_0057f567
    PUSH EDI                            ; 0057f498
    PUSH ESI                            ; 0057f499
    PUSH EBX                            ; 0057f49a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0057f49b
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0xd068]    ; 0057f4a0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0057f4a6
    SUB EAX,EDX                         ; 0057f4ad
    LEA EDI,[ESP + 0xc]                 ; 0057f4af
    SHL EAX,0x4                         ; 0057f4b3
    MOV ECX,0xc                         ; 0057f4b6
    LEA ESI,[EBX + EAX*0x1 + 0xfd8]     ; 0057f4bb
    ADD ESP,0x4                         ; 0057f4c2
    LEA EAX,[ESP + 0x8]                 ; 0057f4c5
    MOVSD.REP ES:EDI,ESI                ; 0057f4c9
    PUSH EAX                            ; 0057f4cb
    LEA ESI,[ESP + 0x54]                ; 0057f4cc
    LEA EDI,[ESP + 0x48]                ; 0057f4d0
    CALL core_xform.cpp_FUN_00583b10    ; 0057f4d4
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583b10()
    LEA ESI,[ESP + 0x54]                ; 0057f4d9
    ADD ESP,0x4                         ; 0057f4dd
    LEA EAX,[ESP + 0x8]                 ; 0057f4e0
    MOVSD ES:EDI,ESI                    ; 0057f4e4
    MOVSD ES:EDI,ESI                    ; 0057f4e5
    MOVSD ES:EDI,ESI                    ; 0057f4e6
    PUSH EAX                            ; 0057f4e7
    LEA ESI,[ESP + 0x60]                ; 0057f4e8
    LEA EDI,[ESP + 0x3c]                ; 0057f4ec
    CALL core_xform.cpp_FUN_00584450    ; 0057f4f0
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    ADD ESP,0x4                         ; 0057f4f5
    LEA EAX,[ESP + 0x38]                ; 0057f4f8
    LEA ESI,[ESP + 0x5c]                ; 0057f4fc
    PUSH EAX                            ; 0057f500
    MOVSD ES:EDI,ESI                    ; 0057f501
    MOVSD ES:EDI,ESI                    ; 0057f502
    MOVSD ES:EDI,ESI                    ; 0057f503
    PUSH 0x2cfd900                      ; 0057f504 | DAT_02cfd900
    MOV EDI,dword ptr [0x005f2afc]      ; 0057f509 | DAT_005f2afc
    PUSH EDI                            ; 0057f50f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0057f510
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0057f515
    PUSH 0x0                            ; 0057f518
    LEA EAX,[ESP + 0x48]                ; 0057f51a
    PUSH EAX                            ; 0057f51e
    MOV EBP,dword ptr [0x005f2afc]      ; 0057f51f | DAT_005f2afc
    PUSH EBP                            ; 0057f525 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0057f526
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0057f52b
    PUSH 0x2d2025c                      ; 0057f52e
    PUSH EBX                            ; 0057f533
    CALL core_werewolf.cpp_FUN_0057ee80 ; 0057f534
        ;   XREF to: 0057ee80 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_FUN_0057ee80(CWerewolf * this_ptr, CVector3f * eye_position)
    ADD ESP,0x8                         ; 0057f539
    PUSH 0x2d20268                      ; 0057f53c
    PUSH EBX                            ; 0057f541
    CALL core_werewolf.cpp_FUN_0057ee80 ; 0057f542
        ;   XREF to: 0057ee80 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_FUN_0057ee80(CWerewolf * this_ptr, CVector3f * eye_position)
    ADD ESP,0x8                         ; 0057f547
    PUSH EBX                            ; 0057f54a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0057f54b
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057f550
    PUSH EBX                            ; 0057f553
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0057f554
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057f559
    PUSH EBX                            ; 0057f55c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0057f55d
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057f562
    POP ESI                             ; 0057f565
    POP EDI                             ; 0057f566
    PUSH EBX                            ; 0057f567
        ;   Label: LAB_0057f567
    CALL core_charactr.cpp_FUN_0042f510 ; 0057f568
        ;   XREF to: 0042f510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f510()
    ADD ESP,0x4                         ; 0057f56d
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0057f570
    ADD ESP,0x60                        ; 0057f576
    POP EBP                             ; 0057f579
    POP EBX                             ; 0057f57a
    RET                                 ; 0057f57b
    XOR EAX,EAX                         ; 0057f57c
        ;   Label: LAB_0057f57c
    ADD ESP,0x60                        ; 0057f57e
    POP EBP                             ; 0057f581
    POP EBX                             ; 0057f582
    RET                                 ; 0057f583
    FLD float ptr [EBX + 0xd098]        ; 0057f584
        ;   Label: LAB_0057f584
    FADD float ptr [0x005d7b4f]         ; 0057f58a | DAT_005d7b4f
    FSTP float ptr [EBX + 0xd098]       ; 0057f590
    JMP 0x0057f476                      ; 0057f596
        ;   XREF to: 0057f476 (UNCONDITIONAL_JUMP)  ; LAB_0057f476
    PUSH EBX                            ; 0057f59b
        ;   Label: LAB_0057f59b
    CALL core_charactr.cpp_FUN_0042f510 ; 0057f59c
        ;   XREF to: 0042f510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042f510()
    ADD ESP,0x4                         ; 0057f5a1
    ADD ESP,0x60                        ; 0057f5a4
    POP EBP                             ; 0057f5a7
    POP EBX                             ; 0057f5a8
    RET                                 ; 0057f5a9

