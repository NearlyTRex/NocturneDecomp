; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrip * __cdecl core_drip_cpp_CDrip_dtor_FUN_0046f280(CDrip *this_ptr,uint flags)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDripTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f280
        ;   Label: core_drip.cpp_CDrip_dtor_FUN_0046f280
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046f281
    TEST byte ptr [ESP + 0xc],0x4       ; 0046f285
    JNZ 0x0046f2a6                      ; 0046f28a
        ;   XREF to: 0046f2a6 (CONDITIONAL_JUMP)  ; LAB_0046f2a6
    PUSH 0x1                            ; 0046f28c
    PUSH EBX                            ; 0046f28e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0046f28f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0046f294
    MOV DL,byte ptr [ESP + 0xc]         ; 0046f297
    MOV EBX,EAX                         ; 0046f29b
    TEST DL,0x2                         ; 0046f29d
    JNZ 0x0046f2c1                      ; 0046f2a0
        ;   XREF to: 0046f2c1 (CONDITIONAL_JUMP)  ; LAB_0046f2c1
    MOV EAX,EBX                         ; 0046f2a2
    POP EBX                             ; 0046f2a4
    RET                                 ; 0046f2a5
    PUSH 0x5dee00                       ; 0046f2a6 | g_CDripTypeInfo
        ;   Label: LAB_0046f2a6
    PUSH EBX                            ; 0046f2ab
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0046f2ac
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0046f2b1
    PUSH EAX                            ; 0046f2b4
    CALL crt_unknown.c_FUN_005a30b6     ; 0046f2b5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0046f2ba
    MOV EAX,EBX                         ; 0046f2bd
    POP EBX                             ; 0046f2bf
    RET                                 ; 0046f2c0
    PUSH EAX                            ; 0046f2c1
        ;   Label: LAB_0046f2c1
    CALL crt_unknown.c_FUN_005a30c4     ; 0046f2c2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0046f2c7
    MOV EAX,EBX                         ; 0046f2ca
    POP EBX                             ; 0046f2cc
    RET                                 ; 0046f2cd

