; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDraculaBride * core_dracbrid_cpp_CDraculaBride_dtor_FUN_0047e180(CDraculaBride *this_ptr,uint flags)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDraculaBrideTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e180
        ;   Label: core_dracbrid.cpp_CDraculaBride_dtor_FUN_0047e180
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047e181
    TEST byte ptr [ESP + 0xc],0x4       ; 0047e185
    JNZ 0x0047e1dd                      ; 0047e18a
        ;   XREF to: 0047e1dd (CONDITIONAL_JUMP)  ; LAB_0047e1dd
    PUSH 0x0                            ; 0047e18c
    ADD EBX,0x35dc                      ; 0047e18e
    PUSH EBX                            ; 0047e194
    CALL core_armour.cpp_FUN_0040ee30   ; 0047e195
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0047e19a
    PUSH 0x0                            ; 0047e19d
    SUB EAX,0x93c                       ; 0047e19f
    PUSH EAX                            ; 0047e1a4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 0047e1a5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e1aa
    PUSH 0x0                            ; 0047e1ad
    SUB EAX,0x2b48                      ; 0047e1af
    PUSH EAX                            ; 0047e1b4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 0047e1b5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e1ba
    PUSH 0x1                            ; 0047e1bd
    LEA EBX,[EAX + 0xfffffea8]          ; 0047e1bf
    PUSH EBX                            ; 0047e1c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0047e1c6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047e1cb
    MOV DL,byte ptr [ESP + 0xc]         ; 0047e1ce
    MOV EBX,EAX                         ; 0047e1d2
    TEST DL,0x2                         ; 0047e1d4
    JNZ 0x0047e1f8                      ; 0047e1d7
        ;   XREF to: 0047e1f8 (CONDITIONAL_JUMP)  ; LAB_0047e1f8
    MOV EAX,EBX                         ; 0047e1d9
    POP EBX                             ; 0047e1db
    RET                                 ; 0047e1dc
    PUSH 0x5ff320                       ; 0047e1dd | g_CDraculaBrideTypeInfo
        ;   Label: LAB_0047e1dd
    PUSH EBX                            ; 0047e1e2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0047e1e3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0047e1e8
    PUSH EAX                            ; 0047e1eb
    CALL crt_unknown.c_FUN_005c0336     ; 0047e1ec
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0047e1f1
    MOV EAX,EBX                         ; 0047e1f4
    POP EBX                             ; 0047e1f6
    RET                                 ; 0047e1f7
    PUSH EAX                            ; 0047e1f8
        ;   Label: LAB_0047e1f8
    CALL crt_unknown.c_FUN_005c0344     ; 0047e1f9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0047e1fe
    MOV EAX,EBX                         ; 0047e201
    POP EBX                             ; 0047e203
    RET                                 ; 0047e204

