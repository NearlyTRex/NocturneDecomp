; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeletonForest * core_boneguy_cpp_CSkeletonForest_dtor_FUN_0041aa70(CSkeletonForest *this_ptr,uint flags)
;
; Parameters:
; CSkeletonForest * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CSkeletonForestTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   core_armour.cpp_FUN_00410370
;   core_cloth.cpp_CClothList_dtor_FUN_0043f900
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041aa70
        ;   Label: core_boneguy.cpp_CSkeletonForest_dtor_FUN_0041aa70
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041aa71
    TEST byte ptr [ESP + 0xc],0x4       ; 0041aa75
    JNZ 0x0041aacd                      ; 0041aa7a
        ;   XREF to: 0041aacd (CONDITIONAL_JUMP)  ; LAB_0041aacd
    PUSH 0x0                            ; 0041aa7c
    ADD EBX,0x385c                      ; 0041aa7e
    PUSH EBX                            ; 0041aa84
    CALL core_armour.cpp_FUN_00410370   ; 0041aa85
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0041aa8a
    PUSH 0x0                            ; 0041aa8d
    SUB EAX,0x954                       ; 0041aa8f
    PUSH EAX                            ; 0041aa94
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0041aa95
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041aa9a
    PUSH 0x0                            ; 0041aa9d
    SUB EAX,0x2db0                      ; 0041aa9f
    PUSH EAX                            ; 0041aaa4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0041aaa5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041aaaa
    PUSH 0x1                            ; 0041aaad
    LEA EBX,[EAX + 0xfffffea8]          ; 0041aaaf
    PUSH EBX                            ; 0041aab5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0041aab6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041aabb
    MOV DL,byte ptr [ESP + 0xc]         ; 0041aabe
    MOV EBX,EAX                         ; 0041aac2
    TEST DL,0x2                         ; 0041aac4
    JNZ 0x0041aae8                      ; 0041aac7
        ;   XREF to: 0041aae8 (CONDITIONAL_JUMP)  ; LAB_0041aae8
    MOV EAX,EBX                         ; 0041aac9
    POP EBX                             ; 0041aacb
    RET                                 ; 0041aacc
    PUSH 0x5dc8b0                       ; 0041aacd | g_CSkeletonForestTypeInfo
        ;   Label: LAB_0041aacd
    PUSH EBX                            ; 0041aad2
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0041aad3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041aad8
    PUSH EAX                            ; 0041aadb
    CALL crt_unknown.c_FUN_005a30b6     ; 0041aadc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0041aae1
    MOV EAX,EBX                         ; 0041aae4
    POP EBX                             ; 0041aae6
    RET                                 ; 0041aae7
    PUSH EAX                            ; 0041aae8
        ;   Label: LAB_0041aae8
    CALL crt_unknown.c_FUN_005a30c4     ; 0041aae9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0041aaee
    MOV EAX,EBX                         ; 0041aaf1
    POP EBX                             ; 0041aaf3
    RET                                 ; 0041aaf4

