; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * core_tbplayer_cpp_CDrummer_dtor_FUN_00594cb0(CDrummer *this_ptr,uint flags)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDrummerTypeInfo
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

    PUSH EBX                            ; 00594cb0
        ;   Label: core_tbplayer.cpp_CDrummer_dtor_FUN_00594cb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00594cb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00594cb5
    JNZ 0x00594d1d                      ; 00594cba
        ;   XREF to: 00594d1d (CONDITIONAL_JUMP)  ; LAB_00594d1d
    PUSH 0x0                            ; 00594cbc
    ADD EBX,0xc1d0                      ; 00594cbe
    PUSH EBX                            ; 00594cc4
    CALL core_path.cpp_CPathMap_dtor_FUN_00533060 ; 00594cc5
        ;   XREF to: 00533060 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00533060(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594cca
    PUSH 0x0                            ; 00594ccd
    SUB EAX,0x8bf4                      ; 00594ccf
    PUSH EAX                            ; 00594cd4
    CALL core_armour.cpp_FUN_0040ee30   ; 00594cd5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 00594cda
    PUSH 0x0                            ; 00594cdd
    SUB EAX,0x93c                       ; 00594cdf
    PUSH EAX                            ; 00594ce4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 00594ce5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594cea
    PUSH 0x0                            ; 00594ced
    SUB EAX,0x2b48                      ; 00594cef
    PUSH EAX                            ; 00594cf4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00594cf5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594cfa
    PUSH 0x1                            ; 00594cfd
    LEA EBX,[EAX + 0xfffffea8]          ; 00594cff
    PUSH EBX                            ; 00594d05
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00594d06
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00594d0b
    MOV DL,byte ptr [ESP + 0xc]         ; 00594d0e
    MOV EBX,EAX                         ; 00594d12
    TEST DL,0x2                         ; 00594d14
    JNZ 0x00594d38                      ; 00594d17
        ;   XREF to: 00594d38 (CONDITIONAL_JUMP)  ; LAB_00594d38
    MOV EAX,EBX                         ; 00594d19
    POP EBX                             ; 00594d1b
    RET                                 ; 00594d1c
    PUSH 0x606860                       ; 00594d1d | g_CDrummerTypeInfo
        ;   Label: LAB_00594d1d
    PUSH EBX                            ; 00594d22
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00594d23
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00594d28
    PUSH EAX                            ; 00594d2b
    CALL crt_unknown.c_FUN_005c0336     ; 00594d2c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00594d31
    MOV EAX,EBX                         ; 00594d34
    POP EBX                             ; 00594d36
    RET                                 ; 00594d37
    PUSH EAX                            ; 00594d38
        ;   Label: LAB_00594d38
    CALL crt_unknown.c_FUN_005c0344     ; 00594d39
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00594d3e
    MOV EAX,EBX                         ; 00594d41
    POP EBX                             ; 00594d43
    RET                                 ; 00594d44

