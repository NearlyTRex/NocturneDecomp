; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightCone * __cdecl core_litecone_cpp_CLightCone_dtor_FUN_004e4270(CLightCone *this_ptr,uint flags)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightConeTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4270
        ;   Label: core_litecone.cpp_CLightCone_dtor_FUN_004e4270
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e4271
    TEST byte ptr [ESP + 0xc],0x4       ; 004e4275
    JNZ 0x004e4296                      ; 004e427a
        ;   XREF to: 004e4296 (CONDITIONAL_JUMP)  ; LAB_004e4296
    PUSH 0x1                            ; 004e427c
    PUSH EBX                            ; 004e427e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 004e427f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e4284
    MOV DL,byte ptr [ESP + 0xc]         ; 004e4287
    MOV EBX,EAX                         ; 004e428b
    TEST DL,0x2                         ; 004e428d
    JNZ 0x004e42b1                      ; 004e4290
        ;   XREF to: 004e42b1 (CONDITIONAL_JUMP)  ; LAB_004e42b1
    MOV EAX,EBX                         ; 004e4292
    POP EBX                             ; 004e4294
    RET                                 ; 004e4295
    PUSH 0x5e2710                       ; 004e4296 | g_CLightConeTypeInfo
        ;   Label: LAB_004e4296
    PUSH EBX                            ; 004e429b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004e429c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e42a1
    PUSH EAX                            ; 004e42a4
    CALL crt_unknown.c_FUN_005a30b6     ; 004e42a5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004e42aa
    MOV EAX,EBX                         ; 004e42ad
    POP EBX                             ; 004e42af
    RET                                 ; 004e42b0
    PUSH EAX                            ; 004e42b1
        ;   Label: LAB_004e42b1
    CALL crt_unknown.c_FUN_005a30c4     ; 004e42b2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004e42b7
    MOV EAX,EBX                         ; 004e42ba
    POP EBX                             ; 004e42bc
    RET                                 ; 004e42bd

