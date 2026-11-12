; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_00446280(CCrate *this_ptr,uint flags)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCrateTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446280
        ;   Label: core_crate.cpp_CCrate_dtor_FUN_00446280
    MOV EBX,dword ptr [ESP + 0x8]       ; 00446281
    TEST byte ptr [ESP + 0xc],0x4       ; 00446285
    JNZ 0x004462a6                      ; 0044628a
        ;   XREF to: 004462a6 (CONDITIONAL_JUMP)  ; LAB_004462a6
    PUSH 0x1                            ; 0044628c
    PUSH EBX                            ; 0044628e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0044628f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00446294
    MOV DL,byte ptr [ESP + 0xc]         ; 00446297
    MOV EBX,EAX                         ; 0044629b
    TEST DL,0x2                         ; 0044629d
    JNZ 0x004462c1                      ; 004462a0
        ;   XREF to: 004462c1 (CONDITIONAL_JUMP)  ; LAB_004462c1
    MOV EAX,EBX                         ; 004462a2
    POP EBX                             ; 004462a4
    RET                                 ; 004462a5
    PUSH 0x5dde30                       ; 004462a6 | g_CCrateTypeInfo
        ;   Label: LAB_004462a6
    PUSH EBX                            ; 004462ab
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004462ac
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004462b1
    PUSH EAX                            ; 004462b4
    CALL crt_unknown.c_FUN_005a30b6     ; 004462b5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004462ba
    MOV EAX,EBX                         ; 004462bd
    POP EBX                             ; 004462bf
    RET                                 ; 004462c0
    PUSH EAX                            ; 004462c1
        ;   Label: LAB_004462c1
    CALL crt_unknown.c_FUN_005a30c4     ; 004462c2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004462c7
    MOV EAX,EBX                         ; 004462ca
    POP EBX                             ; 004462cc
    RET                                 ; 004462cd

