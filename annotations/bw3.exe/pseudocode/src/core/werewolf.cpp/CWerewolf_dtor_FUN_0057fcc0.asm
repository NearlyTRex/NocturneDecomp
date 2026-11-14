; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_dtor_FUN_0057fcc0(CWerewolf *this_ptr,uint flags)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWerewolfTypeInfo
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

    PUSH EBX                            ; 0057fcc0
        ;   Label: core_werewolf.cpp_CWerewolf_dtor_FUN_0057fcc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057fcc1
    TEST byte ptr [ESP + 0xc],0x4       ; 0057fcc5
    JNZ 0x0057fd1d                      ; 0057fcca
        ;   XREF to: 0057fd1d (CONDITIONAL_JUMP)  ; LAB_0057fd1d
    PUSH 0x0                            ; 0057fccc
    ADD EBX,0x385c                      ; 0057fcce
    PUSH EBX                            ; 0057fcd4
    CALL core_armour.cpp_FUN_00410370   ; 0057fcd5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0057fcda
    PUSH 0x0                            ; 0057fcdd
    SUB EAX,0x954                       ; 0057fcdf
    PUSH EAX                            ; 0057fce4
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 0057fce5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057fcea
    PUSH 0x0                            ; 0057fced
    SUB EAX,0x2db0                      ; 0057fcef
    PUSH EAX                            ; 0057fcf4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 0057fcf5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057fcfa
    PUSH 0x1                            ; 0057fcfd
    LEA EBX,[EAX + 0xfffffea8]          ; 0057fcff
    PUSH EBX                            ; 0057fd05
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0057fd06
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057fd0b
    MOV DL,byte ptr [ESP + 0xc]         ; 0057fd0e
    MOV EBX,EAX                         ; 0057fd12
    TEST DL,0x2                         ; 0057fd14
    JNZ 0x0057fd38                      ; 0057fd17
        ;   XREF to: 0057fd38 (CONDITIONAL_JUMP)  ; LAB_0057fd38
    MOV EAX,EBX                         ; 0057fd19
    POP EBX                             ; 0057fd1b
    RET                                 ; 0057fd1c
    PUSH 0x5e6510                       ; 0057fd1d | g_CWerewolfTypeInfo
        ;   Label: LAB_0057fd1d
    PUSH EBX                            ; 0057fd22
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0057fd23
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0057fd28
    PUSH EAX                            ; 0057fd2b
    CALL crt_unknown.c_FUN_005a30b6     ; 0057fd2c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0057fd31
    MOV EAX,EBX                         ; 0057fd34
    POP EBX                             ; 0057fd36
    RET                                 ; 0057fd37
    PUSH EAX                            ; 0057fd38
        ;   Label: LAB_0057fd38
    CALL crt_unknown.c_FUN_005a30c4     ; 0057fd39
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0057fd3e
    MOV EAX,EBX                         ; 0057fd41
    POP EBX                             ; 0057fd43
    RET                                 ; 0057fd44

