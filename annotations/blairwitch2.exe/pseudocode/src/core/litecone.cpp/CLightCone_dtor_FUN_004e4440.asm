; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004e4440(CLightCone *this_ptr,uint flags)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightConeTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4440
        ;   Label: core_litecone.cpp_CLightCone_dtor_FUN_004e4440
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e4441
    TEST byte ptr [ESP + 0xc],0x4       ; 004e4445
    JNZ 0x004e4466                      ; 004e444a
        ;   XREF to: 004e4466 (CONDITIONAL_JUMP)  ; LAB_004e4466
    PUSH 0x1                            ; 004e444c
    PUSH EBX                            ; 004e444e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004e444f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e4454
    MOV DL,byte ptr [ESP + 0xc]         ; 004e4457
    MOV EBX,EAX                         ; 004e445b
    TEST DL,0x2                         ; 004e445d
    JNZ 0x004e4481                      ; 004e4460
        ;   XREF to: 004e4481 (CONDITIONAL_JUMP)  ; LAB_004e4481
    MOV EAX,EBX                         ; 004e4462
    POP EBX                             ; 004e4464
    RET                                 ; 004e4465
    PUSH 0x5f9830                       ; 004e4466 | g_CLightConeTypeInfo
        ;   Label: LAB_004e4466
    PUSH EBX                            ; 004e446b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004e446c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 004e4471
    PUSH EAX                            ; 004e4474
    CALL crt_unknown.c_FUN_005b7fce     ; 004e4475
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004e447a
    MOV EAX,EBX                         ; 004e447d
    POP EBX                             ; 004e447f
    RET                                 ; 004e4480
    PUSH EAX                            ; 004e4481
        ;   Label: LAB_004e4481
    CALL crt_unknown.c_FUN_005b7fdc     ; 004e4482
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004e4487
    MOV EAX,EBX                         ; 004e448a
    POP EBX                             ; 004e448c
    RET                                 ; 004e448d

