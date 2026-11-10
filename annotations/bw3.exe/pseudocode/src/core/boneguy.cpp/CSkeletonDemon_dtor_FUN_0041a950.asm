; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeletonDemon * core_boneguy_cpp_CSkeletonDemon_dtor_FUN_0041a950(CSkeletonDemon *this_ptr,uint flags)
;
; Parameters:
; CSkeletonDemon * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSkeletonDemonTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   unkafter_armour.cpp_FUN_00410370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a950
        ;   Label: core_boneguy.cpp_CSkeletonDemon_dtor_FUN_0041a950
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041a951
    TEST byte ptr [ESP + 0xc],0x4       ; 0041a955
    JNZ 0x0041a9ad                      ; 0041a95a
        ;   XREF to: 0041a9ad (CONDITIONAL_JUMP)  ; LAB_0041a9ad
    PUSH 0x0                            ; 0041a95c
    ADD EBX,0x385c                      ; 0041a95e
    PUSH EBX                            ; 0041a964
    CALL unkafter_armour.cpp_FUN_00410370 ; 0041a965
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0041a96a
    PUSH 0x0                            ; 0041a96d
    SUB EAX,0x954                       ; 0041a96f
    PUSH EAX                            ; 0041a974
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0041a975
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a97a
    PUSH 0x0                            ; 0041a97d
    SUB EAX,0x2db0                      ; 0041a97f
    PUSH EAX                            ; 0041a984
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0041a985
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a98a
    PUSH 0x1                            ; 0041a98d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041a98f
    PUSH EBX                            ; 0041a995
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0041a996
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a99b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041a99e
    MOV EBX,EAX                         ; 0041a9a2
    TEST DL,0x2                         ; 0041a9a4
    JNZ 0x0041a9c8                      ; 0041a9a7
        ;   XREF to: 0041a9c8 (CONDITIONAL_JUMP)  ; LAB_0041a9c8
    MOV EAX,EBX                         ; 0041a9a9
    POP EBX                             ; 0041a9ab
    RET                                 ; 0041a9ac
    PUSH 0x5dc870                       ; 0041a9ad | g_CSkeletonDemonTypeInfo
        ;   Label: LAB_0041a9ad
    PUSH EBX                            ; 0041a9b2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0041a9b3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0041a9b8
    PUSH EAX                            ; 0041a9bb
    CALL crt_unknown.c_FUN_005a30b6     ; 0041a9bc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0041a9c1
    MOV EAX,EBX                         ; 0041a9c4
    POP EBX                             ; 0041a9c6
    RET                                 ; 0041a9c7
    PUSH EAX                            ; 0041a9c8
        ;   Label: LAB_0041a9c8
    CALL crt_unknown.c_FUN_005a30c4     ; 0041a9c9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0041a9ce
    MOV EAX,EBX                         ; 0041a9d1
    POP EBX                             ; 0041a9d3
    RET                                 ; 0041a9d4

