; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieDog * core_dog_cpp_CZombieDog_dtor_FUN_00477180(CZombieDog *this_ptr,uint flags)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CZombieDogTypeInfo
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

    PUSH EBX                            ; 00477180
        ;   Label: core_dog.cpp_CZombieDog_dtor_FUN_00477180
    MOV EBX,dword ptr [ESP + 0x8]       ; 00477181
    TEST byte ptr [ESP + 0xc],0x4       ; 00477185
    JNZ 0x004771dd                      ; 0047718a
        ;   XREF to: 004771dd (CONDITIONAL_JUMP)  ; LAB_004771dd
    PUSH 0x0                            ; 0047718c
    ADD EBX,0x35dc                      ; 0047718e
    PUSH EBX                            ; 00477194
    CALL unkafter_armour.cpp_FUN_0040ee30 ; 00477195
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined unkafter_armour.cpp_FUN_0040ee30()
    ADD ESP,0x8                         ; 0047719a
    PUSH 0x0                            ; 0047719d
    SUB EAX,0x93c                       ; 0047719f
    PUSH EAX                            ; 004771a4
    CALL core_cloth.cpp_FUN_00441ca0    ; 004771a5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_FUN_00441ca0(CClothList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004771aa
    PUSH 0x0                            ; 004771ad
    SUB EAX,0x2b48                      ; 004771af
    PUSH EAX                            ; 004771b4
    CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 ; 004771b5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0(CDeformableModelInstance * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004771ba
    PUSH 0x1                            ; 004771bd
    LEA EBX,[EAX + 0xfffffea8]          ; 004771bf
    PUSH EBX                            ; 004771c5
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004771c6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004771cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004771ce
    MOV EBX,EAX                         ; 004771d2
    TEST DL,0x2                         ; 004771d4
    JNZ 0x004771f8                      ; 004771d7
        ;   XREF to: 004771f8 (CONDITIONAL_JUMP)  ; LAB_004771f8
    MOV EAX,EBX                         ; 004771d9
    POP EBX                             ; 004771db
    RET                                 ; 004771dc
    PUSH 0x5feff0                       ; 004771dd | g_CZombieDogTypeInfo
        ;   Label: LAB_004771dd
    PUSH EBX                            ; 004771e2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004771e3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004771e8
    PUSH EAX                            ; 004771eb
    CALL crt_unknown.c_FUN_005c0336     ; 004771ec
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004771f1
    MOV EAX,EBX                         ; 004771f4
    POP EBX                             ; 004771f6
    RET                                 ; 004771f7
    PUSH EAX                            ; 004771f8
        ;   Label: LAB_004771f8
    CALL crt_unknown.c_FUN_005c0344     ; 004771f9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004771fe
    MOV EAX,EBX                         ; 00477201
    POP EBX                             ; 00477203
    RET                                 ; 00477204

