; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * core_tentacle_cpp_CTentacle_dtor_FUN_00596000(CTentacle *this_ptr,uint flags)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTentacleTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_cloth.cpp_FUN_00441ca0
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   unkafter_armour.cpp_FUN_0040ee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00596000
        ;   Label: core_tentacle.cpp_CTentacle_dtor_FUN_00596000
    MOV EBX,dword ptr [ESP + 0x8]       ; 00596001
    TEST byte ptr [ESP + 0xc],0x4       ; 00596005
    JNZ 0x0059605d                      ; 0059600a
        ;   XREF to: 0059605d (CONDITIONAL_JUMP)  ; LAB_0059605d
    PUSH 0x0                            ; 0059600c
    ADD EBX,0x35dc                      ; 0059600e
    PUSH EBX                            ; 00596014
    CALL unkafter_armour.cpp_FUN_0040ee30 ; 00596015
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0059601a
    PUSH 0x0                            ; 0059601d
    SUB EAX,0x93c                       ; 0059601f
    PUSH EAX                            ; 00596024
    CALL core_cloth.cpp_FUN_00441ca0    ; 00596025
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059602a
    PUSH 0x0                            ; 0059602d
    SUB EAX,0x2b48                      ; 0059602f
    PUSH EAX                            ; 00596034
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 00596035
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059603a
    PUSH 0x1                            ; 0059603d
    LEA EBX,[EAX + 0xfffffea8]          ; 0059603f
    PUSH EBX                            ; 00596045
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00596046
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0059604b
    MOV DL,byte ptr [ESP + 0xc]         ; 0059604e
    MOV EBX,EAX                         ; 00596052
    TEST DL,0x2                         ; 00596054
    JNZ 0x00596078                      ; 00596057
        ;   XREF to: 00596078 (CONDITIONAL_JUMP)  ; LAB_00596078
    MOV EAX,EBX                         ; 00596059
    POP EBX                             ; 0059605b
    RET                                 ; 0059605c
    PUSH 0x606c30                       ; 0059605d | g_CTentacleTypeInfo
        ;   Label: LAB_0059605d
    PUSH EBX                            ; 00596062
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00596063
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 00596068
    PUSH EAX                            ; 0059606b
    CALL crt_unknown.c_FUN_005c0336     ; 0059606c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00596071
    MOV EAX,EBX                         ; 00596074
    POP EBX                             ; 00596076
    RET                                 ; 00596077
    PUSH EAX                            ; 00596078
        ;   Label: LAB_00596078
    CALL crt_unknown.c_FUN_005c0344     ; 00596079
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0059607e
    MOV EAX,EBX                         ; 00596081
    POP EBX                             ; 00596083
    RET                                 ; 00596084

