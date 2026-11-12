; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * core_tbplayer_cpp_CDrummer_dtor_FUN_00572060(CDrummer *this_ptr,uint flags)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDrummerTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_path.cpp_CPathMap_dtor_FUN_00511d10
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572060
        ;   Label: core_tbplayer.cpp_CDrummer_dtor_FUN_00572060
    MOV EBX,dword ptr [ESP + 0x8]       ; 00572061
    TEST byte ptr [ESP + 0xc],0x4       ; 00572065
    JNZ 0x005720dd                      ; 0057206a
        ;   XREF to: 005720dd (CONDITIONAL_JUMP)  ; LAB_005720dd
    PUSH 0x0                            ; 0057206c
    ADD EBX,0x10a60                     ; 0057206e
    PUSH EBX                            ; 00572074
    CALL core_path.cpp_CPathMap_dtor_FUN_00511d10 ; 00572075
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00511d10(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057207a
    PUSH 0x0                            ; 0057207d
    SUB EAX,0xd040                      ; 0057207f
    PUSH EAX                            ; 00572084
    CALL core_armour.cpp_FUN_0040f2b0   ; 00572085
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0057208a
    PUSH 0x0                            ; 0057208d
    SUB EAX,0x9c8                       ; 0057208f
    PUSH EAX                            ; 00572094
    CALL core_muzzle.cpp_FUN_0059df70   ; 00572095
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0057209a
    PUSH 0x0                            ; 0057209d
    SUB EAX,0x34c                       ; 0057209f
    PUSH EAX                            ; 005720a4
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 005720a5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005720aa
    PUSH 0x0                            ; 005720ad
    SUB EAX,0x2a58                      ; 005720af
    PUSH EAX                            ; 005720b4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 005720b5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005720ba
    PUSH 0x1                            ; 005720bd
    LEA EBX,[EAX + 0xfffffd4c]          ; 005720bf
    PUSH EBX                            ; 005720c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 005720c6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005720cb
    MOV DL,byte ptr [ESP + 0xc]         ; 005720ce
    MOV EBX,EAX                         ; 005720d2
    TEST DL,0x2                         ; 005720d4
    JNZ 0x005720f8                      ; 005720d7
        ;   XREF to: 005720f8 (CONDITIONAL_JUMP)  ; LAB_005720f8
    MOV EAX,EBX                         ; 005720d9
    POP EBX                             ; 005720db
    RET                                 ; 005720dc
    PUSH 0x5fc9e0                       ; 005720dd | g_CDrummerTypeInfo
        ;   Label: LAB_005720dd
    PUSH EBX                            ; 005720e2
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005720e3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005720e8
    PUSH EAX                            ; 005720eb
    CALL crt_unknown.c_FUN_005b7fce     ; 005720ec
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005720f1
    MOV EAX,EBX                         ; 005720f4
    POP EBX                             ; 005720f6
    RET                                 ; 005720f7
    PUSH EAX                            ; 005720f8
        ;   Label: LAB_005720f8
    CALL crt_unknown.c_FUN_005b7fdc     ; 005720f9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005720fe
    MOV EAX,EBX                         ; 00572101
    POP EBX                             ; 00572103
    RET                                 ; 00572104

