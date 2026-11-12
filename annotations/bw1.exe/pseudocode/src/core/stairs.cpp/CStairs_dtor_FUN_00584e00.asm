; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * core_stairs_cpp_CStairs_dtor_FUN_00584e00(CStairs *this_ptr,uint flags)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStairsTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584e00
        ;   Label: core_stairs.cpp_CStairs_dtor_FUN_00584e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00584e01
    TEST byte ptr [ESP + 0xc],0x4       ; 00584e05
    JNZ 0x00584e26                      ; 00584e0a
        ;   XREF to: 00584e26 (CONDITIONAL_JUMP)  ; LAB_00584e26
    PUSH 0x1                            ; 00584e0c
    PUSH EBX                            ; 00584e0e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00584e0f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00584e14
    MOV DL,byte ptr [ESP + 0xc]         ; 00584e17
    MOV EBX,EAX                         ; 00584e1b
    TEST DL,0x2                         ; 00584e1d
    JNZ 0x00584e41                      ; 00584e20
        ;   XREF to: 00584e41 (CONDITIONAL_JUMP)  ; LAB_00584e41
    MOV EAX,EBX                         ; 00584e22
    POP EBX                             ; 00584e24
    RET                                 ; 00584e25
    PUSH 0x605f10                       ; 00584e26 | g_CStairsTypeInfo
        ;   Label: LAB_00584e26
    PUSH EBX                            ; 00584e2b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00584e2c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00584e31
    PUSH EAX                            ; 00584e34
    CALL crt_unknown.c_FUN_005c0336     ; 00584e35
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00584e3a
    MOV EAX,EBX                         ; 00584e3d
    POP EBX                             ; 00584e3f
    RET                                 ; 00584e40
    PUSH EAX                            ; 00584e41
        ;   Label: LAB_00584e41
    CALL crt_unknown.c_FUN_005c0344     ; 00584e42
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00584e47
    MOV EAX,EBX                         ; 00584e4a
    POP EBX                             ; 00584e4c
    RET                                 ; 00584e4d

