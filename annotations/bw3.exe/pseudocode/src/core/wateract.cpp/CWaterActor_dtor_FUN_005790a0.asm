; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * core_wateract_cpp_CWaterActor_dtor_FUN_005790a0(CWaterActor *this_ptr,uint flags)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CWaterActorTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005790a0
        ;   Label: core_wateract.cpp_CWaterActor_dtor_FUN_005790a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005790a1
    TEST byte ptr [ESP + 0xc],0x4       ; 005790a5
    JNZ 0x005790c6                      ; 005790aa
        ;   XREF to: 005790c6 (CONDITIONAL_JUMP)  ; LAB_005790c6
    PUSH 0x1                            ; 005790ac
    PUSH EBX                            ; 005790ae
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 005790af
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 005790b4
    MOV DL,byte ptr [ESP + 0xc]         ; 005790b7
    MOV EBX,EAX                         ; 005790bb
    TEST DL,0x2                         ; 005790bd
    JNZ 0x005790e1                      ; 005790c0
        ;   XREF to: 005790e1 (CONDITIONAL_JUMP)  ; LAB_005790e1
    MOV EAX,EBX                         ; 005790c2
    POP EBX                             ; 005790c4
    RET                                 ; 005790c5
    PUSH 0x5e60e0                       ; 005790c6 | g_CWaterActorTypeInfo
        ;   Label: LAB_005790c6
    PUSH EBX                            ; 005790cb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 005790cc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 005790d1
    PUSH EAX                            ; 005790d4
    CALL crt_unknown.c_FUN_005a30b6     ; 005790d5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 005790da
    MOV EAX,EBX                         ; 005790dd
    POP EBX                             ; 005790df
    RET                                 ; 005790e0
    PUSH EAX                            ; 005790e1
        ;   Label: LAB_005790e1
    CALL crt_unknown.c_FUN_005a30c4     ; 005790e2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 005790e7
    MOV EAX,EBX                         ; 005790ea
    POP EBX                             ; 005790ec
    RET                                 ; 005790ed

