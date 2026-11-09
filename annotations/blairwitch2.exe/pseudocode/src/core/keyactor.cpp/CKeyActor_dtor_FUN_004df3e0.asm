; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_dtor_FUN_004df3e0(CKeyActor *this_ptr,uint flags)
;
; Parameters:
; CKeyActor *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CKeyActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df3e0
        ;   Label: core_keyactor.cpp_CKeyActor_dtor_FUN_004df3e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004df3e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004df3e5
    JNZ 0x004df406                      ; 004df3ea
        ;   XREF to: 004df406 (CONDITIONAL_JUMP)  ; LAB_004df406
    PUSH 0x1                            ; 004df3ec
    PUSH EBX                            ; 004df3ee
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004df3ef
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004df3f4
    MOV DL,byte ptr [ESP + 0xc]         ; 004df3f7
    MOV EBX,EAX                         ; 004df3fb
    TEST DL,0x2                         ; 004df3fd
    JNZ 0x004df421                      ; 004df400
        ;   XREF to: 004df421 (CONDITIONAL_JUMP)  ; LAB_004df421
    MOV EAX,EBX                         ; 004df402
    POP EBX                             ; 004df404
    RET                                 ; 004df405
    PUSH 0x5f9140                       ; 004df406 | g_CKeyActorTypeInfo
        ;   Label: LAB_004df406
    PUSH EBX                            ; 004df40b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004df40c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004df411
    PUSH EAX                            ; 004df414
    CALL crt_unknown.c_FUN_005b7fce     ; 004df415
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004df41a
    MOV EAX,EBX                         ; 004df41d
    POP EBX                             ; 004df41f
    RET                                 ; 004df420
    PUSH EAX                            ; 004df421
        ;   Label: LAB_004df421
    CALL crt_unknown.c_FUN_005b7fdc     ; 004df422
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004df427
    MOV EAX,EBX                         ; 004df42a
    POP EBX                             ; 004df42c
    RET                                 ; 004df42d

