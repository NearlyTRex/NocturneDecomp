; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAmmoBullet * core_ammo_cpp_CAmmoBullet_dtor_FUN_0040e420(CAmmoBullet *this_ptr,uint flags)
;
; Parameters:
; CAmmoBullet *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CAmmoBulletTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e420
        ;   Label: core_ammo.cpp_CAmmoBullet_dtor_FUN_0040e420
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e421
    TEST byte ptr [ESP + 0xc],0x4       ; 0040e425
    JNZ 0x0040e446                      ; 0040e42a
        ;   XREF to: 0040e446 (CONDITIONAL_JUMP)  ; LAB_0040e446
    PUSH 0x1                            ; 0040e42c
    PUSH EBX                            ; 0040e42e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0040e42f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0040e434
    MOV DL,byte ptr [ESP + 0xc]         ; 0040e437
    MOV EBX,EAX                         ; 0040e43b
    TEST DL,0x2                         ; 0040e43d
    JNZ 0x0040e461                      ; 0040e440
        ;   XREF to: 0040e461 (CONDITIONAL_JUMP)  ; LAB_0040e461
    MOV EAX,EBX                         ; 0040e442
    POP EBX                             ; 0040e444
    RET                                 ; 0040e445
    PUSH 0x5db4b0                       ; 0040e446 | g_CAmmoBulletTypeInfo
        ;   Label: LAB_0040e446
    PUSH EBX                            ; 0040e44b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0040e44c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0040e451
    PUSH EAX                            ; 0040e454
    CALL crt_unknown.c_FUN_005a30b6     ; 0040e455
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0040e45a
    MOV EAX,EBX                         ; 0040e45d
    POP EBX                             ; 0040e45f
    RET                                 ; 0040e460
    PUSH EAX                            ; 0040e461
        ;   Label: LAB_0040e461
    CALL crt_unknown.c_FUN_005a30c4     ; 0040e462
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0040e467
    MOV EAX,EBX                         ; 0040e46a
    POP EBX                             ; 0040e46c
    RET                                 ; 0040e46d

