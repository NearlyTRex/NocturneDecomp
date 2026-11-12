; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHighPriestOfGardath * core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004d4880(CHighPriestOfGardath *this_ptr,uint flags)
;
; Parameters:
; CHighPriestOfGardath * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CHighPriestOfGardathTypeInfo
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

    PUSH EBX                            ; 004d4880
        ;   Label: core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004d4880
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4881
    TEST byte ptr [ESP + 0xc],0x4       ; 004d4885
    JNZ 0x004d48fd                      ; 004d488a
        ;   XREF to: 004d48fd (CONDITIONAL_JUMP)  ; LAB_004d48fd
    PUSH 0x0                            ; 004d488c
    ADD EBX,0x10a60                     ; 004d488e
    PUSH EBX                            ; 004d4894
    CALL core_path.cpp_CPathMap_dtor_FUN_00511d10 ; 004d4895
        ;   XREF to: 00511d10 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_dtor_FUN_00511d10(CPathMap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d489a
    PUSH 0x0                            ; 004d489d
    SUB EAX,0xd040                      ; 004d489f
    PUSH EAX                            ; 004d48a4
    CALL core_armour.cpp_FUN_0040f2b0   ; 004d48a5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 004d48aa
    PUSH 0x0                            ; 004d48ad
    SUB EAX,0x9c8                       ; 004d48af
    PUSH EAX                            ; 004d48b4
    CALL core_muzzle.cpp_FUN_0059df70   ; 004d48b5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 004d48ba
    PUSH 0x0                            ; 004d48bd
    SUB EAX,0x34c                       ; 004d48bf
    PUSH EAX                            ; 004d48c4
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 004d48c5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d48ca
    PUSH 0x0                            ; 004d48cd
    SUB EAX,0x2a58                      ; 004d48cf
    PUSH EAX                            ; 004d48d4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 004d48d5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d48da
    PUSH 0x1                            ; 004d48dd
    LEA EBX,[EAX + 0xfffffd4c]          ; 004d48df
    PUSH EBX                            ; 004d48e5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004d48e6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d48eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004d48ee
    MOV EBX,EAX                         ; 004d48f2
    TEST DL,0x2                         ; 004d48f4
    JNZ 0x004d4918                      ; 004d48f7
        ;   XREF to: 004d4918 (CONDITIONAL_JUMP)  ; LAB_004d4918
    MOV EAX,EBX                         ; 004d48f9
    POP EBX                             ; 004d48fb
    RET                                 ; 004d48fc
    PUSH 0x5f8b60                       ; 004d48fd | g_CHighPriestOfGardathTypeInfo
        ;   Label: LAB_004d48fd
    PUSH EBX                            ; 004d4902
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004d4903
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d4908
    PUSH EAX                            ; 004d490b
    CALL crt_unknown.c_FUN_005b7fce     ; 004d490c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004d4911
    MOV EAX,EBX                         ; 004d4914
    POP EBX                             ; 004d4916
    RET                                 ; 004d4917
    PUSH EAX                            ; 004d4918
        ;   Label: LAB_004d4918
    CALL crt_unknown.c_FUN_005b7fdc     ; 004d4919
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d491e
    MOV EAX,EBX                         ; 004d4921
    POP EBX                             ; 004d4923
    RET                                 ; 004d4924

