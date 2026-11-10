; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHighPriestOfGardath * core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004f0a90(CHighPriestOfGardath *this_ptr,uint flags)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHighPriestOfGardathTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_path.cpp_CPathMap_dtor_FUN_00533060
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0a90
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004f0a90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f0a91
    TEST byte ptr [ESP + 0xc],0x4       ; 004f0a95
    JNZ 0x004f0afd                      ; 004f0a9a
        ;   XREF to: 004f0afd (CONDITIONAL_JUMP)  ; LAB_004f0afd
    PUSH 0x0                            ; 004f0a9c
    ADD EBX,0xc1d0                      ; 004f0a9e
    PUSH EBX                            ; 004f0aa4
    CALL core_path.cpp_CPathMap_dtor_FUN_00533060 ; 004f0aa5
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00533060(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f0aaa
    PUSH 0x0                            ; 004f0aad
    SUB EAX,0x8bf4                      ; 004f0aaf
    PUSH EAX                            ; 004f0ab4
    CALL core_armour.cpp_FUN_0040ee30   ; 004f0ab5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004f0aba
    PUSH 0x0                            ; 004f0abd
    SUB EAX,0x93c                       ; 004f0abf
    PUSH EAX                            ; 004f0ac4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004f0ac5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f0aca
    PUSH 0x0                            ; 004f0acd
    SUB EAX,0x2b48                      ; 004f0acf
    PUSH EAX                            ; 004f0ad4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004f0ad5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f0ada
    PUSH 0x1                            ; 004f0add
    LEA EBX,[EAX + 0xfffffea8]          ; 004f0adf
    PUSH EBX                            ; 004f0ae5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004f0ae6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f0aeb
    MOV DL,byte ptr [ESP + 0xc]         ; 004f0aee
    MOV EBX,EAX                         ; 004f0af2
    TEST DL,0x2                         ; 004f0af4
    JNZ 0x004f0b18                      ; 004f0af7
        ;   XREF to: 004f0b18 (CONDITIONAL_JUMP)  ; LAB_004f0b18
    MOV EAX,EBX                         ; 004f0af9
    POP EBX                             ; 004f0afb
    RET                                 ; 004f0afc
    PUSH 0x6025f0                       ; 004f0afd | g_CHighPriestOfGardathTypeInfo
        ;   Label: LAB_004f0afd
    PUSH EBX                            ; 004f0b02
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004f0b03
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004f0b08
    PUSH EAX                            ; 004f0b0b
    CALL crt_unknown.c_FUN_005c0336     ; 004f0b0c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004f0b11
    MOV EAX,EBX                         ; 004f0b14
    POP EBX                             ; 004f0b16
    RET                                 ; 004f0b17
    PUSH EAX                            ; 004f0b18
        ;   Label: LAB_004f0b18
    CALL crt_unknown.c_FUN_005c0344     ; 004f0b19
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004f0b1e
    MOV EAX,EBX                         ; 004f0b21
    POP EBX                             ; 004f0b23
    RET                                 ; 004f0b24

