; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; XREF[37]:
;   core_armour.cpp_CArmour_process_FUN_00412260 at 00412324
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 0041312a
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415674
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416aa2
;   core_beast.cpp_CBeast_process_FUN_004182a0 at 00418318
;   core_biggs.cpp_CBiggs_process_FUN_00418700 at 004188eb
;   core_boneguy.cpp_FUN_0041bf90 at 0041c531
;   core_bride.cpp_CBride_process_FUN_00423a30 at 00424487
;   core_colonel.cpp_CColonel_FUN_0043fa00 at 0043fc91
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 00444545
;   ... and 27 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0
;   core_charactr.cpp_CCharacter_FUN_0042d090
;   core_charactr.cpp_CCharacter_FUN_0042d530
;   core_cloth.cpp_FUN_0043c2d0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042dfc0
        ;   Label: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042dfc1
    PUSH EBX                            ; 0042dfc5
    CALL core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0 ; 0042dfc6
        ;   XREF to: 0042d3d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042dfcb
    PUSH EBX                            ; 0042dfce
    CALL core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 ; 0042dfcf
        ;   XREF to: 0042dcd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042dfd4
    LEA EAX,[EBX + 0x158]               ; 0042dfd7
    PUSH EAX                            ; 0042dfdd
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 ; 0042dfde
        ;   XREF to: 0059fb40 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042dfe3
    PUSH EBX                            ; 0042dfe6
    CALL core_charactr.cpp_CCharacter_FUN_0042d530 ; 0042dfe7
        ;   XREF to: 0042d530 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042d530(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042dfec
    PUSH dword ptr [ESP + 0xc]          ; 0042dfef
    PUSH EBX                            ; 0042dff3
    CALL core_charactr.cpp_CCharacter_FUN_0042d090 ; 0042dff4
        ;   XREF to: 0042d090 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)
    MOV EDX,dword ptr [EBX + 0x2620]    ; 0042dff9
    ADD ESP,0x8                         ; 0042dfff
    TEST EDX,EDX                        ; 0042e002
    JNZ 0x0042e01d                      ; 0042e004
        ;   XREF to: 0042e01d (CONDITIONAL_JUMP)  ; LAB_0042e01d
    PUSH EBX                            ; 0042e006
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042e007
    CALL dword ptr [EAX + 0x120]        ; 0042e00d
    ADD ESP,0x4                         ; 0042e013
    CMP EAX,0x1                         ; 0042e016
    JZ 0x0042e01d                       ; 0042e019
        ;   XREF to: 0042e01d (CONDITIONAL_JUMP)  ; LAB_0042e01d
    POP EBX                             ; 0042e01b
    RET                                 ; 0042e01c
    LEA EAX,[EBX + 0x158]               ; 0042e01d
        ;   Label: LAB_0042e01d
    PUSH EAX                            ; 0042e023
    PUSH dword ptr [EBX + 0x2414]       ; 0042e024
    LEA EAX,[EBX + 0x30]                ; 0042e02a
    PUSH dword ptr [ESP + 0x14]         ; 0042e02d
    PUSH EAX                            ; 0042e031
    LEA EAX,[EBX + 0x20]                ; 0042e032
    PUSH EAX                            ; 0042e035
    ADD EBX,0x2a94                      ; 0042e036
    PUSH EBX                            ; 0042e03c
    CALL core_cloth.cpp_FUN_0043c2d0    ; 0042e03d
        ;   XREF to: 0043c2d0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043c2d0()
    ADD ESP,0x18                        ; 0042e042
    POP EBX                             ; 0042e045
    RET                                 ; 0042e046

