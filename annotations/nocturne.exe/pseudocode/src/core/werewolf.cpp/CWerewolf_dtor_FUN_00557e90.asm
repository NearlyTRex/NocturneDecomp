; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_werewolf_cpp_CWerewolf_dtor_FUN_00557e90(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CWerewolfTypeInfo_005a4460
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor_FUN_0040fe30
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557e90
        ;   Label: core_werewolf.cpp_CWerewolf_dtor_FUN_00557e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00557e91
    TEST byte ptr [ESP + 0xc],0x4       ; 00557e95
    JNZ 0x00557f21                      ; 00557e9a
        ;   XREF to: 00557f21 (CONDITIONAL_JUMP)  ; LAB_00557f21
    PUSH 0x0                            ; 00557ea0
    ADD EBX,0x33c4                      ; 00557ea2
    PUSH EBX                            ; 00557ea8
    CALL core_armour.cpp_CFlame_arrdtor_FUN_0040fe50 ; 00557ea9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor_FUN_0040fe50(CFlame * objs, uint flags)
    ADD ESP,0x8                         ; 00557eae
    PUSH 0x0                            ; 00557eb1
    SUB EAX,0x4b0                       ; 00557eb3
    PUSH EAX                            ; 00557eb8
    CALL core_armour.cpp_SFire_arrdtor_FUN_0040fe30 ; 00557eb9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor_FUN_0040fe30(SFire * objs, uint flags)
    ADD ESP,0x8                         ; 00557ebe
    PUSH 0x0                            ; 00557ec1
    SUB EAX,0x20c                       ; 00557ec3
    PUSH EAX                            ; 00557ec8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00557ec9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00557ece
    PUSH 0x0                            ; 00557ed1
    SUB EAX,0xb4                        ; 00557ed3
    PUSH EAX                            ; 00557ed8
    CALL core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10 ; 00557ed9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor_FUN_0040fe10(CVector3f * objs, uint flags)
    ADD ESP,0x8                         ; 00557ede
    PUSH 0x0                            ; 00557ee1
    SUB EAX,0x1c8                       ; 00557ee3
    PUSH EAX                            ; 00557ee8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00557ee9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00557eee
    PUSH 0x0                            ; 00557ef1
    SUB EAX,0x293c                      ; 00557ef3
    PUSH EAX                            ; 00557ef8
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00557ef9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00557efe
    PUSH 0x1                            ; 00557f01
    LEA EBX,[EAX + 0xfffffeb0]          ; 00557f03
    PUSH EBX                            ; 00557f09
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00557f0a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00557f0f
    MOV DL,byte ptr [ESP + 0xc]         ; 00557f12
    MOV EBX,EAX                         ; 00557f16
    TEST DL,0x2                         ; 00557f18
    JNZ 0x00557f3c                      ; 00557f1b
        ;   XREF to: 00557f3c (CONDITIONAL_JUMP)  ; LAB_00557f3c
    MOV EAX,EBX                         ; 00557f1d
    POP EBX                             ; 00557f1f
    RET                                 ; 00557f20
    PUSH 0x5a4460                       ; 00557f21 | g_CWerewolfTypeInfo_005a4460
        ;   Label: LAB_00557f21
    PUSH EBX                            ; 00557f26
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00557f27
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00557f2c
    PUSH EAX                            ; 00557f2f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00557f30
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00557f35
    MOV EAX,EBX                         ; 00557f38
    POP EBX                             ; 00557f3a
    RET                                 ; 00557f3b
    PUSH EAX                            ; 00557f3c
        ;   Label: LAB_00557f3c
    CALL crt_unknown.c_FUN_00564494     ; 00557f3d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00557f42
    MOV EAX,EBX                         ; 00557f45
    POP EBX                             ; 00557f47
    RET                                 ; 00557f48

