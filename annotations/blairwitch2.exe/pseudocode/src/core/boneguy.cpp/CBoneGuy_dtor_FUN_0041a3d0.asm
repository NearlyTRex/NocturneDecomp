; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoneGuy * core_boneguy_cpp_CBoneGuy_dtor_FUN_0041a3d0(CBoneGuy *this_ptr,uint flags)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoneGuyTypeInfo
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

    PUSH EBX                            ; 0041a3d0
        ;   Label: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a3d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041a3d1
    TEST byte ptr [ESP + 0xc],0x4       ; 0041a3d5
    JNZ 0x0041a43d                      ; 0041a3da
        ;   XREF to: 0041a43d (CONDITIONAL_JUMP)  ; LAB_0041a43d
    PUSH 0x0                            ; 0041a3dc
    ADD EBX,0x3a20                      ; 0041a3de
    PUSH EBX                            ; 0041a3e4
    CALL core_armour.cpp_FUN_0040f2b0   ; 0041a3e5
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040f2b0()
    ADD ESP,0x8                         ; 0041a3ea
    PUSH 0x0                            ; 0041a3ed
    SUB EAX,0x9c8                       ; 0041a3ef
    PUSH EAX                            ; 0041a3f4
    CALL core_muzzle.cpp_FUN_0059df70   ; 0041a3f5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059df70()
    ADD ESP,0x8                         ; 0041a3fa
    PUSH 0x0                            ; 0041a3fd
    SUB EAX,0x34c                       ; 0041a3ff
    PUSH EAX                            ; 0041a404
    CALL core_cloth.cpp_CClothList_dtor_FUN_005b1480 ; 0041a405
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_005b1480(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a40a
    PUSH 0x0                            ; 0041a40d
    SUB EAX,0x2a58                      ; 0041a40f
    PUSH EAX                            ; 0041a414
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 ; 0041a415
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a41a
    PUSH 0x1                            ; 0041a41d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0041a41f
    PUSH EBX                            ; 0041a425
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0041a426
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041a42b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041a42e
    MOV EBX,EAX                         ; 0041a432
    TEST DL,0x2                         ; 0041a434
    JNZ 0x0041a458                      ; 0041a437
        ;   XREF to: 0041a458 (CONDITIONAL_JUMP)  ; LAB_0041a458
    MOV EAX,EBX                         ; 0041a439
    POP EBX                             ; 0041a43b
    RET                                 ; 0041a43c
    PUSH 0x5f39c0                       ; 0041a43d | g_CBoneGuyTypeInfo
        ;   Label: LAB_0041a43d
    PUSH EBX                            ; 0041a442
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0041a443
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0041a448
    PUSH EAX                            ; 0041a44b
    CALL crt_unknown.c_FUN_005b7fce     ; 0041a44c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0041a451
    MOV EAX,EBX                         ; 0041a454
    POP EBX                             ; 0041a456
    RET                                 ; 0041a457
    PUSH EAX                            ; 0041a458
        ;   Label: LAB_0041a458
    CALL crt_unknown.c_FUN_005b7fdc     ; 0041a459
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0041a45e
    MOV EAX,EBX                         ; 0041a461
    POP EBX                             ; 0041a463
    RET                                 ; 0041a464

