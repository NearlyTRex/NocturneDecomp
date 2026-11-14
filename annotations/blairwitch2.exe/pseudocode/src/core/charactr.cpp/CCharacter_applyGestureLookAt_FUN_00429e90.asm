; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[41]:
;   core_armour.cpp_CArmour_process_FUN_0040ef00 at 0040efc5
;   core_baron.cpp_CBaron_process_FUN_0040f950 at 0040fb4a
;   core_basicene.cpp_FUN_0059f0e0 at 0059f35f
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411c61
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 004131b2
;   core_beast.cpp_CBeast_process_FUN_00414a80 at 00414af8
;   core_biggs.cpp_CBiggs_process_FUN_00414e50 at 00415050
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418cea
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041e724
;   core_colonel.cpp_CColonel_process_FUN_00435830 at 00435b56
;   ... and 31 more
;
; Called Functions:
;   core_charactr.cpp_CCharacter_applyGesture_FUN_004291f0
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00429b40
;   core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00429390
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30
;   core_cloth.cpp_CClothList_process_FUN_005b1780
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429e90
        ;   Label: core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00429e91
    PUSH EBX                            ; 00429e95
    CALL core_charactr.cpp_CCharacter_applyGesture_FUN_004291f0 ; 00429e96
        ;   XREF to: 004291f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGesture_FUN_004291f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00429e9b
    PUSH EBX                            ; 00429e9e
    CALL core_charactr.cpp_CCharacter_applyLookAt_FUN_00429b40 ; 00429e9f
        ;   XREF to: 00429b40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyLookAt_FUN_00429b40(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00429ea4
    LEA EAX,[EBX + 0x2b4]               ; 00429ea7
    PUSH EAX                            ; 00429ead
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0 ; 00429eae
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00429eb3
    PUSH EBX                            ; 00429eb6
    CALL core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00429390 ; 00429eb7
        ;   XREF to: 00429390 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computeBoundingBox_FUN_00429390(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00429ebc
    PUSH dword ptr [ESP + 0xc]          ; 00429ebf
    PUSH EBX                            ; 00429ec3
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30 ; 00429ec4
        ;   XREF to: 00428e30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x2828]    ; 00429ec9
    ADD ESP,0x8                         ; 00429ecf
    TEST EDX,EDX                        ; 00429ed2
    JNZ 0x00429eed                      ; 00429ed4
        ;   XREF to: 00429eed (CONDITIONAL_JUMP)  ; LAB_00429eed
    PUSH EBX                            ; 00429ed6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00429ed7
    CALL dword ptr [EAX + 0x114]        ; 00429edd
    ADD ESP,0x4                         ; 00429ee3
    CMP EAX,0x1                         ; 00429ee6
    JZ 0x00429eed                       ; 00429ee9
        ;   XREF to: 00429eed (CONDITIONAL_JUMP)  ; LAB_00429eed
    POP EBX                             ; 00429eeb
    RET                                 ; 00429eec
    LEA EAX,[EBX + 0x2b4]               ; 00429eed
        ;   Label: LAB_00429eed
    PUSH EAX                            ; 00429ef3
    PUSH dword ptr [EBX + 0x2574]       ; 00429ef4
    LEA EAX,[EBX + 0x30]                ; 00429efa
    PUSH dword ptr [ESP + 0x14]         ; 00429efd
    PUSH EAX                            ; 00429f01
    LEA EAX,[EBX + 0x20]                ; 00429f02
    PUSH EAX                            ; 00429f05
    ADD EBX,0x2d0c                      ; 00429f06
    PUSH EBX                            ; 00429f0c
    CALL core_cloth.cpp_CClothList_process_FUN_005b1780 ; 00429f0d
        ;   XREF to: 005b1780 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_process_FUN_005b1780(CClothList * this_ptr, CVector3f * position, CVector3f * euler, float delta_time, ...)
    ADD ESP,0x18                        ; 00429f12
    POP EBX                             ; 00429f15
    RET                                 ; 00429f16

