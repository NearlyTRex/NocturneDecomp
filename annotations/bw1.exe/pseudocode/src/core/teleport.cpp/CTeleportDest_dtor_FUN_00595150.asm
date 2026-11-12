; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00595150(CTeleportDest *this_ptr,uint flags)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTeleportDestTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595150
        ;   Label: core_teleport.cpp_CTeleportDest_dtor_FUN_00595150
    MOV EBX,dword ptr [ESP + 0x8]       ; 00595151
    TEST byte ptr [ESP + 0xc],0x4       ; 00595155
    JNZ 0x00595176                      ; 0059515a
        ;   XREF to: 00595176 (CONDITIONAL_JUMP)  ; LAB_00595176
    PUSH 0x1                            ; 0059515c
    PUSH EBX                            ; 0059515e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0059515f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00595164
    MOV DL,byte ptr [ESP + 0xc]         ; 00595167
    MOV EBX,EAX                         ; 0059516b
    TEST DL,0x2                         ; 0059516d
    JNZ 0x00595191                      ; 00595170
        ;   XREF to: 00595191 (CONDITIONAL_JUMP)  ; LAB_00595191
    MOV EAX,EBX                         ; 00595172
    POP EBX                             ; 00595174
    RET                                 ; 00595175
    PUSH 0x606aa0                       ; 00595176 | g_CTeleportDestTypeInfo
        ;   Label: LAB_00595176
    PUSH EBX                            ; 0059517b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0059517c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00595181
    PUSH EAX                            ; 00595184
    CALL crt_unknown.c_FUN_005c0336     ; 00595185
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0059518a
    MOV EAX,EBX                         ; 0059518d
    POP EBX                             ; 0059518f
    RET                                 ; 00595190
    PUSH EAX                            ; 00595191
        ;   Label: LAB_00595191
    CALL crt_unknown.c_FUN_005c0344     ; 00595192
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00595197
    MOV EAX,EBX                         ; 0059519a
    POP EBX                             ; 0059519c
    RET                                 ; 0059519d

