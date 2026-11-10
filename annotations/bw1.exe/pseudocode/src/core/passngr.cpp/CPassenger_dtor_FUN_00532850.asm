; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * core_passngr_cpp_CPassenger_dtor_FUN_00532850(CPassenger *this_ptr,uint flags)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   CCharacter_full_vtable g_CPassengerVTable
;   WatcomTypeInfo g_CPassengerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_morph.cpp_CMorph_dtor_FUN_00522fc0
;   core_path.cpp_CPathMap_dtor_FUN_00533060
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532850
        ;   Label: core_passngr.cpp_CPassenger_dtor_FUN_00532850
    MOV EBX,dword ptr [ESP + 0x8]       ; 00532851
    TEST byte ptr [ESP + 0xc],0x4       ; 00532855
    JNZ 0x005328fb                      ; 0053285a
        ;   XREF to: 005328fb (CONDITIONAL_JUMP)  ; LAB_005328fb
    MOV EDX,dword ptr [EBX + 0x1fbc0]   ; 00532860
    MOV dword ptr [EBX + 0x154],0x604614 ; 00532866 | g_CPassengerVTable
    TEST EDX,EDX                        ; 00532870
    JZ 0x0053288a                       ; 00532872
        ;   XREF to: 0053288a (CONDITIONAL_JUMP)  ; LAB_0053288a
    MOV EAX,EDX                         ; 00532874
    JZ 0x0053288a                       ; 00532876
        ;   XREF to: 0053288a (CONDITIONAL_JUMP)  ; LAB_0053288a
    PUSH 0x2                            ; 00532878
    MOV EDX,dword ptr [EDX + 0x154]     ; 0053287a
    PUSH EAX                            ; 00532880
    CALL dword ptr [EDX + 0xd0]         ; 00532881
    ADD ESP,0x8                         ; 00532887
    PUSH 0x0                            ; 0053288a
        ;   Label: LAB_0053288a
    ADD EBX,0x1fbc4                     ; 0053288c
    PUSH EBX                            ; 00532892
    CALL core_morph.cpp_CMorph_dtor_FUN_00522fc0 ; 00532893
        ;   XREF to: 00522fc0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_dtor_FUN_00522fc0(CMorph * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00532898
    PUSH 0x0                            ; 0053289b
    SUB EAX,0x139f4                     ; 0053289d
    PUSH EAX                            ; 005328a2
    CALL core_path.cpp_CPathMap_dtor_FUN_00533060 ; 005328a3
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00533060(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005328a8
    PUSH 0x0                            ; 005328ab
    SUB EAX,0x8bf4                      ; 005328ad
    PUSH EAX                            ; 005328b2
    CALL core_armour.cpp_FUN_0040ee30   ; 005328b3
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 005328b8
    PUSH 0x0                            ; 005328bb
    SUB EAX,0x93c                       ; 005328bd
    PUSH EAX                            ; 005328c2
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 005328c3
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005328c8
    PUSH 0x0                            ; 005328cb
    SUB EAX,0x2b48                      ; 005328cd
    PUSH EAX                            ; 005328d2
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 005328d3
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005328d8
    PUSH 0x1                            ; 005328db
    LEA EBX,[EAX + 0xfffffea8]          ; 005328dd
    PUSH EBX                            ; 005328e3
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 005328e4
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005328e9
    MOV DL,byte ptr [ESP + 0xc]         ; 005328ec
    MOV EBX,EAX                         ; 005328f0
    TEST DL,0x2                         ; 005328f2
    JNZ 0x00532916                      ; 005328f5
        ;   XREF to: 00532916 (CONDITIONAL_JUMP)  ; LAB_00532916
    MOV EAX,EBX                         ; 005328f7
    POP EBX                             ; 005328f9
    RET                                 ; 005328fa
    PUSH 0x604760                       ; 005328fb | g_CPassengerTypeInfo
        ;   Label: LAB_005328fb
    PUSH EBX                            ; 00532900
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00532901
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00532906
    PUSH EAX                            ; 00532909
    CALL crt_unknown.c_FUN_005c0336     ; 0053290a
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0053290f
    MOV EAX,EBX                         ; 00532912
    POP EBX                             ; 00532914
    RET                                 ; 00532915
    PUSH EAX                            ; 00532916
        ;   Label: LAB_00532916
    CALL crt_unknown.c_FUN_005c0344     ; 00532917
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0053291c
    MOV EAX,EBX                         ; 0053291f
    POP EBX                             ; 00532921
    RET                                 ; 00532922

