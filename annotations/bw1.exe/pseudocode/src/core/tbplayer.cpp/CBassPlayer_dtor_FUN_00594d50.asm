; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBassPlayer * core_tbplayer_cpp_CBassPlayer_dtor_FUN_00594d50(CBassPlayer *this_ptr,uint flags)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBassPlayerTypeInfo
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

    PUSH EBX                            ; 00594d50
        ;   Label: core_tbplayer.cpp_CBassPlayer_dtor_FUN_00594d50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00594d51
    TEST byte ptr [ESP + 0xc],0x4       ; 00594d55
    JNZ 0x00594dbd                      ; 00594d5a
        ;   XREF to: 00594dbd (CONDITIONAL_JUMP)  ; LAB_00594dbd
    PUSH 0x0                            ; 00594d5c
    ADD EBX,0xc1d0                      ; 00594d5e
    PUSH EBX                            ; 00594d64
    CALL core_path.cpp_CPathMap_dtor_FUN_00533060 ; 00594d65
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00533060(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594d6a
    PUSH 0x0                            ; 00594d6d
    SUB EAX,0x8bf4                      ; 00594d6f
    PUSH EAX                            ; 00594d74
    CALL core_armour.cpp_FUN_0040ee30   ; 00594d75
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 00594d7a
    PUSH 0x0                            ; 00594d7d
    SUB EAX,0x93c                       ; 00594d7f
    PUSH EAX                            ; 00594d84
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 00594d85
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594d8a
    PUSH 0x0                            ; 00594d8d
    SUB EAX,0x2b48                      ; 00594d8f
    PUSH EAX                            ; 00594d94
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00594d95
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594d9a
    PUSH 0x1                            ; 00594d9d
    LEA EBX,[EAX + 0xfffffea8]          ; 00594d9f
    PUSH EBX                            ; 00594da5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00594da6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594dab
    MOV DL,byte ptr [ESP + 0xc]         ; 00594dae
    MOV EBX,EAX                         ; 00594db2
    TEST DL,0x2                         ; 00594db4
    JNZ 0x00594dd8                      ; 00594db7
        ;   XREF to: 00594dd8 (CONDITIONAL_JUMP)  ; LAB_00594dd8
    MOV EAX,EBX                         ; 00594db9
    POP EBX                             ; 00594dbb
    RET                                 ; 00594dbc
    PUSH 0x606880                       ; 00594dbd | g_CBassPlayerTypeInfo
        ;   Label: LAB_00594dbd
    PUSH EBX                            ; 00594dc2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00594dc3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00594dc8
    PUSH EAX                            ; 00594dcb
    CALL crt_unknown.c_FUN_005c0336     ; 00594dcc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00594dd1
    MOV EAX,EBX                         ; 00594dd4
    POP EBX                             ; 00594dd6
    RET                                 ; 00594dd7
    PUSH EAX                            ; 00594dd8
        ;   Label: LAB_00594dd8
    CALL crt_unknown.c_FUN_005c0344     ; 00594dd9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00594dde
    MOV EAX,EBX                         ; 00594de1
    POP EBX                             ; 00594de3
    RET                                 ; 00594de4

