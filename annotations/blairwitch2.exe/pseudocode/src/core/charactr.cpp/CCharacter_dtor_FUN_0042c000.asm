; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCharacter * core_charactr_cpp_CCharacter_dtor_FUN_0042c000(CCharacter *this_ptr,uint flags)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCharacterTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_cloth.cpp_FUN_005b1480
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   unkaddr_0059d350.cpp_FUN_0059df70
;   unkafter_armour.cpp_FUN_0040f2b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c000
        ;   Label: core_charactr.cpp_CCharacter_dtor_FUN_0042c000
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042c001
    TEST byte ptr [ESP + 0xc],0x4       ; 0042c005
    JNZ 0x0042c06d                      ; 0042c00a
        ;   XREF to: 0042c06d (CONDITIONAL_JUMP)  ; LAB_0042c06d
    PUSH 0x0                            ; 0042c00c
    ADD EBX,0x3a20                      ; 0042c00e
    PUSH EBX                            ; 0042c014
    CALL unkafter_armour.cpp_FUN_0040f2b0 ; 0042c015
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0042c01a
    PUSH 0x0                            ; 0042c01d
    SUB EAX,0x9c8                       ; 0042c01f
    PUSH EAX                            ; 0042c024
    CALL unkaddr_0059d350.cpp_FUN_0059df70 ; 0042c025
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0042c02a
    PUSH 0x0                            ; 0042c02d
    SUB EAX,0x34c                       ; 0042c02f
    PUSH EAX                            ; 0042c034
    CALL core_cloth.cpp_FUN_005b1480    ; 0042c035
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042c03a
    PUSH 0x0                            ; 0042c03d
    SUB EAX,0x2a58                      ; 0042c03f
    PUSH EAX                            ; 0042c044
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 0042c045
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042c04a
    PUSH 0x1                            ; 0042c04d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0042c04f
    PUSH EBX                            ; 0042c055
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0042c056
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042c05b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042c05e
    MOV EBX,EAX                         ; 0042c062
    TEST DL,0x2                         ; 0042c064
    JNZ 0x0042c088                      ; 0042c067
        ;   XREF to: 0042c088 (CONDITIONAL_JUMP)  ; LAB_0042c088
    MOV EAX,EBX                         ; 0042c069
    POP EBX                             ; 0042c06b
    RET                                 ; 0042c06c
    PUSH 0x5f4200                       ; 0042c06d | g_CCharacterTypeInfo
        ;   Label: LAB_0042c06d
    PUSH EBX                            ; 0042c072
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0042c073
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0042c078
    PUSH EAX                            ; 0042c07b
    CALL crt_unknown.c_FUN_005b7fce     ; 0042c07c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0042c081
    MOV EAX,EBX                         ; 0042c084
    POP EBX                             ; 0042c086
    RET                                 ; 0042c087
    PUSH EAX                            ; 0042c088
        ;   Label: LAB_0042c088
    CALL crt_unknown.c_FUN_005b7fdc     ; 0042c089
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0042c08e
    MOV EAX,EBX                         ; 0042c091
    POP EBX                             ; 0042c093
    RET                                 ; 0042c094

