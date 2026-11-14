; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTempleStone * __cdecl core_stone_cpp_CTempleStone_dtor_FUN_00584f70(CTempleStone *this_ptr,uint flags)
;
; Parameters:
; CTempleStone *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CTempleStoneTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_box.cpp_CBox_dtor_FUN_0041dab0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584f70
        ;   Label: core_stone.cpp_CTempleStone_dtor_FUN_00584f70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00584f71
    TEST byte ptr [ESP + 0xc],0x4       ; 00584f75
    JNZ 0x00584fad                      ; 00584f7a
        ;   XREF to: 00584fad (CONDITIONAL_JUMP)  ; LAB_00584fad
    PUSH 0x0                            ; 00584f7c
    ADD EBX,0x394                       ; 00584f7e
    PUSH EBX                            ; 00584f84
    CALL core_box.cpp_CBox_dtor_FUN_0041dab0 ; 00584f85
        ;   XREF to: 0041dab0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041dab0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00584f8a
    PUSH 0x1                            ; 00584f8d
    LEA EBX,[EAX + 0xfffffc6c]          ; 00584f8f
    PUSH EBX                            ; 00584f95
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 00584f96
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00584f9b
    MOV DL,byte ptr [ESP + 0xc]         ; 00584f9e
    MOV EBX,EAX                         ; 00584fa2
    TEST DL,0x2                         ; 00584fa4
    JNZ 0x00584fc8                      ; 00584fa7
        ;   XREF to: 00584fc8 (CONDITIONAL_JUMP)  ; LAB_00584fc8
    MOV EAX,EBX                         ; 00584fa9
    POP EBX                             ; 00584fab
    RET                                 ; 00584fac
    PUSH 0x606030                       ; 00584fad | g_CTempleStoneTypeInfo
        ;   Label: LAB_00584fad
    PUSH EBX                            ; 00584fb2
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00584fb3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00584fb8
    PUSH EAX                            ; 00584fbb
    CALL crt_unknown.c_FUN_005c0336     ; 00584fbc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00584fc1
    MOV EAX,EBX                         ; 00584fc4
    POP EBX                             ; 00584fc6
    RET                                 ; 00584fc7
    PUSH EAX                            ; 00584fc8
        ;   Label: LAB_00584fc8
    CALL crt_unknown.c_FUN_005c0344     ; 00584fc9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00584fce
    MOV EAX,EBX                         ; 00584fd1
    POP EBX                             ; 00584fd3
    RET                                 ; 00584fd4

