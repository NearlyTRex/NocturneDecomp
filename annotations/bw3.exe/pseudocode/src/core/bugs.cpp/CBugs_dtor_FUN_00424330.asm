; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBugs * core_bugs_cpp_CBugs_dtor_FUN_00424330(CBugs *this_ptr,uint flags)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBugsTypeInfo
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

    PUSH EBX                            ; 00424330
        ;   Label: core_bugs.cpp_CBugs_dtor_FUN_00424330
    MOV EBX,dword ptr [ESP + 0x8]       ; 00424331
    TEST byte ptr [ESP + 0xc],0x4       ; 00424335
    JNZ 0x0042438d                      ; 0042433a
        ;   XREF to: 0042438d (CONDITIONAL_JUMP)  ; LAB_0042438d
    PUSH 0x0                            ; 0042433c
    ADD EBX,0x385c                      ; 0042433e
    PUSH EBX                            ; 00424344
    CALL core_armour.cpp_FUN_00410370   ; 00424345
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_00410370()
    ADD ESP,0x8                         ; 0042434a
    PUSH 0x0                            ; 0042434d
    SUB EAX,0x954                       ; 0042434f
    PUSH EAX                            ; 00424354
    CALL core_cloth.cpp_CClothList_dtor_FUN_0043f900 ; 00424355
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_0043f900(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042435a
    PUSH 0x0                            ; 0042435d
    SUB EAX,0x2db0                      ; 0042435f
    PUSH EAX                            ; 00424364
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80 ; 00424365
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042436a
    PUSH 0x1                            ; 0042436d
    LEA EBX,[EAX + 0xfffffea8]          ; 0042436f
    PUSH EBX                            ; 00424375
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 00424376
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0042437b
    MOV DL,byte ptr [ESP + 0xc]         ; 0042437e
    MOV EBX,EAX                         ; 00424382
    TEST DL,0x2                         ; 00424384
    JNZ 0x004243a8                      ; 00424387
        ;   XREF to: 004243a8 (CONDITIONAL_JUMP)  ; LAB_004243a8
    MOV EAX,EBX                         ; 00424389
    POP EBX                             ; 0042438b
    RET                                 ; 0042438c
    PUSH 0x5dcd70                       ; 0042438d | g_CBugsTypeInfo
        ;   Label: LAB_0042438d
    PUSH EBX                            ; 00424392
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00424393
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00424398
    PUSH EAX                            ; 0042439b
    CALL crt_unknown.c_FUN_005a30b6     ; 0042439c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004243a1
    MOV EAX,EBX                         ; 004243a4
    POP EBX                             ; 004243a6
    RET                                 ; 004243a7
    PUSH EAX                            ; 004243a8
        ;   Label: LAB_004243a8
    CALL crt_unknown.c_FUN_005a30c4     ; 004243a9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004243ae
    MOV EAX,EBX                         ; 004243b1
    POP EBX                             ; 004243b3
    RET                                 ; 004243b4

