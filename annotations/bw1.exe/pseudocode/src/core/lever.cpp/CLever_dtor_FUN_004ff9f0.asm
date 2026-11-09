; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLever * __cdecl core_lever_cpp_CLever_dtor_FUN_004ff9f0(CLever *this_ptr,uint flags)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLeverTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff9f0
        ;   Label: core_lever.cpp_CLever_dtor_FUN_004ff9f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ff9f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004ff9f5
    JNZ 0x004ffa16                      ; 004ff9fa
        ;   XREF to: 004ffa16 (CONDITIONAL_JUMP)  ; LAB_004ffa16
    PUSH 0x1                            ; 004ff9fc
    PUSH EBX                            ; 004ff9fe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004ff9ff
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004ffa04
    MOV DL,byte ptr [ESP + 0xc]         ; 004ffa07
    MOV EBX,EAX                         ; 004ffa0b
    TEST DL,0x2                         ; 004ffa0d
    JNZ 0x004ffa31                      ; 004ffa10
        ;   XREF to: 004ffa31 (CONDITIONAL_JUMP)  ; LAB_004ffa31
    MOV EAX,EBX                         ; 004ffa12
    POP EBX                             ; 004ffa14
    RET                                 ; 004ffa15
    PUSH 0x602fd0                       ; 004ffa16 | g_CLeverTypeInfo
        ;   Label: LAB_004ffa16
    PUSH EBX                            ; 004ffa1b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004ffa1c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004ffa21
    PUSH EAX                            ; 004ffa24
    CALL crt_unknown.c_FUN_005c0336     ; 004ffa25
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004ffa2a
    MOV EAX,EBX                         ; 004ffa2d
    POP EBX                             ; 004ffa2f
    RET                                 ; 004ffa30
    PUSH EAX                            ; 004ffa31
        ;   Label: LAB_004ffa31
    CALL crt_unknown.c_FUN_005c0344     ; 004ffa32
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004ffa37
    MOV EAX,EBX                         ; 004ffa3a
    POP EBX                             ; 004ffa3c
    RET                                 ; 004ffa3d

