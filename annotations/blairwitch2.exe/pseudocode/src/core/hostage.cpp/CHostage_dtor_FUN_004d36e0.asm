; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHostage * core_hostage_cpp_CHostage_dtor_FUN_004d36e0(CHostage *this_ptr,uint flags)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHostageTypeInfo
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

    PUSH EBX                            ; 004d36e0
        ;   Label: core_hostage.cpp_CHostage_dtor_FUN_004d36e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d36e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d36e5
    JNZ 0x004d375d                      ; 004d36ea
        ;   XREF to: 004d375d (CONDITIONAL_JUMP)  ; LAB_004d375d
    PUSH 0x0                            ; 004d36ec
    ADD EBX,0x10a60                     ; 004d36ee
    PUSH EBX                            ; 004d36f4
    CALL core_path.cpp_CPathMap_dtor_FUN_00511d10 ; 004d36f5
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00511d10(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d36fa
    PUSH 0x0                            ; 004d36fd
    SUB EAX,0xd040                      ; 004d36ff
    PUSH EAX                            ; 004d3704
    CALL core_armour.cpp_FUN_0040f2b0   ; 004d3705
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 004d370a
    PUSH 0x0                            ; 004d370d
    SUB EAX,0x9c8                       ; 004d370f
    PUSH EAX                            ; 004d3714
    CALL core_muzzle.cpp_FUN_0059df70   ; 004d3715
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 004d371a
    PUSH 0x0                            ; 004d371d
    SUB EAX,0x34c                       ; 004d371f
    PUSH EAX                            ; 004d3724
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 004d3725
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d372a
    PUSH 0x0                            ; 004d372d
    SUB EAX,0x2a58                      ; 004d372f
    PUSH EAX                            ; 004d3734
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 004d3735
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d373a
    PUSH 0x1                            ; 004d373d
    LEA EBX,[EAX + 0xfffffd4c]          ; 004d373f
    PUSH EBX                            ; 004d3745
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004d3746
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d374b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d374e
    MOV EBX,EAX                         ; 004d3752
    TEST DL,0x2                         ; 004d3754
    JNZ 0x004d3778                      ; 004d3757
        ;   XREF to: 004d3778 (CONDITIONAL_JUMP)  ; LAB_004d3778
    MOV EAX,EBX                         ; 004d3759
    POP EBX                             ; 004d375b
    RET                                 ; 004d375c
    PUSH 0x5f8820                       ; 004d375d | g_CHostageTypeInfo
        ;   Label: LAB_004d375d
    PUSH EBX                            ; 004d3762
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004d3763
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d3768
    PUSH EAX                            ; 004d376b
    CALL crt_unknown.c_FUN_005b7fce     ; 004d376c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004d3771
    MOV EAX,EBX                         ; 004d3774
    POP EBX                             ; 004d3776
    RET                                 ; 004d3777
    PUSH EAX                            ; 004d3778
        ;   Label: LAB_004d3778
    CALL crt_unknown.c_FUN_005b7fdc     ; 004d3779
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d377e
    MOV EAX,EBX                         ; 004d3781
    POP EBX                             ; 004d3783
    RET                                 ; 004d3784

