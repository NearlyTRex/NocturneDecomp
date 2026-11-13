; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * __cdecl core_tentacle_cpp_CTentacle_dtor_FUN_005733d0(CTentacle *this_ptr,uint flags)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTentacleTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_armour.cpp_FUN_0040f2b0
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480
;   core_muzzle.cpp_FUN_0059df70
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005733d0
        ;   Label: core_tentacle.cpp_CTentacle_dtor_FUN_005733d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005733d1
    TEST byte ptr [ESP + 0xc],0x4       ; 005733d5
    JNZ 0x0057343d                      ; 005733da
        ;   XREF to: 0057343d (CONDITIONAL_JUMP)  ; LAB_0057343d
    PUSH 0x0                            ; 005733dc
    ADD EBX,0x3a20                      ; 005733de
    PUSH EBX                            ; 005733e4
    CALL core_armour.cpp_FUN_0040f2b0   ; 005733e5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 005733ea
    PUSH 0x0                            ; 005733ed
    SUB EAX,0x9c8                       ; 005733ef
    PUSH EAX                            ; 005733f4
    CALL core_muzzle.cpp_FUN_0059df70   ; 005733f5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 005733fa
    PUSH 0x0                            ; 005733fd
    SUB EAX,0x34c                       ; 005733ff
    PUSH EAX                            ; 00573404
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 00573405
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057340a
    PUSH 0x0                            ; 0057340d
    SUB EAX,0x2a58                      ; 0057340f
    PUSH EAX                            ; 00573414
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 00573415
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057341a
    PUSH 0x1                            ; 0057341d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0057341f
    PUSH EBX                            ; 00573425
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 00573426
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0057342b
    MOV DL,byte ptr [ESP + 0xc]         ; 0057342e
    MOV EBX,EAX                         ; 00573432
    TEST DL,0x2                         ; 00573434
    JNZ 0x00573458                      ; 00573437
        ;   XREF to: 00573458 (CONDITIONAL_JUMP)  ; LAB_00573458
    MOV EAX,EBX                         ; 00573439
    POP EBX                             ; 0057343b
    RET                                 ; 0057343c
    PUSH 0x5fcde0                       ; 0057343d | g_CTentacleTypeInfo
        ;   Label: LAB_0057343d
    PUSH EBX                            ; 00573442
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00573443
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00573448
    PUSH EAX                            ; 0057344b
    CALL crt_unknown.c_FUN_005b7fce     ; 0057344c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00573451
    MOV EAX,EBX                         ; 00573454
    POP EBX                             ; 00573456
    RET                                 ; 00573457
    PUSH EAX                            ; 00573458
        ;   Label: LAB_00573458
    CALL crt_unknown.c_FUN_005b7fdc     ; 00573459
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0057345e
    MOV EAX,EBX                         ; 00573461
    POP EBX                             ; 00573463
    RET                                 ; 00573464

