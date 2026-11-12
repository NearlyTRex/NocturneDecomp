; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleport * __cdecl core_teleport_cpp_CTeleport_dtor_FUN_00595100(CTeleport *this_ptr,uint flags)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTeleportTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595100
        ;   Label: core_teleport.cpp_CTeleport_dtor_FUN_00595100
    MOV EBX,dword ptr [ESP + 0x8]       ; 00595101
    TEST byte ptr [ESP + 0xc],0x4       ; 00595105
    JNZ 0x00595126                      ; 0059510a
        ;   XREF to: 00595126 (CONDITIONAL_JUMP)  ; LAB_00595126
    PUSH 0x1                            ; 0059510c
    PUSH EBX                            ; 0059510e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0059510f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00595114
    MOV DL,byte ptr [ESP + 0xc]         ; 00595117
    MOV EBX,EAX                         ; 0059511b
    TEST DL,0x2                         ; 0059511d
    JNZ 0x00595141                      ; 00595120
        ;   XREF to: 00595141 (CONDITIONAL_JUMP)  ; LAB_00595141
    MOV EAX,EBX                         ; 00595122
    POP EBX                             ; 00595124
    RET                                 ; 00595125
    PUSH 0x606a80                       ; 00595126 | g_CTeleportTypeInfo
        ;   Label: LAB_00595126
    PUSH EBX                            ; 0059512b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0059512c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00595131
    PUSH EAX                            ; 00595134
    CALL crt_unknown.c_FUN_005c0336     ; 00595135
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0059513a
    MOV EAX,EBX                         ; 0059513d
    POP EBX                             ; 0059513f
    RET                                 ; 00595140
    PUSH EAX                            ; 00595141
        ;   Label: LAB_00595141
    CALL crt_unknown.c_FUN_005c0344     ; 00595142
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00595147
    MOV EAX,EBX                         ; 0059514a
    POP EBX                             ; 0059514c
    RET                                 ; 0059514d

