; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[46]:
;   core_armour.cpp_CArmour_process_FUN_0040eaa0 at 0040eb65
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f6ca
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 0041182a
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412e27
;   core_beast.cpp_CBeast_process_FUN_00414770 at 004147e8
;   core_biggs.cpp_CBiggs_process_FUN_00414b30 at 00414d30
;   core_bird.cpp_CBird_process_FUN_00415340 at 004155ce
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c16a
;   core_bride.cpp_CBride_process_FUN_00423b70 at 00424763
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00429884
;   ... and 36 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0
;   core_charactr.cpp_FUN_00432cb0
;   core_cloth.cpp_CClothList_process_FUN_00441fa0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433e80
        ;   Label: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00433e81
    PUSH EBX                            ; 00433e85
    CALL core_charactr.cpp_FUN_00432cb0 ; 00433e86
        ;   XREF to: 00432cb0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432cb0()
    ADD ESP,0x4                         ; 00433e8b
    PUSH EBX                            ; 00433e8e
    CALL core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30 ; 00433e8f
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyLookAt_FUN_00433b30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00433e94
    LEA EAX,[EBX + 0x158]               ; 00433e97
    PUSH EAX                            ; 00433e9d
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180 ; 00433e9e
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00433ea3
    PUSH EBX                            ; 00433ea6
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80 ; 00433ea7
        ;   XREF to: 00432e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00432e80(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00433eac
    PUSH dword ptr [ESP + 0xc]          ; 00433eaf
    PUSH EBX                            ; 00433eb3
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0 ; 00433eb4
        ;   XREF to: 004328f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x27bc]    ; 00433eb9
    ADD ESP,0x8                         ; 00433ebf
    TEST EDX,EDX                        ; 00433ec2
    JNZ 0x00433edd                      ; 00433ec4
        ;   XREF to: 00433edd (CONDITIONAL_JUMP)  ; LAB_00433edd
    PUSH EBX                            ; 00433ec6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00433ec7
    CALL dword ptr [EAX + 0x10c]        ; 00433ecd
    ADD ESP,0x4                         ; 00433ed3
    CMP EAX,0x1                         ; 00433ed6
    JZ 0x00433edd                       ; 00433ed9
        ;   XREF to: 00433edd (CONDITIONAL_JUMP)  ; LAB_00433edd
    POP EBX                             ; 00433edb
    RET                                 ; 00433edc
    LEA EAX,[EBX + 0x158]               ; 00433edd
        ;   Label: LAB_00433edd
    PUSH EAX                            ; 00433ee3
    PUSH dword ptr [EBX + 0x2504]       ; 00433ee4
    LEA EAX,[EBX + 0x30]                ; 00433eea
    PUSH dword ptr [ESP + 0x14]         ; 00433eed
    PUSH EAX                            ; 00433ef1
    LEA EAX,[EBX + 0x20]                ; 00433ef2
    PUSH EAX                            ; 00433ef5
    ADD EBX,0x2ca0                      ; 00433ef6
    PUSH EBX                            ; 00433efc
    CALL core_cloth.cpp_CClothList_process_FUN_00441fa0 ; 00433efd
        ;   XREF to: 00441fa0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_00441fa0(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00433f02
    POP EBX                             ; 00433f05
    RET                                 ; 00433f06

