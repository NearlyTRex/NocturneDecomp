; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042a150(int param_1,undefined4 param_2)
;
;
; XREF[37]:
;   core_armour.cpp_FUN_0040fa20 at 0040fae4
;   core_baron.cpp_FUN_00410490 at 0041073a
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412684
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413a32
;   core_beast.cpp_CBeast_process_FUN_004150d0 at 00415148
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 0041569b
;   core_boneguy.cpp_FUN_00418a00 at 00418fa1
;   core_bride.cpp_FUN_0041fe40 at 00420897
;   core_colonel.cpp_FUN_00439f50 at 0043a1e1
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043bfe5
;   ... and 27 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyGesture_FUN_00429560
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220
;   core_charactr.cpp_FUN_00429e60
;   core_cloth.cpp_CClothList_process_FUN_00438550
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a150
        ;   Label: core_charactr.cpp_FUN_0042a150
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042a151
    PUSH EBX                            ; 0042a155
    CALL core_charactr.cpp_CCharacter_applyGesture_FUN_00429560 ; 0042a156
        ;   XREF to: 00429560 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_applyGesture_FUN_00429560()
    ADD ESP,0x4                         ; 0042a15b
    PUSH EBX                            ; 0042a15e
    CALL core_charactr.cpp_FUN_00429e60 ; 0042a15f
        ;   XREF to: 00429e60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00429e60()
    ADD ESP,0x4                         ; 0042a164
    LEA EAX,[EBX + 0x150]               ; 0042a167
    PUSH EAX                            ; 0042a16d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 0042a16e
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0()
    ADD ESP,0x4                         ; 0042a173
    PUSH EBX                            ; 0042a176
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0 ; 0042a177
        ;   XREF to: 004296c0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_computeBoundingBox_FUN_004296c0()
    ADD ESP,0x4                         ; 0042a17c
    PUSH dword ptr [ESP + 0xc]          ; 0042a17f
    PUSH EBX                            ; 0042a183
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220 ; 0042a184
        ;   XREF to: 00429220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220()
    MOV EDX,dword ptr [EBX + 0x2618]    ; 0042a189
    ADD ESP,0x8                         ; 0042a18f
    TEST EDX,EDX                        ; 0042a192
    JNZ 0x0042a1ad                      ; 0042a194
        ;   XREF to: 0042a1ad (CONDITIONAL_JUMP)  ; LAB_0042a1ad
    PUSH EBX                            ; 0042a196
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0042a197
    CALL dword ptr [EAX + 0x104]        ; 0042a19d
    ADD ESP,0x4                         ; 0042a1a3
    CMP EAX,0x1                         ; 0042a1a6
    JZ 0x0042a1ad                       ; 0042a1a9
        ;   XREF to: 0042a1ad (CONDITIONAL_JUMP)  ; LAB_0042a1ad
    POP EBX                             ; 0042a1ab
    RET                                 ; 0042a1ac
    LEA EAX,[EBX + 0x150]               ; 0042a1ad
        ;   Label: LAB_0042a1ad
    PUSH EAX                            ; 0042a1b3
    PUSH dword ptr [EBX + 0x240c]       ; 0042a1b4
    LEA EAX,[EBX + 0x30]                ; 0042a1ba
    PUSH dword ptr [ESP + 0x14]         ; 0042a1bd
    PUSH EAX                            ; 0042a1c1
    LEA EAX,[EBX + 0x20]                ; 0042a1c2
    PUSH EAX                            ; 0042a1c5
    ADD EBX,0x2a8c                      ; 0042a1c6
    PUSH EBX                            ; 0042a1cc
    CALL core_cloth.cpp_CClothList_process_FUN_00438550 ; 0042a1cd
        ;   XREF to: 00438550 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_process_FUN_00438550()
    ADD ESP,0x18                        ; 0042a1d2
    POP EBX                             ; 0042a1d5
    RET                                 ; 0042a1d6

