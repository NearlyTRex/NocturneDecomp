; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleportDest * __cdecl core_teleport_cpp_CTeleportDest_dtor_FUN_00569030(CTeleportDest *this_ptr,uint flags)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTeleportDestTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408770
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569030
        ;   Label: core_teleport.cpp_CTeleportDest_dtor_FUN_00569030
    MOV EBX,dword ptr [ESP + 0x8]       ; 00569031
    TEST byte ptr [ESP + 0xc],0x4       ; 00569035
    JNZ 0x00569056                      ; 0056903a
        ;   XREF to: 00569056 (CONDITIONAL_JUMP)  ; LAB_00569056
    PUSH 0x1                            ; 0056903c
    PUSH EBX                            ; 0056903e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408770 ; 0056903f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408770(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00569044
    MOV DL,byte ptr [ESP + 0xc]         ; 00569047
    MOV EBX,EAX                         ; 0056904b
    TEST DL,0x2                         ; 0056904d
    JNZ 0x00569071                      ; 00569050
        ;   XREF to: 00569071 (CONDITIONAL_JUMP)  ; LAB_00569071
    MOV EAX,EBX                         ; 00569052
    POP EBX                             ; 00569054
    RET                                 ; 00569055
    PUSH 0x5e5330                       ; 00569056 | g_CTeleportDestTypeInfo
        ;   Label: LAB_00569056
    PUSH EBX                            ; 0056905b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0056905c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00569061
    PUSH EAX                            ; 00569064
    CALL crt_unknown.c_FUN_005a30b6     ; 00569065
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0056906a
    MOV EAX,EBX                         ; 0056906d
    POP EBX                             ; 0056906f
    RET                                 ; 00569070
    PUSH EAX                            ; 00569071
        ;   Label: LAB_00569071
    CALL crt_unknown.c_FUN_005a30c4     ; 00569072
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00569077
    MOV EAX,EBX                         ; 0056907a
    POP EBX                             ; 0056907c
    RET                                 ; 0056907d

