; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * __cdecl core_bugs_cpp_CBugs_dtor_FUN_00423d90(CBugs *this_ptr,uint flags)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBugsTypeInfo_0059b050
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50
;   core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10
;   core_armour.cpp_SFire_arrdtor50_FUN_0040fe30
;   core_bugs.cpp_SBug_arrdtor400_FUN_00423e80
;   core_cloth.cpp_CClothList_dtor_FUN_00438250
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_memory.c_operator_delete_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423d90
        ;   Label: core_bugs.cpp_CBugs_dtor_FUN_00423d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00423d91
    TEST byte ptr [ESP + 0xc],0x4       ; 00423d95
    JNZ 0x00423e31                      ; 00423d9a
        ;   XREF to: 00423e31 (CONDITIONAL_JUMP)  ; LAB_00423e31
    PUSH 0x0                            ; 00423da0
    ADD EBX,0xbd2c                      ; 00423da2
    PUSH EBX                            ; 00423da8
    CALL core_bugs.cpp_SBug_arrdtor400_FUN_00423e80 ; 00423da9
        ;   XREF to: 00423e80 (UNCONDITIONAL_CALL)  ; SBug * core_bugs.cpp_SBug_arrdtor400_FUN_00423e80(SBug * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00423dae
    PUSH 0x0                            ; 00423db1
    SUB EAX,0x8968                      ; 00423db3
    PUSH EAX                            ; 00423db8
    CALL core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50 ; 00423db9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; CFlame * core_armour.cpp_CFlame_arrdtor50_FUN_0040fe50(CFlame * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00423dbe
    PUSH 0x0                            ; 00423dc1
    SUB EAX,0x4b0                       ; 00423dc3
    PUSH EAX                            ; 00423dc8
    CALL core_armour.cpp_SFire_arrdtor50_FUN_0040fe30 ; 00423dc9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; SFire * core_armour.cpp_SFire_arrdtor50_FUN_0040fe30(SFire * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00423dce
    PUSH 0x0                            ; 00423dd1
    SUB EAX,0x20c                       ; 00423dd3
    PUSH EAX                            ; 00423dd8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00423dd9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00423dde
    PUSH 0x0                            ; 00423de1
    SUB EAX,0xb4                        ; 00423de3
    PUSH EAX                            ; 00423de8
    CALL core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10 ; 00423de9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; CVector3f * core_armour.cpp_CVector3f_arrdtor15_FUN_0040fe10(CVector3f * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00423dee
    PUSH 0x0                            ; 00423df1
    SUB EAX,0x1c8                       ; 00423df3
    PUSH EAX                            ; 00423df8
    CALL core_cloth.cpp_CClothList_dtor_FUN_00438250 ; 00423df9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00438250(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00423dfe
    PUSH 0x0                            ; 00423e01
    SUB EAX,0x293c                      ; 00423e03
    PUSH EAX                            ; 00423e08
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0 ; 00423e09
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0051b6e0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00423e0e
    PUSH 0x1                            ; 00423e11
    LEA EBX,[EAX + 0xfffffeb0]          ; 00423e13
    PUSH EBX                            ; 00423e19
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00423e1a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00423e1f
    MOV DL,byte ptr [ESP + 0xc]         ; 00423e22
    MOV EBX,EAX                         ; 00423e26
    TEST DL,0x2                         ; 00423e28
    JNZ 0x00423e4c                      ; 00423e2b
        ;   XREF to: 00423e4c (CONDITIONAL_JUMP)  ; LAB_00423e4c
    MOV EAX,EBX                         ; 00423e2d
    POP EBX                             ; 00423e2f
    RET                                 ; 00423e30
    PUSH 0x59b050                       ; 00423e31 | g_CBugsTypeInfo_0059b050
        ;   Label: LAB_00423e31
    PUSH EBX                            ; 00423e36
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00423e37
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00423e3c
    PUSH EAX                            ; 00423e3f
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00423e40
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00423e45
    MOV EAX,EBX                         ; 00423e48
    POP EBX                             ; 00423e4a
    RET                                 ; 00423e4b
    PUSH EAX                            ; 00423e4c
        ;   Label: LAB_00423e4c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 00423e4d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 00423e52
    MOV EAX,EBX                         ; 00423e55
    POP EBX                             ; 00423e57
    RET                                 ; 00423e58

