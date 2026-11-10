; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGargoyle * core_gargoyle_cpp_CGargoyle_dtor_FUN_004dd9d0(CGargoyle *this_ptr,uint flags)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGargoyleTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_armour.cpp_FUN_0040ee30
;   core_cloth.cpp_CClothList_dtor_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd9d0
        ;   Label: core_gargoyle.cpp_CGargoyle_dtor_FUN_004dd9d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dd9d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004dd9d5
    JNZ 0x004dda2d                      ; 004dd9da
        ;   XREF to: 004dda2d (CONDITIONAL_JUMP)  ; LAB_004dda2d
    PUSH 0x0                            ; 004dd9dc
    ADD EBX,0x35dc                      ; 004dd9de
    PUSH EBX                            ; 004dd9e4
    CALL core_armour.cpp_FUN_0040ee30   ; 004dd9e5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined core_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 004dd9ea
    PUSH 0x0                            ; 004dd9ed
    SUB EAX,0x93c                       ; 004dd9ef
    PUSH EAX                            ; 004dd9f4
    CALL core_cloth.cpp_CClothList_dtor_FUN_00441ca0 ; 004dd9f5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_dtor_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dd9fa
    PUSH 0x0                            ; 004dd9fd
    SUB EAX,0x2b48                      ; 004dd9ff
    PUSH EAX                            ; 004dda04
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004dda05
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dda0a
    PUSH 0x1                            ; 004dda0d
    LEA EBX,[EAX + 0xfffffea8]          ; 004dda0f
    PUSH EBX                            ; 004dda15
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004dda16
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004dda1b
    MOV DL,byte ptr [ESP + 0xc]         ; 004dda1e
    MOV EBX,EAX                         ; 004dda22
    TEST DL,0x2                         ; 004dda24
    JNZ 0x004dda48                      ; 004dda27
        ;   XREF to: 004dda48 (CONDITIONAL_JUMP)  ; LAB_004dda48
    MOV EAX,EBX                         ; 004dda29
    POP EBX                             ; 004dda2b
    RET                                 ; 004dda2c
    PUSH 0x601160                       ; 004dda2d | g_CGargoyleTypeInfo
        ;   Label: LAB_004dda2d
    PUSH EBX                            ; 004dda32
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004dda33
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004dda38
    PUSH EAX                            ; 004dda3b
    CALL crt_unknown.c_FUN_005c0336     ; 004dda3c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004dda41
    MOV EAX,EBX                         ; 004dda44
    POP EBX                             ; 004dda46
    RET                                 ; 004dda47
    PUSH EAX                            ; 004dda48
        ;   Label: LAB_004dda48
    CALL crt_unknown.c_FUN_005c0344     ; 004dda49
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004dda4e
    MOV EAX,EBX                         ; 004dda51
    POP EBX                             ; 004dda53
    RET                                 ; 004dda54

