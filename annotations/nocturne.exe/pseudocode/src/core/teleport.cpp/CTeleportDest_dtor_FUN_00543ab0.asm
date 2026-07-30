; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * core_teleport_cpp_CTeleportDest_dtor_FUN_00543ab0(CDemonActor *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CTeleportDestTypeInfo_005a30c0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543ab0
        ;   Label: core_teleport.cpp_CTeleportDest_dtor_FUN_00543ab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00543ab1
    TEST byte ptr [ESP + 0xc],0x4       ; 00543ab5
    JNZ 0x00543ad6                      ; 00543aba
        ;   XREF to: 00543ad6 (CONDITIONAL_JUMP)  ; LAB_00543ad6
    PUSH 0x1                            ; 00543abc
    PUSH EBX                            ; 00543abe
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00543abf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00543ac4
    MOV DL,byte ptr [ESP + 0xc]         ; 00543ac7
    MOV EBX,EAX                         ; 00543acb
    TEST DL,0x2                         ; 00543acd
    JNZ 0x00543af1                      ; 00543ad0
        ;   XREF to: 00543af1 (CONDITIONAL_JUMP)  ; LAB_00543af1
    MOV EAX,EBX                         ; 00543ad2
    POP EBX                             ; 00543ad4
    RET                                 ; 00543ad5
    PUSH 0x5a30c0                       ; 00543ad6 | g_CTeleportDestTypeInfo_005a30c0
        ;   Label: LAB_00543ad6
    PUSH EBX                            ; 00543adb
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00543adc
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00543ae1
    PUSH EAX                            ; 00543ae4
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00543ae5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00543aea
    MOV EAX,EBX                         ; 00543aed
    POP EBX                             ; 00543aef
    RET                                 ; 00543af0
    PUSH EAX                            ; 00543af1
        ;   Label: LAB_00543af1
    CALL crt_unknown.c_FUN_00564494     ; 00543af2
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00543af7
    MOV EAX,EBX                         ; 00543afa
    POP EBX                             ; 00543afc
    RET                                 ; 00543afd

