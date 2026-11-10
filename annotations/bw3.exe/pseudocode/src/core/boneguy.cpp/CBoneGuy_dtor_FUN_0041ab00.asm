; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoneGuy * core_boneguy_cpp_CBoneGuy_dtor_FUN_0041ab00(CBoneGuy *this_ptr,uint flags)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoneGuyTypeInfo
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

    PUSH EBX                            ; 0041ab00
        ;   Label: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041ab00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041ab01
    TEST byte ptr [ESP + 0xc],0x4       ; 0041ab05
    JNZ 0x0041ab5d                      ; 0041ab0a
        ;   XREF to: 0041ab5d (CONDITIONAL_JUMP)  ; LAB_0041ab5d
    PUSH 0x0                            ; 0041ab0c
    ADD EBX,0x385c                      ; 0041ab0e
    PUSH EBX                            ; 0041ab14
    CALL unkafter_armour.cpp_FUN_00410370 ; 0041ab15
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0041ab1a
    PUSH 0x0                            ; 0041ab1d
    SUB EAX,0x954                       ; 0041ab1f
    PUSH EAX                            ; 0041ab24
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0041ab25
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041ab2a
    PUSH 0x0                            ; 0041ab2d
    SUB EAX,0x2db0                      ; 0041ab2f
    PUSH EAX                            ; 0041ab34
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0041ab35
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041ab3a
    PUSH 0x1                            ; 0041ab3d
    LEA EBX,[EAX + 0xfffffea8]          ; 0041ab3f
    PUSH EBX                            ; 0041ab45
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0041ab46
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041ab4b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041ab4e
    MOV EBX,EAX                         ; 0041ab52
    TEST DL,0x2                         ; 0041ab54
    JNZ 0x0041ab78                      ; 0041ab57
        ;   XREF to: 0041ab78 (CONDITIONAL_JUMP)  ; LAB_0041ab78
    MOV EAX,EBX                         ; 0041ab59
    POP EBX                             ; 0041ab5b
    RET                                 ; 0041ab5c
    PUSH 0x5dc8d0                       ; 0041ab5d | g_CBoneGuyTypeInfo
        ;   Label: LAB_0041ab5d
    PUSH EBX                            ; 0041ab62
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0041ab63
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0041ab68
    PUSH EAX                            ; 0041ab6b
    CALL crt_unknown.c_FUN_005a30b6     ; 0041ab6c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0041ab71
    MOV EAX,EBX                         ; 0041ab74
    POP EBX                             ; 0041ab76
    RET                                 ; 0041ab77
    PUSH EAX                            ; 0041ab78
        ;   Label: LAB_0041ab78
    CALL crt_unknown.c_FUN_005a30c4     ; 0041ab79
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0041ab7e
    MOV EAX,EBX                         ; 0041ab81
    POP EBX                             ; 0041ab83
    RET                                 ; 0041ab84

