; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrate * __cdecl core_crate_cpp_CCrate_dtor_FUN_004496c0(CCrate *this_ptr,uint flags)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCrateTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004496c0
        ;   Label: core_crate.cpp_CCrate_dtor_FUN_004496c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004496c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004496c5
    JNZ 0x004496e6                      ; 004496ca
        ;   XREF to: 004496e6 (CONDITIONAL_JUMP)  ; LAB_004496e6
    PUSH 0x1                            ; 004496cc
    PUSH EBX                            ; 004496ce
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 004496cf
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004496d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004496d7
    MOV EBX,EAX                         ; 004496db
    TEST DL,0x2                         ; 004496dd
    JNZ 0x00449701                      ; 004496e0
        ;   XREF to: 00449701 (CONDITIONAL_JUMP)  ; LAB_00449701
    MOV EAX,EBX                         ; 004496e2
    POP EBX                             ; 004496e4
    RET                                 ; 004496e5
    PUSH 0x5fe330                       ; 004496e6 | g_CCrateTypeInfo
        ;   Label: LAB_004496e6
    PUSH EBX                            ; 004496eb
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004496ec
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004496f1
    PUSH EAX                            ; 004496f4
    CALL crt_unknown.c_FUN_005c0336     ; 004496f5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004496fa
    MOV EAX,EBX                         ; 004496fd
    POP EBX                             ; 004496ff
    RET                                 ; 00449700
    PUSH EAX                            ; 00449701
        ;   Label: LAB_00449701
    CALL crt_unknown.c_FUN_005c0344     ; 00449702
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00449707
    MOV EAX,EBX                         ; 0044970a
    POP EBX                             ; 0044970c
    RET                                 ; 0044970d

